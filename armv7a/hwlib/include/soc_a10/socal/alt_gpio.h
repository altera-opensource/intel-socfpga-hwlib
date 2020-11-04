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

/* Altera - ALT_GPIO */

#ifndef __ALT_SOCAL_GPIO_H__
#define __ALT_SOCAL_GPIO_H__

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
 * Component : ALT_GPIO
 * 
 */
/*
 * Register : gpio_swporta_dr
 * 
 * Name: Port A data register
 * 
 * set_attribute $reg -attr RALAttribute -sub NO_BIT_BASH_TEST -value 1
 * 
 * Size: 1-32 bits
 * 
 * Address Offset: 0x00
 * 
 * Read/Write Access: Read/Write
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                        
 * :--------|:-------|:------|:------------------------------------
 *  [23:0]  | RW     | 0x0   | ALT_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR
 *  [31:24] | ???    | 0x0   | *UNDEFINED*                        
 * 
 */
/*
 * Field : gpio_swporta_dr
 * 
 * Values written to this register are output on the I/O signals
 * 
 * for Port A if the corresponding data direction bits for Port A
 * 
 * are set to Output mode and the corresponding control bit for
 * 
 * Port A is set to Software mode. The value read back is equal
 * 
 * to the last value written to this register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR register field. */
#define ALT_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR register field. */
#define ALT_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR_MSB        23
/* The width in bits of the ALT_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR register field. */
#define ALT_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR_WIDTH      24
/* The mask used to set the ALT_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR register field value. */
#define ALT_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR register field value. */
#define ALT_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR_CLR_MSK    0xff000000
/* The reset value of the ALT_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR register field. */
#define ALT_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR_RESET      0x0
/* Extracts the ALT_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR field value from a register. */
#define ALT_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR register field value suitable for setting the register. */
#define ALT_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR_SET(value) (((value) << 0) & 0x00ffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_GPIO_SWPORTA_DR.
 */
