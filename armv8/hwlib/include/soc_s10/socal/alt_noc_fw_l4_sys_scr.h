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

/* Altera - ALT_NOC_FW_L4_SYS_SCR */

#ifndef __ALT_SOCAL_NOC_FW_L4_SYS_SCR_H__
#define __ALT_SOCAL_NOC_FW_L4_SYS_SCR_H__

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
 * Component : NOC_FW_L4_SYS_SCR
 * L4_SYS Security Control Registers (SCR)
 * 
 */
/*
 * Register : dma_ecc
 * 
 * Per-Master Security bit for dma_ecc
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                           
 * :--------|:-------|:--------|:---------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                           
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                           
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                           
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to dma_ecc. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to dma_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to dma_ecc. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_DMA_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_DMA_ECC. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_s  ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC register. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_OFST        0x8

/*
 * Register : emac0rx_ecc
 * 
 * Per-Master Security bit for emac0rx_ecc
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                               
 * :--------|:-------|:--------|:-------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                               
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                               
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                               
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to emac0rx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to emac0rx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to emac0rx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_s  ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_OFST        0xc

/*
 * Register : emac0tx_ecc
 * 
 * Per-Master Security bit for emac0tx_ecc
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                               
 * :--------|:-------|:--------|:-------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                               
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                               
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                               
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to emac0tx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to emac0tx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to emac0tx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_s  ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_OFST        0x10

/*
 * Register : emac1rx_ecc
 * 
 * Per-Master Security bit for emac1rx_ecc
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                               
 * :--------|:-------|:--------|:-------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                               
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                               
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                               
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to emac1rx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to emac1rx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to emac1rx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_s  ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_OFST        0x14

/*
 * Register : emac1tx_ecc
 * 
 * Per-Master Security bit for emac1tx_ecc
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                               
 * :--------|:-------|:--------|:-------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                               
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                               
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                               
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to  emac1tx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to emac1tx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to emac1tx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_s  ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_OFST        0x18

/*
 * Register : emac2rx_ecc
 * 
 * Per-Master Security bit for emac2rx_ecc
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                               
 * :--------|:-------|:--------|:-------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                               
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                               
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                               
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to emac2rx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to emac2rx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to emac2rx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_s  ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_OFST        0x1c

/*
 * Register : emac2tx_ecc
 * 
 * Per-Master Security bit for emac2tx_ecc
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                               
 * :--------|:-------|:--------|:-------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                               
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                               
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                               
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to emac2tx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to emac2tx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to emac2tx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_s  ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_OFST        0x20

/*
 * Register : nand_ecc
 * 
 * Per-Master Security bit for nand_ecc
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                            
 * :--------|:-------|:--------|:----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                            
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                            
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                            
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to nand_ecc. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to nand_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to nand_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_NAND_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_NAND_ECC. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_s  ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_OFST        0x2c

/*
 * Register : nand_read_ecc
 * 
 * Per-Master Security bit for nand_read_ecc
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                 
 * :--------|:-------|:--------|:---------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                                 
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                                 
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                                 
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to nand_read_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to nand_read_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to nand_read_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_s  ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_OFST        0x30

/*
 * Register : nand_write_ecc
 * 
 * Per-Master Security bit for nand_write_ecc
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                  
 * :--------|:-------|:--------|:----------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                                  
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                                  
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                                  
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to nand_write_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to nand_write_ecc.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to nand_write_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_s  ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_OFST        0x34

/*
 * Register : ocram_ecc
 * 
 * Per-Master Security bit for onchipram_ecc
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                             
 * :--------|:-------|:--------|:-----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                             
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                             
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                             
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to onchipram_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to onchipram_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to onchipram_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_s  ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC register. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_OFST        0x38

/*
 * Register : sdmmc_ecc
 * 
 * Per-Master Security bit for sdmmc_ecc
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                             
 * :--------|:-------|:--------|:-----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                             
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                             
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                             
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to sdmmc_ecc. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to sdmmc_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to sdmmc_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_s  ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC register. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_OFST        0x40

/*
 * Register : usb0_ecc
 * 
 * Per-Master Security bit for usb0_ecc
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                            
 * :--------|:-------|:--------|:----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                            
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                            
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                            
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to usb0_ecc. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to usb0_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to usb0_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_USB0_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_USB0_ECC. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_s  ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_OFST        0x44

/*
 * Register : usb1_ecc
 * 
 * Per-Master Security bit for usb1_ecc
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                            
 * :--------|:-------|:--------|:----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                            
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                            
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                            
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to usb1_ecc. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to usb1_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to usb1_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_USB1_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_USB1_ECC. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_s  ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_OFST        0x48

/*
 * Register : clock_manager
 * 
 * Per-Master Security bit for clock_manager
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                 
 * :--------|:-------|:--------|:---------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                                 
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                                 
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                                 
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to clock_manager. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to clock_manager. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to clock_manager. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER.
 */
