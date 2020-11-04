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

/*    EXPORT(main)
FUNCTION(main)
    ENDFUNC*/
    
/* Note - ARM execution levels
*; EL0 - User Space. However, exception SP0 is the special stack
*; EL1 - Kernel Space
*; EL2 - Hypervisor level
*; EL3 - Trustzone level
*/
    ALIGN32
LABEL(alt_interrupt_vector)
    /* Interrupt vector for arm v7 or v7/32 bit mode */
    LDR PC, alt_reset_addr
    LDR PC, alt_undef_addr
    LDR PC, alt_svc_addr
    LDR PC, alt_prefetch_addr
    LDR PC, alt_abort_addr
    LDR PC, alt_reserved_addr
    LDR PC, alt_irq_addr
    LDR PC, alt_fiq_addr


LABEL(alt_reset_addr)
    DCD __main
LABEL(alt_undef_addr)
    DCD alt_int_handler_undef
LABEL(alt_svc_addr)
    DCD alt_int_handler_svc
LABEL(alt_prefetch_addr)
    DCD alt_int_handler_prefetch
LABEL(alt_abort_addr)
    DCD alt_int_handler_abort
LABEL(alt_reserved_addr)
    DCD alt_int_handler_reserve
LABEL(alt_irq_addr)
    DCD alt_int_handler_irq
LABEL(alt_fiq_addr)
    DCD alt_int_handler_fiq

LABEL(alt_int_handler_undef)
    B alt_int_handler_undef
LABEL(alt_int_handler_svc)
    B alt_int_handler_svc
LABEL(alt_int_handler_prefetch)
    B alt_int_handler_prefetch
LABEL(alt_int_handler_abort)
    B alt_int_handler_abort
LABEL(alt_int_handler_reserve)
    B alt_int_handler_reserve
LABEL(alt_int_handler_irq)
    B alt_int_handler_irq
LABEL(alt_int_handler_fiq)
    B alt_int_handler_fiq
    
/*==============*/
    
    AREA(ALT_INTERRUPT_ARMCC, CODE, READONLY)

    EXPORT(alt_int_set_vector)
/* void alt_int_set_vector(uint32_t vector);
 * sets the vector table for el1. Must be called from EL1/2/3
 */
FUNCTION(alt_int_set_vector)
    mcr p15, 0, r0, c12, c0, 0
    ENDFUNC

    EXPORT(alt_int_fixup_irq_stack)
/* void alt_int_fixup_irq_stack(uint32_t stack);
 * sets the stack for the Interrupt ReQuest exception
 */
FUNCTION(alt_int_fixup_irq_stack)
    mrs r3, CPSR
    msr CPSR_c, #(0x12 | 0x80 | 0x40) /* Mode=0x12 (IRQ), IRQ Disable, FIQ Disable */
    mov sp, r0
    msr CPSR_c, r3
    bx  lr
    ENDFUNC
    
    EXPORT(alt_int_fixup_fiq_stack)
/* void alt_int_fixup_fiq_stack(uint32_t stack);
 * sets the stack for the Fast Interrupt reQuest exception
 */
FUNCTION(alt_int_fixup_fiq_stack)    
    mrs r3, CPSR
    msr CPSR_c, #(0x11 | 0x80 | 0x40) /* Mode=0x11 (FIQ), IRQ Disable, FIQ Disable */
    mov sp, r0
    msr CPSR_c, r3
    bx  lr
    ENDFUNC

    EXPORT(alt_int_fixup_abt_stack)
/* void alt_int_fixup_abt_stack(uint32_t stack);
 * sets the stack for the abort exception
 */
FUNCTION(alt_int_fixup_abt_stack)    
    mrs r3, CPSR
    msr CPSR_c, #(0x17 | 0x80 | 0x40) /* Mode=0x17 (ABT), IRQ Disable, FIQ Disable */
    mov sp, r0
    msr CPSR_c, r3
    bx  lr
    ENDFUNC

    EXPORT(alt_int_fixup_und_stack)
/* void alt_int_fixup_und_stack(uint32_t stack);
 * sets the stack for the undefined instruction exception
 */
FUNCTION(alt_int_fixup_und_stack)    
    mrs r3, CPSR
    msr CPSR_c, #(0x1b | 0x80 | 0x40) /* Mode=0x1b (UND), IRQ Disable, FIQ Disable */
    mov sp, r0
    msr CPSR_c, r3
    bx  lr
    ENDFUNC
    
    EXPORT(alt_int_util_cpu_current)
/* uint32_t alt_int_util_cpu_current(void); */
FUNCTION(alt_int_util_cpu_current)
    mrc p15, 0, r0, c0, c0, 5
    ENDFUNC
    
FUNCTION(clear_sctlr_vbit)
    mrc p15, 0, r0, c1, c0, 0
    bic r0, #(1<<13)
    mcr p15, 0, r0, c1, c0, 0
    bx  lr
    ENDFUNC
    
    EXPORT(set_vector_table)
/* void set_vector_table(void *vector_table); */
FUNCTION(set_vector_table)
    mcr p15, 0, r0, c12, c0, 0
    bx  lr
    ENDFUNC
    
    EXPORT(alt_int_util_get_current_cpu)
/* uint32_t alt_int_util_get_current_cpu(void); */
FUNCTION(alt_int_util_get_current_cpu)
    mrc p15, 0, r0, c0, c0, 5
    bx  lr
    ENDFUNC

    EXPORT(alt_int_cpu_enable)
/* void alt_int_cpu_enable(void); */
FUNCTION(alt_int_cpu_enable)
    CPSIE i
    CPSIE f
    bx  lr
    ENDFUNC

    EXPORT(alt_int_cpu_enable_irq)
/* void alt_int_cpu_enable_irq(void); */
FUNCTION(alt_int_cpu_enable_irq)
    CPSIE i
    bx  lr
    ENDFUNC

    EXPORT(alt_int_cpu_enable_fiq)
/* void alt_int_cpu_enable_fiq(void); */
FUNCTION(alt_int_cpu_enable_fiq)
    CPSIE f
    bx  lr
    ENDFUNC
    
    EXPORT(alt_int_cpu_disable)
/* void alt_int_cpu_disable(void); */
FUNCTION(alt_int_cpu_disable)
    CPSID i
    CPSID f
    bx  lr
    ENDFUNC

    EXPORT(alt_int_cpu_disable_irq)
/* void alt_int_cpu_disable_irq(void); */
FUNCTION(alt_int_cpu_disable_irq)
    CPSID i
    bx  lr
    ENDFUNC

    EXPORT(alt_int_cpu_disable_fiq)
/* void alt_int_cpu_disable_fiq(void); */
FUNCTION(alt_int_cpu_disable_fiq)
    CPSID f
    bx  lr
    ENDFUNC
    
    END
    
