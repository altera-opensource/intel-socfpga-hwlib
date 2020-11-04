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

/* Altera - ALT_NOC_FW_H2F_SCR */

#ifndef __ALT_SOCAL_NOC_FW_H2F_SCR_H__
#define __ALT_SOCAL_NOC_FW_H2F_SCR_H__

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
 * Component : ALT_NOC_FW_H2F_SCR
 * 
 */
/*
 * Register : lwsoc2fpga
 * 
 * Per-Master Security bit for Lightweight SOC2FPGA
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                    
 * :--------|:-------|:------|:--------------------------------
 *  [0]     | RW     | 0x0   | ALT_NOC_FW_H2F_SCR_LWH2F_MPU_M0
 *  [7:1]   | ???    | 0x0   | *UNDEFINED*                    
 *  [8]     | RW     | 0x0   | ALT_NOC_FW_H2F_SCR_LWH2F_DMA   
 *  [16:9]  | ???    | 0x0   | *UNDEFINED*                    
 *  [17]    | RW     | 0x0   | ALT_NOC_FW_H2F_SCR_LWH2F_EMAC0 
 *  [18]    | RW     | 0x0   | ALT_NOC_FW_H2F_SCR_LWH2F_EMAC1 
 *  [19]    | RW     | 0x0   | ALT_NOC_FW_H2F_SCR_LWH2F_EMAC2 
 *  [20]    | RW     | 0x0   | ALT_NOC_FW_H2F_SCR_LWH2F_USB0  
 *  [21]    | RW     | 0x0   | ALT_NOC_FW_H2F_SCR_LWH2F_USB1  
 *  [22]    | RW     | 0x0   | ALT_NOC_FW_H2F_SCR_LWH2F_SDMMC 
 *  [23]    | RW     | 0x0   | ALT_NOC_FW_H2F_SCR_LWH2F_NAND  
 *  [24]    | RW     | 0x0   | ALT_NOC_FW_H2F_SCR_LWH2F_AHB_AP
 *  [25]    | RW     | 0x0   | ALT_NOC_FW_H2F_SCR_LWH2F_ETR   
 *  [31:26] | ???    | 0x0   | *UNDEFINED*                    
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu0 to lwsoc2fpga. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_H2F_SCR_LWH2F_MPU_M0 register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_H2F_SCR_LWH2F_MPU_M0 register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_H2F_SCR_LWH2F_MPU_M0 register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_H2F_SCR_LWH2F_MPU_M0 register field value. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_H2F_SCR_LWH2F_MPU_M0 register field value. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_H2F_SCR_LWH2F_MPU_M0 register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_H2F_SCR_LWH2F_MPU_M0 field value from a register. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_H2F_SCR_LWH2F_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to lwsoc2fpga. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_H2F_SCR_LWH2F_DMA register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_H2F_SCR_LWH2F_DMA register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_H2F_SCR_LWH2F_DMA register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_H2F_SCR_LWH2F_DMA register field value. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_H2F_SCR_LWH2F_DMA register field value. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_H2F_SCR_LWH2F_DMA register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_H2F_SCR_LWH2F_DMA field value from a register. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_H2F_SCR_LWH2F_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : emac0
 * 
 * Security bit configuration for transactions from emac0 to lwsoc2fpga. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_H2F_SCR_LWH2F_EMAC0 register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_EMAC0_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_H2F_SCR_LWH2F_EMAC0 register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_EMAC0_MSB        17
/* The width in bits of the ALT_NOC_FW_H2F_SCR_LWH2F_EMAC0 register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_EMAC0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_H2F_SCR_LWH2F_EMAC0 register field value. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_EMAC0_SET_MSK    0x00020000
/* The mask used to clear the ALT_NOC_FW_H2F_SCR_LWH2F_EMAC0 register field value. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_EMAC0_CLR_MSK    0xfffdffff
/* The reset value of the ALT_NOC_FW_H2F_SCR_LWH2F_EMAC0 register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_EMAC0_RESET      0x0
/* Extracts the ALT_NOC_FW_H2F_SCR_LWH2F_EMAC0 field value from a register. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_EMAC0_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_NOC_FW_H2F_SCR_LWH2F_EMAC0 register field value suitable for setting the register. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_EMAC0_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : emac1
 * 
 * Security bit configuration for transactions from emac1 to lwsoc2fpga. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_H2F_SCR_LWH2F_EMAC1 register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_EMAC1_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_H2F_SCR_LWH2F_EMAC1 register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_EMAC1_MSB        18
/* The width in bits of the ALT_NOC_FW_H2F_SCR_LWH2F_EMAC1 register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_EMAC1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_H2F_SCR_LWH2F_EMAC1 register field value. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_EMAC1_SET_MSK    0x00040000
/* The mask used to clear the ALT_NOC_FW_H2F_SCR_LWH2F_EMAC1 register field value. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_EMAC1_CLR_MSK    0xfffbffff
/* The reset value of the ALT_NOC_FW_H2F_SCR_LWH2F_EMAC1 register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_EMAC1_RESET      0x0
/* Extracts the ALT_NOC_FW_H2F_SCR_LWH2F_EMAC1 field value from a register. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_EMAC1_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_NOC_FW_H2F_SCR_LWH2F_EMAC1 register field value suitable for setting the register. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_EMAC1_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : emac2
 * 
 * Security bit configuration for transactions from emac2 to lwsoc2fpga. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_H2F_SCR_LWH2F_EMAC2 register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_EMAC2_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_H2F_SCR_LWH2F_EMAC2 register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_EMAC2_MSB        19
/* The width in bits of the ALT_NOC_FW_H2F_SCR_LWH2F_EMAC2 register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_EMAC2_WIDTH      1
/* The mask used to set the ALT_NOC_FW_H2F_SCR_LWH2F_EMAC2 register field value. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_EMAC2_SET_MSK    0x00080000
/* The mask used to clear the ALT_NOC_FW_H2F_SCR_LWH2F_EMAC2 register field value. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_EMAC2_CLR_MSK    0xfff7ffff
/* The reset value of the ALT_NOC_FW_H2F_SCR_LWH2F_EMAC2 register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_EMAC2_RESET      0x0
/* Extracts the ALT_NOC_FW_H2F_SCR_LWH2F_EMAC2 field value from a register. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_EMAC2_GET(value) (((value) & 0x00080000) >> 19)
/* Produces a ALT_NOC_FW_H2F_SCR_LWH2F_EMAC2 register field value suitable for setting the register. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_EMAC2_SET(value) (((value) << 19) & 0x00080000)

/*
 * Field : usb0
 * 
 * Security bit configuration for transactions from usb0 to lwsoc2fpga. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_H2F_SCR_LWH2F_USB0 register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_USB0_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_H2F_SCR_LWH2F_USB0 register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_USB0_MSB        20
/* The width in bits of the ALT_NOC_FW_H2F_SCR_LWH2F_USB0 register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_USB0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_H2F_SCR_LWH2F_USB0 register field value. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_USB0_SET_MSK    0x00100000
/* The mask used to clear the ALT_NOC_FW_H2F_SCR_LWH2F_USB0 register field value. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_USB0_CLR_MSK    0xffefffff
/* The reset value of the ALT_NOC_FW_H2F_SCR_LWH2F_USB0 register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_USB0_RESET      0x0
/* Extracts the ALT_NOC_FW_H2F_SCR_LWH2F_USB0 field value from a register. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_USB0_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_NOC_FW_H2F_SCR_LWH2F_USB0 register field value suitable for setting the register. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_USB0_SET(value) (((value) << 20) & 0x00100000)

/*
 * Field : usb1
 * 
 * Security bit configuration for transactions from usb1 to lwsoc2fpga. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_H2F_SCR_LWH2F_USB1 register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_USB1_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_H2F_SCR_LWH2F_USB1 register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_USB1_MSB        21
/* The width in bits of the ALT_NOC_FW_H2F_SCR_LWH2F_USB1 register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_USB1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_H2F_SCR_LWH2F_USB1 register field value. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_USB1_SET_MSK    0x00200000
/* The mask used to clear the ALT_NOC_FW_H2F_SCR_LWH2F_USB1 register field value. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_USB1_CLR_MSK    0xffdfffff
/* The reset value of the ALT_NOC_FW_H2F_SCR_LWH2F_USB1 register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_USB1_RESET      0x0
/* Extracts the ALT_NOC_FW_H2F_SCR_LWH2F_USB1 field value from a register. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_USB1_GET(value) (((value) & 0x00200000) >> 21)
/* Produces a ALT_NOC_FW_H2F_SCR_LWH2F_USB1 register field value suitable for setting the register. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_USB1_SET(value) (((value) << 21) & 0x00200000)

/*
 * Field : sdmmc
 * 
 * Security bit configuration for transactions from sdmmc to lwsoc2fpga. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_H2F_SCR_LWH2F_SDMMC register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_SDMMC_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_H2F_SCR_LWH2F_SDMMC register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_SDMMC_MSB        22
/* The width in bits of the ALT_NOC_FW_H2F_SCR_LWH2F_SDMMC register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_SDMMC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_H2F_SCR_LWH2F_SDMMC register field value. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_SDMMC_SET_MSK    0x00400000
/* The mask used to clear the ALT_NOC_FW_H2F_SCR_LWH2F_SDMMC register field value. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_SDMMC_CLR_MSK    0xffbfffff
/* The reset value of the ALT_NOC_FW_H2F_SCR_LWH2F_SDMMC register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_SDMMC_RESET      0x0
/* Extracts the ALT_NOC_FW_H2F_SCR_LWH2F_SDMMC field value from a register. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_SDMMC_GET(value) (((value) & 0x00400000) >> 22)
/* Produces a ALT_NOC_FW_H2F_SCR_LWH2F_SDMMC register field value suitable for setting the register. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_SDMMC_SET(value) (((value) << 22) & 0x00400000)

/*
 * Field : nand
 * 
 * Security bit configuration for transactions from nand to lwsoc2fpga. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_H2F_SCR_LWH2F_NAND register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_NAND_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_H2F_SCR_LWH2F_NAND register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_NAND_MSB        23
/* The width in bits of the ALT_NOC_FW_H2F_SCR_LWH2F_NAND register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_NAND_WIDTH      1
/* The mask used to set the ALT_NOC_FW_H2F_SCR_LWH2F_NAND register field value. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_NAND_SET_MSK    0x00800000
/* The mask used to clear the ALT_NOC_FW_H2F_SCR_LWH2F_NAND register field value. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_NAND_CLR_MSK    0xff7fffff
/* The reset value of the ALT_NOC_FW_H2F_SCR_LWH2F_NAND register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_NAND_RESET      0x0
/* Extracts the ALT_NOC_FW_H2F_SCR_LWH2F_NAND field value from a register. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_NAND_GET(value) (((value) & 0x00800000) >> 23)
/* Produces a ALT_NOC_FW_H2F_SCR_LWH2F_NAND register field value suitable for setting the register. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_NAND_SET(value) (((value) << 23) & 0x00800000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to lwsoc2fpga. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_H2F_SCR_LWH2F_AHB_AP register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_H2F_SCR_LWH2F_AHB_AP register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_H2F_SCR_LWH2F_AHB_AP register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_H2F_SCR_LWH2F_AHB_AP register field value. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_H2F_SCR_LWH2F_AHB_AP register field value. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_H2F_SCR_LWH2F_AHB_AP register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_H2F_SCR_LWH2F_AHB_AP field value from a register. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_H2F_SCR_LWH2F_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : etr
 * 
 * Security bit configuration for transactions from etr to lwsoc2fpga. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_H2F_SCR_LWH2F_ETR register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_ETR_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_H2F_SCR_LWH2F_ETR register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_ETR_MSB        25
/* The width in bits of the ALT_NOC_FW_H2F_SCR_LWH2F_ETR register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_ETR_WIDTH      1
/* The mask used to set the ALT_NOC_FW_H2F_SCR_LWH2F_ETR register field value. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_ETR_SET_MSK    0x02000000
/* The mask used to clear the ALT_NOC_FW_H2F_SCR_LWH2F_ETR register field value. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_ETR_CLR_MSK    0xfdffffff
/* The reset value of the ALT_NOC_FW_H2F_SCR_LWH2F_ETR register field. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_ETR_RESET      0x0
/* Extracts the ALT_NOC_FW_H2F_SCR_LWH2F_ETR field value from a register. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_ETR_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_NOC_FW_H2F_SCR_LWH2F_ETR register field value suitable for setting the register. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_ETR_SET(value) (((value) << 25) & 0x02000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_H2F_SCR_LWH2F.
 */
