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

/* Altera - ALT_NOC_FW_L4_PER_SCR */

#ifndef __ALT_SOCAL_NOC_FW_L4_PER_SCR_H__
#define __ALT_SOCAL_NOC_FW_L4_PER_SCR_H__

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
 * Component : ALT_NOC_FW_L4_PER_SCR
 * 
 */
/*
 * Register : nand_register
 * 
 * Per-Master Security bit for nand register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                          
 * :--------|:-------|:--------|:--------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_NAND_REG_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                          
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_NAND_REG_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                          
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_NAND_REG_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                          
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_NAND_REG_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                          
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to nand_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_NAND_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_NAND_REG_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_NAND_REG_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_NAND_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_NAND_REG_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_NAND_REG_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to nand_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_REG_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_REG_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_NAND_REG_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_NAND_REG_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_NAND_REG_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_NAND_REG_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_NAND_REG_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_NAND_REG_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to nand_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_REG_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_REG_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_NAND_REG_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_NAND_REG_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_NAND_REG_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_NAND_REG_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_NAND_REG_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_NAND_REG_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to nand_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_NAND_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_NAND_REG_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_NAND_REG_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_NAND_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_NAND_REG_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_NAND_REG_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_NAND_REG.
 */
struct ALT_NOC_FW_L4_PER_SCR_NAND_REG_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_NAND_REG_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_NAND_REG_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_NAND_REG_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_NAND_REG_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_NAND_REG. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_NAND_REG_s  ALT_NOC_FW_L4_PER_SCR_NAND_REG_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_NAND_REG register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_NAND_REG register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REG_OFST        0x0

/*
 * Register : nand_data
 * 
 * Per-Master Security bit for nand_data
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                           
 * :--------|:-------|:--------|:---------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                           
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_NAND_DATA_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                           
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_NAND_DATA_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                           
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                           
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to nand_data. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to nand_data. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_NAND_DATA_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to nand_data. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_NAND_DATA_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to nand_data. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_NAND_DATA.
 */
struct ALT_NOC_FW_L4_PER_SCR_NAND_DATA_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_NAND_DATA_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_NAND_DATA_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_NAND_DATA. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_NAND_DATA_s  ALT_NOC_FW_L4_PER_SCR_NAND_DATA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_OFST        0x4

/*
 * Register : qspi_data
 * 
 * Per-Master Security bit for qspi_data
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                           
 * :--------|:-------|:--------|:---------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                           
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                           
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                           
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                           
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to qspi_data. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to qspi_data. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to qspi_data. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to qspi_data. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_QSPI_DATA.
 */
struct ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_QSPI_DATA. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_s  ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA register. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_QSPI_DATA register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_OFST        0x8

/*
 * Register : usb0_register
 * 
 * Per-Master Security bit for usb0_register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                          
 * :--------|:-------|:--------|:--------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_USB0_REG_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                          
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_USB0_REG_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                          
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_USB0_REG_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                          
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_USB0_REG_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                          
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to usb0_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_USB0_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_USB0_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_USB0_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_USB0_REG_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_USB0_REG_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_USB0_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_USB0_REG_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_USB0_REG_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to usb0_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_USB0_REG_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_USB0_REG_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_USB0_REG_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_USB0_REG_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_USB0_REG_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_USB0_REG_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_USB0_REG_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_USB0_REG_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to usb0_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_USB0_REG_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_USB0_REG_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_USB0_REG_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_USB0_REG_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_USB0_REG_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_USB0_REG_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_USB0_REG_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_USB0_REG_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to usb0_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_USB0_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_USB0_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_USB0_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_USB0_REG_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_USB0_REG_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_USB0_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_USB0_REG_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_USB0_REG_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_USB0_REG.
 */
struct ALT_NOC_FW_L4_PER_SCR_USB0_REG_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_USB0_REG_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_USB0_REG_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_USB0_REG_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_USB0_REG_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_USB0_REG. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_USB0_REG_s  ALT_NOC_FW_L4_PER_SCR_USB0_REG_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_USB0_REG register. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_USB0_REG register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REG_OFST        0xc

/*
 * Register : usb1_register
 * 
 * Per-Master Security bit for usb1_register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                          
 * :--------|:-------|:--------|:--------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_USB1_REG_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                          
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_USB1_REG_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                          
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_USB1_REG_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                          
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_USB1_REG_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                          
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to usb1_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_USB1_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_USB1_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_USB1_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_USB1_REG_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_USB1_REG_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_USB1_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_USB1_REG_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_USB1_REG_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to usb1_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_USB1_REG_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_USB1_REG_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_USB1_REG_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_USB1_REG_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_USB1_REG_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_USB1_REG_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_USB1_REG_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_USB1_REG_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to usb1_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_USB1_REG_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_USB1_REG_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_USB1_REG_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_USB1_REG_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_USB1_REG_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_USB1_REG_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_USB1_REG_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_USB1_REG_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to usb1_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_USB1_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_USB1_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_USB1_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_USB1_REG_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_USB1_REG_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_USB1_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_USB1_REG_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_USB1_REG_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_USB1_REG.
 */
