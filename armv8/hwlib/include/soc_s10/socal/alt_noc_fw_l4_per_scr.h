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
 * Component : NOC_FW_L4_PER_SCR
 * L4_PER Security Control Registers (SCR)
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
 * :--------|:-------|:--------|:---------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                                 
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                                 
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                                 
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to nand_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_MPU field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to nand_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER.
 */
struct ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER. */
typedef struct ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_s  ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_OFST        0x0

/*
 * Register : nand_data
 * 
 * Per-Master Security bit for nand_data
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                             
 * :--------|:-------|:--------|:-----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                             
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_NAND_DATA_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                             
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                             
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to nand_data. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_NAND_DATA_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to nand_data. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_NAND_DATA.
 */
struct ALT_NOC_FW_L4_PER_SCR_NAND_DATA_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_PER_SCR_NAND_DATA_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_NAND_DATA_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_NAND_DATA_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_NAND_DATA. */
typedef struct ALT_NOC_FW_L4_PER_SCR_NAND_DATA_s  ALT_NOC_FW_L4_PER_SCR_NAND_DATA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA register. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_NAND_DATA register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_NAND_DATA_OFST        0x4

/*
 * Register : usb0_register
 * 
 * Per-Master Security bit for usb0_register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                 
 * :--------|:-------|:--------|:---------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                                 
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                                 
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                                 
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to usb0_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_MPU field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to usb0_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER.
 */
struct ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER. */
typedef struct ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_s  ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER register. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_OFST        0xc

/*
 * Register : usb1_register
 * 
 * Per-Master Security bit for usb1_register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                 
 * :--------|:-------|:--------|:---------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                                 
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                                 
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                                 
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to usb1_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_MPU field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to usb1_register. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER.
 */
struct ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER. */
typedef struct ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_s  ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER register. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_OFST        0x10

/*
 * Register : spi_master0
 * 
 * Per-Master Security bit for spi_master0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                               
 * :--------|:-------|:--------|:-------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_MPU     
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                               
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_DMA     
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                               
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                               
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                               
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to spi_master0. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_MPU field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_DMA_SET(value) (((value) << 8) & 0x00000100)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to spi_master0. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0.
 */
struct ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_DMA */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0. */
typedef struct ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_s  ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0 register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_OFST        0x1c

/*
 * Register : spi_master1
 * 
 * Per-Master Security bit for spi_master1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                               
 * :--------|:-------|:--------|:-------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_MPU     
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                               
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_DMA     
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                               
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                               
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                               
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to spi_master1. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_MPU field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_DMA_SET(value) (((value) << 8) & 0x00000100)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to spi_master1. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1.
 */
struct ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_DMA */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1. */
typedef struct ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_s  ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1 register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_OFST        0x20

/*
 * Register : spi_slave0
 * 
 * Per-Master Security bit for spi_slave0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                              
 * :--------|:-------|:--------|:------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_MPU     
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                              
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_DMA     
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                              
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                              
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                              
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to spi_slave0. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_MPU field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_DMA_SET(value) (((value) << 8) & 0x00000100)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to spi_slave0. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0.
 */
struct ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_DMA */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0. */
typedef struct ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_s  ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0 register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_OFST        0x24

/*
 * Register : spi_slave1
 * 
 * Per-Master Security bit for spi_slave1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                              
 * :--------|:-------|:--------|:------------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_MPU     
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                              
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_DMA     
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                              
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                              
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                              
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to spi_slave1. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_MPU field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_DMA_SET(value) (((value) << 8) & 0x00000100)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to spi_slave1. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1.
 */
struct ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_DMA */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1. */
typedef struct ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_s  ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1 register. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_OFST        0x28

/*
 * Register : emac0
 * 
 * Per-Master Security bit for emac0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                         
 * :--------|:-------|:--------|:-------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                         
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_EMAC0_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                         
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_EMAC0_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                         
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to emac0. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_EMAC0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_EMAC0_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_EMAC0_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_EMAC0_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_EMAC0_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to emac0. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_EMAC0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_EMAC0_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_EMAC0_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_EMAC0_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_EMAC0_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC0_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_EMAC0.
 */
