/*****************************************************************************
*
* Copyright 2013 Altera Corporation. All Rights Reserved.
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
*****************************************************************************/

/*
 * $Id: //acds/main/embedded/ip/hps/armv8/hwlib/include/alt_asm.h#2 $
 */

#define ASM

#if defined(GNU) || defined(CLANG)
#define IMPORT(x)
#define EXPORT(x)       .globl  x
#define FUNCTION(x)     x:\
.type x, "function"
#define ENDFUNC
#define AREA(x,y,z)
#define ENTRY
#define END
#define LABEL(x)        x:
#define DCD             .word
#define _OR_            |
#define ALIGN32	        .align	5
#define ALIGN128        .align	7
#define ALIGN512        .align	9
#define ALIGN1024       .align	10
#define ALIGN2048       .align	11
#define PRESERVE8

#else

#define IMPORT(x)       IMPORT  x
#define AREA(x,y,z)     AREA    x,y,z
#define EXPORT(x)       EXPORT  x
#define LABEL(x)        x
#define _OR_            :OR:
#define ALIGN32         ALIGN 32
#define ALIGN128        ALIGN 128
#define ALIGN512        ALIGN 512
#endif

