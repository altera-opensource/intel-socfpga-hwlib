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
 * Component : ALT_TMR
 * 
 */
/*
 * Register : timer1loadcount
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
 * :-------|:-------|:------|:--------------------------------
 *  [31:0] | RW     | 0x0   | ALT_TMR_TMR1LDCOUNT_TMR1LDCOUNT
 * 
 */
/*
 * Field : timer1loadcount
 * 
 * Value to be loaded into Timer1. This is the value from which counting
 * 
 * commences. Any value written to this register is loaded into the associated
 * timer.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_TMR_TMR1LDCOUNT_TMR1LDCOUNT register field. */
#define ALT_TMR_TMR1LDCOUNT_TMR1LDCOUNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_TMR_TMR1LDCOUNT_TMR1LDCOUNT register field. */
#define ALT_TMR_TMR1LDCOUNT_TMR1LDCOUNT_MSB        31
/* The width in bits of the ALT_TMR_TMR1LDCOUNT_TMR1LDCOUNT register field. */
#define ALT_TMR_TMR1LDCOUNT_TMR1LDCOUNT_WIDTH      32
/* The mask used to set the ALT_TMR_TMR1LDCOUNT_TMR1LDCOUNT register field value. */
#define ALT_TMR_TMR1LDCOUNT_TMR1LDCOUNT_SET_MSK    0xffffffff
/* The mask used to clear the ALT_TMR_TMR1LDCOUNT_TMR1LDCOUNT register field value. */
#define ALT_TMR_TMR1LDCOUNT_TMR1LDCOUNT_CLR_MSK    0x00000000
/* The reset value of the ALT_TMR_TMR1LDCOUNT_TMR1LDCOUNT register field. */
#define ALT_TMR_TMR1LDCOUNT_TMR1LDCOUNT_RESET      0x0
/* Extracts the ALT_TMR_TMR1LDCOUNT_TMR1LDCOUNT field value from a register. */
#define ALT_TMR_TMR1LDCOUNT_TMR1LDCOUNT_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_TMR_TMR1LDCOUNT_TMR1LDCOUNT register field value suitable for setting the register. */
#define ALT_TMR_TMR1LDCOUNT_TMR1LDCOUNT_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_TMR_TMR1LDCOUNT.
 */
struct ALT_TMR_TMR1LDCOUNT_s
{
    uint32_t  timer1loadcount : 32;  /* ALT_TMR_TMR1LDCOUNT_TMR1LDCOUNT */
};

/* The typedef declaration for register ALT_TMR_TMR1LDCOUNT. */
typedef volatile struct ALT_TMR_TMR1LDCOUNT_s  ALT_TMR_TMR1LDCOUNT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_TMR_TMR1LDCOUNT register. */
#define ALT_TMR_TMR1LDCOUNT_RESET       0x00000000
/* The byte offset of the ALT_TMR_TMR1LDCOUNT register from the beginning of the component. */
#define ALT_TMR_TMR1LDCOUNT_OFST        0x0
/* The address of the ALT_TMR_TMR1LDCOUNT register. */
#define ALT_TMR_TMR1LDCOUNT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_TMR_TMR1LDCOUNT_OFST))

/*
 * Register : timer1currentval
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
 * :-------|:-------|:------|:------------------------------
 *  [31:0] | R      | 0x0   | ALT_TMR_TMR1CURVAL_TMR1CURVAL
 * 
 */
/*
 * Field : timer1currentval
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
/* The Least Significant Bit (LSB) position of the ALT_TMR_TMR1CURVAL_TMR1CURVAL register field. */
#define ALT_TMR_TMR1CURVAL_TMR1CURVAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_TMR_TMR1CURVAL_TMR1CURVAL register field. */
#define ALT_TMR_TMR1CURVAL_TMR1CURVAL_MSB        31
/* The width in bits of the ALT_TMR_TMR1CURVAL_TMR1CURVAL register field. */
#define ALT_TMR_TMR1CURVAL_TMR1CURVAL_WIDTH      32
/* The mask used to set the ALT_TMR_TMR1CURVAL_TMR1CURVAL register field value. */
#define ALT_TMR_TMR1CURVAL_TMR1CURVAL_SET_MSK    0xffffffff
/* The mask used to clear the ALT_TMR_TMR1CURVAL_TMR1CURVAL register field value. */
#define ALT_TMR_TMR1CURVAL_TMR1CURVAL_CLR_MSK    0x00000000
/* The reset value of the ALT_TMR_TMR1CURVAL_TMR1CURVAL register field. */
#define ALT_TMR_TMR1CURVAL_TMR1CURVAL_RESET      0x0
/* Extracts the ALT_TMR_TMR1CURVAL_TMR1CURVAL field value from a register. */
#define ALT_TMR_TMR1CURVAL_TMR1CURVAL_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_TMR_TMR1CURVAL_TMR1CURVAL register field value suitable for setting the register. */
#define ALT_TMR_TMR1CURVAL_TMR1CURVAL_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_TMR_TMR1CURVAL.
 */
