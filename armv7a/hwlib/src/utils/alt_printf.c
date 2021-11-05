/******************************************************************************
*
* Copyright 2017 Altera Corporation. All Rights Reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* 1. Redistributions of source code must retain the above copyright notice,
* this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright notice,
* this list of conditions and the following disclaimer in the documentation
* and/or other materials provided with the distribution.
*
* 3. Neither the name of the copyright holder nor the names of its contributors
* may be used to endorse or promote products derived from this software without
* specific prior written permission.
* 
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
* ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
* CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.
*
******************************************************************************/

#ifdef __cplusplus
#include <cstddef>
#include <cstdbool>
#include <cstdint>
#else   /* __cplusplus */
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#endif  /* __cplusplus */

#include "alt_printf.h"

__attribute__((weak)) FILE *term0 = NULL;
__attribute__((weak)) FILE *term1 = NULL;

int puts(const char *str)
{
    return alt_printf("%s",str);
}

size_t fwrite(const void *ptr, size_t size, size_t count, FILE *stream)
{
    ALT_PRINTF_MEM_INFO_t *pinfo = (ALT_PRINTF_MEM_INFO_t *)stream;
    int index = 0;
      
    while (index < (size * count))
    {
       pinfo->putc_function(*(char *)((char *)ptr + index),stream);
       index++;
    }       

    return size*count;
}

/** @Function Description: Writes a character to memory buffer specified in info structure
  * @API Type:              Internal
  * @param pchar            character to be written
  * @param info             ALT_PRINTF_MEM_INFO_t structure
  * @return                 None 
  */
static void mem_putc(char pchar, FILE *info)
{
    ALT_PRINTF_MEM_INFO_t *pmem = ( ALT_PRINTF_MEM_INFO_t *)info;
  
    if ((pmem->toptr < pmem->maxptr) || (pmem->maxptr==NULL))
    {
      *(pmem->toptr) = pchar;
      pmem->toptr++;
    } 
    
    if ((pmem->toptr == pmem->maxptr) && (pmem->maxptr!=NULL))
    {
      *(pmem->toptr)=0;
    }
}
  
int alt_snprintf(char *to, size_t n, const char *format, ...)
{
    ALT_PRINTF_MEM_INFO_t pmem;
    int rc;
   
    va_list args;
    va_start( args, format );    
    
    pmem.toptr=to;
    pmem.maxptr=(to + n - 1);
    pmem.putc_function=mem_putc;

    rc=alt_vfprintf((FILE *)&pmem, format, args);
    va_end(args);
     
    return rc;
}

int alt_sprintf(char *to, const char *format, ...)
{
    ALT_PRINTF_MEM_INFO_t pmem;
    int rc;
   
    va_list args;
    va_start( args, format );    
    
    pmem.toptr=to;
    pmem.maxptr=NULL;   
    pmem.putc_function=mem_putc;

    rc=alt_vfprintf((FILE *)&pmem, format, args);
    va_end(args);

    return rc;
}

#ifndef PRINTF_HOST
extern FILE *DEFAULT_TERM;
int alt_printf(const char *format, ...)
{
    int rc;
 
    va_list args;
    va_start( args, format );
    rc=alt_vfprintf(DEFAULT_TERM, format, args);
    va_end(args);
 
    return rc;
}
#endif

int fprintf(FILE *stream, const char *format, ...)
{
    int rc;
 
    va_list args;
    va_start( args, format );
    rc=alt_vfprintf(stream, format, args);
    va_end(args);

    return rc;
}

/** @Function Description: Writes a character to function specified in pinfo structure
    * @API Type:              Internal
    * @param c                character to be written
    * @param pinfo            ALT_PRINTF_MEM_INFO_t structure
    * @param count            var to keep track of characters written
    * @return                 None 
    */
static void cput(ALT_PRINTF_MEM_INFO_t *pinfo, int * count, char c)
{
    if (pinfo!=NULL) 
    {
      pinfo->putc_function(c,(FILE *)pinfo);
    }
    if (c!=0) *count+=1;
}

