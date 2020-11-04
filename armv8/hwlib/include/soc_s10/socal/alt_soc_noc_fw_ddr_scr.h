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

/* Altera - ALT_SOC_NOC_FW_DDR_SCR */

#ifndef __ALT_SOCAL_SOC_NOC_FW_DDR_SCR_H__
#define __ALT_SOCAL_SOC_NOC_FW_DDR_SCR_H__

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
 * Component : SOC_NOC_FW_DDR_SCR
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
 *  Bits    | Access | Reset | Description                                      
 * :--------|:-------|:------|:--------------------------------------------------
 *  [0]     | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION0ENABLE   
 *  [1]     | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION1ENABLE   
 *  [2]     | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION2ENABLE   
 *  [3]     | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION3ENABLE   
 *  [4]     | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION4ENABLE   
 *  [5]     | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION5ENABLE   
 *  [6]     | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION6ENABLE   
 *  [7]     | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION7ENABLE   
 *  [8]     | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION0ENABLE
 *  [9]     | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION1ENABLE
 *  [10]    | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION2ENABLE
 *  [11]    | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION3ENABLE
 *  [12]    | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION4ENABLE
 *  [13]    | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION5ENABLE
 *  [14]    | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION6ENABLE
 *  [15]    | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION7ENABLE
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                                      
 * 
 */
/*
 * Field : mpuregion0enable
 * 
 * MPU Region 0 Enable. Value of 1 means region is enabled, Value of 0 means region
 * is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION0ENABLE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION0ENABLE_MSB        0
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION0ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION0ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION0ENABLE_SET_MSK    0x00000001
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION0ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION0ENABLE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION0ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION0ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION0ENABLE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION0ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION0ENABLE_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : mpuregion1enable
 * 
 * MPU Region 1 Enable. Value of 1 means region is enabled, Value of 0 means region
 * is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION1ENABLE_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION1ENABLE_MSB        1
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION1ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION1ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION1ENABLE_SET_MSK    0x00000002
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION1ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION1ENABLE_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION1ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION1ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION1ENABLE_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION1ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION1ENABLE_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : mpuregion2enable
 * 
 * MPU Region 2 Enable. Value of 1 means region is enabled, Value of 0 means region
 * is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION2ENABLE_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION2ENABLE_MSB        2
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION2ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION2ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION2ENABLE_SET_MSK    0x00000004
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION2ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION2ENABLE_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION2ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION2ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION2ENABLE_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION2ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION2ENABLE_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : mpuregion3enable
 * 
 * MPU Region 3 Enable. Value of 1 means region is enabled, Value of 0 means region
 * is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION3ENABLE_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION3ENABLE_MSB        3
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION3ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION3ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION3ENABLE_SET_MSK    0x00000008
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION3ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION3ENABLE_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION3ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION3ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION3ENABLE_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION3ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION3ENABLE_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : mpuregion4enable
 * 
 * MPURegion 4 Enable. Value of 1 means region is enabled, Value of 0 means region
 * is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION4ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION4ENABLE_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION4ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION4ENABLE_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION4ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION4ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION4ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION4ENABLE_SET_MSK    0x00000010
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION4ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION4ENABLE_CLR_MSK    0xffffffef
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION4ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION4ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION4ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION4ENABLE_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION4ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION4ENABLE_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : mpuregion5enable
 * 
 * MPURegion 5 Enable. Value of 1 means region is enabled, Value of 0 means region
 * is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION5ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION5ENABLE_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION5ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION5ENABLE_MSB        5
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION5ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION5ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION5ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION5ENABLE_SET_MSK    0x00000020
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION5ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION5ENABLE_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION5ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION5ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION5ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION5ENABLE_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION5ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION5ENABLE_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : mpuregion6enable
 * 
 * MPU Region 6 Enable. Value of 1 means region is enabled, Value of 0 means region
 * is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION6ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION6ENABLE_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION6ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION6ENABLE_MSB        6
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION6ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION6ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION6ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION6ENABLE_SET_MSK    0x00000040
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION6ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION6ENABLE_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION6ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION6ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION6ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION6ENABLE_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION6ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION6ENABLE_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : mpuregion7enable
 * 
 * MPU Region 7 Enable. Value of 1 means region is enabled, Value of 0 means region
 * is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION7ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION7ENABLE_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION7ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION7ENABLE_MSB        7
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION7ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION7ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION7ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION7ENABLE_SET_MSK    0x00000080
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION7ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION7ENABLE_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION7ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION7ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION7ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION7ENABLE_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION7ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION7ENABLE_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : nonmpuregion0enable
 * 
 * non MPU Region 0 Enable. Value of 1 means region is enabled, Value of 0 means
 * region is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION0ENABLE_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION0ENABLE_MSB        8
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION0ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION0ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION0ENABLE_SET_MSK    0x00000100
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION0ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION0ENABLE_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION0ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION0ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION0ENABLE_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION0ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION0ENABLE_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : nonmpuregion1enable
 * 
 * non MPU Region 1 Enable. Value of 1 means region is enabled, Value of 0 means
 * region is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION1ENABLE_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION1ENABLE_MSB        9
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION1ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION1ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION1ENABLE_SET_MSK    0x00000200
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION1ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION1ENABLE_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION1ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION1ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION1ENABLE_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION1ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION1ENABLE_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : nonmpuregion2enable
 * 
 * non MPU Region 2 Enable. Value of 1 means region is enabled, Value of 0 means
 * region is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION2ENABLE_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION2ENABLE_MSB        10
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION2ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION2ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION2ENABLE_SET_MSK    0x00000400
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION2ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION2ENABLE_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION2ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION2ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION2ENABLE_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION2ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION2ENABLE_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : nonmpuregion3enable
 * 
 * non MPU Region 3 Enable. Value of 1 means region is enabled, Value of 0 means
 * region is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION3ENABLE_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION3ENABLE_MSB        11
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION3ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION3ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION3ENABLE_SET_MSK    0x00000800
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION3ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION3ENABLE_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION3ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION3ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION3ENABLE_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION3ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION3ENABLE_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : nonmpuregion4enable
 * 
 * non MPU Region 4 Enable. Value of 1 means region is enabled, Value of 0 means
 * region is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION4ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION4ENABLE_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION4ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION4ENABLE_MSB        12
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION4ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION4ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION4ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION4ENABLE_SET_MSK    0x00001000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION4ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION4ENABLE_CLR_MSK    0xffffefff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION4ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION4ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION4ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION4ENABLE_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION4ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION4ENABLE_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : nonmpuregion5enable
 * 
 * non MPU Region 5 Enable. Value of 1 means region is enabled, Value of 0 means
 * region is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION5ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION5ENABLE_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION5ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION5ENABLE_MSB        13
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION5ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION5ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION5ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION5ENABLE_SET_MSK    0x00002000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION5ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION5ENABLE_CLR_MSK    0xffffdfff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION5ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION5ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION5ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION5ENABLE_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION5ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION5ENABLE_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : nonmpuregion6enable
 * 
 * non MPU Region 6 Enable. Value of 1 means region is enabled, Value of 0 means
 * region is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION6ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION6ENABLE_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION6ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION6ENABLE_MSB        14
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION6ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION6ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION6ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION6ENABLE_SET_MSK    0x00004000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION6ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION6ENABLE_CLR_MSK    0xffffbfff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION6ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION6ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION6ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION6ENABLE_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION6ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION6ENABLE_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : nonmpuregion7enable
 * 
 * non MPU Region 7 Enable. Value of 1 means region is enabled, Value of 0 means
 * region is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION7ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION7ENABLE_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION7ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION7ENABLE_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION7ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION7ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION7ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION7ENABLE_SET_MSK    0x00008000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION7ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION7ENABLE_CLR_MSK    0xffff7fff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION7ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION7ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION7ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION7ENABLE_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION7ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION7ENABLE_SET(value) (((value) << 15) & 0x00008000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_ENABLE.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_ENABLE_s
{
    volatile uint32_t  mpuregion0enable    :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION0ENABLE */
    volatile uint32_t  mpuregion1enable    :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION1ENABLE */
    volatile uint32_t  mpuregion2enable    :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION2ENABLE */
    volatile uint32_t  mpuregion3enable    :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION3ENABLE */
    volatile uint32_t  mpuregion4enable    :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION4ENABLE */
    volatile uint32_t  mpuregion5enable    :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION5ENABLE */
    volatile uint32_t  mpuregion6enable    :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION6ENABLE */
    volatile uint32_t  mpuregion7enable    :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_MPUREGION7ENABLE */
    volatile uint32_t  nonmpuregion0enable :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION0ENABLE */
    volatile uint32_t  nonmpuregion1enable :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION1ENABLE */
    volatile uint32_t  nonmpuregion2enable :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION2ENABLE */
    volatile uint32_t  nonmpuregion3enable :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION3ENABLE */
    volatile uint32_t  nonmpuregion4enable :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION4ENABLE */
    volatile uint32_t  nonmpuregion5enable :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION5ENABLE */
    volatile uint32_t  nonmpuregion6enable :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION6ENABLE */
    volatile uint32_t  nonmpuregion7enable :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_NONMPUREGION7ENABLE */
    uint32_t                               : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_ENABLE. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_ENABLE_s  ALT_SOC_NOC_FW_DDR_SCR_ENABLE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_OFST        0x0