struct ALT_NOC_FW_L4_PER_SCR_EMAC0_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_PER_SCR_EMAC0_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_EMAC0_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_EMAC0_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_EMAC0. */
typedef struct ALT_NOC_FW_L4_PER_SCR_EMAC0_s  ALT_NOC_FW_L4_PER_SCR_EMAC0_t;
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
 * :--------|:-------|:--------|:-------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                         
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_EMAC1_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                         
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_EMAC1_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                         
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to emac1. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_EMAC1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_EMAC1_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_EMAC1_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_EMAC1_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_EMAC1_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to emac1. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_EMAC1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_EMAC1_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_EMAC1_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_EMAC1_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_EMAC1_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC1_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_EMAC1.
 */
struct ALT_NOC_FW_L4_PER_SCR_EMAC1_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_PER_SCR_EMAC1_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_EMAC1_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_EMAC1_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_EMAC1. */
typedef struct ALT_NOC_FW_L4_PER_SCR_EMAC1_s  ALT_NOC_FW_L4_PER_SCR_EMAC1_t;
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
 * :--------|:-------|:--------|:-------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                         
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_EMAC2_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                         
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_EMAC2_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                         
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to emac2. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC2_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC2_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_EMAC2_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_EMAC2_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_EMAC2_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC2_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_EMAC2_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_EMAC2_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to emac2. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC2_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_EMAC2_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_EMAC2_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_EMAC2_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_EMAC2_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC2_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_EMAC2_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_EMAC2_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_EMAC2.
 */
struct ALT_NOC_FW_L4_PER_SCR_EMAC2_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_PER_SCR_EMAC2_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_EMAC2_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_EMAC2_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_EMAC2. */
typedef struct ALT_NOC_FW_L4_PER_SCR_EMAC2_s  ALT_NOC_FW_L4_PER_SCR_EMAC2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_EMAC2 register. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_EMAC2 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_EMAC2_OFST        0x34

/*
 * Register : sdmmc
 * 
 * Per-Master Security bit for sdmmc
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                         
 * :--------|:-------|:--------|:-------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU     
 *  [15:1]  | ???    | Unknown | *UNDEFINED*                         
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SDMMC_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                         
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SDMMC_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                         
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to sdmmc. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SDMMC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SDMMC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SDMMC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SDMMC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SDMMC_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SDMMC_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SDMMC_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SDMMC_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to sdmmc. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SDMMC_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SDMMC_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SDMMC_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SDMMC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SDMMC_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SDMMC_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SDMMC_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SDMMC_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SDMMC_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_SDMMC.
 */
struct ALT_NOC_FW_L4_PER_SCR_SDMMC_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_PER_SCR_SDMMC_MPU */
    uint32_t                    : 15;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_SDMMC_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_SDMMC_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_SDMMC. */
typedef struct ALT_NOC_FW_L4_PER_SCR_SDMMC_s  ALT_NOC_FW_L4_PER_SCR_SDMMC_t;
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
 * :--------|:-------|:--------|:-------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU     
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                         
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_GPIO0_DMA     
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                         
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_GPIO0_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                         
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_GPIO0_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                         
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to gpio0. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_GPIO0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_GPIO0_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_GPIO0_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_GPIO0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_GPIO0_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_GPIO0_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to gpio0. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_GPIO0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_GPIO0_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_GPIO0_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_GPIO0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_GPIO0_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_GPIO0_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO0_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_GPIO0.
 */
struct ALT_NOC_FW_L4_PER_SCR_GPIO0_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_PER_SCR_GPIO0_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_GPIO0_DMA */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_GPIO0_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_GPIO0_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_GPIO0. */
typedef struct ALT_NOC_FW_L4_PER_SCR_GPIO0_s  ALT_NOC_FW_L4_PER_SCR_GPIO0_t;
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
 * :--------|:-------|:--------|:-------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU     
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                         
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_GPIO1_DMA     
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                         
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_GPIO1_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                         
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_GPIO1_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                         
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to gpio1. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_GPIO1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_GPIO1_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_GPIO1_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_GPIO1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_GPIO1_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_GPIO1_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to gpio1. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_GPIO1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_GPIO1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_GPIO1_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_GPIO1_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_GPIO1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_GPIO1_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_GPIO1_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_GPIO1.
 */
struct ALT_NOC_FW_L4_PER_SCR_GPIO1_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_PER_SCR_GPIO1_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_GPIO1_DMA */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_GPIO1_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_GPIO1_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_GPIO1. */
typedef struct ALT_NOC_FW_L4_PER_SCR_GPIO1_s  ALT_NOC_FW_L4_PER_SCR_GPIO1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_GPIO1 register. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_GPIO1 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_GPIO1_OFST        0x48

