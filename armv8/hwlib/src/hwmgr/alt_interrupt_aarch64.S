/*****************************************************************************
;*
;* Copyright 2017 Altera Corporation. All Rights Reserved.
;*
;* Redistribution and use in source and binary forms, with or without
;* modification, are permitted provided that the following conditions are met:
;*
;* 1. Redistributions of source code must retain the above copyright notice,
;* this list of conditions and the following disclaimer.
;*
;* 2. Redistributions in binary form must reproduce the above copyright notice,
;* this list of conditions and the following disclaimer in the documentation
;* and/or other materials provided with the distribution.
;*
;* 3. Neither the name of the copyright holder nor the names of its contributors 
;* may be used to endorse or promote products derived from this software without 
;* specific prior written permission.
;* 
;* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
;* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
;* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
;* ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
;* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
;* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
;* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
;* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
;* CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
;* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
;* POSSIBILITY OF SUCH DAMAGE.
;*
*****************************************************************************/

#include "alt_asm.h"
/*
;; $Id: a065244b54ea7459855723843a8a3102f71b8a9f $
*/

/*
   This is a small stub vector put in front of the ARMCC image to support
   interrupts. 
*/

    PRESERVE8
    AREA(VECTORS, CODE, READONLY)

    ENTRY

    EXPORT(alt_interrupt_vector) /* [WEAK]*/
    IMPORT(__main)
    IMPORT(alt_int_handler_irq)

    
/* Note - ARM execution levels
*; EL0 - User Space. However, exception SP0 is the special stack
*; EL1 - Kernel Space
*; EL2 - Hypervisor level
*; EL3 - Trustzone level
*/

/* The vector table must be aligned on a 2k boundary */
    ALIGN2048
    
    /* Interrupt vector for arm v8 */
LABEL(alt_interrupt_vector)
    /* The following 4 functions are vectors used when SPSel is 
        set to 0 (Not default). This will use the EL0 (userspace) stack */