/*
 * Register : enable_set
 * 
 * Sets Master Region Enable field when written with 1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                          
 * :--------|:-------|:------|:------------------------------------------------------
 *  [0]     | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION0ENABLE   
 *  [1]     | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION1ENABLE   
 *  [2]     | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION2ENABLE   
 *  [3]     | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION3ENABLE   
 *  [4]     | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION4ENABLE   
 *  [5]     | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION5ENABLE   
 *  [6]     | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION6ENABLE   
 *  [7]     | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION7ENABLE   
 *  [8]     | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION0ENABLE
 *  [9]     | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION1ENABLE
 *  [10]    | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION2ENABLE
 *  [11]    | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION3ENABLE
 *  [12]    | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION4ENABLE
 *  [13]    | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION5ENABLE
 *  [14]    | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION6ENABLE
 *  [15]    | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION7ENABLE
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                                          
 * 
 */
/*
 * Field : mpuregion0enable
 * 
 * MPU Region 0 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region0enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION0ENABLE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION0ENABLE_MSB        0
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION0ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION0ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION0ENABLE_SET_MSK    0x00000001
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION0ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION0ENABLE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION0ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION0ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION0ENABLE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION0ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION0ENABLE_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : mpuregion1enable
 * 
 * MPU Region 1 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region1enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION1ENABLE_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION1ENABLE_MSB        1
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION1ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION1ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION1ENABLE_SET_MSK    0x00000002
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION1ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION1ENABLE_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION1ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION1ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION1ENABLE_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION1ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION1ENABLE_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : mpuregion2enable
 * 
 * MPU Region 2 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region2enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION2ENABLE_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION2ENABLE_MSB        2
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION2ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION2ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION2ENABLE_SET_MSK    0x00000004
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION2ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION2ENABLE_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION2ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION2ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION2ENABLE_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION2ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION2ENABLE_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : mpuregion3enable
 * 
 * MPU Region 3 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region3enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION3ENABLE_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION3ENABLE_MSB        3
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION3ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION3ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION3ENABLE_SET_MSK    0x00000008
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION3ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION3ENABLE_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION3ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION3ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION3ENABLE_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION3ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION3ENABLE_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : mpuregion4enable
 * 
 * MPU Region 4 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region4enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION4ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION4ENABLE_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION4ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION4ENABLE_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION4ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION4ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION4ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION4ENABLE_SET_MSK    0x00000010
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION4ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION4ENABLE_CLR_MSK    0xffffffef
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION4ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION4ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION4ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION4ENABLE_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION4ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION4ENABLE_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : mpuregion5enable
 * 
 * MPU Region 5 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region5enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION5ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION5ENABLE_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION5ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION5ENABLE_MSB        5
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION5ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION5ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION5ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION5ENABLE_SET_MSK    0x00000020
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION5ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION5ENABLE_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION5ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION5ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION5ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION5ENABLE_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION5ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION5ENABLE_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : mpuregion6enable
 * 
 * MPU Region 6 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region6enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION6ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION6ENABLE_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION6ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION6ENABLE_MSB        6
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION6ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION6ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION6ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION6ENABLE_SET_MSK    0x00000040
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION6ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION6ENABLE_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION6ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION6ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION6ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION6ENABLE_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION6ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION6ENABLE_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : mpuregion7enable
 * 
 * MPU Region 7 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region7enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION7ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION7ENABLE_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION7ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION7ENABLE_MSB        7
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION7ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION7ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION7ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION7ENABLE_SET_MSK    0x00000080
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION7ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION7ENABLE_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION7ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION7ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION7ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION7ENABLE_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION7ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION7ENABLE_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : nonmpuregion0enable
 * 
 * non MPU Region 0 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region7enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION0ENABLE_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION0ENABLE_MSB        8
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION0ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION0ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION0ENABLE_SET_MSK    0x00000100
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION0ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION0ENABLE_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION0ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION0ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION0ENABLE_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION0ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION0ENABLE_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : nonmpuregion1enable
 * 
 * non MPU Region 1 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region7enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION1ENABLE_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION1ENABLE_MSB        9
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION1ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION1ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION1ENABLE_SET_MSK    0x00000200
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION1ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION1ENABLE_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION1ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION1ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION1ENABLE_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION1ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION1ENABLE_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : nonmpuregion2enable
 * 
 * non MPU Region 2 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region7enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION2ENABLE_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION2ENABLE_MSB        10
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION2ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION2ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION2ENABLE_SET_MSK    0x00000400
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION2ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION2ENABLE_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION2ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION2ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION2ENABLE_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION2ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION2ENABLE_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : nonmpuregion3enable
 * 
 * non MPU Region 3 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region7enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION3ENABLE_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION3ENABLE_MSB        11
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION3ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION3ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION3ENABLE_SET_MSK    0x00000800
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION3ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION3ENABLE_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION3ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION3ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION3ENABLE_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION3ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION3ENABLE_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : nonmpuregion4enable
 * 
 * non MPU Region 4 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region7enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION4ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION4ENABLE_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION4ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION4ENABLE_MSB        12
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION4ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION4ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION4ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION4ENABLE_SET_MSK    0x00001000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION4ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION4ENABLE_CLR_MSK    0xffffefff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION4ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION4ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION4ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION4ENABLE_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION4ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION4ENABLE_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : nonmpuregion5enable
 * 
 * non MPU Region 5 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region7enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION5ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION5ENABLE_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION5ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION5ENABLE_MSB        13
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION5ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION5ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION5ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION5ENABLE_SET_MSK    0x00002000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION5ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION5ENABLE_CLR_MSK    0xffffdfff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION5ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION5ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION5ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION5ENABLE_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION5ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION5ENABLE_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : nonmpuregion6enable
 * 
 * non MPU Region 6 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region7enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION6ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION6ENABLE_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION6ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION6ENABLE_MSB        14
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION6ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION6ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION6ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION6ENABLE_SET_MSK    0x00004000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION6ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION6ENABLE_CLR_MSK    0xffffbfff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION6ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION6ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION6ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION6ENABLE_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION6ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION6ENABLE_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : nonmpuregion7enable
 * 
 * non MPU Region 7 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the region7enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION7ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION7ENABLE_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION7ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION7ENABLE_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION7ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION7ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION7ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION7ENABLE_SET_MSK    0x00008000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION7ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION7ENABLE_CLR_MSK    0xffff7fff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION7ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION7ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION7ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION7ENABLE_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION7ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION7ENABLE_SET(value) (((value) << 15) & 0x00008000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_s
{
    volatile uint32_t  mpuregion0enable    :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION0ENABLE */
    volatile uint32_t  mpuregion1enable    :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION1ENABLE */
    volatile uint32_t  mpuregion2enable    :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION2ENABLE */
    volatile uint32_t  mpuregion3enable    :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION3ENABLE */
    volatile uint32_t  mpuregion4enable    :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION4ENABLE */
    volatile uint32_t  mpuregion5enable    :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION5ENABLE */
    volatile uint32_t  mpuregion6enable    :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION6ENABLE */
    volatile uint32_t  mpuregion7enable    :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_MPUREGION7ENABLE */
    volatile uint32_t  nonmpuregion0enable :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION0ENABLE */
    volatile uint32_t  nonmpuregion1enable :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION1ENABLE */
    volatile uint32_t  nonmpuregion2enable :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION2ENABLE */
    volatile uint32_t  nonmpuregion3enable :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION3ENABLE */
    volatile uint32_t  nonmpuregion4enable :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION4ENABLE */
    volatile uint32_t  nonmpuregion5enable :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION5ENABLE */
    volatile uint32_t  nonmpuregion6enable :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION6ENABLE */
    volatile uint32_t  nonmpuregion7enable :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_NONMPUREGION7ENABLE */
    uint32_t                               : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_s  ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_OFST        0x4

