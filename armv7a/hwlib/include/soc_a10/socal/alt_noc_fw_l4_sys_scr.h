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
 * Component : ALT_NOC_FW_L4_SYS_SCR
 * 
 */
/*
 * Register : can0_ecc
 * 
 * Per-Master Security bit for can0_ecc
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC_RSVD
 * 
 */
/*
 * Field : Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC_RSVD register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC_RSVD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC_RSVD register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC_RSVD_MSB        31
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC_RSVD register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC_RSVD_WIDTH      32
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC_RSVD register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC_RSVD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC_RSVD register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC_RSVD_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC_RSVD register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC_RSVD_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC_RSVD field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC_RSVD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC_RSVD register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC_RSVD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC_s
{
    uint32_t  Reserved : 32;  /* ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC_RSVD */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC_s  ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC register. */
#define ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC_OFST        0x0

/*
 * Register : can1_ecc
 * 
 * Per-Master Security bit for can1_ecc
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC_RSVD
 * 
 */
/*
 * Field : Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC_RSVD register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC_RSVD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC_RSVD register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC_RSVD_MSB        31
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC_RSVD register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC_RSVD_WIDTH      32
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC_RSVD register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC_RSVD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC_RSVD register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC_RSVD_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC_RSVD register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC_RSVD_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC_RSVD field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC_RSVD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC_RSVD register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC_RSVD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC_s
{
    uint32_t  Reserved : 32;  /* ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC_RSVD */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC_s  ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC register. */
#define ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC_OFST        0x4

/*
 * Register : dma_ecc
 * 
 * Per-Master Security bit for dma_ecc
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                         
 * :--------|:-------|:--------|:-------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_M0
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                         
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                         
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                         
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to dma_ecc. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to dma_ecc. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_DMA_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_MPU_M0 */
    uint32_t           : 15;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_DMA_ECC. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_s  ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_t;
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
 * :--------|:-------|:--------|:-----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_M0
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                             
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                             
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                             
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to emac0rx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to emac0rx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_MPU_M0 */
    uint32_t           : 15;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_s  ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_t;
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
 * :--------|:-------|:--------|:-----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_M0
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                             
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                             
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                             
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to emac0tx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to emac0tx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_MPU_M0 */
    uint32_t           : 15;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_s  ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_t;
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
 * :--------|:-------|:--------|:-----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_M0
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                             
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                             
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                             
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to emac1rx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to emac1rx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_MPU_M0 */
    uint32_t           : 15;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_s  ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_t;
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
 * :--------|:-------|:--------|:-----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_M0
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                             
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                             
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                             
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to  emac1tx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to emac1tx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_MPU_M0 */
    uint32_t           : 15;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_s  ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_t;
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
 * :--------|:-------|:--------|:-----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_M0
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                             
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                             
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                             
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to emac2rx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to emac2rx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_MPU_M0 */
    uint32_t           : 15;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_s  ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_t;
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
 * :--------|:-------|:--------|:-----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_M0
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                             
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                             
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                             
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to emac2tx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to emac2tx_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_MPU_M0 */
    uint32_t           : 15;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_s  ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_OFST        0x20

/*
 * Register : emac3rx_ecc
 * 
 * Per-Master Security bit for emac3rx_ecc
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC_RSVD
 * 
 */
/*
 * Field : Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC_RSVD register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC_RSVD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC_RSVD register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC_RSVD_MSB        31
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC_RSVD register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC_RSVD_WIDTH      32
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC_RSVD register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC_RSVD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC_RSVD register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC_RSVD_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC_RSVD register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC_RSVD_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC_RSVD field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC_RSVD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC_RSVD register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC_RSVD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC_s
{
    uint32_t  Reserved : 32;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC_RSVD */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC_s  ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC_OFST        0x24

/*
 * Register : emac3tx_ecc
 * 
 * Per-Master Security bit for emac3tx_ecc
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC_RSVD
 * 
 */
/*
 * Field : Reserved
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC_RSVD register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC_RSVD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC_RSVD register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC_RSVD_MSB        31
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC_RSVD register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC_RSVD_WIDTH      32
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC_RSVD register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC_RSVD_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC_RSVD register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC_RSVD_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC_RSVD register field. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC_RSVD_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC_RSVD field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC_RSVD_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC_RSVD register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC_RSVD_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC_s
{
    uint32_t  Reserved : 32;  /* ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC_RSVD */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC_s  ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC register. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC_OFST        0x28

