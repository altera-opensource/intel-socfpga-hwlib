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

/* Altera - ALT_NOC_FW_DDR_L3_SCR */

#ifndef __ALT_SOCAL_NOC_FW_DDR_L3_SCR_H__
#define __ALT_SOCAL_NOC_FW_DDR_L3_SCR_H__

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
 * Component : ALT_NOC_FW_DDR_L3_SCR
 * 
 */
/*
 * Register : enable
 * 
 * Enable
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [0]    | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG0EN
 *  [1]    | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG1EN
 *  [2]    | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG2EN
 *  [3]    | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG3EN
 *  [4]    | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG4EN
 *  [5]    | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG5EN
 *  [6]    | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG6EN
 *  [7]    | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG7EN
 *  [31:8] | ???    | 0x0   | *UNDEFINED*                       
 * 
 */
/*
 * Field : hpsregion0enable
 * 
 * HPS Region 0 Enable. Value of 1 means region is enabled, Value of 0 means region
 * is disabled.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG0EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG0EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG0EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG0EN_MSB        0
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG0EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG0EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG0EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG0EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG0EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG0EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG0EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG0EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG0EN field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG0EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG0EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG0EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : hpsregion1enable
 * 
 * HPS Region 1 Enable. Value of 1 means region is enabled, Value of 0 means region
 * is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG1EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG1EN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG1EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG1EN_MSB        1
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG1EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG1EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG1EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG1EN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG1EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG1EN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG1EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG1EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG1EN field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG1EN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG1EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG1EN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : hpsregion2enable
 * 
 * HPS Region 2 Enable. Value of 1 means region is enabled, Value of 0 means region
 * is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG2EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG2EN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG2EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG2EN_MSB        2
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG2EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG2EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG2EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG2EN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG2EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG2EN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG2EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG2EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG2EN field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG2EN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG2EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG2EN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : hpsregion3enable
 * 
 * HPS Region 3 Enable. Value of 1 means region is enabled, Value of 0 means region
 * is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG3EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG3EN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG3EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG3EN_MSB        3
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG3EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG3EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG3EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG3EN_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG3EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG3EN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG3EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG3EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG3EN field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG3EN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG3EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG3EN_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : hpsregion4enable
 * 
 * HPS Region 4 Enable. Value of 1 means region is enabled, Value of 0 means region
 * is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG4EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG4EN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG4EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG4EN_MSB        4
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG4EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG4EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG4EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG4EN_SET_MSK    0x00000010
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG4EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG4EN_CLR_MSK    0xffffffef
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG4EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG4EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG4EN field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG4EN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG4EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG4EN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : hpsregion5enable
 * 
 * HPS Region 5 Enable. Value of 1 means region is enabled, Value of 0 means region
 * is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG5EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG5EN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG5EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG5EN_MSB        5
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG5EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG5EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG5EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG5EN_SET_MSK    0x00000020
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG5EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG5EN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG5EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG5EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG5EN field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG5EN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG5EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG5EN_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : hpsregion6enable
 * 
 * HPS Region 6 Enable. Value of 1 means region is enabled, Value of 0 means region
 * is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG6EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG6EN_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG6EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG6EN_MSB        6
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG6EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG6EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG6EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG6EN_SET_MSK    0x00000040
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG6EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG6EN_CLR_MSK    0xffffffbf
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG6EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG6EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG6EN field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG6EN_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG6EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG6EN_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : hpsregion7enable
 * 
 * HPS Region 7 Enable. Value of 1 means region is enabled, Value of 0 means region
 * is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG7EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG7EN_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG7EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG7EN_MSB        7
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG7EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG7EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG7EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG7EN_SET_MSK    0x00000080
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG7EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG7EN_CLR_MSK    0xffffff7f
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG7EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG7EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG7EN field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG7EN_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG7EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG7EN_SET(value) (((value) << 7) & 0x00000080)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_L3_SCR_EN.
 */
