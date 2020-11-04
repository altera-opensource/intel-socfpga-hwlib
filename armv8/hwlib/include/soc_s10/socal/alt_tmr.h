/***********************************************************************************
*                                                                                  *
* Copyright 2013-2015 Altera Corporation. All Rights Reserved.                     *
*                                                                                  *
* Redistribution and use in source and binary forms, with or without               *
* modification, are permitted provided that the following conditions are met:      *
*                                                                                  *
* 1. Redistributions of source code must retain the above copyright notice,        *
*    this list of conditions and the following disclaimer.                         *
*                                                                                  *
* 2. Redistributions in binary form must reproduce the above copyright notice,     *
*    this list of conditions and the following disclaimer in the documentation     *
*    and/or other materials provided with the distribution.                        *
*                                                                                  *
* 3. Neither the name of the copyright holder nor the names of its contributors    *
*    may be used to endorse or promote products derived from this software without *
*    specific prior written permission.                                            *
*                                                                                  *
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"      *
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE        *
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE       *
* ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE        *
* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR              *
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF             *
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS         *
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN          *
* CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)          *
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE       *
* POSSIBILITY OF SUCH DAMAGE.                                                      *
*                                                                                  *
***********************************************************************************/

/* Altera - ALT_TMR */

#ifndef __ALT_SOCAL_TMR_H__
#define __ALT_SOCAL_TMR_H__

