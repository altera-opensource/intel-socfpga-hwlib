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

/* Altera - ALT_NOC_FW_OCRAM_SCR */

#ifndef __ALT_SOCAL_NOC_FW_OCRAM_SCR_H__
#define __ALT_SOCAL_NOC_FW_OCRAM_SCR_H__

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
 * Component : ALT_NOC_FW_OCRAM_SCR
 * 
 */
/*
 * Register : enable
 * 
 * Enable
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                   
 * :-------|:-------|:--------|:-------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_FW_OCRAM_SCR_EN_REG0EN
 *  [1]    | RW     | 0x0     | ALT_NOC_FW_OCRAM_SCR_EN_REG1EN
 *  [2]    | RW     | 0x0     | ALT_NOC_FW_OCRAM_SCR_EN_REG2EN
 *  [3]    | RW     | 0x0     | ALT_NOC_FW_OCRAM_SCR_EN_REG3EN
 *  [4]    | RW     | 0x0     | ALT_NOC_FW_OCRAM_SCR_EN_REG4EN
 *  [5]    | RW     | 0x0     | ALT_NOC_FW_OCRAM_SCR_EN_REG5EN
 *  [31:6] | ???    | Unknown | *UNDEFINED*                   
 * 
 */
/*
 * Field : region0enable
 * 
 * Region 0 Enable. Value of 1 means region is enabled, Value of 0 means region is
 * disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_REG0EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG0EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_REG0EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG0EN_MSB        0
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_EN_REG0EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG0EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_EN_REG0EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG0EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_EN_REG0EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG0EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_EN_REG0EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG0EN_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_EN_REG0EN field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG0EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_OCRAM_SCR_EN_REG0EN register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG0EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : region1enable
 * 
 * Region 1 Enable. Value of 1 means region is enabled, Value of 0 means region is
 * disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_REG1EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG1EN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_REG1EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG1EN_MSB        1
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_EN_REG1EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG1EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_EN_REG1EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG1EN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_EN_REG1EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG1EN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_EN_REG1EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG1EN_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_EN_REG1EN field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG1EN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_FW_OCRAM_SCR_EN_REG1EN register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG1EN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : region2enable
 * 
 * Region 2 Enable. Value of 1 means region is enabled, Value of 0 means region is
 * disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_REG2EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG2EN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_REG2EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG2EN_MSB        2
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_EN_REG2EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG2EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_EN_REG2EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG2EN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_EN_REG2EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG2EN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_EN_REG2EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG2EN_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_EN_REG2EN field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG2EN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_FW_OCRAM_SCR_EN_REG2EN register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG2EN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : region3enable
 * 
 * Region 3 Enable. Value of 1 means region is enabled, Value of 0 means region is
 * disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_REG3EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG3EN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_REG3EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG3EN_MSB        3
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_EN_REG3EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG3EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_EN_REG3EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG3EN_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_EN_REG3EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG3EN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_EN_REG3EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG3EN_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_EN_REG3EN field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG3EN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_FW_OCRAM_SCR_EN_REG3EN register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG3EN_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : region4enable
 * 
 * Region 4 Enable. Value of 1 means region is enabled, Value of 0 means region is
 * disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_REG4EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG4EN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_REG4EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG4EN_MSB        4
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_EN_REG4EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG4EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_EN_REG4EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG4EN_SET_MSK    0x00000010
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_EN_REG4EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG4EN_CLR_MSK    0xffffffef
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_EN_REG4EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG4EN_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_EN_REG4EN field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG4EN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_NOC_FW_OCRAM_SCR_EN_REG4EN register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG4EN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : region5enable
 * 
 * Region 5 Enable. Value of 1 means region is enabled, Value of 0 means region is
 * disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_REG5EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG5EN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_REG5EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG5EN_MSB        5
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_EN_REG5EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG5EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_EN_REG5EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG5EN_SET_MSK    0x00000020
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_EN_REG5EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG5EN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_EN_REG5EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG5EN_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_EN_REG5EN field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG5EN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_NOC_FW_OCRAM_SCR_EN_REG5EN register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_REG5EN_SET(value) (((value) << 5) & 0x00000020)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_OCRAM_SCR_EN.
 */