/*
 * Register : nand_ecc
 * 
 * Per-Master Security bit for nand_ecc
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                          
 * :--------|:-------|:--------|:--------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_M0
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                          
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                          
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                          
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to nand_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to nand_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_NAND_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_MPU_M0 */
    uint32_t           : 15;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_NAND_ECC. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_s  ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_t;
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
 * :--------|:-------|:--------|:-----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_MPU_M0
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                             
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                             
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                             
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to nand_read_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to nand_read_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_MPU_M0 */
    uint32_t           : 15;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_s  ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_OFST        0x30

/*
 * Register : nand_write_ecc
 * 
 * Per-Master Security bit for nand_write_ecc
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                             
 * :--------|:-------|:--------|:-----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_MPU_M0
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                             
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                             
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                             
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to nand_write_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to nand_write_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_MPU_M0 */
    uint32_t           : 15;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_s  ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC register. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_OFST        0x34

/*
 * Register : onchipram_ecc
 * 
 * Per-Master Security bit for onchipram_ecc
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                               
 * :--------|:-------|:--------|:-------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_MPU_M0
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                               
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                               
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                               
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to onchipram_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to onchipram_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_MPU_M0 */
    uint32_t           : 15;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_s  ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC register. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_OFST        0x38

/*
 * Register : qspi_ecc
 * 
 * Per-Master Security bit for qspi_ecc
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                          
 * :--------|:-------|:--------|:--------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_MPU_M0
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                          
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                          
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                          
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to qspi_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to qspi_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to qspi_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_MPU_M0 */
    uint32_t           : 15;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_s  ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC register. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_OFST        0x3c

/*
 * Register : sdmmc_ecc
 * 
 * Per-Master Security bit for sdmmc_ecc
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                           
 * :--------|:-------|:--------|:---------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_M0
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                           
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                           
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                           
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to sdmmc_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to sdmmc_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_MPU_M0 */
    uint32_t           : 15;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_s  ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_t;
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
 * :--------|:-------|:--------|:--------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_M0
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                          
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                          
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                          
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to usb0_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to usb0_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_USB0_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_MPU_M0 */
    uint32_t           : 15;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_USB0_ECC. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_s  ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_t;
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
 * :--------|:-------|:--------|:--------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_M0
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                          
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                          
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                          
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to usb1_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to usb1_ecc. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_USB1_ECC.
 */
struct ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_MPU_M0 */
    uint32_t           : 15;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_USB1_ECC. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_s  ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_t;
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
 * :--------|:-------|:--------|:-----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                             
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                             
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                             
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                             
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to clock_manager. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to clock_manager. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_DMA field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_DMA_SET(value) (((value) << 8) & 0x00000100)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to clock_manager. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER.
 */
struct ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_s  ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER register. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_OFST        0x4c

/*
 * Register : fpga_manager_register
 * 
 * Per-Master Security bit for fpga_manager
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                  
 * :--------|:-------|:--------|:----------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                                  
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_DMA   
 *  [23:9]  | ???    | Unknown | *UNDEFINED*                                  
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                                  
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to fpga_manager. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to fpga_manager. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_DMA field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to fpga_manager. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG.
 */