/** @Function Description: returns the next character from the format string and increments index
    * @API Type:              Internal
    * @param index            index of character to return
    * @return                 next character from format string 
    */
static char nextchar(const char *format,int * index)
{
    char c;
    
    c  = *(format + *index);
    *index+=1;
    
    return c;
}

/** @Function Description: gets the decimal value in format stg pointed to by index
    * @API Type:              Internal
    * @param index            index within format string containing value
    * @param val              decimal value returned
    * @param c                current character pointed to be index
    * @return                 next character after decimal string 
    */
static char getdec(const char *format,int * index, int * val, char c)
{ 
   *val=0;
   while ((c >= '0') && (c <='9'))
   {
     *val=*val * 10 + (c - '0');
     c = nextchar(format,index);
   }  
   
   return c;
}

#ifdef ALT_PRINTF_NO_DIVIDE
/** @Function Description: Hex(Integer) to BCD(Binary Coded Decimal) to Ascii
    * @API Type:              Internal
    * @param val              int64_t value to convert to ascii string
    * @param stg              string to be returned
    * @param isint            if 1 indicates val is signed, otherwise unsigned
    * @return                 number of characters in string 
    */
static int int_to_asc(int64_t val,char * stg,int isint)
{
    uint64_t bcd[3],carry[3];
    int i, j, k,count=0,count2=0,startcount=0;
  
    if (isint && (val < 0)) 
    {
      val = ~val + 1;
    }
   
    bcd[0]=(uint64_t)val;
    bcd[1]=bcd[2]=(uint64_t)0;
    /*shift the bits in the BCD number left one by one*/
    for (i=0;i<64;i++)
    {
      for (j=0;j<3;j++)
      {
        carry[j]=bcd[j] >> 63;
        
        bcd[j] <<= 1;
        /*for speed do not do the next part if the value is 0*/
        if ((j > 0) && (bcd[j] || carry[j-1])) 
        {
          /*add in the carry from the next lower bcd val*/
          bcd[j] |= carry[j - 1];

          /*if a (hex) digit is over 4, add 3 to it*/
          if (i != 63)
          {
            for (k = 0; k<64; k += 4) 
            {
              if ((bcd[j] & ((uint64_t)0xf << k)) > ((uint64_t)4 << k)) 
              {
                bcd[j] += ((uint64_t)3 << k);
              }
            }
          }
        }
      }
    }
     
    /*now there is a BCD value in B[2]B[1].  Change it to ascii excluding leading 0's. */
    while (count2 < 32)
    {
      stg[count] = '0' + ((bcd[2 - (count2>=16)] >> (32+28)) & 0xf);
      bcd[2 - (count2>=16)] <<= 4;
      if ((stg[count]!='0') || startcount)
      {
        count+=1; 
        startcount=1;
      }
      count2++;
    }    
    stg[count]=0;
          
    /*return the count not including the terminating 0          */
    return count;
}

#else
/** @Function Description: Hex(Integer) to Ascii
    * @API Type:              Internal
    * @param val              int64_t value to convert to ascii string
    * @param stg              string to be returned. must be at least 21 bytes.
    * @param isint            if 1 indicates val is signed, otherwise unsigned
    * @return                 number of characters in string 
    */
static int int_to_asc(int64_t val,char * stg,int isint)
{
    int count=20,i=0;
    
    if (isint && (val < 0)) 
    {
      val = ~val + 1;
    }
    
    while ((uint64_t)val > 0)
    {
      stg[count]='0' + ((uint64_t)val%10);
      val=(uint64_t)val/10;
      count--;
    }
    for (i=0;i<(20-count);i++)
    {
      stg[i]=stg[ count + 1 + i];
    }
    stg[i]=0;
    
    return (20-count);
}     
#endif