struct ALT_TMR_TMR1CURVAL_s
{
    const uint32_t  timer1currentval : 32;  /* ALT_TMR_TMR1CURVAL_TMR1CURVAL */
};

/* The typedef declaration for register ALT_TMR_TMR1CURVAL. */
typedef volatile struct ALT_TMR_TMR1CURVAL_s  ALT_TMR_TMR1CURVAL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_TMR_TMR1CURVAL register. */
#define ALT_TMR_TMR1CURVAL_RESET       0x00000000
/* The byte offset of the ALT_TMR_TMR1CURVAL register from the beginning of the component. */
#define ALT_TMR_TMR1CURVAL_OFST        0x4
/* The address of the ALT_TMR_TMR1CURVAL register. */
#define ALT_TMR_TMR1CURVAL_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_TMR_TMR1CURVAL_OFST))

/*
 * Register : timer1controlreg
 * 
 * Name: Timer1 Control Register
 * 
 * Size: 3 bits
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
 * :-------|:-------|:------|:--------------------------------
 *  [0]    | RW     | 0x0   | ALT_TMR_TMR1CTLREG_TMR1_EN     
 *  [1]    | RW     | 0x0   | ALT_TMR_TMR1CTLREG_TMR1_MOD    
 *  [2]    | RW     | 0x0   | ALT_TMR_TMR1CTLREG_TMR1_INT_MSK
 *  [31:3] | ???    | 0x0   | *UNDEFINED*                    
 * 
 */
/*
 * Field : timer1_enable
 * 
 * Timer enable bit for Timer1.
 * 
 * 0: disable
 * 
 * 1: enable
 * 
 * Field Enumeration Values:
 * 
 *  Enum                              | Value | Description    
 * :----------------------------------|:------|:----------------
 *  ALT_TMR_TMR1CTLREG_TMR1_EN_E_DISD | 0x0   | Timer1 Disabled
 *  ALT_TMR_TMR1CTLREG_TMR1_EN_E_END  | 0x1   | Timer1 Enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_TMR_TMR1CTLREG_TMR1_EN
 * 
 * Timer1 Disabled
 */
#define ALT_TMR_TMR1CTLREG_TMR1_EN_E_DISD   0x0
/*
 * Enumerated value for register field ALT_TMR_TMR1CTLREG_TMR1_EN
 * 
 * Timer1 Enabled
 */
#define ALT_TMR_TMR1CTLREG_TMR1_EN_E_END    0x1

/* The Least Significant Bit (LSB) position of the ALT_TMR_TMR1CTLREG_TMR1_EN register field. */
#define ALT_TMR_TMR1CTLREG_TMR1_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_TMR_TMR1CTLREG_TMR1_EN register field. */
#define ALT_TMR_TMR1CTLREG_TMR1_EN_MSB        0
/* The width in bits of the ALT_TMR_TMR1CTLREG_TMR1_EN register field. */
#define ALT_TMR_TMR1CTLREG_TMR1_EN_WIDTH      1
/* The mask used to set the ALT_TMR_TMR1CTLREG_TMR1_EN register field value. */
#define ALT_TMR_TMR1CTLREG_TMR1_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_TMR_TMR1CTLREG_TMR1_EN register field value. */
#define ALT_TMR_TMR1CTLREG_TMR1_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_TMR_TMR1CTLREG_TMR1_EN register field. */
#define ALT_TMR_TMR1CTLREG_TMR1_EN_RESET      0x0
/* Extracts the ALT_TMR_TMR1CTLREG_TMR1_EN field value from a register. */
#define ALT_TMR_TMR1CTLREG_TMR1_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_TMR_TMR1CTLREG_TMR1_EN register field value suitable for setting the register. */
#define ALT_TMR_TMR1CTLREG_TMR1_EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : timer1_mode
 * 
 * Timer mode for Timer1.
 * 
 * 0: free-running mode
 * 
 * 1: user-defined count mode
 * 
 * NOTE: You must set the Timer1LoadCount register to all 1s before
 * 
 * enabling the timer in free-running mode.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description            
 * :--------------------------------------|:------|:------------------------
 *  ALT_TMR_TMR1CTLREG_TMR1_MOD_E_FREERUN | 0x0   | Free-running mode      
 *  ALT_TMR_TMR1CTLREG_TMR1_MOD_E_USEDEF  | 0x1   | User-defined count mode
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_TMR_TMR1CTLREG_TMR1_MOD
 * 
 * Free-running mode
 */
