/*****************************************************************************
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
*****************************************************************************/

/*
 * $Id$
 */
#include "alt_asm.h"

#ifdef RELEASE
    IMPORT(__use_no_semihosting)
#endif

    IMPORT(main)
    IMPORT(__main)
    IMPORT(Image$$ZI$$Base)
    IMPORT(Image$$ZI$$Limit)
    IMPORT(Image$$ARM_LIB_STACK$$Base)
    IMPORT(Image$$ARM_LIB_STACK$$Limit)
    IMPORT(Image$$ARM_LIB_HEAP$$Base)
    IMPORT(Image$$ARM_LIB_HEAP$$Limit)
    EXPORT(_iloop)
    EXPORT(_start)
    IMPORT(memset)
    IMPORT(_init_alloc)

#define SPIN_ADDRS 0xffe2ffe0

    AREA(Startup, CODE, READONLY)
    ENTRY
LABEL(_start) /* 40 */
#ifdef SAVE_UBOOT_PARAMS
	adr	x5, u_boot_params
	stmia	x5, {x0,x1,x2,x3,x12,lr}
#endif
	mrs	x2, MPIDR_EL1
	and	x2, x2, #0xFF
	cmp	x2, xzr
	beq	continue
	lsl	x2, x2, 3
	ldr	x1, spin_addr
LABEL(spin)
	ldr	x0, [x2, x1]
	cmp	x0, xzr
	bne     jump
	wfi
	b	spin
LABEL(jump)
	br      x0
LABEL(spin_addr)
	.quad	SPIN_ADDRS
continue:
#ifdef RELEASE
#ifdef SEPERATE_HEAP
	ldr	x0, =Image$$ARM_LIB_STACK$$ZI$$Limit
	mov	sp, x0

        ldr     x0, =Image$$ARM_LIB_HEAP$$ZI$$Base
        ldr	x1, =Image$$ARM_LIB_HEAP$$ZI$$Limit
	bl	_init_alloc
#else
	ldr	x0, =Image$$ARM_LIB_STACKHEAP$$ZI$$Limit
	mov	sp, x0

        ldr     x0, =Image$$ARM_LIB_STACKHEAP$$ZI$$Base
        ldr	x1, =Image$$ARM_LIB_STACKHEAP$$ZI$$Limit
	bl	_init_alloc
#endif
	/* Call memset(__bss_start__,0,__bss_end__-__bss_start__) */
#ifdef GNU
	ldr     x0, =__bss_start__
	ldr     x2, =__bss_end__
#else
	ldr	x0, =Image$$APP_CODE$$ZI$$Base
	ldr	x2, =Image$$APP_CODE$$ZI$$Limit
#endif
	mov	x1, #0
	sub	x2, x2, x0
	bl	memset
	bl	main
#else
	/* Call the init code provided by arm */
	b	__main
#endif

LABEL(_iloop)
	b	_iloop
    END
