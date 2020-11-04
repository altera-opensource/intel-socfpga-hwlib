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

/* Altera - ALT_SOC_NOC_FW_MPFE_CSR */

#ifndef __ALT_SOCAL_SOC_NOC_FW_MPFE_CSR_H__
#define __ALT_SOCAL_SOC_NOC_FW_MPFE_CSR_H__

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
 * Component : SOC_NOC_FW_MPFE_CSR
 * MPFE Security Control Registers (SCR)
 * 
 */
/*
 * Register : hmc_register
 * 
 * Per-Master Security bit for hmc_register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                  
 * :--------|:-------|:------|:----------------------------------------------
 *  [0]     | RW     | 0x0   | ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_MPU     
 *  [7:1]   | ???    | 0x0   | *UNDEFINED*                                  
 *  [8]     | RW     | 0x0   | ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_FPGA2SOC
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*                                  
 *  [16]    | RW     | 0x0   | ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_AXI_AP  
 *  [31:17] | ???    | 0x0   | *UNDEFINED*                                  
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to hmc_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_MPU register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_MPU register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_MPU_MSB        0
/* The width in bits of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_MPU register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_MPU_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_MPU register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_MPU register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_MPU register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_MPU_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_MPU field value from a register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_MPU register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_FPGA2SOC register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_FPGA2SOC_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_FPGA2SOC register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_FPGA2SOC_MSB        8
/* The width in bits of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_FPGA2SOC register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_FPGA2SOC register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_FPGA2SOC_SET_MSK    0x00000100
/* The mask used to clear the ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_FPGA2SOC register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_FPGA2SOC_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_FPGA2SOC register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_FPGA2SOC_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_FPGA2SOC field value from a register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_FPGA2SOC_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_FPGA2SOC register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_FPGA2SOC_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to hmc_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_AXI_AP register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_AXI_AP_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_AXI_AP register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_AXI_AP_MSB        16
/* The width in bits of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_AXI_AP register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_AXI_AP_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_AXI_AP register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_AXI_AP_SET_MSK    0x00010000
/* The mask used to clear the ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_AXI_AP register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_AXI_AP_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_AXI_AP register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_AXI_AP_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_AXI_AP field value from a register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_AXI_AP_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_AXI_AP register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_AXI_AP_SET(value) (((value) << 16) & 0x00010000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER.
 */
struct ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_AXI_AP */
    uint32_t                    : 15;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER. */
typedef struct ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_s  ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER register from the beginning of the component. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_OFST        0x0

/*
 * Register : hmc_adaptor_register
 * 
 * Per-Master Security bit for hmc_adaptor_register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                          
 * :--------|:-------|:------|:------------------------------------------------------
 *  [0]     | RW     | 0x0   | ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_MPU     
 *  [7:1]   | ???    | 0x0   | *UNDEFINED*                                          
 *  [8]     | RW     | 0x0   | ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_FPGA2SOC
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*                                          
 *  [16]    | RW     | 0x0   | ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_AXI_AP  
 *  [31:17] | ???    | 0x0   | *UNDEFINED*                                          
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to hmc_adaptor_register.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_MPU register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_MPU register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_MPU_MSB        0
/* The width in bits of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_MPU register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_MPU_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_MPU register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_MPU register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_MPU register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_MPU_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_MPU field value from a register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_MPU register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_FPGA2SOC register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_FPGA2SOC_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_FPGA2SOC register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_FPGA2SOC_MSB        8
/* The width in bits of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_FPGA2SOC register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_FPGA2SOC register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_FPGA2SOC_SET_MSK    0x00000100
/* The mask used to clear the ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_FPGA2SOC register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_FPGA2SOC_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_FPGA2SOC register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_FPGA2SOC_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_FPGA2SOC field value from a register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_FPGA2SOC_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_FPGA2SOC register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_FPGA2SOC_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to hmc_adaptor_register.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_AXI_AP register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_AXI_AP_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_AXI_AP register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_AXI_AP_MSB        16
/* The width in bits of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_AXI_AP register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_AXI_AP_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_AXI_AP register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_AXI_AP_SET_MSK    0x00010000
/* The mask used to clear the ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_AXI_AP register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_AXI_AP_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_AXI_AP register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_AXI_AP_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_AXI_AP field value from a register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_AXI_AP_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_AXI_AP register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_AXI_AP_SET(value) (((value) << 16) & 0x00010000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER.
 */