/*
 * Register : enable_clear
 * 
 * Clears Master Region Enable field when written with 1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                            
 * :--------|:-------|:------|:--------------------------------------------------------
 *  [0]     | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION0ENABLE   
 *  [1]     | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION1ENABLE   
 *  [2]     | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION2ENABLE   
 *  [3]     | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION3ENABLE   
 *  [4]     | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION4ENABLE   
 *  [5]     | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION5ENABLE   
 *  [6]     | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION6ENABLE   
 *  [7]     | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION7ENABLE   
 *  [8]     | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION0ENABLE
 *  [9]     | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION1ENABLE
 *  [10]    | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION2ENABLE
 *  [11]    | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION3ENABLE
 *  [12]    | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION4ENABLE
 *  [13]    | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION5ENABLE
 *  [14]    | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION6ENABLE
 *  [15]    | W      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION7ENABLE
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                                            
 * 
 */
/*
 * Field : mpuregion0enable
 * 
 * MPU Region 0 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region0enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION0ENABLE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION0ENABLE_MSB        0
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION0ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION0ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION0ENABLE_SET_MSK    0x00000001
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION0ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION0ENABLE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION0ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION0ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION0ENABLE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION0ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION0ENABLE_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : mpuregion1enable
 * 
 * MPU Region 1 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region1enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION1ENABLE_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION1ENABLE_MSB        1
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION1ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION1ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION1ENABLE_SET_MSK    0x00000002
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION1ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION1ENABLE_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION1ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION1ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION1ENABLE_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION1ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION1ENABLE_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : mpuregion2enable
 * 
 * MPU Region 2 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region2enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION2ENABLE_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION2ENABLE_MSB        2
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION2ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION2ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION2ENABLE_SET_MSK    0x00000004
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION2ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION2ENABLE_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION2ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION2ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION2ENABLE_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION2ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION2ENABLE_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : mpuregion3enable
 * 
 * MPU Region 3 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region3enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION3ENABLE_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION3ENABLE_MSB        3
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION3ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION3ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION3ENABLE_SET_MSK    0x00000008
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION3ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION3ENABLE_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION3ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION3ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION3ENABLE_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION3ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION3ENABLE_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : mpuregion4enable
 * 
 * MPU Region 4 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region4enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION4ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION4ENABLE_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION4ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION4ENABLE_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION4ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION4ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION4ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION4ENABLE_SET_MSK    0x00000010
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION4ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION4ENABLE_CLR_MSK    0xffffffef
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION4ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION4ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION4ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION4ENABLE_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION4ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION4ENABLE_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : mpuregion5enable
 * 
 * MPU Region 5 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region5enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION5ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION5ENABLE_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION5ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION5ENABLE_MSB        5
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION5ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION5ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION5ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION5ENABLE_SET_MSK    0x00000020
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION5ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION5ENABLE_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION5ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION5ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION5ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION5ENABLE_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION5ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION5ENABLE_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : mpuregion6enable
 * 
 * MPU Region 6 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region6enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION6ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION6ENABLE_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION6ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION6ENABLE_MSB        6
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION6ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION6ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION6ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION6ENABLE_SET_MSK    0x00000040
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION6ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION6ENABLE_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION6ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION6ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION6ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION6ENABLE_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION6ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION6ENABLE_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : mpuregion7enable
 * 
 * MPU Region 7 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region7enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION7ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION7ENABLE_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION7ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION7ENABLE_MSB        7
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION7ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION7ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION7ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION7ENABLE_SET_MSK    0x00000080
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION7ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION7ENABLE_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION7ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION7ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION7ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION7ENABLE_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION7ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION7ENABLE_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : nonmpuregion0enable
 * 
 * non MPU Region 0 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region7enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION0ENABLE_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION0ENABLE_MSB        8
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION0ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION0ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION0ENABLE_SET_MSK    0x00000100
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION0ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION0ENABLE_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION0ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION0ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION0ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION0ENABLE_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION0ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION0ENABLE_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : nonmpuregion1enable
 * 
 * non MPU Region 1 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region7enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION1ENABLE_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION1ENABLE_MSB        9
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION1ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION1ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION1ENABLE_SET_MSK    0x00000200
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION1ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION1ENABLE_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION1ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION1ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION1ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION1ENABLE_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION1ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION1ENABLE_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : nonmpuregion2enable
 * 
 * non MPU Region 2 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region7enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION2ENABLE_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION2ENABLE_MSB        10
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION2ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION2ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION2ENABLE_SET_MSK    0x00000400
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION2ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION2ENABLE_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION2ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION2ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION2ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION2ENABLE_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION2ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION2ENABLE_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : nonmpuregion3enable
 * 
 * non MPU Region 3 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region7enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION3ENABLE_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION3ENABLE_MSB        11
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION3ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION3ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION3ENABLE_SET_MSK    0x00000800
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION3ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION3ENABLE_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION3ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION3ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION3ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION3ENABLE_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION3ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION3ENABLE_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : nonmpuregion4enable
 * 
 * non MPU Region 4 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region7enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION4ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION4ENABLE_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION4ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION4ENABLE_MSB        12
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION4ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION4ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION4ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION4ENABLE_SET_MSK    0x00001000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION4ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION4ENABLE_CLR_MSK    0xffffefff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION4ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION4ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION4ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION4ENABLE_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION4ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION4ENABLE_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : nonmpuregion5enable
 * 
 * non MPU Region 5 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region7enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION5ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION5ENABLE_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION5ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION5ENABLE_MSB        13
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION5ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION5ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION5ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION5ENABLE_SET_MSK    0x00002000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION5ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION5ENABLE_CLR_MSK    0xffffdfff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION5ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION5ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION5ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION5ENABLE_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION5ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION5ENABLE_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : nonmpuregion6enable
 * 
 * non MPU Region 6 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region7enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION6ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION6ENABLE_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION6ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION6ENABLE_MSB        14
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION6ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION6ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION6ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION6ENABLE_SET_MSK    0x00004000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION6ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION6ENABLE_CLR_MSK    0xffffbfff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION6ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION6ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION6ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION6ENABLE_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION6ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION6ENABLE_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : nonmpuregion7enable
 * 
 * non MPU Region 7 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the region7enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION7ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION7ENABLE_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION7ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION7ENABLE_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION7ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION7ENABLE_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION7ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION7ENABLE_SET_MSK    0x00008000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION7ENABLE register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION7ENABLE_CLR_MSK    0xffff7fff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION7ENABLE register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION7ENABLE_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION7ENABLE field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION7ENABLE_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION7ENABLE register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION7ENABLE_SET(value) (((value) << 15) & 0x00008000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_s
{
    volatile uint32_t  mpuregion0enable    :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION0ENABLE */
    volatile uint32_t  mpuregion1enable    :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION1ENABLE */
    volatile uint32_t  mpuregion2enable    :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION2ENABLE */
    volatile uint32_t  mpuregion3enable    :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION3ENABLE */
    volatile uint32_t  mpuregion4enable    :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION4ENABLE */
    volatile uint32_t  mpuregion5enable    :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION5ENABLE */
    volatile uint32_t  mpuregion6enable    :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION6ENABLE */
    volatile uint32_t  mpuregion7enable    :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_MPUREGION7ENABLE */
    volatile uint32_t  nonmpuregion0enable :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION0ENABLE */
    volatile uint32_t  nonmpuregion1enable :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION1ENABLE */
    volatile uint32_t  nonmpuregion2enable :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION2ENABLE */
    volatile uint32_t  nonmpuregion3enable :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION3ENABLE */
    volatile uint32_t  nonmpuregion4enable :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION4ENABLE */
    volatile uint32_t  nonmpuregion5enable :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION5ENABLE */
    volatile uint32_t  nonmpuregion6enable :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION6ENABLE */
    volatile uint32_t  nonmpuregion7enable :  1;  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_NONMPUREGION7ENABLE */
    uint32_t                               : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_s  ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR register. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_OFST        0x8