struct ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_s  ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER register. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_OFST        0x4c

/*
 * Register : io_manager
 * 
 * Per-Master Security bit for pin_mux_register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                              
 * :--------|:-------|:--------|:------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                              
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                              
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                              
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to pin_mux_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to pin_mux_register.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to pin_mux_register.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER.
 */
struct ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_s  ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER register. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_OFST        0x54

/*
 * Register : reset_manager
 * 
 * Per-Master Security bit for reset_manager
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                 
 * :--------|:-------|:--------|:---------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                                 
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                                 
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                                 
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to reset_manager. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to reset_manager. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to reset_manager. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER.
 */
struct ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_s  ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER register. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_OFST        0x58

/*
 * Register : system_manager
 * 
 * Per-Master Security bit for system_manager
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                  
 * :--------|:-------|:--------|:----------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                                  
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                                  
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                                  
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to system_manager. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to system_manager.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to system_manager. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER.
 */
struct ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_s  ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER register. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_OFST        0x5c

/*
 * Register : osc0_timer
 * 
 * Per-Master Security bit for osc0_timer
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                              
 * :--------|:-------|:--------|:------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_MPU     
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                              
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_DMA     
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                              
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                              
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                              
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to osc0_timer. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to osc0_timer. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_DMA field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to osc0_timer. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to osc0_timer. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER.
 */
struct ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_DMA */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_s  ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_OFST        0x60

/*
 * Register : osc1_timer
 * 
 * Per-Master Security bit for osc1_timer
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                              
 * :--------|:-------|:--------|:------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_MPU     
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                              
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_DMA     
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                              
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                              
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                              
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to osc1_timer. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to osc1_timer. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_DMA field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to osc1_timer. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to osc1_timer. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER.
 */
struct ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_DMA */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_s  ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_OFST        0x64

/*
 * Register : watchdog0
 * 
 * Per-Master Security bit for watchdog0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                             
 * :--------|:-------|:--------|:-----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_MPU     
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                             
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_DMA     
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                             
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                             
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                             
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to watchdog0. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to watchdog0. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_DMA field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to watchdog0. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to watchdog0. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0.
 */
struct ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_DMA */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_s  ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0 register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0 register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_OFST        0x68

/*
 * Register : watchdog1
 * 
 * Per-Master Security bit for watchdog1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                             
 * :--------|:-------|:--------|:-----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_MPU     
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                             
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_DMA     
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                             
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                             
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                             
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to watchdog1. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to watchdog1. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_DMA field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to watchdog1. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to watchdog1. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1.
 */
struct ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_DMA */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_s  ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1 register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1 register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_OFST        0x6c

/*
 * Register : watchdog2
 * 
 * Per-Master Security bit for watchdog0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                             
 * :--------|:-------|:--------|:-----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_MPU     
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                             
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_DMA     
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                             
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                             
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                             
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to watchdog2. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to watchdog2. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_DMA field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to watchdog2. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to watchdog2. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2.
 */
struct ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_DMA */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_s  ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2 register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2 register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_OFST        0x70

/*
 * Register : watchdog3
 * 
 * Per-Master Security bit for watchdog1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                             
 * :--------|:-------|:--------|:-----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_MPU     
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                             
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_DMA     
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                             
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                             
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                             
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to watchdog3. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to watchdog3. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_DMA field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to watchdog3. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to watchdog3. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3.
 */
struct ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_DMA */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_s  ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3 register. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3 register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_OFST        0x74