struct ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_AXI_AP */
    uint32_t                    : 15;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER. */
typedef struct ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_s  ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER register from the beginning of the component. */
#define ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_OFST        0x4

/*
 * Register : noc_scheduler_csr
 * 
 * Per-Master Security bit for ddr_scheduler_register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                       
 * :--------|:-------|:------|:---------------------------------------------------
 *  [0]     | RW     | 0x0   | ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_MPU     
 *  [7:1]   | ???    | 0x0   | *UNDEFINED*                                       
 *  [8]     | RW     | 0x0   | ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_FPGA2SOC
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*                                       
 *  [16]    | RW     | 0x0   | ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_AXI_AP  
 *  [31:17] | ???    | 0x0   | *UNDEFINED*                                       
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to ddr_scheduler_register.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_MPU register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_MPU register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_MPU_MSB        0
/* The width in bits of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_MPU register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_MPU_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_MPU register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_MPU register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_MPU register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_MPU_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_MPU field value from a register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_MPU register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_FPGA2SOC register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_FPGA2SOC_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_FPGA2SOC register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_FPGA2SOC_MSB        8
/* The width in bits of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_FPGA2SOC register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_FPGA2SOC register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_FPGA2SOC_SET_MSK    0x00000100
/* The mask used to clear the ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_FPGA2SOC register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_FPGA2SOC_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_FPGA2SOC register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_FPGA2SOC_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_FPGA2SOC field value from a register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_FPGA2SOC_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_FPGA2SOC register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_FPGA2SOC_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to
 * ddr_scheduler_register. When cleared (0), only Secure transactions are allowed.
 * When set (1), both Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_AXI_AP register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_AXI_AP_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_AXI_AP register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_AXI_AP_MSB        16
/* The width in bits of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_AXI_AP register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_AXI_AP_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_AXI_AP register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_AXI_AP_SET_MSK    0x00010000
/* The mask used to clear the ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_AXI_AP register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_AXI_AP_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_AXI_AP register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_AXI_AP_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_AXI_AP field value from a register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_AXI_AP_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_AXI_AP register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_AXI_AP_SET(value) (((value) << 16) & 0x00010000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR.
 */
struct ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_AXI_AP */
    uint32_t                    : 15;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR. */
typedef struct ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_s  ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR register from the beginning of the component. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_OFST        0x8

/*
 * Register : noc_qos
 * 
 * Per-Master Security bit for noc_qos_register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                             
 * :--------|:-------|:------|:-----------------------------------------
 *  [0]     | RW     | 0x0   | ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_MPU     
 *  [7:1]   | ???    | 0x0   | *UNDEFINED*                             
 *  [8]     | RW     | 0x0   | ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_FPGA2SOC
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*                             
 *  [16]    | RW     | 0x0   | ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_AXI_AP  
 *  [31:17] | ???    | 0x0   | *UNDEFINED*                             
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to noc_qos. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_MPU register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_MPU register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_MPU_MSB        0
/* The width in bits of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_MPU register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_MPU_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_MPU register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_MPU register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_MPU register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_MPU_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_MPU field value from a register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_MPU register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to noc_qos. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_FPGA2SOC register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_FPGA2SOC_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_FPGA2SOC register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_FPGA2SOC_MSB        8
/* The width in bits of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_FPGA2SOC register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_FPGA2SOC register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_FPGA2SOC_SET_MSK    0x00000100
/* The mask used to clear the ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_FPGA2SOC register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_FPGA2SOC_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_FPGA2SOC register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_FPGA2SOC_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_FPGA2SOC field value from a register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_FPGA2SOC_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_FPGA2SOC register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_FPGA2SOC_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to noc_qos. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_AXI_AP register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_AXI_AP_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_AXI_AP register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_AXI_AP_MSB        16
/* The width in bits of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_AXI_AP register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_AXI_AP_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_AXI_AP register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_AXI_AP_SET_MSK    0x00010000
/* The mask used to clear the ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_AXI_AP register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_AXI_AP_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_AXI_AP register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_AXI_AP_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_AXI_AP field value from a register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_AXI_AP_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_AXI_AP register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_AXI_AP_SET(value) (((value) << 16) & 0x00010000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS.
 */
