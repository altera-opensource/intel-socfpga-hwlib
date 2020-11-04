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

#include <stdint.h>
#include "alt_16550_uart.h"
#include "alt_printf.h"

#if !defined(ALT_P2UART_H)
#define ALT_P2UART_H

#ifndef BAUD_RATE
#define BAUD_RATE      (115200)
#endif

/*
    To have alt_printf output to uart:
        1. Add -DPRINTF_UART to your compile flags
        2. Add alt_p2uart.c and alt_printf to your project
        3. (optional) set -DDEFAULT_TERM=term0 or -DDEFAULT_TERM=term1 to specify which UART to use
        4. (optional) If you with to initialize the uart yourself (for instance, if you want to read from the uart),
            a. Initialize UART0/1 (Make sure it matches step 3 above)
            b. Use term0_info->mUart or term1_info->mUart for the handle in part a.
            c. Set term0_info->init_done=1 or term1_info->init_done=1
            d. See alt_p2uart.c:init_uart as an example
*/
extern FILE *term0, *term1;

void uart_putc(char pchar, FILE * info);
int uart_getc(FILE * info);

#endif


