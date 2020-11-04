/******************************************************************************
*
* Copyright 2014 Altera Corporation. All Rights Reserved.
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

/*
 * $Id: //acds/main/embedded/ip/hps/altera_hps/hwlib/src/utils/alt_retarget_gnu.c#6 $
 */

/*
 * This file contains minimal retarget support to make printf work over UART for the GNU compiler
 */

#include <stdio.h>
#include <inttypes.h>
#include <hwlib.h>
#include "alt_printf.h"

#define STDOUT_FILENO 1

int _close(int file)
{
    /* Succeeds only for STDOUT */
    return (file == STDOUT_FILENO) ? 0 : -1;
}

int _fstat(int file, void *st)
{
    /* Succeeds only for STDOUT */
    return (file == STDOUT_FILENO) ? 0 : -1;
}

int _isatty(int file)
{
    /* Succeeds only for STDOUT */
    return (file == STDOUT_FILENO) ? 1 : -1;
}

off_t _lseek(int file, off_t ptr, int dir)
{
    /* Succeeds only for STDOUT */
    return (file == STDOUT_FILENO) ? 0 : -1;
}

int _read(int file, void *ptr, size_t len)
{
    /* Always fails */
    return -1;
}

int _write(int file, char * ptr, unsigned len, int flag )
{
    unsigned max_len = len;
    
    /* Fails if not STDOUT */
    if(file != STDOUT_FILENO)
    {
        return -1;
    }

    if (max_len > (UART_MAX_LEN-1))
    {
        max_len = UART_MAX_LEN-1;
    }
    
    snprintf(log_buf, max_len, ptr);      
    
    alt_printf(log_buf);
   
    /* All printed fine */
    return len;
}