struct ALT_NOC_FW_H2F_SCR_LWH2F_s
{
    uint32_t  mpu_m0 :  1;  /* ALT_NOC_FW_H2F_SCR_LWH2F_MPU_M0 */
    uint32_t         :  7;  /* *UNDEFINED* */
    uint32_t  dma    :  1;  /* ALT_NOC_FW_H2F_SCR_LWH2F_DMA */
    uint32_t         :  8;  /* *UNDEFINED* */
    uint32_t  emac0  :  1;  /* ALT_NOC_FW_H2F_SCR_LWH2F_EMAC0 */
    uint32_t  emac1  :  1;  /* ALT_NOC_FW_H2F_SCR_LWH2F_EMAC1 */
    uint32_t  emac2  :  1;  /* ALT_NOC_FW_H2F_SCR_LWH2F_EMAC2 */
    uint32_t  usb0   :  1;  /* ALT_NOC_FW_H2F_SCR_LWH2F_USB0 */
    uint32_t  usb1   :  1;  /* ALT_NOC_FW_H2F_SCR_LWH2F_USB1 */
    uint32_t  sdmmc  :  1;  /* ALT_NOC_FW_H2F_SCR_LWH2F_SDMMC */
    uint32_t  nand   :  1;  /* ALT_NOC_FW_H2F_SCR_LWH2F_NAND */
    uint32_t  ahb_ap :  1;  /* ALT_NOC_FW_H2F_SCR_LWH2F_AHB_AP */
    uint32_t  etr    :  1;  /* ALT_NOC_FW_H2F_SCR_LWH2F_ETR */
    uint32_t         :  6;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_H2F_SCR_LWH2F. */
typedef volatile struct ALT_NOC_FW_H2F_SCR_LWH2F_s  ALT_NOC_FW_H2F_SCR_LWH2F_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_H2F_SCR_LWH2F register. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_H2F_SCR_LWH2F register from the beginning of the component. */
#define ALT_NOC_FW_H2F_SCR_LWH2F_OFST        0x0

/*
 * Register : soc2fpga
 * 
 * Per-Master Security bit for SOC2FPGA
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                  
 * :--------|:-------|:------|:------------------------------
 *  [0]     | RW     | 0x0   | ALT_NOC_FW_H2F_SCR_H2F_MPU_M0
 *  [7:1]   | ???    | 0x0   | *UNDEFINED*                  
 *  [8]     | RW     | 0x0   | ALT_NOC_FW_H2F_SCR_H2F_DMA   
 *  [16:9]  | ???    | 0x0   | *UNDEFINED*                  
 *  [17]    | RW     | 0x0   | ALT_NOC_FW_H2F_SCR_H2F_EMAC0 
 *  [18]    | RW     | 0x0   | ALT_NOC_FW_H2F_SCR_H2F_EMAC1 
 *  [19]    | RW     | 0x0   | ALT_NOC_FW_H2F_SCR_H2F_EMAC2 
 *  [20]    | RW     | 0x0   | ALT_NOC_FW_H2F_SCR_H2F_USB0  
 *  [21]    | RW     | 0x0   | ALT_NOC_FW_H2F_SCR_H2F_USB1  
 *  [22]    | RW     | 0x0   | ALT_NOC_FW_H2F_SCR_H2F_SDMMC 
 *  [23]    | RW     | 0x0   | ALT_NOC_FW_H2F_SCR_H2F_NAND  
 *  [24]    | RW     | 0x0   | ALT_NOC_FW_H2F_SCR_H2F_AHB_AP
 *  [25]    | RW     | 0x0   | ALT_NOC_FW_H2F_SCR_H2F_ETR   
 *  [31:26] | ???    | 0x0   | *UNDEFINED*                  
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu0 to soc2fpga. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_H2F_SCR_H2F_MPU_M0 register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_H2F_SCR_H2F_MPU_M0 register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_H2F_SCR_H2F_MPU_M0 register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_H2F_SCR_H2F_MPU_M0 register field value. */
#define ALT_NOC_FW_H2F_SCR_H2F_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_H2F_SCR_H2F_MPU_M0 register field value. */
#define ALT_NOC_FW_H2F_SCR_H2F_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_H2F_SCR_H2F_MPU_M0 register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_H2F_SCR_H2F_MPU_M0 field value from a register. */
#define ALT_NOC_FW_H2F_SCR_H2F_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_H2F_SCR_H2F_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_H2F_SCR_H2F_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to soc2fpga. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_H2F_SCR_H2F_DMA register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_H2F_SCR_H2F_DMA register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_H2F_SCR_H2F_DMA register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_H2F_SCR_H2F_DMA register field value. */
#define ALT_NOC_FW_H2F_SCR_H2F_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_H2F_SCR_H2F_DMA register field value. */
#define ALT_NOC_FW_H2F_SCR_H2F_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_H2F_SCR_H2F_DMA register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_H2F_SCR_H2F_DMA field value from a register. */
#define ALT_NOC_FW_H2F_SCR_H2F_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_H2F_SCR_H2F_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_H2F_SCR_H2F_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : emac0
 * 
 * Security bit configuration for transactions from emac0 to soc2fpga. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_H2F_SCR_H2F_EMAC0 register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_EMAC0_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_H2F_SCR_H2F_EMAC0 register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_EMAC0_MSB        17
/* The width in bits of the ALT_NOC_FW_H2F_SCR_H2F_EMAC0 register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_EMAC0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_H2F_SCR_H2F_EMAC0 register field value. */
#define ALT_NOC_FW_H2F_SCR_H2F_EMAC0_SET_MSK    0x00020000
/* The mask used to clear the ALT_NOC_FW_H2F_SCR_H2F_EMAC0 register field value. */
#define ALT_NOC_FW_H2F_SCR_H2F_EMAC0_CLR_MSK    0xfffdffff
/* The reset value of the ALT_NOC_FW_H2F_SCR_H2F_EMAC0 register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_EMAC0_RESET      0x0
/* Extracts the ALT_NOC_FW_H2F_SCR_H2F_EMAC0 field value from a register. */
#define ALT_NOC_FW_H2F_SCR_H2F_EMAC0_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_NOC_FW_H2F_SCR_H2F_EMAC0 register field value suitable for setting the register. */
#define ALT_NOC_FW_H2F_SCR_H2F_EMAC0_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : emac1
 * 
 * Security bit configuration for transactions from emac1 to soc2fpga. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_H2F_SCR_H2F_EMAC1 register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_EMAC1_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_H2F_SCR_H2F_EMAC1 register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_EMAC1_MSB        18
/* The width in bits of the ALT_NOC_FW_H2F_SCR_H2F_EMAC1 register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_EMAC1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_H2F_SCR_H2F_EMAC1 register field value. */
#define ALT_NOC_FW_H2F_SCR_H2F_EMAC1_SET_MSK    0x00040000
/* The mask used to clear the ALT_NOC_FW_H2F_SCR_H2F_EMAC1 register field value. */
#define ALT_NOC_FW_H2F_SCR_H2F_EMAC1_CLR_MSK    0xfffbffff
/* The reset value of the ALT_NOC_FW_H2F_SCR_H2F_EMAC1 register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_EMAC1_RESET      0x0
/* Extracts the ALT_NOC_FW_H2F_SCR_H2F_EMAC1 field value from a register. */
#define ALT_NOC_FW_H2F_SCR_H2F_EMAC1_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_NOC_FW_H2F_SCR_H2F_EMAC1 register field value suitable for setting the register. */
#define ALT_NOC_FW_H2F_SCR_H2F_EMAC1_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : emac2
 * 
 * Security bit configuration for transactions from emac2 to soc2fpga. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_H2F_SCR_H2F_EMAC2 register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_EMAC2_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_H2F_SCR_H2F_EMAC2 register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_EMAC2_MSB        19
/* The width in bits of the ALT_NOC_FW_H2F_SCR_H2F_EMAC2 register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_EMAC2_WIDTH      1
/* The mask used to set the ALT_NOC_FW_H2F_SCR_H2F_EMAC2 register field value. */
#define ALT_NOC_FW_H2F_SCR_H2F_EMAC2_SET_MSK    0x00080000
/* The mask used to clear the ALT_NOC_FW_H2F_SCR_H2F_EMAC2 register field value. */
#define ALT_NOC_FW_H2F_SCR_H2F_EMAC2_CLR_MSK    0xfff7ffff
/* The reset value of the ALT_NOC_FW_H2F_SCR_H2F_EMAC2 register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_EMAC2_RESET      0x0
/* Extracts the ALT_NOC_FW_H2F_SCR_H2F_EMAC2 field value from a register. */
#define ALT_NOC_FW_H2F_SCR_H2F_EMAC2_GET(value) (((value) & 0x00080000) >> 19)
/* Produces a ALT_NOC_FW_H2F_SCR_H2F_EMAC2 register field value suitable for setting the register. */
#define ALT_NOC_FW_H2F_SCR_H2F_EMAC2_SET(value) (((value) << 19) & 0x00080000)

/*
 * Field : usb0
 * 
 * Security bit configuration for transactions from usb0 to soc2fpga. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_H2F_SCR_H2F_USB0 register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_USB0_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_H2F_SCR_H2F_USB0 register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_USB0_MSB        20
/* The width in bits of the ALT_NOC_FW_H2F_SCR_H2F_USB0 register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_USB0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_H2F_SCR_H2F_USB0 register field value. */
#define ALT_NOC_FW_H2F_SCR_H2F_USB0_SET_MSK    0x00100000
/* The mask used to clear the ALT_NOC_FW_H2F_SCR_H2F_USB0 register field value. */
#define ALT_NOC_FW_H2F_SCR_H2F_USB0_CLR_MSK    0xffefffff
/* The reset value of the ALT_NOC_FW_H2F_SCR_H2F_USB0 register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_USB0_RESET      0x0
/* Extracts the ALT_NOC_FW_H2F_SCR_H2F_USB0 field value from a register. */
#define ALT_NOC_FW_H2F_SCR_H2F_USB0_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_NOC_FW_H2F_SCR_H2F_USB0 register field value suitable for setting the register. */
#define ALT_NOC_FW_H2F_SCR_H2F_USB0_SET(value) (((value) << 20) & 0x00100000)

/*
 * Field : usb1
 * 
 * Security bit configuration for transactions from usb1 to soc2fpga. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_H2F_SCR_H2F_USB1 register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_USB1_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_H2F_SCR_H2F_USB1 register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_USB1_MSB        21
/* The width in bits of the ALT_NOC_FW_H2F_SCR_H2F_USB1 register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_USB1_WIDTH      1
/* The mask used to set the ALT_NOC_FW_H2F_SCR_H2F_USB1 register field value. */
#define ALT_NOC_FW_H2F_SCR_H2F_USB1_SET_MSK    0x00200000
/* The mask used to clear the ALT_NOC_FW_H2F_SCR_H2F_USB1 register field value. */
#define ALT_NOC_FW_H2F_SCR_H2F_USB1_CLR_MSK    0xffdfffff
/* The reset value of the ALT_NOC_FW_H2F_SCR_H2F_USB1 register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_USB1_RESET      0x0
/* Extracts the ALT_NOC_FW_H2F_SCR_H2F_USB1 field value from a register. */
#define ALT_NOC_FW_H2F_SCR_H2F_USB1_GET(value) (((value) & 0x00200000) >> 21)
/* Produces a ALT_NOC_FW_H2F_SCR_H2F_USB1 register field value suitable for setting the register. */
#define ALT_NOC_FW_H2F_SCR_H2F_USB1_SET(value) (((value) << 21) & 0x00200000)

/*
 * Field : sdmmc
 * 
 * Security bit configuration for transactions from sdmmc to soc2fpga. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_H2F_SCR_H2F_SDMMC register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_SDMMC_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_H2F_SCR_H2F_SDMMC register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_SDMMC_MSB        22
/* The width in bits of the ALT_NOC_FW_H2F_SCR_H2F_SDMMC register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_SDMMC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_H2F_SCR_H2F_SDMMC register field value. */
#define ALT_NOC_FW_H2F_SCR_H2F_SDMMC_SET_MSK    0x00400000
/* The mask used to clear the ALT_NOC_FW_H2F_SCR_H2F_SDMMC register field value. */
#define ALT_NOC_FW_H2F_SCR_H2F_SDMMC_CLR_MSK    0xffbfffff
/* The reset value of the ALT_NOC_FW_H2F_SCR_H2F_SDMMC register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_SDMMC_RESET      0x0
/* Extracts the ALT_NOC_FW_H2F_SCR_H2F_SDMMC field value from a register. */
#define ALT_NOC_FW_H2F_SCR_H2F_SDMMC_GET(value) (((value) & 0x00400000) >> 22)
/* Produces a ALT_NOC_FW_H2F_SCR_H2F_SDMMC register field value suitable for setting the register. */
#define ALT_NOC_FW_H2F_SCR_H2F_SDMMC_SET(value) (((value) << 22) & 0x00400000)

/*
 * Field : nand
 * 
 * Security bit configuration for transactions from nand to soc2fpga. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_H2F_SCR_H2F_NAND register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_NAND_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_H2F_SCR_H2F_NAND register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_NAND_MSB        23
/* The width in bits of the ALT_NOC_FW_H2F_SCR_H2F_NAND register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_NAND_WIDTH      1
/* The mask used to set the ALT_NOC_FW_H2F_SCR_H2F_NAND register field value. */
#define ALT_NOC_FW_H2F_SCR_H2F_NAND_SET_MSK    0x00800000
/* The mask used to clear the ALT_NOC_FW_H2F_SCR_H2F_NAND register field value. */
#define ALT_NOC_FW_H2F_SCR_H2F_NAND_CLR_MSK    0xff7fffff
/* The reset value of the ALT_NOC_FW_H2F_SCR_H2F_NAND register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_NAND_RESET      0x0
/* Extracts the ALT_NOC_FW_H2F_SCR_H2F_NAND field value from a register. */
#define ALT_NOC_FW_H2F_SCR_H2F_NAND_GET(value) (((value) & 0x00800000) >> 23)
/* Produces a ALT_NOC_FW_H2F_SCR_H2F_NAND register field value suitable for setting the register. */
#define ALT_NOC_FW_H2F_SCR_H2F_NAND_SET(value) (((value) << 23) & 0x00800000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to soc2fpga. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_H2F_SCR_H2F_AHB_AP register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_H2F_SCR_H2F_AHB_AP register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_H2F_SCR_H2F_AHB_AP register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_H2F_SCR_H2F_AHB_AP register field value. */
#define ALT_NOC_FW_H2F_SCR_H2F_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_H2F_SCR_H2F_AHB_AP register field value. */
#define ALT_NOC_FW_H2F_SCR_H2F_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_H2F_SCR_H2F_AHB_AP register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_H2F_SCR_H2F_AHB_AP field value from a register. */
#define ALT_NOC_FW_H2F_SCR_H2F_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_H2F_SCR_H2F_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_H2F_SCR_H2F_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : etr
 * 
 * Security bit configuration for transactions from etr to soc2fpga. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_H2F_SCR_H2F_ETR register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_ETR_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_H2F_SCR_H2F_ETR register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_ETR_MSB        25
/* The width in bits of the ALT_NOC_FW_H2F_SCR_H2F_ETR register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_ETR_WIDTH      1
/* The mask used to set the ALT_NOC_FW_H2F_SCR_H2F_ETR register field value. */
#define ALT_NOC_FW_H2F_SCR_H2F_ETR_SET_MSK    0x02000000
/* The mask used to clear the ALT_NOC_FW_H2F_SCR_H2F_ETR register field value. */
#define ALT_NOC_FW_H2F_SCR_H2F_ETR_CLR_MSK    0xfdffffff
/* The reset value of the ALT_NOC_FW_H2F_SCR_H2F_ETR register field. */
#define ALT_NOC_FW_H2F_SCR_H2F_ETR_RESET      0x0
/* Extracts the ALT_NOC_FW_H2F_SCR_H2F_ETR field value from a register. */
#define ALT_NOC_FW_H2F_SCR_H2F_ETR_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_NOC_FW_H2F_SCR_H2F_ETR register field value suitable for setting the register. */
#define ALT_NOC_FW_H2F_SCR_H2F_ETR_SET(value) (((value) << 25) & 0x02000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_H2F_SCR_H2F.
 */
struct ALT_NOC_FW_H2F_SCR_H2F_s
{
    uint32_t  mpu_m0 :  1;  /* ALT_NOC_FW_H2F_SCR_H2F_MPU_M0 */
    uint32_t         :  7;  /* *UNDEFINED* */
    uint32_t  dma    :  1;  /* ALT_NOC_FW_H2F_SCR_H2F_DMA */
    uint32_t         :  8;  /* *UNDEFINED* */
    uint32_t  emac0  :  1;  /* ALT_NOC_FW_H2F_SCR_H2F_EMAC0 */
    uint32_t  emac1  :  1;  /* ALT_NOC_FW_H2F_SCR_H2F_EMAC1 */
    uint32_t  emac2  :  1;  /* ALT_NOC_FW_H2F_SCR_H2F_EMAC2 */
    uint32_t  usb0   :  1;  /* ALT_NOC_FW_H2F_SCR_H2F_USB0 */
    uint32_t  usb1   :  1;  /* ALT_NOC_FW_H2F_SCR_H2F_USB1 */
    uint32_t  sdmmc  :  1;  /* ALT_NOC_FW_H2F_SCR_H2F_SDMMC */
    uint32_t  nand   :  1;  /* ALT_NOC_FW_H2F_SCR_H2F_NAND */
    uint32_t  ahb_ap :  1;  /* ALT_NOC_FW_H2F_SCR_H2F_AHB_AP */
    uint32_t  etr    :  1;  /* ALT_NOC_FW_H2F_SCR_H2F_ETR */
    uint32_t         :  6;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_H2F_SCR_H2F. */
typedef volatile struct ALT_NOC_FW_H2F_SCR_H2F_s  ALT_NOC_FW_H2F_SCR_H2F_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_H2F_SCR_H2F register. */
#define ALT_NOC_FW_H2F_SCR_H2F_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_H2F_SCR_H2F register from the beginning of the component. */
#define ALT_NOC_FW_H2F_SCR_H2F_OFST        0x4

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_NOC_FW_H2F_SCR.
 */
struct ALT_NOC_FW_H2F_SCR_s
{
    ALT_NOC_FW_H2F_SCR_LWH2F_t  lwsoc2fpga;          /* ALT_NOC_FW_H2F_SCR_LWH2F */
    ALT_NOC_FW_H2F_SCR_H2F_t    soc2fpga;            /* ALT_NOC_FW_H2F_SCR_H2F */
    volatile uint32_t           _pad_0x8_0x100[62];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_FW_H2F_SCR. */
typedef volatile struct ALT_NOC_FW_H2F_SCR_s  ALT_NOC_FW_H2F_SCR_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_FW_H2F_SCR. */
struct ALT_NOC_FW_H2F_SCR_raw_s
{
    volatile uint32_t  lwsoc2fpga;          /* ALT_NOC_FW_H2F_SCR_LWH2F */
    volatile uint32_t  soc2fpga;            /* ALT_NOC_FW_H2F_SCR_H2F */
    uint32_t           _pad_0x8_0x100[62];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_FW_H2F_SCR. */
typedef volatile struct ALT_NOC_FW_H2F_SCR_raw_s  ALT_NOC_FW_H2F_SCR_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_NOC_FW_H2F_SCR_H__ */