/*
 * Register : i2c0
 * 
 * Per-Master Security bit for i2c0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                        
 * :--------|:-------|:--------|:------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C0_MPU     
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                        
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C0_DMA     
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                        
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C0_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                        
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C0_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                        
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to i2c0. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C0_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C0_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C0_MPU field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C0_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C0_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C0_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C0_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C0_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to i2c0. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C0_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C0_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C0_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C0_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C0_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_I2C0.
 */
struct ALT_NOC_FW_L4_PER_SCR_I2C0_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C0_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C0_DMA */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C0_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C0_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_I2C0. */
typedef struct ALT_NOC_FW_L4_PER_SCR_I2C0_s  ALT_NOC_FW_L4_PER_SCR_I2C0_t;
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
 * :--------|:-------|:--------|:------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C1_MPU     
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                        
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C1_DMA     
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                        
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C1_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                        
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C1_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                        
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to i2c1. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C1_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C1_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C1_MPU field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C1_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C1_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C1_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C1_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C1_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to i2c1. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C1_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C1_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C1_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C1_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C1_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_I2C1.
 */
struct ALT_NOC_FW_L4_PER_SCR_I2C1_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C1_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C1_DMA */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C1_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C1_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_I2C1. */
typedef struct ALT_NOC_FW_L4_PER_SCR_I2C1_s  ALT_NOC_FW_L4_PER_SCR_I2C1_t;
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
 * :--------|:-------|:--------|:------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C2_MPU     
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                        
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C2_DMA     
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                        
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C2_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                        
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C2_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                        
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to i2c2. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C2_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C2_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C2_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C2_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C2_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C2_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C2_MPU field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C2_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C2_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C2_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C2_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C2_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C2_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C2_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C2_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C2_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to i2c2. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C2_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C2_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C2_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C2_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C2_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C2_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C2_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C2_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C2_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_I2C2.
 */
struct ALT_NOC_FW_L4_PER_SCR_I2C2_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C2_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C2_DMA */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C2_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C2_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_I2C2. */
typedef struct ALT_NOC_FW_L4_PER_SCR_I2C2_s  ALT_NOC_FW_L4_PER_SCR_I2C2_t;
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
 * :--------|:-------|:--------|:------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C3_MPU     
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                        
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C3_DMA     
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                        
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C3_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                        
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C3_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                        
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to i2c3. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C3_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C3_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C3_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C3_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C3_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C3_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C3_MPU field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C3_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C3_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C3_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C3_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C3_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C3_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C3_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C3_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C3_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to i2c3. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C3_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C3_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C3_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C3_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C3_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C3_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C3_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C3_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C3_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_I2C3.
 */
struct ALT_NOC_FW_L4_PER_SCR_I2C3_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C3_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C3_DMA */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C3_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C3_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_I2C3. */
typedef struct ALT_NOC_FW_L4_PER_SCR_I2C3_s  ALT_NOC_FW_L4_PER_SCR_I2C3_t;
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
 * :--------|:-------|:--------|:------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C4_MPU     
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                        
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C4_DMA     
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                        
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C4_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                        
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_I2C4_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                        
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to i2c4. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C4_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C4_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C4_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C4_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C4_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C4_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C4_MPU field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C4_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C4_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C4_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C4_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C4_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C4_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C4_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C4_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C4_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C4_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_I2C4_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_I2C4_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_I2C4_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_I2C4_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_I2C4_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_I2C4_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_I2C4_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_I2C4_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_I2C4.
 */
struct ALT_NOC_FW_L4_PER_SCR_I2C4_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C4_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C4_DMA */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C4_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_I2C4_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_I2C4. */
typedef struct ALT_NOC_FW_L4_PER_SCR_I2C4_s  ALT_NOC_FW_L4_PER_SCR_I2C4_t;
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
 * :--------|:-------|:--------|:-----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_MPU     
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                             
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_DMA     
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                             
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                             
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                             
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to sp_timer0. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_MPU field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_DMA_SET(value) (((value) << 8) & 0x00000100)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to sp_timer0. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_SP_TIMER0.
 */
struct ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_DMA */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_SP_TIMER0. */
typedef struct ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_s  ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0 register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER0 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_OFST        0x64