/*
 * Register : dap
 * 
 * Per-Master Security bit for dap
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                       
 * :--------|:-------|:--------|:-----------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_DAP_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                       
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_DAP_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                       
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_DAP_AXI_AP  
 *  [25]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_DAP_ETR     
 *  [31:26] | ???    | Unknown | *UNDEFINED*                       
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to dap. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_DAP_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_DAP_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_DAP_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_DAP_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_DAP_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_DAP_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_DAP_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_DAP_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to dap. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_DAP_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_DAP_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_DAP_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_DAP_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_DAP_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_DAP_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_DAP_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_DAP_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to dap. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_DAP_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_DAP_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_DAP_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_DAP_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_DAP_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_DAP_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_DAP_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_DAP_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : etr
 * 
 * Security bit configuration for transactions from etr to dap. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_DAP_ETR register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_ETR_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_DAP_ETR register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_ETR_MSB        25
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_DAP_ETR register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_ETR_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_DAP_ETR register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_ETR_SET_MSK    0x02000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_DAP_ETR register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_ETR_CLR_MSK    0xfdffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_DAP_ETR register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_ETR_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_DAP_ETR field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_ETR_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_DAP_ETR register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_ETR_SET(value) (((value) << 25) & 0x02000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_DAP.
 */
struct ALT_NOC_FW_L4_SYS_SCR_DAP_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_DAP_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_DAP_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_DAP_AXI_AP */
    volatile uint32_t  etr      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_DAP_ETR */
    uint32_t                    :  6;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_DAP. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_DAP_s  ALT_NOC_FW_L4_SYS_SCR_DAP_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_DAP register. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_DAP register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_OFST        0x78

/*
 * Register : l4_noc_probes
 * 
 * Per-Master Security bit for noc_probes_register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                 
 * :--------|:-------|:--------|:---------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                                 
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                                 
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                                 
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to noc_probes_register.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to
 * noc_probes_register. When cleared (0), only Secure transactions are allowed.
 * When set (1), both Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to noc_probes_register.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES.
 */
struct ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_s  ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_OFST        0x90

/*
 * Register : l4_noc_qos
 * 
 * Per-Master Security bit for noc_probes_register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                              
 * :--------|:-------|:--------|:------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                              
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                              
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                              
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to noc_probes_register.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_MPU register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_MPU register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_MPU field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to
 * noc_probes_register. When cleared (0), only Secure transactions are allowed.
 * When set (1), both Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to noc_probes_register.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_AXI_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_AXI_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS.
 */
struct ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_s  ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_OFST        0x94

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
 * The struct declaration for register group ALT_NOC_FW_L4_SYS_SCR.
 */