/** @Function Description: Hex to to Ascii
    * @API Type:              Internal
    * @param val              int64_t value to convert to ascii string
    * @param stg              string to be returned
    * @param specifier        printf format string specifier
    * @param lengthmod        printf lengthmod format string specifier
    
    * @return                 number of characters in string 
    */
static int hex_to_asc(int64_t val,char * stg,char specifier,int lengthmod)
{
    int count=0,count2=0,startcount=0;  
    int digits=8,digitvalue;
       
    if (specifier=='p') specifier='x';   
    if (lengthmod==2)
    {
      digits=16;
    }
    while (count2 < digits)
    {
      digitvalue=(int)(val>>((digits-count2)*4-4)) & 0xf;
      stg[count]='0' + digitvalue;
      if (digitvalue > 9)
      {
        stg[count] = 'A' + (digitvalue - 10) + specifier - 'X';
      }
      if ((stg[count]!='0') || startcount)
      {
        count+=1; 
        startcount=1;
      }
      count2++;
    }  
    stg[count]=0;
            
    return count;
}
  
  
/** @Function Description: print the argument based on the format string
    * @API Type:              Internal
    * @param pinfo            structure pointing to device to output to
    * @param specifier        specifier from format string
    * @param flag             flag from format string
    * @param length           length modifer from format string 2=ll 1=l
    * @param precision        precision from format string
    * @param dot              1 if dot was in format string
    * @param c_count          count of characters output
    * @param args             argument list 
    * @return                 0 for success, 1 for failure 
    */  
static int printarg(ALT_PRINTF_MEM_INFO_t *pinfo,char specifier,char flag,int width,int length,int precision,int dot,int * c_count,va_list * args)
{
    char ostg[32],pad=' ',leadchar=0,leadchar2=0;
    int count,i,adder=0,isint=1;
    int max;
    int64_t val = 0;
    char * stgarg = NULL;
     
    if ((specifier=='d') || (specifier=='i') || (specifier=='u') || (specifier=='x') || (specifier=='X') || (specifier=='p')) 
    {
      if ((specifier=='u') || (specifier=='p'))
      {
        isint=0;
      }
      
      if ((length==2) && isint)
      {
        val=va_arg( *args, int64_t );
      }
      if ((length==2) && (!isint))
      {
        val=va_arg( *args, uint64_t );
      }
      if ((length!=2) && isint)
      {
        val=(int64_t)va_arg( *args, int ); 
      }
      if ((length!=2) && (!isint))
      {
        val=(int64_t)va_arg( *args, unsigned int ); 
      }      
      
      if ((val==0) && ((precision!=0) || (dot==0)))
      { 
        ostg[0]='0';
        ostg[1]=0;
        count=1;
      }      
      else 
      {
        if ((specifier=='x') || (specifier=='X') || (specifier=='p'))
        {      
          count=hex_to_asc(val,ostg,specifier,length);
        }
        else
        {
          count=int_to_asc(val,ostg,isint);
        }
      }
      if ((specifier=='x') || (specifier=='X') || (specifier=='p'))
      {
        if (specifier=='p')
        {
          leadchar='0';
          leadchar2='x';
          adder+=2;
        }
        else
        {
          if  ((flag=='#') && (val!=0))
          { 
            leadchar='0';
            leadchar2=specifier;
            adder+=2;
          }
        }        
        if ((flag=='0') && (dot==0))
        {
          pad='0';
        }
      }
      else
      {
        if ((val<0) && isint)
        { 
          leadchar='-';
          adder++;
        }    
        else if ((flag=='+') && (val>=0) && isint) 
        { 
          leadchar='+';
          adder++;
        }  
        else if ((flag==' ') && isint)
        { 
          leadchar=' ';
          adder++;
        }    
      
        if ((flag=='0') && (dot==0))
        {
          pad='0';
        }
      }
      
      max=count;      
      if (precision>count)
      {
        max=precision;     
      }
      
      if ((leadchar!=0) && (pad=='0'))
      {
        cput(pinfo, c_count, leadchar);
      }
      if ((leadchar2!=0) && (pad=='0'))
      {
        cput(pinfo, c_count, leadchar2); 
      }
      for (i=0;((i<(width-max-adder)) && (flag!='-'));i++) 
      {
        cput(pinfo, c_count, pad);
      }
      if ((leadchar!=0) && (pad==' '))
      {
        cput(pinfo, c_count, leadchar); 
      }
      if ((leadchar2!=0) && (pad==' '))
      {
        cput(pinfo, c_count, leadchar2);   
      }            
      for (i=0;i<(precision-count);i++) 
      {
        cput(pinfo, c_count, '0');
      }
      for (i=0;i<count;i++)
      {
        cput(pinfo, c_count, ostg[i]);
      }
      for (i=0;((i<(width-max-adder)) && (flag=='-'));i++) 
      {
        cput(pinfo, c_count, ' ');    
      }  
    }
    else if ((specifier=='s') || (specifier=='c'))
    {
      if (specifier=='c')
      {
        ostg[0]=va_arg( * args, int ) & 0xff;
        ostg[1]=0;
        count=1;
        dot=0;
      }
      else {
        stgarg=va_arg( * args, char * ); 
        count=0;
        while (*(stgarg+count)) 
        {
          count++;
        }
      }        
       
      if (flag=='0') 
      {
        pad='0';
      }        

      max=count;
      if (dot && (precision<=count))
      {
        max=precision;
      }
      
      for (i=0;((i<(width-max-adder)) && (flag!='-'));i++) 
      {
         cput(pinfo, c_count, pad);
      }           
       
      for (i=0;(i<count) && ((i<precision) || (dot==0));i++) 
      {
        if (specifier=='c')
        {
          cput(pinfo, c_count, ostg[i]);
        }
        else
        {
          cput(pinfo, c_count, stgarg[i]);
        }
      }
      
      for (i=0;((i<(width-max-adder)) && (flag=='-'));i++) 
      {
        cput(pinfo, c_count, ' ');    
      }   
    }
    else
    {
       return 1;
    }     
    
    return 0;
}