struct ALT_GPIO_SWPORTA_DR_s
{
    uint32_t  gpio_swporta_dr : 24;  /* ALT_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR */
    uint32_t                  :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_SWPORTA_DR. */
typedef volatile struct ALT_GPIO_SWPORTA_DR_s  ALT_GPIO_SWPORTA_DR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_SWPORTA_DR register. */
#define ALT_GPIO_SWPORTA_DR_RESET       0x00000000
/* The byte offset of the ALT_GPIO_SWPORTA_DR register from the beginning of the component. */
#define ALT_GPIO_SWPORTA_DR_OFST        0x0
/* The address of the ALT_GPIO_SWPORTA_DR register. */
#define ALT_GPIO_SWPORTA_DR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_SWPORTA_DR_OFST))

/*
 * Register : gpio_swporta_ddr
 * 
 * Name: Port A Data Direction Register
 * 
 * Size: 1-32 bits
 * 
 * Address Offset: 0x04
 * 
 * Read/Write Access: Read/Write
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                          
 * :--------|:-------|:--------|:--------------------------------------
 *  [23:0]  | RW     | Unknown | ALT_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR
 *  [31:24] | ???    | Unknown | *UNDEFINED*                          
 * 
 */
/*
 * Field : gpio_swporta_ddr
 * 
 * Values written to this register independently control the
 * 
 * direction of the corresponding data bit in Port A. The
 * 
 * default direction can be configured as input or output after
 * 
 * system reset through the GPIO_DFLT_SRC_A parameter.
 * 
 * 0  Input (default)
 * 
 * 1  Output
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                        | Value | Description     
 * :--------------------------------------------|:------|:-----------------
 *  ALT_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR_E_IN  | 0x0   | Input Direction 
 *  ALT_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR_E_OUT | 0x1   | Output Direction
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR
 * 
 * Input Direction
 */
#define ALT_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR_E_IN  0x0
/*
 * Enumerated value for register field ALT_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR
 * 
 * Output Direction
 */
#define ALT_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR_E_OUT 0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR register field. */
#define ALT_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR register field. */
#define ALT_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR_MSB        23
/* The width in bits of the ALT_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR register field. */
#define ALT_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR_WIDTH      24
/* The mask used to set the ALT_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR register field value. */
#define ALT_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR register field value. */
#define ALT_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR_CLR_MSK    0xff000000
/* The reset value of the ALT_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR register field is UNKNOWN. */
#define ALT_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR_RESET      0x0
/* Extracts the ALT_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR field value from a register. */
#define ALT_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR register field value suitable for setting the register. */
#define ALT_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR_SET(value) (((value) << 0) & 0x00ffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_GPIO_SWPORTA_DDR.
 */
struct ALT_GPIO_SWPORTA_DDR_s
{
    uint32_t  gpio_swporta_ddr : 24;  /* ALT_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR */
    uint32_t                   :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_SWPORTA_DDR. */
typedef volatile struct ALT_GPIO_SWPORTA_DDR_s  ALT_GPIO_SWPORTA_DDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_SWPORTA_DDR register. */
#define ALT_GPIO_SWPORTA_DDR_RESET       0x00000000
/* The byte offset of the ALT_GPIO_SWPORTA_DDR register from the beginning of the component. */
#define ALT_GPIO_SWPORTA_DDR_OFST        0x4
/* The address of the ALT_GPIO_SWPORTA_DDR register. */
#define ALT_GPIO_SWPORTA_DDR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_SWPORTA_DDR_OFST))

/*
 * Register : gpio_inten
 * 
 * Name: Interrupt enable register
 * 
 * Size: 1-32 bits
 * 
 * Address Offset: 0x30
 * 
 * Read/Write Access: Read/Write
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description              
 * :--------|:-------|:------|:--------------------------
 *  [23:0]  | RW     | 0x0   | ALT_GPIO_INTEN_GPIO_INTEN
 *  [31:24] | ???    | 0x0   | *UNDEFINED*              
 * 
 */
/*
 * Field : gpio_inten
 * 
 * Allows each bit of Port A to be configured for interrupts. By
 * 
 * default the generation of interrupts is disabled. Whenever a 1
 * 
 * is written to a bit of this register, it configures the
 * 
 * corresponding bit on Port A to become an interrupt;
 * 
 * otherwise, Port A operates as a normal GPIO signal.
 * 
 * Interrupts are disabled on the corresponding bits of Port A if
 * 
 * the corresponding data direction register is set to Output or if
 * 
 * Port A mode is set to Hardware.
 * 
 * 0  Configure Port A bit as normal GPIO signal (default)
 * 
 * 1  Configure Port A bit as interrupt
 * 
 * Field Enumeration Values:
 * 
 *  Enum                            | Value | Description                
 * :--------------------------------|:------|:----------------------------
 *  ALT_GPIO_INTEN_GPIO_INTEN_E_DIS | 0x0   | Disable Interrupt on Port A
 *  ALT_GPIO_INTEN_GPIO_INTEN_E_EN  | 0x1   | Enable Interrupt on Port A 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_INTEN_GPIO_INTEN
 * 
 * Disable Interrupt on Port A
 */
#define ALT_GPIO_INTEN_GPIO_INTEN_E_DIS 0x0
/*
 * Enumerated value for register field ALT_GPIO_INTEN_GPIO_INTEN
 * 
 * Enable Interrupt on Port A
 */
#define ALT_GPIO_INTEN_GPIO_INTEN_E_EN  0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_INTEN_GPIO_INTEN register field. */
#define ALT_GPIO_INTEN_GPIO_INTEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_INTEN_GPIO_INTEN register field. */
#define ALT_GPIO_INTEN_GPIO_INTEN_MSB        23
/* The width in bits of the ALT_GPIO_INTEN_GPIO_INTEN register field. */
#define ALT_GPIO_INTEN_GPIO_INTEN_WIDTH      24
/* The mask used to set the ALT_GPIO_INTEN_GPIO_INTEN register field value. */
#define ALT_GPIO_INTEN_GPIO_INTEN_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_GPIO_INTEN_GPIO_INTEN register field value. */
#define ALT_GPIO_INTEN_GPIO_INTEN_CLR_MSK    0xff000000
/* The reset value of the ALT_GPIO_INTEN_GPIO_INTEN register field. */
#define ALT_GPIO_INTEN_GPIO_INTEN_RESET      0x0
/* Extracts the ALT_GPIO_INTEN_GPIO_INTEN field value from a register. */
#define ALT_GPIO_INTEN_GPIO_INTEN_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_GPIO_INTEN_GPIO_INTEN register field value suitable for setting the register. */
#define ALT_GPIO_INTEN_GPIO_INTEN_SET(value) (((value) << 0) & 0x00ffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_GPIO_INTEN.
 */
struct ALT_GPIO_INTEN_s
{
    uint32_t  gpio_inten : 24;  /* ALT_GPIO_INTEN_GPIO_INTEN */
    uint32_t             :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_INTEN. */
typedef volatile struct ALT_GPIO_INTEN_s  ALT_GPIO_INTEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_INTEN register. */
#define ALT_GPIO_INTEN_RESET       0x00000000
/* The byte offset of the ALT_GPIO_INTEN register from the beginning of the component. */
#define ALT_GPIO_INTEN_OFST        0x30
/* The address of the ALT_GPIO_INTEN register. */
#define ALT_GPIO_INTEN_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_INTEN_OFST))

/*
 * Register : gpio_intmask
 * 
 * Name: Interrupt mask register
 * 
 * Size: 1-32 bits
 * 
 * Address Offset: 0x34
 * 
 * Read/Write Access: Read/Write
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                
 * :--------|:-------|:------|:----------------------------
 *  [23:0]  | RW     | 0x0   | ALT_GPIO_INTMSK_GPIO_INTMSK
 *  [31:24] | ???    | 0x0   | *UNDEFINED*                
 * 
 */
/*
 * Field : gpio_intmask
 * 
 * Controls whether an interrupt on Port A can create an
 * 
 * interrupt for the interrupt controller by not masking it. By
 * 
 * default, all interrupts bits are unmasked. Whenever a 1 is
 * 
 * written to a bit in this register, it masks the interrupt
 * 
 * generation capability for this signal; otherwise interrupts are
 * 
 * allowed through. The unmasked status can be read as well as
 * 
 * the resultant status after masking.
 * 
 * 0  Interrupt bits are unmasked (default)
 * 
 * 1  Mask interrupt
 * 
 * Field Enumeration Values:
 * 
 *  Enum                              | Value | Description                
 * :----------------------------------|:------|:----------------------------
 *  ALT_GPIO_INTMSK_GPIO_INTMSK_E_DIS | 0x0   | Interrupt bits are unmasked
 *  ALT_GPIO_INTMSK_GPIO_INTMSK_E_EN  | 0x1   | Mask Interrupt             
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_INTMSK_GPIO_INTMSK
 * 
 * Interrupt bits are unmasked
 */
#define ALT_GPIO_INTMSK_GPIO_INTMSK_E_DIS   0x0
/*
 * Enumerated value for register field ALT_GPIO_INTMSK_GPIO_INTMSK
 * 
 * Mask Interrupt
 */
#define ALT_GPIO_INTMSK_GPIO_INTMSK_E_EN    0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_INTMSK_GPIO_INTMSK register field. */
#define ALT_GPIO_INTMSK_GPIO_INTMSK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_INTMSK_GPIO_INTMSK register field. */
#define ALT_GPIO_INTMSK_GPIO_INTMSK_MSB        23
/* The width in bits of the ALT_GPIO_INTMSK_GPIO_INTMSK register field. */
#define ALT_GPIO_INTMSK_GPIO_INTMSK_WIDTH      24
/* The mask used to set the ALT_GPIO_INTMSK_GPIO_INTMSK register field value. */
#define ALT_GPIO_INTMSK_GPIO_INTMSK_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_GPIO_INTMSK_GPIO_INTMSK register field value. */
#define ALT_GPIO_INTMSK_GPIO_INTMSK_CLR_MSK    0xff000000
/* The reset value of the ALT_GPIO_INTMSK_GPIO_INTMSK register field. */
#define ALT_GPIO_INTMSK_GPIO_INTMSK_RESET      0x0
/* Extracts the ALT_GPIO_INTMSK_GPIO_INTMSK field value from a register. */
#define ALT_GPIO_INTMSK_GPIO_INTMSK_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_GPIO_INTMSK_GPIO_INTMSK register field value suitable for setting the register. */
#define ALT_GPIO_INTMSK_GPIO_INTMSK_SET(value) (((value) << 0) & 0x00ffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_GPIO_INTMSK.
 */
struct ALT_GPIO_INTMSK_s
{
    uint32_t  gpio_intmask : 24;  /* ALT_GPIO_INTMSK_GPIO_INTMSK */
    uint32_t               :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_INTMSK. */
typedef volatile struct ALT_GPIO_INTMSK_s  ALT_GPIO_INTMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_INTMSK register. */
#define ALT_GPIO_INTMSK_RESET       0x00000000
/* The byte offset of the ALT_GPIO_INTMSK register from the beginning of the component. */
#define ALT_GPIO_INTMSK_OFST        0x34
/* The address of the ALT_GPIO_INTMSK register. */
#define ALT_GPIO_INTMSK_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_INTMSK_OFST))

/*
 * Register : gpio_inttype_level
 * 
 * Name: Interrupt level
 * 
 * Size: 1-32 bits
 * 
 * Address Offset: 0x38
 * 
 * Read/Write Access: Read/Write
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                              
 * :--------|:-------|:------|:------------------------------------------
 *  [23:0]  | RW     | 0x0   | ALT_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL
 *  [31:24] | ???    | 0x0   | *UNDEFINED*                              
 * 
 */
/*
 * Field : gpio_inttype_level
 * 
 * Controls the type of interrupt that can occur on Port A.
 * 
 * Whenever a 0 is written to a bit of this register, it configures
 * 
 * the interrupt type to be level-sensitive; otherwise, it is
 * 
 * edge-sensitive.
 * 
 * 0  Level-sensitive (default)
 * 
 * 1  Edge-sensitive
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description    
 * :--------------------------------------------------|:------|:----------------
 *  ALT_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL_E_LEVEL | 0x0   | Level-sensitive
 *  ALT_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL_E_EDGE  | 0x1   | Edge-sensitive 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL
 * 
 * Level-sensitive
 */
#define ALT_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL_E_LEVEL   0x0
/*
 * Enumerated value for register field ALT_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL
 * 
 * Edge-sensitive
 */
#define ALT_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL_E_EDGE    0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL register field. */
#define ALT_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL register field. */
#define ALT_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL_MSB        23
/* The width in bits of the ALT_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL register field. */
#define ALT_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL_WIDTH      24
/* The mask used to set the ALT_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL register field value. */
#define ALT_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL register field value. */
#define ALT_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL_CLR_MSK    0xff000000
/* The reset value of the ALT_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL register field. */
#define ALT_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL_RESET      0x0
/* Extracts the ALT_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL field value from a register. */
#define ALT_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL register field value suitable for setting the register. */
#define ALT_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL_SET(value) (((value) << 0) & 0x00ffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_GPIO_INTTYPE_LEVEL.
 */
struct ALT_GPIO_INTTYPE_LEVEL_s
{
    uint32_t  gpio_inttype_level : 24;  /* ALT_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL */
    uint32_t                     :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_INTTYPE_LEVEL. */
typedef volatile struct ALT_GPIO_INTTYPE_LEVEL_s  ALT_GPIO_INTTYPE_LEVEL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_INTTYPE_LEVEL register. */
#define ALT_GPIO_INTTYPE_LEVEL_RESET       0x00000000
/* The byte offset of the ALT_GPIO_INTTYPE_LEVEL register from the beginning of the component. */
#define ALT_GPIO_INTTYPE_LEVEL_OFST        0x38
/* The address of the ALT_GPIO_INTTYPE_LEVEL register. */
#define ALT_GPIO_INTTYPE_LEVEL_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_INTTYPE_LEVEL_OFST))

/*
 * Register : gpio_int_polarity
 * 
 * Name: Interrupt polarity
 * 
 * Size: 1-32 bits
 * 
 * Address Offset: 0x3c
 * 
 * Read/Write Access: Read/Write
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                  
 * :--------|:-------|:------|:------------------------------
 *  [23:0]  | RW     | 0x0   | ALT_GPIO_INT_POL_GPIO_INT_POL
 *  [31:24] | ???    | 0x0   | *UNDEFINED*                  
 * 
 */
/*
 * Field : gpio_int_polarity
 * 
 * Controls the polarity of edge or level sensitivity that can
 * 
 * occur on input of Port A. Whenever a 0 is written to a bit of
 * 
 * this register, it configures the interrupt type to falling-edge or
 * 
 * active-low sensitive; otherwise, it is rising-edge or
 * 
 * active-high sensitive.
 * 
 * 0  Active-low (default)
 * 
 * 1  Active-high
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_GPIO_INT_POL_GPIO_INT_POL_E_ACTLOW  | 0x0   | Active low 
 *  ALT_GPIO_INT_POL_GPIO_INT_POL_E_ACTHIGH | 0x1   | Active high
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_INT_POL_GPIO_INT_POL
 * 
 * Active low
 */
#define ALT_GPIO_INT_POL_GPIO_INT_POL_E_ACTLOW  0x0
/*
 * Enumerated value for register field ALT_GPIO_INT_POL_GPIO_INT_POL
 * 
 * Active high
 */
#define ALT_GPIO_INT_POL_GPIO_INT_POL_E_ACTHIGH 0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_INT_POL_GPIO_INT_POL register field. */
#define ALT_GPIO_INT_POL_GPIO_INT_POL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_INT_POL_GPIO_INT_POL register field. */
#define ALT_GPIO_INT_POL_GPIO_INT_POL_MSB        23
/* The width in bits of the ALT_GPIO_INT_POL_GPIO_INT_POL register field. */
#define ALT_GPIO_INT_POL_GPIO_INT_POL_WIDTH      24
/* The mask used to set the ALT_GPIO_INT_POL_GPIO_INT_POL register field value. */
#define ALT_GPIO_INT_POL_GPIO_INT_POL_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_GPIO_INT_POL_GPIO_INT_POL register field value. */
#define ALT_GPIO_INT_POL_GPIO_INT_POL_CLR_MSK    0xff000000
/* The reset value of the ALT_GPIO_INT_POL_GPIO_INT_POL register field. */
#define ALT_GPIO_INT_POL_GPIO_INT_POL_RESET      0x0
/* Extracts the ALT_GPIO_INT_POL_GPIO_INT_POL field value from a register. */
#define ALT_GPIO_INT_POL_GPIO_INT_POL_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_GPIO_INT_POL_GPIO_INT_POL register field value suitable for setting the register. */
#define ALT_GPIO_INT_POL_GPIO_INT_POL_SET(value) (((value) << 0) & 0x00ffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_GPIO_INT_POL.
 */
struct ALT_GPIO_INT_POL_s
{
    uint32_t  gpio_int_polarity : 24;  /* ALT_GPIO_INT_POL_GPIO_INT_POL */
    uint32_t                    :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_INT_POL. */
typedef volatile struct ALT_GPIO_INT_POL_s  ALT_GPIO_INT_POL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_INT_POL register. */
#define ALT_GPIO_INT_POL_RESET       0x00000000
/* The byte offset of the ALT_GPIO_INT_POL register from the beginning of the component. */
#define ALT_GPIO_INT_POL_OFST        0x3c
/* The address of the ALT_GPIO_INT_POL register. */
#define ALT_GPIO_INT_POL_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_INT_POL_OFST))

/*
 * Register : gpio_intstatus
 * 
 * Name: Interrupt status
 * 
 * Size: 1-32 bits
 * 
 * Address Offset: 0x40
 * 
 * Read/Write Access: Read/Write
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                  
 * :--------|:-------|:------|:------------------------------
 *  [23:0]  | R      | 0x0   | ALT_GPIO_INTSTAT_GPIO_INTSTAT
 *  [31:24] | ???    | 0x0   | *UNDEFINED*                  
 * 
 */
/*
 * Field : gpio_intstatus
 * 
 * Interrupt status of Port A.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description
 * :--------------------------------------|:------|:------------
 *  ALT_GPIO_INTSTAT_GPIO_INTSTAT_E_INACT | 0x0   | Inactive   
 *  ALT_GPIO_INTSTAT_GPIO_INTSTAT_E_ACT   | 0x1   | Active     
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_INTSTAT_GPIO_INTSTAT
 * 
 * Inactive
 */
#define ALT_GPIO_INTSTAT_GPIO_INTSTAT_E_INACT   0x0
/*
 * Enumerated value for register field ALT_GPIO_INTSTAT_GPIO_INTSTAT
 * 
 * Active
 */
#define ALT_GPIO_INTSTAT_GPIO_INTSTAT_E_ACT     0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_INTSTAT_GPIO_INTSTAT register field. */
#define ALT_GPIO_INTSTAT_GPIO_INTSTAT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_INTSTAT_GPIO_INTSTAT register field. */
#define ALT_GPIO_INTSTAT_GPIO_INTSTAT_MSB        23
/* The width in bits of the ALT_GPIO_INTSTAT_GPIO_INTSTAT register field. */
#define ALT_GPIO_INTSTAT_GPIO_INTSTAT_WIDTH      24
/* The mask used to set the ALT_GPIO_INTSTAT_GPIO_INTSTAT register field value. */
#define ALT_GPIO_INTSTAT_GPIO_INTSTAT_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_GPIO_INTSTAT_GPIO_INTSTAT register field value. */
#define ALT_GPIO_INTSTAT_GPIO_INTSTAT_CLR_MSK    0xff000000
/* The reset value of the ALT_GPIO_INTSTAT_GPIO_INTSTAT register field. */
#define ALT_GPIO_INTSTAT_GPIO_INTSTAT_RESET      0x0
/* Extracts the ALT_GPIO_INTSTAT_GPIO_INTSTAT field value from a register. */
#define ALT_GPIO_INTSTAT_GPIO_INTSTAT_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_GPIO_INTSTAT_GPIO_INTSTAT register field value suitable for setting the register. */
#define ALT_GPIO_INTSTAT_GPIO_INTSTAT_SET(value) (((value) << 0) & 0x00ffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_GPIO_INTSTAT.
 */
struct ALT_GPIO_INTSTAT_s
{
    const uint32_t  gpio_intstatus : 24;  /* ALT_GPIO_INTSTAT_GPIO_INTSTAT */
    uint32_t                       :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_INTSTAT. */
typedef volatile struct ALT_GPIO_INTSTAT_s  ALT_GPIO_INTSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_INTSTAT register. */
#define ALT_GPIO_INTSTAT_RESET       0x00000000
/* The byte offset of the ALT_GPIO_INTSTAT register from the beginning of the component. */
#define ALT_GPIO_INTSTAT_OFST        0x40
/* The address of the ALT_GPIO_INTSTAT register. */
#define ALT_GPIO_INTSTAT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_INTSTAT_OFST))

/*
 * Register : gpio_raw_intstatus
 * 
 * Name: Raw interrupt status
 * 
 * Size: 1-32 bits
 * 
 * Address Offset: 0x44
 * 
 * Read/Write Access: Read/Write
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                          
 * :--------|:-------|:------|:--------------------------------------
 *  [23:0]  | R      | 0x0   | ALT_GPIO_RAW_INTSTAT_GPIO_RAW_INTSTAT
 *  [31:24] | ???    | 0x0   | *UNDEFINED*                          
 * 
 */
/*
 * Field : gpio_raw_intstatus
 * 
 * Raw interrupt of status of Port A (premasking bits)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                          | Value | Description
 * :----------------------------------------------|:------|:------------
 *  ALT_GPIO_RAW_INTSTAT_GPIO_RAW_INTSTAT_E_INACT | 0x0   | Inactive   
 *  ALT_GPIO_RAW_INTSTAT_GPIO_RAW_INTSTAT_E_ACT   | 0x1   | Active     
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_RAW_INTSTAT_GPIO_RAW_INTSTAT
 * 
 * Inactive
 */
#define ALT_GPIO_RAW_INTSTAT_GPIO_RAW_INTSTAT_E_INACT   0x0
/*
 * Enumerated value for register field ALT_GPIO_RAW_INTSTAT_GPIO_RAW_INTSTAT
 * 
 * Active
 */
#define ALT_GPIO_RAW_INTSTAT_GPIO_RAW_INTSTAT_E_ACT     0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_RAW_INTSTAT_GPIO_RAW_INTSTAT register field. */
#define ALT_GPIO_RAW_INTSTAT_GPIO_RAW_INTSTAT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_RAW_INTSTAT_GPIO_RAW_INTSTAT register field. */
#define ALT_GPIO_RAW_INTSTAT_GPIO_RAW_INTSTAT_MSB        23
/* The width in bits of the ALT_GPIO_RAW_INTSTAT_GPIO_RAW_INTSTAT register field. */
#define ALT_GPIO_RAW_INTSTAT_GPIO_RAW_INTSTAT_WIDTH      24
/* The mask used to set the ALT_GPIO_RAW_INTSTAT_GPIO_RAW_INTSTAT register field value. */
#define ALT_GPIO_RAW_INTSTAT_GPIO_RAW_INTSTAT_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_GPIO_RAW_INTSTAT_GPIO_RAW_INTSTAT register field value. */
#define ALT_GPIO_RAW_INTSTAT_GPIO_RAW_INTSTAT_CLR_MSK    0xff000000
/* The reset value of the ALT_GPIO_RAW_INTSTAT_GPIO_RAW_INTSTAT register field. */
#define ALT_GPIO_RAW_INTSTAT_GPIO_RAW_INTSTAT_RESET      0x0
/* Extracts the ALT_GPIO_RAW_INTSTAT_GPIO_RAW_INTSTAT field value from a register. */
#define ALT_GPIO_RAW_INTSTAT_GPIO_RAW_INTSTAT_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_GPIO_RAW_INTSTAT_GPIO_RAW_INTSTAT register field value suitable for setting the register. */
#define ALT_GPIO_RAW_INTSTAT_GPIO_RAW_INTSTAT_SET(value) (((value) << 0) & 0x00ffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_GPIO_RAW_INTSTAT.
 */
struct ALT_GPIO_RAW_INTSTAT_s
{
    const uint32_t  gpio_raw_intstatus : 24;  /* ALT_GPIO_RAW_INTSTAT_GPIO_RAW_INTSTAT */
    uint32_t                           :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_RAW_INTSTAT. */
typedef volatile struct ALT_GPIO_RAW_INTSTAT_s  ALT_GPIO_RAW_INTSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_RAW_INTSTAT register. */
#define ALT_GPIO_RAW_INTSTAT_RESET       0x00000000
/* The byte offset of the ALT_GPIO_RAW_INTSTAT register from the beginning of the component. */
#define ALT_GPIO_RAW_INTSTAT_OFST        0x44
/* The address of the ALT_GPIO_RAW_INTSTAT register. */
#define ALT_GPIO_RAW_INTSTAT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_RAW_INTSTAT_OFST))

/*
 * Register : gpio_debounce
 * 
 * Name: Debounce enable
 * 
 * Size: 1-32 bits
 * 
 * Address Offset: 0x48
 * 
 * Read/Write Access: Read/Write
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                    
 * :--------|:-------|:------|:--------------------------------
 *  [23:0]  | RW     | 0x0   | ALT_GPIO_DEBOUNCE_GPIO_DEBOUNCE
 *  [31:24] | ???    | 0x0   | *UNDEFINED*                    
 * 
 */
/*
 * Field : gpio_debounce
 * 
 * Controls whether an external signal that is the source
 * 
 * of an interrupt needs to be debounced to remove any
 * 
 * spurious glitches. Writing a 1 to a bit in this register
 * 
 * enables the debouncing circuitry. A signal must be
 * 
 * valid for two periods of an external clock before it is
 * 
 * internally processed.
 * 
 * 0  No debounce (default)
 * 
 * 1  Enable debounce
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description    
 * :--------------------------------------|:------|:----------------
 *  ALT_GPIO_DEBOUNCE_GPIO_DEBOUNCE_E_DIS | 0x0   | No debounce    
 *  ALT_GPIO_DEBOUNCE_GPIO_DEBOUNCE_E_EN  | 0x1   | Enable debounce
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_DEBOUNCE_GPIO_DEBOUNCE
 * 
 * No debounce
 */
#define ALT_GPIO_DEBOUNCE_GPIO_DEBOUNCE_E_DIS   0x0
/*
 * Enumerated value for register field ALT_GPIO_DEBOUNCE_GPIO_DEBOUNCE
 * 
 * Enable debounce
 */
#define ALT_GPIO_DEBOUNCE_GPIO_DEBOUNCE_E_EN    0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_DEBOUNCE_GPIO_DEBOUNCE register field. */
#define ALT_GPIO_DEBOUNCE_GPIO_DEBOUNCE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_DEBOUNCE_GPIO_DEBOUNCE register field. */
#define ALT_GPIO_DEBOUNCE_GPIO_DEBOUNCE_MSB        23
/* The width in bits of the ALT_GPIO_DEBOUNCE_GPIO_DEBOUNCE register field. */
#define ALT_GPIO_DEBOUNCE_GPIO_DEBOUNCE_WIDTH      24
/* The mask used to set the ALT_GPIO_DEBOUNCE_GPIO_DEBOUNCE register field value. */
#define ALT_GPIO_DEBOUNCE_GPIO_DEBOUNCE_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_GPIO_DEBOUNCE_GPIO_DEBOUNCE register field value. */
#define ALT_GPIO_DEBOUNCE_GPIO_DEBOUNCE_CLR_MSK    0xff000000
/* The reset value of the ALT_GPIO_DEBOUNCE_GPIO_DEBOUNCE register field. */
#define ALT_GPIO_DEBOUNCE_GPIO_DEBOUNCE_RESET      0x0
/* Extracts the ALT_GPIO_DEBOUNCE_GPIO_DEBOUNCE field value from a register. */
#define ALT_GPIO_DEBOUNCE_GPIO_DEBOUNCE_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_GPIO_DEBOUNCE_GPIO_DEBOUNCE register field value suitable for setting the register. */
#define ALT_GPIO_DEBOUNCE_GPIO_DEBOUNCE_SET(value) (((value) << 0) & 0x00ffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_GPIO_DEBOUNCE.
 */
struct ALT_GPIO_DEBOUNCE_s
{
    uint32_t  gpio_debounce : 24;  /* ALT_GPIO_DEBOUNCE_GPIO_DEBOUNCE */
    uint32_t                :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_DEBOUNCE. */
typedef volatile struct ALT_GPIO_DEBOUNCE_s  ALT_GPIO_DEBOUNCE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_DEBOUNCE register. */
#define ALT_GPIO_DEBOUNCE_RESET       0x00000000
/* The byte offset of the ALT_GPIO_DEBOUNCE register from the beginning of the component. */
#define ALT_GPIO_DEBOUNCE_OFST        0x48
/* The address of the ALT_GPIO_DEBOUNCE register. */
#define ALT_GPIO_DEBOUNCE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_DEBOUNCE_OFST))

/*
 * Register : gpio_porta_eoi
 * 
 * Name: Port A clear interrupt register
 * 
 * Size: 1-32 bits
 * 
 * Address Offset: 0x4c
 * 
 * Read/Write Access: Write
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                      
 * :--------|:-------|:------|:----------------------------------
 *  [23:0]  | W      | 0x0   | ALT_GPIO_PORTA_EOI_GPIO_PORTA_EOI
 *  [31:24] | ???    | 0x0   | *UNDEFINED*                      
 * 
 */
/*
 * Field : gpio_porta_eoi
 * 
 * Controls the clearing of edge type interrupts from Port A.
 * 
 * When a 1 is written into a corresponding bit of this register,
 * 
 * the interrupt is cleared. All interrupts are cleared when
 * 
 * Port A is not configured for interrupts.
 * 
 * 0  No interrupt clear (default)
 * 
 * 1  Clear interrupt
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description       
 * :------------------------------------------|:------|:-------------------
 *  ALT_GPIO_PORTA_EOI_GPIO_PORTA_EOI_E_NOCLR | 0x0   | No interrupt clear
 *  ALT_GPIO_PORTA_EOI_GPIO_PORTA_EOI_E_CLR   | 0x1   | Clear interrupt   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_PORTA_EOI_GPIO_PORTA_EOI
 * 
 * No interrupt clear
 */
#define ALT_GPIO_PORTA_EOI_GPIO_PORTA_EOI_E_NOCLR   0x0
/*
 * Enumerated value for register field ALT_GPIO_PORTA_EOI_GPIO_PORTA_EOI
 * 
 * Clear interrupt
 */
#define ALT_GPIO_PORTA_EOI_GPIO_PORTA_EOI_E_CLR     0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_PORTA_EOI_GPIO_PORTA_EOI register field. */
#define ALT_GPIO_PORTA_EOI_GPIO_PORTA_EOI_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_PORTA_EOI_GPIO_PORTA_EOI register field. */
#define ALT_GPIO_PORTA_EOI_GPIO_PORTA_EOI_MSB        23
/* The width in bits of the ALT_GPIO_PORTA_EOI_GPIO_PORTA_EOI register field. */
#define ALT_GPIO_PORTA_EOI_GPIO_PORTA_EOI_WIDTH      24
/* The mask used to set the ALT_GPIO_PORTA_EOI_GPIO_PORTA_EOI register field value. */
#define ALT_GPIO_PORTA_EOI_GPIO_PORTA_EOI_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_GPIO_PORTA_EOI_GPIO_PORTA_EOI register field value. */
#define ALT_GPIO_PORTA_EOI_GPIO_PORTA_EOI_CLR_MSK    0xff000000
/* The reset value of the ALT_GPIO_PORTA_EOI_GPIO_PORTA_EOI register field. */
#define ALT_GPIO_PORTA_EOI_GPIO_PORTA_EOI_RESET      0x0
/* Extracts the ALT_GPIO_PORTA_EOI_GPIO_PORTA_EOI field value from a register. */
#define ALT_GPIO_PORTA_EOI_GPIO_PORTA_EOI_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_GPIO_PORTA_EOI_GPIO_PORTA_EOI register field value suitable for setting the register. */
#define ALT_GPIO_PORTA_EOI_GPIO_PORTA_EOI_SET(value) (((value) << 0) & 0x00ffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_GPIO_PORTA_EOI.
 */
struct ALT_GPIO_PORTA_EOI_s
{
    uint32_t  gpio_porta_eoi : 24;  /* ALT_GPIO_PORTA_EOI_GPIO_PORTA_EOI */
    uint32_t                 :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_PORTA_EOI. */
typedef volatile struct ALT_GPIO_PORTA_EOI_s  ALT_GPIO_PORTA_EOI_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_PORTA_EOI register. */
#define ALT_GPIO_PORTA_EOI_RESET       0x00000000
/* The byte offset of the ALT_GPIO_PORTA_EOI register from the beginning of the component. */
#define ALT_GPIO_PORTA_EOI_OFST        0x4c
/* The address of the ALT_GPIO_PORTA_EOI register. */
#define ALT_GPIO_PORTA_EOI_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_PORTA_EOI_OFST))

/*
 * Register : gpio_ext_porta
 * 
 * Name: Port A external port register
 * 
 * Size: 1-32 bits
 * 
 * Address Offset: 0x50
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                      
 * :--------|:-------|:------|:----------------------------------
 *  [23:0]  | R      | 0x0   | ALT_GPIO_EXT_PORTA_GPIO_EXT_PORTA
 *  [31:24] | ???    | 0x0   | *UNDEFINED*                      
 * 
 */
/*
 * Field : gpio_ext_porta
 * 
 * When Port A is configured as Input, then reading this
 * 
 * location reads the values on the signal. When the data
 * 
 * direction of Port A is set as Output, reading this location
 * 
 * reads the data register for Port A.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_GPIO_EXT_PORTA_GPIO_EXT_PORTA register field. */
#define ALT_GPIO_EXT_PORTA_GPIO_EXT_PORTA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_EXT_PORTA_GPIO_EXT_PORTA register field. */
#define ALT_GPIO_EXT_PORTA_GPIO_EXT_PORTA_MSB        23
/* The width in bits of the ALT_GPIO_EXT_PORTA_GPIO_EXT_PORTA register field. */
#define ALT_GPIO_EXT_PORTA_GPIO_EXT_PORTA_WIDTH      24
/* The mask used to set the ALT_GPIO_EXT_PORTA_GPIO_EXT_PORTA register field value. */
#define ALT_GPIO_EXT_PORTA_GPIO_EXT_PORTA_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_GPIO_EXT_PORTA_GPIO_EXT_PORTA register field value. */
#define ALT_GPIO_EXT_PORTA_GPIO_EXT_PORTA_CLR_MSK    0xff000000
/* The reset value of the ALT_GPIO_EXT_PORTA_GPIO_EXT_PORTA register field. */
#define ALT_GPIO_EXT_PORTA_GPIO_EXT_PORTA_RESET      0x0
/* Extracts the ALT_GPIO_EXT_PORTA_GPIO_EXT_PORTA field value from a register. */
#define ALT_GPIO_EXT_PORTA_GPIO_EXT_PORTA_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_GPIO_EXT_PORTA_GPIO_EXT_PORTA register field value suitable for setting the register. */
#define ALT_GPIO_EXT_PORTA_GPIO_EXT_PORTA_SET(value) (((value) << 0) & 0x00ffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_GPIO_EXT_PORTA.
 */
struct ALT_GPIO_EXT_PORTA_s
{
    const uint32_t  gpio_ext_porta : 24;  /* ALT_GPIO_EXT_PORTA_GPIO_EXT_PORTA */
    uint32_t                       :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_EXT_PORTA. */
typedef volatile struct ALT_GPIO_EXT_PORTA_s  ALT_GPIO_EXT_PORTA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_EXT_PORTA register. */
#define ALT_GPIO_EXT_PORTA_RESET       0x00000000
/* The byte offset of the ALT_GPIO_EXT_PORTA register from the beginning of the component. */
#define ALT_GPIO_EXT_PORTA_OFST        0x50
/* The address of the ALT_GPIO_EXT_PORTA register. */
#define ALT_GPIO_EXT_PORTA_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_EXT_PORTA_OFST))

/*
 * Register : gpio_ls_sync
 * 
 * Name: Synchronization level
 * 
 * Size: 1 bit
 * 
 * Address Offset: 0x60
 * 
 * Read/Write Access: Read/Write
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                  
 * :-------|:-------|:------|:------------------------------
 *  [0]    | RW     | 0x0   | ALT_GPIO_LS_SYNC_GPIO_LS_SYNC
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                  
 * 
 */
/*
 * Field : gpio_ls_sync
 * 
 * Writing a 1 to this register results in all level-sensitive interrupts being
 * 
 * synchronized to pclk_intr.
 * 
 * 0  No synchronization to pclk_intr (default)
 * 
 * 1  Synchronize to pclk_intr
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description                    
 * :---------------------------------------|:------|:--------------------------------
 *  ALT_GPIO_LS_SYNC_GPIO_LS_SYNC_E_NOSYNC | 0x0   | No synchronization to l4_mp_clk
 *  ALT_GPIO_LS_SYNC_GPIO_LS_SYNC_E_SYNC   | 0x1   | Synchronize to l4_mp_clk       
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_LS_SYNC_GPIO_LS_SYNC
 * 
 * No synchronization to l4_mp_clk
 */
#define ALT_GPIO_LS_SYNC_GPIO_LS_SYNC_E_NOSYNC  0x0
/*
 * Enumerated value for register field ALT_GPIO_LS_SYNC_GPIO_LS_SYNC
 * 
 * Synchronize to l4_mp_clk
 */
#define ALT_GPIO_LS_SYNC_GPIO_LS_SYNC_E_SYNC    0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_LS_SYNC_GPIO_LS_SYNC register field. */
#define ALT_GPIO_LS_SYNC_GPIO_LS_SYNC_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_LS_SYNC_GPIO_LS_SYNC register field. */
#define ALT_GPIO_LS_SYNC_GPIO_LS_SYNC_MSB        0
/* The width in bits of the ALT_GPIO_LS_SYNC_GPIO_LS_SYNC register field. */
#define ALT_GPIO_LS_SYNC_GPIO_LS_SYNC_WIDTH      1
/* The mask used to set the ALT_GPIO_LS_SYNC_GPIO_LS_SYNC register field value. */
#define ALT_GPIO_LS_SYNC_GPIO_LS_SYNC_SET_MSK    0x00000001
/* The mask used to clear the ALT_GPIO_LS_SYNC_GPIO_LS_SYNC register field value. */
#define ALT_GPIO_LS_SYNC_GPIO_LS_SYNC_CLR_MSK    0xfffffffe
/* The reset value of the ALT_GPIO_LS_SYNC_GPIO_LS_SYNC register field. */
#define ALT_GPIO_LS_SYNC_GPIO_LS_SYNC_RESET      0x0
/* Extracts the ALT_GPIO_LS_SYNC_GPIO_LS_SYNC field value from a register. */
#define ALT_GPIO_LS_SYNC_GPIO_LS_SYNC_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_GPIO_LS_SYNC_GPIO_LS_SYNC register field value suitable for setting the register. */
#define ALT_GPIO_LS_SYNC_GPIO_LS_SYNC_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_GPIO_LS_SYNC.
 */
struct ALT_GPIO_LS_SYNC_s
{
    uint32_t  gpio_ls_sync :  1;  /* ALT_GPIO_LS_SYNC_GPIO_LS_SYNC */
    uint32_t               : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_LS_SYNC. */
typedef volatile struct ALT_GPIO_LS_SYNC_s  ALT_GPIO_LS_SYNC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_LS_SYNC register. */
#define ALT_GPIO_LS_SYNC_RESET       0x00000000
/* The byte offset of the ALT_GPIO_LS_SYNC register from the beginning of the component. */
#define ALT_GPIO_LS_SYNC_OFST        0x60
/* The address of the ALT_GPIO_LS_SYNC register. */
#define ALT_GPIO_LS_SYNC_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_LS_SYNC_OFST))

/*
 * Register : gpio_id_code
 * 
 * Name: GPIO ID code
 * 
 * Size: 1-32 bits
 * 
 * Address Offset: 0x64
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                  
 * :-------|:-------|:------|:------------------------------
 *  [31:0] | R      | 0x0   | ALT_GPIO_ID_CODE_GPIO_ID_CODE
 * 
 */
/*
 * Field : gpio_id_code
 * 
 * This is a user-specified code that a system can read. It can
 * 
 * be used for chip identification, and so on.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_GPIO_ID_CODE_GPIO_ID_CODE register field. */
#define ALT_GPIO_ID_CODE_GPIO_ID_CODE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_ID_CODE_GPIO_ID_CODE register field. */
#define ALT_GPIO_ID_CODE_GPIO_ID_CODE_MSB        31
/* The width in bits of the ALT_GPIO_ID_CODE_GPIO_ID_CODE register field. */
#define ALT_GPIO_ID_CODE_GPIO_ID_CODE_WIDTH      32
/* The mask used to set the ALT_GPIO_ID_CODE_GPIO_ID_CODE register field value. */
#define ALT_GPIO_ID_CODE_GPIO_ID_CODE_SET_MSK    0xffffffff
/* The mask used to clear the ALT_GPIO_ID_CODE_GPIO_ID_CODE register field value. */
#define ALT_GPIO_ID_CODE_GPIO_ID_CODE_CLR_MSK    0x00000000
/* The reset value of the ALT_GPIO_ID_CODE_GPIO_ID_CODE register field. */
#define ALT_GPIO_ID_CODE_GPIO_ID_CODE_RESET      0x0
/* Extracts the ALT_GPIO_ID_CODE_GPIO_ID_CODE field value from a register. */
#define ALT_GPIO_ID_CODE_GPIO_ID_CODE_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_GPIO_ID_CODE_GPIO_ID_CODE register field value suitable for setting the register. */
#define ALT_GPIO_ID_CODE_GPIO_ID_CODE_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_GPIO_ID_CODE.
 */
struct ALT_GPIO_ID_CODE_s
{
    const uint32_t  gpio_id_code : 32;  /* ALT_GPIO_ID_CODE_GPIO_ID_CODE */
};

/* The typedef declaration for register ALT_GPIO_ID_CODE. */
typedef volatile struct ALT_GPIO_ID_CODE_s  ALT_GPIO_ID_CODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_ID_CODE register. */
#define ALT_GPIO_ID_CODE_RESET       0x00000000
/* The byte offset of the ALT_GPIO_ID_CODE register from the beginning of the component. */
#define ALT_GPIO_ID_CODE_OFST        0x64
/* The address of the ALT_GPIO_ID_CODE register. */
#define ALT_GPIO_ID_CODE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_ID_CODE_OFST))

/*
 * Register : gpio_ver_id_code
 * 
 * Name: GPIO Component Version
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x6c
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset      | Description                          
 * :-------|:-------|:-----------|:--------------------------------------
 *  [31:0] | R      | 0x3230392a | ALT_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE
 * 
 */
/*
 * Field : gpio_ver_id_code
 * 
 * ASCII value for each number in the version.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE register field. */
#define ALT_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE register field. */
#define ALT_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE_MSB        31
/* The width in bits of the ALT_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE register field. */
#define ALT_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE_WIDTH      32
/* The mask used to set the ALT_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE register field value. */
#define ALT_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE_SET_MSK    0xffffffff
/* The mask used to clear the ALT_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE register field value. */
#define ALT_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE_CLR_MSK    0x00000000
/* The reset value of the ALT_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE register field. */
#define ALT_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE_RESET      0x3230392a
/* Extracts the ALT_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE field value from a register. */
#define ALT_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE register field value suitable for setting the register. */
#define ALT_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_GPIO_VER_ID_CODE.
 */
struct ALT_GPIO_VER_ID_CODE_s
{
    const uint32_t  gpio_ver_id_code : 32;  /* ALT_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE */
};

/* The typedef declaration for register ALT_GPIO_VER_ID_CODE. */
typedef volatile struct ALT_GPIO_VER_ID_CODE_s  ALT_GPIO_VER_ID_CODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_VER_ID_CODE register. */
#define ALT_GPIO_VER_ID_CODE_RESET       0x3230392a
/* The byte offset of the ALT_GPIO_VER_ID_CODE register from the beginning of the component. */
#define ALT_GPIO_VER_ID_CODE_OFST        0x6c
/* The address of the ALT_GPIO_VER_ID_CODE register. */
#define ALT_GPIO_VER_ID_CODE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_VER_ID_CODE_OFST))

/*
 * Register : gpio_config_reg2
 * 
 * Name: GPIO Configuration Register 2
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x70
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                      
 * :--------|:-------|:------|:----------------------------------
 *  [4:0]   | R      | 0x17  | ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_A
 *  [9:5]   | R      | 0x7   | ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_B
 *  [14:10] | R      | 0x7   | ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_C
 *  [19:15] | R      | 0x7   | ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_D
 *  [31:20] | ???    | 0x0   | *UNDEFINED*                      
 * 
 */
/*
 * Field : encoded_id_pwidth_a
 * 
 * The value of this register is derived from the
 * 
 * GPIO_PWIDTH_A configuration parameter.
 * 
 * 0x0 = 8 bits
 * 
 * 0x1 = 16 bits
 * 
 * 0x2 = 32 bits
 * 
 * 0x3 = Reserved
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                   | Value | Description              
 * :-------------------------------------------------------|:------|:--------------------------
 *  ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_A_E_WIDTHLESSONE8BITS  | 0x7   | Width (less 1) of 8 bits 
 *  ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_A_E_WIDTHLESSONE24BITS | 0x1c  | Width (less 1) of 24 bits
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_A
 * 
 * Width (less 1) of 8 bits
 */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_A_E_WIDTHLESSONE8BITS   0x7
/*
 * Enumerated value for register field ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_A
 * 
 * Width (less 1) of 24 bits
 */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_A_E_WIDTHLESSONE24BITS  0x1c

/* The Least Significant Bit (LSB) position of the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_A register field. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_A_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_A register field. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_A_MSB        4
/* The width in bits of the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_A register field. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_A_WIDTH      5
/* The mask used to set the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_A register field value. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_A_SET_MSK    0x0000001f
/* The mask used to clear the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_A register field value. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_A_CLR_MSK    0xffffffe0
/* The reset value of the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_A register field. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_A_RESET      0x17
/* Extracts the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_A field value from a register. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_A_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_A register field value suitable for setting the register. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_A_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : encoded_id_pwidth_b
 * 
 * The value of this register is derived from the
 * 
 * GPIO_PWIDTH_B configuration parameter.
 * 
 * 0x0 = 8 bits
 * 
 * 0x1 = 16 bits
 * 
 * 0x2 = 32 bits
 * 
 * 0x3 = Reserved
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                   | Value | Description              
 * :-------------------------------------------------------|:------|:--------------------------
 *  ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_B_E_WIDTHLESSONE8BITS  | 0x7   | Width (less 1) of 8 bits 
 *  ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_B_E_WIDTHLESSONE24BITS | 0x1c  | Width (less 1) of 24 bits
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_B
 * 
 * Width (less 1) of 8 bits
 */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_B_E_WIDTHLESSONE8BITS   0x7
/*
 * Enumerated value for register field ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_B
 * 
 * Width (less 1) of 24 bits
 */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_B_E_WIDTHLESSONE24BITS  0x1c

/* The Least Significant Bit (LSB) position of the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_B register field. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_B_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_B register field. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_B_MSB        9
/* The width in bits of the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_B register field. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_B_WIDTH      5
/* The mask used to set the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_B register field value. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_B_SET_MSK    0x000003e0
/* The mask used to clear the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_B register field value. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_B_CLR_MSK    0xfffffc1f
/* The reset value of the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_B register field. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_B_RESET      0x7
/* Extracts the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_B field value from a register. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_B_GET(value) (((value) & 0x000003e0) >> 5)
/* Produces a ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_B register field value suitable for setting the register. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_B_SET(value) (((value) << 5) & 0x000003e0)

/*
 * Field : encoded_id_pwidth_c
 * 
 * The value of this register is derived from the
 * 
 * GPIO_PWIDTH_C configuration parameter.
 * 
 * 0x0 = 8 bits
 * 
 * 0x1 = 16 bits
 * 
 * 0x2 = 32 bits
 * 
 * 0x3 = Reserved
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                   | Value | Description              
 * :-------------------------------------------------------|:------|:--------------------------
 *  ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_C_E_WIDTHLESSONE8BITS  | 0x7   | Width (less 1) of 8 bits 
 *  ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_C_E_WIDTHLESSONE24BITS | 0x1c  | Width (less 1) of 24 bits
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_C
 * 
 * Width (less 1) of 8 bits
 */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_C_E_WIDTHLESSONE8BITS   0x7
/*
 * Enumerated value for register field ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_C
 * 
 * Width (less 1) of 24 bits
 */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_C_E_WIDTHLESSONE24BITS  0x1c

/* The Least Significant Bit (LSB) position of the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_C register field. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_C_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_C register field. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_C_MSB        14
/* The width in bits of the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_C register field. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_C_WIDTH      5
/* The mask used to set the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_C register field value. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_C_SET_MSK    0x00007c00
/* The mask used to clear the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_C register field value. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_C_CLR_MSK    0xffff83ff
/* The reset value of the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_C register field. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_C_RESET      0x7
/* Extracts the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_C field value from a register. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_C_GET(value) (((value) & 0x00007c00) >> 10)
/* Produces a ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_C register field value suitable for setting the register. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_C_SET(value) (((value) << 10) & 0x00007c00)

/*
 * Field : encoded_id_pwidth_d
 * 
 * The value of this register is derived from the
 * 
 * GPIO_PWIDTH_D configuration parameter.
 * 
 * 0x0 = 8 bits
 * 
 * 0x1 = 16 bits
 * 
 * 0x2 = 32 bits
 * 
 * 0x3 = Reserved
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                   | Value | Description              
 * :-------------------------------------------------------|:------|:--------------------------
 *  ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_D_E_WIDTHLESSONE8BITS  | 0x7   | Width (less 1) of 8 bits 
 *  ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_D_E_WIDTHLESSONE24BITS | 0x1c  | Width (less 1) of 24 bits
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_D
 * 
 * Width (less 1) of 8 bits
 */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_D_E_WIDTHLESSONE8BITS   0x7
/*
 * Enumerated value for register field ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_D
 * 
 * Width (less 1) of 24 bits
 */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_D_E_WIDTHLESSONE24BITS  0x1c

/* The Least Significant Bit (LSB) position of the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_D register field. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_D_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_D register field. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_D_MSB        19
/* The width in bits of the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_D register field. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_D_WIDTH      5
/* The mask used to set the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_D register field value. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_D_SET_MSK    0x000f8000
/* The mask used to clear the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_D register field value. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_D_CLR_MSK    0xfff07fff
/* The reset value of the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_D register field. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_D_RESET      0x7
/* Extracts the ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_D field value from a register. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_D_GET(value) (((value) & 0x000f8000) >> 15)
/* Produces a ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_D register field value suitable for setting the register. */
#define ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_D_SET(value) (((value) << 15) & 0x000f8000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_GPIO_CFG_REG2.
 */
struct ALT_GPIO_CFG_REG2_s
{
    const uint32_t  encoded_id_pwidth_a :  5;  /* ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_A */
    const uint32_t  encoded_id_pwidth_b :  5;  /* ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_B */
    const uint32_t  encoded_id_pwidth_c :  5;  /* ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_C */
    const uint32_t  encoded_id_pwidth_d :  5;  /* ALT_GPIO_CFG_REG2_ENC_ID_PWIDTH_D */
    uint32_t                            : 12;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_CFG_REG2. */
typedef volatile struct ALT_GPIO_CFG_REG2_s  ALT_GPIO_CFG_REG2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_CFG_REG2 register. */
#define ALT_GPIO_CFG_REG2_RESET       0x00039cf7
/* The byte offset of the ALT_GPIO_CFG_REG2 register from the beginning of the component. */
#define ALT_GPIO_CFG_REG2_OFST        0x70
/* The address of the ALT_GPIO_CFG_REG2 register. */
#define ALT_GPIO_CFG_REG2_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_CFG_REG2_OFST))

/*
 * Register : gpio_config_reg1
 * 
 * Name: GPIO Configuration Register 1
 * 
 * Size: 32 bits
 * 
 * Address Offset: 0x74
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                       
 * :--------|:-------|:------|:-----------------------------------
 *  [1:0]   | R      | 0x2   | ALT_GPIO_CFG_REG1_APB_DATA_WIDTH  
 *  [3:2]   | R      | 0x0   | ALT_GPIO_CFG_REG1_NUM_PORTS       
 *  [4]     | R      | 0x1   | ALT_GPIO_CFG_REG1_PORTA_SINGLE_CTL
 *  [5]     | R      | 0x1   | ALT_GPIO_CFG_REG1_PORTB_SINGLE_CTL
 *  [6]     | R      | 0x1   | ALT_GPIO_CFG_REG1_PORTC_SINGLE_CTL
 *  [7]     | R      | 0x1   | ALT_GPIO_CFG_REG1_PORTD_SINGLE_CTL
 *  [8]     | R      | 0x0   | ALT_GPIO_CFG_REG1_HW_PORTA        
 *  [9]     | R      | 0x0   | ALT_GPIO_CFG_REG1_HW_PORTB        
 *  [10]    | R      | 0x0   | ALT_GPIO_CFG_REG1_HW_PORTC        
 *  [11]    | R      | 0x0   | ALT_GPIO_CFG_REG1_HW_PORTD        
 *  [12]    | R      | 0x1   | ALT_GPIO_CFG_REG1_PORTA_INTR      
 *  [13]    | R      | 0x1   | ALT_GPIO_CFG_REG1_DEBOUNCE        
 *  [14]    | R      | 0x1   | ALT_GPIO_CFG_REG1_ADD_ENC_PARAMS  
 *  [15]    | R      | 0x1   | ALT_GPIO_CFG_REG1_GPIO_ID         
 *  [20:16] | R      | 0x1f  | ALT_GPIO_CFG_REG1_ENC_ID_WIDTH    
 *  [31:21] | ???    | 0x0   | *UNDEFINED*                       
 * 
 */
/*
 * Field : apb_data_width
 * 
 * The value of this register is derived from the
 * 
 * GPIO_APB_DATA_WIDTH configuration parameter.
 * 
 * 0x0 = 8 bits
 * 
 * 0x1 = 16 bits
 * 
 * 0x2 = 32 bits
 * 
 * 0x3 = Reserved
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                           | Value | Description             
 * :-----------------------------------------------|:------|:-------------------------
 *  ALT_GPIO_CFG_REG1_APB_DATA_WIDTH_E_WIDTH32BITS | 0x2   | APB Data Width = 32-bits
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_CFG_REG1_APB_DATA_WIDTH
 * 
 * APB Data Width = 32-bits
 */
#define ALT_GPIO_CFG_REG1_APB_DATA_WIDTH_E_WIDTH32BITS  0x2

/* The Least Significant Bit (LSB) position of the ALT_GPIO_CFG_REG1_APB_DATA_WIDTH register field. */
#define ALT_GPIO_CFG_REG1_APB_DATA_WIDTH_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_CFG_REG1_APB_DATA_WIDTH register field. */
#define ALT_GPIO_CFG_REG1_APB_DATA_WIDTH_MSB        1
/* The width in bits of the ALT_GPIO_CFG_REG1_APB_DATA_WIDTH register field. */
#define ALT_GPIO_CFG_REG1_APB_DATA_WIDTH_WIDTH      2
/* The mask used to set the ALT_GPIO_CFG_REG1_APB_DATA_WIDTH register field value. */
#define ALT_GPIO_CFG_REG1_APB_DATA_WIDTH_SET_MSK    0x00000003
/* The mask used to clear the ALT_GPIO_CFG_REG1_APB_DATA_WIDTH register field value. */
#define ALT_GPIO_CFG_REG1_APB_DATA_WIDTH_CLR_MSK    0xfffffffc
/* The reset value of the ALT_GPIO_CFG_REG1_APB_DATA_WIDTH register field. */
#define ALT_GPIO_CFG_REG1_APB_DATA_WIDTH_RESET      0x2
/* Extracts the ALT_GPIO_CFG_REG1_APB_DATA_WIDTH field value from a register. */
#define ALT_GPIO_CFG_REG1_APB_DATA_WIDTH_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_GPIO_CFG_REG1_APB_DATA_WIDTH register field value suitable for setting the register. */
#define ALT_GPIO_CFG_REG1_APB_DATA_WIDTH_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : num_ports
 * 
 * The value of this register is derived from the
 * 
 * GPIO_NUM_PORT configuration parameter.
 * 
 * 0x0 =1
 * 
 * 0x1 = 2
 * 
 * 0x2 = 3
 * 
 * 0x3 = 4
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description             
 * :---------------------------------------|:------|:-------------------------
 *  ALT_GPIO_CFG_REG1_NUM_PORTS_E_ONEPORTA | 0x0   | Number of GPIO Ports = 1
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_CFG_REG1_NUM_PORTS
 * 
 * Number of GPIO Ports = 1
 */
#define ALT_GPIO_CFG_REG1_NUM_PORTS_E_ONEPORTA  0x0

/* The Least Significant Bit (LSB) position of the ALT_GPIO_CFG_REG1_NUM_PORTS register field. */
#define ALT_GPIO_CFG_REG1_NUM_PORTS_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_GPIO_CFG_REG1_NUM_PORTS register field. */
#define ALT_GPIO_CFG_REG1_NUM_PORTS_MSB        3
/* The width in bits of the ALT_GPIO_CFG_REG1_NUM_PORTS register field. */
#define ALT_GPIO_CFG_REG1_NUM_PORTS_WIDTH      2
/* The mask used to set the ALT_GPIO_CFG_REG1_NUM_PORTS register field value. */
#define ALT_GPIO_CFG_REG1_NUM_PORTS_SET_MSK    0x0000000c
/* The mask used to clear the ALT_GPIO_CFG_REG1_NUM_PORTS register field value. */
#define ALT_GPIO_CFG_REG1_NUM_PORTS_CLR_MSK    0xfffffff3
/* The reset value of the ALT_GPIO_CFG_REG1_NUM_PORTS register field. */
#define ALT_GPIO_CFG_REG1_NUM_PORTS_RESET      0x0
/* Extracts the ALT_GPIO_CFG_REG1_NUM_PORTS field value from a register. */
#define ALT_GPIO_CFG_REG1_NUM_PORTS_GET(value) (((value) & 0x0000000c) >> 2)
/* Produces a ALT_GPIO_CFG_REG1_NUM_PORTS register field value suitable for setting the register. */
#define ALT_GPIO_CFG_REG1_NUM_PORTS_SET(value) (((value) << 2) & 0x0000000c)

/*
 * Field : porta_single_ctl
 * 
 * The value of this register is derived from the
 * 
 * GPIO_PORTA_SINGLE_CTL configuration parameter.
 * 
 * 0 = False
 * 
 * 1 = True
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description                             
 * :-------------------------------------------------|:------|:-----------------------------------------
 *  ALT_GPIO_CFG_REG1_PORTA_SINGLE_CTL_E_SOFTCTLONLY | 0x1   | Software Enabled Individual Port Control
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_CFG_REG1_PORTA_SINGLE_CTL
 * 
 * Software Enabled Individual Port Control
 */
#define ALT_GPIO_CFG_REG1_PORTA_SINGLE_CTL_E_SOFTCTLONLY    0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_CFG_REG1_PORTA_SINGLE_CTL register field. */
#define ALT_GPIO_CFG_REG1_PORTA_SINGLE_CTL_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_GPIO_CFG_REG1_PORTA_SINGLE_CTL register field. */
#define ALT_GPIO_CFG_REG1_PORTA_SINGLE_CTL_MSB        4
/* The width in bits of the ALT_GPIO_CFG_REG1_PORTA_SINGLE_CTL register field. */
#define ALT_GPIO_CFG_REG1_PORTA_SINGLE_CTL_WIDTH      1
/* The mask used to set the ALT_GPIO_CFG_REG1_PORTA_SINGLE_CTL register field value. */
#define ALT_GPIO_CFG_REG1_PORTA_SINGLE_CTL_SET_MSK    0x00000010
/* The mask used to clear the ALT_GPIO_CFG_REG1_PORTA_SINGLE_CTL register field value. */
#define ALT_GPIO_CFG_REG1_PORTA_SINGLE_CTL_CLR_MSK    0xffffffef
/* The reset value of the ALT_GPIO_CFG_REG1_PORTA_SINGLE_CTL register field. */
#define ALT_GPIO_CFG_REG1_PORTA_SINGLE_CTL_RESET      0x1
/* Extracts the ALT_GPIO_CFG_REG1_PORTA_SINGLE_CTL field value from a register. */
#define ALT_GPIO_CFG_REG1_PORTA_SINGLE_CTL_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_GPIO_CFG_REG1_PORTA_SINGLE_CTL register field value suitable for setting the register. */
#define ALT_GPIO_CFG_REG1_PORTA_SINGLE_CTL_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : portb_single_ctl
 * 
 * The value of this register is derived from the
 * 
 * GPIO_PORTB_SINGLE_CTL configuration parameter.
 * 
 * 0 = False
 * 
 * 1 = True
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description                             
 * :-------------------------------------------------|:------|:-----------------------------------------
 *  ALT_GPIO_CFG_REG1_PORTB_SINGLE_CTL_E_SOFTCTLONLY | 0x1   | Software Enabled Individual Port Control
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_CFG_REG1_PORTB_SINGLE_CTL
 * 
 * Software Enabled Individual Port Control
 */
#define ALT_GPIO_CFG_REG1_PORTB_SINGLE_CTL_E_SOFTCTLONLY    0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_CFG_REG1_PORTB_SINGLE_CTL register field. */
#define ALT_GPIO_CFG_REG1_PORTB_SINGLE_CTL_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_GPIO_CFG_REG1_PORTB_SINGLE_CTL register field. */
#define ALT_GPIO_CFG_REG1_PORTB_SINGLE_CTL_MSB        5
/* The width in bits of the ALT_GPIO_CFG_REG1_PORTB_SINGLE_CTL register field. */
#define ALT_GPIO_CFG_REG1_PORTB_SINGLE_CTL_WIDTH      1
/* The mask used to set the ALT_GPIO_CFG_REG1_PORTB_SINGLE_CTL register field value. */
#define ALT_GPIO_CFG_REG1_PORTB_SINGLE_CTL_SET_MSK    0x00000020
/* The mask used to clear the ALT_GPIO_CFG_REG1_PORTB_SINGLE_CTL register field value. */
#define ALT_GPIO_CFG_REG1_PORTB_SINGLE_CTL_CLR_MSK    0xffffffdf
/* The reset value of the ALT_GPIO_CFG_REG1_PORTB_SINGLE_CTL register field. */
#define ALT_GPIO_CFG_REG1_PORTB_SINGLE_CTL_RESET      0x1
/* Extracts the ALT_GPIO_CFG_REG1_PORTB_SINGLE_CTL field value from a register. */
#define ALT_GPIO_CFG_REG1_PORTB_SINGLE_CTL_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_GPIO_CFG_REG1_PORTB_SINGLE_CTL register field value suitable for setting the register. */
#define ALT_GPIO_CFG_REG1_PORTB_SINGLE_CTL_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : portc_single_ctl
 * 
 * The value of this register is derived from the
 * 
 * GPIO_PORTC_SINGLE_CTL configuration parameter.
 * 
 * 0 = False
 * 
 * 1 = True
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description                             
 * :-------------------------------------------------|:------|:-----------------------------------------
 *  ALT_GPIO_CFG_REG1_PORTC_SINGLE_CTL_E_SOFTCTLONLY | 0x1   | Software Enabled Individual Port Control
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_CFG_REG1_PORTC_SINGLE_CTL
 * 
 * Software Enabled Individual Port Control
 */
#define ALT_GPIO_CFG_REG1_PORTC_SINGLE_CTL_E_SOFTCTLONLY    0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_CFG_REG1_PORTC_SINGLE_CTL register field. */
#define ALT_GPIO_CFG_REG1_PORTC_SINGLE_CTL_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_GPIO_CFG_REG1_PORTC_SINGLE_CTL register field. */
#define ALT_GPIO_CFG_REG1_PORTC_SINGLE_CTL_MSB        6
/* The width in bits of the ALT_GPIO_CFG_REG1_PORTC_SINGLE_CTL register field. */
#define ALT_GPIO_CFG_REG1_PORTC_SINGLE_CTL_WIDTH      1
/* The mask used to set the ALT_GPIO_CFG_REG1_PORTC_SINGLE_CTL register field value. */
#define ALT_GPIO_CFG_REG1_PORTC_SINGLE_CTL_SET_MSK    0x00000040
/* The mask used to clear the ALT_GPIO_CFG_REG1_PORTC_SINGLE_CTL register field value. */
#define ALT_GPIO_CFG_REG1_PORTC_SINGLE_CTL_CLR_MSK    0xffffffbf
/* The reset value of the ALT_GPIO_CFG_REG1_PORTC_SINGLE_CTL register field. */
#define ALT_GPIO_CFG_REG1_PORTC_SINGLE_CTL_RESET      0x1
/* Extracts the ALT_GPIO_CFG_REG1_PORTC_SINGLE_CTL field value from a register. */
#define ALT_GPIO_CFG_REG1_PORTC_SINGLE_CTL_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_GPIO_CFG_REG1_PORTC_SINGLE_CTL register field value suitable for setting the register. */
#define ALT_GPIO_CFG_REG1_PORTC_SINGLE_CTL_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : portd_single_ctl
 * 
 * The value of this register is derived from the
 * 
 * GPIO_PORTD_SINGLE_CTL configuration parameter.
 * 
 * 0 = False
 * 
 * 1 = True
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description                             
 * :-------------------------------------------------|:------|:-----------------------------------------
 *  ALT_GPIO_CFG_REG1_PORTD_SINGLE_CTL_E_SOFTCTLONLY | 0x1   | Software Enabled Individual Port Control
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_CFG_REG1_PORTD_SINGLE_CTL
 * 
 * Software Enabled Individual Port Control
 */
#define ALT_GPIO_CFG_REG1_PORTD_SINGLE_CTL_E_SOFTCTLONLY    0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_CFG_REG1_PORTD_SINGLE_CTL register field. */
#define ALT_GPIO_CFG_REG1_PORTD_SINGLE_CTL_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_GPIO_CFG_REG1_PORTD_SINGLE_CTL register field. */
#define ALT_GPIO_CFG_REG1_PORTD_SINGLE_CTL_MSB        7
/* The width in bits of the ALT_GPIO_CFG_REG1_PORTD_SINGLE_CTL register field. */
#define ALT_GPIO_CFG_REG1_PORTD_SINGLE_CTL_WIDTH      1
/* The mask used to set the ALT_GPIO_CFG_REG1_PORTD_SINGLE_CTL register field value. */
#define ALT_GPIO_CFG_REG1_PORTD_SINGLE_CTL_SET_MSK    0x00000080
/* The mask used to clear the ALT_GPIO_CFG_REG1_PORTD_SINGLE_CTL register field value. */
#define ALT_GPIO_CFG_REG1_PORTD_SINGLE_CTL_CLR_MSK    0xffffff7f
/* The reset value of the ALT_GPIO_CFG_REG1_PORTD_SINGLE_CTL register field. */
#define ALT_GPIO_CFG_REG1_PORTD_SINGLE_CTL_RESET      0x1
/* Extracts the ALT_GPIO_CFG_REG1_PORTD_SINGLE_CTL field value from a register. */
#define ALT_GPIO_CFG_REG1_PORTD_SINGLE_CTL_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_GPIO_CFG_REG1_PORTD_SINGLE_CTL register field value suitable for setting the register. */
#define ALT_GPIO_CFG_REG1_PORTD_SINGLE_CTL_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : hw_porta
 * 
 * The value of this register is derived from the
 * 
 * GPIO_HW_PORTA configuration parameter.
 * 
 * 0 = Exclude
 * 
 * 1 = Include
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description                           
 * :-----------------------------------------|:------|:---------------------------------------
 *  ALT_GPIO_CFG_REG1_HW_PORTA_E_PORTANOHARD | 0x0   | Software Configuration Control Enabled
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_CFG_REG1_HW_PORTA
 * 
 * Software Configuration Control Enabled
 */
#define ALT_GPIO_CFG_REG1_HW_PORTA_E_PORTANOHARD    0x0

/* The Least Significant Bit (LSB) position of the ALT_GPIO_CFG_REG1_HW_PORTA register field. */
#define ALT_GPIO_CFG_REG1_HW_PORTA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_GPIO_CFG_REG1_HW_PORTA register field. */
#define ALT_GPIO_CFG_REG1_HW_PORTA_MSB        8
/* The width in bits of the ALT_GPIO_CFG_REG1_HW_PORTA register field. */
#define ALT_GPIO_CFG_REG1_HW_PORTA_WIDTH      1
/* The mask used to set the ALT_GPIO_CFG_REG1_HW_PORTA register field value. */
#define ALT_GPIO_CFG_REG1_HW_PORTA_SET_MSK    0x00000100
/* The mask used to clear the ALT_GPIO_CFG_REG1_HW_PORTA register field value. */
#define ALT_GPIO_CFG_REG1_HW_PORTA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_GPIO_CFG_REG1_HW_PORTA register field. */
#define ALT_GPIO_CFG_REG1_HW_PORTA_RESET      0x0
/* Extracts the ALT_GPIO_CFG_REG1_HW_PORTA field value from a register. */
#define ALT_GPIO_CFG_REG1_HW_PORTA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_GPIO_CFG_REG1_HW_PORTA register field value suitable for setting the register. */
#define ALT_GPIO_CFG_REG1_HW_PORTA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : hw_portb
 * 
 * The value of this register is derived from the
 * 
 * GPIO_HW_PORTB configuration parameter.
 * 
 * 0 = Exclude
 * 
 * 1 = Include
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_GPIO_CFG_REG1_HW_PORTB register field. */
#define ALT_GPIO_CFG_REG1_HW_PORTB_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_GPIO_CFG_REG1_HW_PORTB register field. */
#define ALT_GPIO_CFG_REG1_HW_PORTB_MSB        9
/* The width in bits of the ALT_GPIO_CFG_REG1_HW_PORTB register field. */
#define ALT_GPIO_CFG_REG1_HW_PORTB_WIDTH      1
/* The mask used to set the ALT_GPIO_CFG_REG1_HW_PORTB register field value. */
#define ALT_GPIO_CFG_REG1_HW_PORTB_SET_MSK    0x00000200
/* The mask used to clear the ALT_GPIO_CFG_REG1_HW_PORTB register field value. */
#define ALT_GPIO_CFG_REG1_HW_PORTB_CLR_MSK    0xfffffdff
/* The reset value of the ALT_GPIO_CFG_REG1_HW_PORTB register field. */
#define ALT_GPIO_CFG_REG1_HW_PORTB_RESET      0x0
/* Extracts the ALT_GPIO_CFG_REG1_HW_PORTB field value from a register. */
#define ALT_GPIO_CFG_REG1_HW_PORTB_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_GPIO_CFG_REG1_HW_PORTB register field value suitable for setting the register. */
#define ALT_GPIO_CFG_REG1_HW_PORTB_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : hw_portc
 * 
 * The value of this register is derived from the
 * 
 * GPIO_HW_PORTC configuration parameter.
 * 
 * 0 = Exclude
 * 
 * 1 = Include
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_GPIO_CFG_REG1_HW_PORTC register field. */
#define ALT_GPIO_CFG_REG1_HW_PORTC_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_GPIO_CFG_REG1_HW_PORTC register field. */
#define ALT_GPIO_CFG_REG1_HW_PORTC_MSB        10
/* The width in bits of the ALT_GPIO_CFG_REG1_HW_PORTC register field. */
#define ALT_GPIO_CFG_REG1_HW_PORTC_WIDTH      1
/* The mask used to set the ALT_GPIO_CFG_REG1_HW_PORTC register field value. */
#define ALT_GPIO_CFG_REG1_HW_PORTC_SET_MSK    0x00000400
/* The mask used to clear the ALT_GPIO_CFG_REG1_HW_PORTC register field value. */
#define ALT_GPIO_CFG_REG1_HW_PORTC_CLR_MSK    0xfffffbff
/* The reset value of the ALT_GPIO_CFG_REG1_HW_PORTC register field. */
#define ALT_GPIO_CFG_REG1_HW_PORTC_RESET      0x0
/* Extracts the ALT_GPIO_CFG_REG1_HW_PORTC field value from a register. */
#define ALT_GPIO_CFG_REG1_HW_PORTC_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_GPIO_CFG_REG1_HW_PORTC register field value suitable for setting the register. */
#define ALT_GPIO_CFG_REG1_HW_PORTC_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : hw_portd
 * 
 * The value of this register is derived from the
 * 
 * GPIO_HW_PORTD configuration parameter.
 * 
 * 0 = Exclude
 * 
 * 1 = Include
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_GPIO_CFG_REG1_HW_PORTD register field. */
#define ALT_GPIO_CFG_REG1_HW_PORTD_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_GPIO_CFG_REG1_HW_PORTD register field. */
#define ALT_GPIO_CFG_REG1_HW_PORTD_MSB        11
/* The width in bits of the ALT_GPIO_CFG_REG1_HW_PORTD register field. */
#define ALT_GPIO_CFG_REG1_HW_PORTD_WIDTH      1
/* The mask used to set the ALT_GPIO_CFG_REG1_HW_PORTD register field value. */
#define ALT_GPIO_CFG_REG1_HW_PORTD_SET_MSK    0x00000800
/* The mask used to clear the ALT_GPIO_CFG_REG1_HW_PORTD register field value. */
#define ALT_GPIO_CFG_REG1_HW_PORTD_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_GPIO_CFG_REG1_HW_PORTD register field. */
#define ALT_GPIO_CFG_REG1_HW_PORTD_RESET      0x0
/* Extracts the ALT_GPIO_CFG_REG1_HW_PORTD field value from a register. */
#define ALT_GPIO_CFG_REG1_HW_PORTD_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_GPIO_CFG_REG1_HW_PORTD register field value suitable for setting the register. */
#define ALT_GPIO_CFG_REG1_HW_PORTD_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : porta_intr
 * 
 * The value of this register is derived from the
 * 
 * GPIO_PORTA_INTR configuration parameter.
 * 
 * 0 = Exclude
 * 
 * 1 = Include
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description              
 * :-------------------------------------------|:------|:--------------------------
 *  ALT_GPIO_CFG_REG1_PORTA_INTR_E_PORTAINTERR | 0x1   | Port A Interrupts Enabled
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_CFG_REG1_PORTA_INTR
 * 
 * Port A Interrupts Enabled
 */
#define ALT_GPIO_CFG_REG1_PORTA_INTR_E_PORTAINTERR  0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_CFG_REG1_PORTA_INTR register field. */
#define ALT_GPIO_CFG_REG1_PORTA_INTR_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_GPIO_CFG_REG1_PORTA_INTR register field. */
#define ALT_GPIO_CFG_REG1_PORTA_INTR_MSB        12
/* The width in bits of the ALT_GPIO_CFG_REG1_PORTA_INTR register field. */
#define ALT_GPIO_CFG_REG1_PORTA_INTR_WIDTH      1
/* The mask used to set the ALT_GPIO_CFG_REG1_PORTA_INTR register field value. */
#define ALT_GPIO_CFG_REG1_PORTA_INTR_SET_MSK    0x00001000
/* The mask used to clear the ALT_GPIO_CFG_REG1_PORTA_INTR register field value. */
#define ALT_GPIO_CFG_REG1_PORTA_INTR_CLR_MSK    0xffffefff
/* The reset value of the ALT_GPIO_CFG_REG1_PORTA_INTR register field. */
#define ALT_GPIO_CFG_REG1_PORTA_INTR_RESET      0x1
/* Extracts the ALT_GPIO_CFG_REG1_PORTA_INTR field value from a register. */
#define ALT_GPIO_CFG_REG1_PORTA_INTR_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_GPIO_CFG_REG1_PORTA_INTR register field value suitable for setting the register. */
#define ALT_GPIO_CFG_REG1_PORTA_INTR_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : debounce
 * 
 * The value of this register is derived from the
 * 
 * GPIO_DEBOUNCE configuration parameter.
 * 
 * 0 = Exclude
 * 
 * 1 = Include
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description        
 * :---------------------------------------|:------|:--------------------
 *  ALT_GPIO_CFG_REG1_DEBOUNCE_E_DEBOUNCEA | 0x1   | Debounce is Enabled
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_CFG_REG1_DEBOUNCE
 * 
 * Debounce is Enabled
 */
#define ALT_GPIO_CFG_REG1_DEBOUNCE_E_DEBOUNCEA  0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_CFG_REG1_DEBOUNCE register field. */
#define ALT_GPIO_CFG_REG1_DEBOUNCE_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_GPIO_CFG_REG1_DEBOUNCE register field. */
#define ALT_GPIO_CFG_REG1_DEBOUNCE_MSB        13
/* The width in bits of the ALT_GPIO_CFG_REG1_DEBOUNCE register field. */
#define ALT_GPIO_CFG_REG1_DEBOUNCE_WIDTH      1
/* The mask used to set the ALT_GPIO_CFG_REG1_DEBOUNCE register field value. */
#define ALT_GPIO_CFG_REG1_DEBOUNCE_SET_MSK    0x00002000
/* The mask used to clear the ALT_GPIO_CFG_REG1_DEBOUNCE register field value. */
#define ALT_GPIO_CFG_REG1_DEBOUNCE_CLR_MSK    0xffffdfff
/* The reset value of the ALT_GPIO_CFG_REG1_DEBOUNCE register field. */
#define ALT_GPIO_CFG_REG1_DEBOUNCE_RESET      0x1
/* Extracts the ALT_GPIO_CFG_REG1_DEBOUNCE field value from a register. */
#define ALT_GPIO_CFG_REG1_DEBOUNCE_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_GPIO_CFG_REG1_DEBOUNCE register field value suitable for setting the register. */
#define ALT_GPIO_CFG_REG1_DEBOUNCE_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : add_encoded_params
 * 
 * The value of this register is derived from the
 * 
 * GPIO_ADD_ENCODED_PARAMS configuration parameter.
 * 
 * 0 = False
 * 
 * 1 = True
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description              
 * :------------------------------------------------|:------|:--------------------------
 *  ALT_GPIO_CFG_REG1_ADD_ENC_PARAMS_E_ADDENCPARAMS | 0x1   | Enable IP indentification
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_CFG_REG1_ADD_ENC_PARAMS
 * 
 * Enable IP indentification
 */
#define ALT_GPIO_CFG_REG1_ADD_ENC_PARAMS_E_ADDENCPARAMS 0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_CFG_REG1_ADD_ENC_PARAMS register field. */
#define ALT_GPIO_CFG_REG1_ADD_ENC_PARAMS_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_GPIO_CFG_REG1_ADD_ENC_PARAMS register field. */
#define ALT_GPIO_CFG_REG1_ADD_ENC_PARAMS_MSB        14
/* The width in bits of the ALT_GPIO_CFG_REG1_ADD_ENC_PARAMS register field. */
#define ALT_GPIO_CFG_REG1_ADD_ENC_PARAMS_WIDTH      1
/* The mask used to set the ALT_GPIO_CFG_REG1_ADD_ENC_PARAMS register field value. */
#define ALT_GPIO_CFG_REG1_ADD_ENC_PARAMS_SET_MSK    0x00004000
/* The mask used to clear the ALT_GPIO_CFG_REG1_ADD_ENC_PARAMS register field value. */
#define ALT_GPIO_CFG_REG1_ADD_ENC_PARAMS_CLR_MSK    0xffffbfff
/* The reset value of the ALT_GPIO_CFG_REG1_ADD_ENC_PARAMS register field. */
#define ALT_GPIO_CFG_REG1_ADD_ENC_PARAMS_RESET      0x1
/* Extracts the ALT_GPIO_CFG_REG1_ADD_ENC_PARAMS field value from a register. */
#define ALT_GPIO_CFG_REG1_ADD_ENC_PARAMS_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_GPIO_CFG_REG1_ADD_ENC_PARAMS register field value suitable for setting the register. */
#define ALT_GPIO_CFG_REG1_ADD_ENC_PARAMS_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : gpio_id
 * 
 * The value of this register is derived from the
 * 
 * GPIO_ID configuration parameter.
 * 
 * 0 = Exclude
 * 
 * 1 = Include
 * 
 * Field Enumeration Values:
 * 
 *  Enum                               | Value | Description 
 * :-----------------------------------|:------|:-------------
 *  ALT_GPIO_CFG_REG1_GPIO_ID_E_IDCODE | 0x1   | GPIO ID Code
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_CFG_REG1_GPIO_ID
 * 
 * GPIO ID Code
 */
#define ALT_GPIO_CFG_REG1_GPIO_ID_E_IDCODE  0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_CFG_REG1_GPIO_ID register field. */
#define ALT_GPIO_CFG_REG1_GPIO_ID_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_GPIO_CFG_REG1_GPIO_ID register field. */
#define ALT_GPIO_CFG_REG1_GPIO_ID_MSB        15
/* The width in bits of the ALT_GPIO_CFG_REG1_GPIO_ID register field. */
#define ALT_GPIO_CFG_REG1_GPIO_ID_WIDTH      1
/* The mask used to set the ALT_GPIO_CFG_REG1_GPIO_ID register field value. */
#define ALT_GPIO_CFG_REG1_GPIO_ID_SET_MSK    0x00008000
/* The mask used to clear the ALT_GPIO_CFG_REG1_GPIO_ID register field value. */
#define ALT_GPIO_CFG_REG1_GPIO_ID_CLR_MSK    0xffff7fff
/* The reset value of the ALT_GPIO_CFG_REG1_GPIO_ID register field. */
#define ALT_GPIO_CFG_REG1_GPIO_ID_RESET      0x1
/* Extracts the ALT_GPIO_CFG_REG1_GPIO_ID field value from a register. */
#define ALT_GPIO_CFG_REG1_GPIO_ID_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_GPIO_CFG_REG1_GPIO_ID register field value suitable for setting the register. */
#define ALT_GPIO_CFG_REG1_GPIO_ID_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : encoded_id_width
 * 
 * The value of this register is derived from the
 * 
 * GPIO_ID_WIDTH configuration parameter.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                        | Value | Description      
 * :--------------------------------------------|:------|:------------------
 *  ALT_GPIO_CFG_REG1_ENC_ID_WIDTH_E_ENCIDWIDTH | 0x1f  | Width of ID Field
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_CFG_REG1_ENC_ID_WIDTH
 * 
 * Width of ID Field
 */
#define ALT_GPIO_CFG_REG1_ENC_ID_WIDTH_E_ENCIDWIDTH 0x1f

/* The Least Significant Bit (LSB) position of the ALT_GPIO_CFG_REG1_ENC_ID_WIDTH register field. */
#define ALT_GPIO_CFG_REG1_ENC_ID_WIDTH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_GPIO_CFG_REG1_ENC_ID_WIDTH register field. */
#define ALT_GPIO_CFG_REG1_ENC_ID_WIDTH_MSB        20
/* The width in bits of the ALT_GPIO_CFG_REG1_ENC_ID_WIDTH register field. */
#define ALT_GPIO_CFG_REG1_ENC_ID_WIDTH_WIDTH      5
/* The mask used to set the ALT_GPIO_CFG_REG1_ENC_ID_WIDTH register field value. */
#define ALT_GPIO_CFG_REG1_ENC_ID_WIDTH_SET_MSK    0x001f0000
/* The mask used to clear the ALT_GPIO_CFG_REG1_ENC_ID_WIDTH register field value. */
#define ALT_GPIO_CFG_REG1_ENC_ID_WIDTH_CLR_MSK    0xffe0ffff
/* The reset value of the ALT_GPIO_CFG_REG1_ENC_ID_WIDTH register field. */
#define ALT_GPIO_CFG_REG1_ENC_ID_WIDTH_RESET      0x1f
/* Extracts the ALT_GPIO_CFG_REG1_ENC_ID_WIDTH field value from a register. */
#define ALT_GPIO_CFG_REG1_ENC_ID_WIDTH_GET(value) (((value) & 0x001f0000) >> 16)
/* Produces a ALT_GPIO_CFG_REG1_ENC_ID_WIDTH register field value suitable for setting the register. */
#define ALT_GPIO_CFG_REG1_ENC_ID_WIDTH_SET(value) (((value) << 16) & 0x001f0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_GPIO_CFG_REG1.
 */
struct ALT_GPIO_CFG_REG1_s
{
    const uint32_t  apb_data_width     :  2;  /* ALT_GPIO_CFG_REG1_APB_DATA_WIDTH */
    const uint32_t  num_ports          :  2;  /* ALT_GPIO_CFG_REG1_NUM_PORTS */
    const uint32_t  porta_single_ctl   :  1;  /* ALT_GPIO_CFG_REG1_PORTA_SINGLE_CTL */
    const uint32_t  portb_single_ctl   :  1;  /* ALT_GPIO_CFG_REG1_PORTB_SINGLE_CTL */
    const uint32_t  portc_single_ctl   :  1;  /* ALT_GPIO_CFG_REG1_PORTC_SINGLE_CTL */
    const uint32_t  portd_single_ctl   :  1;  /* ALT_GPIO_CFG_REG1_PORTD_SINGLE_CTL */
    const uint32_t  hw_porta           :  1;  /* ALT_GPIO_CFG_REG1_HW_PORTA */
    const uint32_t  hw_portb           :  1;  /* ALT_GPIO_CFG_REG1_HW_PORTB */
    const uint32_t  hw_portc           :  1;  /* ALT_GPIO_CFG_REG1_HW_PORTC */
    const uint32_t  hw_portd           :  1;  /* ALT_GPIO_CFG_REG1_HW_PORTD */
    const uint32_t  porta_intr         :  1;  /* ALT_GPIO_CFG_REG1_PORTA_INTR */
    const uint32_t  debounce           :  1;  /* ALT_GPIO_CFG_REG1_DEBOUNCE */
    const uint32_t  add_encoded_params :  1;  /* ALT_GPIO_CFG_REG1_ADD_ENC_PARAMS */
    const uint32_t  gpio_id            :  1;  /* ALT_GPIO_CFG_REG1_GPIO_ID */
    const uint32_t  encoded_id_width   :  5;  /* ALT_GPIO_CFG_REG1_ENC_ID_WIDTH */
    uint32_t                           : 11;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_CFG_REG1. */
typedef volatile struct ALT_GPIO_CFG_REG1_s  ALT_GPIO_CFG_REG1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_CFG_REG1 register. */
#define ALT_GPIO_CFG_REG1_RESET       0x001ff0f2
/* The byte offset of the ALT_GPIO_CFG_REG1 register from the beginning of the component. */
#define ALT_GPIO_CFG_REG1_OFST        0x74
/* The address of the ALT_GPIO_CFG_REG1 register. */
#define ALT_GPIO_CFG_REG1_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_CFG_REG1_OFST))

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_GPIO.
 */
struct ALT_GPIO_s
{
    ALT_GPIO_SWPORTA_DR_t     gpio_swporta_dr;     /* ALT_GPIO_SWPORTA_DR */
    ALT_GPIO_SWPORTA_DDR_t    gpio_swporta_ddr;    /* ALT_GPIO_SWPORTA_DDR */
    volatile uint32_t         _pad_0x8_0x2f[10];   /* *UNDEFINED* */
    ALT_GPIO_INTEN_t          gpio_inten;          /* ALT_GPIO_INTEN */
    ALT_GPIO_INTMSK_t         gpio_intmask;        /* ALT_GPIO_INTMSK */
    ALT_GPIO_INTTYPE_LEVEL_t  gpio_inttype_level;  /* ALT_GPIO_INTTYPE_LEVEL */
    ALT_GPIO_INT_POL_t        gpio_int_polarity;   /* ALT_GPIO_INT_POL */
    ALT_GPIO_INTSTAT_t        gpio_intstatus;      /* ALT_GPIO_INTSTAT */
    ALT_GPIO_RAW_INTSTAT_t    gpio_raw_intstatus;  /* ALT_GPIO_RAW_INTSTAT */
    ALT_GPIO_DEBOUNCE_t       gpio_debounce;       /* ALT_GPIO_DEBOUNCE */
    ALT_GPIO_PORTA_EOI_t      gpio_porta_eoi;      /* ALT_GPIO_PORTA_EOI */
    ALT_GPIO_EXT_PORTA_t      gpio_ext_porta;      /* ALT_GPIO_EXT_PORTA */
    volatile uint32_t         _pad_0x54_0x5f[3];   /* *UNDEFINED* */
    ALT_GPIO_LS_SYNC_t        gpio_ls_sync;        /* ALT_GPIO_LS_SYNC */
    ALT_GPIO_ID_CODE_t        gpio_id_code;        /* ALT_GPIO_ID_CODE */
    volatile uint32_t         _pad_0x68_0x6b;      /* *UNDEFINED* */
    ALT_GPIO_VER_ID_CODE_t    gpio_ver_id_code;    /* ALT_GPIO_VER_ID_CODE */
    ALT_GPIO_CFG_REG2_t       gpio_config_reg2;    /* ALT_GPIO_CFG_REG2 */
    ALT_GPIO_CFG_REG1_t       gpio_config_reg1;    /* ALT_GPIO_CFG_REG1 */
    volatile uint32_t         _pad_0x78_0x80[2];   /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_GPIO. */
typedef volatile struct ALT_GPIO_s  ALT_GPIO_t;
/* The struct declaration for the raw register contents of register group ALT_GPIO. */
struct ALT_GPIO_raw_s
{
    volatile uint32_t  gpio_swporta_dr;     /* ALT_GPIO_SWPORTA_DR */
    volatile uint32_t  gpio_swporta_ddr;    /* ALT_GPIO_SWPORTA_DDR */
    uint32_t           _pad_0x8_0x2f[10];   /* *UNDEFINED* */
    volatile uint32_t  gpio_inten;          /* ALT_GPIO_INTEN */
    volatile uint32_t  gpio_intmask;        /* ALT_GPIO_INTMSK */
    volatile uint32_t  gpio_inttype_level;  /* ALT_GPIO_INTTYPE_LEVEL */
    volatile uint32_t  gpio_int_polarity;   /* ALT_GPIO_INT_POL */
    volatile uint32_t  gpio_intstatus;      /* ALT_GPIO_INTSTAT */
    volatile uint32_t  gpio_raw_intstatus;  /* ALT_GPIO_RAW_INTSTAT */
    volatile uint32_t  gpio_debounce;       /* ALT_GPIO_DEBOUNCE */
    volatile uint32_t  gpio_porta_eoi;      /* ALT_GPIO_PORTA_EOI */
    volatile uint32_t  gpio_ext_porta;      /* ALT_GPIO_EXT_PORTA */
    uint32_t           _pad_0x54_0x5f[3];   /* *UNDEFINED* */
    volatile uint32_t  gpio_ls_sync;        /* ALT_GPIO_LS_SYNC */
    volatile uint32_t  gpio_id_code;        /* ALT_GPIO_ID_CODE */
    uint32_t           _pad_0x68_0x6b;      /* *UNDEFINED* */
    volatile uint32_t  gpio_ver_id_code;    /* ALT_GPIO_VER_ID_CODE */
    volatile uint32_t  gpio_config_reg2;    /* ALT_GPIO_CFG_REG2 */
    volatile uint32_t  gpio_config_reg1;    /* ALT_GPIO_CFG_REG1 */
    uint32_t           _pad_0x78_0x80[2];   /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_GPIO. */
typedef volatile struct ALT_GPIO_raw_s  ALT_GPIO_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_GPIO_H__ */

