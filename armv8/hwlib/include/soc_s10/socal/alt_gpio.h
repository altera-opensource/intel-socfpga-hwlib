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
 * Component : GPIO
 * DW_apb_gpio address block
 * 
 */
/*
 * Register : Port A data register - GPIO_SWPORTA_DR
 * 
 * Name: Port A data register
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
 * :--------|:-------|:------|:-----------------------------------------
 *  [23:0]  | RW     | 0x0   | ALT_GPIO_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR
 *  [31:24] | ???    | 0x0   | *UNDEFINED*                             
 * 
 */
/*
 * Field : GPIO_SWPORTA_DR
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
 * DO NOT PUBLISH BELOW THIS LINE
 * 
 * For internal usage only, [0:18] for SDM, [0:23] for HPS
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR register field. */
#define ALT_GPIO_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR register field. */
#define ALT_GPIO_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR_MSB        23
/* The width in bits of the ALT_GPIO_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR register field. */
#define ALT_GPIO_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR_WIDTH      24
/* The mask used to set the ALT_GPIO_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR register field value. */
#define ALT_GPIO_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_GPIO_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR register field value. */
#define ALT_GPIO_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR_CLR_MSK    0xff000000
/* The reset value of the ALT_GPIO_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR register field. */
#define ALT_GPIO_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR_RESET      0x0
/* Extracts the ALT_GPIO_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR field value from a register. */
#define ALT_GPIO_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_GPIO_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR_SET(value) (((value) << 0) & 0x00ffffff)

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
 * The struct declaration for register ALT_GPIO_GPIO_SWPORTA_DR.
 */