/*
 * Register : mpuregion0addr_base
 * 
 * Base definition for MPU Region 0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                    
 * :--------|:-------|:------|:------------------------------------------------
 *  [15:0]  | R      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_LOW 
 *  [31:16] | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the base address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_OFST        0x10

/*
 * Register : mpuregion0addr_baseext
 * 
 * base extended definition for MPU Region 0
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                      
 * :-------|:-------|:------|:--------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT_OFST        0x14

/*
 * Register : mpuregion0addr_limit
 * 
 * Limit definition for MPU Region 0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset  | Description                                     
 * :--------|:-------|:-------|:-------------------------------------------------
 *  [15:0]  | R      | 0xffff | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_LOW 
 *  [31:16] | RW     | 0x0    | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_LOW_RESET      0xffff
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the limit address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_RESET       0x0000ffff
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_OFST        0x18

/*
 * Register : mpuregion0addr_limitext
 * 
 * limit extended definition for MPU Region 0
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                       
 * :-------|:-------|:------|:---------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT_OFST        0x1c

/*
 * Register : mpuregion1addr_base
 * 
 * Base definition for MPU Region 1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                    
 * :--------|:-------|:------|:------------------------------------------------
 *  [15:0]  | R      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_LOW 
 *  [31:16] | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the base address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_OFST        0x20

/*
 * Register : mpuregion1addr_baseext
 * 
 * base extended definition for MPU Region 1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                      
 * :-------|:-------|:------|:--------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT_OFST        0x24

/*
 * Register : mpuregion1addr_limit
 * 
 * Limit definition for MPU Region 1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset  | Description                                     
 * :--------|:-------|:-------|:-------------------------------------------------
 *  [15:0]  | R      | 0xffff | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_LOW 
 *  [31:16] | RW     | 0x0    | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_LOW_RESET      0xffff
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the limit address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_RESET       0x0000ffff
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_OFST        0x28

/*
 * Register : mpuregion1addr_limitext
 * 
 * limit extended definition for MPU Region 1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                       
 * :-------|:-------|:------|:---------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT_OFST        0x2c

/*
 * Register : mpuregion2addr_base
 * 
 * Base definition for MPU Region 2
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                    
 * :--------|:-------|:------|:------------------------------------------------
 *  [15:0]  | R      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_LOW 
 *  [31:16] | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the base address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_OFST        0x30

/*
 * Register : mpuregion2addr_baseext
 * 
 * base extended definition for MPU Region 2
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                      
 * :-------|:-------|:------|:--------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT_OFST        0x34

/*
 * Register : mpuregion2addr_limit
 * 
 * Limit definition for MPU Region 2
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset  | Description                                     
 * :--------|:-------|:-------|:-------------------------------------------------
 *  [15:0]  | R      | 0xffff | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_LOW 
 *  [31:16] | RW     | 0x0    | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_LOW_RESET      0xffff
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the limit address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_RESET       0x0000ffff
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_OFST        0x38

/*
 * Register : mpuregion2addr_limitext
 * 
 * limit extended definition for MPU Region 2
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                       
 * :-------|:-------|:------|:---------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT_OFST        0x3c

/*
 * Register : mpuregion3addr_base
 * 
 * Base definition for MPU Region 3
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                    
 * :--------|:-------|:------|:------------------------------------------------
 *  [15:0]  | R      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_LOW 
 *  [31:16] | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the base address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_OFST        0x40

/*
 * Register : mpuregion3addr_baseext
 * 
 * base extended definition for MPU Region 3
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                      
 * :-------|:-------|:------|:--------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT_OFST        0x44

/*
 * Register : mpuregion3addr_limit
 * 
 * Limit definition for MPU Region 3
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset  | Description                                     
 * :--------|:-------|:-------|:-------------------------------------------------
 *  [15:0]  | R      | 0xffff | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_LOW 
 *  [31:16] | RW     | 0x0    | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_LOW_RESET      0xffff
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the limit address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_RESET       0x0000ffff
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_OFST        0x48

/*
 * Register : mpuregion3addr_limitext
 * 
 * limit extended definition for MPU Region 3
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                       
 * :-------|:-------|:------|:---------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT_OFST        0x4c

/*
 * Register : mpuregion4addr_base
 * 
 * Base definition for MPU Region 4
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                    
 * :--------|:-------|:------|:------------------------------------------------
 *  [15:0]  | R      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_LOW 
 *  [31:16] | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the base address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_OFST        0x50

/*
 * Register : mpuregion4addr_baseext
 * 
 * base extended definition for MPU Region 4
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                      
 * :-------|:-------|:------|:--------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT_OFST        0x54

/*
 * Register : mpuregion4addr_limit
 * 
 * Limit definition for MPU Region 4
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset  | Description                                     
 * :--------|:-------|:-------|:-------------------------------------------------
 *  [15:0]  | R      | 0xffff | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_LOW 
 *  [31:16] | RW     | 0x0    | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_LOW_RESET      0xffff
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the limit address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_RESET       0x0000ffff
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_OFST        0x58

/*
 * Register : mpuregion4addr_limitext
 * 
 * limit extended definition for MPU Region 4
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                       
 * :-------|:-------|:------|:---------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT_OFST        0x5c

/*
 * Register : mpuregion5addr_base
 * 
 * Base definition for MPU Region 5
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                    
 * :--------|:-------|:------|:------------------------------------------------
 *  [15:0]  | R      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_LOW 
 *  [31:16] | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the base address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_OFST        0x60

/*
 * Register : mpuregion5addr_baseext
 * 
 * base extended definition for MPU Region 5
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                      
 * :-------|:-------|:------|:--------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT_OFST        0x64

/*
 * Register : mpuregion5addr_limit
 * 
 * Limit definition for MPU Region 5
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset  | Description                                     
 * :--------|:-------|:-------|:-------------------------------------------------
 *  [15:0]  | R      | 0xffff | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_LOW 
 *  [31:16] | RW     | 0x0    | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_LOW_RESET      0xffff
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the limit address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_RESET       0x0000ffff
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_OFST        0x68

/*
 * Register : mpuregion5addr_limitext
 * 
 * limit extended definition for MPU Region 5
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                       
 * :-------|:-------|:------|:---------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT_OFST        0x6c

/*
 * Register : mpuregion6addr_base
 * 
 * Base definition for MPU Region 6
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                    
 * :--------|:-------|:------|:------------------------------------------------
 *  [15:0]  | R      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_LOW 
 *  [31:16] | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the base address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_OFST        0x70

/*
 * Register : mpuregion6addr_baseext
 * 
 * base extended definition for MPU Region 6
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                      
 * :-------|:-------|:------|:--------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT_OFST        0x74

/*
 * Register : mpuregion6addr_limit
 * 
 * Limit definition for MPU Region 6
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset  | Description                                     
 * :--------|:-------|:-------|:-------------------------------------------------
 *  [15:0]  | R      | 0xffff | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_LOW 
 *  [31:16] | RW     | 0x0    | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_LOW_RESET      0xffff
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the limit address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_RESET       0x0000ffff
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_OFST        0x78

/*
 * Register : mpuregion6addr_limitext
 * 
 * limit extended definition for MPU Region 6
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                       
 * :-------|:-------|:------|:---------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT_OFST        0x7c

/*
 * Register : mpuregion7addr_base
 * 
 * Base definition for MPU Region 7
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                    
 * :--------|:-------|:------|:------------------------------------------------
 *  [15:0]  | R      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_LOW 
 *  [31:16] | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the base address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_OFST        0x80

/*
 * Register : mpuregion7addr_baseext
 * 
 * base extended definition for MPU Region 7
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                      
 * :-------|:-------|:------|:--------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT_OFST        0x84

/*
 * Register : mpuregion7addr_limit
 * 
 * Limit definition for MPU Region 7
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset  | Description                                     
 * :--------|:-------|:-------|:-------------------------------------------------
 *  [15:0]  | R      | 0xffff | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_LOW 
 *  [31:16] | RW     | 0x0    | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_LOW_RESET      0xffff
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the limit address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_RESET       0x0000ffff
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_OFST        0x88

/*
 * Register : mpuregion7addr_limitext
 * 
 * limit extended definition for MPU Region 7
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                       
 * :-------|:-------|:------|:---------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT_s  ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT_OFST        0x8c

/*
 * Register : nonmpuregion0addr_base
 * 
 * Base definition for non MPU Region 0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                       
 * :--------|:-------|:------|:---------------------------------------------------
 *  [15:0]  | R      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_LOW 
 *  [31:16] | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the base address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_OFST        0x90

/*
 * Register : nonmpuregion0addr_baseext
 * 
 * base extended definition for non MPU Region 0
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                         
 * :-------|:-------|:------|:-----------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT_OFST        0x94

/*
 * Register : nonmpuregion0addr_limit
 * 
 * Limit definition for non MPU Region 0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset  | Description                                        
 * :--------|:-------|:-------|:----------------------------------------------------
 *  [15:0]  | R      | 0xffff | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_LOW 
 *  [31:16] | RW     | 0x0    | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_LOW_RESET      0xffff
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the limit address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_RESET       0x0000ffff
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_OFST        0x98

/*
 * Register : nonmpuregion0addr_limitext
 * 
 * limit extended definition for non MPU Region 0
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                          
 * :-------|:-------|:------|:------------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT_OFST        0x9c

/*
 * Register : nonmpuregion1addr_base
 * 
 * Base definition for non MPU Region 1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                       
 * :--------|:-------|:------|:---------------------------------------------------
 *  [15:0]  | R      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_LOW 
 *  [31:16] | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the base address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_OFST        0xa0

/*
 * Register : nonmpuregion1addr_baseext
 * 
 * base extended definition for non MPU Region 1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                         
 * :-------|:-------|:------|:-----------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT_OFST        0xa4

/*
 * Register : nonmpuregion1addr_limit
 * 
 * Limit definition for non MPU Region 1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset  | Description                                        
 * :--------|:-------|:-------|:----------------------------------------------------
 *  [15:0]  | R      | 0xffff | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_LOW 
 *  [31:16] | RW     | 0x0    | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_LOW_RESET      0xffff
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the limit address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_RESET       0x0000ffff
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_OFST        0xa8

/*
 * Register : nonmpuregion1addr_limitext
 * 
 * limit extended definition for non MPU Region 1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                          
 * :-------|:-------|:------|:------------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT_OFST        0xac

/*
 * Register : nonmpuregion2addr_base
 * 
 * Base definition for non MPU Region 2
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                       
 * :--------|:-------|:------|:---------------------------------------------------
 *  [15:0]  | R      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_LOW 
 *  [31:16] | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the base address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_OFST        0xb0

/*
 * Register : nonmpuregion2addr_baseext
 * 
 * base extended definition for non MPU Region 2
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                         
 * :-------|:-------|:------|:-----------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT_OFST        0xb4

/*
 * Register : nonmpuregion2addr_limit
 * 
 * Limit definition for non MPU Region 2
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset  | Description                                        
 * :--------|:-------|:-------|:----------------------------------------------------
 *  [15:0]  | R      | 0xffff | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_LOW 
 *  [31:16] | RW     | 0x0    | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_LOW_RESET      0xffff
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the limit address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_RESET       0x0000ffff
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_OFST        0xb8

/*
 * Register : nonmpuregion2addr_limitext
 * 
 * limit extended definition for non MPU Region 2
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                          
 * :-------|:-------|:------|:------------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT_OFST        0xbc

/*
 * Register : nonmpuregion3addr_base
 * 
 * Base definition for non MPU Region 3
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                       
 * :--------|:-------|:------|:---------------------------------------------------
 *  [15:0]  | R      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_LOW 
 *  [31:16] | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the base address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_OFST        0xc0

/*
 * Register : nonmpuregion3addr_baseext
 * 
 * base extended definition for non MPU Region 3
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                         
 * :-------|:-------|:------|:-----------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT_OFST        0xc4

/*
 * Register : nonmpuregion3addr_limit
 * 
 * Limit definition for non MPU Region 3
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset  | Description                                        
 * :--------|:-------|:-------|:----------------------------------------------------
 *  [15:0]  | R      | 0xffff | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_LOW 
 *  [31:16] | RW     | 0x0    | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_LOW_RESET      0xffff
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the limit address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_RESET       0x0000ffff
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_OFST        0xc8

/*
 * Register : nonmpuregion3addr_limitext
 * 
 * limit extended definition for non MPU Region 3
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                          
 * :-------|:-------|:------|:------------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT_OFST        0xcc

/*
 * Register : nonmpuregion4addr_base
 * 
 * Base definition for non MPU Region 4
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                       
 * :--------|:-------|:------|:---------------------------------------------------
 *  [15:0]  | R      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_LOW 
 *  [31:16] | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the base address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_OFST        0xd0

/*
 * Register : nonmpuregion4addr_baseext
 * 
 * base extended definition for non MPU Region 4
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                         
 * :-------|:-------|:------|:-----------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT_OFST        0xd4

/*
 * Register : nonmpuregion4addr_limit
 * 
 * Limit definition for non MPU Region 4
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset  | Description                                        
 * :--------|:-------|:-------|:----------------------------------------------------
 *  [15:0]  | R      | 0xffff | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_LOW 
 *  [31:16] | RW     | 0x0    | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_LOW_RESET      0xffff
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the limit address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_RESET       0x0000ffff
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_OFST        0xd8

/*
 * Register : nonmpuregion4addr_limitext
 * 
 * limit extended definition for non MPU Region 4
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                          
 * :-------|:-------|:------|:------------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT_OFST        0xdc

/*
 * Register : nonmpuregion5addr_base
 * 
 * Base definition for non MPU Region 5
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                       
 * :--------|:-------|:------|:---------------------------------------------------
 *  [15:0]  | R      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_LOW 
 *  [31:16] | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the base address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_OFST        0xe0

/*
 * Register : nonmpuregion5addr_baseext
 * 
 * base extended definition for non MPU Region 5
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                         
 * :-------|:-------|:------|:-----------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT_OFST        0xe4

/*
 * Register : nonmpuregion5addr_limit
 * 
 * Limit definition for non MPU Region 5
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset  | Description                                        
 * :--------|:-------|:-------|:----------------------------------------------------
 *  [15:0]  | R      | 0xffff | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_LOW 
 *  [31:16] | RW     | 0x0    | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_LOW_RESET      0xffff
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the limit address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_RESET       0x0000ffff
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_OFST        0xe8

/*
 * Register : nonmpuregion5addr_limitext
 * 
 * limit extended definition for non MPU Region 5
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                          
 * :-------|:-------|:------|:------------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT_OFST        0xec

/*
 * Register : nonmpuregion6addr_base
 * 
 * Base definition for non MPU Region 6
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                       
 * :--------|:-------|:------|:---------------------------------------------------
 *  [15:0]  | R      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_LOW 
 *  [31:16] | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the base address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_OFST        0xf0

/*
 * Register : nonmpuregion6addr_baseext
 * 
 * base extended definition for non MPU Region 6
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                         
 * :-------|:-------|:------|:-----------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT_OFST        0xf4

/*
 * Register : nonmpuregion6addr_limit
 * 
 * Limit definition for non MPU Region 6
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset  | Description                                        
 * :--------|:-------|:-------|:----------------------------------------------------
 *  [15:0]  | R      | 0xffff | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_LOW 
 *  [31:16] | RW     | 0x0    | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_LOW_RESET      0xffff
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the limit address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_RESET       0x0000ffff
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_OFST        0xf8

/*
 * Register : nonmpuregion6addr_limitext
 * 
 * limit extended definition for non MPU Region 6
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                          
 * :-------|:-------|:------|:------------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT_OFST        0xfc

/*
 * Register : nonmpuregion7addr_base
 * 
 * Base definition for non MPU Region 7
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                       
 * :--------|:-------|:------|:---------------------------------------------------
 *  [15:0]  | R      | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_LOW 
 *  [31:16] | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the base address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_OFST        0x100

/*
 * Register : nonmpuregion7addr_baseext
 * 
 * base extended definition for non MPU Region 7
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                         
 * :-------|:-------|:------|:-----------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT_OFST        0x104

/*
 * Register : nonmpuregion7addr_limit
 * 
 * Limit definition for non MPU Region 7
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset  | Description                                        
 * :--------|:-------|:-------|:----------------------------------------------------
 *  [15:0]  | R      | 0xffff | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_LOW 
 *  [31:16] | RW     | 0x0    | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_HIGH
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_LOW_MSB        15
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_LOW_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_LOW_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_LOW_CLR_MSK    0xffff0000
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_LOW_RESET      0xffff
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_LOW_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_LOW_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : high
 * 
 * defines the 16 bit MSB of the limit address field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_HIGH_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_HIGH_MSB        31
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_HIGH_WIDTH      16
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_HIGH_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_HIGH register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_HIGH_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_HIGH register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_HIGH_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_HIGH field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_HIGH_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_HIGH register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_HIGH_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_s
{
    const volatile uint32_t  low  : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_LOW */
    volatile uint32_t        high : 16;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_HIGH */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_RESET       0x0000ffff
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_OFST        0x108

