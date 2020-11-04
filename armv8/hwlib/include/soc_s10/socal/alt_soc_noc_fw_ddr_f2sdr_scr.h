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

/* Altera - ALT_SOC_NOC_FW_DDR_F2SDR_SCR */

#ifndef __ALT_SOCAL_SOC_NOC_FW_DDR_F2SDR_SCR_H__
#define __ALT_SOCAL_SOC_NOC_FW_DDR_F2SDR_SCR_H__

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
 * Component : SOC_NOC_FW_DDR_F2SDR_SCR
 * DDR Security Control Registers (SCR)
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
 * :-------|:-------|:------|:--------------------------------------------------
 *  [0]    | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION0ENABLE
 *  [1]    | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION1ENABLE
 *  [2]    | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION2ENABLE
 *  [3]    | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION3ENABLE
 *  [31:4] | ???    | 0x0   | *UNDEFINED*                                      
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION0ENABLE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION0ENABLE_MSB        0
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION0ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION0ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION0ENABLE_SET_MSK    0x00000001
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION0ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION0ENABLE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION0ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION0ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION0ENABLE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION0ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION0ENABLE_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : region1enable
 * 
 * Region 1 Enable. Value of 1 means region is enabled, Value of 0 means region is
 * disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION1ENABLE_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION1ENABLE_MSB        1
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION1ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION1ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION1ENABLE_SET_MSK    0x00000002
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION1ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION1ENABLE_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION1ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION1ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION1ENABLE_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION1ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION1ENABLE_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : region2enable
 * 
 * Region 2 Enable. Value of 1 means region is enabled, Value of 0 means region is
 * disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION2ENABLE_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION2ENABLE_MSB        2
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION2ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION2ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION2ENABLE_SET_MSK    0x00000004
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION2ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION2ENABLE_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION2ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION2ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION2ENABLE_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION2ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION2ENABLE_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : region3enable
 * 
 * Region 3 Enable. Value of 1 means region is enabled, Value of 0 means region is
 * disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION3ENABLE_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION3ENABLE_MSB        3
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION3ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION3ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION3ENABLE_SET_MSK    0x00000008
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION3ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION3ENABLE_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION3ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION3ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION3ENABLE_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION3ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION3ENABLE_SET(value) (((value) << 3) & 0x00000008)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE.
 */
struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_s
{
    volatile uint32_t  region0enable :  1;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION0ENABLE */
    volatile uint32_t  region1enable :  1;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION1ENABLE */
    volatile uint32_t  region2enable :  1;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION2ENABLE */
    volatile uint32_t  region3enable :  1;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_REGION3ENABLE */
    uint32_t                         : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE. */
typedef struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_s  ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_OFST        0x0
/* The address of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_OFST))

/*
 * Register : enable_set
 * 
 * Sets Master Region Enable field when written with 1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                          
 * :-------|:-------|:------|:------------------------------------------------------
 *  [0]    | W      | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION0ENABLE
 *  [1]    | W      | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION1ENABLE
 *  [2]    | W      | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION2ENABLE
 *  [3]    | W      | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION3ENABLE
 *  [31:4] | ???    | 0x0   | *UNDEFINED*                                          
 * 
 */
/*
 * Field : region0enable
 * 
 * Region 0 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region0enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION0ENABLE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION0ENABLE_MSB        0
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION0ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION0ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION0ENABLE_SET_MSK    0x00000001
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION0ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION0ENABLE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION0ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION0ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION0ENABLE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION0ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION0ENABLE_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : region1enable
 * 
 * Region 1 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region1enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION1ENABLE_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION1ENABLE_MSB        1
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION1ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION1ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION1ENABLE_SET_MSK    0x00000002
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION1ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION1ENABLE_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION1ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION1ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION1ENABLE_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION1ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION1ENABLE_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : region2enable
 * 
 * Region 2 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region2enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION2ENABLE_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION2ENABLE_MSB        2
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION2ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION2ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION2ENABLE_SET_MSK    0x00000004
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION2ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION2ENABLE_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION2ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION2ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION2ENABLE_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION2ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION2ENABLE_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : region3enable
 * 
 * Region 3 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region3enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION3ENABLE_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION3ENABLE_MSB        3
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION3ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION3ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION3ENABLE_SET_MSK    0x00000008
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION3ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION3ENABLE_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION3ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION3ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION3ENABLE_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION3ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION3ENABLE_SET(value) (((value) << 3) & 0x00000008)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET.
 */
struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_s
{
    volatile uint32_t  region0enable :  1;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION0ENABLE */
    volatile uint32_t  region1enable :  1;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION1ENABLE */
    volatile uint32_t  region2enable :  1;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION2ENABLE */
    volatile uint32_t  region3enable :  1;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_REGION3ENABLE */
    uint32_t                         : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET. */
typedef struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_s  ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_OFST        0x4
/* The address of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_OFST))

/*
 * Register : enable_clear
 * 
 * Clears Master Region Enable field when written with 1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                            
 * :-------|:-------|:------|:--------------------------------------------------------
 *  [0]    | W      | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION0ENABLE
 *  [1]    | W      | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION1ENABLE
 *  [2]    | W      | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION2ENABLE
 *  [3]    | W      | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION3ENABLE
 *  [31:4] | ???    | 0x0   | *UNDEFINED*                                            
 * 
 */
/*
 * Field : region0enable
 * 
 * Region 0 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region0enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION0ENABLE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION0ENABLE_MSB        0
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION0ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION0ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION0ENABLE_SET_MSK    0x00000001
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION0ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION0ENABLE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION0ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION0ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION0ENABLE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION0ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION0ENABLE_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : region1enable
 * 
 * Region 1 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region1enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION1ENABLE_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION1ENABLE_MSB        1
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION1ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION1ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION1ENABLE_SET_MSK    0x00000002
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION1ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION1ENABLE_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION1ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION1ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION1ENABLE_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION1ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION1ENABLE_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : region2enable
 * 
 * Region 2 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region2enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION2ENABLE_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION2ENABLE_MSB        2
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION2ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION2ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION2ENABLE_SET_MSK    0x00000004
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION2ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION2ENABLE_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION2ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION2ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION2ENABLE_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION2ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION2ENABLE_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : region3enable
 * 
 * Region 3 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region3enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION3ENABLE_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION3ENABLE_MSB        3
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION3ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION3ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION3ENABLE_SET_MSK    0x00000008
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION3ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION3ENABLE_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION3ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION3ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION3ENABLE_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION3ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION3ENABLE_SET(value) (((value) << 3) & 0x00000008)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR.
 */
struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_s
{
    volatile uint32_t  region0enable :  1;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION0ENABLE */
    volatile uint32_t  region1enable :  1;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION1ENABLE */
    volatile uint32_t  region2enable :  1;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION2ENABLE */
    volatile uint32_t  region3enable :  1;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_REGION3ENABLE */
    uint32_t                         : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR. */
typedef struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_s  ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_OFST        0x8
/* The address of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_OFST))

/*
 * Register : region0addr_base
 * 
 * Base definition for Region 0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                       
 * :--------|:-------|:------|:---------------------------------------------------
 *  [15:0]  | R      | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_LOW 
 *  [31:16] | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_HIGH
 * 
 */
/*
 * Field : low
 * 
 * LSB field is all zeros. Region start address is {baseext,base, 16'h000}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the base address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE.
 */
struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE. */
typedef struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_s  ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_OFST        0x10
/* The address of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_OFST))

/*
 * Register : region0addr_baseext
 * 
 * base extended definition for Region 0
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                         
 * :-------|:-------|:------|:-----------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_LOW
 *  [31:5] | ???    | 0x0   | *UNDEFINED*                                         
 * 
 */
/*
 * Field : low
 * 
 * defines the 5 bit LSB of the base extended address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT.
 */
struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_s  ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_OFST        0x14
/* The address of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_OFST))

/*
 * Register : region0addr_limit
 * 
 * Limit definition for Region 0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset  | Description                                        
 * :--------|:-------|:-------|:----------------------------------------------------
 *  [15:0]  | R      | 0xffff | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_LOW 
 *  [31:16] | RW     | 0x0    | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_HIGH
 * 
 */
/*
 * Field : low
 * 
 * LSB field is all one. Region end address is {limitext,limit, 16'hFFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_LOW_RESET      0xffff
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the limit address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT.
 */
struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT. */
typedef struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_s  ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_RESET       0x0000ffff
/* The byte offset of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_OFST        0x18
/* The address of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_OFST))

/*
 * Register : region0addr_limitext
 * 
 * limit extended definition for Region 0
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                          
 * :-------|:-------|:------|:------------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_LOW
 *  [31:5] | ???    | 0x0   | *UNDEFINED*                                          
 * 
 */
/*
 * Field : low
 * 
 * defines the 5 bit LSB of the limit extended address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT.
 */
struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_s  ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_OFST        0x1c
/* The address of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_OFST))

/*
 * Register : region1addr_base
 * 
 * Base definition for Region 1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                       
 * :--------|:-------|:------|:---------------------------------------------------
 *  [15:0]  | R      | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_LOW 
 *  [31:16] | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_HIGH
 * 
 */
/*
 * Field : low
 * 
 * LSB field is all zeros. Region start address is {baseext,base, 16'h000}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the base address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE.
 */
struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE. */
typedef struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_s  ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_OFST        0x20
/* The address of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_OFST))

/*
 * Register : region1addr_baseext
 * 
 * base extended definition for Region 1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                         
 * :-------|:-------|:------|:-----------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_LOW
 *  [31:5] | ???    | 0x0   | *UNDEFINED*                                         
 * 
 */
/*
 * Field : low
 * 
 * defines the 5 bit LSB of the base extended address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT.
 */
struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_s  ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_OFST        0x24
/* The address of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_OFST))

/*
 * Register : region1addr_limit
 * 
 * Limit definition for Region 1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset  | Description                                        
 * :--------|:-------|:-------|:----------------------------------------------------
 *  [15:0]  | R      | 0xffff | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_LOW 
 *  [31:16] | RW     | 0x0    | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_HIGH
 * 
 */
/*
 * Field : low
 * 
 * LSB field is all one. Region end address is {limitext,limit, 16'hFFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_LOW_RESET      0xffff
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the limit address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT.
 */
struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT. */
typedef struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_s  ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_RESET       0x0000ffff
/* The byte offset of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_OFST        0x28
/* The address of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_OFST))

/*
 * Register : region1addr_limitext
 * 
 * limit extended definition for Region 1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                          
 * :-------|:-------|:------|:------------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_LOW
 *  [31:5] | ???    | 0x0   | *UNDEFINED*                                          
 * 
 */
/*
 * Field : low
 * 
 * defines the 5 bit LSB of the limit extended address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT.
 */
struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_s  ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_OFST        0x2c
/* The address of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_OFST))

/*
 * Register : region2addr_base
 * 
 * Base definition for Region 2
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                       
 * :--------|:-------|:------|:---------------------------------------------------
 *  [15:0]  | R      | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_LOW 
 *  [31:16] | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_HIGH
 * 
 */
/*
 * Field : low
 * 
 * LSB field is all zeros. Region start address is {baseext,base, 16'h000}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the base address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE.
 */
struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE. */
typedef struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_s  ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_OFST        0x30
/* The address of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_OFST))

/*
 * Register : region2addr_baseext
 * 
 * base extended definition for Region 2
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                         
 * :-------|:-------|:------|:-----------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_LOW
 *  [31:5] | ???    | 0x0   | *UNDEFINED*                                         
 * 
 */
/*
 * Field : low
 * 
 * defines the 5 bit LSB of the base extended address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT.
 */
struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_s  ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_OFST        0x34
/* The address of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_OFST))

/*
 * Register : region2addr_limit
 * 
 * Limit definition for Region 2
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset  | Description                                        
 * :--------|:-------|:-------|:----------------------------------------------------
 *  [15:0]  | R      | 0xffff | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_LOW 
 *  [31:16] | RW     | 0x0    | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_HIGH
 * 
 */
/*
 * Field : low
 * 
 * LSB field is all one. Region end address is {limitext,limit, 16'hFFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_LOW_RESET      0xffff
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the limit address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT.
 */
struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT. */
typedef struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_s  ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_RESET       0x0000ffff
/* The byte offset of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_OFST        0x38
/* The address of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_OFST))

/*
 * Register : region2addr_limitext
 * 
 * limit extended definition for Region 2
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                          
 * :-------|:-------|:------|:------------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_LOW
 *  [31:5] | ???    | 0x0   | *UNDEFINED*                                          
 * 
 */
/*
 * Field : low
 * 
 * defines the 5 bit LSB of the limit extended address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT.
 */
struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_s  ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_OFST        0x3c
/* The address of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_OFST))

/*
 * Register : region3addr_base
 * 
 * Base definition for Region 3
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                       
 * :--------|:-------|:------|:---------------------------------------------------
 *  [15:0]  | R      | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_LOW 
 *  [31:16] | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_HIGH
 * 
 */
/*
 * Field : low
 * 
 * LSB field is all zeros. Region start address is {baseext,base, 16'h000}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the base address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE.
 */
struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE. */
typedef struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_s  ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_OFST        0x40
/* The address of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_OFST))

/*
 * Register : region3addr_baseext
 * 
 * base extended definition for Region 3
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                         
 * :-------|:-------|:------|:-----------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_LOW
 *  [31:5] | ???    | 0x0   | *UNDEFINED*                                         
 * 
 */
/*
 * Field : low
 * 
 * defines the 5 bit LSB of the base extended address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT.
 */
struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_s  ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_OFST        0x44
/* The address of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_OFST))

/*
 * Register : region3addr_limit
 * 
 * Limit definition for Region 3
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset  | Description                                        
 * :--------|:-------|:-------|:----------------------------------------------------
 *  [15:0]  | R      | 0xffff | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_LOW 
 *  [31:16] | RW     | 0x0    | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_HIGH
 * 
 */
/*
 * Field : low
 * 
 * LSB field is all one. Region end address is {limitext,limit, 16'hFFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_LOW_RESET      0xffff
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the limit address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT.
 */
struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT. */
typedef struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_s  ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_RESET       0x0000ffff
/* The byte offset of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_OFST        0x48
/* The address of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_OFST))

/*
 * Register : region3addr_limitext
 * 
 * limit extended definition for Region 3
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                          
 * :-------|:-------|:------|:------------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_LOW
 *  [31:5] | ???    | 0x0   | *UNDEFINED*                                          
 * 
 */
/*
 * Field : low
 * 
 * defines the 5 bit LSB of the limit extended address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT.
 */
struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_s  ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_OFST        0x4c
/* The address of the ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT register. */
#define ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_OFST))

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
 * The struct declaration for register group ALT_SOC_NOC_FW_DDR_F2SDR_SCR.
 */
struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_s
{
    volatile ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_t                enable;                /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE */
    volatile ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET_t            enable_set;            /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET */
    volatile ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR_t          enable_clear;          /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR */
    volatile uint32_t                                             _pad_0xc_0xf;          /* *UNDEFINED* */
    volatile ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE_t      region0addr_base;      /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE */
    volatile ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT_t   region0addr_baseext;   /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT */
    volatile ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT_t     region0addr_limit;     /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT */
    volatile ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT_t  region0addr_limitext;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT */
    volatile ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE_t      region1addr_base;      /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE */
    volatile ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT_t   region1addr_baseext;   /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT */
    volatile ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT_t     region1addr_limit;     /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT */
    volatile ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT_t  region1addr_limitext;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT */
    volatile ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE_t      region2addr_base;      /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE */
    volatile ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT_t   region2addr_baseext;   /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT */
    volatile ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT_t     region2addr_limit;     /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT */
    volatile ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT_t  region2addr_limitext;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT */
    volatile ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE_t      region3addr_base;      /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE */
    volatile ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT_t   region3addr_baseext;   /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT */
    volatile ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT_t     region3addr_limit;     /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT */
    volatile ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT_t  region3addr_limitext;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT */
    volatile uint32_t                                             _pad_0x50_0x100[44];   /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_SOC_NOC_FW_DDR_F2SDR_SCR. */
typedef struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_s  ALT_SOC_NOC_FW_DDR_F2SDR_SCR_t;
/* The struct declaration for the raw register contents of register group ALT_SOC_NOC_FW_DDR_F2SDR_SCR. */
struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_raw_s
{
    volatile uint32_t  enable;                /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE */
    volatile uint32_t  enable_set;            /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_SET */
    volatile uint32_t  enable_clear;          /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_ENABLE_CLEAR */
    volatile uint32_t  _pad_0xc_0xf;          /* *UNDEFINED* */
    volatile uint32_t  region0addr_base;      /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASE */
    volatile uint32_t  region0addr_baseext;   /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_BASEEXT */
    volatile uint32_t  region0addr_limit;     /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMIT */
    volatile uint32_t  region0addr_limitext;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION0ADDR_LIMITEXT */
    volatile uint32_t  region1addr_base;      /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASE */
    volatile uint32_t  region1addr_baseext;   /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_BASEEXT */
    volatile uint32_t  region1addr_limit;     /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMIT */
    volatile uint32_t  region1addr_limitext;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION1ADDR_LIMITEXT */
    volatile uint32_t  region2addr_base;      /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASE */
    volatile uint32_t  region2addr_baseext;   /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_BASEEXT */
    volatile uint32_t  region2addr_limit;     /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMIT */
    volatile uint32_t  region2addr_limitext;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION2ADDR_LIMITEXT */
    volatile uint32_t  region3addr_base;      /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASE */
    volatile uint32_t  region3addr_baseext;   /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_BASEEXT */
    volatile uint32_t  region3addr_limit;     /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMIT */
    volatile uint32_t  region3addr_limitext;  /* ALT_SOC_NOC_FW_DDR_F2SDR_SCR_REGION3ADDR_LIMITEXT */
    volatile uint32_t  _pad_0x50_0x100[44];   /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_SOC_NOC_FW_DDR_F2SDR_SCR. */
typedef struct ALT_SOC_NOC_FW_DDR_F2SDR_SCR_raw_s  ALT_SOC_NOC_FW_DDR_F2SDR_SCR_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_SOC_NOC_FW_DDR_F2SDR_SCR_H__ */

