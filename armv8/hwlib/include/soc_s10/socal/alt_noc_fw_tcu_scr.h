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

/* Altera - ALT_NOC_FW_TCU_SCR */

#ifndef __ALT_SOCAL_NOC_FW_TCU_SCR_H__
#define __ALT_SOCAL_NOC_FW_TCU_SCR_H__

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
 * Component : NOC_FW_TCU_SCR
 * L4_SYS Security Control Registers (SCR)
 * 
 */
/*
 * Register : tcu
 * 
 * Per-Master Security bit for dma_ecc
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                    
 * :--------|:-------|:--------|:--------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_TCU_SCR_TCU_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                    
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_TCU_SCR_TCU_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                    
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_TCU_SCR_TCU_AXI_AP  
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_TCU_SCR_TCU_MPU register field. */
#define ALT_NOC_FW_TCU_SCR_TCU_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_TCU_SCR_TCU_MPU register field. */
#define ALT_NOC_FW_TCU_SCR_TCU_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_TCU_SCR_TCU_MPU register field. */
#define ALT_NOC_FW_TCU_SCR_TCU_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_TCU_SCR_TCU_MPU register field value. */
#define ALT_NOC_FW_TCU_SCR_TCU_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_TCU_SCR_TCU_MPU register field value. */
#define ALT_NOC_FW_TCU_SCR_TCU_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_TCU_SCR_TCU_MPU register field. */
#define ALT_NOC_FW_TCU_SCR_TCU_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_TCU_SCR_TCU_MPU field value from a register. */
#define ALT_NOC_FW_TCU_SCR_TCU_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_TCU_SCR_TCU_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_TCU_SCR_TCU_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_TCU_SCR_TCU_FPGA2SOC register field. */
#define ALT_NOC_FW_TCU_SCR_TCU_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_TCU_SCR_TCU_FPGA2SOC register field. */
#define ALT_NOC_FW_TCU_SCR_TCU_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_TCU_SCR_TCU_FPGA2SOC register field. */
#define ALT_NOC_FW_TCU_SCR_TCU_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_TCU_SCR_TCU_FPGA2SOC register field value. */
#define ALT_NOC_FW_TCU_SCR_TCU_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_TCU_SCR_TCU_FPGA2SOC register field value. */
#define ALT_NOC_FW_TCU_SCR_TCU_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_TCU_SCR_TCU_FPGA2SOC register field. */
#define ALT_NOC_FW_TCU_SCR_TCU_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_TCU_SCR_TCU_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_TCU_SCR_TCU_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_TCU_SCR_TCU_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_TCU_SCR_TCU_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_TCU_SCR_TCU_AXI_AP register field. */
#define ALT_NOC_FW_TCU_SCR_TCU_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_TCU_SCR_TCU_AXI_AP register field. */
#define ALT_NOC_FW_TCU_SCR_TCU_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_TCU_SCR_TCU_AXI_AP register field. */
#define ALT_NOC_FW_TCU_SCR_TCU_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_TCU_SCR_TCU_AXI_AP register field value. */
#define ALT_NOC_FW_TCU_SCR_TCU_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_TCU_SCR_TCU_AXI_AP register field value. */
#define ALT_NOC_FW_TCU_SCR_TCU_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_TCU_SCR_TCU_AXI_AP register field. */
#define ALT_NOC_FW_TCU_SCR_TCU_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_TCU_SCR_TCU_AXI_AP field value from a register. */
#define ALT_NOC_FW_TCU_SCR_TCU_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_TCU_SCR_TCU_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_TCU_SCR_TCU_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_TCU_SCR_TCU.
 */
struct ALT_NOC_FW_TCU_SCR_TCU_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_TCU_SCR_TCU_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_TCU_SCR_TCU_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_TCU_SCR_TCU_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_TCU_SCR_TCU. */
typedef struct ALT_NOC_FW_TCU_SCR_TCU_s  ALT_NOC_FW_TCU_SCR_TCU_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_TCU_SCR_TCU register. */
#define ALT_NOC_FW_TCU_SCR_TCU_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_TCU_SCR_TCU register from the beginning of the component. */
#define ALT_NOC_FW_TCU_SCR_TCU_OFST        0x0

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
 * The struct declaration for register group ALT_NOC_FW_TCU_SCR.
 */
struct ALT_NOC_FW_TCU_SCR_s
{
    volatile ALT_NOC_FW_TCU_SCR_TCU_t  tcu;                 /* ALT_NOC_FW_TCU_SCR_TCU */
    volatile uint32_t                  _pad_0x4_0x100[63];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_FW_TCU_SCR. */
typedef struct ALT_NOC_FW_TCU_SCR_s  ALT_NOC_FW_TCU_SCR_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_FW_TCU_SCR. */
struct ALT_NOC_FW_TCU_SCR_raw_s
{
    volatile uint32_t  tcu;                 /* ALT_NOC_FW_TCU_SCR_TCU */
    volatile uint32_t  _pad_0x4_0x100[63];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_FW_TCU_SCR. */
typedef struct ALT_NOC_FW_TCU_SCR_raw_s  ALT_NOC_FW_TCU_SCR_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_NOC_FW_TCU_SCR_H__ */