/*
 * Register : sp_timer1
 * 
 * Per-Master Security bit for sp_timer1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                             
 * :--------|:-------|:--------|:-----------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_MPU     
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                             
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_DMA     
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                             
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                             
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                             
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to sp_timer1. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_MPU field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_DMA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_DMA_MSB        8
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_DMA_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_DMA_SET_MSK    0x00000100
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_DMA register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_DMA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_DMA register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_DMA_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_DMA field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_DMA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_DMA register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_DMA_SET(value) (((value) << 8) & 0x00000100)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to sp_timer1. When
 * cleared (0), only Secure transactions are allowed. When set (1), both Secure and
 * Non-Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_SP_TIMER1.
 */
struct ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_DMA */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_SP_TIMER1. */
typedef struct ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_s  ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1 register. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_RESET       0x00000000
/* The byte offset of the ALT_NOC_FW_L4_PER_SCR_SP_TIMER1 register from the beginning of the component. */
#define ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_OFST        0x68

/*
 * Register : uart0
 * 
 * Per-Master Security bit for uart0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                         
 * :--------|:-------|:--------|:-------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_UART0_MPU     
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                         
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_UART0_DMA     
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                         
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_UART0_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                         
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_UART0_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                         
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to uart0. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_UART0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_UART0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_UART0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_UART0_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_UART0_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_UART0_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_UART0_MPU field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_UART0_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_UART0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_UART0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_UART0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_UART0_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_UART0_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_UART0_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_UART0_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_UART0_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to uart0. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_UART0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_UART0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_UART0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_UART0_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_UART0_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_UART0_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_UART0_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_UART0_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_UART0_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_UART0.
 */
struct ALT_NOC_FW_L4_PER_SCR_UART0_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_PER_SCR_UART0_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_UART0_DMA */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_UART0_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_UART0_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_UART0. */
typedef struct ALT_NOC_FW_L4_PER_SCR_UART0_s  ALT_NOC_FW_L4_PER_SCR_UART0_t;
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
 * :--------|:-------|:--------|:-------------------------------------
 *  [0]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_UART1_MPU     
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                         
 *  [8]     | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_UART1_DMA     
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                         
 *  [16]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_UART1_FPGA2SOC
 *  [23:17] | ???    | Unknown | *UNDEFINED*                         
 *  [24]    | RW     | 0x0     | ALT_NOC_FW_L4_PER_SCR_UART1_AXI_AP  
 *  [31:25] | ???    | Unknown | *UNDEFINED*                         
 * 
 */
/*
 * Field : mpu
 * 
 * Security bit configuration for transactions from mpu to uart1. When cleared (0),
 * only Secure transactions are allowed. When set (1), both Secure and Non-Secure
 * transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_UART1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_UART1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_MPU_MSB        0
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_UART1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_MPU_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_UART1_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_UART1_MPU register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_UART1_MPU register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_MPU_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_UART1_MPU field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_FW_L4_PER_SCR_UART1_MPU register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_MPU_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_UART1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_FPGA2SOC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_UART1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_FPGA2SOC_MSB        16
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_UART1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_UART1_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_FPGA2SOC_SET_MSK    0x00010000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_UART1_FPGA2SOC register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_FPGA2SOC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_UART1_FPGA2SOC register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_FPGA2SOC_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_UART1_FPGA2SOC field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_FPGA2SOC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_NOC_FW_L4_PER_SCR_UART1_FPGA2SOC register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_FPGA2SOC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : axi_ap
 * 
 * Security bit configuration for transactions from axi_ap to uart1. When cleared
 * (0), only Secure transactions are allowed. When set (1), both Secure and Non-
 * Secure transactions are allowed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_FW_L4_PER_SCR_UART1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_AXI_AP_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_NOC_FW_L4_PER_SCR_UART1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_AXI_AP_MSB        24
/* The width in bits of the ALT_NOC_FW_L4_PER_SCR_UART1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_AXI_AP_WIDTH      1
/* The mask used to set the ALT_NOC_FW_L4_PER_SCR_UART1_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_AXI_AP_SET_MSK    0x01000000
/* The mask used to clear the ALT_NOC_FW_L4_PER_SCR_UART1_AXI_AP register field value. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_AXI_AP_CLR_MSK    0xfeffffff
/* The reset value of the ALT_NOC_FW_L4_PER_SCR_UART1_AXI_AP register field. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_AXI_AP_RESET      0x0
/* Extracts the ALT_NOC_FW_L4_PER_SCR_UART1_AXI_AP field value from a register. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_AXI_AP_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_NOC_FW_L4_PER_SCR_UART1_AXI_AP register field value suitable for setting the register. */
#define ALT_NOC_FW_L4_PER_SCR_UART1_AXI_AP_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_NOC_FW_L4_PER_SCR_UART1.
 */
