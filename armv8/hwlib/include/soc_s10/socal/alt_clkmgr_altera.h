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

/* Altera - ALT_CLKMGR_ALTERA */

#ifndef __ALT_SOCAL_CLKMGR_ALTERA_H__
#define __ALT_SOCAL_CLKMGR_ALTERA_H__

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
 * Component : Altera internal use only registers Group - CLKMGR_ALTERA
 * Altera internal use only registers Group
 * 
 * Contains registers with settings for Altera internal use.
 * 
 */
/*
 * Register : jtag
 * 
 * Jtag control registers for the  PLLs
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [7:0]  | RW     | 0x80  | ALT_CLKMGR_ALTERA_JTAG_ADDR
 *  [8]    | RW     | 0x1   | ALT_CLKMGR_ALTERA_JTAG_RST 
 *  [31:9] | ???    | 0x0   | *UNDEFINED*                
 * 
 */
/*
 * Field : addr
 * 
 * JTAG address for both the PLLs
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_ALTERA_JTAG_ADDR register field. */
#define ALT_CLKMGR_ALTERA_JTAG_ADDR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_ALTERA_JTAG_ADDR register field. */
#define ALT_CLKMGR_ALTERA_JTAG_ADDR_MSB        7
/* The width in bits of the ALT_CLKMGR_ALTERA_JTAG_ADDR register field. */
#define ALT_CLKMGR_ALTERA_JTAG_ADDR_WIDTH      8
/* The mask used to set the ALT_CLKMGR_ALTERA_JTAG_ADDR register field value. */
#define ALT_CLKMGR_ALTERA_JTAG_ADDR_SET_MSK    0x000000ff
/* The mask used to clear the ALT_CLKMGR_ALTERA_JTAG_ADDR register field value. */
#define ALT_CLKMGR_ALTERA_JTAG_ADDR_CLR_MSK    0xffffff00
/* The reset value of the ALT_CLKMGR_ALTERA_JTAG_ADDR register field. */
#define ALT_CLKMGR_ALTERA_JTAG_ADDR_RESET      0x80
/* Extracts the ALT_CLKMGR_ALTERA_JTAG_ADDR field value from a register. */
#define ALT_CLKMGR_ALTERA_JTAG_ADDR_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_CLKMGR_ALTERA_JTAG_ADDR register field value suitable for setting the register. */
#define ALT_CLKMGR_ALTERA_JTAG_ADDR_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : rst
 * 
 * Jtag rst signal. Its an active low signal.
 * 
 * 1- reset de-asserted
 * 
 * 0- reset asserted
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_ALTERA_JTAG_RST register field. */
#define ALT_CLKMGR_ALTERA_JTAG_RST_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_ALTERA_JTAG_RST register field. */
#define ALT_CLKMGR_ALTERA_JTAG_RST_MSB        8
/* The width in bits of the ALT_CLKMGR_ALTERA_JTAG_RST register field. */
#define ALT_CLKMGR_ALTERA_JTAG_RST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_ALTERA_JTAG_RST register field value. */
#define ALT_CLKMGR_ALTERA_JTAG_RST_SET_MSK    0x00000100
/* The mask used to clear the ALT_CLKMGR_ALTERA_JTAG_RST register field value. */
#define ALT_CLKMGR_ALTERA_JTAG_RST_CLR_MSK    0xfffffeff
/* The reset value of the ALT_CLKMGR_ALTERA_JTAG_RST register field. */
#define ALT_CLKMGR_ALTERA_JTAG_RST_RESET      0x1
/* Extracts the ALT_CLKMGR_ALTERA_JTAG_RST field value from a register. */
#define ALT_CLKMGR_ALTERA_JTAG_RST_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_CLKMGR_ALTERA_JTAG_RST register field value suitable for setting the register. */
#define ALT_CLKMGR_ALTERA_JTAG_RST_SET(value) (((value) << 8) & 0x00000100)

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
 * The struct declaration for register ALT_CLKMGR_ALTERA_JTAG.
 */
struct ALT_CLKMGR_ALTERA_JTAG_s
{
    volatile uint32_t  addr :  8;  /* ALT_CLKMGR_ALTERA_JTAG_ADDR */
    volatile uint32_t  rst  :  1;  /* ALT_CLKMGR_ALTERA_JTAG_RST */
    uint32_t                : 23;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_ALTERA_JTAG. */
typedef struct ALT_CLKMGR_ALTERA_JTAG_s  ALT_CLKMGR_ALTERA_JTAG_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_ALTERA_JTAG register. */
#define ALT_CLKMGR_ALTERA_JTAG_RESET       0x00000180
/* The byte offset of the ALT_CLKMGR_ALTERA_JTAG register from the beginning of the component. */
#define ALT_CLKMGR_ALTERA_JTAG_OFST        0x0

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
 * The struct declaration for register group ALT_CLKMGR_ALTERA.
 */
struct ALT_CLKMGR_ALTERA_s
{
    volatile ALT_CLKMGR_ALTERA_JTAG_t  jtag;              /* ALT_CLKMGR_ALTERA_JTAG */
    volatile uint32_t                  _pad_0x4_0x20[7];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_CLKMGR_ALTERA. */
typedef struct ALT_CLKMGR_ALTERA_s  ALT_CLKMGR_ALTERA_t;
/* The struct declaration for the raw register contents of register group ALT_CLKMGR_ALTERA. */
struct ALT_CLKMGR_ALTERA_raw_s
{
    volatile uint32_t  jtag;              /* ALT_CLKMGR_ALTERA_JTAG */
    volatile uint32_t  _pad_0x4_0x20[7];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_CLKMGR_ALTERA. */
typedef struct ALT_CLKMGR_ALTERA_raw_s  ALT_CLKMGR_ALTERA_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_CLKMGR_ALTERA_H__ */