struct ALT_GPIO_GPIO_SWPORTA_DR_s
{
    volatile uint32_t  GPIO_SWPORTA_DR : 24;  /* ALT_GPIO_GPIO_SWPORTA_DR_GPIO_SWPORTA_DR */
    uint32_t                           :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_GPIO_SWPORTA_DR. */
typedef struct ALT_GPIO_GPIO_SWPORTA_DR_s  ALT_GPIO_GPIO_SWPORTA_DR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_GPIO_SWPORTA_DR register. */
#define ALT_GPIO_GPIO_SWPORTA_DR_RESET       0x00000000
/* The byte offset of the ALT_GPIO_GPIO_SWPORTA_DR register from the beginning of the component. */
#define ALT_GPIO_GPIO_SWPORTA_DR_OFST        0x0
/* The address of the ALT_GPIO_GPIO_SWPORTA_DR register. */
#define ALT_GPIO_GPIO_SWPORTA_DR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_GPIO_SWPORTA_DR_OFST))

/*
 * Register : Port A Data Direction Register - GPIO_SWPORTA_DDR
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
 * :--------|:-------|:--------|:-------------------------------------------
 *  [23:0]  | RW     | Unknown | ALT_GPIO_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR
 *  [31:24] | ???    | Unknown | *UNDEFINED*                               
 * 
 */
/*
 * Field : GPIO_SWPORTA_DDR
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
 * DO NOT PUBLISH BELOW THIS LINE
 * 
 * For internal usage only, [0:18] for SDM, [0:23] for HPS
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description     
 * :-------------------------------------------------|:------|:-----------------
 *  ALT_GPIO_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR_E_IN  | 0x0   | Input Direction 
 *  ALT_GPIO_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR_E_OUT | 0x1   | Output Direction
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR
 * 
 * Input Direction
 */
#define ALT_GPIO_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR_E_IN     0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR
 * 
 * Output Direction
 */
#define ALT_GPIO_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR_E_OUT    0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR register field. */
#define ALT_GPIO_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR register field. */
#define ALT_GPIO_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR_MSB        23
/* The width in bits of the ALT_GPIO_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR register field. */
#define ALT_GPIO_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR_WIDTH      24
/* The mask used to set the ALT_GPIO_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR register field value. */
#define ALT_GPIO_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_GPIO_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR register field value. */
#define ALT_GPIO_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR_CLR_MSK    0xff000000
/* The reset value of the ALT_GPIO_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR register field is UNKNOWN. */
#define ALT_GPIO_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR_RESET      0x0
/* Extracts the ALT_GPIO_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR field value from a register. */
#define ALT_GPIO_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_GPIO_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR_SET(value) (((value) << 0) & 0x00ffffff)

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
 * The struct declaration for register ALT_GPIO_GPIO_SWPORTA_DDR.
 */
struct ALT_GPIO_GPIO_SWPORTA_DDR_s
{
    volatile uint32_t  GPIO_SWPORTA_DDR : 24;  /* ALT_GPIO_GPIO_SWPORTA_DDR_GPIO_SWPORTA_DDR */
    uint32_t                            :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_GPIO_SWPORTA_DDR. */
typedef struct ALT_GPIO_GPIO_SWPORTA_DDR_s  ALT_GPIO_GPIO_SWPORTA_DDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_GPIO_SWPORTA_DDR register. */
#define ALT_GPIO_GPIO_SWPORTA_DDR_RESET       0x00000000
/* The byte offset of the ALT_GPIO_GPIO_SWPORTA_DDR register from the beginning of the component. */
#define ALT_GPIO_GPIO_SWPORTA_DDR_OFST        0x4
/* The address of the ALT_GPIO_GPIO_SWPORTA_DDR register. */
#define ALT_GPIO_GPIO_SWPORTA_DDR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_GPIO_SWPORTA_DDR_OFST))

/*
 * Register : Interrupt enable register - GPIO_INTEN
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
 * :--------|:-------|:------|:-------------------------------
 *  [23:0]  | RW     | 0x0   | ALT_GPIO_GPIO_INTEN_GPIO_INTEN
 *  [31:24] | ???    | 0x0   | *UNDEFINED*                   
 * 
 */
/*
 * Field : GPIO_INTEN
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
 * DO NOT PUBLISH BELOW THIS LINE
 * 
 * For internal usage only, [0:18] for SDM, [0:23] for HPS
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description          
 * :------------------------------------------|:------|:----------------------
 *  ALT_GPIO_GPIO_INTEN_GPIO_INTEN_E_DISABLED | 0x0   | Interrupt is disabled
 *  ALT_GPIO_GPIO_INTEN_GPIO_INTEN_E_ENABLED  | 0x1   | Interrupt is enabled 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_INTEN_GPIO_INTEN
 * 
 * Interrupt is disabled
 */
#define ALT_GPIO_GPIO_INTEN_GPIO_INTEN_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_INTEN_GPIO_INTEN
 * 
 * Interrupt is enabled
 */
#define ALT_GPIO_GPIO_INTEN_GPIO_INTEN_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_INTEN_GPIO_INTEN register field. */
#define ALT_GPIO_GPIO_INTEN_GPIO_INTEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_INTEN_GPIO_INTEN register field. */
#define ALT_GPIO_GPIO_INTEN_GPIO_INTEN_MSB        23
/* The width in bits of the ALT_GPIO_GPIO_INTEN_GPIO_INTEN register field. */
#define ALT_GPIO_GPIO_INTEN_GPIO_INTEN_WIDTH      24
/* The mask used to set the ALT_GPIO_GPIO_INTEN_GPIO_INTEN register field value. */
#define ALT_GPIO_GPIO_INTEN_GPIO_INTEN_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_GPIO_GPIO_INTEN_GPIO_INTEN register field value. */
#define ALT_GPIO_GPIO_INTEN_GPIO_INTEN_CLR_MSK    0xff000000
/* The reset value of the ALT_GPIO_GPIO_INTEN_GPIO_INTEN register field. */
#define ALT_GPIO_GPIO_INTEN_GPIO_INTEN_RESET      0x0
/* Extracts the ALT_GPIO_GPIO_INTEN_GPIO_INTEN field value from a register. */
#define ALT_GPIO_GPIO_INTEN_GPIO_INTEN_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_GPIO_GPIO_INTEN_GPIO_INTEN register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_INTEN_GPIO_INTEN_SET(value) (((value) << 0) & 0x00ffffff)

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
 * The struct declaration for register ALT_GPIO_GPIO_INTEN.
 */
struct ALT_GPIO_GPIO_INTEN_s
{
    volatile uint32_t  GPIO_INTEN : 24;  /* ALT_GPIO_GPIO_INTEN_GPIO_INTEN */
    uint32_t                      :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_GPIO_INTEN. */
typedef struct ALT_GPIO_GPIO_INTEN_s  ALT_GPIO_GPIO_INTEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_GPIO_INTEN register. */
#define ALT_GPIO_GPIO_INTEN_RESET       0x00000000
/* The byte offset of the ALT_GPIO_GPIO_INTEN register from the beginning of the component. */
#define ALT_GPIO_GPIO_INTEN_OFST        0x30
/* The address of the ALT_GPIO_GPIO_INTEN register. */
#define ALT_GPIO_GPIO_INTEN_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_GPIO_INTEN_OFST))

/*
 * Register : Interrupt mask register - GPIO_INTMASK
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
 * :--------|:-------|:------|:-----------------------------------
 *  [23:0]  | RW     | 0x0   | ALT_GPIO_GPIO_INTMASK_GPIO_INTMASK
 *  [31:24] | ???    | 0x0   | *UNDEFINED*                       
 * 
 */
/*
 * Field : GPIO_INTMASK
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
 * DO NOT PUBLISH BELOW THIS LINE
 * 
 * For internal usage only, [0:18] for SDM, [0:23] for HPS
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                          | Value | Description                
 * :----------------------------------------------|:------|:----------------------------
 *  ALT_GPIO_GPIO_INTMASK_GPIO_INTMASK_E_DISABLED | 0x0   | Interrupt bits are unmasked
 *  ALT_GPIO_GPIO_INTMASK_GPIO_INTMASK_E_ENABLED  | 0x1   | Mask interrupt             
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_INTMASK_GPIO_INTMASK
 * 
 * Interrupt bits are unmasked
 */
#define ALT_GPIO_GPIO_INTMASK_GPIO_INTMASK_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_INTMASK_GPIO_INTMASK
 * 
 * Mask interrupt
 */
#define ALT_GPIO_GPIO_INTMASK_GPIO_INTMASK_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_INTMASK_GPIO_INTMASK register field. */
#define ALT_GPIO_GPIO_INTMASK_GPIO_INTMASK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_INTMASK_GPIO_INTMASK register field. */
#define ALT_GPIO_GPIO_INTMASK_GPIO_INTMASK_MSB        23
/* The width in bits of the ALT_GPIO_GPIO_INTMASK_GPIO_INTMASK register field. */
#define ALT_GPIO_GPIO_INTMASK_GPIO_INTMASK_WIDTH      24
/* The mask used to set the ALT_GPIO_GPIO_INTMASK_GPIO_INTMASK register field value. */
#define ALT_GPIO_GPIO_INTMASK_GPIO_INTMASK_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_GPIO_GPIO_INTMASK_GPIO_INTMASK register field value. */
#define ALT_GPIO_GPIO_INTMASK_GPIO_INTMASK_CLR_MSK    0xff000000
/* The reset value of the ALT_GPIO_GPIO_INTMASK_GPIO_INTMASK register field. */
#define ALT_GPIO_GPIO_INTMASK_GPIO_INTMASK_RESET      0x0
/* Extracts the ALT_GPIO_GPIO_INTMASK_GPIO_INTMASK field value from a register. */
#define ALT_GPIO_GPIO_INTMASK_GPIO_INTMASK_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_GPIO_GPIO_INTMASK_GPIO_INTMASK register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_INTMASK_GPIO_INTMASK_SET(value) (((value) << 0) & 0x00ffffff)

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
 * The struct declaration for register ALT_GPIO_GPIO_INTMASK.
 */
struct ALT_GPIO_GPIO_INTMASK_s
{
    volatile uint32_t  GPIO_INTMASK : 24;  /* ALT_GPIO_GPIO_INTMASK_GPIO_INTMASK */
    uint32_t                        :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_GPIO_INTMASK. */
typedef struct ALT_GPIO_GPIO_INTMASK_s  ALT_GPIO_GPIO_INTMASK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_GPIO_INTMASK register. */
#define ALT_GPIO_GPIO_INTMASK_RESET       0x00000000
/* The byte offset of the ALT_GPIO_GPIO_INTMASK register from the beginning of the component. */
#define ALT_GPIO_GPIO_INTMASK_OFST        0x34
/* The address of the ALT_GPIO_GPIO_INTMASK register. */
#define ALT_GPIO_GPIO_INTMASK_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_GPIO_INTMASK_OFST))

/*
 * Register : Interrupt level - GPIO_INTTYPE_LEVEL
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
 * :--------|:-------|:------|:-----------------------------------------------
 *  [23:0]  | RW     | 0x0   | ALT_GPIO_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL
 *  [31:24] | ???    | 0x0   | *UNDEFINED*                                   
 * 
 */
/*
 * Field : GPIO_INTTYPE_LEVEL
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
 * DO NOT PUBLISH BELOW THIS LINE
 * 
 * For internal usage only, [0:18] for SDM, [0:23] for HPS
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                             | Value | Description                 
 * :-----------------------------------------------------------------|:------|:-----------------------------
 *  ALT_GPIO_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL_E_LEVEL_SENSITIVE | 0x0   | Interrupt is level sensitive
 *  ALT_GPIO_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL_E_EDGE_SENSITIVE  | 0x1   | Interrupt is edge sensitive 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL
 * 
 * Interrupt is level sensitive
 */
#define ALT_GPIO_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL_E_LEVEL_SENSITIVE    0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL
 * 
 * Interrupt is edge sensitive
 */
#define ALT_GPIO_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL_E_EDGE_SENSITIVE     0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL register field. */
#define ALT_GPIO_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL register field. */
#define ALT_GPIO_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL_MSB        23
/* The width in bits of the ALT_GPIO_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL register field. */
#define ALT_GPIO_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL_WIDTH      24
/* The mask used to set the ALT_GPIO_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL register field value. */
#define ALT_GPIO_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_GPIO_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL register field value. */
#define ALT_GPIO_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL_CLR_MSK    0xff000000
/* The reset value of the ALT_GPIO_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL register field. */
#define ALT_GPIO_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL_RESET      0x0
/* Extracts the ALT_GPIO_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL field value from a register. */
#define ALT_GPIO_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_GPIO_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL_SET(value) (((value) << 0) & 0x00ffffff)

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
 * The struct declaration for register ALT_GPIO_GPIO_INTTYPE_LEVEL.
 */
struct ALT_GPIO_GPIO_INTTYPE_LEVEL_s
{
    volatile uint32_t  GPIO_INTTYPE_LEVEL : 24;  /* ALT_GPIO_GPIO_INTTYPE_LEVEL_GPIO_INTTYPE_LEVEL */
    uint32_t                              :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_GPIO_INTTYPE_LEVEL. */
typedef struct ALT_GPIO_GPIO_INTTYPE_LEVEL_s  ALT_GPIO_GPIO_INTTYPE_LEVEL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_GPIO_INTTYPE_LEVEL register. */
#define ALT_GPIO_GPIO_INTTYPE_LEVEL_RESET       0x00000000
/* The byte offset of the ALT_GPIO_GPIO_INTTYPE_LEVEL register from the beginning of the component. */
#define ALT_GPIO_GPIO_INTTYPE_LEVEL_OFST        0x38
/* The address of the ALT_GPIO_GPIO_INTTYPE_LEVEL register. */
#define ALT_GPIO_GPIO_INTTYPE_LEVEL_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_GPIO_INTTYPE_LEVEL_OFST))

/*
 * Register : Interrupt polarity - GPIO_INT_POLARITY
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
 * :--------|:-------|:------|:---------------------------------------------
 *  [23:0]  | RW     | 0x0   | ALT_GPIO_GPIO_INT_POLARITY_GPIO_INT_POLARITY
 *  [31:24] | ???    | 0x0   | *UNDEFINED*                                 
 * 
 */
/*
 * Field : GPIO_INT_POLARITY
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
 * DO NOT PUBLISH BELOW THIS LINE
 * 
 * For internal usage only, [0:18] for SDM, [0:23] for HPS
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                       | Value | Description         
 * :-----------------------------------------------------------|:------|:---------------------
 *  ALT_GPIO_GPIO_INT_POLARITY_GPIO_INT_POLARITY_E_ACTIVE_LOW  | 0x0   | Active Low polarity 
 *  ALT_GPIO_GPIO_INT_POLARITY_GPIO_INT_POLARITY_E_ACTIVE_HIGH | 0x1   | Active High polarity
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_INT_POLARITY_GPIO_INT_POLARITY
 * 
 * Active Low polarity
 */
#define ALT_GPIO_GPIO_INT_POLARITY_GPIO_INT_POLARITY_E_ACTIVE_LOW   0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_INT_POLARITY_GPIO_INT_POLARITY
 * 
 * Active High polarity
 */
#define ALT_GPIO_GPIO_INT_POLARITY_GPIO_INT_POLARITY_E_ACTIVE_HIGH  0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_INT_POLARITY_GPIO_INT_POLARITY register field. */
#define ALT_GPIO_GPIO_INT_POLARITY_GPIO_INT_POLARITY_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_INT_POLARITY_GPIO_INT_POLARITY register field. */
#define ALT_GPIO_GPIO_INT_POLARITY_GPIO_INT_POLARITY_MSB        23
/* The width in bits of the ALT_GPIO_GPIO_INT_POLARITY_GPIO_INT_POLARITY register field. */
#define ALT_GPIO_GPIO_INT_POLARITY_GPIO_INT_POLARITY_WIDTH      24
/* The mask used to set the ALT_GPIO_GPIO_INT_POLARITY_GPIO_INT_POLARITY register field value. */
#define ALT_GPIO_GPIO_INT_POLARITY_GPIO_INT_POLARITY_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_GPIO_GPIO_INT_POLARITY_GPIO_INT_POLARITY register field value. */
#define ALT_GPIO_GPIO_INT_POLARITY_GPIO_INT_POLARITY_CLR_MSK    0xff000000
/* The reset value of the ALT_GPIO_GPIO_INT_POLARITY_GPIO_INT_POLARITY register field. */
#define ALT_GPIO_GPIO_INT_POLARITY_GPIO_INT_POLARITY_RESET      0x0
/* Extracts the ALT_GPIO_GPIO_INT_POLARITY_GPIO_INT_POLARITY field value from a register. */
#define ALT_GPIO_GPIO_INT_POLARITY_GPIO_INT_POLARITY_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_GPIO_GPIO_INT_POLARITY_GPIO_INT_POLARITY register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_INT_POLARITY_GPIO_INT_POLARITY_SET(value) (((value) << 0) & 0x00ffffff)

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
 * The struct declaration for register ALT_GPIO_GPIO_INT_POLARITY.
 */
struct ALT_GPIO_GPIO_INT_POLARITY_s
{
    volatile uint32_t  GPIO_INT_POLARITY : 24;  /* ALT_GPIO_GPIO_INT_POLARITY_GPIO_INT_POLARITY */
    uint32_t                             :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_GPIO_INT_POLARITY. */
typedef struct ALT_GPIO_GPIO_INT_POLARITY_s  ALT_GPIO_GPIO_INT_POLARITY_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_GPIO_INT_POLARITY register. */
#define ALT_GPIO_GPIO_INT_POLARITY_RESET       0x00000000
/* The byte offset of the ALT_GPIO_GPIO_INT_POLARITY register from the beginning of the component. */
#define ALT_GPIO_GPIO_INT_POLARITY_OFST        0x3c
/* The address of the ALT_GPIO_GPIO_INT_POLARITY register. */
#define ALT_GPIO_GPIO_INT_POLARITY_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_GPIO_INT_POLARITY_OFST))

/*
 * Register : Interrupt status - GPIO_INTSTATUS
 * 
 * Name: Interrupt status
 * 
 * Size: 1-32 bits
 * 
 * Address Offset: 0x40
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                           
 * :--------|:-------|:------|:---------------------------------------
 *  [23:0]  | R      | 0x0   | ALT_GPIO_GPIO_INTSTATUS_GPIO_INTSTATUS
 *  [31:24] | ???    | 0x0   | *UNDEFINED*                           
 * 
 */
/*
 * Field : GPIO_INTSTATUS
 * 
 * Interrupt status of Port A.
 * 
 * DO NOT PUBLISH BELOW THIS LINE
 * 
 * For internal usage only, [0:18] for SDM, [0:23] for HPS
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description
 * :--------------------------------------------------|:------|:------------
 *  ALT_GPIO_GPIO_INTSTATUS_GPIO_INTSTATUS_E_INACTIVE | 0x0   | Inactive   
 *  ALT_GPIO_GPIO_INTSTATUS_GPIO_INTSTATUS_E_ACTIVE   | 0x1   | Active     
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_INTSTATUS_GPIO_INTSTATUS
 * 
 * Inactive
 */
#define ALT_GPIO_GPIO_INTSTATUS_GPIO_INTSTATUS_E_INACTIVE   0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_INTSTATUS_GPIO_INTSTATUS
 * 
 * Active
 */
#define ALT_GPIO_GPIO_INTSTATUS_GPIO_INTSTATUS_E_ACTIVE     0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_INTSTATUS_GPIO_INTSTATUS register field. */
#define ALT_GPIO_GPIO_INTSTATUS_GPIO_INTSTATUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_INTSTATUS_GPIO_INTSTATUS register field. */
#define ALT_GPIO_GPIO_INTSTATUS_GPIO_INTSTATUS_MSB        23
/* The width in bits of the ALT_GPIO_GPIO_INTSTATUS_GPIO_INTSTATUS register field. */
#define ALT_GPIO_GPIO_INTSTATUS_GPIO_INTSTATUS_WIDTH      24
/* The mask used to set the ALT_GPIO_GPIO_INTSTATUS_GPIO_INTSTATUS register field value. */
#define ALT_GPIO_GPIO_INTSTATUS_GPIO_INTSTATUS_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_GPIO_GPIO_INTSTATUS_GPIO_INTSTATUS register field value. */
#define ALT_GPIO_GPIO_INTSTATUS_GPIO_INTSTATUS_CLR_MSK    0xff000000
/* The reset value of the ALT_GPIO_GPIO_INTSTATUS_GPIO_INTSTATUS register field. */
#define ALT_GPIO_GPIO_INTSTATUS_GPIO_INTSTATUS_RESET      0x0
/* Extracts the ALT_GPIO_GPIO_INTSTATUS_GPIO_INTSTATUS field value from a register. */
#define ALT_GPIO_GPIO_INTSTATUS_GPIO_INTSTATUS_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_GPIO_GPIO_INTSTATUS_GPIO_INTSTATUS register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_INTSTATUS_GPIO_INTSTATUS_SET(value) (((value) << 0) & 0x00ffffff)

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
 * The struct declaration for register ALT_GPIO_GPIO_INTSTATUS.
 */
struct ALT_GPIO_GPIO_INTSTATUS_s
{
    const volatile uint32_t  GPIO_INTSTATUS : 24;  /* ALT_GPIO_GPIO_INTSTATUS_GPIO_INTSTATUS */
    uint32_t                                :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_GPIO_INTSTATUS. */
typedef struct ALT_GPIO_GPIO_INTSTATUS_s  ALT_GPIO_GPIO_INTSTATUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_GPIO_INTSTATUS register. */
#define ALT_GPIO_GPIO_INTSTATUS_RESET       0x00000000
/* The byte offset of the ALT_GPIO_GPIO_INTSTATUS register from the beginning of the component. */
#define ALT_GPIO_GPIO_INTSTATUS_OFST        0x40
/* The address of the ALT_GPIO_GPIO_INTSTATUS register. */
#define ALT_GPIO_GPIO_INTSTATUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_GPIO_INTSTATUS_OFST))

/*
 * Register : Raw interrupt status - GPIO_RAW_INTSTATUS
 * 
 * Name: Raw interrupt status
 * 
 * Size: 1-32 bits
 * 
 * Address Offset: 0x44
 * 
 * Read/Write Access: Read
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                   
 * :--------|:-------|:------|:-----------------------------------------------
 *  [23:0]  | R      | 0x0   | ALT_GPIO_GPIO_RAW_INTSTATUS_GPIO_RAW_INTSTATUS
 *  [31:24] | ???    | 0x0   | *UNDEFINED*                                   
 * 
 */
/*
 * Field : GPIO_RAW_INTSTATUS
 * 
 * Raw interrupt of status of Port A (premasking bits)
 * 
 * DO NOT PUBLISH BELOW THIS LINE
 * 
 * For internal usage only, [0:18] for SDM, [0:23] for HPS
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                      | Value | Description
 * :----------------------------------------------------------|:------|:------------
 *  ALT_GPIO_GPIO_RAW_INTSTATUS_GPIO_RAW_INTSTATUS_E_INACTIVE | 0x0   | Inactive   
 *  ALT_GPIO_GPIO_RAW_INTSTATUS_GPIO_RAW_INTSTATUS_E_ACTIVE   | 0x1   | Active     
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_RAW_INTSTATUS_GPIO_RAW_INTSTATUS
 * 
 * Inactive
 */
#define ALT_GPIO_GPIO_RAW_INTSTATUS_GPIO_RAW_INTSTATUS_E_INACTIVE   0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_RAW_INTSTATUS_GPIO_RAW_INTSTATUS
 * 
 * Active
 */
#define ALT_GPIO_GPIO_RAW_INTSTATUS_GPIO_RAW_INTSTATUS_E_ACTIVE     0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_RAW_INTSTATUS_GPIO_RAW_INTSTATUS register field. */
#define ALT_GPIO_GPIO_RAW_INTSTATUS_GPIO_RAW_INTSTATUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_RAW_INTSTATUS_GPIO_RAW_INTSTATUS register field. */
#define ALT_GPIO_GPIO_RAW_INTSTATUS_GPIO_RAW_INTSTATUS_MSB        23
/* The width in bits of the ALT_GPIO_GPIO_RAW_INTSTATUS_GPIO_RAW_INTSTATUS register field. */
#define ALT_GPIO_GPIO_RAW_INTSTATUS_GPIO_RAW_INTSTATUS_WIDTH      24
/* The mask used to set the ALT_GPIO_GPIO_RAW_INTSTATUS_GPIO_RAW_INTSTATUS register field value. */
#define ALT_GPIO_GPIO_RAW_INTSTATUS_GPIO_RAW_INTSTATUS_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_GPIO_GPIO_RAW_INTSTATUS_GPIO_RAW_INTSTATUS register field value. */
#define ALT_GPIO_GPIO_RAW_INTSTATUS_GPIO_RAW_INTSTATUS_CLR_MSK    0xff000000
/* The reset value of the ALT_GPIO_GPIO_RAW_INTSTATUS_GPIO_RAW_INTSTATUS register field. */
#define ALT_GPIO_GPIO_RAW_INTSTATUS_GPIO_RAW_INTSTATUS_RESET      0x0
/* Extracts the ALT_GPIO_GPIO_RAW_INTSTATUS_GPIO_RAW_INTSTATUS field value from a register. */
#define ALT_GPIO_GPIO_RAW_INTSTATUS_GPIO_RAW_INTSTATUS_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_GPIO_GPIO_RAW_INTSTATUS_GPIO_RAW_INTSTATUS register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_RAW_INTSTATUS_GPIO_RAW_INTSTATUS_SET(value) (((value) << 0) & 0x00ffffff)

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
 * The struct declaration for register ALT_GPIO_GPIO_RAW_INTSTATUS.
 */
struct ALT_GPIO_GPIO_RAW_INTSTATUS_s
{
    const volatile uint32_t  GPIO_RAW_INTSTATUS : 24;  /* ALT_GPIO_GPIO_RAW_INTSTATUS_GPIO_RAW_INTSTATUS */
    uint32_t                                    :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_GPIO_RAW_INTSTATUS. */
typedef struct ALT_GPIO_GPIO_RAW_INTSTATUS_s  ALT_GPIO_GPIO_RAW_INTSTATUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_GPIO_RAW_INTSTATUS register. */
#define ALT_GPIO_GPIO_RAW_INTSTATUS_RESET       0x00000000
/* The byte offset of the ALT_GPIO_GPIO_RAW_INTSTATUS register from the beginning of the component. */
#define ALT_GPIO_GPIO_RAW_INTSTATUS_OFST        0x44
/* The address of the ALT_GPIO_GPIO_RAW_INTSTATUS register. */
#define ALT_GPIO_GPIO_RAW_INTSTATUS_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_GPIO_RAW_INTSTATUS_OFST))

/*
 * Register : Debounce enable - GPIO_DEBOUNCE
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
 * :--------|:-------|:------|:-------------------------------------
 *  [23:0]  | RW     | 0x0   | ALT_GPIO_GPIO_DEBOUNCE_GPIO_DEBOUNCE
 *  [31:24] | ???    | 0x0   | *UNDEFINED*                         
 * 
 */
/*
 * Field : GPIO_DEBOUNCE
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
 * DO NOT PUBLISH BELOW THIS LINE
 * 
 * For internal usage only, [0:18] for SDM, [0:23] for HPS
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description    
 * :------------------------------------------------|:------|:----------------
 *  ALT_GPIO_GPIO_DEBOUNCE_GPIO_DEBOUNCE_E_DISABLED | 0x0   | No debounce    
 *  ALT_GPIO_GPIO_DEBOUNCE_GPIO_DEBOUNCE_E_ENABLED  | 0x1   | Enable debounce
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_DEBOUNCE_GPIO_DEBOUNCE
 * 
 * No debounce
 */
#define ALT_GPIO_GPIO_DEBOUNCE_GPIO_DEBOUNCE_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_DEBOUNCE_GPIO_DEBOUNCE
 * 
 * Enable debounce
 */
#define ALT_GPIO_GPIO_DEBOUNCE_GPIO_DEBOUNCE_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_DEBOUNCE_GPIO_DEBOUNCE register field. */
#define ALT_GPIO_GPIO_DEBOUNCE_GPIO_DEBOUNCE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_DEBOUNCE_GPIO_DEBOUNCE register field. */
#define ALT_GPIO_GPIO_DEBOUNCE_GPIO_DEBOUNCE_MSB        23
/* The width in bits of the ALT_GPIO_GPIO_DEBOUNCE_GPIO_DEBOUNCE register field. */
#define ALT_GPIO_GPIO_DEBOUNCE_GPIO_DEBOUNCE_WIDTH      24
/* The mask used to set the ALT_GPIO_GPIO_DEBOUNCE_GPIO_DEBOUNCE register field value. */
#define ALT_GPIO_GPIO_DEBOUNCE_GPIO_DEBOUNCE_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_GPIO_GPIO_DEBOUNCE_GPIO_DEBOUNCE register field value. */
#define ALT_GPIO_GPIO_DEBOUNCE_GPIO_DEBOUNCE_CLR_MSK    0xff000000
/* The reset value of the ALT_GPIO_GPIO_DEBOUNCE_GPIO_DEBOUNCE register field. */
#define ALT_GPIO_GPIO_DEBOUNCE_GPIO_DEBOUNCE_RESET      0x0
/* Extracts the ALT_GPIO_GPIO_DEBOUNCE_GPIO_DEBOUNCE field value from a register. */
#define ALT_GPIO_GPIO_DEBOUNCE_GPIO_DEBOUNCE_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_GPIO_GPIO_DEBOUNCE_GPIO_DEBOUNCE register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_DEBOUNCE_GPIO_DEBOUNCE_SET(value) (((value) << 0) & 0x00ffffff)

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
 * The struct declaration for register ALT_GPIO_GPIO_DEBOUNCE.
 */
struct ALT_GPIO_GPIO_DEBOUNCE_s
{
    volatile uint32_t  GPIO_DEBOUNCE : 24;  /* ALT_GPIO_GPIO_DEBOUNCE_GPIO_DEBOUNCE */
    uint32_t                         :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_GPIO_DEBOUNCE. */
typedef struct ALT_GPIO_GPIO_DEBOUNCE_s  ALT_GPIO_GPIO_DEBOUNCE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_GPIO_DEBOUNCE register. */
#define ALT_GPIO_GPIO_DEBOUNCE_RESET       0x00000000
/* The byte offset of the ALT_GPIO_GPIO_DEBOUNCE register from the beginning of the component. */
#define ALT_GPIO_GPIO_DEBOUNCE_OFST        0x48
/* The address of the ALT_GPIO_GPIO_DEBOUNCE register. */
#define ALT_GPIO_GPIO_DEBOUNCE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_GPIO_DEBOUNCE_OFST))

/*
 * Register : Port A clear interrupt register - GPIO_PORTA_EOI
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
 * :--------|:-------|:------|:---------------------------------------
 *  [23:0]  | W      | 0x0   | ALT_GPIO_GPIO_PORTA_EOI_GPIO_PORTA_EOI
 *  [31:24] | ???    | 0x0   | *UNDEFINED*                           
 * 
 */
/*
 * Field : GPIO_PORTA_EOI
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
 * DO NOT PUBLISH BELOW THIS LINE
 * 
 * For internal usage only, [0:18] for SDM, [0:23] for HPS
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description       
 * :--------------------------------------------------|:------|:-------------------
 *  ALT_GPIO_GPIO_PORTA_EOI_GPIO_PORTA_EOI_E_DISABLED | 0x0   | No interrupt clear
 *  ALT_GPIO_GPIO_PORTA_EOI_GPIO_PORTA_EOI_E_ENABLED  | 0x1   | Clear Interrupt   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_PORTA_EOI_GPIO_PORTA_EOI
 * 
 * No interrupt clear
 */
#define ALT_GPIO_GPIO_PORTA_EOI_GPIO_PORTA_EOI_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_PORTA_EOI_GPIO_PORTA_EOI
 * 
 * Clear Interrupt
 */
#define ALT_GPIO_GPIO_PORTA_EOI_GPIO_PORTA_EOI_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_PORTA_EOI_GPIO_PORTA_EOI register field. */
#define ALT_GPIO_GPIO_PORTA_EOI_GPIO_PORTA_EOI_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_PORTA_EOI_GPIO_PORTA_EOI register field. */
#define ALT_GPIO_GPIO_PORTA_EOI_GPIO_PORTA_EOI_MSB        23
/* The width in bits of the ALT_GPIO_GPIO_PORTA_EOI_GPIO_PORTA_EOI register field. */
#define ALT_GPIO_GPIO_PORTA_EOI_GPIO_PORTA_EOI_WIDTH      24
/* The mask used to set the ALT_GPIO_GPIO_PORTA_EOI_GPIO_PORTA_EOI register field value. */
#define ALT_GPIO_GPIO_PORTA_EOI_GPIO_PORTA_EOI_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_GPIO_GPIO_PORTA_EOI_GPIO_PORTA_EOI register field value. */
#define ALT_GPIO_GPIO_PORTA_EOI_GPIO_PORTA_EOI_CLR_MSK    0xff000000
/* The reset value of the ALT_GPIO_GPIO_PORTA_EOI_GPIO_PORTA_EOI register field. */
#define ALT_GPIO_GPIO_PORTA_EOI_GPIO_PORTA_EOI_RESET      0x0
/* Extracts the ALT_GPIO_GPIO_PORTA_EOI_GPIO_PORTA_EOI field value from a register. */
#define ALT_GPIO_GPIO_PORTA_EOI_GPIO_PORTA_EOI_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_GPIO_GPIO_PORTA_EOI_GPIO_PORTA_EOI register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_PORTA_EOI_GPIO_PORTA_EOI_SET(value) (((value) << 0) & 0x00ffffff)

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
 * The struct declaration for register ALT_GPIO_GPIO_PORTA_EOI.
 */
struct ALT_GPIO_GPIO_PORTA_EOI_s
{
    volatile uint32_t  GPIO_PORTA_EOI : 24;  /* ALT_GPIO_GPIO_PORTA_EOI_GPIO_PORTA_EOI */
    uint32_t                          :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_GPIO_PORTA_EOI. */
typedef struct ALT_GPIO_GPIO_PORTA_EOI_s  ALT_GPIO_GPIO_PORTA_EOI_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_GPIO_PORTA_EOI register. */
#define ALT_GPIO_GPIO_PORTA_EOI_RESET       0x00000000
/* The byte offset of the ALT_GPIO_GPIO_PORTA_EOI register from the beginning of the component. */
#define ALT_GPIO_GPIO_PORTA_EOI_OFST        0x4c
/* The address of the ALT_GPIO_GPIO_PORTA_EOI register. */
#define ALT_GPIO_GPIO_PORTA_EOI_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_GPIO_PORTA_EOI_OFST))

/*
 * Register : Port A external port register - GPIO_EXT_PORTA
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
 * :--------|:-------|:------|:---------------------------------------
 *  [23:0]  | R      | 0x0   | ALT_GPIO_GPIO_EXT_PORTA_GPIO_EXT_PORTA
 *  [31:24] | ???    | 0x0   | *UNDEFINED*                           
 * 
 */
/*
 * Field : GPIO_EXT_PORTA
 * 
 * This register always reflects the signals value on the External Port A.
 * 
 * DO NOT PUBLISH BELOW THIS LINE
 * 
 * For internal usage only, [0:18] for SDM, [0:23] for HPS
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_EXT_PORTA_GPIO_EXT_PORTA register field. */
#define ALT_GPIO_GPIO_EXT_PORTA_GPIO_EXT_PORTA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_EXT_PORTA_GPIO_EXT_PORTA register field. */
#define ALT_GPIO_GPIO_EXT_PORTA_GPIO_EXT_PORTA_MSB        23
/* The width in bits of the ALT_GPIO_GPIO_EXT_PORTA_GPIO_EXT_PORTA register field. */
#define ALT_GPIO_GPIO_EXT_PORTA_GPIO_EXT_PORTA_WIDTH      24
/* The mask used to set the ALT_GPIO_GPIO_EXT_PORTA_GPIO_EXT_PORTA register field value. */
#define ALT_GPIO_GPIO_EXT_PORTA_GPIO_EXT_PORTA_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_GPIO_GPIO_EXT_PORTA_GPIO_EXT_PORTA register field value. */
#define ALT_GPIO_GPIO_EXT_PORTA_GPIO_EXT_PORTA_CLR_MSK    0xff000000
/* The reset value of the ALT_GPIO_GPIO_EXT_PORTA_GPIO_EXT_PORTA register field. */
#define ALT_GPIO_GPIO_EXT_PORTA_GPIO_EXT_PORTA_RESET      0x0
/* Extracts the ALT_GPIO_GPIO_EXT_PORTA_GPIO_EXT_PORTA field value from a register. */
#define ALT_GPIO_GPIO_EXT_PORTA_GPIO_EXT_PORTA_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_GPIO_GPIO_EXT_PORTA_GPIO_EXT_PORTA register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_EXT_PORTA_GPIO_EXT_PORTA_SET(value) (((value) << 0) & 0x00ffffff)

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
 * The struct declaration for register ALT_GPIO_GPIO_EXT_PORTA.
 */
struct ALT_GPIO_GPIO_EXT_PORTA_s
{
    const volatile uint32_t  GPIO_EXT_PORTA : 24;  /* ALT_GPIO_GPIO_EXT_PORTA_GPIO_EXT_PORTA */
    uint32_t                                :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_GPIO_EXT_PORTA. */
typedef struct ALT_GPIO_GPIO_EXT_PORTA_s  ALT_GPIO_GPIO_EXT_PORTA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_GPIO_EXT_PORTA register. */
#define ALT_GPIO_GPIO_EXT_PORTA_RESET       0x00000000
/* The byte offset of the ALT_GPIO_GPIO_EXT_PORTA register from the beginning of the component. */
#define ALT_GPIO_GPIO_EXT_PORTA_OFST        0x50
/* The address of the ALT_GPIO_GPIO_EXT_PORTA register. */
#define ALT_GPIO_GPIO_EXT_PORTA_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_GPIO_EXT_PORTA_OFST))

/*
 * Register : Synchronization level - GPIO_LS_SYNC
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
 * :-------|:-------|:------|:-----------------------------------
 *  [0]    | RW     | 0x0   | ALT_GPIO_GPIO_LS_SYNC_GPIO_LS_SYNC
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                       
 * 
 */
/*
 * Field : GPIO_LS_SYNC
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
 *  Enum                                          | Value | Description                    
 * :----------------------------------------------|:------|:--------------------------------
 *  ALT_GPIO_GPIO_LS_SYNC_GPIO_LS_SYNC_E_DISABLED | 0x0   | No synchronization to pclk_intr
 *  ALT_GPIO_GPIO_LS_SYNC_GPIO_LS_SYNC_E_ENABLED  | 0x1   | Synchronize to pclk_intr       
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_LS_SYNC_GPIO_LS_SYNC
 * 
 * No synchronization to pclk_intr
 */
#define ALT_GPIO_GPIO_LS_SYNC_GPIO_LS_SYNC_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_LS_SYNC_GPIO_LS_SYNC
 * 
 * Synchronize to pclk_intr
 */
#define ALT_GPIO_GPIO_LS_SYNC_GPIO_LS_SYNC_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_LS_SYNC_GPIO_LS_SYNC register field. */
#define ALT_GPIO_GPIO_LS_SYNC_GPIO_LS_SYNC_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_LS_SYNC_GPIO_LS_SYNC register field. */
#define ALT_GPIO_GPIO_LS_SYNC_GPIO_LS_SYNC_MSB        0
/* The width in bits of the ALT_GPIO_GPIO_LS_SYNC_GPIO_LS_SYNC register field. */
#define ALT_GPIO_GPIO_LS_SYNC_GPIO_LS_SYNC_WIDTH      1
/* The mask used to set the ALT_GPIO_GPIO_LS_SYNC_GPIO_LS_SYNC register field value. */
#define ALT_GPIO_GPIO_LS_SYNC_GPIO_LS_SYNC_SET_MSK    0x00000001
/* The mask used to clear the ALT_GPIO_GPIO_LS_SYNC_GPIO_LS_SYNC register field value. */
#define ALT_GPIO_GPIO_LS_SYNC_GPIO_LS_SYNC_CLR_MSK    0xfffffffe
/* The reset value of the ALT_GPIO_GPIO_LS_SYNC_GPIO_LS_SYNC register field. */
#define ALT_GPIO_GPIO_LS_SYNC_GPIO_LS_SYNC_RESET      0x0
/* Extracts the ALT_GPIO_GPIO_LS_SYNC_GPIO_LS_SYNC field value from a register. */
#define ALT_GPIO_GPIO_LS_SYNC_GPIO_LS_SYNC_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_GPIO_GPIO_LS_SYNC_GPIO_LS_SYNC register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_LS_SYNC_GPIO_LS_SYNC_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_GPIO_GPIO_LS_SYNC.
 */
struct ALT_GPIO_GPIO_LS_SYNC_s
{
    volatile uint32_t  GPIO_LS_SYNC :  1;  /* ALT_GPIO_GPIO_LS_SYNC_GPIO_LS_SYNC */
    uint32_t                        : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_GPIO_LS_SYNC. */
typedef struct ALT_GPIO_GPIO_LS_SYNC_s  ALT_GPIO_GPIO_LS_SYNC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_GPIO_LS_SYNC register. */
#define ALT_GPIO_GPIO_LS_SYNC_RESET       0x00000000
/* The byte offset of the ALT_GPIO_GPIO_LS_SYNC register from the beginning of the component. */
#define ALT_GPIO_GPIO_LS_SYNC_OFST        0x60
/* The address of the ALT_GPIO_GPIO_LS_SYNC register. */
#define ALT_GPIO_GPIO_LS_SYNC_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_GPIO_LS_SYNC_OFST))

/*
 * Register : GPIO ID code - GPIO_ID_CODE
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
 * :-------|:-------|:------|:-----------------------------------
 *  [31:0] | R      | 0x0   | ALT_GPIO_GPIO_ID_CODE_GPIO_ID_CODE
 * 
 */
/*
 * Field : GPIO_ID_CODE
 * 
 * This is a user-specified code that a system can read. It can
 * 
 * be used for chip identification, and so on.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_ID_CODE_GPIO_ID_CODE register field. */
#define ALT_GPIO_GPIO_ID_CODE_GPIO_ID_CODE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_ID_CODE_GPIO_ID_CODE register field. */
#define ALT_GPIO_GPIO_ID_CODE_GPIO_ID_CODE_MSB        31
/* The width in bits of the ALT_GPIO_GPIO_ID_CODE_GPIO_ID_CODE register field. */
#define ALT_GPIO_GPIO_ID_CODE_GPIO_ID_CODE_WIDTH      32
/* The mask used to set the ALT_GPIO_GPIO_ID_CODE_GPIO_ID_CODE register field value. */
#define ALT_GPIO_GPIO_ID_CODE_GPIO_ID_CODE_SET_MSK    0xffffffff
/* The mask used to clear the ALT_GPIO_GPIO_ID_CODE_GPIO_ID_CODE register field value. */
#define ALT_GPIO_GPIO_ID_CODE_GPIO_ID_CODE_CLR_MSK    0x00000000
/* The reset value of the ALT_GPIO_GPIO_ID_CODE_GPIO_ID_CODE register field. */
#define ALT_GPIO_GPIO_ID_CODE_GPIO_ID_CODE_RESET      0x0
/* Extracts the ALT_GPIO_GPIO_ID_CODE_GPIO_ID_CODE field value from a register. */
#define ALT_GPIO_GPIO_ID_CODE_GPIO_ID_CODE_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_GPIO_GPIO_ID_CODE_GPIO_ID_CODE register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_ID_CODE_GPIO_ID_CODE_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_GPIO_GPIO_ID_CODE.
 */
struct ALT_GPIO_GPIO_ID_CODE_s
{
    const volatile uint32_t  GPIO_ID_CODE : 32;  /* ALT_GPIO_GPIO_ID_CODE_GPIO_ID_CODE */
};

/* The typedef declaration for register ALT_GPIO_GPIO_ID_CODE. */
typedef struct ALT_GPIO_GPIO_ID_CODE_s  ALT_GPIO_GPIO_ID_CODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_GPIO_ID_CODE register. */
#define ALT_GPIO_GPIO_ID_CODE_RESET       0x00000000
/* The byte offset of the ALT_GPIO_GPIO_ID_CODE register from the beginning of the component. */
#define ALT_GPIO_GPIO_ID_CODE_OFST        0x64
/* The address of the ALT_GPIO_GPIO_ID_CODE register. */
#define ALT_GPIO_GPIO_ID_CODE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_GPIO_ID_CODE_OFST))

/*
 * Register : GPIO Component Version - GPIO_VER_ID_CODE
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
 * :-------|:-------|:-----------|:-------------------------------------------
 *  [31:0] | R      | 0x3231302a | ALT_GPIO_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE
 * 
 */
/*
 * Field : GPIO_VER_ID_CODE
 * 
 * ASCII value for each number in the version.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE register field. */
#define ALT_GPIO_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE register field. */
#define ALT_GPIO_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE_MSB        31
/* The width in bits of the ALT_GPIO_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE register field. */
#define ALT_GPIO_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE_WIDTH      32
/* The mask used to set the ALT_GPIO_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE register field value. */
#define ALT_GPIO_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE_SET_MSK    0xffffffff
/* The mask used to clear the ALT_GPIO_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE register field value. */
#define ALT_GPIO_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE_CLR_MSK    0x00000000
/* The reset value of the ALT_GPIO_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE register field. */
#define ALT_GPIO_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE_RESET      0x3231302a
/* Extracts the ALT_GPIO_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE field value from a register. */
#define ALT_GPIO_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_GPIO_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_GPIO_GPIO_VER_ID_CODE.
 */
struct ALT_GPIO_GPIO_VER_ID_CODE_s
{
    const volatile uint32_t  GPIO_VER_ID_CODE : 32;  /* ALT_GPIO_GPIO_VER_ID_CODE_GPIO_VER_ID_CODE */
};

/* The typedef declaration for register ALT_GPIO_GPIO_VER_ID_CODE. */
typedef struct ALT_GPIO_GPIO_VER_ID_CODE_s  ALT_GPIO_GPIO_VER_ID_CODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_GPIO_VER_ID_CODE register. */
#define ALT_GPIO_GPIO_VER_ID_CODE_RESET       0x3231302a
/* The byte offset of the ALT_GPIO_GPIO_VER_ID_CODE register from the beginning of the component. */
#define ALT_GPIO_GPIO_VER_ID_CODE_OFST        0x6c
/* The address of the ALT_GPIO_GPIO_VER_ID_CODE register. */
#define ALT_GPIO_GPIO_VER_ID_CODE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_GPIO_VER_ID_CODE_OFST))

/*
 * Register : GPIO Configuration Register 2 - GPIO_CONFIG_REG2
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
 * :--------|:-------|:------|:----------------------------------------------
 *  [4:0]   | R      | 0x17  | ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_A
 *  [9:5]   | R      | 0x7   | ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_B
 *  [14:10] | R      | 0x7   | ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_C
 *  [19:15] | R      | 0x7   | ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_D
 *  [31:20] | ???    | 0x0   | *UNDEFINED*                                  
 * 
 */
/*
 * Field : ENCODED_ID_PWIDTH_A
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_A register field. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_A_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_A register field. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_A_MSB        4
/* The width in bits of the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_A register field. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_A_WIDTH      5
/* The mask used to set the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_A register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_A_SET_MSK    0x0000001f
/* The mask used to clear the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_A register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_A_CLR_MSK    0xffffffe0
/* The reset value of the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_A register field. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_A_RESET      0x17
/* Extracts the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_A field value from a register. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_A_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_A register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_A_SET(value) (((value) << 0) & 0x0000001f)

/*
 * Field : ENCODED_ID_PWIDTH_B
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_B register field. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_B_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_B register field. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_B_MSB        9
/* The width in bits of the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_B register field. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_B_WIDTH      5
/* The mask used to set the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_B register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_B_SET_MSK    0x000003e0
/* The mask used to clear the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_B register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_B_CLR_MSK    0xfffffc1f
/* The reset value of the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_B register field. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_B_RESET      0x7
/* Extracts the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_B field value from a register. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_B_GET(value) (((value) & 0x000003e0) >> 5)
/* Produces a ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_B register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_B_SET(value) (((value) << 5) & 0x000003e0)

/*
 * Field : ENCODED_ID_PWIDTH_C
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_C register field. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_C_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_C register field. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_C_MSB        14
/* The width in bits of the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_C register field. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_C_WIDTH      5
/* The mask used to set the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_C register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_C_SET_MSK    0x00007c00
/* The mask used to clear the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_C register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_C_CLR_MSK    0xffff83ff
/* The reset value of the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_C register field. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_C_RESET      0x7
/* Extracts the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_C field value from a register. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_C_GET(value) (((value) & 0x00007c00) >> 10)
/* Produces a ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_C register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_C_SET(value) (((value) << 10) & 0x00007c00)

/*
 * Field : ENCODED_ID_PWIDTH_D
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_D register field. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_D_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_D register field. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_D_MSB        19
/* The width in bits of the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_D register field. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_D_WIDTH      5
/* The mask used to set the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_D register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_D_SET_MSK    0x000f8000
/* The mask used to clear the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_D register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_D_CLR_MSK    0xfff07fff
/* The reset value of the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_D register field. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_D_RESET      0x7
/* Extracts the ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_D field value from a register. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_D_GET(value) (((value) & 0x000f8000) >> 15)
/* Produces a ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_D register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_D_SET(value) (((value) << 15) & 0x000f8000)

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
 * The struct declaration for register ALT_GPIO_GPIO_CONFIG_REG2.
 */
struct ALT_GPIO_GPIO_CONFIG_REG2_s
{
    const volatile uint32_t  ENCODED_ID_PWIDTH_A :  5;  /* ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_A */
    const volatile uint32_t  ENCODED_ID_PWIDTH_B :  5;  /* ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_B */
    const volatile uint32_t  ENCODED_ID_PWIDTH_C :  5;  /* ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_C */
    const volatile uint32_t  ENCODED_ID_PWIDTH_D :  5;  /* ALT_GPIO_GPIO_CONFIG_REG2_ENCODED_ID_PWIDTH_D */
    uint32_t                                     : 12;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_GPIO_CONFIG_REG2. */
typedef struct ALT_GPIO_GPIO_CONFIG_REG2_s  ALT_GPIO_GPIO_CONFIG_REG2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_GPIO_CONFIG_REG2 register. */
#define ALT_GPIO_GPIO_CONFIG_REG2_RESET       0x00039cf7
/* The byte offset of the ALT_GPIO_GPIO_CONFIG_REG2 register from the beginning of the component. */
#define ALT_GPIO_GPIO_CONFIG_REG2_OFST        0x70
/* The address of the ALT_GPIO_GPIO_CONFIG_REG2 register. */
#define ALT_GPIO_GPIO_CONFIG_REG2_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_GPIO_CONFIG_REG2_OFST))

/*
 * Register : GPIO Configuration Register 1 - GPIO_CONFIG_REG1
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
 * :--------|:-------|:------|:---------------------------------------------------
 *  [1:0]   | R      | 0x2   | ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH          
 *  [3:2]   | R      | 0x0   | ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS               
 *  [4]     | R      | 0x1   | ALT_GPIO_GPIO_CONFIG_REG1_PORTA_SINGLE_CTL        
 *  [5]     | R      | 0x1   | ALT_GPIO_GPIO_CONFIG_REG1_PORTB_SINGLE_CTL        
 *  [6]     | R      | 0x1   | ALT_GPIO_GPIO_CONFIG_REG1_PORTC_SINGLE_CTL        
 *  [7]     | R      | 0x1   | ALT_GPIO_GPIO_CONFIG_REG1_PORTD_SINGLE_CTL        
 *  [8]     | R      | 0x0   | ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTA                
 *  [9]     | R      | 0x0   | ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTB                
 *  [10]    | R      | 0x0   | ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTC                
 *  [11]    | R      | 0x0   | ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTD                
 *  [12]    | R      | 0x1   | ALT_GPIO_GPIO_CONFIG_REG1_PORTA_INTR              
 *  [13]    | R      | 0x1   | ALT_GPIO_GPIO_CONFIG_REG1_DEBOUNCE                
 *  [14]    | R      | 0x1   | ALT_GPIO_GPIO_CONFIG_REG1_ADD_ENCODED_PARAMS      
 *  [15]    | R      | 0x1   | ALT_GPIO_GPIO_CONFIG_REG1_GPIO_ID                 
 *  [20:16] | R      | 0x1f  | ALT_GPIO_GPIO_CONFIG_REG1_ENCODED_ID_WIDTH        
 *  [21]    | R      | 0x0   | ALT_GPIO_GPIO_CONFIG_REG1_INTERRUPT_BOTH_EDGE_TYPE
 *  [31:22] | ???    | 0x0   | *UNDEFINED*                                       
 * 
 */
/*
 * Field : APB_DATA_WIDTH
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
 *  Enum                                                  | Value | Description              
 * :------------------------------------------------------|:------|:--------------------------
 *  ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH_E_APB_8BITS  | 0x0   | APB DATA WIDTH is 8 bits 
 *  ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH_E_APB_16BITS | 0x1   | APB DATA WIDTH is 16 bits
 *  ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH_E_APB_32BITS | 0x2   | APB DATA WIDTH is 32 bits
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH
 * 
 * APB DATA WIDTH is 8 bits
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH_E_APB_8BITS    0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH
 * 
 * APB DATA WIDTH is 16 bits
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH_E_APB_16BITS   0x1
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH
 * 
 * APB DATA WIDTH is 32 bits
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH_E_APB_32BITS   0x2

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH_MSB        1
/* The width in bits of the ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH_WIDTH      2
/* The mask used to set the ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH_SET_MSK    0x00000003
/* The mask used to clear the ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH_CLR_MSK    0xfffffffc
/* The reset value of the ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH_RESET      0x2
/* Extracts the ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH field value from a register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : NUM_PORTS
 * 
 * The value of this register is derived from the
 * 
 * GPIO_NUM_PORT configuration parameter.
 * 
 * 0x0 = 1
 * 
 * 0x1 = 2
 * 
 * 0x2 = 3
 * 
 * 0x3 = 4
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description         
 * :--------------------------------------------------|:------|:---------------------
 *  ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS_E_NUM_PORTS_1 | 0x0   | Number of ports is 1
 *  ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS_E_NUM_PORTS_2 | 0x1   | Number of ports is 2
 *  ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS_E_NUM_PORTS_3 | 0x2   | Number of ports is 3
 *  ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS_E_NUM_PORTS_4 | 0x3   | Number of ports is 4
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS
 * 
 * Number of ports is 1
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS_E_NUM_PORTS_1   0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS
 * 
 * Number of ports is 2
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS_E_NUM_PORTS_2   0x1
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS
 * 
 * Number of ports is 3
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS_E_NUM_PORTS_3   0x2
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS
 * 
 * Number of ports is 4
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS_E_NUM_PORTS_4   0x3

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS_MSB        3
/* The width in bits of the ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS_WIDTH      2
/* The mask used to set the ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS_SET_MSK    0x0000000c
/* The mask used to clear the ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS_CLR_MSK    0xfffffff3
/* The reset value of the ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS_RESET      0x0
/* Extracts the ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS field value from a register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS_GET(value) (((value) & 0x0000000c) >> 2)
/* Produces a ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS_SET(value) (((value) << 2) & 0x0000000c)

/*
 * Field : PORTA_SINGLE_CTL
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
 *  Enum                                                  | Value | Description                                 
 * :------------------------------------------------------|:------|:---------------------------------------------
 *  ALT_GPIO_GPIO_CONFIG_REG1_PORTA_SINGLE_CTL_E_DISABLED | 0x0   | PORTA is not controlled from a single source
 *  ALT_GPIO_GPIO_CONFIG_REG1_PORTA_SINGLE_CTL_E_ENABLED  | 0x1   | PORTA is controlled from a single source    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_PORTA_SINGLE_CTL
 * 
 * PORTA is not controlled from a single source
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTA_SINGLE_CTL_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_PORTA_SINGLE_CTL
 * 
 * PORTA is controlled from a single source
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTA_SINGLE_CTL_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_PORTA_SINGLE_CTL register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTA_SINGLE_CTL_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_PORTA_SINGLE_CTL register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTA_SINGLE_CTL_MSB        4
/* The width in bits of the ALT_GPIO_GPIO_CONFIG_REG1_PORTA_SINGLE_CTL register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTA_SINGLE_CTL_WIDTH      1
/* The mask used to set the ALT_GPIO_GPIO_CONFIG_REG1_PORTA_SINGLE_CTL register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTA_SINGLE_CTL_SET_MSK    0x00000010
/* The mask used to clear the ALT_GPIO_GPIO_CONFIG_REG1_PORTA_SINGLE_CTL register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTA_SINGLE_CTL_CLR_MSK    0xffffffef
/* The reset value of the ALT_GPIO_GPIO_CONFIG_REG1_PORTA_SINGLE_CTL register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTA_SINGLE_CTL_RESET      0x1
/* Extracts the ALT_GPIO_GPIO_CONFIG_REG1_PORTA_SINGLE_CTL field value from a register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTA_SINGLE_CTL_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_GPIO_GPIO_CONFIG_REG1_PORTA_SINGLE_CTL register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTA_SINGLE_CTL_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : PORTB_SINGLE_CTL
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
 *  Enum                                                  | Value | Description                                 
 * :------------------------------------------------------|:------|:---------------------------------------------
 *  ALT_GPIO_GPIO_CONFIG_REG1_PORTB_SINGLE_CTL_E_DISABLED | 0x0   | PORTB is not controlled from a single source
 *  ALT_GPIO_GPIO_CONFIG_REG1_PORTB_SINGLE_CTL_E_ENABLED  | 0x1   | PORTB is controlled from a single source    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_PORTB_SINGLE_CTL
 * 
 * PORTB is not controlled from a single source
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTB_SINGLE_CTL_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_PORTB_SINGLE_CTL
 * 
 * PORTB is controlled from a single source
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTB_SINGLE_CTL_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_PORTB_SINGLE_CTL register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTB_SINGLE_CTL_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_PORTB_SINGLE_CTL register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTB_SINGLE_CTL_MSB        5
/* The width in bits of the ALT_GPIO_GPIO_CONFIG_REG1_PORTB_SINGLE_CTL register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTB_SINGLE_CTL_WIDTH      1
/* The mask used to set the ALT_GPIO_GPIO_CONFIG_REG1_PORTB_SINGLE_CTL register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTB_SINGLE_CTL_SET_MSK    0x00000020
/* The mask used to clear the ALT_GPIO_GPIO_CONFIG_REG1_PORTB_SINGLE_CTL register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTB_SINGLE_CTL_CLR_MSK    0xffffffdf
/* The reset value of the ALT_GPIO_GPIO_CONFIG_REG1_PORTB_SINGLE_CTL register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTB_SINGLE_CTL_RESET      0x1
/* Extracts the ALT_GPIO_GPIO_CONFIG_REG1_PORTB_SINGLE_CTL field value from a register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTB_SINGLE_CTL_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_GPIO_GPIO_CONFIG_REG1_PORTB_SINGLE_CTL register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTB_SINGLE_CTL_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : PORTC_SINGLE_CTL
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
 *  Enum                                                  | Value | Description                                 
 * :------------------------------------------------------|:------|:---------------------------------------------
 *  ALT_GPIO_GPIO_CONFIG_REG1_PORTC_SINGLE_CTL_E_DISABLED | 0x0   | PORTC is not controlled from a single source
 *  ALT_GPIO_GPIO_CONFIG_REG1_PORTC_SINGLE_CTL_E_ENABLED  | 0x1   | PORTC is controlled from a single source    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_PORTC_SINGLE_CTL
 * 
 * PORTC is not controlled from a single source
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTC_SINGLE_CTL_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_PORTC_SINGLE_CTL
 * 
 * PORTC is controlled from a single source
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTC_SINGLE_CTL_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_PORTC_SINGLE_CTL register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTC_SINGLE_CTL_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_PORTC_SINGLE_CTL register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTC_SINGLE_CTL_MSB        6
/* The width in bits of the ALT_GPIO_GPIO_CONFIG_REG1_PORTC_SINGLE_CTL register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTC_SINGLE_CTL_WIDTH      1
/* The mask used to set the ALT_GPIO_GPIO_CONFIG_REG1_PORTC_SINGLE_CTL register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTC_SINGLE_CTL_SET_MSK    0x00000040
/* The mask used to clear the ALT_GPIO_GPIO_CONFIG_REG1_PORTC_SINGLE_CTL register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTC_SINGLE_CTL_CLR_MSK    0xffffffbf
/* The reset value of the ALT_GPIO_GPIO_CONFIG_REG1_PORTC_SINGLE_CTL register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTC_SINGLE_CTL_RESET      0x1
/* Extracts the ALT_GPIO_GPIO_CONFIG_REG1_PORTC_SINGLE_CTL field value from a register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTC_SINGLE_CTL_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_GPIO_GPIO_CONFIG_REG1_PORTC_SINGLE_CTL register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTC_SINGLE_CTL_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : PORTD_SINGLE_CTL
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
 *  Enum                                                  | Value | Description                                 
 * :------------------------------------------------------|:------|:---------------------------------------------
 *  ALT_GPIO_GPIO_CONFIG_REG1_PORTD_SINGLE_CTL_E_DISABLED | 0x0   | PORTD is not controlled from a single source
 *  ALT_GPIO_GPIO_CONFIG_REG1_PORTD_SINGLE_CTL_E_ENABLED  | 0x1   | PORTD is controlled from a single source    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_PORTD_SINGLE_CTL
 * 
 * PORTD is not controlled from a single source
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTD_SINGLE_CTL_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_PORTD_SINGLE_CTL
 * 
 * PORTD is controlled from a single source
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTD_SINGLE_CTL_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_PORTD_SINGLE_CTL register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTD_SINGLE_CTL_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_PORTD_SINGLE_CTL register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTD_SINGLE_CTL_MSB        7
/* The width in bits of the ALT_GPIO_GPIO_CONFIG_REG1_PORTD_SINGLE_CTL register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTD_SINGLE_CTL_WIDTH      1
/* The mask used to set the ALT_GPIO_GPIO_CONFIG_REG1_PORTD_SINGLE_CTL register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTD_SINGLE_CTL_SET_MSK    0x00000080
/* The mask used to clear the ALT_GPIO_GPIO_CONFIG_REG1_PORTD_SINGLE_CTL register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTD_SINGLE_CTL_CLR_MSK    0xffffff7f
/* The reset value of the ALT_GPIO_GPIO_CONFIG_REG1_PORTD_SINGLE_CTL register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTD_SINGLE_CTL_RESET      0x1
/* Extracts the ALT_GPIO_GPIO_CONFIG_REG1_PORTD_SINGLE_CTL field value from a register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTD_SINGLE_CTL_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_GPIO_GPIO_CONFIG_REG1_PORTD_SINGLE_CTL register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTD_SINGLE_CTL_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : HW_PORTA
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
 *  Enum                                          | Value | Description                                    
 * :----------------------------------------------|:------|:------------------------------------------------
 *  ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTA_E_DISABLED | 0x0   | Port A has external, auxiliary hardware signals
 * :                                              |       | excluded                                       
 *  ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTA_E_ENABLED  | 0x1   | Port A has external, auxiliary hardware signals
 * :                                              |       | included                                       
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTA
 * 
 * Port A has external, auxiliary hardware signals
 * 
 * excluded
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTA_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTA
 * 
 * Port A has external, auxiliary hardware signals
 * 
 * included
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTA_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTA register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTA register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTA_MSB        8
/* The width in bits of the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTA register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTA_WIDTH      1
/* The mask used to set the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTA register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTA_SET_MSK    0x00000100
/* The mask used to clear the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTA register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTA register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTA_RESET      0x0
/* Extracts the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTA field value from a register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTA register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : HW_PORTB
 * 
 * The value of this register is derived from the
 * 
 * GPIO_HW_PORTB configuration parameter.
 * 
 * 0 = Exclude
 * 
 * 1 = Include
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                          | Value | Description                                    
 * :----------------------------------------------|:------|:------------------------------------------------
 *  ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTB_E_DISABLED | 0x0   | Port B has external, auxiliary hardware signals
 * :                                              |       | excluded                                       
 *  ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTB_E_ENABLED  | 0x1   | Port B has external, auxiliary hardware signals
 * :                                              |       | included                                       
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTB
 * 
 * Port B has external, auxiliary hardware signals
 * 
 * excluded
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTB_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTB
 * 
 * Port B has external, auxiliary hardware signals
 * 
 * included
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTB_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTB register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTB_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTB register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTB_MSB        9
/* The width in bits of the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTB register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTB_WIDTH      1
/* The mask used to set the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTB register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTB_SET_MSK    0x00000200
/* The mask used to clear the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTB register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTB_CLR_MSK    0xfffffdff
/* The reset value of the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTB register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTB_RESET      0x0
/* Extracts the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTB field value from a register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTB_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTB register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTB_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : HW_PORTC
 * 
 * The value of this register is derived from the
 * 
 * GPIO_HW_PORTC configuration parameter.
 * 
 * 0 = Exclude
 * 
 * 1 = Include
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                          | Value | Description                                    
 * :----------------------------------------------|:------|:------------------------------------------------
 *  ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTC_E_DISABLED | 0x0   | Port C has external, auxiliary hardware signals
 * :                                              |       | excluded                                       
 *  ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTC_E_ENABLED  | 0x1   | Port C has external, auxiliary hardware signals
 * :                                              |       | included                                       
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTC
 * 
 * Port C has external, auxiliary hardware signals
 * 
 * excluded
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTC_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTC
 * 
 * Port C has external, auxiliary hardware signals
 * 
 * included
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTC_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTC register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTC_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTC register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTC_MSB        10
/* The width in bits of the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTC register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTC_WIDTH      1
/* The mask used to set the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTC register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTC_SET_MSK    0x00000400
/* The mask used to clear the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTC register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTC_CLR_MSK    0xfffffbff
/* The reset value of the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTC register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTC_RESET      0x0
/* Extracts the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTC field value from a register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTC_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTC register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTC_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : HW_PORTD
 * 
 * The value of this register is derived from the
 * 
 * GPIO_HW_PORTD configuration parameter.
 * 
 * 0 = Exclude
 * 
 * 1 = Include
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                          | Value | Description                                    
 * :----------------------------------------------|:------|:------------------------------------------------
 *  ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTD_E_DISABLED | 0x0   | Port D has external, auxiliary hardware signals
 * :                                              |       | excluded                                       
 *  ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTD_E_ENABLED  | 0x1   | Port D has external, auxiliary hardware signals
 * :                                              |       | included                                       
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTD
 * 
 * Port D has external, auxiliary hardware signals
 * 
 * excluded
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTD_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTD
 * 
 * Port D has external, auxiliary hardware signals
 * 
 * included
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTD_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTD register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTD_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTD register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTD_MSB        11
/* The width in bits of the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTD register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTD_WIDTH      1
/* The mask used to set the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTD register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTD_SET_MSK    0x00000800
/* The mask used to clear the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTD register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTD_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTD register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTD_RESET      0x0
/* Extracts the ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTD field value from a register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTD_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTD register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTD_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : PORTA_INTR
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
 *  Enum                                            | Value | Description                                  
 * :------------------------------------------------|:------|:----------------------------------------------
 *  ALT_GPIO_GPIO_CONFIG_REG1_PORTA_INTR_E_DISABLED | 0x0   | PORT A is not used as an interrupt source    
 *  ALT_GPIO_GPIO_CONFIG_REG1_PORTA_INTR_E_ENABLED  | 0x1   | PORT A is required to be used as an interrupt
 * :                                                |       | source                                       
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_PORTA_INTR
 * 
 * PORT A is not used as an interrupt source
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTA_INTR_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_PORTA_INTR
 * 
 * PORT A is required to be used as an interrupt
 * 
 * source
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTA_INTR_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_PORTA_INTR register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTA_INTR_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_PORTA_INTR register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTA_INTR_MSB        12
/* The width in bits of the ALT_GPIO_GPIO_CONFIG_REG1_PORTA_INTR register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTA_INTR_WIDTH      1
/* The mask used to set the ALT_GPIO_GPIO_CONFIG_REG1_PORTA_INTR register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTA_INTR_SET_MSK    0x00001000
/* The mask used to clear the ALT_GPIO_GPIO_CONFIG_REG1_PORTA_INTR register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTA_INTR_CLR_MSK    0xffffefff
/* The reset value of the ALT_GPIO_GPIO_CONFIG_REG1_PORTA_INTR register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTA_INTR_RESET      0x1
/* Extracts the ALT_GPIO_GPIO_CONFIG_REG1_PORTA_INTR field value from a register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTA_INTR_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_GPIO_GPIO_CONFIG_REG1_PORTA_INTR register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_PORTA_INTR_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : DEBOUNCE
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
 *  Enum                                          | Value | Description                
 * :----------------------------------------------|:------|:----------------------------
 *  ALT_GPIO_GPIO_CONFIG_REG1_DEBOUNCE_E_DISABLED | 0x0   | Exclude debounce capability
 *  ALT_GPIO_GPIO_CONFIG_REG1_DEBOUNCE_E_ENABLED  | 0x1   | Include debounce capability
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_DEBOUNCE
 * 
 * Exclude debounce capability
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_DEBOUNCE_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_DEBOUNCE
 * 
 * Include debounce capability
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_DEBOUNCE_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_DEBOUNCE register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_DEBOUNCE_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_DEBOUNCE register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_DEBOUNCE_MSB        13
/* The width in bits of the ALT_GPIO_GPIO_CONFIG_REG1_DEBOUNCE register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_DEBOUNCE_WIDTH      1
/* The mask used to set the ALT_GPIO_GPIO_CONFIG_REG1_DEBOUNCE register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_DEBOUNCE_SET_MSK    0x00002000
/* The mask used to clear the ALT_GPIO_GPIO_CONFIG_REG1_DEBOUNCE register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_DEBOUNCE_CLR_MSK    0xffffdfff
/* The reset value of the ALT_GPIO_GPIO_CONFIG_REG1_DEBOUNCE register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_DEBOUNCE_RESET      0x1
/* Extracts the ALT_GPIO_GPIO_CONFIG_REG1_DEBOUNCE field value from a register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_DEBOUNCE_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_GPIO_GPIO_CONFIG_REG1_DEBOUNCE register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_DEBOUNCE_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : ADD_ENCODED_PARAMS
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
 *  Enum                                                    | Value | Description                 
 * :--------------------------------------------------------|:------|:-----------------------------
 *  ALT_GPIO_GPIO_CONFIG_REG1_ADD_ENCODED_PARAMS_E_DISABLED | 0x0   | Encoded parameters not added
 *  ALT_GPIO_GPIO_CONFIG_REG1_ADD_ENCODED_PARAMS_E_ENABLED  | 0x1   | Encoded parameters added    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_ADD_ENCODED_PARAMS
 * 
 * Encoded parameters not added
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_ADD_ENCODED_PARAMS_E_DISABLED 0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_ADD_ENCODED_PARAMS
 * 
 * Encoded parameters added
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_ADD_ENCODED_PARAMS_E_ENABLED  0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_ADD_ENCODED_PARAMS register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_ADD_ENCODED_PARAMS_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_ADD_ENCODED_PARAMS register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_ADD_ENCODED_PARAMS_MSB        14
/* The width in bits of the ALT_GPIO_GPIO_CONFIG_REG1_ADD_ENCODED_PARAMS register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_ADD_ENCODED_PARAMS_WIDTH      1
/* The mask used to set the ALT_GPIO_GPIO_CONFIG_REG1_ADD_ENCODED_PARAMS register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_ADD_ENCODED_PARAMS_SET_MSK    0x00004000
/* The mask used to clear the ALT_GPIO_GPIO_CONFIG_REG1_ADD_ENCODED_PARAMS register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_ADD_ENCODED_PARAMS_CLR_MSK    0xffffbfff
/* The reset value of the ALT_GPIO_GPIO_CONFIG_REG1_ADD_ENCODED_PARAMS register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_ADD_ENCODED_PARAMS_RESET      0x1
/* Extracts the ALT_GPIO_GPIO_CONFIG_REG1_ADD_ENCODED_PARAMS field value from a register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_ADD_ENCODED_PARAMS_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_GPIO_GPIO_CONFIG_REG1_ADD_ENCODED_PARAMS register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_ADD_ENCODED_PARAMS_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : GPIO_ID
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
 *  Enum                                         | Value | Description         
 * :---------------------------------------------|:------|:---------------------
 *  ALT_GPIO_GPIO_CONFIG_REG1_GPIO_ID_E_DISABLED | 0x0   | GPIO_ID not included
 *  ALT_GPIO_GPIO_CONFIG_REG1_GPIO_ID_E_ENABLED  | 0x1   | GPIO_ID is included 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_GPIO_ID
 * 
 * GPIO_ID not included
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_GPIO_ID_E_DISABLED    0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_GPIO_ID
 * 
 * GPIO_ID is included
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_GPIO_ID_E_ENABLED     0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_GPIO_ID register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_GPIO_ID_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_GPIO_ID register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_GPIO_ID_MSB        15
/* The width in bits of the ALT_GPIO_GPIO_CONFIG_REG1_GPIO_ID register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_GPIO_ID_WIDTH      1
/* The mask used to set the ALT_GPIO_GPIO_CONFIG_REG1_GPIO_ID register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_GPIO_ID_SET_MSK    0x00008000
/* The mask used to clear the ALT_GPIO_GPIO_CONFIG_REG1_GPIO_ID register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_GPIO_ID_CLR_MSK    0xffff7fff
/* The reset value of the ALT_GPIO_GPIO_CONFIG_REG1_GPIO_ID register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_GPIO_ID_RESET      0x1
/* Extracts the ALT_GPIO_GPIO_CONFIG_REG1_GPIO_ID field value from a register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_GPIO_ID_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_GPIO_GPIO_CONFIG_REG1_GPIO_ID register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_GPIO_ID_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : ENCODED_ID_WIDTH
 * 
 * The value of this register is derived from the
 * 
 * GPIO_ID_WIDTH configuration parameter.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_ENCODED_ID_WIDTH register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_ENCODED_ID_WIDTH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_ENCODED_ID_WIDTH register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_ENCODED_ID_WIDTH_MSB        20
/* The width in bits of the ALT_GPIO_GPIO_CONFIG_REG1_ENCODED_ID_WIDTH register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_ENCODED_ID_WIDTH_WIDTH      5
/* The mask used to set the ALT_GPIO_GPIO_CONFIG_REG1_ENCODED_ID_WIDTH register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_ENCODED_ID_WIDTH_SET_MSK    0x001f0000
/* The mask used to clear the ALT_GPIO_GPIO_CONFIG_REG1_ENCODED_ID_WIDTH register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_ENCODED_ID_WIDTH_CLR_MSK    0xffe0ffff
/* The reset value of the ALT_GPIO_GPIO_CONFIG_REG1_ENCODED_ID_WIDTH register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_ENCODED_ID_WIDTH_RESET      0x1f
/* Extracts the ALT_GPIO_GPIO_CONFIG_REG1_ENCODED_ID_WIDTH field value from a register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_ENCODED_ID_WIDTH_GET(value) (((value) & 0x001f0000) >> 16)
/* Produces a ALT_GPIO_GPIO_CONFIG_REG1_ENCODED_ID_WIDTH register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_ENCODED_ID_WIDTH_SET(value) (((value) << 16) & 0x001f0000)

/*
 * Field : INTERRUPT_BOTH_EDGE_TYPE
 * 
 * The value of this register is derived from the
 * 
 * GPIO_INT_BOTH_EDGE configuration parameter
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                          | Value | Description                                    
 * :--------------------------------------------------------------|:------|:------------------------------------------------
 *  ALT_GPIO_GPIO_CONFIG_REG1_INTERRUPT_BOTH_EDGE_TYPE_E_DISABLED | 0x0   | Interrupt generation on rising or falling edge 
 *  ALT_GPIO_GPIO_CONFIG_REG1_INTERRUPT_BOTH_EDGE_TYPE_E_ENABLED  | 0x1   | Interrupt generation on both rising and falling
 * :                                                              |       | edge                                           
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_INTERRUPT_BOTH_EDGE_TYPE
 * 
 * Interrupt generation on rising or falling edge
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_INTERRUPT_BOTH_EDGE_TYPE_E_DISABLED   0x0
/*
 * Enumerated value for register field ALT_GPIO_GPIO_CONFIG_REG1_INTERRUPT_BOTH_EDGE_TYPE
 * 
 * Interrupt generation on both rising and falling edge
 */
#define ALT_GPIO_GPIO_CONFIG_REG1_INTERRUPT_BOTH_EDGE_TYPE_E_ENABLED    0x1

/* The Least Significant Bit (LSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_INTERRUPT_BOTH_EDGE_TYPE register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_INTERRUPT_BOTH_EDGE_TYPE_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_GPIO_GPIO_CONFIG_REG1_INTERRUPT_BOTH_EDGE_TYPE register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_INTERRUPT_BOTH_EDGE_TYPE_MSB        21
/* The width in bits of the ALT_GPIO_GPIO_CONFIG_REG1_INTERRUPT_BOTH_EDGE_TYPE register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_INTERRUPT_BOTH_EDGE_TYPE_WIDTH      1
/* The mask used to set the ALT_GPIO_GPIO_CONFIG_REG1_INTERRUPT_BOTH_EDGE_TYPE register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_INTERRUPT_BOTH_EDGE_TYPE_SET_MSK    0x00200000
/* The mask used to clear the ALT_GPIO_GPIO_CONFIG_REG1_INTERRUPT_BOTH_EDGE_TYPE register field value. */
#define ALT_GPIO_GPIO_CONFIG_REG1_INTERRUPT_BOTH_EDGE_TYPE_CLR_MSK    0xffdfffff
/* The reset value of the ALT_GPIO_GPIO_CONFIG_REG1_INTERRUPT_BOTH_EDGE_TYPE register field. */
#define ALT_GPIO_GPIO_CONFIG_REG1_INTERRUPT_BOTH_EDGE_TYPE_RESET      0x0
/* Extracts the ALT_GPIO_GPIO_CONFIG_REG1_INTERRUPT_BOTH_EDGE_TYPE field value from a register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_INTERRUPT_BOTH_EDGE_TYPE_GET(value) (((value) & 0x00200000) >> 21)
/* Produces a ALT_GPIO_GPIO_CONFIG_REG1_INTERRUPT_BOTH_EDGE_TYPE register field value suitable for setting the register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_INTERRUPT_BOTH_EDGE_TYPE_SET(value) (((value) << 21) & 0x00200000)

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
 * The struct declaration for register ALT_GPIO_GPIO_CONFIG_REG1.
 */
struct ALT_GPIO_GPIO_CONFIG_REG1_s
{
    const volatile uint32_t  APB_DATA_WIDTH           :  2;  /* ALT_GPIO_GPIO_CONFIG_REG1_APB_DATA_WIDTH */
    const volatile uint32_t  NUM_PORTS                :  2;  /* ALT_GPIO_GPIO_CONFIG_REG1_NUM_PORTS */
    const volatile uint32_t  PORTA_SINGLE_CTL         :  1;  /* ALT_GPIO_GPIO_CONFIG_REG1_PORTA_SINGLE_CTL */
    const volatile uint32_t  PORTB_SINGLE_CTL         :  1;  /* ALT_GPIO_GPIO_CONFIG_REG1_PORTB_SINGLE_CTL */
    const volatile uint32_t  PORTC_SINGLE_CTL         :  1;  /* ALT_GPIO_GPIO_CONFIG_REG1_PORTC_SINGLE_CTL */
    const volatile uint32_t  PORTD_SINGLE_CTL         :  1;  /* ALT_GPIO_GPIO_CONFIG_REG1_PORTD_SINGLE_CTL */
    const volatile uint32_t  HW_PORTA                 :  1;  /* ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTA */
    const volatile uint32_t  HW_PORTB                 :  1;  /* ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTB */
    const volatile uint32_t  HW_PORTC                 :  1;  /* ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTC */
    const volatile uint32_t  HW_PORTD                 :  1;  /* ALT_GPIO_GPIO_CONFIG_REG1_HW_PORTD */
    const volatile uint32_t  PORTA_INTR               :  1;  /* ALT_GPIO_GPIO_CONFIG_REG1_PORTA_INTR */
    const volatile uint32_t  DEBOUNCE                 :  1;  /* ALT_GPIO_GPIO_CONFIG_REG1_DEBOUNCE */
    const volatile uint32_t  ADD_ENCODED_PARAMS       :  1;  /* ALT_GPIO_GPIO_CONFIG_REG1_ADD_ENCODED_PARAMS */
    const volatile uint32_t  GPIO_ID                  :  1;  /* ALT_GPIO_GPIO_CONFIG_REG1_GPIO_ID */
    const volatile uint32_t  ENCODED_ID_WIDTH         :  5;  /* ALT_GPIO_GPIO_CONFIG_REG1_ENCODED_ID_WIDTH */
    const volatile uint32_t  INTERRUPT_BOTH_EDGE_TYPE :  1;  /* ALT_GPIO_GPIO_CONFIG_REG1_INTERRUPT_BOTH_EDGE_TYPE */
    uint32_t                                          : 10;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_GPIO_GPIO_CONFIG_REG1. */
typedef struct ALT_GPIO_GPIO_CONFIG_REG1_s  ALT_GPIO_GPIO_CONFIG_REG1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_GPIO_GPIO_CONFIG_REG1 register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_RESET       0x001ff0f2
/* The byte offset of the ALT_GPIO_GPIO_CONFIG_REG1 register from the beginning of the component. */
#define ALT_GPIO_GPIO_CONFIG_REG1_OFST        0x74
/* The address of the ALT_GPIO_GPIO_CONFIG_REG1 register. */
#define ALT_GPIO_GPIO_CONFIG_REG1_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_GPIO_GPIO_CONFIG_REG1_OFST))

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
 * The struct declaration for register group ALT_GPIO.
 */
struct ALT_GPIO_s
{
    volatile ALT_GPIO_GPIO_SWPORTA_DR_t     GPIO_SWPORTA_DR;     /* ALT_GPIO_GPIO_SWPORTA_DR */
    volatile ALT_GPIO_GPIO_SWPORTA_DDR_t    GPIO_SWPORTA_DDR;    /* ALT_GPIO_GPIO_SWPORTA_DDR */
    volatile uint32_t                       _pad_0x8_0x2f[10];   /* *UNDEFINED* */
    volatile ALT_GPIO_GPIO_INTEN_t          GPIO_INTEN;          /* ALT_GPIO_GPIO_INTEN */
    volatile ALT_GPIO_GPIO_INTMASK_t        GPIO_INTMASK;        /* ALT_GPIO_GPIO_INTMASK */
    volatile ALT_GPIO_GPIO_INTTYPE_LEVEL_t  GPIO_INTTYPE_LEVEL;  /* ALT_GPIO_GPIO_INTTYPE_LEVEL */
    volatile ALT_GPIO_GPIO_INT_POLARITY_t   GPIO_INT_POLARITY;   /* ALT_GPIO_GPIO_INT_POLARITY */
    volatile ALT_GPIO_GPIO_INTSTATUS_t      GPIO_INTSTATUS;      /* ALT_GPIO_GPIO_INTSTATUS */
    volatile ALT_GPIO_GPIO_RAW_INTSTATUS_t  GPIO_RAW_INTSTATUS;  /* ALT_GPIO_GPIO_RAW_INTSTATUS */
    volatile ALT_GPIO_GPIO_DEBOUNCE_t       GPIO_DEBOUNCE;       /* ALT_GPIO_GPIO_DEBOUNCE */
    volatile ALT_GPIO_GPIO_PORTA_EOI_t      GPIO_PORTA_EOI;      /* ALT_GPIO_GPIO_PORTA_EOI */
    volatile ALT_GPIO_GPIO_EXT_PORTA_t      GPIO_EXT_PORTA;      /* ALT_GPIO_GPIO_EXT_PORTA */
    volatile uint32_t                       _pad_0x54_0x5f[3];   /* *UNDEFINED* */
    volatile ALT_GPIO_GPIO_LS_SYNC_t        GPIO_LS_SYNC;        /* ALT_GPIO_GPIO_LS_SYNC */
    volatile ALT_GPIO_GPIO_ID_CODE_t        GPIO_ID_CODE;        /* ALT_GPIO_GPIO_ID_CODE */
    volatile uint32_t                       _pad_0x68_0x6b;      /* *UNDEFINED* */
    volatile ALT_GPIO_GPIO_VER_ID_CODE_t    GPIO_VER_ID_CODE;    /* ALT_GPIO_GPIO_VER_ID_CODE */
    volatile ALT_GPIO_GPIO_CONFIG_REG2_t    GPIO_CONFIG_REG2;    /* ALT_GPIO_GPIO_CONFIG_REG2 */
    volatile ALT_GPIO_GPIO_CONFIG_REG1_t    GPIO_CONFIG_REG1;    /* ALT_GPIO_GPIO_CONFIG_REG1 */
    volatile uint32_t                       _pad_0x78_0x80[2];   /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_GPIO. */
typedef struct ALT_GPIO_s  ALT_GPIO_t;
/* The struct declaration for the raw register contents of register group ALT_GPIO. */
struct ALT_GPIO_raw_s
{
    volatile uint32_t  GPIO_SWPORTA_DR;     /* ALT_GPIO_GPIO_SWPORTA_DR */
    volatile uint32_t  GPIO_SWPORTA_DDR;    /* ALT_GPIO_GPIO_SWPORTA_DDR */
    volatile uint32_t  _pad_0x8_0x2f[10];   /* *UNDEFINED* */
    volatile uint32_t  GPIO_INTEN;          /* ALT_GPIO_GPIO_INTEN */
    volatile uint32_t  GPIO_INTMASK;        /* ALT_GPIO_GPIO_INTMASK */
    volatile uint32_t  GPIO_INTTYPE_LEVEL;  /* ALT_GPIO_GPIO_INTTYPE_LEVEL */
    volatile uint32_t  GPIO_INT_POLARITY;   /* ALT_GPIO_GPIO_INT_POLARITY */
    volatile uint32_t  GPIO_INTSTATUS;      /* ALT_GPIO_GPIO_INTSTATUS */
    volatile uint32_t  GPIO_RAW_INTSTATUS;  /* ALT_GPIO_GPIO_RAW_INTSTATUS */
    volatile uint32_t  GPIO_DEBOUNCE;       /* ALT_GPIO_GPIO_DEBOUNCE */
    volatile uint32_t  GPIO_PORTA_EOI;      /* ALT_GPIO_GPIO_PORTA_EOI */
    volatile uint32_t  GPIO_EXT_PORTA;      /* ALT_GPIO_GPIO_EXT_PORTA */
    volatile uint32_t  _pad_0x54_0x5f[3];   /* *UNDEFINED* */
    volatile uint32_t  GPIO_LS_SYNC;        /* ALT_GPIO_GPIO_LS_SYNC */
    volatile uint32_t  GPIO_ID_CODE;        /* ALT_GPIO_GPIO_ID_CODE */
    volatile uint32_t  _pad_0x68_0x6b;      /* *UNDEFINED* */
    volatile uint32_t  GPIO_VER_ID_CODE;    /* ALT_GPIO_GPIO_VER_ID_CODE */
    volatile uint32_t  GPIO_CONFIG_REG2;    /* ALT_GPIO_GPIO_CONFIG_REG2 */
    volatile uint32_t  GPIO_CONFIG_REG1;    /* ALT_GPIO_GPIO_CONFIG_REG1 */
    volatile uint32_t  _pad_0x78_0x80[2];   /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_GPIO. */
typedef struct ALT_GPIO_raw_s  ALT_GPIO_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_GPIO_H__ */