struct ALT_NOC_FW_OCRAM_SCR_EN_s
{
    uint32_t  region0enable :  1;  /* ALT_NOC_FW_OCRAM_SCR_EN_REG0EN */
    uint32_t  region1enable :  1;  /* ALT_NOC_FW_OCRAM_SCR_EN_REG1EN */
    uint32_t  region2enable :  1;  /* ALT_NOC_FW_OCRAM_SCR_EN_REG2EN */
    uint32_t  region3enable :  1;  /* ALT_NOC_FW_OCRAM_SCR_EN_REG3EN */
    uint32_t  region4enable :  1;  /* ALT_NOC_FW_OCRAM_SCR_EN_REG4EN */
    uint32_t  region5enable :  1;  /* ALT_NOC_FW_OCRAM_SCR_EN_REG5EN */
    uint32_t                : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_OCRAM_SCR_EN. */
typedef volatile struct ALT_NOC_FW_OCRAM_SCR_EN_s  ALT_NOC_FW_OCRAM_SCR_EN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_OCRAM_SCR_EN register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_OCRAM_SCR_EN register from the beginning of the component. */
#define ALT_NOC_FW_OCRAM_SCR_EN_OFST        0x0

/*
 * Register : enable_set
 * 
 * Sets Region Enable field when written with 1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                       
 * :-------|:-------|:--------|:-----------------------------------
 *  [0]    | W      | 0x0     | ALT_NOC_FW_OCRAM_SCR_EN_SET_REG0EN
 *  [1]    | W      | 0x0     | ALT_NOC_FW_OCRAM_SCR_EN_SET_REG1EN
 *  [2]    | W      | 0x0     | ALT_NOC_FW_OCRAM_SCR_EN_SET_REG2EN
 *  [3]    | W      | 0x0     | ALT_NOC_FW_OCRAM_SCR_EN_SET_REG3EN
 *  [4]    | W      | 0x0     | ALT_NOC_FW_OCRAM_SCR_EN_SET_REG4EN
 *  [5]    | W      | 0x0     | ALT_NOC_FW_OCRAM_SCR_EN_SET_REG5EN
 *  [31:6] | ???    | Unknown | *UNDEFINED*                       
 * 
 */
/*
 * Field : region0enable
 * 
 * Region 0 Enable Set
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region0enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG0EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG0EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG0EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG0EN_MSB        0
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG0EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG0EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG0EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG0EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG0EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG0EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG0EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG0EN_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG0EN field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG0EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_OCRAM_SCR_EN_SET_REG0EN register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG0EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : region1enable
 * 
 * Region 1 Enable Set
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region1enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG1EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG1EN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG1EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG1EN_MSB        1
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG1EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG1EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG1EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG1EN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG1EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG1EN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG1EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG1EN_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG1EN field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG1EN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_FW_OCRAM_SCR_EN_SET_REG1EN register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG1EN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : region2enable
 * 
 * Region 2 Enable Set
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region2enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG2EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG2EN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG2EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG2EN_MSB        2
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG2EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG2EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG2EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG2EN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG2EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG2EN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG2EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG2EN_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG2EN field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG2EN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_FW_OCRAM_SCR_EN_SET_REG2EN register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG2EN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : region3enable
 * 
 * Region 3 Enable Set
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region3enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG3EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG3EN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG3EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG3EN_MSB        3
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG3EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG3EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG3EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG3EN_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG3EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG3EN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG3EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG3EN_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG3EN field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG3EN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_FW_OCRAM_SCR_EN_SET_REG3EN register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG3EN_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : region4enable
 * 
 * Region 4 Enable Set
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region4enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG4EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG4EN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG4EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG4EN_MSB        4
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG4EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG4EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG4EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG4EN_SET_MSK    0x00000010
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG4EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG4EN_CLR_MSK    0xffffffef
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG4EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG4EN_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG4EN field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG4EN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_NOC_FW_OCRAM_SCR_EN_SET_REG4EN register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG4EN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : region5enable
 * 
 * Region 5 Enable Set
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region5enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG5EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG5EN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG5EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG5EN_MSB        5
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG5EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG5EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG5EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG5EN_SET_MSK    0x00000020
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG5EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG5EN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG5EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG5EN_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_EN_SET_REG5EN field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG5EN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_NOC_FW_OCRAM_SCR_EN_SET_REG5EN register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_REG5EN_SET(value) (((value) << 5) & 0x00000020)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_OCRAM_SCR_EN_SET.
 */
struct ALT_NOC_FW_OCRAM_SCR_EN_SET_s
{
    uint32_t  region0enable :  1;  /* ALT_NOC_FW_OCRAM_SCR_EN_SET_REG0EN */
    uint32_t  region1enable :  1;  /* ALT_NOC_FW_OCRAM_SCR_EN_SET_REG1EN */
    uint32_t  region2enable :  1;  /* ALT_NOC_FW_OCRAM_SCR_EN_SET_REG2EN */
    uint32_t  region3enable :  1;  /* ALT_NOC_FW_OCRAM_SCR_EN_SET_REG3EN */
    uint32_t  region4enable :  1;  /* ALT_NOC_FW_OCRAM_SCR_EN_SET_REG4EN */
    uint32_t  region5enable :  1;  /* ALT_NOC_FW_OCRAM_SCR_EN_SET_REG5EN */
    uint32_t                : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_OCRAM_SCR_EN_SET. */
typedef volatile struct ALT_NOC_FW_OCRAM_SCR_EN_SET_s  ALT_NOC_FW_OCRAM_SCR_EN_SET_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_OCRAM_SCR_EN_SET register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_OCRAM_SCR_EN_SET register from the beginning of the component. */
#define ALT_NOC_FW_OCRAM_SCR_EN_SET_OFST        0x4

/*
 * Register : enable_clear
 * 
 * Clears Region Enable field when written with 1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                       
 * :-------|:-------|:--------|:-----------------------------------
 *  [0]    | W      | 0x0     | ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG0EN
 *  [1]    | W      | 0x0     | ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG1EN
 *  [2]    | W      | 0x0     | ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG2EN
 *  [3]    | W      | 0x0     | ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG3EN
 *  [4]    | W      | 0x0     | ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG4EN
 *  [5]    | W      | 0x0     | ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG5EN
 *  [31:6] | ???    | Unknown | *UNDEFINED*                       
 * 
 */
/*
 * Field : region0enable
 * 
 * Region 0 Enable Clear
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region0enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG0EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG0EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG0EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG0EN_MSB        0
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG0EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG0EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG0EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG0EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG0EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG0EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG0EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG0EN_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG0EN field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG0EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG0EN register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG0EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : region1enable
 * 
 * Region 1 Enable Clear
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region1enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG1EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG1EN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG1EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG1EN_MSB        1
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG1EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG1EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG1EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG1EN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG1EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG1EN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG1EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG1EN_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG1EN field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG1EN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG1EN register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG1EN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : region2enable
 * 
 * Region 2 Enable Clear
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region2enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG2EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG2EN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG2EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG2EN_MSB        2
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG2EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG2EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG2EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG2EN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG2EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG2EN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG2EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG2EN_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG2EN field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG2EN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG2EN register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG2EN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : region3enable
 * 
 * Region 3 Enable Clear
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region3enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG3EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG3EN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG3EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG3EN_MSB        3
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG3EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG3EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG3EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG3EN_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG3EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG3EN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG3EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG3EN_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG3EN field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG3EN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG3EN register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG3EN_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : region4enable
 * 
 * Region 4 Enable Clear
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region4enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG4EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG4EN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG4EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG4EN_MSB        4
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG4EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG4EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG4EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG4EN_SET_MSK    0x00000010
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG4EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG4EN_CLR_MSK    0xffffffef
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG4EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG4EN_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG4EN field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG4EN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG4EN register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG4EN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : region5enable
 * 
 * Region 5 Enable Clear
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region5enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG5EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG5EN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG5EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG5EN_MSB        5
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG5EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG5EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG5EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG5EN_SET_MSK    0x00000020
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG5EN register field value. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG5EN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG5EN register field. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG5EN_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG5EN field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG5EN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG5EN register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG5EN_SET(value) (((value) << 5) & 0x00000020)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_OCRAM_SCR_EN_CLR.
 */
struct ALT_NOC_FW_OCRAM_SCR_EN_CLR_s
{
    uint32_t  region0enable :  1;  /* ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG0EN */
    uint32_t  region1enable :  1;  /* ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG1EN */
    uint32_t  region2enable :  1;  /* ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG2EN */
    uint32_t  region3enable :  1;  /* ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG3EN */
    uint32_t  region4enable :  1;  /* ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG4EN */
    uint32_t  region5enable :  1;  /* ALT_NOC_FW_OCRAM_SCR_EN_CLR_REG5EN */
    uint32_t                : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_OCRAM_SCR_EN_CLR. */
typedef volatile struct ALT_NOC_FW_OCRAM_SCR_EN_CLR_s  ALT_NOC_FW_OCRAM_SCR_EN_CLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_OCRAM_SCR_EN_CLR register. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_OCRAM_SCR_EN_CLR register from the beginning of the component. */
#define ALT_NOC_FW_OCRAM_SCR_EN_CLR_OFST        0x8

/*
 * Register : region0addr
 * 
 * Base and Limit definition for Region 0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                        
 * :--------|:-------|:--------|:------------------------------------
 *  [5:0]   | RW     | 0x0     | ALT_NOC_FW_OCRAM_SCR_REG0ADDR_BASE 
 *  [15:6]  | ???    | Unknown | *UNDEFINED*                        
 *  [21:16] | RW     | 0x0     | ALT_NOC_FW_OCRAM_SCR_REG0ADDR_LIMIT
 *  [31:22] | ???    | Unknown | *UNDEFINED*                        
 * 
 */
/*
 * Field : base
 * 
 * Base defines the 6 bit MSB of the address field. Remaining LSB field is all
 * zeros. Region start address is {base, 12'h000}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_REG0ADDR_BASE register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG0ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_REG0ADDR_BASE register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG0ADDR_BASE_MSB        5
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_REG0ADDR_BASE register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG0ADDR_BASE_WIDTH      6
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_REG0ADDR_BASE register field value. */
#define ALT_NOC_FW_OCRAM_SCR_REG0ADDR_BASE_SET_MSK    0x0000003f
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_REG0ADDR_BASE register field value. */
#define ALT_NOC_FW_OCRAM_SCR_REG0ADDR_BASE_CLR_MSK    0xffffffc0
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_REG0ADDR_BASE register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG0ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_REG0ADDR_BASE field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_REG0ADDR_BASE_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_NOC_FW_OCRAM_SCR_REG0ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_REG0ADDR_BASE_SET(value) (((value) << 0) & 0x0000003f)

/*
 * Field : limit
 * 
 * Limit defines the 6 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 12'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_REG0ADDR_LIMIT register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG0ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_REG0ADDR_LIMIT register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG0ADDR_LIMIT_MSB        21
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_REG0ADDR_LIMIT register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG0ADDR_LIMIT_WIDTH      6
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_REG0ADDR_LIMIT register field value. */
#define ALT_NOC_FW_OCRAM_SCR_REG0ADDR_LIMIT_SET_MSK    0x003f0000
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_REG0ADDR_LIMIT register field value. */
#define ALT_NOC_FW_OCRAM_SCR_REG0ADDR_LIMIT_CLR_MSK    0xffc0ffff
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_REG0ADDR_LIMIT register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG0ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_REG0ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_REG0ADDR_LIMIT_GET(value) (((value) & 0x003f0000) >> 16)
/* Produces a ALT_NOC_FW_OCRAM_SCR_REG0ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_REG0ADDR_LIMIT_SET(value) (((value) << 16) & 0x003f0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_OCRAM_SCR_REG0ADDR.
 */
struct ALT_NOC_FW_OCRAM_SCR_REG0ADDR_s
{
    uint32_t  base  :  6;  /* ALT_NOC_FW_OCRAM_SCR_REG0ADDR_BASE */
    uint32_t        : 10;  /* *UNDEFINED* */
    uint32_t  limit :  6;  /* ALT_NOC_FW_OCRAM_SCR_REG0ADDR_LIMIT */
    uint32_t        : 10;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_OCRAM_SCR_REG0ADDR. */
typedef volatile struct ALT_NOC_FW_OCRAM_SCR_REG0ADDR_s  ALT_NOC_FW_OCRAM_SCR_REG0ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_OCRAM_SCR_REG0ADDR register. */
#define ALT_NOC_FW_OCRAM_SCR_REG0ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_OCRAM_SCR_REG0ADDR register from the beginning of the component. */
#define ALT_NOC_FW_OCRAM_SCR_REG0ADDR_OFST        0xc

/*
 * Register : region1addr
 * 
 * Base and Limit definition for Region 1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                        
 * :--------|:-------|:--------|:------------------------------------
 *  [5:0]   | RW     | 0x0     | ALT_NOC_FW_OCRAM_SCR_REG1ADDR_BASE 
 *  [15:6]  | ???    | Unknown | *UNDEFINED*                        
 *  [21:16] | RW     | 0x0     | ALT_NOC_FW_OCRAM_SCR_REG1ADDR_LIMIT
 *  [31:22] | ???    | Unknown | *UNDEFINED*                        
 * 
 */
/*
 * Field : base
 * 
 * Base defines the 6 bit MSB of the address field. Remaining LSB field is all
 * zeros. Region start address is {base, 12'h000}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_REG1ADDR_BASE register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG1ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_REG1ADDR_BASE register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG1ADDR_BASE_MSB        5
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_REG1ADDR_BASE register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG1ADDR_BASE_WIDTH      6
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_REG1ADDR_BASE register field value. */
#define ALT_NOC_FW_OCRAM_SCR_REG1ADDR_BASE_SET_MSK    0x0000003f
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_REG1ADDR_BASE register field value. */
#define ALT_NOC_FW_OCRAM_SCR_REG1ADDR_BASE_CLR_MSK    0xffffffc0
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_REG1ADDR_BASE register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG1ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_REG1ADDR_BASE field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_REG1ADDR_BASE_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_NOC_FW_OCRAM_SCR_REG1ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_REG1ADDR_BASE_SET(value) (((value) << 0) & 0x0000003f)

/*
 * Field : limit
 * 
 * Limit defines the 6 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 12'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_REG1ADDR_LIMIT register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG1ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_REG1ADDR_LIMIT register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG1ADDR_LIMIT_MSB        21
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_REG1ADDR_LIMIT register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG1ADDR_LIMIT_WIDTH      6
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_REG1ADDR_LIMIT register field value. */
#define ALT_NOC_FW_OCRAM_SCR_REG1ADDR_LIMIT_SET_MSK    0x003f0000
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_REG1ADDR_LIMIT register field value. */
#define ALT_NOC_FW_OCRAM_SCR_REG1ADDR_LIMIT_CLR_MSK    0xffc0ffff
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_REG1ADDR_LIMIT register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG1ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_REG1ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_REG1ADDR_LIMIT_GET(value) (((value) & 0x003f0000) >> 16)
/* Produces a ALT_NOC_FW_OCRAM_SCR_REG1ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_REG1ADDR_LIMIT_SET(value) (((value) << 16) & 0x003f0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_OCRAM_SCR_REG1ADDR.
 */
struct ALT_NOC_FW_OCRAM_SCR_REG1ADDR_s
{
    uint32_t  base  :  6;  /* ALT_NOC_FW_OCRAM_SCR_REG1ADDR_BASE */
    uint32_t        : 10;  /* *UNDEFINED* */
    uint32_t  limit :  6;  /* ALT_NOC_FW_OCRAM_SCR_REG1ADDR_LIMIT */
    uint32_t        : 10;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_OCRAM_SCR_REG1ADDR. */
typedef volatile struct ALT_NOC_FW_OCRAM_SCR_REG1ADDR_s  ALT_NOC_FW_OCRAM_SCR_REG1ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_OCRAM_SCR_REG1ADDR register. */
#define ALT_NOC_FW_OCRAM_SCR_REG1ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_OCRAM_SCR_REG1ADDR register from the beginning of the component. */
#define ALT_NOC_FW_OCRAM_SCR_REG1ADDR_OFST        0x10

/*
 * Register : region2addr
 * 
 * Base and Limit definition for Region 2
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                        
 * :--------|:-------|:--------|:------------------------------------
 *  [5:0]   | RW     | 0x0     | ALT_NOC_FW_OCRAM_SCR_REG2ADDR_BASE 
 *  [15:6]  | ???    | Unknown | *UNDEFINED*                        
 *  [21:16] | RW     | 0x0     | ALT_NOC_FW_OCRAM_SCR_REG2ADDR_LIMIT
 *  [31:22] | ???    | Unknown | *UNDEFINED*                        
 * 
 */
/*
 * Field : base
 * 
 * Base defines the 6 bit MSB of the address field. Remaining LSB field is all
 * zeros. Region start address is {base, 12'h000}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_REG2ADDR_BASE register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG2ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_REG2ADDR_BASE register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG2ADDR_BASE_MSB        5
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_REG2ADDR_BASE register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG2ADDR_BASE_WIDTH      6
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_REG2ADDR_BASE register field value. */
#define ALT_NOC_FW_OCRAM_SCR_REG2ADDR_BASE_SET_MSK    0x0000003f
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_REG2ADDR_BASE register field value. */
#define ALT_NOC_FW_OCRAM_SCR_REG2ADDR_BASE_CLR_MSK    0xffffffc0
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_REG2ADDR_BASE register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG2ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_REG2ADDR_BASE field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_REG2ADDR_BASE_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_NOC_FW_OCRAM_SCR_REG2ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_REG2ADDR_BASE_SET(value) (((value) << 0) & 0x0000003f)

/*
 * Field : limit
 * 
 * Limit defines the 6 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 12'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_REG2ADDR_LIMIT register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG2ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_REG2ADDR_LIMIT register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG2ADDR_LIMIT_MSB        21
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_REG2ADDR_LIMIT register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG2ADDR_LIMIT_WIDTH      6
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_REG2ADDR_LIMIT register field value. */
#define ALT_NOC_FW_OCRAM_SCR_REG2ADDR_LIMIT_SET_MSK    0x003f0000
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_REG2ADDR_LIMIT register field value. */
#define ALT_NOC_FW_OCRAM_SCR_REG2ADDR_LIMIT_CLR_MSK    0xffc0ffff
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_REG2ADDR_LIMIT register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG2ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_REG2ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_REG2ADDR_LIMIT_GET(value) (((value) & 0x003f0000) >> 16)
/* Produces a ALT_NOC_FW_OCRAM_SCR_REG2ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_REG2ADDR_LIMIT_SET(value) (((value) << 16) & 0x003f0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_OCRAM_SCR_REG2ADDR.
 */
struct ALT_NOC_FW_OCRAM_SCR_REG2ADDR_s
{
    uint32_t  base  :  6;  /* ALT_NOC_FW_OCRAM_SCR_REG2ADDR_BASE */
    uint32_t        : 10;  /* *UNDEFINED* */
    uint32_t  limit :  6;  /* ALT_NOC_FW_OCRAM_SCR_REG2ADDR_LIMIT */
    uint32_t        : 10;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_OCRAM_SCR_REG2ADDR. */
typedef volatile struct ALT_NOC_FW_OCRAM_SCR_REG2ADDR_s  ALT_NOC_FW_OCRAM_SCR_REG2ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_OCRAM_SCR_REG2ADDR register. */
#define ALT_NOC_FW_OCRAM_SCR_REG2ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_OCRAM_SCR_REG2ADDR register from the beginning of the component. */
#define ALT_NOC_FW_OCRAM_SCR_REG2ADDR_OFST        0x14

/*
 * Register : region3addr
 * 
 * Base and Limit definition for Region 3
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                        
 * :--------|:-------|:--------|:------------------------------------
 *  [5:0]   | RW     | 0x0     | ALT_NOC_FW_OCRAM_SCR_REG3ADDR_BASE 
 *  [15:6]  | ???    | Unknown | *UNDEFINED*                        
 *  [21:16] | RW     | 0x0     | ALT_NOC_FW_OCRAM_SCR_REG3ADDR_LIMIT
 *  [31:22] | ???    | Unknown | *UNDEFINED*                        
 * 
 */
/*
 * Field : base
 * 
 * Base defines the 6 bit MSB of the address field. Remaining LSB field is all
 * zeros. Region start address is {base, 12'h000}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_REG3ADDR_BASE register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG3ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_REG3ADDR_BASE register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG3ADDR_BASE_MSB        5
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_REG3ADDR_BASE register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG3ADDR_BASE_WIDTH      6
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_REG3ADDR_BASE register field value. */
#define ALT_NOC_FW_OCRAM_SCR_REG3ADDR_BASE_SET_MSK    0x0000003f
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_REG3ADDR_BASE register field value. */
#define ALT_NOC_FW_OCRAM_SCR_REG3ADDR_BASE_CLR_MSK    0xffffffc0
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_REG3ADDR_BASE register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG3ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_REG3ADDR_BASE field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_REG3ADDR_BASE_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_NOC_FW_OCRAM_SCR_REG3ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_REG3ADDR_BASE_SET(value) (((value) << 0) & 0x0000003f)

/*
 * Field : limit
 * 
 * Limit defines the 6 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 12'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_REG3ADDR_LIMIT register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG3ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_REG3ADDR_LIMIT register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG3ADDR_LIMIT_MSB        21
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_REG3ADDR_LIMIT register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG3ADDR_LIMIT_WIDTH      6
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_REG3ADDR_LIMIT register field value. */
#define ALT_NOC_FW_OCRAM_SCR_REG3ADDR_LIMIT_SET_MSK    0x003f0000
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_REG3ADDR_LIMIT register field value. */
#define ALT_NOC_FW_OCRAM_SCR_REG3ADDR_LIMIT_CLR_MSK    0xffc0ffff
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_REG3ADDR_LIMIT register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG3ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_REG3ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_REG3ADDR_LIMIT_GET(value) (((value) & 0x003f0000) >> 16)
/* Produces a ALT_NOC_FW_OCRAM_SCR_REG3ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_REG3ADDR_LIMIT_SET(value) (((value) << 16) & 0x003f0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_OCRAM_SCR_REG3ADDR.
 */
struct ALT_NOC_FW_OCRAM_SCR_REG3ADDR_s
{
    uint32_t  base  :  6;  /* ALT_NOC_FW_OCRAM_SCR_REG3ADDR_BASE */
    uint32_t        : 10;  /* *UNDEFINED* */
    uint32_t  limit :  6;  /* ALT_NOC_FW_OCRAM_SCR_REG3ADDR_LIMIT */
    uint32_t        : 10;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_OCRAM_SCR_REG3ADDR. */
typedef volatile struct ALT_NOC_FW_OCRAM_SCR_REG3ADDR_s  ALT_NOC_FW_OCRAM_SCR_REG3ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_OCRAM_SCR_REG3ADDR register. */
#define ALT_NOC_FW_OCRAM_SCR_REG3ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_OCRAM_SCR_REG3ADDR register from the beginning of the component. */
#define ALT_NOC_FW_OCRAM_SCR_REG3ADDR_OFST        0x18

/*
 * Register : region4addr
 * 
 * Base and Limit definition for Region 4
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                        
 * :--------|:-------|:--------|:------------------------------------
 *  [5:0]   | RW     | 0x0     | ALT_NOC_FW_OCRAM_SCR_REG4ADDR_BASE 
 *  [15:6]  | ???    | Unknown | *UNDEFINED*                        
 *  [21:16] | RW     | 0x0     | ALT_NOC_FW_OCRAM_SCR_REG4ADDR_LIMIT
 *  [31:22] | ???    | Unknown | *UNDEFINED*                        
 * 
 */
/*
 * Field : base
 * 
 * Base defines the 6 bit MSB of the address field. Remaining LSB field is all
 * zeros. Region start address is {base, 12'h000}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_REG4ADDR_BASE register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG4ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_REG4ADDR_BASE register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG4ADDR_BASE_MSB        5
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_REG4ADDR_BASE register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG4ADDR_BASE_WIDTH      6
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_REG4ADDR_BASE register field value. */
#define ALT_NOC_FW_OCRAM_SCR_REG4ADDR_BASE_SET_MSK    0x0000003f
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_REG4ADDR_BASE register field value. */
#define ALT_NOC_FW_OCRAM_SCR_REG4ADDR_BASE_CLR_MSK    0xffffffc0
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_REG4ADDR_BASE register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG4ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_REG4ADDR_BASE field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_REG4ADDR_BASE_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_NOC_FW_OCRAM_SCR_REG4ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_REG4ADDR_BASE_SET(value) (((value) << 0) & 0x0000003f)

/*
 * Field : limit
 * 
 * Limit defines the 6 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 12'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_REG4ADDR_LIMIT register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG4ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_REG4ADDR_LIMIT register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG4ADDR_LIMIT_MSB        21
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_REG4ADDR_LIMIT register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG4ADDR_LIMIT_WIDTH      6
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_REG4ADDR_LIMIT register field value. */
#define ALT_NOC_FW_OCRAM_SCR_REG4ADDR_LIMIT_SET_MSK    0x003f0000
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_REG4ADDR_LIMIT register field value. */
#define ALT_NOC_FW_OCRAM_SCR_REG4ADDR_LIMIT_CLR_MSK    0xffc0ffff
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_REG4ADDR_LIMIT register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG4ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_REG4ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_REG4ADDR_LIMIT_GET(value) (((value) & 0x003f0000) >> 16)
/* Produces a ALT_NOC_FW_OCRAM_SCR_REG4ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_REG4ADDR_LIMIT_SET(value) (((value) << 16) & 0x003f0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_OCRAM_SCR_REG4ADDR.
 */
struct ALT_NOC_FW_OCRAM_SCR_REG4ADDR_s
{
    uint32_t  base  :  6;  /* ALT_NOC_FW_OCRAM_SCR_REG4ADDR_BASE */
    uint32_t        : 10;  /* *UNDEFINED* */
    uint32_t  limit :  6;  /* ALT_NOC_FW_OCRAM_SCR_REG4ADDR_LIMIT */
    uint32_t        : 10;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_OCRAM_SCR_REG4ADDR. */
typedef volatile struct ALT_NOC_FW_OCRAM_SCR_REG4ADDR_s  ALT_NOC_FW_OCRAM_SCR_REG4ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_OCRAM_SCR_REG4ADDR register. */
#define ALT_NOC_FW_OCRAM_SCR_REG4ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_OCRAM_SCR_REG4ADDR register from the beginning of the component. */
#define ALT_NOC_FW_OCRAM_SCR_REG4ADDR_OFST        0x1c

/*
 * Register : region5addr
 * 
 * Base and Limit definition for Region 5
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                        
 * :--------|:-------|:--------|:------------------------------------
 *  [5:0]   | RW     | 0x0     | ALT_NOC_FW_OCRAM_SCR_REG5ADDR_BASE 
 *  [15:6]  | ???    | Unknown | *UNDEFINED*                        
 *  [21:16] | RW     | 0x0     | ALT_NOC_FW_OCRAM_SCR_REG5ADDR_LIMIT
 *  [31:22] | ???    | Unknown | *UNDEFINED*                        
 * 
 */
/*
 * Field : base
 * 
 * Base defines the 6 bit MSB of the address field. Remaining LSB field is all
 * zeros. Region start address is {base, 12'h000}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_REG5ADDR_BASE register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG5ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_REG5ADDR_BASE register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG5ADDR_BASE_MSB        5
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_REG5ADDR_BASE register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG5ADDR_BASE_WIDTH      6
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_REG5ADDR_BASE register field value. */
#define ALT_NOC_FW_OCRAM_SCR_REG5ADDR_BASE_SET_MSK    0x0000003f
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_REG5ADDR_BASE register field value. */
#define ALT_NOC_FW_OCRAM_SCR_REG5ADDR_BASE_CLR_MSK    0xffffffc0
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_REG5ADDR_BASE register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG5ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_REG5ADDR_BASE field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_REG5ADDR_BASE_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_NOC_FW_OCRAM_SCR_REG5ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_REG5ADDR_BASE_SET(value) (((value) << 0) & 0x0000003f)

/*
 * Field : limit
 * 
 * Limit defines the 6 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 12'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_OCRAM_SCR_REG5ADDR_LIMIT register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG5ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_OCRAM_SCR_REG5ADDR_LIMIT register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG5ADDR_LIMIT_MSB        21
/* The width in bits of the ALT_NOC_FW_OCRAM_SCR_REG5ADDR_LIMIT register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG5ADDR_LIMIT_WIDTH      6
/* The mask used to set the ALT_NOC_FW_OCRAM_SCR_REG5ADDR_LIMIT register field value. */
#define ALT_NOC_FW_OCRAM_SCR_REG5ADDR_LIMIT_SET_MSK    0x003f0000
/* The mask used to clear the ALT_NOC_FW_OCRAM_SCR_REG5ADDR_LIMIT register field value. */
#define ALT_NOC_FW_OCRAM_SCR_REG5ADDR_LIMIT_CLR_MSK    0xffc0ffff
/* The reset value of the ALT_NOC_FW_OCRAM_SCR_REG5ADDR_LIMIT register field. */
#define ALT_NOC_FW_OCRAM_SCR_REG5ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_OCRAM_SCR_REG5ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_OCRAM_SCR_REG5ADDR_LIMIT_GET(value) (((value) & 0x003f0000) >> 16)
/* Produces a ALT_NOC_FW_OCRAM_SCR_REG5ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_OCRAM_SCR_REG5ADDR_LIMIT_SET(value) (((value) << 16) & 0x003f0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_OCRAM_SCR_REG5ADDR.
 */
struct ALT_NOC_FW_OCRAM_SCR_REG5ADDR_s
{
    uint32_t  base  :  6;  /* ALT_NOC_FW_OCRAM_SCR_REG5ADDR_BASE */
    uint32_t        : 10;  /* *UNDEFINED* */
    uint32_t  limit :  6;  /* ALT_NOC_FW_OCRAM_SCR_REG5ADDR_LIMIT */
    uint32_t        : 10;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_OCRAM_SCR_REG5ADDR. */
typedef volatile struct ALT_NOC_FW_OCRAM_SCR_REG5ADDR_s  ALT_NOC_FW_OCRAM_SCR_REG5ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_OCRAM_SCR_REG5ADDR register. */
#define ALT_NOC_FW_OCRAM_SCR_REG5ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_OCRAM_SCR_REG5ADDR register from the beginning of the component. */
#define ALT_NOC_FW_OCRAM_SCR_REG5ADDR_OFST        0x20

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_NOC_FW_OCRAM_SCR.
 */
struct ALT_NOC_FW_OCRAM_SCR_s
{
    ALT_NOC_FW_OCRAM_SCR_EN_t        enable;               /* ALT_NOC_FW_OCRAM_SCR_EN */
    ALT_NOC_FW_OCRAM_SCR_EN_SET_t    enable_set;           /* ALT_NOC_FW_OCRAM_SCR_EN_SET */
    ALT_NOC_FW_OCRAM_SCR_EN_CLR_t    enable_clear;         /* ALT_NOC_FW_OCRAM_SCR_EN_CLR */
    ALT_NOC_FW_OCRAM_SCR_REG0ADDR_t  region0addr;          /* ALT_NOC_FW_OCRAM_SCR_REG0ADDR */
    ALT_NOC_FW_OCRAM_SCR_REG1ADDR_t  region1addr;          /* ALT_NOC_FW_OCRAM_SCR_REG1ADDR */
    ALT_NOC_FW_OCRAM_SCR_REG2ADDR_t  region2addr;          /* ALT_NOC_FW_OCRAM_SCR_REG2ADDR */
    ALT_NOC_FW_OCRAM_SCR_REG3ADDR_t  region3addr;          /* ALT_NOC_FW_OCRAM_SCR_REG3ADDR */
    ALT_NOC_FW_OCRAM_SCR_REG4ADDR_t  region4addr;          /* ALT_NOC_FW_OCRAM_SCR_REG4ADDR */
    ALT_NOC_FW_OCRAM_SCR_REG5ADDR_t  region5addr;          /* ALT_NOC_FW_OCRAM_SCR_REG5ADDR */
    volatile uint32_t                _pad_0x24_0x100[55];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_FW_OCRAM_SCR. */
typedef volatile struct ALT_NOC_FW_OCRAM_SCR_s  ALT_NOC_FW_OCRAM_SCR_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_FW_OCRAM_SCR. */
struct ALT_NOC_FW_OCRAM_SCR_raw_s
{
    volatile uint32_t  enable;               /* ALT_NOC_FW_OCRAM_SCR_EN */
    volatile uint32_t  enable_set;           /* ALT_NOC_FW_OCRAM_SCR_EN_SET */
    volatile uint32_t  enable_clear;         /* ALT_NOC_FW_OCRAM_SCR_EN_CLR */
    volatile uint32_t  region0addr;          /* ALT_NOC_FW_OCRAM_SCR_REG0ADDR */
    volatile uint32_t  region1addr;          /* ALT_NOC_FW_OCRAM_SCR_REG1ADDR */
    volatile uint32_t  region2addr;          /* ALT_NOC_FW_OCRAM_SCR_REG2ADDR */
    volatile uint32_t  region3addr;          /* ALT_NOC_FW_OCRAM_SCR_REG3ADDR */
    volatile uint32_t  region4addr;          /* ALT_NOC_FW_OCRAM_SCR_REG4ADDR */
    volatile uint32_t  region5addr;          /* ALT_NOC_FW_OCRAM_SCR_REG5ADDR */
    uint32_t           _pad_0x24_0x100[55];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_FW_OCRAM_SCR. */
typedef volatile struct ALT_NOC_FW_OCRAM_SCR_raw_s  ALT_NOC_FW_OCRAM_SCR_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_NOC_FW_OCRAM_SCR_H__ */