#define ALT_TMR_TMR1CTLREG_TMR1_MOD_E_FREERUN   0x0
/*
 * Enumerated value for register field ALT_TMR_TMR1CTLREG_TMR1_MOD
 * 
 * User-defined count mode
 */
#define ALT_TMR_TMR1CTLREG_TMR1_MOD_E_USEDEF    0x1

/* The Least Significant Bit (LSB) position of the ALT_TMR_TMR1CTLREG_TMR1_MOD register field. */
#define ALT_TMR_TMR1CTLREG_TMR1_MOD_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_TMR_TMR1CTLREG_TMR1_MOD register field. */
#define ALT_TMR_TMR1CTLREG_TMR1_MOD_MSB        1
/* The width in bits of the ALT_TMR_TMR1CTLREG_TMR1_MOD register field. */
#define ALT_TMR_TMR1CTLREG_TMR1_MOD_WIDTH      1
/* The mask used to set the ALT_TMR_TMR1CTLREG_TMR1_MOD register field value. */
#define ALT_TMR_TMR1CTLREG_TMR1_MOD_SET_MSK    0x00000002
/* The mask used to clear the ALT_TMR_TMR1CTLREG_TMR1_MOD register field value. */
#define ALT_TMR_TMR1CTLREG_TMR1_MOD_CLR_MSK    0xfffffffd
/* The reset value of the ALT_TMR_TMR1CTLREG_TMR1_MOD register field. */
#define ALT_TMR_TMR1CTLREG_TMR1_MOD_RESET      0x0
/* Extracts the ALT_TMR_TMR1CTLREG_TMR1_MOD field value from a register. */
#define ALT_TMR_TMR1CTLREG_TMR1_MOD_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_TMR_TMR1CTLREG_TMR1_MOD register field value suitable for setting the register. */
#define ALT_TMR_TMR1CTLREG_TMR1_MOD_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : timer1_interrupt_mask
 * 
 * Timer interrupt mask for Timer1.
 * 
 * 0: not masked
 * 
 * 1: masked
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description                   
 * :-------------------------------------------|:------|:-------------------------------
 *  ALT_TMR_TMR1CTLREG_TMR1_INT_MSK_E_NOTMSKED | 0x0   | interrupt not masked (enabled)
 *  ALT_TMR_TMR1CTLREG_TMR1_INT_MSK_E_MSKED    | 0x1   | interrupt masked (disabled)   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_TMR_TMR1CTLREG_TMR1_INT_MSK
 * 
 * interrupt not masked (enabled)
 */
#define ALT_TMR_TMR1CTLREG_TMR1_INT_MSK_E_NOTMSKED  0x0
/*
 * Enumerated value for register field ALT_TMR_TMR1CTLREG_TMR1_INT_MSK
 * 
 * interrupt masked (disabled)
 */
#define ALT_TMR_TMR1CTLREG_TMR1_INT_MSK_E_MSKED     0x1

/* The Least Significant Bit (LSB) position of the ALT_TMR_TMR1CTLREG_TMR1_INT_MSK register field. */
#define ALT_TMR_TMR1CTLREG_TMR1_INT_MSK_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_TMR_TMR1CTLREG_TMR1_INT_MSK register field. */
#define ALT_TMR_TMR1CTLREG_TMR1_INT_MSK_MSB        2
/* The width in bits of the ALT_TMR_TMR1CTLREG_TMR1_INT_MSK register field. */
#define ALT_TMR_TMR1CTLREG_TMR1_INT_MSK_WIDTH      1
/* The mask used to set the ALT_TMR_TMR1CTLREG_TMR1_INT_MSK register field value. */
#define ALT_TMR_TMR1CTLREG_TMR1_INT_MSK_SET_MSK    0x00000004
/* The mask used to clear the ALT_TMR_TMR1CTLREG_TMR1_INT_MSK register field value. */
#define ALT_TMR_TMR1CTLREG_TMR1_INT_MSK_CLR_MSK    0xfffffffb
/* The reset value of the ALT_TMR_TMR1CTLREG_TMR1_INT_MSK register field. */
#define ALT_TMR_TMR1CTLREG_TMR1_INT_MSK_RESET      0x0
/* Extracts the ALT_TMR_TMR1CTLREG_TMR1_INT_MSK field value from a register. */
#define ALT_TMR_TMR1CTLREG_TMR1_INT_MSK_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_TMR_TMR1CTLREG_TMR1_INT_MSK register field value suitable for setting the register. */
#define ALT_TMR_TMR1CTLREG_TMR1_INT_MSK_SET(value) (((value) << 2) & 0x00000004)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_TMR_TMR1CTLREG.
 */
