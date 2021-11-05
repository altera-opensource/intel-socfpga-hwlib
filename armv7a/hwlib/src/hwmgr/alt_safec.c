/******************************************************************************
*
* Copyright 2020 Intel Corporation. All Rights Reserved.
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
#include "alt_safec.h"

ALT_STATUS_CODE memcpy_s (void *destination, 
                          size_t destination_size, 
                          void *source, 
                          size_t source_size)
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    
    uint8_t *source_p = (uint8_t *)source;
    uint8_t *destination_p = (uint8_t *)destination;
    
    /*
      * Check if destination pointer is nothing return error
      * Check if source pointer is nothing return error
     */
    if ((destination == NULL) || (source == NULL))
    {
        status = ALT_E_BAD_ARG;
        return status;
    }
    
    /*
      * Check if destination size is 0 return error
      * Check if source size is 0 return error
     */
    if ((destination_size == 0 ) || (source_size == 0 ))
    {
        status = ALT_E_ARG_RANGE;
        return status;
    }
    
    /*
      * Check if source size more than destination size return error
      */
    if (source_size > destination_size)
    {
        status = ALT_E_BAD_ARG;
        return status;
    }
    
    /*
      * Check if address overlap return error
      * overlap occurs when source_p > destination_p  < source_p + source_size
      * overlap occurs when destination_p > source_p  < destination_p + destination_size
      */
      
    if (destination_p > source_p)
    {
        if ((destination_p) < (source_p + source_size))
        {
            status = ALT_E_BAD_OPERATION;
            return status;
        }
    }        
    
    if (source_p > destination_p)
    {
        if ((source_p) < (destination_p + destination_size))
        {
            status = ALT_E_BAD_OPERATION;
            return status;
        }
    }        
    
    /*
      * if no error then copy memory
      */
    while (source_size--)
    {
        destination_p[source_size]=source_p[source_size];
    }
    
    return status;
    
}

ALT_STATUS_CODE strncpy_s (char* destination, 
                          size_t destination_size, 
                          const char* source, 
                          size_t source_size)
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
      
    /*
      * Check if destination pointer is nothing return error
      * Check if source pointer is nothing return error
     */
    if ((destination == NULL) || (source == NULL))
    {
        status = ALT_E_BAD_ARG;
        return status;
    }
    
    /*
      * Check if destination size is 0 return error
      * Check if source size is 0 return error
     */
    if ((destination_size == 0 ) || (source_size == 0 ))
    {
        status = ALT_E_ARG_RANGE;
        return status;
    }
    
    /*
      * Check if source size more than destiantion size return error
      */
    if (source_size > destination_size)
    {
        status = ALT_E_BAD_ARG;
        return status;
    }
    
    /*
      * if no error then copy string
      */
    while ((source_size--) && (*source != '\0'))
    {
        *destination++ = *source++;
    }
    
    /*
      * add a null behind to terminate string
      */
    *destination = '\0';
    
    return status;
    
}

size_t strnlen_s (const char* destination, 
                  size_t destination_size)
{
    
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    size_t size = 0; 

    /*
      * Check if destination pointer is nothing return error
     */
    if (destination == NULL)
    {
        status = ALT_E_BAD_ARG;
        return status;
    }
    
    /*
      * Check if destination size is 0 return error
     */
    if (destination_size == 0 ) 
    {
        status = ALT_E_ARG_RANGE;
        return status;
    }
    
    /*
      * if no error then count string
      */
    while (*destination++ != '\0' && destination_size--)
    {
        size++;
    }
        
    return size;
 
}
