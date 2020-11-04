/******************************************************************************
*
* Copyright 2013-2017 Altera Corporation. All Rights Reserved.
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

#if !defined(ALT_PRINTF_H)
#define ALT_PRINTF_H
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <inttypes.h>


typedef struct ALT_PRINTF_MEM_INFO_s
{
  void (*putc_function)(char pchar,FILE * info);
  int (*getc_function)(FILE * info);
  char *toptr;
  char *maxptr;
} ALT_PRINTF_MEM_INFO_t;

#ifndef DEFAULT_TERM
  #ifdef soc_a10
    #define DEFAULT_TERM  term1
    #define DEFAULT_UART_INT ALT_INT_INTERRUPT_UART1
    #define pdefault_term_info  term1_info
  #else
    #define DEFAULT_TERM  term0
    #define DEFAULT_UART_INT ALT_INT_INTERRUPT_UART0
    #define pdefault_term_info  term0_info
  #endif
#endif

extern FILE *term0;
extern FILE *term1;

static __inline int null_printf(const char *format, ...)
    {(void)format;return 0;}
static __inline int null_vfprintf(FILE *stream, const char *format, va_list args)
    {(void)stream;(void)format;(void)args;return 0;}

#if defined (PRINTF_HOST) 
  #define ALT_PRINTF printf
  #define alt_printf printf
#else 
  #define snprintf alt_snprintf
  #define ALT_SNPRINTF alt_snprintf
  #define sprintf alt_sprintf
  #define ALT_SPRINTF alt_sprintf

  #if defined (PRINTF_UART)
    #define ALT_PRINTF printf
    #define alt_printf printf
    #define alt_fprintf fprintf
    #define alt_fputs fputs
    #define alt_puts puts
    #define alt_putc putc
    #define alt_fputc fputc
    #define alt_vfprintf vfprintf
    #define alt_fwrite fwrite
    #define alt_fgetc fgetc
    #define alt_fgets fgets
  #else
    #define ALT_PRINTF null_printf
    #define printf null_printf
    #define vprintf null_vfprintf
  #endif /* PRINTF_UART */
#endif /* PRINTF_HOST */

char *alt_fgets(char * str, int num, FILE *stream);
int alt_fgetc(FILE *stream);
int alt_printf(const char *format, ...);
int alt_snprintf(char *to, size_t n, const char *format, ...);
int alt_sprintf(char *to, const char *format, ...);
int alt_fprintf(FILE *stream, const char *format, ...);
int alt_vfprintf(FILE *stream, const char *format, va_list args);
void alt_log_done(FILE *);
int alt_fputs(const char *str, FILE *stream);
int alt_puts(const char *str);
size_t alt_fwrite(const void *ptr, size_t size, size_t count, FILE *stream);


#endif /* ALT_PRINTF_H */