struct ALT_TMR_TMR1CTLREG_s
{
    uint32_t  timer1_enable         :  1;  /* ALT_TMR_TMR1CTLREG_TMR1_EN */
    uint32_t  timer1_mode           :  1;  /* ALT_TMR_TMR1CTLREG_TMR1_MOD */
    uint32_t  timer1_interrupt_mask :  1;  /* ALT_TMR_TMR1CTLREG_TMR1_INT_MSK */
    uint32_t                        : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_TMR_TMR1CTLREG. */
typedef volatile struct ALT_TMR_TMR1CTLREG_s  ALT_TMR_TMR1CTLREG_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_TMR_TMR1CTLREG register. */
#define ALT_TMR_TMR1CTLREG_RESET       0x00000000
/* The byte offset of the ALT_TMR_TMR1CTLREG register from the beginning of the component. */
#define ALT_TMR_TMR1CTLREG_OFST        0x8
/* The address of the ALT_TMR_TMR1CTLREG register. */
#define ALT_TMR_TMR1CTLREG_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_TMR_TMR1CTLREG_OFST))

/*
 * Register : timer1eoi
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
 * :-------|:-------|:------|:------------------------
 *  [0]    | R      | 0x0   | ALT_TMR_TMR1EOI_TMR1EOI
 *  [31:1] | ???    | 0x0   | *UNDEFINED*            
 * 
 */
/*
 * Field : timer1eoi
 * 
 * Reading from this register
 * 
 * returns all zeroes (0) and clears the interrupt from Timer1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_TMR_TMR1EOI_TMR1EOI register field. */
#define ALT_TMR_TMR1EOI_TMR1EOI_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_TMR_TMR1EOI_TMR1EOI register field. */
#define ALT_TMR_TMR1EOI_TMR1EOI_MSB        0
/* The width in bits of the ALT_TMR_TMR1EOI_TMR1EOI register field. */
#define ALT_TMR_TMR1EOI_TMR1EOI_WIDTH      1
/* The mask used to set the ALT_TMR_TMR1EOI_TMR1EOI register field value. */
#define ALT_TMR_TMR1EOI_TMR1EOI_SET_MSK    0x00000001
/* The mask used to clear the ALT_TMR_TMR1EOI_TMR1EOI register field value. */
#define ALT_TMR_TMR1EOI_TMR1EOI_CLR_MSK    0xfffffffe
/* The reset value of the ALT_TMR_TMR1EOI_TMR1EOI register field. */
#define ALT_TMR_TMR1EOI_TMR1EOI_RESET      0x0
/* Extracts the ALT_TMR_TMR1EOI_TMR1EOI field value from a register. */
#define ALT_TMR_TMR1EOI_TMR1EOI_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_TMR_TMR1EOI_TMR1EOI register field value suitable for setting the register. */
#define ALT_TMR_TMR1EOI_TMR1EOI_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_TMR_TMR1EOI.
 */
struct ALT_TMR_TMR1EOI_s
{
    const uint32_t  timer1eoi :  1;  /* ALT_TMR_TMR1EOI_TMR1EOI */
    uint32_t                  : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_TMR_TMR1EOI. */
typedef volatile struct ALT_TMR_TMR1EOI_s  ALT_TMR_TMR1EOI_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_TMR_TMR1EOI register. */
#define ALT_TMR_TMR1EOI_RESET       0x00000000
/* The byte offset of the ALT_TMR_TMR1EOI register from the beginning of the component. */
#define ALT_TMR_TMR1EOI_OFST        0xc
/* The address of the ALT_TMR_TMR1EOI register. */
#define ALT_TMR_TMR1EOI_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_TMR_TMR1EOI_OFST))

/*
 * Register : timer1intstat
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
 * :-------|:-------|:------|:--------------------------------
 *  [0]    | R      | 0x0   | ALT_TMR_TMR1INTSTAT_TMR1INTSTAT
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                    
 * 
 */
/*
 * Field : timer1intstat
 * 
 * Contains the interrupt status for Timer1.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description                   
 * :----------------------------------------|:------|:-------------------------------
 *  ALT_TMR_TMR1INTSTAT_TMR1INTSTAT_E_INACT | 0x0   | Timer1 interrupt is not active
 *  ALT_TMR_TMR1INTSTAT_TMR1INTSTAT_E_ACT   | 0x1   | Timer1 interrupt is active    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_TMR_TMR1INTSTAT_TMR1INTSTAT
 * 
 * Timer1 interrupt is not active
 */
#define ALT_TMR_TMR1INTSTAT_TMR1INTSTAT_E_INACT 0x0
/*
 * Enumerated value for register field ALT_TMR_TMR1INTSTAT_TMR1INTSTAT
 * 
 * Timer1 interrupt is active
 */
#define ALT_TMR_TMR1INTSTAT_TMR1INTSTAT_E_ACT   0x1

/* The Least Significant Bit (LSB) position of the ALT_TMR_TMR1INTSTAT_TMR1INTSTAT register field. */
#define ALT_TMR_TMR1INTSTAT_TMR1INTSTAT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_TMR_TMR1INTSTAT_TMR1INTSTAT register field. */
#define ALT_TMR_TMR1INTSTAT_TMR1INTSTAT_MSB        0
/* The width in bits of the ALT_TMR_TMR1INTSTAT_TMR1INTSTAT register field. */
#define ALT_TMR_TMR1INTSTAT_TMR1INTSTAT_WIDTH      1
/* The mask used to set the ALT_TMR_TMR1INTSTAT_TMR1INTSTAT register field value. */
#define ALT_TMR_TMR1INTSTAT_TMR1INTSTAT_SET_MSK    0x00000001
/* The mask used to clear the ALT_TMR_TMR1INTSTAT_TMR1INTSTAT register field value. */
#define ALT_TMR_TMR1INTSTAT_TMR1INTSTAT_CLR_MSK    0xfffffffe
/* The reset value of the ALT_TMR_TMR1INTSTAT_TMR1INTSTAT register field. */
#define ALT_TMR_TMR1INTSTAT_TMR1INTSTAT_RESET      0x0
/* Extracts the ALT_TMR_TMR1INTSTAT_TMR1INTSTAT field value from a register. */
#define ALT_TMR_TMR1INTSTAT_TMR1INTSTAT_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_TMR_TMR1INTSTAT_TMR1INTSTAT register field value suitable for setting the register. */
#define ALT_TMR_TMR1INTSTAT_TMR1INTSTAT_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_TMR_TMR1INTSTAT.
 */
struct ALT_TMR_TMR1INTSTAT_s
{
    const uint32_t  timer1intstat :  1;  /* ALT_TMR_TMR1INTSTAT_TMR1INTSTAT */
    uint32_t                      : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_TMR_TMR1INTSTAT. */
typedef volatile struct ALT_TMR_TMR1INTSTAT_s  ALT_TMR_TMR1INTSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_TMR_TMR1INTSTAT register. */
#define ALT_TMR_TMR1INTSTAT_RESET       0x00000000
/* The byte offset of the ALT_TMR_TMR1INTSTAT register from the beginning of the component. */
#define ALT_TMR_TMR1INTSTAT_OFST        0x10
/* The address of the ALT_TMR_TMR1INTSTAT register. */
#define ALT_TMR_TMR1INTSTAT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_TMR_TMR1INTSTAT_OFST))

/*
 * Register : timersintstat
 * 
 * Name: Timers Interrupt Status Register
 * 
 * Size: 1-9 bits
 * 
 * Address Offset: 0xa0
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [0]    | R      | 0x0   | ALT_TMR_TMRSINTSTAT_TMRSINTSTAT
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                    
 * 
 */
/*
 * Field : timersintstat
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
 *  Enum                                    | Value | Description             
 * :----------------------------------------|:------|:-------------------------
 *  ALT_TMR_TMRSINTSTAT_TMRSINTSTAT_E_INACT | 0x0   | timer_intr is not active
 *  ALT_TMR_TMRSINTSTAT_TMRSINTSTAT_E_ACT   | 0x1   | timer_intr is active    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_TMR_TMRSINTSTAT_TMRSINTSTAT
 * 
 * timer_intr is not active
 */
#define ALT_TMR_TMRSINTSTAT_TMRSINTSTAT_E_INACT 0x0
/*
 * Enumerated value for register field ALT_TMR_TMRSINTSTAT_TMRSINTSTAT
 * 
 * timer_intr is active
 */
#define ALT_TMR_TMRSINTSTAT_TMRSINTSTAT_E_ACT   0x1

/* The Least Significant Bit (LSB) position of the ALT_TMR_TMRSINTSTAT_TMRSINTSTAT register field. */
#define ALT_TMR_TMRSINTSTAT_TMRSINTSTAT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_TMR_TMRSINTSTAT_TMRSINTSTAT register field. */
#define ALT_TMR_TMRSINTSTAT_TMRSINTSTAT_MSB        0
/* The width in bits of the ALT_TMR_TMRSINTSTAT_TMRSINTSTAT register field. */
#define ALT_TMR_TMRSINTSTAT_TMRSINTSTAT_WIDTH      1
/* The mask used to set the ALT_TMR_TMRSINTSTAT_TMRSINTSTAT register field value. */
#define ALT_TMR_TMRSINTSTAT_TMRSINTSTAT_SET_MSK    0x00000001
/* The mask used to clear the ALT_TMR_TMRSINTSTAT_TMRSINTSTAT register field value. */
#define ALT_TMR_TMRSINTSTAT_TMRSINTSTAT_CLR_MSK    0xfffffffe
/* The reset value of the ALT_TMR_TMRSINTSTAT_TMRSINTSTAT register field. */
#define ALT_TMR_TMRSINTSTAT_TMRSINTSTAT_RESET      0x0
/* Extracts the ALT_TMR_TMRSINTSTAT_TMRSINTSTAT field value from a register. */
#define ALT_TMR_TMRSINTSTAT_TMRSINTSTAT_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_TMR_TMRSINTSTAT_TMRSINTSTAT register field value suitable for setting the register. */
#define ALT_TMR_TMRSINTSTAT_TMRSINTSTAT_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_TMR_TMRSINTSTAT.
 */
struct ALT_TMR_TMRSINTSTAT_s
{
    const uint32_t  timersintstat :  1;  /* ALT_TMR_TMRSINTSTAT_TMRSINTSTAT */
    uint32_t                      : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_TMR_TMRSINTSTAT. */
typedef volatile struct ALT_TMR_TMRSINTSTAT_s  ALT_TMR_TMRSINTSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_TMR_TMRSINTSTAT register. */
#define ALT_TMR_TMRSINTSTAT_RESET       0x00000000
/* The byte offset of the ALT_TMR_TMRSINTSTAT register from the beginning of the component. */
#define ALT_TMR_TMRSINTSTAT_OFST        0xa0
/* The address of the ALT_TMR_TMRSINTSTAT register. */
#define ALT_TMR_TMRSINTSTAT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_TMR_TMRSINTSTAT_OFST))

/*
 * Register : timerseoi
 * 
 * Name: Timers End-of-Interrupt Register
 * 
 * Size: 1-9 bits
 * 
 * Address Offset: 0xa4
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description            
 * :-------|:-------|:------|:------------------------
 *  [0]    | R      | 0x0   | ALT_TMR_TMRSEOI_TMRSEOI
 *  [31:1] | ???    | 0x0   | *UNDEFINED*            
 * 
 */
/*
 * Field : timerseoi
 * 
 * Reading this register returns all zeroes (0) and clears all active
 * 
 * interrupts.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_TMR_TMRSEOI_TMRSEOI register field. */
#define ALT_TMR_TMRSEOI_TMRSEOI_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_TMR_TMRSEOI_TMRSEOI register field. */
#define ALT_TMR_TMRSEOI_TMRSEOI_MSB        0
/* The width in bits of the ALT_TMR_TMRSEOI_TMRSEOI register field. */
#define ALT_TMR_TMRSEOI_TMRSEOI_WIDTH      1
/* The mask used to set the ALT_TMR_TMRSEOI_TMRSEOI register field value. */
#define ALT_TMR_TMRSEOI_TMRSEOI_SET_MSK    0x00000001
/* The mask used to clear the ALT_TMR_TMRSEOI_TMRSEOI register field value. */
#define ALT_TMR_TMRSEOI_TMRSEOI_CLR_MSK    0xfffffffe
/* The reset value of the ALT_TMR_TMRSEOI_TMRSEOI register field. */
#define ALT_TMR_TMRSEOI_TMRSEOI_RESET      0x0
/* Extracts the ALT_TMR_TMRSEOI_TMRSEOI field value from a register. */
#define ALT_TMR_TMRSEOI_TMRSEOI_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_TMR_TMRSEOI_TMRSEOI register field value suitable for setting the register. */
#define ALT_TMR_TMRSEOI_TMRSEOI_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_TMR_TMRSEOI.
 */
struct ALT_TMR_TMRSEOI_s
{
    const uint32_t  timerseoi :  1;  /* ALT_TMR_TMRSEOI_TMRSEOI */
    uint32_t                  : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_TMR_TMRSEOI. */
typedef volatile struct ALT_TMR_TMRSEOI_s  ALT_TMR_TMRSEOI_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_TMR_TMRSEOI register. */
#define ALT_TMR_TMRSEOI_RESET       0x00000000
/* The byte offset of the ALT_TMR_TMRSEOI register from the beginning of the component. */
#define ALT_TMR_TMRSEOI_OFST        0xa4
/* The address of the ALT_TMR_TMRSEOI register. */
#define ALT_TMR_TMRSEOI_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_TMR_TMRSEOI_OFST))

/*
 * Register : timersrawintstat
 * 
 * Name: Timers Raw Interrupt Status Register
 * 
 * Size: 1-9 bits
 * 
 * Address Offset: 0xa8
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                          
 * :-------|:-------|:------|:--------------------------------------
 *  [0]    | R      | 0x0   | ALT_TMR_TMRSRAWINTSTAT_TMRSRAWINTSTAT
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                          
 * 
 */
/*
 * Field : timersrawintstat
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
 *  Enum                                          | Value | Description                   
 * :----------------------------------------------|:------|:-------------------------------
 *  ALT_TMR_TMRSRAWINTSTAT_TMRSRAWINTSTAT_E_INACT | 0x0   | Timer1 interrupt is not active
 *  ALT_TMR_TMRSRAWINTSTAT_TMRSRAWINTSTAT_E_ACT   | 0x1   | Timer1 interrupt is active    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_TMR_TMRSRAWINTSTAT_TMRSRAWINTSTAT
 * 
 * Timer1 interrupt is not active
 */
#define ALT_TMR_TMRSRAWINTSTAT_TMRSRAWINTSTAT_E_INACT   0x0
/*
 * Enumerated value for register field ALT_TMR_TMRSRAWINTSTAT_TMRSRAWINTSTAT
 * 
 * Timer1 interrupt is active
 */
#define ALT_TMR_TMRSRAWINTSTAT_TMRSRAWINTSTAT_E_ACT     0x1

/* The Least Significant Bit (LSB) position of the ALT_TMR_TMRSRAWINTSTAT_TMRSRAWINTSTAT register field. */
#define ALT_TMR_TMRSRAWINTSTAT_TMRSRAWINTSTAT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_TMR_TMRSRAWINTSTAT_TMRSRAWINTSTAT register field. */
#define ALT_TMR_TMRSRAWINTSTAT_TMRSRAWINTSTAT_MSB        0
/* The width in bits of the ALT_TMR_TMRSRAWINTSTAT_TMRSRAWINTSTAT register field. */
#define ALT_TMR_TMRSRAWINTSTAT_TMRSRAWINTSTAT_WIDTH      1
/* The mask used to set the ALT_TMR_TMRSRAWINTSTAT_TMRSRAWINTSTAT register field value. */
#define ALT_TMR_TMRSRAWINTSTAT_TMRSRAWINTSTAT_SET_MSK    0x00000001
/* The mask used to clear the ALT_TMR_TMRSRAWINTSTAT_TMRSRAWINTSTAT register field value. */
#define ALT_TMR_TMRSRAWINTSTAT_TMRSRAWINTSTAT_CLR_MSK    0xfffffffe
/* The reset value of the ALT_TMR_TMRSRAWINTSTAT_TMRSRAWINTSTAT register field. */
#define ALT_TMR_TMRSRAWINTSTAT_TMRSRAWINTSTAT_RESET      0x0
/* Extracts the ALT_TMR_TMRSRAWINTSTAT_TMRSRAWINTSTAT field value from a register. */
#define ALT_TMR_TMRSRAWINTSTAT_TMRSRAWINTSTAT_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_TMR_TMRSRAWINTSTAT_TMRSRAWINTSTAT register field value suitable for setting the register. */
#define ALT_TMR_TMRSRAWINTSTAT_TMRSRAWINTSTAT_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_TMR_TMRSRAWINTSTAT.
 */
struct ALT_TMR_TMRSRAWINTSTAT_s
{
    const uint32_t  timersrawintstat :  1;  /* ALT_TMR_TMRSRAWINTSTAT_TMRSRAWINTSTAT */
    uint32_t                         : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_TMR_TMRSRAWINTSTAT. */
typedef volatile struct ALT_TMR_TMRSRAWINTSTAT_s  ALT_TMR_TMRSRAWINTSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_TMR_TMRSRAWINTSTAT register. */
#define ALT_TMR_TMRSRAWINTSTAT_RESET       0x00000000
/* The byte offset of the ALT_TMR_TMRSRAWINTSTAT register from the beginning of the component. */
#define ALT_TMR_TMRSRAWINTSTAT_OFST        0xa8
/* The address of the ALT_TMR_TMRSRAWINTSTAT register. */
#define ALT_TMR_TMRSRAWINTSTAT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_TMR_TMRSRAWINTSTAT_OFST))

/*
 * Register : timerscompversion
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
 * :-------|:-------|:-----------|:--------------------------------
 *  [31:0] | R      | 0x3230382a | ALT_TMR_TMRSCOMPVER_TMRSCOMPVER
 * 
 */
/*
 * Field : timerscompversion
 * 
 * Current revision number of the DW_apb_timers component.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_TMR_TMRSCOMPVER_TMRSCOMPVER register field. */
#define ALT_TMR_TMRSCOMPVER_TMRSCOMPVER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_TMR_TMRSCOMPVER_TMRSCOMPVER register field. */
#define ALT_TMR_TMRSCOMPVER_TMRSCOMPVER_MSB        31
/* The width in bits of the ALT_TMR_TMRSCOMPVER_TMRSCOMPVER register field. */
#define ALT_TMR_TMRSCOMPVER_TMRSCOMPVER_WIDTH      32
/* The mask used to set the ALT_TMR_TMRSCOMPVER_TMRSCOMPVER register field value. */
#define ALT_TMR_TMRSCOMPVER_TMRSCOMPVER_SET_MSK    0xffffffff
/* The mask used to clear the ALT_TMR_TMRSCOMPVER_TMRSCOMPVER register field value. */
#define ALT_TMR_TMRSCOMPVER_TMRSCOMPVER_CLR_MSK    0x00000000
/* The reset value of the ALT_TMR_TMRSCOMPVER_TMRSCOMPVER register field. */
#define ALT_TMR_TMRSCOMPVER_TMRSCOMPVER_RESET      0x3230382a
/* Extracts the ALT_TMR_TMRSCOMPVER_TMRSCOMPVER field value from a register. */
#define ALT_TMR_TMRSCOMPVER_TMRSCOMPVER_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_TMR_TMRSCOMPVER_TMRSCOMPVER register field value suitable for setting the register. */
#define ALT_TMR_TMRSCOMPVER_TMRSCOMPVER_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_TMR_TMRSCOMPVER.
 */
struct ALT_TMR_TMRSCOMPVER_s
{
    const uint32_t  timerscompversion : 32;  /* ALT_TMR_TMRSCOMPVER_TMRSCOMPVER */
};

/* The typedef declaration for register ALT_TMR_TMRSCOMPVER. */
typedef volatile struct ALT_TMR_TMRSCOMPVER_s  ALT_TMR_TMRSCOMPVER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_TMR_TMRSCOMPVER register. */
#define ALT_TMR_TMRSCOMPVER_RESET       0x3230382a
/* The byte offset of the ALT_TMR_TMRSCOMPVER register from the beginning of the component. */
#define ALT_TMR_TMRSCOMPVER_OFST        0xac
/* The address of the ALT_TMR_TMRSCOMPVER register. */
#define ALT_TMR_TMRSCOMPVER_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_TMR_TMRSCOMPVER_OFST))

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_TMR.
 */
struct ALT_TMR_s
{
    ALT_TMR_TMR1LDCOUNT_t     timer1loadcount;      /* ALT_TMR_TMR1LDCOUNT */
    ALT_TMR_TMR1CURVAL_t      timer1currentval;     /* ALT_TMR_TMR1CURVAL */
    ALT_TMR_TMR1CTLREG_t      timer1controlreg;     /* ALT_TMR_TMR1CTLREG */
    ALT_TMR_TMR1EOI_t         timer1eoi;            /* ALT_TMR_TMR1EOI */
    ALT_TMR_TMR1INTSTAT_t     timer1intstat;        /* ALT_TMR_TMR1INTSTAT */
    volatile uint32_t         _pad_0x14_0x9f[35];   /* *UNDEFINED* */
    ALT_TMR_TMRSINTSTAT_t     timersintstat;        /* ALT_TMR_TMRSINTSTAT */
    ALT_TMR_TMRSEOI_t         timerseoi;            /* ALT_TMR_TMRSEOI */
    ALT_TMR_TMRSRAWINTSTAT_t  timersrawintstat;     /* ALT_TMR_TMRSRAWINTSTAT */
    ALT_TMR_TMRSCOMPVER_t     timerscompversion;    /* ALT_TMR_TMRSCOMPVER */
    volatile uint32_t         _pad_0xb0_0x100[20];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_TMR. */
typedef volatile struct ALT_TMR_s  ALT_TMR_t;
/* The struct declaration for the raw register contents of register group ALT_TMR. */
struct ALT_TMR_raw_s
{
    volatile uint32_t  timer1loadcount;      /* ALT_TMR_TMR1LDCOUNT */
    volatile uint32_t  timer1currentval;     /* ALT_TMR_TMR1CURVAL */
    volatile uint32_t  timer1controlreg;     /* ALT_TMR_TMR1CTLREG */
    volatile uint32_t  timer1eoi;            /* ALT_TMR_TMR1EOI */
    volatile uint32_t  timer1intstat;        /* ALT_TMR_TMR1INTSTAT */
    uint32_t           _pad_0x14_0x9f[35];   /* *UNDEFINED* */
    volatile uint32_t  timersintstat;        /* ALT_TMR_TMRSINTSTAT */
    volatile uint32_t  timerseoi;            /* ALT_TMR_TMRSEOI */
    volatile uint32_t  timersrawintstat;     /* ALT_TMR_TMRSRAWINTSTAT */
    volatile uint32_t  timerscompversion;    /* ALT_TMR_TMRSCOMPVER */
    uint32_t           _pad_0xb0_0x100[20];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_TMR. */
typedef volatile struct ALT_TMR_raw_s  ALT_TMR_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_TMR_H__ */