struct ALT_NOC_FW_L4_PER_SCR_UART1_s
{
    volatile uint32_t  mpu      :  1;  /* ALT_NOC_FW_L4_PER_SCR_UART1_MPU */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  dma      :  1;  /* ALT_NOC_FW_L4_PER_SCR_UART1_DMA */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  fpga2soc :  1;  /* ALT_NOC_FW_L4_PER_SCR_UART1_FPGA2SOC */
    uint32_t                    :  7;  /* *UNDEFINED* */
    volatile uint32_t  axi_ap   :  1;  /* ALT_NOC_FW_L4_PER_SCR_UART1_AXI_AP */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_FW_L4_PER_SCR_UART1. */
typedef struct ALT_NOC_FW_L4_PER_SCR_UART1_s  ALT_NOC_FW_L4_PER_SCR_UART1_t;
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
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register group ALT_NOC_FW_L4_PER_SCR.
 */
struct ALT_NOC_FW_L4_PER_SCR_s
{
    volatile ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER_t  nand_register;        /* ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER */
    volatile ALT_NOC_FW_L4_PER_SCR_NAND_DATA_t      nand_data;            /* ALT_NOC_FW_L4_PER_SCR_NAND_DATA */
    volatile uint32_t                               _pad_0x8_0xb;         /* *UNDEFINED* */
    volatile ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER_t  usb0_register;        /* ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER */
    volatile ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER_t  usb1_register;        /* ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER */
    volatile uint32_t                               _pad_0x14_0x1b[2];    /* *UNDEFINED* */
    volatile ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0_t    spi_master0;          /* ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0 */
    volatile ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1_t    spi_master1;          /* ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1 */
    volatile ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0_t     spi_slave0;           /* ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0 */
    volatile ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1_t     spi_slave1;           /* ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1 */
    volatile ALT_NOC_FW_L4_PER_SCR_EMAC0_t          emac0;                /* ALT_NOC_FW_L4_PER_SCR_EMAC0 */
    volatile ALT_NOC_FW_L4_PER_SCR_EMAC1_t          emac1;                /* ALT_NOC_FW_L4_PER_SCR_EMAC1 */
    volatile ALT_NOC_FW_L4_PER_SCR_EMAC2_t          emac2;                /* ALT_NOC_FW_L4_PER_SCR_EMAC2 */
    volatile uint32_t                               _pad_0x38_0x3f[2];    /* *UNDEFINED* */
    volatile ALT_NOC_FW_L4_PER_SCR_SDMMC_t          sdmmc;                /* ALT_NOC_FW_L4_PER_SCR_SDMMC */
    volatile ALT_NOC_FW_L4_PER_SCR_GPIO0_t          gpio0;                /* ALT_NOC_FW_L4_PER_SCR_GPIO0 */
    volatile ALT_NOC_FW_L4_PER_SCR_GPIO1_t          gpio1;                /* ALT_NOC_FW_L4_PER_SCR_GPIO1 */
    volatile uint32_t                               _pad_0x4c_0x4f;       /* *UNDEFINED* */
    volatile ALT_NOC_FW_L4_PER_SCR_I2C0_t           i2c0;                 /* ALT_NOC_FW_L4_PER_SCR_I2C0 */
    volatile ALT_NOC_FW_L4_PER_SCR_I2C1_t           i2c1;                 /* ALT_NOC_FW_L4_PER_SCR_I2C1 */
    volatile ALT_NOC_FW_L4_PER_SCR_I2C2_t           i2c2;                 /* ALT_NOC_FW_L4_PER_SCR_I2C2 */
    volatile ALT_NOC_FW_L4_PER_SCR_I2C3_t           i2c3;                 /* ALT_NOC_FW_L4_PER_SCR_I2C3 */
    volatile ALT_NOC_FW_L4_PER_SCR_I2C4_t           i2c4;                 /* ALT_NOC_FW_L4_PER_SCR_I2C4 */
    volatile ALT_NOC_FW_L4_PER_SCR_SP_TIMER0_t      sp_timer0;            /* ALT_NOC_FW_L4_PER_SCR_SP_TIMER0 */
    volatile ALT_NOC_FW_L4_PER_SCR_SP_TIMER1_t      sp_timer1;            /* ALT_NOC_FW_L4_PER_SCR_SP_TIMER1 */
    volatile ALT_NOC_FW_L4_PER_SCR_UART0_t          uart0;                /* ALT_NOC_FW_L4_PER_SCR_UART0 */
    volatile ALT_NOC_FW_L4_PER_SCR_UART1_t          uart1;                /* ALT_NOC_FW_L4_PER_SCR_UART1 */
    volatile uint32_t                               _pad_0x74_0x100[35];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_FW_L4_PER_SCR. */
typedef struct ALT_NOC_FW_L4_PER_SCR_s  ALT_NOC_FW_L4_PER_SCR_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_FW_L4_PER_SCR. */
struct ALT_NOC_FW_L4_PER_SCR_raw_s
{
    volatile uint32_t  nand_register;        /* ALT_NOC_FW_L4_PER_SCR_NAND_REGISTER */
    volatile uint32_t  nand_data;            /* ALT_NOC_FW_L4_PER_SCR_NAND_DATA */
    volatile uint32_t  _pad_0x8_0xb;         /* *UNDEFINED* */
    volatile uint32_t  usb0_register;        /* ALT_NOC_FW_L4_PER_SCR_USB0_REGISTER */
    volatile uint32_t  usb1_register;        /* ALT_NOC_FW_L4_PER_SCR_USB1_REGISTER */
    volatile uint32_t  _pad_0x14_0x1b[2];    /* *UNDEFINED* */
    volatile uint32_t  spi_master0;          /* ALT_NOC_FW_L4_PER_SCR_SPI_MASTER0 */
    volatile uint32_t  spi_master1;          /* ALT_NOC_FW_L4_PER_SCR_SPI_MASTER1 */
    volatile uint32_t  spi_slave0;           /* ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE0 */
    volatile uint32_t  spi_slave1;           /* ALT_NOC_FW_L4_PER_SCR_SPI_SLAVE1 */
    volatile uint32_t  emac0;                /* ALT_NOC_FW_L4_PER_SCR_EMAC0 */
    volatile uint32_t  emac1;                /* ALT_NOC_FW_L4_PER_SCR_EMAC1 */
    volatile uint32_t  emac2;                /* ALT_NOC_FW_L4_PER_SCR_EMAC2 */
    volatile uint32_t  _pad_0x38_0x3f[2];    /* *UNDEFINED* */
    volatile uint32_t  sdmmc;                /* ALT_NOC_FW_L4_PER_SCR_SDMMC */
    volatile uint32_t  gpio0;                /* ALT_NOC_FW_L4_PER_SCR_GPIO0 */
    volatile uint32_t  gpio1;                /* ALT_NOC_FW_L4_PER_SCR_GPIO1 */
    volatile uint32_t  _pad_0x4c_0x4f;       /* *UNDEFINED* */
    volatile uint32_t  i2c0;                 /* ALT_NOC_FW_L4_PER_SCR_I2C0 */
    volatile uint32_t  i2c1;                 /* ALT_NOC_FW_L4_PER_SCR_I2C1 */
    volatile uint32_t  i2c2;                 /* ALT_NOC_FW_L4_PER_SCR_I2C2 */
    volatile uint32_t  i2c3;                 /* ALT_NOC_FW_L4_PER_SCR_I2C3 */
    volatile uint32_t  i2c4;                 /* ALT_NOC_FW_L4_PER_SCR_I2C4 */
    volatile uint32_t  sp_timer0;            /* ALT_NOC_FW_L4_PER_SCR_SP_TIMER0 */
    volatile uint32_t  sp_timer1;            /* ALT_NOC_FW_L4_PER_SCR_SP_TIMER1 */
    volatile uint32_t  uart0;                /* ALT_NOC_FW_L4_PER_SCR_UART0 */
    volatile uint32_t  uart1;                /* ALT_NOC_FW_L4_PER_SCR_UART1 */
    volatile uint32_t  _pad_0x74_0x100[35];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_FW_L4_PER_SCR. */
typedef struct ALT_NOC_FW_L4_PER_SCR_raw_s  ALT_NOC_FW_L4_PER_SCR_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_NOC_FW_L4_PER_SCR_H__ */