/*
 * Register : nonmpuregion7addr_limitext
 * 
 * limit extended definition for non MPU Region 7
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                          
 * :-------|:-------|:------|:------------------------------------------------------
 *  [4:0]  | RW     | 0x0   | ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT_LOW
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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT_LOW_MSB        4
/* The width in bits of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT_LOW_WIDTH      5
/* The mask used to set the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT_LOW_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT_LOW register field value. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT_LOW_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT_LOW register field. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT_LOW_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT_LOW field value from a register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT_LOW_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT_LOW register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT_LOW_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT_s
{
    volatile uint32_t  low :  5;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT_LOW */
    uint32_t               : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT_s  ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT register. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT register from the beginning of the component. */
#define ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT_OFST        0x10c

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
 * The struct declaration for register group ALT_SOC_NOC_FW_DDR_SCR.
 */
struct ALT_SOC_NOC_FW_DDR_SCR_s
{
    volatile ALT_SOC_NOC_FW_DDR_SCR_ENABLE_t                      enable;                      /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE */
    volatile ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET_t                  enable_set;                  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET */
    volatile ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR_t                enable_clear;                /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR */
    volatile uint32_t                                             _pad_0xc_0xf;                /* *UNDEFINED* */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE_t         mpuregion0addr_base;         /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT_t      mpuregion0addr_baseext;      /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT_t        mpuregion0addr_limit;        /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT_t     mpuregion0addr_limitext;     /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE_t         mpuregion1addr_base;         /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT_t      mpuregion1addr_baseext;      /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT_t        mpuregion1addr_limit;        /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT_t     mpuregion1addr_limitext;     /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE_t         mpuregion2addr_base;         /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT_t      mpuregion2addr_baseext;      /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT_t        mpuregion2addr_limit;        /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT_t     mpuregion2addr_limitext;     /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE_t         mpuregion3addr_base;         /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT_t      mpuregion3addr_baseext;      /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT_t        mpuregion3addr_limit;        /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT_t     mpuregion3addr_limitext;     /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE_t         mpuregion4addr_base;         /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT_t      mpuregion4addr_baseext;      /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT_t        mpuregion4addr_limit;        /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT_t     mpuregion4addr_limitext;     /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE_t         mpuregion5addr_base;         /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT_t      mpuregion5addr_baseext;      /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT_t        mpuregion5addr_limit;        /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT_t     mpuregion5addr_limitext;     /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE_t         mpuregion6addr_base;         /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT_t      mpuregion6addr_baseext;      /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT_t        mpuregion6addr_limit;        /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT_t     mpuregion6addr_limitext;     /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE_t         mpuregion7addr_base;         /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT_t      mpuregion7addr_baseext;      /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT_t        mpuregion7addr_limit;        /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT_t     mpuregion7addr_limitext;     /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE_t      nonmpuregion0addr_base;      /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT_t   nonmpuregion0addr_baseext;   /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT_t     nonmpuregion0addr_limit;     /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT_t  nonmpuregion0addr_limitext;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE_t      nonmpuregion1addr_base;      /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT_t   nonmpuregion1addr_baseext;   /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT_t     nonmpuregion1addr_limit;     /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT_t  nonmpuregion1addr_limitext;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE_t      nonmpuregion2addr_base;      /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT_t   nonmpuregion2addr_baseext;   /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT_t     nonmpuregion2addr_limit;     /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT_t  nonmpuregion2addr_limitext;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE_t      nonmpuregion3addr_base;      /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT_t   nonmpuregion3addr_baseext;   /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT_t     nonmpuregion3addr_limit;     /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT_t  nonmpuregion3addr_limitext;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE_t      nonmpuregion4addr_base;      /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT_t   nonmpuregion4addr_baseext;   /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT_t     nonmpuregion4addr_limit;     /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT_t  nonmpuregion4addr_limitext;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE_t      nonmpuregion5addr_base;      /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT_t   nonmpuregion5addr_baseext;   /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT_t     nonmpuregion5addr_limit;     /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT_t  nonmpuregion5addr_limitext;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE_t      nonmpuregion6addr_base;      /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT_t   nonmpuregion6addr_baseext;   /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT_t     nonmpuregion6addr_limit;     /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT_t  nonmpuregion6addr_limitext;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE_t      nonmpuregion7addr_base;      /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT_t   nonmpuregion7addr_baseext;   /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT_t     nonmpuregion7addr_limit;     /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT */
    volatile ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT_t  nonmpuregion7addr_limitext;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT */
    volatile uint32_t                                             _pad_0x110_0x100;            /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_SOC_NOC_FW_DDR_SCR. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_s  ALT_SOC_NOC_FW_DDR_SCR_t;
/* The struct declaration for the raw register contents of register group ALT_SOC_NOC_FW_DDR_SCR. */
struct ALT_SOC_NOC_FW_DDR_SCR_raw_s
{
    volatile uint32_t  enable;                      /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE */
    volatile uint32_t  enable_set;                  /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_SET */
    volatile uint32_t  enable_clear;                /* ALT_SOC_NOC_FW_DDR_SCR_ENABLE_CLEAR */
    volatile uint32_t  _pad_0xc_0xf;                /* *UNDEFINED* */
    volatile uint32_t  mpuregion0addr_base;         /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASE */
    volatile uint32_t  mpuregion0addr_baseext;      /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_BASEEXT */
    volatile uint32_t  mpuregion0addr_limit;        /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMIT */
    volatile uint32_t  mpuregion0addr_limitext;     /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION0ADDR_LIMITEXT */
    volatile uint32_t  mpuregion1addr_base;         /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASE */
    volatile uint32_t  mpuregion1addr_baseext;      /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_BASEEXT */
    volatile uint32_t  mpuregion1addr_limit;        /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMIT */
    volatile uint32_t  mpuregion1addr_limitext;     /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION1ADDR_LIMITEXT */
    volatile uint32_t  mpuregion2addr_base;         /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASE */
    volatile uint32_t  mpuregion2addr_baseext;      /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_BASEEXT */
    volatile uint32_t  mpuregion2addr_limit;        /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMIT */
    volatile uint32_t  mpuregion2addr_limitext;     /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION2ADDR_LIMITEXT */
    volatile uint32_t  mpuregion3addr_base;         /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASE */
    volatile uint32_t  mpuregion3addr_baseext;      /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_BASEEXT */
    volatile uint32_t  mpuregion3addr_limit;        /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMIT */
    volatile uint32_t  mpuregion3addr_limitext;     /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION3ADDR_LIMITEXT */
    volatile uint32_t  mpuregion4addr_base;         /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASE */
    volatile uint32_t  mpuregion4addr_baseext;      /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_BASEEXT */
    volatile uint32_t  mpuregion4addr_limit;        /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMIT */
    volatile uint32_t  mpuregion4addr_limitext;     /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION4ADDR_LIMITEXT */
    volatile uint32_t  mpuregion5addr_base;         /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASE */
    volatile uint32_t  mpuregion5addr_baseext;      /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_BASEEXT */
    volatile uint32_t  mpuregion5addr_limit;        /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMIT */
    volatile uint32_t  mpuregion5addr_limitext;     /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION5ADDR_LIMITEXT */
    volatile uint32_t  mpuregion6addr_base;         /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASE */
    volatile uint32_t  mpuregion6addr_baseext;      /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_BASEEXT */
    volatile uint32_t  mpuregion6addr_limit;        /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMIT */
    volatile uint32_t  mpuregion6addr_limitext;     /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION6ADDR_LIMITEXT */
    volatile uint32_t  mpuregion7addr_base;         /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASE */
    volatile uint32_t  mpuregion7addr_baseext;      /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_BASEEXT */
    volatile uint32_t  mpuregion7addr_limit;        /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMIT */
    volatile uint32_t  mpuregion7addr_limitext;     /* ALT_SOC_NOC_FW_DDR_SCR_MPUREGION7ADDR_LIMITEXT */
    volatile uint32_t  nonmpuregion0addr_base;      /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASE */
    volatile uint32_t  nonmpuregion0addr_baseext;   /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_BASEEXT */
    volatile uint32_t  nonmpuregion0addr_limit;     /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMIT */
    volatile uint32_t  nonmpuregion0addr_limitext;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION0ADDR_LIMITEXT */
    volatile uint32_t  nonmpuregion1addr_base;      /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASE */
    volatile uint32_t  nonmpuregion1addr_baseext;   /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_BASEEXT */
    volatile uint32_t  nonmpuregion1addr_limit;     /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMIT */
    volatile uint32_t  nonmpuregion1addr_limitext;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION1ADDR_LIMITEXT */
    volatile uint32_t  nonmpuregion2addr_base;      /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASE */
    volatile uint32_t  nonmpuregion2addr_baseext;   /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_BASEEXT */
    volatile uint32_t  nonmpuregion2addr_limit;     /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMIT */
    volatile uint32_t  nonmpuregion2addr_limitext;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION2ADDR_LIMITEXT */
    volatile uint32_t  nonmpuregion3addr_base;      /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASE */
    volatile uint32_t  nonmpuregion3addr_baseext;   /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_BASEEXT */
    volatile uint32_t  nonmpuregion3addr_limit;     /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMIT */
    volatile uint32_t  nonmpuregion3addr_limitext;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION3ADDR_LIMITEXT */
    volatile uint32_t  nonmpuregion4addr_base;      /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASE */
    volatile uint32_t  nonmpuregion4addr_baseext;   /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_BASEEXT */
    volatile uint32_t  nonmpuregion4addr_limit;     /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMIT */
    volatile uint32_t  nonmpuregion4addr_limitext;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION4ADDR_LIMITEXT */
    volatile uint32_t  nonmpuregion5addr_base;      /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASE */
    volatile uint32_t  nonmpuregion5addr_baseext;   /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_BASEEXT */
    volatile uint32_t  nonmpuregion5addr_limit;     /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMIT */
    volatile uint32_t  nonmpuregion5addr_limitext;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION5ADDR_LIMITEXT */
    volatile uint32_t  nonmpuregion6addr_base;      /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASE */
    volatile uint32_t  nonmpuregion6addr_baseext;   /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_BASEEXT */
    volatile uint32_t  nonmpuregion6addr_limit;     /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMIT */
    volatile uint32_t  nonmpuregion6addr_limitext;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION6ADDR_LIMITEXT */
    volatile uint32_t  nonmpuregion7addr_base;      /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASE */
    volatile uint32_t  nonmpuregion7addr_baseext;   /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_BASEEXT */
    volatile uint32_t  nonmpuregion7addr_limit;     /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMIT */
    volatile uint32_t  nonmpuregion7addr_limitext;  /* ALT_SOC_NOC_FW_DDR_SCR_NONMPUREGION7ADDR_LIMITEXT */
    volatile uint32_t  _pad_0x110_0x100;            /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_SOC_NOC_FW_DDR_SCR. */
typedef struct ALT_SOC_NOC_FW_DDR_SCR_raw_s  ALT_SOC_NOC_FW_DDR_SCR_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_SOC_NOC_FW_DDR_SCR_H__ */