/** @Function Description: standard vprintf routine. print the argument based on the format string
    This supports all flags, the Xxscdiup specifiers, and the ll length modifer. ll = int64_t l = long
    This routine parses the format string and calls the printarg routine to print the args as
    encountered.
    * @return                 #characters output for success, -1 for failure 
    */  
int alt_vfprintf(FILE *stream, const char *format, va_list args)
{
    ALT_PRINTF_MEM_INFO_t *pinfo = (ALT_PRINTF_MEM_INFO_t *)stream;
    int index=0,length;
    int count=0,dot;
    char c,flag;
    int width,precision;
       
    while (1)
    {
       c  = nextchar(format,&index);
         
       if (c=='%')
       {
          c = nextchar(format,&index);
          if (c=='%')  
          {
            cput(pinfo,&count,c);
            continue;
          }
          
          flag=0;
          if ((c=='-') || (c=='+') || (c==' ') || (c=='#') || (c=='0')) 
          {
            flag=c;
            c = nextchar(format,&index);
          }
          
          width=0;
          if (c=='*')
          {
            width=va_arg( args, int );
            c = nextchar(format,&index);
          }
          else
          {          
            c = getdec(format,&index,&width,c);
          }
                        
          precision=0;
          dot=0;
          if (c=='.')
          {
            dot=1;
            c = nextchar(format,&index);
            if (c=='*')
            {
              precision=va_arg( args, int );
              c = nextchar(format,&index);
            }
            else
            {
              c = getdec(format,&index,&precision,c);
            }
          }
          
          /*only l is implemented at this time*/
          length=0;
          while (c=='l')
          {
            length++;
            c=nextchar(format,&index);
          }
          
          if (printarg(pinfo,c,flag,width,length,precision,dot,&count,&args))
          {
            return -1;
          }            
       }
       else 
       {
         cput(pinfo,&count,c);
       }
       
       if (c==0)
       {
         break;
       }
    }
    
    return count;
}
          
 