FUNCTION(alt_int_sp0_sync)
    /* up to 0x80 bytes of code */
    STP X0, LR, [SP, #-16]! /* Push X0,X1 */
    MOV X0, #1
    B   __loop
    ENDFUNC
    ALIGN128
FUNCTION(alt_int_sp0_irq)
    /* up to 0x80 bytes of code */
    B   call_irq_handler_safely
    ENDFUNC
    ALIGN128
FUNCTION(alt_int_sp0_fiq)
    /* up to 0x80 bytes of code */
    B   call_irq_handler_safely
    ENDFUNC
    ALIGN128
FUNCTION(alt_int_sp0_serr)
    B handle_error
    ENDFUNC
    ALIGN128
    /* The following 4 functions are vectors used when SPSel is set 
        to 1 (Default). This will use the stack for this EL level */
FUNCTION(alt_int_spX_sync)
    /* up to 0x80 bytes of code */
    STP X0, LR, [SP, #-16]! /* Push X0,X1 */
    MOV X0, #2
    BL  __loop
    ENDFUNC
    ALIGN128
FUNCTION(alt_int_spX_irq)
    /* up to 0x80 bytes of code */
    B   call_irq_handler_safely
    ENDFUNC
    ALIGN128
FUNCTION(alt_int_spX_fiq)
    /* up to 0x80 bytes of code */
    B   call_irq_handler_safely
    ENDFUNC
    ALIGN128
FUNCTION(alt_int_spX_serr)
    /* up to 0x80 bytes of code */
    STP X0, LR, [SP, #-16]! /* Push X0,X1 */
    MOV X0, #3
    BL  __loop
    ENDFUNC
    ALIGN128
    /* The following 4 vectors used when the el is lowered in AArch64 
         mode. This will use the stack for the new (lower) el level */
FUNCTION(alt_int_lel64_sync)
    /* up to 0x80 bytes of code */
    STP X0, LR, [SP, #-16]! /* Push X0,X1 */
    MOV X0, #4
    BL  __loop
    ENDFUNC
    ALIGN128
FUNCTION(alt_int_lel64_irq)
    /* up to 0x80 bytes of code */
    STP X0, LR, [SP, #-16]! /* Push X0,X1 */
    MOV X0, #5
    BL  __loop
    ENDFUNC
    ALIGN128
FUNCTION(alt_int_lel64_fiq)
    /* up to 0x80 bytes of code */
    STP X0, LR, [SP, #-16]! /* Push X0,X1 */
    MOV X0, #6
    BL  __loop
    ENDFUNC
    ALIGN128
FUNCTION(alt_int_lel64_serr)
    /* up to 0x80 bytes of code */
    STP X0, LR, [SP, #-16]! /* Push X0,X1 */
    MOV X0, #7
    BL  __loop
    ENDFUNC
    ALIGN128

    /* The following 4 functions are vectors used when the el is lowered from
    AArch32 mode. This will use the stack for the new (lower) el level */
FUNCTION(alt_int_lel32_sync)
    /* up to 0x80 bytes of code */
    STP X0, LR, [SP, #-16]! /* Push X0,X1 */
    MOV X0, #8
    BL  __loop
    ENDFUNC
    ALIGN128
FUNCTION(alt_int_lel32_irq)
    /* up to 0x80 bytes of code */
    STP X0, LR, [SP, #-16]! /* Push X0,X1 */
    MOV X0, #9
    BL  __loop
    ENDFUNC
    ALIGN128
FUNCTION(alt_int_lel32_fiq)
    /* up to 0x80 bytes of code */
    STP X0, LR, [SP, #-16]! /* Push X0,X1 */
    MOV X0, #10
    BL  __loop
    ENDFUNC
    ALIGN128
FUNCTION(alt_int_lel32_serr)
    /* up to 0x80 bytes of code */
    STP X0, LR, [SP, #-16]! /* Push X0,X1 */
    MOV X0, #11
    BL  __loop
    ENDFUNC
    ALIGN128
    
FUNCTION(call_irq_handler_safely )
    STP X0, X1,   [SP, #-16]!
    STP X2, X3,   [SP, #-16]!
    STP X4, X5,   [SP, #-16]!
    STP X6, X7,   [SP, #-16]!
    STP X8, X9,   [SP, #-16]!
    STP X10, X11, [SP, #-16]!
    STP X12, X13, [SP, #-16]!
    STP X14, X15, [SP, #-16]!
    STP X16, X17, [SP, #-16]!
    STP X18, X19, [SP, #-16]!
    STP LR, FP,   [SP, #-16]!
    BL  alt_int_handler_irq
    LDP LR, FP,   [SP], #16
    LDP X18, X19, [SP], #16
    LDP X16, X17, [SP], #16
    LDP X14, X15, [SP], #16
    LDP X12, X13, [SP], #16
    LDP X10, X11, [SP], #16
    LDP X8, X9,   [SP], #16
    LDP X6, X7,   [SP], #16
    LDP X4, X5,   [SP], #16
    LDP X2, X3,   [SP], #16
    LDP X0, X1,   [SP], #16
    ERET
    
/*==============*/
FUNCTION(__loop)
    nop
    B  __loop
    /* Mov IP Here to exit */
    LDP X0, LR, [SP], #16
    ERET
    ENDFUNC

FUNCTION(handle_error)
    /* up to 0x80 bytes of code */
    STP X0, X1, [SP, #-16]! /* Push X0,X1 */
    STP X2, X3, [SP, #-16]! /* Push X2,X3 */
#if defined(EXECUTION_LEVEL3)
    MRS X0, ESR_EL3
#elif defined(EXECUTION_LEVEL2)
    MRS X0, ESR_EL2
#elif defined(EXECUTION_LEVEL1)
    MRS X0, ESR_EL1
#endif
    LSR X1, X0, #20
    AND X2, X0, #3
    ORR X1, X1, X2
    /* Reason for error, stored in X1:
        0 - DECERR on external access
        1 - Double-bit error detected on dirty line in L2 cache
        2 - SLVERR on external access
        4 - nSEI or nVSEI in a guest OS
        5 - nREI asserted
    */
loop_forever:
    B   loop_forever
    LDP X2, X2, [SP], #16
    LDP X0, X1, [SP], #16
    ENDFUNC
    
    AREA(ALT_INTERRUPT_ARMCC, CODE, READONLY)
    EXPORT(alt_int_set_stack_el0)
/* void alt_int_set_stack_el0(uint64_t stack_ptr);
 * Set the stack for el0 (userspace)
 * Can be called from EL1, EL2, or EL3
 */
FUNCTION(alt_int_set_stack_el0)
    MSR     SP_EL0, X0
    RET
    ENDFUNC

    EXPORT(alt_int_set_stack_el1)
/* void alt_int_set_stack_el1(uint64_t stack_ptr);
 * Set the stack for el1 (kernel space)
 * Must be called from EL2/3
 */
FUNCTION(alt_int_set_stack_el1)
    MSR     SP_EL1, X0
    RET
    ENDFUNC

    EXPORT(alt_int_set_stack_el2)
/* void alt_int_set_stack_el2(uint64_t stack_ptr);
 * Set the stack for el2 (hypervisor)
 * Must be called from EL3
 */
FUNCTION(alt_int_set_stack_el2)
    MSR     SP_EL2, X0
    RET
    ENDFUNC

    EXPORT(alt_int_set_vector_el1)
/* void alt_int_set_vector_el1(uint64_t vector);
 * Sets the vector table for el1. Must be called from EL1/2/3
 */
FUNCTION(alt_int_set_vector_el1)
    MSR     VBAR_EL1, X0
    RET
    ENDFUNC

    EXPORT(alt_int_set_vector_el2)
/* void alt_int_set_vector_el2(uint64_t vector);
 * Sets the vector table for el2. Must be called from EL2/3
 */
FUNCTION(alt_int_set_vector_el2)
    MSR     VBAR_EL2, X0
    RET
    ENDFUNC
    
    EXPORT(alt_int_set_vector_el3)
/* void alt_int_set_vector_el3(uint64_t vector);
 * Sets the vector table for el3. Must be called from EL3
 */
FUNCTION(alt_int_set_vector_el3)
    MSR     VBAR_EL3, X0
    RET
    ENDFUNC
    
    EXPORT(alt_int_set_spsel0)
/* void alt_int_set_spsel0();
 * may be called from EL1, EL2 or EL3
 * This tell the cpu to use the EL0 (user mode) stack for exceptions
 */
FUNCTION(alt_int_set_spsel0)
    MSR     SPSEL, #0
    RET
    ENDFUNC
    
    EXPORT(alt_int_set_spsel1    )
/* void alt_int_set_spsel1();
 * may be called from EL1, EL2 or EL3
 * This tell the cpu to use the stack of the exceptions context for exceptions
 */
FUNCTION(alt_int_set_spsel1)
    MSR     SPSEL, #0
    RET
    ENDFUNC

    EXPORT(alt_int_util_get_current_cpu)
/* uint32_t alt_int_util_get_current_cpu(void); */
FUNCTION(alt_int_util_get_current_cpu)
    MRS     x0, MPIDR_EL1
    AND     x0, x0, #0xFF
    RET
    ENDFUNC
    
    EXPORT(alt_int_cpu_enable)
/* void alt_int_cpu_enable(void); */
FUNCTION(alt_int_cpu_enable)
    MSR DAIFClr, #3
#if defined(SIMICS)
    MRS x0, scr_el3
    ORR x0, x0, #0x6
    MSR scr_el3, x0
#endif
    RET
    ENDFUNC

    EXPORT(alt_int_cpu_enable_irq)
/* void alt_int_cpu_enable_irq(void); */
FUNCTION(alt_int_cpu_enable_irq)
    MSR DAIFClr, #2
    RET
    ENDFUNC

    EXPORT(alt_int_cpu_enable_fiq)
/* void alt_int_cpu_enable_fiq(void); */
FUNCTION(alt_int_cpu_enable_fiq)
    MSR DAIFClr, #1
    RET
    ENDFUNC
    
    EXPORT(alt_int_cpu_disable)
/* void alt_int_cpu_disable(void); */
FUNCTION(alt_int_cpu_disable)
    MSR DAIFSet, #3
    RET
    ENDFUNC

    EXPORT(alt_int_cpu_disable_irq)
/* void alt_int_cpu_disable_irq(void); */
FUNCTION(alt_int_cpu_disable_irq)
    MSR DAIFSet, #2
    RET
    ENDFUNC

    EXPORT(alt_int_cpu_disable_fiq)
/* void alt_int_cpu_disable_fiq(void); */
FUNCTION(alt_int_cpu_disable_fiq)
    MSR DAIFSet, #1
    RET
    ENDFUNC

#if defined(EXECUTION_LEVEL3)
    EXPORT(set_vector_table)
/* void set_vector_table(void *vector_table); */
FUNCTION(set_vector_table)
    MSR VBAR_EL3, x0
    RET
    ENDFUNC

#elif defined(EXECUTION_LEVEL2)
    EXPORT(set_vector_table)
/* void set_vector_table(void *vector_table); */
FUNCTION(set_vector_table)
    MSR VBAR_EL2, x0
    RET
    ENDFUNC
    
#elif defined(EXECUTION_LEVEL1)
    EXPORT(set_vector_table)
/* void set_vector_table(void *vector_table); */
FUNCTION(set_vector_table)
    MSR VBAR_EL1, x0
    RET
    ENDFUNC

#endif
    END