#ifndef __ASSEMBLY__
#ifdef __cplusplus
#include <cstdint>
extern "C"
{
#else   /* __cplusplus */
#include <stdint.h>
#endif  /* __cplusplus */
#endif  /* __ASSEMBLY__ */

/*
 * Component : TMR
 * DW_apb_timers address block
 * 
 */
/*
 * Register : Timer1 Load Count Register - TIMER1LOADCOUNT
 * 
 * Name: Timer1 Load Count Register
 * 
 * Size: 8-32 bits
 * 
 * Address Offset: 0x00
 * 
 * Read/Write Access: Read/Write
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                            
 * :-------|:-------|:------|:----------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_TMR_TIMER1LOADCOUNT_TIMER1LOADCOUNT
 * 
 */
/*
 * Field : TIMER1LOADCOUNT
 * 
 * Value to be loaded into Timer1. This is the value from which counting
 * 
 * commences. Any value written to this register is loaded into the associated
 * timer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_TMR_TIMER1LOADCOUNT_TIMER1LOADCOUNT register field. */
#define ALT_TMR_TIMER1LOADCOUNT_TIMER1LOADCOUNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_TMR_TIMER1LOADCOUNT_TIMER1LOADCOUNT register field. */
#define ALT_TMR_TIMER1LOADCOUNT_TIMER1LOADCOUNT_MSB        31
/* The width in bits of the ALT_TMR_TIMER1LOADCOUNT_TIMER1LOADCOUNT register field. */
#define ALT_TMR_TIMER1LOADCOUNT_TIMER1LOADCOUNT_WIDTH      32
/* The mask used to set the ALT_TMR_TIMER1LOADCOUNT_TIMER1LOADCOUNT register field value. */
#define ALT_TMR_TIMER1LOADCOUNT_TIMER1LOADCOUNT_SET_MSK    0xffffffff
/* The mask used to clear the ALT_TMR_TIMER1LOADCOUNT_TIMER1LOADCOUNT register field value. */
#define ALT_TMR_TIMER1LOADCOUNT_TIMER1LOADCOUNT_CLR_MSK    0x00000000
/* The reset value of the ALT_TMR_TIMER1LOADCOUNT_TIMER1LOADCOUNT register field. */
#define ALT_TMR_TIMER1LOADCOUNT_TIMER1LOADCOUNT_RESET      0x0
/* Extracts the ALT_TMR_TIMER1LOADCOUNT_TIMER1LOADCOUNT field value from a register. */
#define ALT_TMR_TIMER1LOADCOUNT_TIMER1LOADCOUNT_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_TMR_TIMER1LOADCOUNT_TIMER1LOADCOUNT register field value suitable for setting the register. */
#define ALT_TMR_TIMER1LOADCOUNT_TIMER1LOADCOUNT_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_TMR_TIMER1LOADCOUNT.
 */
struct ALT_TMR_TIMER1LOADCOUNT_s
{
    volatile uint32_t  TIMER1LOADCOUNT : 32;  /* ALT_TMR_TIMER1LOADCOUNT_TIMER1LOADCOUNT */
};

/* The typedef declaration for register ALT_TMR_TIMER1LOADCOUNT. */
typedef struct ALT_TMR_TIMER1LOADCOUNT_s  ALT_TMR_TIMER1LOADCOUNT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_TMR_TIMER1LOADCOUNT register. */
#define ALT_TMR_TIMER1LOADCOUNT_RESET       0x00000000
/* The byte offset of the ALT_TMR_TIMER1LOADCOUNT register from the beginning of the component. */
#define ALT_TMR_TIMER1LOADCOUNT_OFST        0x0
/* The address of the ALT_TMR_TIMER1LOADCOUNT register. */
#define ALT_TMR_TIMER1LOADCOUNT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_TMR_TIMER1LOADCOUNT_OFST))

/*
 * Register : TIMER1CURRENTVAL
 * 
 * Name: Timer1 Current Value
 * 
 * Size: 8-32 bits
 * 
 * Address Offset: 4
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                              
 * :-------|:-------|:------|:------------------------------------------
 *  [31:0] | R      | 0x0   | ALT_TMR_TIMER1CURRENTVAL_TIMER1CURRENTVAL
 * 
 */
/*
 * Field : TIMER1CURRENTVAL
 * 
 * Current Value of Timer1. This register is supported only
 * 
 * when timer_1_clk is synchronous to pclk. Reading this
 * 
 * register when using independent clocks results in an
 * 
 * undefined value.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_TMR_TIMER1CURRENTVAL_TIMER1CURRENTVAL register field. */
#define ALT_TMR_TIMER1CURRENTVAL_TIMER1CURRENTVAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_TMR_TIMER1CURRENTVAL_TIMER1CURRENTVAL register field. */
#define ALT_TMR_TIMER1CURRENTVAL_TIMER1CURRENTVAL_MSB        31
/* The width in bits of the ALT_TMR_TIMER1CURRENTVAL_TIMER1CURRENTVAL register field. */
#define ALT_TMR_TIMER1CURRENTVAL_TIMER1CURRENTVAL_WIDTH      32
/* The mask used to set the ALT_TMR_TIMER1CURRENTVAL_TIMER1CURRENTVAL register field value. */
#define ALT_TMR_TIMER1CURRENTVAL_TIMER1CURRENTVAL_SET_MSK    0xffffffff
/* The mask used to clear the ALT_TMR_TIMER1CURRENTVAL_TIMER1CURRENTVAL register field value. */
#define ALT_TMR_TIMER1CURRENTVAL_TIMER1CURRENTVAL_CLR_MSK    0x00000000
/* The reset value of the ALT_TMR_TIMER1CURRENTVAL_TIMER1CURRENTVAL register field. */
#define ALT_TMR_TIMER1CURRENTVAL_TIMER1CURRENTVAL_RESET      0x0
/* Extracts the ALT_TMR_TIMER1CURRENTVAL_TIMER1CURRENTVAL field value from a register. */
#define ALT_TMR_TIMER1CURRENTVAL_TIMER1CURRENTVAL_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_TMR_TIMER1CURRENTVAL_TIMER1CURRENTVAL register field value suitable for setting the register. */
#define ALT_TMR_TIMER1CURRENTVAL_TIMER1CURRENTVAL_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_TMR_TIMER1CURRENTVAL.
 */
struct ALT_TMR_TIMER1CURRENTVAL_s
{
    const volatile uint32_t  TIMER1CURRENTVAL : 32;  /* ALT_TMR_TIMER1CURRENTVAL_TIMER1CURRENTVAL */
};

/* The typedef declaration for register ALT_TMR_TIMER1CURRENTVAL. */
typedef struct ALT_TMR_TIMER1CURRENTVAL_s  ALT_TMR_TIMER1CURRENTVAL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_TMR_TIMER1CURRENTVAL register. */
#define ALT_TMR_TIMER1CURRENTVAL_RESET       0x00000000
/* The byte offset of the ALT_TMR_TIMER1CURRENTVAL register from the beginning of the component. */
#define ALT_TMR_TIMER1CURRENTVAL_OFST        0x4
/* The address of the ALT_TMR_TIMER1CURRENTVAL register. */
#define ALT_TMR_TIMER1CURRENTVAL_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_TMR_TIMER1CURRENTVAL_OFST))

/*
 * Register : Timer1 Control Register - TIMER1CONTROLREG
 * 
 * Name: Timer1 Control Register
 * 
 * Size: 4 bits
 * 
 * Address Offset: 8
 * 
 * Read/Write Access: Read/Write
 * 
 * This register controls enabling, operating mode (free-running or defined-count),
 * and interrupt mask of
 * 
 * Timer1. You can program each Timer1ControlReg to enable or disable a specific
 * timer and to control
 * 
 * its mode of operation.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                  
 * :-------|:-------|:------|:----------------------------------------------
 *  [0]    | RW     | 0x0   | ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE        
 *  [1]    | RW     | 0x0   | ALT_TMR_TIMER1CONTROLREG_TIMER_MODE          
 *  [2]    | RW     | 0x0   | ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK
 *  [31:3] | ???    | 0x0   | *UNDEFINED*                                  
 * 
 */
/*
 * Field : TIMER_ENABLE
 * 
 * Timer enable bit for Timer1.
 * 
 * 0: disable
 * 
 * 1: enable
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description       
 * :------------------------------------------------|:------|:-------------------
 *  ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_E_DISABLE | 0x0   | Timer1 is disabled
 *  ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_E_ENABLED | 0x1   | Timer1 is enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE
 * 
 * Timer1 is disabled
 */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_E_DISABLE 0x0
/*
 * Enumerated value for register field ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE
 * 
 * Timer1 is enabled
 */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_E_ENABLED 0x1

/* The Least Significant Bit (LSB) position of the ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE register field. */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE register field. */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_MSB        0
/* The width in bits of the ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE register field. */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_WIDTH      1
/* The mask used to set the ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE register field value. */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_SET_MSK    0x00000001
/* The mask used to clear the ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE register field value. */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE register field. */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_RESET      0x0
/* Extracts the ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE field value from a register. */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE register field value suitable for setting the register. */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : TIMER_MODE
 * 
 * Timer mode for Timer1.
 * 
 * 0: free_running mode
 * 
 * 1: user_defined count mode
 * 
 * NOTE: You must set the Timer1LoadCount register to all 1s before
 * 
 * enabling the timer in free-running mode.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value | Description                   
 * :---------------------------------------------------|:------|:-------------------------------
 *  ALT_TMR_TIMER1CONTROLREG_TIMER_MODE_E_FREE_RUNNING | 0x0   | Free Running mode of operation
 *  ALT_TMR_TIMER1CONTROLREG_TIMER_MODE_E_USER_DEFINED | 0x1   | User-Defined mode of operation
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_TMR_TIMER1CONTROLREG_TIMER_MODE
 * 
 * Free Running mode of operation
 */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_MODE_E_FREE_RUNNING  0x0
/*
 * Enumerated value for register field ALT_TMR_TIMER1CONTROLREG_TIMER_MODE
 * 
 * User-Defined mode of operation
 */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_MODE_E_USER_DEFINED  0x1

/* The Least Significant Bit (LSB) position of the ALT_TMR_TIMER1CONTROLREG_TIMER_MODE register field. */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_MODE_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_TMR_TIMER1CONTROLREG_TIMER_MODE register field. */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_MODE_MSB        1
/* The width in bits of the ALT_TMR_TIMER1CONTROLREG_TIMER_MODE register field. */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_MODE_WIDTH      1
/* The mask used to set the ALT_TMR_TIMER1CONTROLREG_TIMER_MODE register field value. */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_MODE_SET_MSK    0x00000002
/* The mask used to clear the ALT_TMR_TIMER1CONTROLREG_TIMER_MODE register field value. */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_MODE_CLR_MSK    0xfffffffd
/* The reset value of the ALT_TMR_TIMER1CONTROLREG_TIMER_MODE register field. */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_MODE_RESET      0x0
/* Extracts the ALT_TMR_TIMER1CONTROLREG_TIMER_MODE field value from a register. */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_MODE_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_TMR_TIMER1CONTROLREG_TIMER_MODE register field value suitable for setting the register. */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_MODE_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : TIMER_INTERRUPT_MASK
 * 
 * Timer interrupt mask for Timer1.
 * 
 * 0: not masked
 * 
 * 1: masked
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                     | Value | Description                 
 * :---------------------------------------------------------|:------|:-----------------------------
 *  ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK_E_UNMASKED | 0x0   | Timer1 interrupt is unmasked
 *  ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK_E_MASKED   | 0x1   | Timer1 interrupt is   masked
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK
 * 
 * Timer1 interrupt is unmasked
 */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK_E_UNMASKED    0x0
/*
 * Enumerated value for register field ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK
 * 
 * Timer1 interrupt is   masked
 */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK_E_MASKED      0x1

/* The Least Significant Bit (LSB) position of the ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK register field. */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK register field. */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK_MSB        2
/* The width in bits of the ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK register field. */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK_WIDTH      1
/* The mask used to set the ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK register field value. */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK_SET_MSK    0x00000004
/* The mask used to clear the ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK register field value. */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK_CLR_MSK    0xfffffffb
/* The reset value of the ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK register field. */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK_RESET      0x0
/* Extracts the ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK field value from a register. */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK register field value suitable for setting the register. */
#define ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK_SET(value) (((value) << 2) & 0x00000004)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_TMR_TIMER1CONTROLREG.
 */
struct ALT_TMR_TIMER1CONTROLREG_s
{
    volatile uint32_t  TIMER_ENABLE         :  1;  /* ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE */
    volatile uint32_t  TIMER_MODE           :  1;  /* ALT_TMR_TIMER1CONTROLREG_TIMER_MODE */
    volatile uint32_t  TIMER_INTERRUPT_MASK :  1;  /* ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK */
    uint32_t                                : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_TMR_TIMER1CONTROLREG. */
typedef struct ALT_TMR_TIMER1CONTROLREG_s  ALT_TMR_TIMER1CONTROLREG_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_TMR_TIMER1CONTROLREG register. */
#define ALT_TMR_TIMER1CONTROLREG_RESET       0x00000000
/* The byte offset of the ALT_TMR_TIMER1CONTROLREG register from the beginning of the component. */
#define ALT_TMR_TIMER1CONTROLREG_OFST        0x8
/* The address of the ALT_TMR_TIMER1CONTROLREG register. */
#define ALT_TMR_TIMER1CONTROLREG_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_TMR_TIMER1CONTROLREG_OFST))

/*
 * Register : Timer1 End-of-Interrupt Register - TIMER1EOI
 * 
 * Name: Timer1 End-of-Interrupt Register
 * 
 * Size: 1 bit
 * 
 * Address Offset: 12
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [0]    | R      | 0x0   | ALT_TMR_TIMER1EOI_TIMER1EOI
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                
 * 
 */
/*
 * Field : TIMER1EOI
 * 
 * Reading from this register
 * 
 * returns all zeroes (0) and clears the interrupt from Timer1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_TMR_TIMER1EOI_TIMER1EOI register field. */
#define ALT_TMR_TIMER1EOI_TIMER1EOI_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_TMR_TIMER1EOI_TIMER1EOI register field. */
#define ALT_TMR_TIMER1EOI_TIMER1EOI_MSB        0
/* The width in bits of the ALT_TMR_TIMER1EOI_TIMER1EOI register field. */
#define ALT_TMR_TIMER1EOI_TIMER1EOI_WIDTH      1
/* The mask used to set the ALT_TMR_TIMER1EOI_TIMER1EOI register field value. */
#define ALT_TMR_TIMER1EOI_TIMER1EOI_SET_MSK    0x00000001
/* The mask used to clear the ALT_TMR_TIMER1EOI_TIMER1EOI register field value. */
#define ALT_TMR_TIMER1EOI_TIMER1EOI_CLR_MSK    0xfffffffe
/* The reset value of the ALT_TMR_TIMER1EOI_TIMER1EOI register field. */
#define ALT_TMR_TIMER1EOI_TIMER1EOI_RESET      0x0
/* Extracts the ALT_TMR_TIMER1EOI_TIMER1EOI field value from a register. */
#define ALT_TMR_TIMER1EOI_TIMER1EOI_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_TMR_TIMER1EOI_TIMER1EOI register field value suitable for setting the register. */
#define ALT_TMR_TIMER1EOI_TIMER1EOI_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_TMR_TIMER1EOI.
 */
struct ALT_TMR_TIMER1EOI_s
{
    const volatile uint32_t  TIMER1EOI :  1;  /* ALT_TMR_TIMER1EOI_TIMER1EOI */
    uint32_t                           : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_TMR_TIMER1EOI. */
typedef struct ALT_TMR_TIMER1EOI_s  ALT_TMR_TIMER1EOI_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_TMR_TIMER1EOI register. */
#define ALT_TMR_TIMER1EOI_RESET       0x00000000
/* The byte offset of the ALT_TMR_TIMER1EOI register from the beginning of the component. */
#define ALT_TMR_TIMER1EOI_OFST        0xc
/* The address of the ALT_TMR_TIMER1EOI register. */
#define ALT_TMR_TIMER1EOI_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_TMR_TIMER1EOI_OFST))

/*
 * Register : Timer1 Interrupt Status Register - TIMER1INTSTAT
 * 
 * Name: Timer1 Interrupt Status Register
 * 
 * Size: 1 bit
 * 
 * Address Offset: 16
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [0]    | R      | 0x0   | ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                        
 * 
 */
/*
 * Field : TIMER1INTSTAT
 * 
 * Contains the interrupt status for Timer1.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                           | Value | Description                 
 * :-----------------------------------------------|:------|:-----------------------------
 *  ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT_E_INACTIVE | 0x0   | Timer2 Interrupt is inactive
 *  ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT_E_ACTIVE   | 0x1   | Timer1 Interrupt is   active
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT
 * 
 * Timer2 Interrupt is inactive
 */
#define ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT_E_INACTIVE  0x0
/*
 * Enumerated value for register field ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT
 * 
 * Timer1 Interrupt is   active
 */
#define ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT_E_ACTIVE    0x1

/* The Least Significant Bit (LSB) position of the ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT register field. */
#define ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT register field. */
#define ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT_MSB        0
/* The width in bits of the ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT register field. */
#define ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT_WIDTH      1
/* The mask used to set the ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT register field value. */
#define ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT_SET_MSK    0x00000001
/* The mask used to clear the ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT register field value. */
#define ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT_CLR_MSK    0xfffffffe
/* The reset value of the ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT register field. */
#define ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT_RESET      0x0
/* Extracts the ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT field value from a register. */
#define ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT register field value suitable for setting the register. */
#define ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_TMR_TIMER1INTSTAT.
 */
struct ALT_TMR_TIMER1INTSTAT_s
{
    const volatile uint32_t  TIMER1INTSTAT :  1;  /* ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT */
    uint32_t                               : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_TMR_TIMER1INTSTAT. */
typedef struct ALT_TMR_TIMER1INTSTAT_s  ALT_TMR_TIMER1INTSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_TMR_TIMER1INTSTAT register. */
#define ALT_TMR_TIMER1INTSTAT_RESET       0x00000000
/* The byte offset of the ALT_TMR_TIMER1INTSTAT register from the beginning of the component. */
#define ALT_TMR_TIMER1INTSTAT_OFST        0x10
/* The address of the ALT_TMR_TIMER1INTSTAT register. */
#define ALT_TMR_TIMER1INTSTAT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_TMR_TIMER1INTSTAT_OFST))

/*
 * Register : Timers Interrupt Status Register - TIMERSINTSTAT
 * 
 * Name: Timers Interrupt Status Register
 * 
 * Size: 1-8 bits
 * 
 * Address Offset: 0xa0
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [0]    | R      | 0x0   | ALT_TMR_TIMERSINTSTAT_TIMERSINTSTAT
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                        
 * 
 */
/*
 * Field : TIMERSINTSTAT
 * 
 * Contains the interrupt status of all timers in the component. If a bit of
 * 
 * this register is 0, then the corresponding timer interrupt is not active
 * 
 * and the corresponding interrupt could be on either the timer_intr bus
 * 
 * or the timer_intr_n bus, depending on the interrupt polarity you have
 * 
 * chosen. Similarly, if a bit of this register is 1, then the corresponding
 * 
 * interrupt bit has been set in the relevant interrupt bus. In both cases,
 * 
 * the status reported is the status after the interrupt mask has been
 * 
 * applied. Reading from this register does not clear any active
 * 
 * interrupts:
 * 
 * 0 = either timer_intr or timer_intr_n is not active after masking
 * 
 * 1 = either timer_intr or timer_intr_n is active after masking.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                           | Value | Description               
 * :-----------------------------------------------|:------|:---------------------------
 *  ALT_TMR_TIMERSINTSTAT_TIMERSINTSTAT_E_INACTIVE | 0x0   | Timer_intr(_n) is inactive
 *  ALT_TMR_TIMERSINTSTAT_TIMERSINTSTAT_E_ACTIVE   | 0x1   | Timer_intr(_n) is   active
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_TMR_TIMERSINTSTAT_TIMERSINTSTAT
 * 
 * Timer_intr(_n) is inactive
 */
#define ALT_TMR_TIMERSINTSTAT_TIMERSINTSTAT_E_INACTIVE  0x0
/*
 * Enumerated value for register field ALT_TMR_TIMERSINTSTAT_TIMERSINTSTAT
 * 
 * Timer_intr(_n) is   active
 */
#define ALT_TMR_TIMERSINTSTAT_TIMERSINTSTAT_E_ACTIVE    0x1

/* The Least Significant Bit (LSB) position of the ALT_TMR_TIMERSINTSTAT_TIMERSINTSTAT register field. */
#define ALT_TMR_TIMERSINTSTAT_TIMERSINTSTAT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_TMR_TIMERSINTSTAT_TIMERSINTSTAT register field. */
#define ALT_TMR_TIMERSINTSTAT_TIMERSINTSTAT_MSB        0
/* The width in bits of the ALT_TMR_TIMERSINTSTAT_TIMERSINTSTAT register field. */
#define ALT_TMR_TIMERSINTSTAT_TIMERSINTSTAT_WIDTH      1
/* The mask used to set the ALT_TMR_TIMERSINTSTAT_TIMERSINTSTAT register field value. */
#define ALT_TMR_TIMERSINTSTAT_TIMERSINTSTAT_SET_MSK    0x00000001
/* The mask used to clear the ALT_TMR_TIMERSINTSTAT_TIMERSINTSTAT register field value. */
#define ALT_TMR_TIMERSINTSTAT_TIMERSINTSTAT_CLR_MSK    0xfffffffe
/* The reset value of the ALT_TMR_TIMERSINTSTAT_TIMERSINTSTAT register field. */
#define ALT_TMR_TIMERSINTSTAT_TIMERSINTSTAT_RESET      0x0
/* Extracts the ALT_TMR_TIMERSINTSTAT_TIMERSINTSTAT field value from a register. */
#define ALT_TMR_TIMERSINTSTAT_TIMERSINTSTAT_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_TMR_TIMERSINTSTAT_TIMERSINTSTAT register field value suitable for setting the register. */
#define ALT_TMR_TIMERSINTSTAT_TIMERSINTSTAT_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_TMR_TIMERSINTSTAT.
 */
struct ALT_TMR_TIMERSINTSTAT_s
{
    const volatile uint32_t  TIMERSINTSTAT :  1;  /* ALT_TMR_TIMERSINTSTAT_TIMERSINTSTAT */
    uint32_t                               : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_TMR_TIMERSINTSTAT. */
typedef struct ALT_TMR_TIMERSINTSTAT_s  ALT_TMR_TIMERSINTSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_TMR_TIMERSINTSTAT register. */
#define ALT_TMR_TIMERSINTSTAT_RESET       0x00000000
/* The byte offset of the ALT_TMR_TIMERSINTSTAT register from the beginning of the component. */
#define ALT_TMR_TIMERSINTSTAT_OFST        0xa0
/* The address of the ALT_TMR_TIMERSINTSTAT register. */
#define ALT_TMR_TIMERSINTSTAT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_TMR_TIMERSINTSTAT_OFST))

/*
 * Register : Timers End-of-Interrupt Register - TIMERSEOI
 * 
 * Name: Timers End-of-Interrupt Register
 * 
 * Size: 1-8 bits
 * 
 * Address Offset: 0xa4
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [0]    | R      | 0x0   | ALT_TMR_TIMERSEOI_TIMERSEOI
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                
 * 
 */
/*
 * Field : TIMERSEOI
 * 
 * Reading this register returns all zeroes (0) and clears all active
 * 
 * interrupts.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_TMR_TIMERSEOI_TIMERSEOI register field. */
#define ALT_TMR_TIMERSEOI_TIMERSEOI_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_TMR_TIMERSEOI_TIMERSEOI register field. */
#define ALT_TMR_TIMERSEOI_TIMERSEOI_MSB        0
/* The width in bits of the ALT_TMR_TIMERSEOI_TIMERSEOI register field. */
#define ALT_TMR_TIMERSEOI_TIMERSEOI_WIDTH      1
/* The mask used to set the ALT_TMR_TIMERSEOI_TIMERSEOI register field value. */
#define ALT_TMR_TIMERSEOI_TIMERSEOI_SET_MSK    0x00000001
/* The mask used to clear the ALT_TMR_TIMERSEOI_TIMERSEOI register field value. */
#define ALT_TMR_TIMERSEOI_TIMERSEOI_CLR_MSK    0xfffffffe
/* The reset value of the ALT_TMR_TIMERSEOI_TIMERSEOI register field. */
#define ALT_TMR_TIMERSEOI_TIMERSEOI_RESET      0x0
/* Extracts the ALT_TMR_TIMERSEOI_TIMERSEOI field value from a register. */
#define ALT_TMR_TIMERSEOI_TIMERSEOI_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_TMR_TIMERSEOI_TIMERSEOI register field value suitable for setting the register. */
#define ALT_TMR_TIMERSEOI_TIMERSEOI_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_TMR_TIMERSEOI.
 */
struct ALT_TMR_TIMERSEOI_s
{
    const volatile uint32_t  TIMERSEOI :  1;  /* ALT_TMR_TIMERSEOI_TIMERSEOI */
    uint32_t                           : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_TMR_TIMERSEOI. */
typedef struct ALT_TMR_TIMERSEOI_s  ALT_TMR_TIMERSEOI_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_TMR_TIMERSEOI register. */
#define ALT_TMR_TIMERSEOI_RESET       0x00000000
/* The byte offset of the ALT_TMR_TIMERSEOI register from the beginning of the component. */
#define ALT_TMR_TIMERSEOI_OFST        0xa4
/* The address of the ALT_TMR_TIMERSEOI register. */
#define ALT_TMR_TIMERSEOI_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_TMR_TIMERSEOI_OFST))

/*
 * Register : Timers Raw Interrupt Status Register - TIMERSRAWINTSTAT
 * 
 * Name: Timers Raw Interrupt Status Register
 * 
 * Size: 1-8 bits
 * 
 * Address Offset: 0xa8
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                              
 * :-------|:-------|:------|:------------------------------------------
 *  [0]    | R      | 0x0   | ALT_TMR_TIMERSRAWINTSTAT_TIMERSRAWINTSTAT
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                              
 * 
 */
/*
 * Field : TIMERSRAWINTSTAT
 * 
 * The register contains the unmasked interrupt status of all timers in
 * 
 * the component.
 * 
 * 0 = either timer_intr or timer_intr_n is not active prior to masking
 * 
 * 1 = either timer_intr or timer_intr_n is active prior to masking.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                 | Value | Description                   
 * :-----------------------------------------------------|:------|:-------------------------------
 *  ALT_TMR_TIMERSRAWINTSTAT_TIMERSRAWINTSTAT_E_INACTIVE | 0x0   | Raw Timer_intr(_n) is inactive
 *  ALT_TMR_TIMERSRAWINTSTAT_TIMERSRAWINTSTAT_E_ACTIVE   | 0x1   | Raw Timer_intr(_n) is   active
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_TMR_TIMERSRAWINTSTAT_TIMERSRAWINTSTAT
 * 
 * Raw Timer_intr(_n) is inactive
 */
#define ALT_TMR_TIMERSRAWINTSTAT_TIMERSRAWINTSTAT_E_INACTIVE    0x0
/*
 * Enumerated value for register field ALT_TMR_TIMERSRAWINTSTAT_TIMERSRAWINTSTAT
 * 
 * Raw Timer_intr(_n) is   active
 */
#define ALT_TMR_TIMERSRAWINTSTAT_TIMERSRAWINTSTAT_E_ACTIVE      0x1

/* The Least Significant Bit (LSB) position of the ALT_TMR_TIMERSRAWINTSTAT_TIMERSRAWINTSTAT register field. */
#define ALT_TMR_TIMERSRAWINTSTAT_TIMERSRAWINTSTAT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_TMR_TIMERSRAWINTSTAT_TIMERSRAWINTSTAT register field. */
#define ALT_TMR_TIMERSRAWINTSTAT_TIMERSRAWINTSTAT_MSB        0
/* The width in bits of the ALT_TMR_TIMERSRAWINTSTAT_TIMERSRAWINTSTAT register field. */
#define ALT_TMR_TIMERSRAWINTSTAT_TIMERSRAWINTSTAT_WIDTH      1
/* The mask used to set the ALT_TMR_TIMERSRAWINTSTAT_TIMERSRAWINTSTAT register field value. */
#define ALT_TMR_TIMERSRAWINTSTAT_TIMERSRAWINTSTAT_SET_MSK    0x00000001
/* The mask used to clear the ALT_TMR_TIMERSRAWINTSTAT_TIMERSRAWINTSTAT register field value. */
#define ALT_TMR_TIMERSRAWINTSTAT_TIMERSRAWINTSTAT_CLR_MSK    0xfffffffe
/* The reset value of the ALT_TMR_TIMERSRAWINTSTAT_TIMERSRAWINTSTAT register field. */
#define ALT_TMR_TIMERSRAWINTSTAT_TIMERSRAWINTSTAT_RESET      0x0
/* Extracts the ALT_TMR_TIMERSRAWINTSTAT_TIMERSRAWINTSTAT field value from a register. */
#define ALT_TMR_TIMERSRAWINTSTAT_TIMERSRAWINTSTAT_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_TMR_TIMERSRAWINTSTAT_TIMERSRAWINTSTAT register field value suitable for setting the register. */
#define ALT_TMR_TIMERSRAWINTSTAT_TIMERSRAWINTSTAT_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_TMR_TIMERSRAWINTSTAT.
 */
struct ALT_TMR_TIMERSRAWINTSTAT_s
{
    const volatile uint32_t  TIMERSRAWINTSTAT :  1;  /* ALT_TMR_TIMERSRAWINTSTAT_TIMERSRAWINTSTAT */
    uint32_t                                  : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_TMR_TIMERSRAWINTSTAT. */
typedef struct ALT_TMR_TIMERSRAWINTSTAT_s  ALT_TMR_TIMERSRAWINTSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_TMR_TIMERSRAWINTSTAT register. */
#define ALT_TMR_TIMERSRAWINTSTAT_RESET       0x00000000
/* The byte offset of the ALT_TMR_TIMERSRAWINTSTAT register from the beginning of the component. */
#define ALT_TMR_TIMERSRAWINTSTAT_OFST        0xa8
/* The address of the ALT_TMR_TIMERSRAWINTSTAT register. */
#define ALT_TMR_TIMERSRAWINTSTAT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_TMR_TIMERSRAWINTSTAT_OFST))

/*
 * Register : Timers Component Version - TIMERSCOMPVERSION
 * 
 * Name: Timers Component Version
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0xac
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset      | Description                                
 * :-------|:-------|:-----------|:--------------------------------------------
 *  [31:0] | R      | 0x3230392a | ALT_TMR_TIMERSCOMPVERSION_TIMERSCOMPVERSION
 * 
 */
/*
 * Field : TIMERSCOMPVERSION
 * 
 * Current revision number of the DW_apb_timers component.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_TMR_TIMERSCOMPVERSION_TIMERSCOMPVERSION register field. */
#define ALT_TMR_TIMERSCOMPVERSION_TIMERSCOMPVERSION_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_TMR_TIMERSCOMPVERSION_TIMERSCOMPVERSION register field. */
#define ALT_TMR_TIMERSCOMPVERSION_TIMERSCOMPVERSION_MSB        31
/* The width in bits of the ALT_TMR_TIMERSCOMPVERSION_TIMERSCOMPVERSION register field. */
#define ALT_TMR_TIMERSCOMPVERSION_TIMERSCOMPVERSION_WIDTH      32
/* The mask used to set the ALT_TMR_TIMERSCOMPVERSION_TIMERSCOMPVERSION register field value. */
#define ALT_TMR_TIMERSCOMPVERSION_TIMERSCOMPVERSION_SET_MSK    0xffffffff
/* The mask used to clear the ALT_TMR_TIMERSCOMPVERSION_TIMERSCOMPVERSION register field value. */
#define ALT_TMR_TIMERSCOMPVERSION_TIMERSCOMPVERSION_CLR_MSK    0x00000000
/* The reset value of the ALT_TMR_TIMERSCOMPVERSION_TIMERSCOMPVERSION register field. */
#define ALT_TMR_TIMERSCOMPVERSION_TIMERSCOMPVERSION_RESET      0x3230392a
/* Extracts the ALT_TMR_TIMERSCOMPVERSION_TIMERSCOMPVERSION field value from a register. */
#define ALT_TMR_TIMERSCOMPVERSION_TIMERSCOMPVERSION_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_TMR_TIMERSCOMPVERSION_TIMERSCOMPVERSION register field value suitable for setting the register. */
#define ALT_TMR_TIMERSCOMPVERSION_TIMERSCOMPVERSION_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_TMR_TIMERSCOMPVERSION.
 */
struct ALT_TMR_TIMERSCOMPVERSION_s
{
    const volatile uint32_t  TIMERSCOMPVERSION : 32;  /* ALT_TMR_TIMERSCOMPVERSION_TIMERSCOMPVERSION */
};

/* The typedef declaration for register ALT_TMR_TIMERSCOMPVERSION. */
typedef struct ALT_TMR_TIMERSCOMPVERSION_s  ALT_TMR_TIMERSCOMPVERSION_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_TMR_TIMERSCOMPVERSION register. */
#define ALT_TMR_TIMERSCOMPVERSION_RESET       0x3230392a
/* The byte offset of the ALT_TMR_TIMERSCOMPVERSION register from the beginning of the component. */
#define ALT_TMR_TIMERSCOMPVERSION_OFST        0xac
/* The address of the ALT_TMR_TIMERSCOMPVERSION register. */
#define ALT_TMR_TIMERSCOMPVERSION_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_TMR_TIMERSCOMPVERSION_OFST))

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register group ALT_TMR.
 */
struct ALT_TMR_s
{
    volatile ALT_TMR_TIMER1LOADCOUNT_t    TIMER1LOADCOUNT;      /* ALT_TMR_TIMER1LOADCOUNT */
    volatile ALT_TMR_TIMER1CURRENTVAL_t   TIMER1CURRENTVAL;     /* ALT_TMR_TIMER1CURRENTVAL */
    volatile ALT_TMR_TIMER1CONTROLREG_t   TIMER1CONTROLREG;     /* ALT_TMR_TIMER1CONTROLREG */
    volatile ALT_TMR_TIMER1EOI_t          TIMER1EOI;            /* ALT_TMR_TIMER1EOI */
    volatile ALT_TMR_TIMER1INTSTAT_t      TIMER1INTSTAT;        /* ALT_TMR_TIMER1INTSTAT */
    volatile uint32_t                     _pad_0x14_0x9f[35];   /* *UNDEFINED* */
    volatile ALT_TMR_TIMERSINTSTAT_t      TIMERSINTSTAT;        /* ALT_TMR_TIMERSINTSTAT */
    volatile ALT_TMR_TIMERSEOI_t          TIMERSEOI;            /* ALT_TMR_TIMERSEOI */
    volatile ALT_TMR_TIMERSRAWINTSTAT_t   TIMERSRAWINTSTAT;     /* ALT_TMR_TIMERSRAWINTSTAT */
    volatile ALT_TMR_TIMERSCOMPVERSION_t  TIMERSCOMPVERSION;    /* ALT_TMR_TIMERSCOMPVERSION */
    volatile uint32_t                     _pad_0xb0_0x100[20];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_TMR. */
typedef struct ALT_TMR_s  ALT_TMR_t;
/* The struct declaration for the raw register contents of register group ALT_TMR. */
struct ALT_TMR_raw_s
{
    volatile uint32_t  TIMER1LOADCOUNT;      /* ALT_TMR_TIMER1LOADCOUNT */
    volatile uint32_t  TIMER1CURRENTVAL;     /* ALT_TMR_TIMER1CURRENTVAL */
    volatile uint32_t  TIMER1CONTROLREG;     /* ALT_TMR_TIMER1CONTROLREG */
    volatile uint32_t  TIMER1EOI;            /* ALT_TMR_TIMER1EOI */
    volatile uint32_t  TIMER1INTSTAT;        /* ALT_TMR_TIMER1INTSTAT */
    volatile uint32_t  _pad_0x14_0x9f[35];   /* *UNDEFINED* */
    volatile uint32_t  TIMERSINTSTAT;        /* ALT_TMR_TIMERSINTSTAT */
    volatile uint32_t  TIMERSEOI;            /* ALT_TMR_TIMERSEOI */
    volatile uint32_t  TIMERSRAWINTSTAT;     /* ALT_TMR_TIMERSRAWINTSTAT */
    volatile uint32_t  TIMERSCOMPVERSION;    /* ALT_TMR_TIMERSCOMPVERSION */
    volatile uint32_t  _pad_0xb0_0x100[20];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_TMR. */
typedef struct ALT_TMR_raw_s  ALT_TMR_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_TMR_H__ */