struct ALT_NOC_FW_DDR_L3_SCR_EN_s
{
    uint32_t  hpsregion0enable :  1;  /* ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG0EN */
    uint32_t  hpsregion1enable :  1;  /* ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG1EN */
    uint32_t  hpsregion2enable :  1;  /* ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG2EN */
    uint32_t  hpsregion3enable :  1;  /* ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG3EN */
    uint32_t  hpsregion4enable :  1;  /* ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG4EN */
    uint32_t  hpsregion5enable :  1;  /* ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG5EN */
    uint32_t  hpsregion6enable :  1;  /* ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG6EN */
    uint32_t  hpsregion7enable :  1;  /* ALT_NOC_FW_DDR_L3_SCR_EN_HPSREG7EN */
    uint32_t                   : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_L3_SCR_EN. */
typedef volatile struct ALT_NOC_FW_DDR_L3_SCR_EN_s  ALT_NOC_FW_DDR_L3_SCR_EN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_L3_SCR_EN register from the beginning of the component. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_OFST        0x0

/*
 * Register : enable_set
 * 
 * Sets Master Region Enable field when written with 1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [0]    | W      | 0x0   | ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG0EN
 *  [1]    | W      | 0x0   | ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG1EN
 *  [2]    | W      | 0x0   | ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG2EN
 *  [3]    | W      | 0x0   | ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG3EN
 *  [4]    | W      | 0x0   | ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG4EN
 *  [5]    | W      | 0x0   | ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG5EN
 *  [6]    | W      | 0x0   | ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG6EN
 *  [7]    | W      | 0x0   | ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG7EN
 *  [31:8] | ???    | 0x0   | *UNDEFINED*                           
 * 
 */
/*
 * Field : hpsregion0enable
 * 
 * HPS Region 0 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the hpsregion0enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG0EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG0EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG0EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG0EN_MSB        0
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG0EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG0EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG0EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG0EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG0EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG0EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG0EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG0EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG0EN field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG0EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG0EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG0EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : hpsregion1enable
 * 
 * HPS Region 0 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the hpsregion1enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG1EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG1EN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG1EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG1EN_MSB        1
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG1EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG1EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG1EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG1EN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG1EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG1EN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG1EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG1EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG1EN field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG1EN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG1EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG1EN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : hpsregion2enable
 * 
 * HPS Region 0 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the hpsregion2enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG2EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG2EN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG2EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG2EN_MSB        2
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG2EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG2EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG2EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG2EN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG2EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG2EN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG2EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG2EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG2EN field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG2EN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG2EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG2EN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : hpsregion3enable
 * 
 * HPS Region 0 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the hpsregion3enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG3EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG3EN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG3EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG3EN_MSB        3
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG3EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG3EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG3EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG3EN_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG3EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG3EN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG3EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG3EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG3EN field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG3EN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG3EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG3EN_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : hpsregion4enable
 * 
 * HPS Region 0 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the hpsregion4enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG4EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG4EN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG4EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG4EN_MSB        4
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG4EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG4EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG4EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG4EN_SET_MSK    0x00000010
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG4EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG4EN_CLR_MSK    0xffffffef
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG4EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG4EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG4EN field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG4EN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG4EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG4EN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : hpsregion5enable
 * 
 * HPS Region 0 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the hpsregion5enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG5EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG5EN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG5EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG5EN_MSB        5
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG5EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG5EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG5EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG5EN_SET_MSK    0x00000020
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG5EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG5EN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG5EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG5EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG5EN field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG5EN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG5EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG5EN_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : hpsregion6enable
 * 
 * HPS Region 0 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the hpsregion6enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG6EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG6EN_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG6EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG6EN_MSB        6
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG6EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG6EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG6EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG6EN_SET_MSK    0x00000040
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG6EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG6EN_CLR_MSK    0xffffffbf
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG6EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG6EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG6EN field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG6EN_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG6EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG6EN_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : hpsregion7enable
 * 
 * HPS Region 0 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the hpsregion7enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG7EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG7EN_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG7EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG7EN_MSB        7
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG7EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG7EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG7EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG7EN_SET_MSK    0x00000080
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG7EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG7EN_CLR_MSK    0xffffff7f
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG7EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG7EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG7EN field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG7EN_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG7EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG7EN_SET(value) (((value) << 7) & 0x00000080)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_L3_SCR_EN_SET.
 */
struct ALT_NOC_FW_DDR_L3_SCR_EN_SET_s
{
    uint32_t  hpsregion0enable :  1;  /* ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG0EN */
    uint32_t  hpsregion1enable :  1;  /* ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG1EN */
    uint32_t  hpsregion2enable :  1;  /* ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG2EN */
    uint32_t  hpsregion3enable :  1;  /* ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG3EN */
    uint32_t  hpsregion4enable :  1;  /* ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG4EN */
    uint32_t  hpsregion5enable :  1;  /* ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG5EN */
    uint32_t  hpsregion6enable :  1;  /* ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG6EN */
    uint32_t  hpsregion7enable :  1;  /* ALT_NOC_FW_DDR_L3_SCR_EN_SET_HPSREG7EN */
    uint32_t                   : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_L3_SCR_EN_SET. */
typedef volatile struct ALT_NOC_FW_DDR_L3_SCR_EN_SET_s  ALT_NOC_FW_DDR_L3_SCR_EN_SET_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_SET register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_L3_SCR_EN_SET register from the beginning of the component. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_SET_OFST        0x4

/*
 * Register : enable_clear
 * 
 * Clears Master Region Enable field when written with 1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [0]    | W      | 0x0   | ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG0EN
 *  [1]    | W      | 0x0   | ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG1EN
 *  [2]    | W      | 0x0   | ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG2EN
 *  [3]    | W      | 0x0   | ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG3EN
 *  [4]    | W      | 0x0   | ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG4EN
 *  [5]    | W      | 0x0   | ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG5EN
 *  [6]    | W      | 0x0   | ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG6EN
 *  [7]    | W      | 0x0   | ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG7EN
 *  [31:8] | ???    | 0x0   | *UNDEFINED*                           
 * 
 */
/*
 * Field : hpsregion0enable
 * 
 * HPS Region 0 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the hpsregion0enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG0EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG0EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG0EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG0EN_MSB        0
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG0EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG0EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG0EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG0EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG0EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG0EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG0EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG0EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG0EN field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG0EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG0EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG0EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : hpsregion1enable
 * 
 * HPS Region 0 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the hpsregion1enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG1EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG1EN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG1EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG1EN_MSB        1
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG1EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG1EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG1EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG1EN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG1EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG1EN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG1EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG1EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG1EN field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG1EN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG1EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG1EN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : hpsregion2enable
 * 
 * HPS Region 0 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the hpsregion2enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG2EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG2EN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG2EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG2EN_MSB        2
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG2EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG2EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG2EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG2EN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG2EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG2EN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG2EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG2EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG2EN field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG2EN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG2EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG2EN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : hpsregion3enable
 * 
 * HPS Region 0 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the hpsregion3enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG3EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG3EN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG3EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG3EN_MSB        3
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG3EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG3EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG3EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG3EN_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG3EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG3EN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG3EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG3EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG3EN field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG3EN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG3EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG3EN_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : hpsregion4enable
 * 
 * HPS Region 0 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the hpsregion4enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG4EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG4EN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG4EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG4EN_MSB        4
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG4EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG4EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG4EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG4EN_SET_MSK    0x00000010
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG4EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG4EN_CLR_MSK    0xffffffef
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG4EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG4EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG4EN field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG4EN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG4EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG4EN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : hpsregion5enable
 * 
 * HPS Region 0 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the hpsregion5enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG5EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG5EN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG5EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG5EN_MSB        5
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG5EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG5EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG5EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG5EN_SET_MSK    0x00000020
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG5EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG5EN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG5EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG5EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG5EN field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG5EN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG5EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG5EN_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : hpsregion6enable
 * 
 * HPS Region 0 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the hpsregion6enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG6EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG6EN_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG6EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG6EN_MSB        6
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG6EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG6EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG6EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG6EN_SET_MSK    0x00000040
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG6EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG6EN_CLR_MSK    0xffffffbf
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG6EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG6EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG6EN field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG6EN_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG6EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG6EN_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : hpsregion7enable
 * 
 * HPS Region 0 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the hpsregion7enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG7EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG7EN_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG7EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG7EN_MSB        7
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG7EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG7EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG7EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG7EN_SET_MSK    0x00000080
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG7EN register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG7EN_CLR_MSK    0xffffff7f
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG7EN register field. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG7EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG7EN field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG7EN_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG7EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG7EN_SET(value) (((value) << 7) & 0x00000080)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_L3_SCR_EN_CLR.
 */
struct ALT_NOC_FW_DDR_L3_SCR_EN_CLR_s
{
    uint32_t  hpsregion0enable :  1;  /* ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG0EN */
    uint32_t  hpsregion1enable :  1;  /* ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG1EN */
    uint32_t  hpsregion2enable :  1;  /* ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG2EN */
    uint32_t  hpsregion3enable :  1;  /* ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG3EN */
    uint32_t  hpsregion4enable :  1;  /* ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG4EN */
    uint32_t  hpsregion5enable :  1;  /* ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG5EN */
    uint32_t  hpsregion6enable :  1;  /* ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG6EN */
    uint32_t  hpsregion7enable :  1;  /* ALT_NOC_FW_DDR_L3_SCR_EN_CLR_HPSREG7EN */
    uint32_t                   : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_L3_SCR_EN_CLR. */
typedef volatile struct ALT_NOC_FW_DDR_L3_SCR_EN_CLR_s  ALT_NOC_FW_DDR_L3_SCR_EN_CLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR register. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_L3_SCR_EN_CLR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_L3_SCR_EN_CLR_OFST        0x8

/*
 * Register : hpsregion0addr
 * 
 * Base and Limit definition for HPS Region 0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                            
 * :--------|:-------|:------|:----------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_BASE 
 *  [31:16] | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_LIMIT
 * 
 */
/*
 * Field : base
 * 
 * Base defines the 16 bit MSB of the address field. Remaining LSB field is all
 * zeros. Region start address is {base, 16'h000}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_BASE_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_BASE_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_BASE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_BASE_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_BASE field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_BASE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_BASE_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : limit
 * 
 * Limit defines the 16 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 16'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_LIMIT_MSB        31
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_LIMIT_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_LIMIT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_LIMIT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_LIMIT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_LIMIT_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR.
 */
struct ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_s
{
    uint32_t  base  : 16;  /* ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_BASE */
    uint32_t  limit : 16;  /* ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_LIMIT */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR. */
typedef volatile struct ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_s  ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_OFST        0xc

/*
 * Register : hpsregion1addr
 * 
 * Base and Limit definition for HPS Region 1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                            
 * :--------|:-------|:------|:----------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_BASE 
 *  [31:16] | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_LIMIT
 * 
 */
/*
 * Field : base
 * 
 * Base defines the 16 bit MSB of the address field. Remaining LSB field is all
 * zeros. Region start address is {base, 16'h000}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_BASE_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_BASE_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_BASE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_BASE_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_BASE field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_BASE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_BASE_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : limit
 * 
 * Limit defines the 16 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 16'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_LIMIT_MSB        31
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_LIMIT_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_LIMIT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_LIMIT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_LIMIT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_LIMIT_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR.
 */
struct ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_s
{
    uint32_t  base  : 16;  /* ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_BASE */
    uint32_t  limit : 16;  /* ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_LIMIT */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR. */
typedef volatile struct ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_s  ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_OFST        0x10

/*
 * Register : hpsregion2addr
 * 
 * Base and Limit definition for HPS Region 2
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                            
 * :--------|:-------|:------|:----------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_BASE 
 *  [31:16] | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_LIMIT
 * 
 */
/*
 * Field : base
 * 
 * Base defines the 16 bit MSB of the address field. Remaining LSB field is all
 * zeros. Region start address is {base, 16'h000}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_BASE_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_BASE_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_BASE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_BASE_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_BASE field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_BASE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_BASE_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : limit
 * 
 * Limit defines the 16 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 16'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_LIMIT_MSB        31
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_LIMIT_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_LIMIT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_LIMIT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_LIMIT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_LIMIT_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR.
 */
struct ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_s
{
    uint32_t  base  : 16;  /* ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_BASE */
    uint32_t  limit : 16;  /* ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_LIMIT */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR. */
typedef volatile struct ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_s  ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_OFST        0x14

/*
 * Register : hpsregion3addr
 * 
 * Base and Limit definition for HPS Region 3
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                            
 * :--------|:-------|:------|:----------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_BASE 
 *  [31:16] | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_LIMIT
 * 
 */
/*
 * Field : base
 * 
 * Base defines the 16 bit MSB of the address field. Remaining LSB field is all
 * zeros. Region start address is {base, 16'h000}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_BASE_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_BASE_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_BASE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_BASE_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_BASE field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_BASE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_BASE_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : limit
 * 
 * Limit defines the 16 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 16'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_LIMIT_MSB        31
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_LIMIT_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_LIMIT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_LIMIT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_LIMIT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_LIMIT_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR.
 */
struct ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_s
{
    uint32_t  base  : 16;  /* ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_BASE */
    uint32_t  limit : 16;  /* ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_LIMIT */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR. */
typedef volatile struct ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_s  ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_OFST        0x18

/*
 * Register : hpsregion4addr
 * 
 * Base and Limit definition for HPS Region 4
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                            
 * :--------|:-------|:------|:----------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_BASE 
 *  [31:16] | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_LIMIT
 * 
 */
/*
 * Field : base
 * 
 * Base defines the 16 bit MSB of the address field. Remaining LSB field is all
 * zeros. Region start address is {base, 16'h000}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_BASE_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_BASE_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_BASE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_BASE_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_BASE field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_BASE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_BASE_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : limit
 * 
 * Limit defines the 16 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 16'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_LIMIT_MSB        31
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_LIMIT_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_LIMIT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_LIMIT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_LIMIT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_LIMIT_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR.
 */
struct ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_s
{
    uint32_t  base  : 16;  /* ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_BASE */
    uint32_t  limit : 16;  /* ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_LIMIT */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR. */
typedef volatile struct ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_s  ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_OFST        0x1c

/*
 * Register : hpsregion5addr
 * 
 * Base and Limit definition for HPS Region 5
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                            
 * :--------|:-------|:------|:----------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_BASE 
 *  [31:16] | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_LIMIT
 * 
 */
/*
 * Field : base
 * 
 * Base defines the 16 bit MSB of the address field. Remaining LSB field is all
 * zeros. Region start address is {base, 16'h000}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_BASE_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_BASE_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_BASE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_BASE_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_BASE field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_BASE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_BASE_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : limit
 * 
 * Limit defines the 16 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 16'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_LIMIT_MSB        31
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_LIMIT_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_LIMIT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_LIMIT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_LIMIT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_LIMIT_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR.
 */
struct ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_s
{
    uint32_t  base  : 16;  /* ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_BASE */
    uint32_t  limit : 16;  /* ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_LIMIT */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR. */
typedef volatile struct ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_s  ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_OFST        0x20

/*
 * Register : hpsregion6addr
 * 
 * Base and Limit definition for HPS Region 6
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                            
 * :--------|:-------|:------|:----------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_BASE 
 *  [31:16] | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_LIMIT
 * 
 */
/*
 * Field : base
 * 
 * Base defines the 16 bit MSB of the address field. Remaining LSB field is all
 * zeros. Region start address is {base, 16'h000}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_BASE_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_BASE_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_BASE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_BASE_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_BASE field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_BASE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_BASE_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : limit
 * 
 * Limit defines the 16 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 16'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_LIMIT_MSB        31
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_LIMIT_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_LIMIT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_LIMIT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_LIMIT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_LIMIT_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR.
 */
struct ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_s
{
    uint32_t  base  : 16;  /* ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_BASE */
    uint32_t  limit : 16;  /* ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_LIMIT */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR. */
typedef volatile struct ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_s  ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_OFST        0x24

/*
 * Register : hpsregion7addr
 * 
 * Base and Limit definition for HPS Region 7
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                            
 * :--------|:-------|:------|:----------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_BASE 
 *  [31:16] | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_LIMIT
 * 
 */
/*
 * Field : base
 * 
 * Base defines the 16 bit MSB of the address field. Remaining LSB field is all
 * zeros. Region start address is {base, 16'h000}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_BASE_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_BASE_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_BASE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_BASE_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_BASE field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_BASE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_BASE_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : limit
 * 
 * Limit defines the 16 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 16'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_LIMIT_MSB        31
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_LIMIT_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_LIMIT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_LIMIT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_LIMIT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_LIMIT_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR.
 */
struct ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_s
{
    uint32_t  base  : 16;  /* ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_BASE */
    uint32_t  limit : 16;  /* ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_LIMIT */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR. */
typedef volatile struct ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_s  ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR register. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_OFST        0x28

/*
 * Register : global
 * 
 * Global Firewall Control Register. This register will store various overrides
 * that change default firewall behavior on the entire interconnect.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                              
 * :-------|:-------|:------|:------------------------------------------
 *  [0]    | RW     | 0x0   | ALT_NOC_FW_DDR_L3_SCR_GLOB_ERROR_RESPONSE
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                              
 * 
 */
/*
 * Field : error_response
 * 
 * When 0, transactions blocked by the firewall will silently fail (i.e successful
 * completion with random data). When 1, transactions blocked by the firewall will
 * return error
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_L3_SCR_GLOB_ERROR_RESPONSE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_GLOB_ERROR_RESPONSE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_L3_SCR_GLOB_ERROR_RESPONSE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_GLOB_ERROR_RESPONSE_MSB        0
/* The width in bits of the ALT_NOC_FW_DDR_L3_SCR_GLOB_ERROR_RESPONSE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_GLOB_ERROR_RESPONSE_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_L3_SCR_GLOB_ERROR_RESPONSE register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_GLOB_ERROR_RESPONSE_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_DDR_L3_SCR_GLOB_ERROR_RESPONSE register field value. */
#define ALT_NOC_FW_DDR_L3_SCR_GLOB_ERROR_RESPONSE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_GLOB_ERROR_RESPONSE register field. */
#define ALT_NOC_FW_DDR_L3_SCR_GLOB_ERROR_RESPONSE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_L3_SCR_GLOB_ERROR_RESPONSE field value from a register. */
#define ALT_NOC_FW_DDR_L3_SCR_GLOB_ERROR_RESPONSE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_DDR_L3_SCR_GLOB_ERROR_RESPONSE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_L3_SCR_GLOB_ERROR_RESPONSE_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_L3_SCR_GLOB.
 */
struct ALT_NOC_FW_DDR_L3_SCR_GLOB_s
{
    uint32_t  error_response :  1;  /* ALT_NOC_FW_DDR_L3_SCR_GLOB_ERROR_RESPONSE */
    uint32_t                 : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_L3_SCR_GLOB. */
typedef volatile struct ALT_NOC_FW_DDR_L3_SCR_GLOB_s  ALT_NOC_FW_DDR_L3_SCR_GLOB_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_L3_SCR_GLOB register. */
#define ALT_NOC_FW_DDR_L3_SCR_GLOB_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_L3_SCR_GLOB register from the beginning of the component. */
#define ALT_NOC_FW_DDR_L3_SCR_GLOB_OFST        0x2c

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_NOC_FW_DDR_L3_SCR.
 */
struct ALT_NOC_FW_DDR_L3_SCR_s
{
    ALT_NOC_FW_DDR_L3_SCR_EN_t           enable;               /* ALT_NOC_FW_DDR_L3_SCR_EN */
    ALT_NOC_FW_DDR_L3_SCR_EN_SET_t       enable_set;           /* ALT_NOC_FW_DDR_L3_SCR_EN_SET */
    ALT_NOC_FW_DDR_L3_SCR_EN_CLR_t       enable_clear;         /* ALT_NOC_FW_DDR_L3_SCR_EN_CLR */
    ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR_t  hpsregion0addr;       /* ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR */
    ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR_t  hpsregion1addr;       /* ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR */
    ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR_t  hpsregion2addr;       /* ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR */
    ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR_t  hpsregion3addr;       /* ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR */
    ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR_t  hpsregion4addr;       /* ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR */
    ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR_t  hpsregion5addr;       /* ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR */
    ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR_t  hpsregion6addr;       /* ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR */
    ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR_t  hpsregion7addr;       /* ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR */
    ALT_NOC_FW_DDR_L3_SCR_GLOB_t         global;               /* ALT_NOC_FW_DDR_L3_SCR_GLOB */
    volatile uint32_t                    _pad_0x30_0x100[52];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_FW_DDR_L3_SCR. */
typedef volatile struct ALT_NOC_FW_DDR_L3_SCR_s  ALT_NOC_FW_DDR_L3_SCR_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_FW_DDR_L3_SCR. */
struct ALT_NOC_FW_DDR_L3_SCR_raw_s
{
    volatile uint32_t  enable;               /* ALT_NOC_FW_DDR_L3_SCR_EN */
    volatile uint32_t  enable_set;           /* ALT_NOC_FW_DDR_L3_SCR_EN_SET */
    volatile uint32_t  enable_clear;         /* ALT_NOC_FW_DDR_L3_SCR_EN_CLR */
    volatile uint32_t  hpsregion0addr;       /* ALT_NOC_FW_DDR_L3_SCR_HPSREG0ADDR */
    volatile uint32_t  hpsregion1addr;       /* ALT_NOC_FW_DDR_L3_SCR_HPSREG1ADDR */
    volatile uint32_t  hpsregion2addr;       /* ALT_NOC_FW_DDR_L3_SCR_HPSREG2ADDR */
    volatile uint32_t  hpsregion3addr;       /* ALT_NOC_FW_DDR_L3_SCR_HPSREG3ADDR */
    volatile uint32_t  hpsregion4addr;       /* ALT_NOC_FW_DDR_L3_SCR_HPSREG4ADDR */
    volatile uint32_t  hpsregion5addr;       /* ALT_NOC_FW_DDR_L3_SCR_HPSREG5ADDR */
    volatile uint32_t  hpsregion6addr;       /* ALT_NOC_FW_DDR_L3_SCR_HPSREG6ADDR */
    volatile uint32_t  hpsregion7addr;       /* ALT_NOC_FW_DDR_L3_SCR_HPSREG7ADDR */
    volatile uint32_t  global;               /* ALT_NOC_FW_DDR_L3_SCR_GLOB */
    uint32_t           _pad_0x30_0x100[52];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_FW_DDR_L3_SCR. */
typedef volatile struct ALT_NOC_FW_DDR_L3_SCR_raw_s  ALT_NOC_FW_DDR_L3_SCR_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_NOC_FW_DDR_L3_SCR_H__ */