struct ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_AXI_AP */
    uint32_t                    : 15;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS. */
typedef struct ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_s  ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS register from the beginning of the component. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_OFST        0x10

/*
 * Register : noc_probes
 * 
 * Per-Master Security bit for noc_probes_register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                
 * :--------|:-------|:------|:--------------------------------------------
 *  [0]     | RW     | 0x0   | ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_MPU     
 *  [7:1]   | ???    | 0x0   | *UNDEFINED*                                
 *  [8]     | RW     | 0x0   | ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_FPGA2SOC
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*                                
 *  [16]    | RW     | 0x0   | ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_AXI_AP  
 *  [31:17] | ???    | 0x0   | *UNDEFINED*                                
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to noc_probes. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_MPU register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_MPU register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_MPU_MSB        0
/* The width in bits of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_MPU register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_MPU_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_MPU register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_MPU register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_MPU register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_MPU_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_MPU field value from a register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_MPU register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from mpu to noc_probes. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_FPGA2SOC register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_FPGA2SOC_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_FPGA2SOC register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_FPGA2SOC_MSB        8
/* The width in bits of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_FPGA2SOC register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_FPGA2SOC register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_FPGA2SOC_SET_MSK    0x00000100
/* The mask used to clear the ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_FPGA2SOC register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_FPGA2SOC_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_FPGA2SOC register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_FPGA2SOC_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_FPGA2SOC field value from a register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_FPGA2SOC_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_FPGA2SOC register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_FPGA2SOC_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to noc_probes. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_AXI_AP register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_AXI_AP_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_AXI_AP register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_AXI_AP_MSB        16
/* The width in bits of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_AXI_AP register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_AXI_AP_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_AXI_AP register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_AXI_AP_SET_MSK    0x00010000
/* The mask used to clear the ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_AXI_AP register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_AXI_AP_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_AXI_AP register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_AXI_AP_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_AXI_AP field value from a register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_AXI_AP_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_AXI_AP register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_AXI_AP_SET(value) (((value) << 16) & 0x00010000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES.
 */
struct ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_AXI_AP */
    uint32_t                    : 15;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES. */
typedef struct ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_s  ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES register from the beginning of the component. */
#define ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_OFST        0x14

/*
 * Register : fpga2sdram_sidebandmgr
 * 
 * Per-Master Security bit for fpga2sdram_sidebandmgr
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                            
 * :--------|:-------|:------|:--------------------------------------------------------
 *  [0]     | RW     | 0x0   | ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_MPU     
 *  [7:1]   | ???    | 0x0   | *UNDEFINED*                                            
 *  [8]     | RW     | 0x0   | ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_FPGA2SOC
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*                                            
 *  [16]    | RW     | 0x0   | ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_AXI_AP  
 *  [31:17] | ???    | 0x0   | *UNDEFINED*                                            
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to fpga2sdram_sidebandmgr.
 * When cleared (0), only Secure transactions are allowed. When set (1), both
 * Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_MPU register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_MPU register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_MPU_MSB        0
/* The width in bits of the ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_MPU register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_MPU_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_MPU register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_MPU register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_MPU register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_MPU_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_MPU field value from a register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_MPU register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga2soc
 * 
 * Security bit configuration for transactions from fpga2soc to
 * fpga2sdram_sidebandmgr. When cleared (0), only Secure transactions are allowed.
 * When set (1), both Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_FPGA2SOC register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_FPGA2SOC_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_FPGA2SOC register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_FPGA2SOC_MSB        8
/* The width in bits of the ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_FPGA2SOC register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_FPGA2SOC register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_FPGA2SOC_SET_MSK    0x00000100
/* The mask used to clear the ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_FPGA2SOC register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_FPGA2SOC_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_FPGA2SOC register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_FPGA2SOC_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_FPGA2SOC field value from a register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_FPGA2SOC_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_FPGA2SOC register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_FPGA2SOC_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to
 * fpga2sdram_sidebandmgr. When cleared (0), only Secure transactions are allowed.
 * When set (1), both Secure and Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_AXI_AP register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_AXI_AP_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_AXI_AP register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_AXI_AP_MSB        16
/* The width in bits of the ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_AXI_AP register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_AXI_AP_WIDTH      1
/* The mask used to set the ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_AXI_AP register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_AXI_AP_SET_MSK    0x00010000
/* The mask used to clear the ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_AXI_AP register field value. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_AXI_AP_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_AXI_AP register field. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_AXI_AP_RESET      0x0
/* Extracts the ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_AXI_AP field value from a register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_AXI_AP_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_AXI_AP register field value suitable for setting the register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_AXI_AP_SET(value) (((value) << 16) & 0x00010000)

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
 * The struct declaration for register ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR.
 */