struct ALT_NOC_FW_L4_PER_SCR_USB1_REG_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_USB1_REG_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_USB1_REG_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_USB1_REG_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_USB1_REG_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_USB1_REG. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_USB1_REG_s  ALT_NOC_FW_L4_PER_SCR_USB1_REG_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_USB1_REG register. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_USB1_REG register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REG_OFST        0x10

/*
 * Register : dma_nonsecure
 * 
 * Per-Master Security bit for dma_nonsecure
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                             
 * :-------|:-------|:------|:-----------------------------------------
 *  [31:0] | RW     | 0x1   | ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE_RSVD
 * 
 */
/*
 * Field : Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE_RSVD register field. */
#define ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE_RSVD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE_RSVD register field. */
#define ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE_RSVD_MSB        31
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE_RSVD register field. */
#define ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE_RSVD_WIDTH      32
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE_RSVD register field value. */
#define ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE_RSVD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE_RSVD register field value. */
#define ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE_RSVD_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE_RSVD register field. */
#define ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE_RSVD_RESET      0x1
/* Extracts the ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE_RSVD field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE_RSVD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE_RSVD register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE_RSVD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE.
 */
struct ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE_s
{
    uint32_t  Reserved : 32;  /* ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE_RSVD */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE_s  ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE register. */
#define ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE_RESET       0x00000001
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE_OFST        0x14

/*
 * Register : dma_secure
 * 
 * Per-Master Security bit for dma_secure
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                          
 * :-------|:-------|:------|:--------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_FW_L4_PER_SCR_DMA_SECURE_RSVD
 * 
 */
/*
 * Field : Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_DMA_SECURE_RSVD register field. */
#define ALT_NOC_FW_L4_PER_SCR_DMA_SECURE_RSVD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_DMA_SECURE_RSVD register field. */
#define ALT_NOC_FW_L4_PER_SCR_DMA_SECURE_RSVD_MSB        31
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_DMA_SECURE_RSVD register field. */
#define ALT_NOC_FW_L4_PER_SCR_DMA_SECURE_RSVD_WIDTH      32
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_DMA_SECURE_RSVD register field value. */
#define ALT_NOC_FW_L4_PER_SCR_DMA_SECURE_RSVD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_DMA_SECURE_RSVD register field value. */
#define ALT_NOC_FW_L4_PER_SCR_DMA_SECURE_RSVD_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_DMA_SECURE_RSVD register field. */
#define ALT_NOC_FW_L4_PER_SCR_DMA_SECURE_RSVD_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_DMA_SECURE_RSVD field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_DMA_SECURE_RSVD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_DMA_SECURE_RSVD register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_DMA_SECURE_RSVD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_DMA_SECURE.
 */
struct ALT_NOC_FW_L4_PER_SCR_DMA_SECURE_s
{
    uint32_t  Reserved : 32;  /* ALT_NOC_FW_L4_PER_SCR_DMA_SECURE_RSVD */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_DMA_SECURE. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_DMA_SECURE_s  ALT_NOC_FW_L4_PER_SCR_DMA_SECURE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_DMA_SECURE register. */
#define ALT_NOC_FW_L4_PER_SCR_DMA_SECURE_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_DMA_SECURE register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_DMA_SECURE_OFST        0x18

/*
 * Register : spi_master0
 * 
 * Per-Master Security bit for spi_master0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                          
 * :--------|:-------|:--------|:--------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_MST0_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                          
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_MST0_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                          
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_MST0_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                          
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_MST0_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                          
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to spi_master0. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_MST0_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to spi_master0. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_MST0_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to spi_master0. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_MST0_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to spi_master0. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_MST0_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_MST0_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_SPI_MST0.
 */
struct ALT_NOC_FW_L4_PER_SCR_SPI_MST0_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_MST0_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_MST0_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_MST0_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_MST0_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_SPI_MST0. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_SPI_MST0_s  ALT_NOC_FW_L4_PER_SCR_SPI_MST0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_MST0 register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_SPI_MST0 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST0_OFST        0x1c

/*
 * Register : spi_master1
 * 
 * Per-Master Security bit for spi_master1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                          
 * :--------|:-------|:--------|:--------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_MST1_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                          
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_MST1_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                          
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_MST1_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                          
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_MST1_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                          
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to spi_master1. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_MST1_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to spi_master1. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_MST1_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to spi_master1. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_MST1_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to spi_master1. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_MST1_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_MST1_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_SPI_MST1.
 */
struct ALT_NOC_FW_L4_PER_SCR_SPI_MST1_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_MST1_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_MST1_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_MST1_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_MST1_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_SPI_MST1. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_SPI_MST1_s  ALT_NOC_FW_L4_PER_SCR_SPI_MST1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_MST1 register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_SPI_MST1 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MST1_OFST        0x20

/*
 * Register : spi_slave0
 * 
 * Per-Master Security bit for spi_slave0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                          
 * :--------|:-------|:--------|:--------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                          
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                          
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                          
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                          
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to spi_slave0. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to spi_slave0. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to spi_slave0. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to spi_slave0. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_SPI_SLV0.
 */
struct ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_SPI_SLV0. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_s  ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0 register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV0 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_OFST        0x24

/*
 * Register : spi_slave1
 * 
 * Per-Master Security bit for spi_slave1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                          
 * :--------|:-------|:--------|:--------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                          
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                          
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                          
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                          
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to spi_slave1. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to spi_slave1. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to spi_slave1. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to spi_slave1. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_SPI_SLV1.
 */
struct ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_SPI_SLV1. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_s  ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1 register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_SPI_SLV1 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_OFST        0x28

/*
 * Register : emac0
 * 
 * Per-Master Security bit for emac0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                       
 * :--------|:-------|:--------|:-----------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                       
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_EMAC0_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                       
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_EMAC0_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                       
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_EMAC0_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                       
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to emac0. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to emac0. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_EMAC0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_EMAC0_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_EMAC0_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_EMAC0_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_EMAC0_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to emac0. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_EMAC0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_EMAC0_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_EMAC0_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_EMAC0_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_EMAC0_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to emac0. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_EMAC0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_EMAC0_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_EMAC0_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_EMAC0_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_EMAC0_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_EMAC0.
 */
struct ALT_NOC_FW_L4_PER_SCR_EMAC0_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_EMAC0_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_EMAC0_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_EMAC0_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_EMAC0. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_EMAC0_s  ALT_NOC_FW_L4_PER_SCR_EMAC0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC0 register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_EMAC0 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_OFST        0x2c

/*
 * Register : emac1
 * 
 * Per-Master Security bit for emac1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                       
 * :--------|:-------|:--------|:-----------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                       
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_EMAC1_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                       
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_EMAC1_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                       
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_EMAC1_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                       
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to emac1. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to emac1. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_EMAC1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_EMAC1_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_EMAC1_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_EMAC1_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_EMAC1_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to emac1. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_EMAC1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_EMAC1_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_EMAC1_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_EMAC1_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_EMAC1_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to emac1. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_EMAC1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_EMAC1_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_EMAC1_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_EMAC1_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_EMAC1_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_EMAC1.
 */
struct ALT_NOC_FW_L4_PER_SCR_EMAC1_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_EMAC1_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_EMAC1_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_EMAC1_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_EMAC1. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_EMAC1_s  ALT_NOC_FW_L4_PER_SCR_EMAC1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC1 register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_EMAC1 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_OFST        0x30

/*
 * Register : emac2
 * 
 * Per-Master Security bit for emac2
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                       
 * :--------|:-------|:--------|:-----------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                       
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_EMAC2_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                       
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_EMAC2_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                       
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_EMAC2_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                       
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to emac2. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to emac2. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC2_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC2_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_EMAC2_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_EMAC2_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_EMAC2_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC2_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_EMAC2_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_EMAC2_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to emac2. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC2_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC2_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_EMAC2_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_EMAC2_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_EMAC2_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC2_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_EMAC2_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_EMAC2_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to emac2. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC2_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC2_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_EMAC2_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_EMAC2_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_EMAC2_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC2_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_EMAC2_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_EMAC2_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_EMAC2.
 */
struct ALT_NOC_FW_L4_PER_SCR_EMAC2_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_EMAC2_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_EMAC2_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_EMAC2_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_EMAC2. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_EMAC2_s  ALT_NOC_FW_L4_PER_SCR_EMAC2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC2 register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_EMAC2 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_OFST        0x34

/*
 * Register : emac3
 * 
 * Per-Master Security bit for emac3
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                     
 * :-------|:-------|:------|:---------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_FW_L4_PER_SCR_EMAC3_RSVD
 * 
 */
/*
 * Field : Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC3_RSVD register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC3_RSVD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC3_RSVD register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC3_RSVD_MSB        31
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_EMAC3_RSVD register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC3_RSVD_WIDTH      32
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_EMAC3_RSVD register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC3_RSVD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_EMAC3_RSVD register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC3_RSVD_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC3_RSVD register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC3_RSVD_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_EMAC3_RSVD field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC3_RSVD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_EMAC3_RSVD register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC3_RSVD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_EMAC3.
 */
struct ALT_NOC_FW_L4_PER_SCR_EMAC3_s
{
    uint32_t  Reserved : 32;  /* ALT_NOC_FW_L4_PER_SCR_EMAC3_RSVD */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_EMAC3. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_EMAC3_s  ALT_NOC_FW_L4_PER_SCR_EMAC3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC3 register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC3_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_EMAC3 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC3_OFST        0x38

/*
 * Register : qspi
 * 
 * Per-Master Security bit for qspi
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                      
 * :--------|:-------|:--------|:----------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_QSPI_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                      
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_QSPI_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                      
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_QSPI_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                      
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_QSPI_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                      
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to qspi. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_QSPI_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_QSPI_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_QSPI_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_QSPI_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_QSPI_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_QSPI_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_QSPI_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_QSPI_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to qspi. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_QSPI_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_QSPI_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_QSPI_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_QSPI_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_QSPI_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_QSPI_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_QSPI_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_QSPI_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to qspi. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_QSPI_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_QSPI_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_QSPI_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_QSPI_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_QSPI_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_QSPI_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_QSPI_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_QSPI_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to qspi. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_QSPI_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_QSPI_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_QSPI_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_QSPI_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_QSPI_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_QSPI_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_QSPI_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_QSPI_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_QSPI.
 */
struct ALT_NOC_FW_L4_PER_SCR_QSPI_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_QSPI_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_QSPI_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_QSPI_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_QSPI_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_QSPI. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_QSPI_s  ALT_NOC_FW_L4_PER_SCR_QSPI_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_QSPI register. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_QSPI register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_QSPI_OFST        0x3c

/*
 * Register : sdmmc
 * 
 * Per-Master Security bit for sdmmc
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                       
 * :--------|:-------|:--------|:-----------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                       
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SDMMC_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                       
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SDMMC_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                       
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SDMMC_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                       
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to sdmmc. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to sdmmc. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SDMMC_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SDMMC_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SDMMC_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SDMMC_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SDMMC_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SDMMC_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SDMMC_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SDMMC_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to sdmmc. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SDMMC_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SDMMC_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SDMMC_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SDMMC_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SDMMC_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SDMMC_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SDMMC_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SDMMC_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to sdmmc. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SDMMC_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SDMMC_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SDMMC_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SDMMC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SDMMC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SDMMC_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SDMMC_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SDMMC_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_SDMMC.
 */
struct ALT_NOC_FW_L4_PER_SCR_SDMMC_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_SDMMC_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_SDMMC_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_SDMMC_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_SDMMC. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_SDMMC_s  ALT_NOC_FW_L4_PER_SCR_SDMMC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SDMMC register. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_SDMMC register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_OFST        0x40

/*
 * Register : gpio0
 * 
 * Per-Master Security bit for gpio0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                       
 * :--------|:-------|:--------|:-----------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                       
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_GPIO0_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                       
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_GPIO0_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                       
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_GPIO0_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                       
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to gpio0. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to gpio0. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_GPIO0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_GPIO0_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_GPIO0_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_GPIO0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_GPIO0_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_GPIO0_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to gpio0. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_GPIO0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_GPIO0_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_GPIO0_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_GPIO0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_GPIO0_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_GPIO0_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to gpio0. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_GPIO0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_GPIO0_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_GPIO0_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_GPIO0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_GPIO0_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_GPIO0_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_GPIO0.
 */
struct ALT_NOC_FW_L4_PER_SCR_GPIO0_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_GPIO0_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_GPIO0_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_GPIO0_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_GPIO0. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_GPIO0_s  ALT_NOC_FW_L4_PER_SCR_GPIO0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_GPIO0 register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_GPIO0 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_OFST        0x44

/*
 * Register : gpio1
 * 
 * Per-Master Security bit for gpio1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                       
 * :--------|:-------|:--------|:-----------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                       
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_GPIO1_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                       
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_GPIO1_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                       
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_GPIO1_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                       
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to gpio1. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to gpio1. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_GPIO1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_GPIO1_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_GPIO1_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_GPIO1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_GPIO1_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_GPIO1_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to gpio1. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_GPIO1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_GPIO1_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_GPIO1_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_GPIO1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_GPIO1_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_GPIO1_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to gpio1. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_GPIO1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_GPIO1_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_GPIO1_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_GPIO1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_GPIO1_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_GPIO1_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_GPIO1.
 */
struct ALT_NOC_FW_L4_PER_SCR_GPIO1_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_GPIO1_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_GPIO1_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_GPIO1_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_GPIO1. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_GPIO1_s  ALT_NOC_FW_L4_PER_SCR_GPIO1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_GPIO1 register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_GPIO1 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_OFST        0x48

/*
 * Register : gpio2
 * 
 * Per-Master Security bit for gpio2
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                       
 * :--------|:-------|:--------|:-----------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_GPIO2_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                       
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_GPIO2_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                       
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_GPIO2_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                       
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_GPIO2_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                       
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to gpio2. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO2_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO2_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_GPIO2_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_GPIO2_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_GPIO2_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_GPIO2_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_GPIO2_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_GPIO2_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to gpio2. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO2_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO2_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_GPIO2_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_GPIO2_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_GPIO2_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_GPIO2_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_GPIO2_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_GPIO2_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to gpio2. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO2_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO2_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_GPIO2_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_GPIO2_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_GPIO2_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_GPIO2_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_GPIO2_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_GPIO2_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to gpio2. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO2_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO2_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_GPIO2_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_GPIO2_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_GPIO2_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_GPIO2_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_GPIO2_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_GPIO2_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_GPIO2.
 */
struct ALT_NOC_FW_L4_PER_SCR_GPIO2_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_GPIO2_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_GPIO2_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_GPIO2_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_GPIO2_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_GPIO2. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_GPIO2_s  ALT_NOC_FW_L4_PER_SCR_GPIO2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_GPIO2 register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_GPIO2 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO2_OFST        0x4c

/*
 * Register : i2c0
 * 
 * Per-Master Security bit for i2c0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                      
 * :--------|:-------|:--------|:----------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                      
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C0_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                      
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C0_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                      
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C0_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                      
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to i2c0. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to i2c0. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C0_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C0_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C0_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C0_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to i2c0. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C0_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C0_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C0_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C0_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to i2c0. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C0_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C0_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C0_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C0_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_I2C0.
 */
struct ALT_NOC_FW_L4_PER_SCR_I2C0_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C0_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C0_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C0_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_I2C0. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_I2C0_s  ALT_NOC_FW_L4_PER_SCR_I2C0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C0 register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_I2C0 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_OFST        0x50

/*
 * Register : i2c1
 * 
 * Per-Master Security bit for i2c1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                      
 * :--------|:-------|:--------|:----------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                      
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C1_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                      
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C1_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                      
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C1_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                      
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to i2c1. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to i2c1. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C1_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C1_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C1_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C1_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to i2c1. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C1_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C1_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C1_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C1_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to i2c1. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C1_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C1_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C1_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C1_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_I2C1.
 */
struct ALT_NOC_FW_L4_PER_SCR_I2C1_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C1_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C1_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C1_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_I2C1. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_I2C1_s  ALT_NOC_FW_L4_PER_SCR_I2C1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C1 register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_I2C1 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_OFST        0x54

/*
 * Register : i2c2
 * 
 * Per-Master Security bit for i2c2
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                      
 * :--------|:-------|:--------|:----------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                      
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C2_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                      
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C2_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                      
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C2_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                      
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to i2c2. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to i2c2. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C2_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C2_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C2_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C2_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C2_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C2_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C2_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C2_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to i2c2. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C2_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C2_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C2_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C2_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C2_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C2_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C2_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C2_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to i2c2. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C2_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C2_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C2_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C2_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C2_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C2_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C2_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C2_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_I2C2.
 */
struct ALT_NOC_FW_L4_PER_SCR_I2C2_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C2_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C2_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C2_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_I2C2. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_I2C2_s  ALT_NOC_FW_L4_PER_SCR_I2C2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C2 register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_I2C2 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_OFST        0x58

/*
 * Register : i2c3
 * 
 * Per-Master Security bit for i2c3
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                      
 * :--------|:-------|:--------|:----------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                      
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C3_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                      
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C3_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                      
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C3_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                      
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to i2c3. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to i2c3. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C3_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C3_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C3_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C3_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C3_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C3_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C3_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C3_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to i2c3. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C3_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C3_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C3_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C3_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C3_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C3_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C3_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C3_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to i2c3. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C3_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C3_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C3_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C3_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C3_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C3_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C3_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C3_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_I2C3.
 */
struct ALT_NOC_FW_L4_PER_SCR_I2C3_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C3_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C3_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C3_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_I2C3. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_I2C3_s  ALT_NOC_FW_L4_PER_SCR_I2C3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C3 register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_I2C3 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_OFST        0x5c

/*
 * Register : i2c4
 * 
 * Per-Master Security bit for i2c4
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                      
 * :--------|:-------|:--------|:----------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                      
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C4_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                      
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C4_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                      
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C4_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                      
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to i2c4. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to i2c4. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C4_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C4_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C4_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C4_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C4_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C4_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C4_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C4_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to i2c4. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C4_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C4_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C4_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C4_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C4_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C4_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C4_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C4_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C4_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C4_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C4_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C4_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C4_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C4_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C4_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C4_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_I2C4.
 */
struct ALT_NOC_FW_L4_PER_SCR_I2C4_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C4_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C4_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C4_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_I2C4. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_I2C4_s  ALT_NOC_FW_L4_PER_SCR_I2C4_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C4 register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_I2C4 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_OFST        0x60

/*
 * Register : sp_timer0
 * 
 * Per-Master Security bit for sp_timer0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                         
 * :--------|:-------|:--------|:-------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SP_TMR0_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                         
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SP_TMR0_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                         
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SP_TMR0_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                         
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SP_TMR0_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                         
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to sp_timer0. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SP_TMR0_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to sp_timer0. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SP_TMR0_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to sp_timer0. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SP_TMR0_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to sp_timer0. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SP_TMR0_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SP_TMR0_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_SP_TMR0.
 */
struct ALT_NOC_FW_L4_PER_SCR_SP_TMR0_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_SP_TMR0_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_SP_TMR0_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_SP_TMR0_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_SP_TMR0_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_SP_TMR0. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_SP_TMR0_s  ALT_NOC_FW_L4_PER_SCR_SP_TMR0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SP_TMR0 register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_SP_TMR0 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR0_OFST        0x64

/*
 * Register : sp_timer1
 * 
 * Per-Master Security bit for sp_timer1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                         
 * :--------|:-------|:--------|:-------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SP_TMR1_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                         
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SP_TMR1_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                         
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SP_TMR1_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                         
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SP_TMR1_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                         
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to sp_timer1. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SP_TMR1_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to sp_timer1. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SP_TMR1_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to sp_timer1. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SP_TMR1_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to sp_timer1. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SP_TMR1_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SP_TMR1_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_SP_TMR1.
 */
struct ALT_NOC_FW_L4_PER_SCR_SP_TMR1_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_SP_TMR1_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_SP_TMR1_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_SP_TMR1_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_SP_TMR1_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_SP_TMR1. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_SP_TMR1_s  ALT_NOC_FW_L4_PER_SCR_SP_TMR1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SP_TMR1 register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_SP_TMR1 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TMR1_OFST        0x68

/*
 * Register : uart0
 * 
 * Per-Master Security bit for uart0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                       
 * :--------|:-------|:--------|:-----------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_UART0_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                       
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_UART0_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                       
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_UART0_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                       
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_UART0_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                       
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to uart0. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_UART0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_UART0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_UART0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_UART0_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_UART0_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_UART0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_UART0_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_UART0_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to uart0. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_UART0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_UART0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_UART0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_UART0_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_UART0_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_UART0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_UART0_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_UART0_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to uart0. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_UART0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_UART0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_UART0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_UART0_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_UART0_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_UART0_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_UART0_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_UART0_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to uart0. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_UART0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_UART0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_UART0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_UART0_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_UART0_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_UART0_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_UART0_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_UART0_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_UART0.
 */
struct ALT_NOC_FW_L4_PER_SCR_UART0_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_UART0_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_UART0_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_UART0_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_UART0_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_UART0. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_UART0_s  ALT_NOC_FW_L4_PER_SCR_UART0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_UART0 register. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_UART0 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_OFST        0x6c

/*
 * Register : uart1
 * 
 * Per-Master Security bit for uart1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                       
 * :--------|:-------|:--------|:-----------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_UART1_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                       
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_UART1_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                       
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_UART1_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                       
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_UART1_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                       
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to uart1. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_UART1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_UART1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_UART1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_UART1_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_UART1_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_UART1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_UART1_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_UART1_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to uart1. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_UART1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_UART1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_UART1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_UART1_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_UART1_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_UART1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_UART1_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_UART1_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to uart1. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_UART1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_UART1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_UART1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_UART1_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_UART1_F2H register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_UART1_F2H register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_UART1_F2H field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_UART1_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to uart1. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_UART1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_UART1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_UART1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_UART1_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_UART1_AHB_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_UART1_AHB_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_UART1_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_UART1_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_UART1.
 */
struct ALT_NOC_FW_L4_PER_SCR_UART1_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_PER_SCR_UART1_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_UART1_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_UART1_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_UART1_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_UART1. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_UART1_s  ALT_NOC_FW_L4_PER_SCR_UART1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_UART1 register. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_UART1 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_OFST        0x70

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_NOC_FW_L4_PER_SCR.
 */
struct ALT_NOC_FW_L4_PER_SCR_s
{
    ALT_NOC_FW_L4_PER_SCR_NAND_REG_t       nand_register;        /* ALT_NOC_FW_L4_PER_SCR_NAND_REG */
    ALT_NOC_FW_L4_PER_SCR_NAND_DATA_t      nand_data;            /* ALT_NOC_FW_L4_PER_SCR_NAND_DATA */
    ALT_NOC_FW_L4_PER_SCR_QSPI_DATA_t      qspi_data;            /* ALT_NOC_FW_L4_PER_SCR_QSPI_DATA */
    ALT_NOC_FW_L4_PER_SCR_USB0_REG_t       usb0_register;        /* ALT_NOC_FW_L4_PER_SCR_USB0_REG */
    ALT_NOC_FW_L4_PER_SCR_USB1_REG_t       usb1_register;        /* ALT_NOC_FW_L4_PER_SCR_USB1_REG */
    ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE_t  dma_nonsecure;        /* ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE */
    ALT_NOC_FW_L4_PER_SCR_DMA_SECURE_t     dma_secure;           /* ALT_NOC_FW_L4_PER_SCR_DMA_SECURE */
    ALT_NOC_FW_L4_PER_SCR_SPI_MST0_t       spi_master0;          /* ALT_NOC_FW_L4_PER_SCR_SPI_MST0 */
    ALT_NOC_FW_L4_PER_SCR_SPI_MST1_t       spi_master1;          /* ALT_NOC_FW_L4_PER_SCR_SPI_MST1 */
    ALT_NOC_FW_L4_PER_SCR_SPI_SLV0_t       spi_slave0;           /* ALT_NOC_FW_L4_PER_SCR_SPI_SLV0 */
    ALT_NOC_FW_L4_PER_SCR_SPI_SLV1_t       spi_slave1;           /* ALT_NOC_FW_L4_PER_SCR_SPI_SLV1 */
    ALT_NOC_FW_L4_PER_SCR_EMAC0_t          emac0;                /* ALT_NOC_FW_L4_PER_SCR_EMAC0 */
    ALT_NOC_FW_L4_PER_SCR_EMAC1_t          emac1;                /* ALT_NOC_FW_L4_PER_SCR_EMAC1 */
    ALT_NOC_FW_L4_PER_SCR_EMAC2_t          emac2;                /* ALT_NOC_FW_L4_PER_SCR_EMAC2 */
    ALT_NOC_FW_L4_PER_SCR_EMAC3_t          emac3;                /* ALT_NOC_FW_L4_PER_SCR_EMAC3 */
    ALT_NOC_FW_L4_PER_SCR_QSPI_t           qspi;                 /* ALT_NOC_FW_L4_PER_SCR_QSPI */
    ALT_NOC_FW_L4_PER_SCR_SDMMC_t          sdmmc;                /* ALT_NOC_FW_L4_PER_SCR_SDMMC */
    ALT_NOC_FW_L4_PER_SCR_GPIO0_t          gpio0;                /* ALT_NOC_FW_L4_PER_SCR_GPIO0 */
    ALT_NOC_FW_L4_PER_SCR_GPIO1_t          gpio1;                /* ALT_NOC_FW_L4_PER_SCR_GPIO1 */
    ALT_NOC_FW_L4_PER_SCR_GPIO2_t          gpio2;                /* ALT_NOC_FW_L4_PER_SCR_GPIO2 */
    ALT_NOC_FW_L4_PER_SCR_I2C0_t           i2c0;                 /* ALT_NOC_FW_L4_PER_SCR_I2C0 */
    ALT_NOC_FW_L4_PER_SCR_I2C1_t           i2c1;                 /* ALT_NOC_FW_L4_PER_SCR_I2C1 */
    ALT_NOC_FW_L4_PER_SCR_I2C2_t           i2c2;                 /* ALT_NOC_FW_L4_PER_SCR_I2C2 */
    ALT_NOC_FW_L4_PER_SCR_I2C3_t           i2c3;                 /* ALT_NOC_FW_L4_PER_SCR_I2C3 */
    ALT_NOC_FW_L4_PER_SCR_I2C4_t           i2c4;                 /* ALT_NOC_FW_L4_PER_SCR_I2C4 */
    ALT_NOC_FW_L4_PER_SCR_SP_TMR0_t        sp_timer0;            /* ALT_NOC_FW_L4_PER_SCR_SP_TMR0 */
    ALT_NOC_FW_L4_PER_SCR_SP_TMR1_t        sp_timer1;            /* ALT_NOC_FW_L4_PER_SCR_SP_TMR1 */
    ALT_NOC_FW_L4_PER_SCR_UART0_t          uart0;                /* ALT_NOC_FW_L4_PER_SCR_UART0 */
    ALT_NOC_FW_L4_PER_SCR_UART1_t          uart1;                /* ALT_NOC_FW_L4_PER_SCR_UART1 */
    volatile uint32_t                      _pad_0x74_0x100[35];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_FW_L4_PER_SCR. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_s  ALT_NOC_FW_L4_PER_SCR_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_FW_L4_PER_SCR. */
struct ALT_NOC_FW_L4_PER_SCR_raw_s
{
    volatile uint32_t  nand_register;        /* ALT_NOC_FW_L4_PER_SCR_NAND_REG */
    volatile uint32_t  nand_data;            /* ALT_NOC_FW_L4_PER_SCR_NAND_DATA */
    volatile uint32_t  qspi_data;            /* ALT_NOC_FW_L4_PER_SCR_QSPI_DATA */
    volatile uint32_t  usb0_register;        /* ALT_NOC_FW_L4_PER_SCR_USB0_REG */
    volatile uint32_t  usb1_register;        /* ALT_NOC_FW_L4_PER_SCR_USB1_REG */
    volatile uint32_t  dma_nonsecure;        /* ALT_NOC_FW_L4_PER_SCR_DMA_NONSECURE */
    volatile uint32_t  dma_secure;           /* ALT_NOC_FW_L4_PER_SCR_DMA_SECURE */
    volatile uint32_t  spi_master0;          /* ALT_NOC_FW_L4_PER_SCR_SPI_MST0 */
    volatile uint32_t  spi_master1;          /* ALT_NOC_FW_L4_PER_SCR_SPI_MST1 */
    volatile uint32_t  spi_slave0;           /* ALT_NOC_FW_L4_PER_SCR_SPI_SLV0 */
    volatile uint32_t  spi_slave1;           /* ALT_NOC_FW_L4_PER_SCR_SPI_SLV1 */
    volatile uint32_t  emac0;                /* ALT_NOC_FW_L4_PER_SCR_EMAC0 */
    volatile uint32_t  emac1;                /* ALT_NOC_FW_L4_PER_SCR_EMAC1 */
    volatile uint32_t  emac2;                /* ALT_NOC_FW_L4_PER_SCR_EMAC2 */
    volatile uint32_t  emac3;                /* ALT_NOC_FW_L4_PER_SCR_EMAC3 */
    volatile uint32_t  qspi;                 /* ALT_NOC_FW_L4_PER_SCR_QSPI */
    volatile uint32_t  sdmmc;                /* ALT_NOC_FW_L4_PER_SCR_SDMMC */
    volatile uint32_t  gpio0;                /* ALT_NOC_FW_L4_PER_SCR_GPIO0 */
    volatile uint32_t  gpio1;                /* ALT_NOC_FW_L4_PER_SCR_GPIO1 */
    volatile uint32_t  gpio2;                /* ALT_NOC_FW_L4_PER_SCR_GPIO2 */
    volatile uint32_t  i2c0;                 /* ALT_NOC_FW_L4_PER_SCR_I2C0 */
    volatile uint32_t  i2c1;                 /* ALT_NOC_FW_L4_PER_SCR_I2C1 */
    volatile uint32_t  i2c2;                 /* ALT_NOC_FW_L4_PER_SCR_I2C2 */
    volatile uint32_t  i2c3;                 /* ALT_NOC_FW_L4_PER_SCR_I2C3 */
    volatile uint32_t  i2c4;                 /* ALT_NOC_FW_L4_PER_SCR_I2C4 */
    volatile uint32_t  sp_timer0;            /* ALT_NOC_FW_L4_PER_SCR_SP_TMR0 */
    volatile uint32_t  sp_timer1;            /* ALT_NOC_FW_L4_PER_SCR_SP_TMR1 */
    volatile uint32_t  uart0;                /* ALT_NOC_FW_L4_PER_SCR_UART0 */
    volatile uint32_t  uart1;                /* ALT_NOC_FW_L4_PER_SCR_UART1 */
    uint32_t           _pad_0x74_0x100[35];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_FW_L4_PER_SCR. */
typedef volatile struct ALT_NOC_FW_L4_PER_SCR_raw_s  ALT_NOC_FW_L4_PER_SCR_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_NOC_FW_L4_PER_SCR_H__ */