struct ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_s
{
    uint32_t  mpu_m0 :  1;  /* ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_MPU_M0 */
    uint32_t         :  7;  /* *UNDEFINED* */
    uint32_t  dma    :  1;  /* ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_DMA */
    uint32_t         : 15;  /* *UNDEFINED* */
    uint32_t  ahb_ap :  1;  /* ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_AHB_AP */
    uint32_t         :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_s  ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG register. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_OFST        0x50

/*
 * Register : pin_mux_register
 * 
 * Per-Master Security bit for pin_mux_register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                             
 * :--------|:-------|:--------|:-----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                             
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                             
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                             
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                             
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to pin_mux_register.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to pin_mux_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_DMA field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_DMA_SET(value) (((value) << 8) & 0x00000100)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to pin_mux_register.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG.
 */
struct ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_s  ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG register. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_OFST        0x54

/*
 * Register : reset_manager
 * 
 * Per-Master Security bit for reset_manager
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                             
 * :--------|:-------|:--------|:-----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                             
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                             
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                             
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                             
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to reset_manager. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to reset_manager. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_DMA field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_DMA_SET(value) (((value) << 8) & 0x00000100)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to reset_manager. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER.
 */
struct ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_s  ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER register. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_OFST        0x58

/*
 * Register : system_manager
 * 
 * Per-Master Security bit for system_manager
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                             
 * :--------|:-------|:--------|:-----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                             
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                             
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                             
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                             
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to system_manager. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to system_manager. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_DMA field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_DMA_SET(value) (((value) << 8) & 0x00000100)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to system_manager. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER.
 */
struct ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_s  ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER register. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_OFST        0x5c

/*
 * Register : osc0_timer
 * 
 * Per-Master Security bit for osc0_timer
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                          
 * :--------|:-------|:--------|:--------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                          
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                          
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                          
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                          
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to osc0_timer. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_DMA field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_DMA_SET(value) (((value) << 8) & 0x00000100)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to osc0_timer. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR.
 */
struct ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_s  ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_OFST        0x60

/*
 * Register : osc1_timer
 * 
 * Per-Master Security bit for osc1_timer
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                          
 * :--------|:-------|:--------|:--------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                          
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                          
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                          
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                          
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to osc1_timer. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_DMA field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_DMA_SET(value) (((value) << 8) & 0x00000100)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to osc1_timer. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR.
 */
struct ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_s  ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR register. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_OFST        0x64

/*
 * Register : watchdog0
 * 
 * Per-Master Security bit for watchdog0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                     
 * :--------|:-------|:--------|:---------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_WD0_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                     
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_WD0_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                     
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_WD0_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                     
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_WD0_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                     
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to watchdog0. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_WD0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_WD0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_WD0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_WD0_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_WD0_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WD0_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_WD0_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_WD0_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_WD0_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_WD0_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_WD0_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_WD0_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_WD0_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WD0_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_WD0_DMA field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_WD0_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_DMA_SET(value) (((value) << 8) & 0x00000100)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_WD0_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_WD0_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_WD0_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_WD0_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_WD0_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WD0_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_WD0_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_WD0_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to watchdog0. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_WD0_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_WD0_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_WD0_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_WD0_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_WD0_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WD0_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_WD0_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_WD0_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_WD0.
 */
struct ALT_NOC_FW_L4_SYS_SCR_WD0_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_WD0_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_WD0_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_WD0_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_WD0_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_WD0. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_WD0_s  ALT_NOC_FW_L4_SYS_SCR_WD0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WD0 register. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_WD0 register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_WD0_OFST        0x68

/*
 * Register : watchdog1
 * 
 * Per-Master Security bit for watchdog1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                     
 * :--------|:-------|:--------|:---------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_WD1_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                     
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_WD1_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                     
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_WD1_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                     
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_WD1_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                     
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to watchdog1. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_WD1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_WD1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_WD1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_WD1_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_WD1_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WD1_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_WD1_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_WD1_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_WD1_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_WD1_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_WD1_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_WD1_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_WD1_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WD1_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_WD1_DMA field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_WD1_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_DMA_SET(value) (((value) << 8) & 0x00000100)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_WD1_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_WD1_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_WD1_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_WD1_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_WD1_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WD1_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_WD1_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_WD1_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to watchdog1. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_WD1_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_WD1_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_WD1_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_WD1_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_WD1_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WD1_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_WD1_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_WD1_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_WD1.
 */
struct ALT_NOC_FW_L4_SYS_SCR_WD1_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_WD1_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_WD1_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_WD1_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_WD1_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_WD1. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_WD1_s  ALT_NOC_FW_L4_SYS_SCR_WD1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_WD1 register. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_WD1 register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_WD1_OFST        0x6c

/*
 * Register : dap
 * 
 * Per-Master Security bit for dap
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                     
 * :--------|:-------|:--------|:---------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                     
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_DAP_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                     
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_DAP_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                     
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_DAP_AHB_AP
 *  [25]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_DAP_ETR   
 *  [31:26] | ???    | Unknown | *UNDEFINED*                     
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to dap. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to dap. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_DAP_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_DAP_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_DAP_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_DAP_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_DAP_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_DAP_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_DAP_DMA field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_DAP_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_DMA_SET(value) (((value) << 8) & 0x00000100)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_DAP_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_DAP_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_DAP_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_DAP_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_DAP_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_DAP_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_DAP_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_DAP_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to dap. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_DAP_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_DAP_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_DAP_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_DAP_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_DAP_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_DAP_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_DAP_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_DAP_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_DAP.
 */
struct ALT_NOC_FW_L4_SYS_SCR_DAP_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_DAP_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_DAP_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_DAP_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_DAP_AHB_AP */
    uint32_t  etr      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_DAP_ETR */
    uint32_t           :  6;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_DAP. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_DAP_s  ALT_NOC_FW_L4_SYS_SCR_DAP_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_DAP register. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_DAP register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_DAP_OFST        0x70

/*
 * Register : fpga_manager_streaming
 * 
 * Per-Master Security bit for fpga_manager_streaming
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                        
 * :--------|:-------|:--------|:----------------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                                        
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_DMA   
 *  [23:9]  | ???    | Unknown | *UNDEFINED*                                        
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                                        
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to
 * fpga_manager_streaming. When cleared (0), only Secure transactions are allowed.
 * When set (1), both Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to fpga_manager_streaming.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_DMA field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to
 * fpga_manager_streaming. When cleared (0), only Secure transactions are allowed.
 * When set (1), both Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING.
 */
struct ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_s
{
    uint32_t  mpu_m0 :  1;  /* ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_MPU_M0 */
    uint32_t         :  7;  /* *UNDEFINED* */
    uint32_t  dma    :  1;  /* ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_DMA */
    uint32_t         : 15;  /* *UNDEFINED* */
    uint32_t  ahb_ap :  1;  /* ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_AHB_AP */
    uint32_t         :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_s  ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING register. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_OFST        0x74

/*
 * Register : security_manager_streaming
 * 
 * Per-Master Security bit for security_manager_streaming
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                   
 * :--------|:-------|:--------|:-----------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                                   
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_DMA   
 *  [23:9]  | ???    | Unknown | *UNDEFINED*                                   
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                                   
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to
 * security_manager_streaming. When cleared (0), only Secure transactions are
 * allowed. When set (1), both Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to
 * security_manager_streaming. When cleared (0), only Secure transactions are
 * allowed. When set (1), both Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_DMA field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to
 * security_manager_streaming. When cleared (0), only Secure transactions are
 * allowed. When set (1), both Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING.
 */
struct ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_s
{
    uint32_t  mpu_m0 :  1;  /* ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_MPU_M0 */
    uint32_t         :  7;  /* *UNDEFINED* */
    uint32_t  dma    :  1;  /* ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_DMA */
    uint32_t         : 15;  /* *UNDEFINED* */
    uint32_t  ahb_ap :  1;  /* ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_AHB_AP */
    uint32_t         :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_s  ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING register. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_OFST        0x78
/* The address of the ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING register. */
#define ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_ADDR(base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_OFST))

/*
 * Register : hmc_register
 * 
 * Per-Master Security bit for hmc_register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                         
 * :--------|:-------|:--------|:-------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_HMC_REG_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                         
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_HMC_REG_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                         
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_HMC_REG_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                         
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_HMC_REG_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                         
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to hmc_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_HMC_REG_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to hmc_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_DMA field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_HMC_REG_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to hmc_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_HMC_REG_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to hmc_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_HMC_REG_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_HMC_REG_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_HMC_REG.
 */
struct ALT_NOC_FW_L4_SYS_SCR_HMC_REG_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_HMC_REG_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_HMC_REG_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_HMC_REG_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_HMC_REG_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_HMC_REG. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_HMC_REG_s  ALT_NOC_FW_L4_SYS_SCR_HMC_REG_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_HMC_REG register. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_HMC_REG register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_REG_OFST        0x7c

/*
 * Register : hmc_adaptor_register
 * 
 * Per-Master Security bit for hmc_adaptor_register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                 
 * :--------|:-------|:--------|:---------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_MPU_M0
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                                 
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_DMA   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                                 
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                                 
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                                 
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to hmc_adaptor_register.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : dma
 * 
 * Security bit configuration for transactions from dma to hmc_adaptor_register.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_DMA register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_DMA register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_DMA field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_DMA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to
 * hmc_adaptor_register. When cleared (0), only Secure transactions are allowed.
 * When set (1), both Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to hmc_adaptor_register.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG.
 */
struct ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_MPU_M0 */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_DMA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_s  ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG register. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_OFST        0x80

/*
 * Register : l3_interconnect_register
 * 
 * Per-Master Security bit for ddr_scheduler_register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                     
 * :--------|:-------|:--------|:-------------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_MPU_M0
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                                     
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                                     
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                                     
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to
 * ddr_scheduler_register. When cleared (0), only Secure transactions are allowed.
 * When set (1), both Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to
 * ddr_scheduler_register. When cleared (0), only Secure transactions are allowed.
 * When set (1), both Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to
 * ddr_schedule_register. When cleared (0), only Secure transactions are allowed.
 * When set (1), both Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG.
 */
struct ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_MPU_M0 */
    uint32_t           : 15;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_s  ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG register. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_OFST        0x84

/*
 * Register : ddr_scheduler_register
 * 
 * Per-Master Security bit for ddr_scheduler_register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                               
 * :--------|:-------|:--------|:-------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_MPU_M0
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                               
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                               
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                               
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to
 * ddr_scheduler_register. When cleared (0), only Secure transactions are allowed.
 * When set (1), both Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to
 * ddr_scheduler_register. When cleared (0), only Secure transactions are allowed.
 * When set (1), both Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to
 * ddr_schedule_register. When cleared (0), only Secure transactions are allowed.
 * When set (1), both Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG.
 */
struct ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_MPU_M0 */
    uint32_t           : 15;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_s  ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG register. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_OFST        0x88

/*
 * Register : l4_interconnect_firewall_csr
 * 
 * Per-Master Security bit for noc_firewall_scr
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                        
 * :--------|:-------|:--------|:----------------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_MPU_M0
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                                        
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                                        
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                                        
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to noc_firewall_scr.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to noc_firewall_scr.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to noc_firewall_scr.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR.
 */
struct ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_MPU_M0 */
    uint32_t           : 15;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_s  ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_OFST        0x8c

/*
 * Register : l4_interconnect_probes_csr
 * 
 * Per-Master Security bit for noc_probes_register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                          
 * :--------|:-------|:--------|:------------------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_MPU_M0
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                                          
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                                          
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                                          
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to noc_probes_register.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to noc_probes_register.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR.
 */
struct ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_MPU_M0 */
    uint32_t           : 15;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_s  ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_OFST        0x90

/*
 * Register : l4_qos_csr
 * 
 * Per-Master Security bit for noc_probes_register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                            
 * :--------|:-------|:--------|:----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_MPU_M0
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                            
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_F2H   
 *  [23:17] | ???    | Unknown | *UNDEFINED*                            
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_AHB_AP
 *  [31:25] | ???    | Unknown | *UNDEFINED*                            
 * 
 */
/*
 * Field : mpu_m0
 * 
 * Security bit configuration for transactions from mpu_m0 to noc_probes_register.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_MPU_M0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_MPU_M0_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_MPU_M0_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_MPU_M0_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_MPU_M0 register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_MPU_M0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_MPU_M0 register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_MPU_M0_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_MPU_M0 field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_MPU_M0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_MPU_M0 register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_MPU_M0_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_F2H_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_F2H_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_F2H_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_F2H_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_F2H register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_F2H_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_F2H register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_F2H_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_F2H field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_F2H_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_F2H register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_F2H_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ahb_ap
 * 
 * Security bit configuration for transactions from ahb_ap to noc_probes_register.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_AHB_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_AHB_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_AHB_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_AHB_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_AHB_AP register field value. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_AHB_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_AHB_AP register field. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_AHB_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_AHB_AP field value from a register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_AHB_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_AHB_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_AHB_AP_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR.
 */
struct ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_s
{
    uint32_t  mpu_m0   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_MPU_M0 */
    uint32_t           : 15;  /* *UNDEFINED* */
    uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_F2H */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  ahb_ap   :  1;  /* ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_AHB_AP */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_s  ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR register. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR register from the beginning of the component. */
#define ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_OFST        0x94

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_NOC_FW_L4_SYS_SCR.
 */
struct ALT_NOC_FW_L4_SYS_SCR_s
{
    ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC_t                  can0_ecc;                      /* ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC */
    ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC_t                  can1_ecc;                      /* ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC */
    ALT_NOC_FW_L4_SYS_SCR_DMA_ECC_t                   dma_ecc;                       /* ALT_NOC_FW_L4_SYS_SCR_DMA_ECC */
    ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC_t               emac0rx_ecc;                   /* ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC */
    ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC_t               emac0tx_ecc;                   /* ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC */
    ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC_t               emac1rx_ecc;                   /* ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC */
    ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC_t               emac1tx_ecc;                   /* ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC */
    ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC_t               emac2rx_ecc;                   /* ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC */
    ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC_t               emac2tx_ecc;                   /* ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC */
    ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC_t               emac3rx_ecc;                   /* ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC */
    ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC_t               emac3tx_ecc;                   /* ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC */
    ALT_NOC_FW_L4_SYS_SCR_NAND_ECC_t                  nand_ecc;                      /* ALT_NOC_FW_L4_SYS_SCR_NAND_ECC */
    ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC_t               nand_read_ecc;                 /* ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC */
    ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC_t               nand_write_ecc;                /* ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC */
    ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC_t             onchipram_ecc;                 /* ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC */
    ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC_t                  qspi_ecc;                      /* ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC */
    ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC_t                 sdmmc_ecc;                     /* ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC */
    ALT_NOC_FW_L4_SYS_SCR_USB0_ECC_t                  usb0_ecc;                      /* ALT_NOC_FW_L4_SYS_SCR_USB0_ECC */
    ALT_NOC_FW_L4_SYS_SCR_USB1_ECC_t                  usb1_ecc;                      /* ALT_NOC_FW_L4_SYS_SCR_USB1_ECC */
    ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER_t               clock_manager;                 /* ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER */
    ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG_t          fpga_manager_register;         /* ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG */
    ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG_t               pin_mux_register;              /* ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG */
    ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER_t               reset_manager;                 /* ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER */
    ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER_t               system_manager;                /* ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER */
    ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR_t                  osc0_timer;                    /* ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR */
    ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR_t                  osc1_timer;                    /* ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR */
    ALT_NOC_FW_L4_SYS_SCR_WD0_t                       watchdog0;                     /* ALT_NOC_FW_L4_SYS_SCR_WD0 */
    ALT_NOC_FW_L4_SYS_SCR_WD1_t                       watchdog1;                     /* ALT_NOC_FW_L4_SYS_SCR_WD1 */
    ALT_NOC_FW_L4_SYS_SCR_DAP_t                       dap;                           /* ALT_NOC_FW_L4_SYS_SCR_DAP */
    ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING_t    fpga_manager_streaming;        /* ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING */
    ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING_t         security_manager_streaming;    /* ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING */
    ALT_NOC_FW_L4_SYS_SCR_HMC_REG_t                   hmc_register;                  /* ALT_NOC_FW_L4_SYS_SCR_HMC_REG */
    ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG_t           hmc_adaptor_register;          /* ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG */
    ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG_t       l3_interconnect_register;      /* ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG */
    ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG_t             ddr_scheduler_register;        /* ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG */
    ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR_t    l4_interconnect_firewall_csr;  /* ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR */
    ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR_t  l4_interconnect_probes_csr;    /* ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR */
    ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR_t                l4_qos_csr;                    /* ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR */
    volatile uint32_t                                 _pad_0x98_0x100[26];           /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_FW_L4_SYS_SCR. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_s  ALT_NOC_FW_L4_SYS_SCR_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_FW_L4_SYS_SCR. */
struct ALT_NOC_FW_L4_SYS_SCR_raw_s
{
    volatile uint32_t  can0_ecc;                      /* ALT_NOC_FW_L4_SYS_SCR_CAN0_ECC */
    volatile uint32_t  can1_ecc;                      /* ALT_NOC_FW_L4_SYS_SCR_CAN1_ECC */
    volatile uint32_t  dma_ecc;                       /* ALT_NOC_FW_L4_SYS_SCR_DMA_ECC */
    volatile uint32_t  emac0rx_ecc;                   /* ALT_NOC_FW_L4_SYS_SCR_EMAC0RX_ECC */
    volatile uint32_t  emac0tx_ecc;                   /* ALT_NOC_FW_L4_SYS_SCR_EMAC0TX_ECC */
    volatile uint32_t  emac1rx_ecc;                   /* ALT_NOC_FW_L4_SYS_SCR_EMAC1RX_ECC */
    volatile uint32_t  emac1tx_ecc;                   /* ALT_NOC_FW_L4_SYS_SCR_EMAC1TX_ECC */
    volatile uint32_t  emac2rx_ecc;                   /* ALT_NOC_FW_L4_SYS_SCR_EMAC2RX_ECC */
    volatile uint32_t  emac2tx_ecc;                   /* ALT_NOC_FW_L4_SYS_SCR_EMAC2TX_ECC */
    volatile uint32_t  emac3rx_ecc;                   /* ALT_NOC_FW_L4_SYS_SCR_EMAC3RX_ECC */
    volatile uint32_t  emac3tx_ecc;                   /* ALT_NOC_FW_L4_SYS_SCR_EMAC3TX_ECC */
    volatile uint32_t  nand_ecc;                      /* ALT_NOC_FW_L4_SYS_SCR_NAND_ECC */
    volatile uint32_t  nand_read_ecc;                 /* ALT_NOC_FW_L4_SYS_SCR_NAND_RD_ECC */
    volatile uint32_t  nand_write_ecc;                /* ALT_NOC_FW_L4_SYS_SCR_NAND_WR_ECC */
    volatile uint32_t  onchipram_ecc;                 /* ALT_NOC_FW_L4_SYS_SCR_ONCHIPRAM_ECC */
    volatile uint32_t  qspi_ecc;                      /* ALT_NOC_FW_L4_SYS_SCR_QSPI_ECC */
    volatile uint32_t  sdmmc_ecc;                     /* ALT_NOC_FW_L4_SYS_SCR_SDMMC_ECC */
    volatile uint32_t  usb0_ecc;                      /* ALT_NOC_FW_L4_SYS_SCR_USB0_ECC */
    volatile uint32_t  usb1_ecc;                      /* ALT_NOC_FW_L4_SYS_SCR_USB1_ECC */
    volatile uint32_t  clock_manager;                 /* ALT_NOC_FW_L4_SYS_SCR_CLK_MANAGER */
    volatile uint32_t  fpga_manager_register;         /* ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_REG */
    volatile uint32_t  pin_mux_register;              /* ALT_NOC_FW_L4_SYS_SCR_PIN_MUX_REG */
    volatile uint32_t  reset_manager;                 /* ALT_NOC_FW_L4_SYS_SCR_RST_MANAGER */
    volatile uint32_t  system_manager;                /* ALT_NOC_FW_L4_SYS_SCR_SYS_MANAGER */
    volatile uint32_t  osc0_timer;                    /* ALT_NOC_FW_L4_SYS_SCR_OSC0_TMR */
    volatile uint32_t  osc1_timer;                    /* ALT_NOC_FW_L4_SYS_SCR_OSC1_TMR */
    volatile uint32_t  watchdog0;                     /* ALT_NOC_FW_L4_SYS_SCR_WD0 */
    volatile uint32_t  watchdog1;                     /* ALT_NOC_FW_L4_SYS_SCR_WD1 */
    volatile uint32_t  dap;                           /* ALT_NOC_FW_L4_SYS_SCR_DAP */
    volatile uint32_t  fpga_manager_streaming;        /* ALT_NOC_FW_L4_SYS_SCR_FPGA_MANAGER_STREAMING */
    volatile uint32_t  security_manager_streaming;    /* ALT_NOC_FW_L4_SYS_SCR_SEC_MGR_STREAMING */
    volatile uint32_t  hmc_register;                  /* ALT_NOC_FW_L4_SYS_SCR_HMC_REG */
    volatile uint32_t  hmc_adaptor_register;          /* ALT_NOC_FW_L4_SYS_SCR_HMC_ADAPTOR_REG */
    volatile uint32_t  l3_interconnect_register;      /* ALT_NOC_FW_L4_SYS_SCR_L3_INTERCONNECT_REG */
    volatile uint32_t  ddr_scheduler_register;        /* ALT_NOC_FW_L4_SYS_SCR_DDR_SCHED_REG */
    volatile uint32_t  l4_interconnect_firewall_csr;  /* ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_FW_CSR */
    volatile uint32_t  l4_interconnect_probes_csr;    /* ALT_NOC_FW_L4_SYS_SCR_L4_INTERCONNECT_PRBS_CSR */
    volatile uint32_t  l4_qos_csr;                    /* ALT_NOC_FW_L4_SYS_SCR_L4_QOS_CSR */
    uint32_t           _pad_0x98_0x100[26];           /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_FW_L4_SYS_SCR. */
typedef volatile struct ALT_NOC_FW_L4_SYS_SCR_raw_s  ALT_NOC_FW_L4_SYS_SCR_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_NOC_FW_L4_SYS_SCR_H__ */

