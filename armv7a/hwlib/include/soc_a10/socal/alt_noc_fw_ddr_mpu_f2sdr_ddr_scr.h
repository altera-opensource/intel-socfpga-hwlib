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

/* Altera - ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR */

#ifndef __ALT_SOCAL_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_H__
#define __ALT_SOCAL_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_H__

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
 * Component : ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR
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
 * :--------|:-------|:------|:-------------------------------------------------
 *  [0]     | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG0EN   
 *  [1]     | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG1EN   
 *  [2]     | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG2EN   
 *  [3]     | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG3EN   
 *  [4]     | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG0EN
 *  [5]     | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG1EN
 *  [6]     | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG2EN
 *  [7]     | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG3EN
 *  [8]     | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG0EN
 *  [9]     | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG1EN
 *  [10]    | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG2EN
 *  [11]    | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG3EN
 *  [12]    | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG0EN
 *  [13]    | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG1EN
 *  [14]    | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG2EN
 *  [15]    | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG3EN
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG0EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG0EN_MSB        0
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG0EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG0EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG0EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG0EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG0EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG0EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG0EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG0EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG0EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG0EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : mpuregion1enable
 * 
 * MPU Region 1 Enable. Value of 1 means region is enabled, Value of 0 means region
 * is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG1EN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG1EN_MSB        1
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG1EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG1EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG1EN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG1EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG1EN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG1EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG1EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG1EN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG1EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG1EN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : mpuregion2enable
 * 
 * MPU Region 2 Enable. Value of 1 means region is enabled, Value of 0 means region
 * is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG2EN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG2EN_MSB        2
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG2EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG2EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG2EN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG2EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG2EN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG2EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG2EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG2EN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG2EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG2EN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : mpuregion3enable
 * 
 * MPU Region 3 Enable. Value of 1 means region is enabled, Value of 0 means region
 * is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG3EN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG3EN_MSB        3
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG3EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG3EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG3EN_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG3EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG3EN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG3EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG3EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG3EN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG3EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG3EN_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : fpga2sdram0region0enable
 * 
 * FPGA2SDRAM0 Region Enable. Value of 1 means region is enabled, Value of 0 means
 * region is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG0EN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG0EN_MSB        4
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG0EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG0EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG0EN_SET_MSK    0x00000010
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG0EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG0EN_CLR_MSK    0xffffffef
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG0EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG0EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG0EN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG0EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG0EN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : fpga2sdram0region1enable
 * 
 * FPGA2SDRAM0 Region Enable. Value of 1 means region is enabled, Value of 0 means
 * region is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG1EN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG1EN_MSB        5
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG1EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG1EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG1EN_SET_MSK    0x00000020
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG1EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG1EN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG1EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG1EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG1EN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG1EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG1EN_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : fpga2sdram0region2enable
 * 
 * FPGA2SDRAM0 Region Enable. Value of 1 means region is enabled, Value of 0 means
 * region is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG2EN_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG2EN_MSB        6
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG2EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG2EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG2EN_SET_MSK    0x00000040
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG2EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG2EN_CLR_MSK    0xffffffbf
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG2EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG2EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG2EN_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG2EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG2EN_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : fpga2sdram0region3enable
 * 
 * FPGA2SDRAM0 Region Enable. Value of 1 means region is enabled, Value of 0 means
 * region is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG3EN_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG3EN_MSB        7
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG3EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG3EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG3EN_SET_MSK    0x00000080
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG3EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG3EN_CLR_MSK    0xffffff7f
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG3EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG3EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG3EN_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG3EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG3EN_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : fpga2sdram1region0enable
 * 
 * FPGA2SDRAM1 Region Enable. Value of 1 means region is enabled, Value of 0 means
 * region is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG0EN_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG0EN_MSB        8
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG0EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG0EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG0EN_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG0EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG0EN_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG0EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG0EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG0EN_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG0EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG0EN_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2sdram1region1enable
 * 
 * FPGA2SDRAM1 Region Enable. Value of 1 means region is enabled, Value of 0 means
 * region is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG1EN_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG1EN_MSB        9
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG1EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG1EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG1EN_SET_MSK    0x00000200
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG1EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG1EN_CLR_MSK    0xfffffdff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG1EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG1EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG1EN_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG1EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG1EN_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : fpga2sdram1region2enable
 * 
 * FPGA2SDRAM1 Region Enable. Value of 1 means region is enabled, Value of 0 means
 * region is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG2EN_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG2EN_MSB        10
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG2EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG2EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG2EN_SET_MSK    0x00000400
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG2EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG2EN_CLR_MSK    0xfffffbff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG2EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG2EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG2EN_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG2EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG2EN_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : fpga2sdram1region3enable
 * 
 * FPGA2SDRAM1 Region Enable. Value of 1 means region is enabled, Value of 0 means
 * region is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG3EN_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG3EN_MSB        11
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG3EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG3EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG3EN_SET_MSK    0x00000800
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG3EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG3EN_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG3EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG3EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG3EN_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG3EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG3EN_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : fpga2sdram2region0enable
 * 
 * FPGA2SDRAM2 Region Enable. Value of 1 means region is enabled, Value of 0 means
 * region is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG0EN_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG0EN_MSB        12
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG0EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG0EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG0EN_SET_MSK    0x00001000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG0EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG0EN_CLR_MSK    0xffffefff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG0EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG0EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG0EN_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG0EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG0EN_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : fpga2sdram2region1enable
 * 
 * FPGA2SDRAM2 Region Enable. Value of 1 means region is enabled, Value of 0 means
 * region is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG1EN_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG1EN_MSB        13
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG1EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG1EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG1EN_SET_MSK    0x00002000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG1EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG1EN_CLR_MSK    0xffffdfff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG1EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG1EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG1EN_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG1EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG1EN_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : fpga2sdram2region2enable
 * 
 * FPGA2SDRAM2 Region Enable. Value of 1 means region is enabled, Value of 0 means
 * region is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG2EN_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG2EN_MSB        14
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG2EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG2EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG2EN_SET_MSK    0x00004000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG2EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG2EN_CLR_MSK    0xffffbfff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG2EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG2EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG2EN_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG2EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG2EN_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : fpga2sdram2region3enable
 * 
 * FPGA2SDRAM2 Region Enable. Value of 1 means region is enabled, Value of 0 means
 * region is disabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG3EN_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG3EN_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG3EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG3EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG3EN_SET_MSK    0x00008000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG3EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG3EN_CLR_MSK    0xffff7fff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG3EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG3EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG3EN_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG3EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG3EN_SET(value) (((value) << 15) & 0x00008000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN.
 */
struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_s
{
    uint32_t  mpuregion0enable         :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG0EN */
    uint32_t  mpuregion1enable         :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG1EN */
    uint32_t  mpuregion2enable         :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG2EN */
    uint32_t  mpuregion3enable         :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_MPUREG3EN */
    uint32_t  fpga2sdram0region0enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG0EN */
    uint32_t  fpga2sdram0region1enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG1EN */
    uint32_t  fpga2sdram0region2enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG2EN */
    uint32_t  fpga2sdram0region3enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR0REG3EN */
    uint32_t  fpga2sdram1region0enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG0EN */
    uint32_t  fpga2sdram1region1enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG1EN */
    uint32_t  fpga2sdram1region2enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG2EN */
    uint32_t  fpga2sdram1region3enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR1REG3EN */
    uint32_t  fpga2sdram2region0enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG0EN */
    uint32_t  fpga2sdram2region1enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG1EN */
    uint32_t  fpga2sdram2region2enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG2EN */
    uint32_t  fpga2sdram2region3enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_F2SDR2REG3EN */
    uint32_t                           : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN. */
typedef volatile struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_s  ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN register from the beginning of the component. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_OFST        0x0

/*
 * Register : enable_set
 * 
 * Sets Master Region Enable field when written with 1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                         
 * :--------|:-------|:------|:-----------------------------------------------------
 *  [0]     | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG0EN   
 *  [1]     | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG1EN   
 *  [2]     | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG2EN   
 *  [3]     | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG3EN   
 *  [4]     | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG0EN
 *  [5]     | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG1EN
 *  [6]     | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG2EN
 *  [7]     | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG3EN
 *  [8]     | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG0EN
 *  [9]     | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG1EN
 *  [10]    | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG2EN
 *  [11]    | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG3EN
 *  [12]    | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG0EN
 *  [13]    | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG1EN
 *  [14]    | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG2EN
 *  [15]    | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG3EN
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
 * Writing one will set the mpuregion0enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG0EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG0EN_MSB        0
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG0EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG0EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG0EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG0EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG0EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG0EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG0EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG0EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG0EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG0EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : mpuregion1enable
 * 
 * MPU Region 1 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the mpuregion1enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG1EN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG1EN_MSB        1
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG1EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG1EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG1EN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG1EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG1EN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG1EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG1EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG1EN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG1EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG1EN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : mpuregion2enable
 * 
 * MPU Region 2 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the mpuregion2enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG2EN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG2EN_MSB        2
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG2EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG2EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG2EN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG2EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG2EN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG2EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG2EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG2EN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG2EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG2EN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : mpuregion3enable
 * 
 * MPU Region 3 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the mpuregion3enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG3EN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG3EN_MSB        3
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG3EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG3EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG3EN_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG3EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG3EN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG3EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG3EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG3EN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG3EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG3EN_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : fpga2sdram0region0enable
 * 
 * FPGA2SDRAM0 Region 0 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the fpga2sdram0region0enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG0EN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG0EN_MSB        4
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG0EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG0EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG0EN_SET_MSK    0x00000010
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG0EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG0EN_CLR_MSK    0xffffffef
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG0EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG0EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG0EN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG0EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG0EN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : fpga2sdram0region1enable
 * 
 * FPGA2SDRAM0 Region 1 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the fpga2sdram0region1enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG1EN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG1EN_MSB        5
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG1EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG1EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG1EN_SET_MSK    0x00000020
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG1EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG1EN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG1EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG1EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG1EN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG1EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG1EN_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : fpga2sdram0region2enable
 * 
 * FPGA2SDRAM0 Region 2 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the fpga2sdram0region2enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG2EN_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG2EN_MSB        6
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG2EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG2EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG2EN_SET_MSK    0x00000040
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG2EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG2EN_CLR_MSK    0xffffffbf
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG2EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG2EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG2EN_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG2EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG2EN_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : fpga2sdram0region3enable
 * 
 * FPGA2SDRAM0 Region 3 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the fpga2sdram0region3enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG3EN_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG3EN_MSB        7
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG3EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG3EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG3EN_SET_MSK    0x00000080
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG3EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG3EN_CLR_MSK    0xffffff7f
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG3EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG3EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG3EN_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG3EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG3EN_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : fpga2sdram1region0enable
 * 
 * FPGA2SDRAM1 Region 0 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the fpga2sdram1region0enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG0EN_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG0EN_MSB        8
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG0EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG0EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG0EN_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG0EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG0EN_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG0EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG0EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG0EN_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG0EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG0EN_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2sdram1region1enable
 * 
 * FPGA2SDRAM1 Region 1 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the fpga2sdram1region1enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG1EN_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG1EN_MSB        9
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG1EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG1EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG1EN_SET_MSK    0x00000200
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG1EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG1EN_CLR_MSK    0xfffffdff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG1EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG1EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG1EN_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG1EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG1EN_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : fpga2sdram1region2enable
 * 
 * FPGA2SDRAM1 Region 2 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the fpga2sdram1region2enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG2EN_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG2EN_MSB        10
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG2EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG2EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG2EN_SET_MSK    0x00000400
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG2EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG2EN_CLR_MSK    0xfffffbff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG2EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG2EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG2EN_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG2EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG2EN_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : fpga2sdram1region3enable
 * 
 * FPGA2SDRAM1 Region 3 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the fpga2sdram1region3enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG3EN_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG3EN_MSB        11
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG3EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG3EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG3EN_SET_MSK    0x00000800
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG3EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG3EN_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG3EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG3EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG3EN_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG3EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG3EN_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : fpga2sdram2region0enable
 * 
 * FPGA2SDRAM2 Region 0 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the fpga2sdram2region0enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG0EN_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG0EN_MSB        12
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG0EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG0EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG0EN_SET_MSK    0x00001000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG0EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG0EN_CLR_MSK    0xffffefff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG0EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG0EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG0EN_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG0EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG0EN_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : fpga2sdram2region1enable
 * 
 * FPGA2SDRAM2 Region 1 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the fpga2sdram2region1enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG1EN_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG1EN_MSB        13
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG1EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG1EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG1EN_SET_MSK    0x00002000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG1EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG1EN_CLR_MSK    0xffffdfff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG1EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG1EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG1EN_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG1EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG1EN_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : fpga2sdram2region2enable
 * 
 * FPGA2SDRAM2 Region 2 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the fpga2sdram2region2enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG2EN_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG2EN_MSB        14
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG2EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG2EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG2EN_SET_MSK    0x00004000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG2EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG2EN_CLR_MSK    0xffffbfff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG2EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG2EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG2EN_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG2EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG2EN_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : fpga2sdram2region3enable
 * 
 * FPGA2SDRAM2 Region 3 Enable Set.
 * 
 * Writing zero has no effect
 * 
 * Writing one will set the fpga2sdram2region3enable bit to one
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG3EN_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG3EN_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG3EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG3EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG3EN_SET_MSK    0x00008000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG3EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG3EN_CLR_MSK    0xffff7fff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG3EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG3EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG3EN_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG3EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG3EN_SET(value) (((value) << 15) & 0x00008000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET.
 */
struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_s
{
    uint32_t  mpuregion0enable         :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG0EN */
    uint32_t  mpuregion1enable         :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG1EN */
    uint32_t  mpuregion2enable         :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG2EN */
    uint32_t  mpuregion3enable         :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_MPUREG3EN */
    uint32_t  fpga2sdram0region0enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG0EN */
    uint32_t  fpga2sdram0region1enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG1EN */
    uint32_t  fpga2sdram0region2enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG2EN */
    uint32_t  fpga2sdram0region3enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR0REG3EN */
    uint32_t  fpga2sdram1region0enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG0EN */
    uint32_t  fpga2sdram1region1enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG1EN */
    uint32_t  fpga2sdram1region2enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG2EN */
    uint32_t  fpga2sdram1region3enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR1REG3EN */
    uint32_t  fpga2sdram2region0enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG0EN */
    uint32_t  fpga2sdram2region1enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG1EN */
    uint32_t  fpga2sdram2region2enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG2EN */
    uint32_t  fpga2sdram2region3enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_F2SDR2REG3EN */
    uint32_t                           : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET. */
typedef volatile struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_s  ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET register from the beginning of the component. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_OFST        0x4

/*
 * Register : enable_clear
 * 
 * Clears Master Region Enable field when written with 1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                         
 * :--------|:-------|:------|:-----------------------------------------------------
 *  [0]     | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG0EN   
 *  [1]     | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG1EN   
 *  [2]     | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG2EN   
 *  [3]     | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG3EN   
 *  [4]     | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG0EN
 *  [5]     | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG1EN
 *  [6]     | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG2EN
 *  [7]     | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG3EN
 *  [8]     | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG0EN
 *  [9]     | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG1EN
 *  [10]    | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG2EN
 *  [11]    | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG3EN
 *  [12]    | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG0EN
 *  [13]    | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG1EN
 *  [14]    | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG2EN
 *  [15]    | W      | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG3EN
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
 * Writing one will clear the mpuregion0enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG0EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG0EN_MSB        0
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG0EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG0EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG0EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG0EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG0EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG0EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG0EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG0EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG0EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG0EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : mpuregion1enable
 * 
 * MPU Region 1 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the mpuregion1enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG1EN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG1EN_MSB        1
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG1EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG1EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG1EN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG1EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG1EN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG1EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG1EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG1EN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG1EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG1EN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : mpuregion2enable
 * 
 * MPU Region 2 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the mpuregion2enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG2EN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG2EN_MSB        2
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG2EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG2EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG2EN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG2EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG2EN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG2EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG2EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG2EN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG2EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG2EN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : mpuregion3enable
 * 
 * MPU Region 3 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the mpuregion3enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG3EN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG3EN_MSB        3
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG3EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG3EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG3EN_SET_MSK    0x00000008
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG3EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG3EN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG3EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG3EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG3EN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG3EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG3EN_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : fpga2sdram0region0enable
 * 
 * FPGA2SDRAM0 Region 0 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the fpga2sdram0region0enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG0EN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG0EN_MSB        4
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG0EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG0EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG0EN_SET_MSK    0x00000010
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG0EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG0EN_CLR_MSK    0xffffffef
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG0EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG0EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG0EN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG0EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG0EN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : fpga2sdram0region1enable
 * 
 * FPGA2SDRAM0 Region 1 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the fpga2sdram0region1enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG1EN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG1EN_MSB        5
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG1EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG1EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG1EN_SET_MSK    0x00000020
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG1EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG1EN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG1EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG1EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG1EN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG1EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG1EN_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : fpga2sdram0region2enable
 * 
 * FPGA2SDRAM0 Region 2 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the fpga2sdram0region2enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG2EN_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG2EN_MSB        6
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG2EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG2EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG2EN_SET_MSK    0x00000040
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG2EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG2EN_CLR_MSK    0xffffffbf
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG2EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG2EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG2EN_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG2EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG2EN_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : fpga2sdram0region3enable
 * 
 * FPGA2SDRAM0 Region 3 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the fpga2sdram0region3enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG3EN_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG3EN_MSB        7
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG3EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG3EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG3EN_SET_MSK    0x00000080
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG3EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG3EN_CLR_MSK    0xffffff7f
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG3EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG3EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG3EN_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG3EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG3EN_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : fpga2sdram1region0enable
 * 
 * FPGA2SDRAM1 Region 0 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the fpga2sdram1region0enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG0EN_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG0EN_MSB        8
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG0EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG0EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG0EN_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG0EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG0EN_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG0EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG0EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG0EN_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG0EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG0EN_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2sdram1region1enable
 * 
 * FPGA2SDRAM1 Region 1 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the fpga2sdram1region1enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG1EN_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG1EN_MSB        9
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG1EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG1EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG1EN_SET_MSK    0x00000200
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG1EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG1EN_CLR_MSK    0xfffffdff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG1EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG1EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG1EN_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG1EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG1EN_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : fpga2sdram1region2enable
 * 
 * FPGA2SDRAM1 Region 2 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the fpga2sdram1region2enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG2EN_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG2EN_MSB        10
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG2EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG2EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG2EN_SET_MSK    0x00000400
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG2EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG2EN_CLR_MSK    0xfffffbff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG2EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG2EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG2EN_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG2EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG2EN_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : fpga2sdram1region3enable
 * 
 * FPGA2SDRAM1 Region 3 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the fpga2sdram1region3enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG3EN_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG3EN_MSB        11
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG3EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG3EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG3EN_SET_MSK    0x00000800
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG3EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG3EN_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG3EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG3EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG3EN_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG3EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG3EN_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : fpga2sdram2region0enable
 * 
 * FPGA2SDRAM2 Region 0 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the fpga2sdram2region0enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG0EN_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG0EN_MSB        12
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG0EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG0EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG0EN_SET_MSK    0x00001000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG0EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG0EN_CLR_MSK    0xffffefff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG0EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG0EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG0EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG0EN_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG0EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG0EN_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : fpga2sdram2region1enable
 * 
 * FPGA2SDRAM2 Region 1 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the fpga2sdram2region1enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG1EN_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG1EN_MSB        13
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG1EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG1EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG1EN_SET_MSK    0x00002000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG1EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG1EN_CLR_MSK    0xffffdfff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG1EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG1EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG1EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG1EN_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG1EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG1EN_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : fpga2sdram2region2enable
 * 
 * FPGA2SDRAM2 Region 2 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the fpga2sdram2region2enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG2EN_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG2EN_MSB        14
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG2EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG2EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG2EN_SET_MSK    0x00004000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG2EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG2EN_CLR_MSK    0xffffbfff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG2EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG2EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG2EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG2EN_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG2EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG2EN_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : fpga2sdram2region3enable
 * 
 * FPGA2SDRAM2 Region 3 Enable Clear.
 * 
 * Writing zero has no effect
 * 
 * Writing one will clear the fpga2sdram2region3enable bit to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG3EN_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG3EN_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG3EN_WIDTH      1
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG3EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG3EN_SET_MSK    0x00008000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG3EN register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG3EN_CLR_MSK    0xffff7fff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG3EN register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG3EN_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG3EN field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG3EN_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG3EN register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG3EN_SET(value) (((value) << 15) & 0x00008000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR.
 */
struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_s
{
    uint32_t  mpuregion0enable         :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG0EN */
    uint32_t  mpuregion1enable         :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG1EN */
    uint32_t  mpuregion2enable         :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG2EN */
    uint32_t  mpuregion3enable         :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_MPUREG3EN */
    uint32_t  fpga2sdram0region0enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG0EN */
    uint32_t  fpga2sdram0region1enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG1EN */
    uint32_t  fpga2sdram0region2enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG2EN */
    uint32_t  fpga2sdram0region3enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR0REG3EN */
    uint32_t  fpga2sdram1region0enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG0EN */
    uint32_t  fpga2sdram1region1enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG1EN */
    uint32_t  fpga2sdram1region2enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG2EN */
    uint32_t  fpga2sdram1region3enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR1REG3EN */
    uint32_t  fpga2sdram2region0enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG0EN */
    uint32_t  fpga2sdram2region1enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG1EN */
    uint32_t  fpga2sdram2region2enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG2EN */
    uint32_t  fpga2sdram2region3enable :  1;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_F2SDR2REG3EN */
    uint32_t                           : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR. */
typedef volatile struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_s  ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_OFST        0x8

/*
 * Register : mpuregion0addr
 * 
 * Base and Limit definition for MPU Region 0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                       
 * :--------|:-------|:------|:---------------------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_BASE 
 *  [31:16] | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_LIMIT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_BASE_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_BASE_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_BASE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_BASE_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_BASE field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_BASE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_BASE_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : limit
 * 
 * Limit defines the 16 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 16'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_LIMIT_MSB        31
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_LIMIT_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_LIMIT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_LIMIT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_LIMIT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_LIMIT_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR.
 */
struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_s
{
    uint32_t  base  : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_BASE */
    uint32_t  limit : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_LIMIT */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR. */
typedef volatile struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_s  ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_OFST        0x10

/*
 * Register : mpuregion1addr
 * 
 * Base and Limit definition for MPU Region 1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                       
 * :--------|:-------|:------|:---------------------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_BASE 
 *  [31:16] | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_LIMIT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_BASE_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_BASE_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_BASE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_BASE_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_BASE field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_BASE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_BASE_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : limit
 * 
 * Limit defines the 16 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 16'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_LIMIT_MSB        31
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_LIMIT_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_LIMIT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_LIMIT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_LIMIT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_LIMIT_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR.
 */
struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_s
{
    uint32_t  base  : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_BASE */
    uint32_t  limit : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_LIMIT */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR. */
typedef volatile struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_s  ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_OFST        0x14

/*
 * Register : mpuregion2addr
 * 
 * Base and Limit definition for MPU Region 2
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                       
 * :--------|:-------|:------|:---------------------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_BASE 
 *  [31:16] | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_LIMIT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_BASE_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_BASE_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_BASE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_BASE_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_BASE field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_BASE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_BASE_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : limit
 * 
 * Limit defines the 16 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 16'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_LIMIT_MSB        31
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_LIMIT_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_LIMIT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_LIMIT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_LIMIT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_LIMIT_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR.
 */
struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_s
{
    uint32_t  base  : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_BASE */
    uint32_t  limit : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_LIMIT */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR. */
typedef volatile struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_s  ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_OFST        0x18

/*
 * Register : mpuregion3addr
 * 
 * Base and Limit definition for MPU Region 3
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                       
 * :--------|:-------|:------|:---------------------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_BASE 
 *  [31:16] | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_LIMIT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_BASE_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_BASE_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_BASE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_BASE_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_BASE field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_BASE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_BASE_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : limit
 * 
 * Limit defines the 16 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 16'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_LIMIT_MSB        31
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_LIMIT_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_LIMIT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_LIMIT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_LIMIT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_LIMIT_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR.
 */
struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_s
{
    uint32_t  base  : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_BASE */
    uint32_t  limit : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_LIMIT */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR. */
typedef volatile struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_s  ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_OFST        0x1c

/*
 * Register : fpga2sdram0region0addr
 * 
 * Base and Limit definition for FPGA2SDRAM0 Region 0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                          
 * :--------|:-------|:------|:------------------------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_BASE 
 *  [31:16] | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_LIMIT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_BASE_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_BASE_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_BASE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_BASE_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_BASE field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_BASE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_BASE_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : limit
 * 
 * Limit defines the 16 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 16'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_LIMIT_MSB        31
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_LIMIT_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_LIMIT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_LIMIT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_LIMIT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_LIMIT_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR.
 */
struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_s
{
    uint32_t  base  : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_BASE */
    uint32_t  limit : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_LIMIT */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR. */
typedef volatile struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_s  ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_OFST        0x20

/*
 * Register : fpga2sdram0region1addr
 * 
 * Base and Limit definition for FPGA2SDRAM0 Region 1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                          
 * :--------|:-------|:------|:------------------------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_BASE 
 *  [31:16] | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_LIMIT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_BASE_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_BASE_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_BASE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_BASE_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_BASE field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_BASE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_BASE_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : limit
 * 
 * Limit defines the 16 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 16'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_LIMIT_MSB        31
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_LIMIT_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_LIMIT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_LIMIT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_LIMIT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_LIMIT_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR.
 */
struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_s
{
    uint32_t  base  : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_BASE */
    uint32_t  limit : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_LIMIT */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR. */
typedef volatile struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_s  ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_OFST        0x24

/*
 * Register : fpga2sdram0region2addr
 * 
 * Base and Limit definition for FPGA2SDRAM0 Region 2
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                          
 * :--------|:-------|:------|:------------------------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_BASE 
 *  [31:16] | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_LIMIT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_BASE_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_BASE_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_BASE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_BASE_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_BASE field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_BASE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_BASE_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : limit
 * 
 * Limit defines the 16 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 16'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_LIMIT_MSB        31
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_LIMIT_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_LIMIT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_LIMIT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_LIMIT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_LIMIT_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR.
 */
struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_s
{
    uint32_t  base  : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_BASE */
    uint32_t  limit : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_LIMIT */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR. */
typedef volatile struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_s  ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_OFST        0x28

/*
 * Register : fpga2sdram0region3addr
 * 
 * Base and Limit definition for FPGA2SDRAM0 Region 3
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                          
 * :--------|:-------|:------|:------------------------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_BASE 
 *  [31:16] | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_LIMIT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_BASE_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_BASE_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_BASE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_BASE_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_BASE field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_BASE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_BASE_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : limit
 * 
 * Limit defines the 16 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 16'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_LIMIT_MSB        31
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_LIMIT_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_LIMIT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_LIMIT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_LIMIT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_LIMIT_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR.
 */
struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_s
{
    uint32_t  base  : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_BASE */
    uint32_t  limit : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_LIMIT */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR. */
typedef volatile struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_s  ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_OFST        0x2c

/*
 * Register : fpga2sdram1region0addr
 * 
 * Base and Limit definition for FPGA2SDRAM1 Region 0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                          
 * :--------|:-------|:------|:------------------------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_BASE 
 *  [31:16] | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_LIMIT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_BASE_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_BASE_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_BASE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_BASE_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_BASE field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_BASE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_BASE_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : limit
 * 
 * Limit defines the 16 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 16'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_LIMIT_MSB        31
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_LIMIT_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_LIMIT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_LIMIT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_LIMIT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_LIMIT_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR.
 */
struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_s
{
    uint32_t  base  : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_BASE */
    uint32_t  limit : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_LIMIT */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR. */
typedef volatile struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_s  ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_OFST        0x30

/*
 * Register : fpga2sdram1region1addr
 * 
 * Base and Limit definition for FPGA2SDRAM1 Region 1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                          
 * :--------|:-------|:------|:------------------------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_BASE 
 *  [31:16] | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_LIMIT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_BASE_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_BASE_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_BASE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_BASE_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_BASE field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_BASE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_BASE_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : limit
 * 
 * Limit defines the 16 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 16'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_LIMIT_MSB        31
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_LIMIT_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_LIMIT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_LIMIT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_LIMIT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_LIMIT_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR.
 */
struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_s
{
    uint32_t  base  : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_BASE */
    uint32_t  limit : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_LIMIT */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR. */
typedef volatile struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_s  ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_OFST        0x34

/*
 * Register : fpga2sdram1region2addr
 * 
 * Base and Limit definition for FPGA2SDRAM1 Region 2
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                          
 * :--------|:-------|:------|:------------------------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_BASE 
 *  [31:16] | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_LIMIT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_BASE_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_BASE_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_BASE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_BASE_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_BASE field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_BASE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_BASE_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : limit
 * 
 * Limit defines the 16 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 16'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_LIMIT_MSB        31
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_LIMIT_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_LIMIT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_LIMIT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_LIMIT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_LIMIT_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR.
 */
struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_s
{
    uint32_t  base  : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_BASE */
    uint32_t  limit : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_LIMIT */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR. */
typedef volatile struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_s  ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_OFST        0x38

/*
 * Register : fpga2sdram1region3addr
 * 
 * Base and Limit definition for FPGA2SDRAM1 Region 3
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                          
 * :--------|:-------|:------|:------------------------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_BASE 
 *  [31:16] | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_LIMIT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_BASE_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_BASE_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_BASE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_BASE_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_BASE field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_BASE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_BASE_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : limit
 * 
 * Limit defines the 16 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 16'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_LIMIT_MSB        31
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_LIMIT_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_LIMIT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_LIMIT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_LIMIT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_LIMIT_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR.
 */
struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_s
{
    uint32_t  base  : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_BASE */
    uint32_t  limit : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_LIMIT */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR. */
typedef volatile struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_s  ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_OFST        0x3c

/*
 * Register : fpga2sdram2region0addr
 * 
 * Base and Limit definition for FPGA2SDRAM2 Region 0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                          
 * :--------|:-------|:------|:------------------------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_BASE 
 *  [31:16] | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_LIMIT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_BASE_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_BASE_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_BASE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_BASE_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_BASE field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_BASE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_BASE_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : limit
 * 
 * Limit defines the 16 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 16'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_LIMIT_MSB        31
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_LIMIT_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_LIMIT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_LIMIT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_LIMIT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_LIMIT_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR.
 */
struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_s
{
    uint32_t  base  : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_BASE */
    uint32_t  limit : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_LIMIT */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR. */
typedef volatile struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_s  ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_OFST        0x40

/*
 * Register : fpga2sdram2region1addr
 * 
 * Base and Limit definition for FPGA2SDRAM2 Region 1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                          
 * :--------|:-------|:------|:------------------------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_BASE 
 *  [31:16] | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_LIMIT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_BASE_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_BASE_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_BASE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_BASE_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_BASE field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_BASE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_BASE_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : limit
 * 
 * Limit defines the 16 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 16'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_LIMIT_MSB        31
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_LIMIT_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_LIMIT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_LIMIT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_LIMIT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_LIMIT_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR.
 */
struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_s
{
    uint32_t  base  : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_BASE */
    uint32_t  limit : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_LIMIT */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR. */
typedef volatile struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_s  ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_OFST        0x44

/*
 * Register : fpga2sdram2region2addr
 * 
 * Base and Limit definition for FPGA2SDRAM2 Region 2
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                          
 * :--------|:-------|:------|:------------------------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_BASE 
 *  [31:16] | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_LIMIT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_BASE_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_BASE_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_BASE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_BASE_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_BASE field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_BASE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_BASE_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : limit
 * 
 * Limit defines the 16 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 16'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_LIMIT_MSB        31
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_LIMIT_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_LIMIT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_LIMIT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_LIMIT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_LIMIT_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR.
 */
struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_s
{
    uint32_t  base  : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_BASE */
    uint32_t  limit : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_LIMIT */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR. */
typedef volatile struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_s  ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_OFST        0x48

/*
 * Register : fpga2sdram2region3addr
 * 
 * Base and Limit definition for FPGA2SDRAM2 Region 3
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                          
 * :--------|:-------|:------|:------------------------------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_BASE 
 *  [31:16] | RW     | 0x0   | ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_LIMIT
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_BASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_BASE_MSB        15
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_BASE_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_BASE_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_BASE register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_BASE_CLR_MSK    0xffff0000
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_BASE register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_BASE_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_BASE field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_BASE_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_BASE register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_BASE_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : limit
 * 
 * Limit defines the 16 bit MSB of the address field. Remaining LSB field is all
 * ones. Region end address is {limit, 16'hFFF}
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_LIMIT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_LIMIT_MSB        31
/* The width in bits of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_LIMIT_WIDTH      16
/* The mask used to set the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_LIMIT_SET_MSK    0xffff0000
/* The mask used to clear the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_LIMIT register field value. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_LIMIT_CLR_MSK    0x0000ffff
/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_LIMIT register field. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_LIMIT_RESET      0x0
/* Extracts the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_LIMIT field value from a register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_LIMIT_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_LIMIT register field value suitable for setting the register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_LIMIT_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR.
 */
struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_s
{
    uint32_t  base  : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_BASE */
    uint32_t  limit : 16;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_LIMIT */
};

/* The typedef declaration for register ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR. */
typedef volatile struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_s  ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR register. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR register from the beginning of the component. */
#define ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_OFST        0x4c

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR.
 */
struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_s
{
    ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_t              enable;                  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN */
    ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET_t          enable_set;              /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET */
    ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR_t          enable_clear;            /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR */
    volatile uint32_t                                  _pad_0xc_0xf;            /* *UNDEFINED* */
    ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR_t     mpuregion0addr;          /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR */
    ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR_t     mpuregion1addr;          /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR */
    ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR_t     mpuregion2addr;          /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR */
    ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR_t     mpuregion3addr;          /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR */
    ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR_t  fpga2sdram0region0addr;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR */
    ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR_t  fpga2sdram0region1addr;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR */
    ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR_t  fpga2sdram0region2addr;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR */
    ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR_t  fpga2sdram0region3addr;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR */
    ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR_t  fpga2sdram1region0addr;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR */
    ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR_t  fpga2sdram1region1addr;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR */
    ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR_t  fpga2sdram1region2addr;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR */
    ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR_t  fpga2sdram1region3addr;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR */
    ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR_t  fpga2sdram2region0addr;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR */
    ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR_t  fpga2sdram2region1addr;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR */
    ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR_t  fpga2sdram2region2addr;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR */
    ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR_t  fpga2sdram2region3addr;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR */
    volatile uint32_t                                  _pad_0x50_0x100[44];     /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR. */
typedef volatile struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_s  ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR. */
struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_raw_s
{
    volatile uint32_t  enable;                  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN */
    volatile uint32_t  enable_set;              /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_SET */
    volatile uint32_t  enable_clear;            /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_EN_CLR */
    uint32_t           _pad_0xc_0xf;            /* *UNDEFINED* */
    volatile uint32_t  mpuregion0addr;          /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG0ADDR */
    volatile uint32_t  mpuregion1addr;          /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG1ADDR */
    volatile uint32_t  mpuregion2addr;          /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG2ADDR */
    volatile uint32_t  mpuregion3addr;          /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_MPUREG3ADDR */
    volatile uint32_t  fpga2sdram0region0addr;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG0ADDR */
    volatile uint32_t  fpga2sdram0region1addr;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG1ADDR */
    volatile uint32_t  fpga2sdram0region2addr;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG2ADDR */
    volatile uint32_t  fpga2sdram0region3addr;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR0REG3ADDR */
    volatile uint32_t  fpga2sdram1region0addr;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG0ADDR */
    volatile uint32_t  fpga2sdram1region1addr;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG1ADDR */
    volatile uint32_t  fpga2sdram1region2addr;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG2ADDR */
    volatile uint32_t  fpga2sdram1region3addr;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR1REG3ADDR */
    volatile uint32_t  fpga2sdram2region0addr;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG0ADDR */
    volatile uint32_t  fpga2sdram2region1addr;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG1ADDR */
    volatile uint32_t  fpga2sdram2region2addr;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG2ADDR */
    volatile uint32_t  fpga2sdram2region3addr;  /* ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_F2SDR2REG3ADDR */
    uint32_t           _pad_0x50_0x100[44];     /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR. */
typedef volatile struct ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_raw_s  ALT_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_NOC_FW_DDR_MPU_F2SDR_DDR_SCR_H__ */