struct ALT_NOC_FW_L4_SYS_SCR_s
{
    volatile uint32_t                                _pad_0x0_0x7[2];      /* *UNDEFINED* */
    volatile ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_t         dma_ecc;              /* ALT_NOC_FW_L4_SYS_SCR_DMA_ECC */
    volatile ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_t     emac0rx_ecc;          /* ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC */
    volatile ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_t     emac0tx_ecc;          /* ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC */
    volatile ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_t     emac1rx_ecc;          /* ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC */
    volatile ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_t     emac1tx_ecc;          /* ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC */
    volatile ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_t     emac2rx_ecc;          /* ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC */
    volatile ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_t     emac2tx_ecc;          /* ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC */
    volatile uint32_t                                _pad_0x24_0x2b[2];    /* *UNDEFINED* */
    volatile ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_t        nand_ecc;             /* ALT_NOC_FW_L4_SYS_SCR_NAND_ECC */
    volatile ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC_t   nand_read_ecc;        /* ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC */
    volatile ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC_t  nand_write_ecc;       /* ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC */
    volatile ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC_t       ocram_ecc;            /* ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC */
    volatile uint32_t                                _pad_0x3c_0x3f;       /* *UNDEFINED* */
    volatile ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_t       sdmmc_ecc;            /* ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC */
    volatile ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_t        usb0_ecc;             /* ALT_NOC_FW_L4_SYS_SCR_USB0_ECC */
    volatile ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_t        usb1_ecc;             /* ALT_NOC_FW_L4_SYS_SCR_USB1_ECC */
    volatile ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER_t   clock_manager;        /* ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER */
    volatile uint32_t                                _pad_0x50_0x53;       /* *UNDEFINED* */
    volatile ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER_t      io_manager;           /* ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER */
    volatile ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER_t   reset_manager;        /* ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER */
    volatile ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER_t  system_manager;       /* ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER */
    volatile ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER_t      osc0_timer;           /* ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER */
    volatile ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER_t      osc1_timer;           /* ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER */
    volatile ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0_t       watchdog0;            /* ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0 */
    volatile ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1_t       watchdog1;            /* ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1 */
    volatile ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2_t       watchdog2;            /* ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2 */
    volatile ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3_t       watchdog3;            /* ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3 */
    volatile ALT_NOC_FW_L4_SYS_SCR_DAP_t             dap;                  /* ALT_NOC_FW_L4_SYS_SCR_DAP */
    volatile uint32_t                                _pad_0x7c_0x8f[5];    /* *UNDEFINED* */
    volatile ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES_t   l4_noc_probes;        /* ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES */
    volatile ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS_t      l4_noc_qos;           /* ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS */
    volatile uint32_t                                _pad_0x98_0x100[26];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_FW_L4_SYS_SCR. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_s  ALT_NOC_FW_L4_SYS_SCR_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_FW_L4_SYS_SCR. */
struct ALT_NOC_FW_L4_SYS_SCR_raw_s
{
    volatile uint32_t  _pad_0x0_0x7[2];      /* *UNDEFINED* */
    volatile uint32_t  dma_ecc;              /* ALT_NOC_FW_L4_SYS_SCR_DMA_ECC */
    volatile uint32_t  emac0rx_ecc;          /* ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC */
    volatile uint32_t  emac0tx_ecc;          /* ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC */
    volatile uint32_t  emac1rx_ecc;          /* ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC */
    volatile uint32_t  emac1tx_ecc;          /* ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC */
    volatile uint32_t  emac2rx_ecc;          /* ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC */
    volatile uint32_t  emac2tx_ecc;          /* ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC */
    volatile uint32_t  _pad_0x24_0x2b[2];    /* *UNDEFINED* */
    volatile uint32_t  nand_ecc;             /* ALT_NOC_FW_L4_SYS_SCR_NAND_ECC */
    volatile uint32_t  nand_read_ecc;        /* ALT_NOC_FW_L4_SYS_SCR_NAND_READ_ECC */
    volatile uint32_t  nand_write_ecc;       /* ALT_NOC_FW_L4_SYS_SCR_NAND_WRITE_ECC */
    volatile uint32_t  ocram_ecc;            /* ALT_NOC_FW_L4_SYS_SCR_OCRAM_ECC */
    volatile uint32_t  _pad_0x3c_0x3f;       /* *UNDEFINED* */
    volatile uint32_t  sdmmc_ecc;            /* ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC */
    volatile uint32_t  usb0_ecc;             /* ALT_NOC_FW_L4_SYS_SCR_USB0_ECC */
    volatile uint32_t  usb1_ecc;             /* ALT_NOC_FW_L4_SYS_SCR_USB1_ECC */
    volatile uint32_t  clock_manager;        /* ALT_NOC_FW_L4_SYS_SCR_CLOCK_MANAGER */
    volatile uint32_t  _pad_0x50_0x53;       /* *UNDEFINED* */
    volatile uint32_t  io_manager;           /* ALT_NOC_FW_L4_SYS_SCR_IO_MANAGER */
    volatile uint32_t  reset_manager;        /* ALT_NOC_FW_L4_SYS_SCR_RESET_MANAGER */
    volatile uint32_t  system_manager;       /* ALT_NOC_FW_L4_SYS_SCR_SYSTEM_MANAGER */
    volatile uint32_t  osc0_timer;           /* ALT_NOC_FW_L4_SYS_SCR_OSC0_TIMER */
    volatile uint32_t  osc1_timer;           /* ALT_NOC_FW_L4_SYS_SCR_OSC1_TIMER */
    volatile uint32_t  watchdog0;            /* ALT_NOC_FW_L4_SYS_SCR_WATCHDOG0 */
    volatile uint32_t  watchdog1;            /* ALT_NOC_FW_L4_SYS_SCR_WATCHDOG1 */
    volatile uint32_t  watchdog2;            /* ALT_NOC_FW_L4_SYS_SCR_WATCHDOG2 */
    volatile uint32_t  watchdog3;            /* ALT_NOC_FW_L4_SYS_SCR_WATCHDOG3 */
    volatile uint32_t  dap;                  /* ALT_NOC_FW_L4_SYS_SCR_DAP */
    volatile uint32_t  _pad_0x7c_0x8f[5];    /* *UNDEFINED* */
    volatile uint32_t  l4_noc_probes;        /* ALT_NOC_FW_L4_SYS_SCR_L4_NOC_PROBES */
    volatile uint32_t  l4_noc_qos;           /* ALT_NOC_FW_L4_SYS_SCR_L4_NOC_QOS */
    volatile uint32_t  _pad_0x98_0x100[26];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_FW_L4_SYS_SCR. */
typedef struct ALT_NOC_FW_L4_SYS_SCR_raw_s  ALT_NOC_FW_L4_SYS_SCR_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_NOC_FW_L4_SYS_SCR_H__ */