struct ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_AXI_AP */
    uint32_t                    : 15;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR. */
typedef struct ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_s  ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR register. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_RESET       0x00000000
/* The byte offset of the ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR register from the beginning of the component. */
#define ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_OFST        0x18

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
 * The struct declaration for register group ALT_SOC_NOC_FW_MPFE_CSR.
 */
struct ALT_SOC_NOC_FW_MPFE_CSR_s
{
    volatile ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER_t            hmc_register;            /* ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER */
    volatile ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER_t    hmc_adaptor_register;    /* ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER */
    volatile ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR_t       noc_scheduler_csr;       /* ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR */
    volatile uint32_t                                          _pad_0xc_0xf;            /* *UNDEFINED* */
    volatile ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS_t                 noc_qos;                 /* ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS */
    volatile ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES_t              noc_probes;              /* ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES */
    volatile ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR_t  fpga2sdram_sidebandmgr;  /* ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR */
    volatile uint32_t                                          _pad_0x1c_0x100[57];     /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_SOC_NOC_FW_MPFE_CSR. */
typedef struct ALT_SOC_NOC_FW_MPFE_CSR_s  ALT_SOC_NOC_FW_MPFE_CSR_t;
/* The struct declaration for the raw register contents of register group ALT_SOC_NOC_FW_MPFE_CSR. */
struct ALT_SOC_NOC_FW_MPFE_CSR_raw_s
{
    volatile uint32_t  hmc_register;            /* ALT_SOC_NOC_FW_MPFE_CSR_HMC_REGISTER */
    volatile uint32_t  hmc_adaptor_register;    /* ALT_SOC_NOC_FW_MPFE_CSR_HMC_ADAPTOR_REGISTER */
    volatile uint32_t  noc_scheduler_csr;       /* ALT_SOC_NOC_FW_MPFE_CSR_NOC_SCHEDULER_CSR */
    volatile uint32_t  _pad_0xc_0xf;            /* *UNDEFINED* */
    volatile uint32_t  noc_qos;                 /* ALT_SOC_NOC_FW_MPFE_CSR_NOC_QOS */
    volatile uint32_t  noc_probes;              /* ALT_SOC_NOC_FW_MPFE_CSR_NOC_PROBES */
    volatile uint32_t  fpga2sdram_sidebandmgr;  /* ALT_SOC_NOC_FW_MPFE_CSR_FPGA2SDRAM_SIDEBANDMGR */
    volatile uint32_t  _pad_0x1c_0x100[57];     /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_SOC_NOC_FW_MPFE_CSR. */
typedef struct ALT_SOC_NOC_FW_MPFE_CSR_raw_s  ALT_SOC_NOC_FW_MPFE_CSR_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_SOC_NOC_FW_MPFE_CSR_H__ */

