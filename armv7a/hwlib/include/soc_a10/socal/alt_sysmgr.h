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

/* Altera - ALT_SYSMGR */

#ifndef __ALT_SOCAL_SYSMGR_H__
#define __ALT_SOCAL_SYSMGR_H__

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
 * Component : ALT_SYSMGR
 * 
 */
/*
 * Register : Silicon ID1 Register - siliconid1
 * 
 * Specifies Silicon ID and revision number.
 * 
 * This is a read only register and a write should return error.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description     
 * :--------|:-------|:------|:-----------------
 *  [15:0]  | R      | 0x1   | Silicon Revision
 *  [31:16] | R      | 0x1   | Silicon ID      
 * 
 */
/*
 * Field : Silicon Revision - rev
 * 
 * Silicon revision number.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                             | Value | Description
 * :---------------------------------|:------|:------------
 *  ALT_SYSMGR_SILICONID1_REV_E_REV1 | 0x3   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_SILICONID1_REV
 * 
 */
#define ALT_SYSMGR_SILICONID1_REV_E_REV1    0x3

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_SILICONID1_REV register field. */
#define ALT_SYSMGR_SILICONID1_REV_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_SILICONID1_REV register field. */
#define ALT_SYSMGR_SILICONID1_REV_MSB        15
/* The width in bits of the ALT_SYSMGR_SILICONID1_REV register field. */
#define ALT_SYSMGR_SILICONID1_REV_WIDTH      16
/* The mask used to set the ALT_SYSMGR_SILICONID1_REV register field value. */
#define ALT_SYSMGR_SILICONID1_REV_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SYSMGR_SILICONID1_REV register field value. */
#define ALT_SYSMGR_SILICONID1_REV_CLR_MSK    0xffff0000
/* The reset value of the ALT_SYSMGR_SILICONID1_REV register field. */
#define ALT_SYSMGR_SILICONID1_REV_RESET      0x1
/* Extracts the ALT_SYSMGR_SILICONID1_REV field value from a register. */
#define ALT_SYSMGR_SILICONID1_REV_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SYSMGR_SILICONID1_REV register field value suitable for setting the register. */
#define ALT_SYSMGR_SILICONID1_REV_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : Silicon ID - id
 * 
 * Silicon ID
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description
 * :-------------------------------------|:------|:------------
 *  ALT_SYSMGR_SILICONID1_ID_E_NIGHTFURY | 0x3   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_SILICONID1_ID
 * 
 */
#define ALT_SYSMGR_SILICONID1_ID_E_NIGHTFURY    0x3

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_SILICONID1_ID register field. */
#define ALT_SYSMGR_SILICONID1_ID_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_SILICONID1_ID register field. */
#define ALT_SYSMGR_SILICONID1_ID_MSB        31
/* The width in bits of the ALT_SYSMGR_SILICONID1_ID register field. */
#define ALT_SYSMGR_SILICONID1_ID_WIDTH      16
/* The mask used to set the ALT_SYSMGR_SILICONID1_ID register field value. */
#define ALT_SYSMGR_SILICONID1_ID_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SYSMGR_SILICONID1_ID register field value. */
#define ALT_SYSMGR_SILICONID1_ID_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SYSMGR_SILICONID1_ID register field. */
#define ALT_SYSMGR_SILICONID1_ID_RESET      0x1
/* Extracts the ALT_SYSMGR_SILICONID1_ID field value from a register. */
#define ALT_SYSMGR_SILICONID1_ID_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SYSMGR_SILICONID1_ID register field value suitable for setting the register. */
#define ALT_SYSMGR_SILICONID1_ID_SET(value) (((value) << 16) & 0xffff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_SILICONID1.
 */
struct ALT_SYSMGR_SILICONID1_s
{
    const uint32_t  rev : 16;  /* Silicon Revision */
    const uint32_t  id  : 16;  /* Silicon ID */
};

/* The typedef declaration for register ALT_SYSMGR_SILICONID1. */
typedef volatile struct ALT_SYSMGR_SILICONID1_s  ALT_SYSMGR_SILICONID1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_SILICONID1 register. */
#define ALT_SYSMGR_SILICONID1_RESET       0x00010001
/* The byte offset of the ALT_SYSMGR_SILICONID1 register from the beginning of the component. */
#define ALT_SYSMGR_SILICONID1_OFST        0x0

/*
 * Register : Silicon ID2 Register - siliconid2
 * 
 * Reserved for future use.
 * 
 * This is a read only register and a write should return error.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | R      | 0x0   | Reserved   
 * 
 */
/*
 * Field : Reserved - rsv
 * 
 * Reserved for future use.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_SILICONID2_RSV register field. */
#define ALT_SYSMGR_SILICONID2_RSV_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_SILICONID2_RSV register field. */
#define ALT_SYSMGR_SILICONID2_RSV_MSB        31
/* The width in bits of the ALT_SYSMGR_SILICONID2_RSV register field. */
#define ALT_SYSMGR_SILICONID2_RSV_WIDTH      32
/* The mask used to set the ALT_SYSMGR_SILICONID2_RSV register field value. */
#define ALT_SYSMGR_SILICONID2_RSV_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_SILICONID2_RSV register field value. */
#define ALT_SYSMGR_SILICONID2_RSV_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_SILICONID2_RSV register field. */
#define ALT_SYSMGR_SILICONID2_RSV_RESET      0x0
/* Extracts the ALT_SYSMGR_SILICONID2_RSV field value from a register. */
#define ALT_SYSMGR_SILICONID2_RSV_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_SILICONID2_RSV register field value suitable for setting the register. */
#define ALT_SYSMGR_SILICONID2_RSV_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_SILICONID2.
 */
struct ALT_SYSMGR_SILICONID2_s
{
    const uint32_t  rsv : 32;  /* Reserved */
};

/* The typedef declaration for register ALT_SYSMGR_SILICONID2. */
typedef volatile struct ALT_SYSMGR_SILICONID2_s  ALT_SYSMGR_SILICONID2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_SILICONID2 register. */
#define ALT_SYSMGR_SILICONID2_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_SILICONID2 register from the beginning of the component. */
#define ALT_SYSMGR_SILICONID2_OFST        0x4

/*
 * Register : L4 Watchdog Debug Register - wddbg
 * 
 * Controls the behavior of the L4 watchdogs when the CPUs are in debug mode. These
 * control registers are used to drive the pause input signal of the L4 watchdogs.
 * Note that the watchdogs built into the MPU automatically are paused when their
 * associated CPU enters debug mode. Only reset by a cold reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [1:0]  | RW     | 0x3   | Debug Mode 
 *  [3:2]  | RW     | 0x3   | Debug Mode 
 *  [31:4] | ???    | 0x0   | *UNDEFINED*
 * 
 */
/*
 * Field : Debug Mode - mode_0
 * 
 * Controls behavior of L4 watchdog when CPUs in debug mode. Field array index
 * matches L4 watchdog index.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description
 * :-------------------------------------|:------|:------------
 *  ALT_SYSMGR_WDDBG_MOD_0_E_CONTINUE    | 0x0   |            
 *  ALT_SYSMGR_WDDBG_MOD_0_E_PAUSECPU0   | 0x1   |            
 *  ALT_SYSMGR_WDDBG_MOD_0_E_PAUSECPU1   | 0x2   |            
 *  ALT_SYSMGR_WDDBG_MOD_0_E_PAUSEEITHER | 0x3   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_WDDBG_MOD_0
 * 
 */
#define ALT_SYSMGR_WDDBG_MOD_0_E_CONTINUE       0x0
/*
 * Enumerated value for register field ALT_SYSMGR_WDDBG_MOD_0
 * 
 */
#define ALT_SYSMGR_WDDBG_MOD_0_E_PAUSECPU0      0x1
/*
 * Enumerated value for register field ALT_SYSMGR_WDDBG_MOD_0
 * 
 */
#define ALT_SYSMGR_WDDBG_MOD_0_E_PAUSECPU1      0x2
/*
 * Enumerated value for register field ALT_SYSMGR_WDDBG_MOD_0
 * 
 */
#define ALT_SYSMGR_WDDBG_MOD_0_E_PAUSEEITHER    0x3

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_WDDBG_MOD_0 register field. */
#define ALT_SYSMGR_WDDBG_MOD_0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_WDDBG_MOD_0 register field. */
#define ALT_SYSMGR_WDDBG_MOD_0_MSB        1
/* The width in bits of the ALT_SYSMGR_WDDBG_MOD_0 register field. */
#define ALT_SYSMGR_WDDBG_MOD_0_WIDTH      2
/* The mask used to set the ALT_SYSMGR_WDDBG_MOD_0 register field value. */
#define ALT_SYSMGR_WDDBG_MOD_0_SET_MSK    0x00000003
/* The mask used to clear the ALT_SYSMGR_WDDBG_MOD_0 register field value. */
#define ALT_SYSMGR_WDDBG_MOD_0_CLR_MSK    0xfffffffc
/* The reset value of the ALT_SYSMGR_WDDBG_MOD_0 register field. */
#define ALT_SYSMGR_WDDBG_MOD_0_RESET      0x3
/* Extracts the ALT_SYSMGR_WDDBG_MOD_0 field value from a register. */
#define ALT_SYSMGR_WDDBG_MOD_0_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_SYSMGR_WDDBG_MOD_0 register field value suitable for setting the register. */
#define ALT_SYSMGR_WDDBG_MOD_0_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : Debug Mode - mode_1
 * 
 * Controls behavior of L4 watchdog when CPUs in debug mode. Field array index
 * matches L4 watchdog index.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description
 * :-------------------------------------|:------|:------------
 *  ALT_SYSMGR_WDDBG_MOD_1_E_CONTINUE    | 0x0   |            
 *  ALT_SYSMGR_WDDBG_MOD_1_E_PAUSECPU0   | 0x1   |            
 *  ALT_SYSMGR_WDDBG_MOD_1_E_PAUSECPU1   | 0x2   |            
 *  ALT_SYSMGR_WDDBG_MOD_1_E_PAUSEEITHER | 0x3   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_WDDBG_MOD_1
 * 
 */
#define ALT_SYSMGR_WDDBG_MOD_1_E_CONTINUE       0x0
/*
 * Enumerated value for register field ALT_SYSMGR_WDDBG_MOD_1
 * 
 */
#define ALT_SYSMGR_WDDBG_MOD_1_E_PAUSECPU0      0x1
/*
 * Enumerated value for register field ALT_SYSMGR_WDDBG_MOD_1
 * 
 */
#define ALT_SYSMGR_WDDBG_MOD_1_E_PAUSECPU1      0x2
/*
 * Enumerated value for register field ALT_SYSMGR_WDDBG_MOD_1
 * 
 */
#define ALT_SYSMGR_WDDBG_MOD_1_E_PAUSEEITHER    0x3

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_WDDBG_MOD_1 register field. */
#define ALT_SYSMGR_WDDBG_MOD_1_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_WDDBG_MOD_1 register field. */
#define ALT_SYSMGR_WDDBG_MOD_1_MSB        3
/* The width in bits of the ALT_SYSMGR_WDDBG_MOD_1 register field. */
#define ALT_SYSMGR_WDDBG_MOD_1_WIDTH      2
/* The mask used to set the ALT_SYSMGR_WDDBG_MOD_1 register field value. */
#define ALT_SYSMGR_WDDBG_MOD_1_SET_MSK    0x0000000c
/* The mask used to clear the ALT_SYSMGR_WDDBG_MOD_1 register field value. */
#define ALT_SYSMGR_WDDBG_MOD_1_CLR_MSK    0xfffffff3
/* The reset value of the ALT_SYSMGR_WDDBG_MOD_1 register field. */
#define ALT_SYSMGR_WDDBG_MOD_1_RESET      0x3
/* Extracts the ALT_SYSMGR_WDDBG_MOD_1 field value from a register. */
#define ALT_SYSMGR_WDDBG_MOD_1_GET(value) (((value) & 0x0000000c) >> 2)
/* Produces a ALT_SYSMGR_WDDBG_MOD_1 register field value suitable for setting the register. */
#define ALT_SYSMGR_WDDBG_MOD_1_SET(value) (((value) << 2) & 0x0000000c)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_WDDBG.
 */
struct ALT_SYSMGR_WDDBG_s
{
    uint32_t  mode_0 :  2;  /* Debug Mode */
    uint32_t  mode_1 :  2;  /* Debug Mode */
    uint32_t         : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_WDDBG. */
typedef volatile struct ALT_SYSMGR_WDDBG_s  ALT_SYSMGR_WDDBG_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_WDDBG register. */
#define ALT_SYSMGR_WDDBG_RESET       0x0000000f
/* The byte offset of the ALT_SYSMGR_WDDBG register from the beginning of the component. */
#define ALT_SYSMGR_WDDBG_OFST        0x8

/*
 * Register : Boot Info Register - bootinfo
 * 
 * Provides access to boot configuration information.
 * 
 * This is a read only register and a write should return error.
 * 
 * This register gets reset only on a cold reset.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                 
 * :--------|:-------|:--------|:-----------------------------
 *  [0]     | R      | Unknown | ALT_SYSMGR_BOOT_FPGA_BSEL_EN
 *  [3:1]   | ???    | Unknown | *UNDEFINED*                 
 *  [6:4]   | R      | Unknown | ALT_SYSMGR_BOOT_FPGA_BSEL   
 *  [7]     | ???    | Unknown | *UNDEFINED*                 
 *  [10:8]  | R      | Unknown | ALT_SYSMGR_BOOT_PIN_BSEL    
 *  [11]    | ???    | Unknown | *UNDEFINED*                 
 *  [14:12] | R      | Unknown | ALT_SYSMGR_BOOT_BSEL        
 *  [31:15] | ???    | Unknown | *UNDEFINED*                 
 * 
 */
/*
 * Field : fpga_bsel_en
 * 
 * Specifies the value of the f2s_bsel_en. f2s_bsel_en is a signal from FPGA.
 * 
 * If 1, boot select value is equal to FPGA boot select signal (f2s_bsel).
 * 
 * If 0, boot select value is equal to the sampled value of HPS BSEL pins.
 * 
 * Value of f2s_bsel_en is overidden to 0x0 if FPGA is not in user mode
 * (fpga_config_complete = 0)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_BOOT_FPGA_BSEL_EN register field. */
#define ALT_SYSMGR_BOOT_FPGA_BSEL_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_BOOT_FPGA_BSEL_EN register field. */
#define ALT_SYSMGR_BOOT_FPGA_BSEL_EN_MSB        0
/* The width in bits of the ALT_SYSMGR_BOOT_FPGA_BSEL_EN register field. */
#define ALT_SYSMGR_BOOT_FPGA_BSEL_EN_WIDTH      1
/* The mask used to set the ALT_SYSMGR_BOOT_FPGA_BSEL_EN register field value. */
#define ALT_SYSMGR_BOOT_FPGA_BSEL_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_BOOT_FPGA_BSEL_EN register field value. */
#define ALT_SYSMGR_BOOT_FPGA_BSEL_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_BOOT_FPGA_BSEL_EN register field is UNKNOWN. */
#define ALT_SYSMGR_BOOT_FPGA_BSEL_EN_RESET      0x0
/* Extracts the ALT_SYSMGR_BOOT_FPGA_BSEL_EN field value from a register. */
#define ALT_SYSMGR_BOOT_FPGA_BSEL_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_BOOT_FPGA_BSEL_EN register field value suitable for setting the register. */
#define ALT_SYSMGR_BOOT_FPGA_BSEL_EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : fpga_bsel
 * 
 * The boot select field specifies the boot source. It is read by the Boot ROM code
 * on a cold or warm reset to determine the boot source.
 * 
 * The boot select value is equal to the f2s_bsel signal from the FPGA if the
 * f2s_bsel_en signal from the FPGA is 1 or equal to the sampled value of HPS BSEL
 * pins if the f2s_bsel_en signal from the FPGA is 0 or the FPGA is not powered on
 * or not in User Mode (fpga_config_complete = 0).
 * 
 * The HPS BSEL pins value are sampled upon deassertion of cold reset.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                         | Value | Description
 * :-------------------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_BOOT_FPGA_BSEL_E_RSVDX                            | 0x0   |            
 *  ALT_SYSMGR_BOOT_FPGA_BSEL_E_FPGA                             | 0x1   |            
 *  ALT_SYSMGR_BOOT_FPGA_BSEL_E_NAND_FLSH_1_8V                   | 0x2   |            
 *  ALT_SYSMGR_BOOT_FPGA_BSEL_E_NAND_FLSH_3_0V                   | 0x3   |            
 *  ALT_SYSMGR_BOOT_FPGA_BSEL_E_SD_MMC_EXTERNAL_TRANSCEIVER_1_8V | 0x4   |            
 *  ALT_SYSMGR_BOOT_FPGA_BSEL_E_SD_MMC_INTERNAL_TRANSCEIVER_3_0V | 0x5   |            
 *  ALT_SYSMGR_BOOT_FPGA_BSEL_E_QSPI_FLSH_1_8V                   | 0x6   |            
 *  ALT_SYSMGR_BOOT_FPGA_BSEL_E_QSPI_FLSH_3_0V                   | 0x7   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_BOOT_FPGA_BSEL
 * 
 */
#define ALT_SYSMGR_BOOT_FPGA_BSEL_E_RSVDX                               0x0
/*
 * Enumerated value for register field ALT_SYSMGR_BOOT_FPGA_BSEL
 * 
 */
#define ALT_SYSMGR_BOOT_FPGA_BSEL_E_FPGA                                0x1
/*
 * Enumerated value for register field ALT_SYSMGR_BOOT_FPGA_BSEL
 * 
 */
#define ALT_SYSMGR_BOOT_FPGA_BSEL_E_NAND_FLSH_1_8V                      0x2
/*
 * Enumerated value for register field ALT_SYSMGR_BOOT_FPGA_BSEL
 * 
 */
#define ALT_SYSMGR_BOOT_FPGA_BSEL_E_NAND_FLSH_3_0V                      0x3
/*
 * Enumerated value for register field ALT_SYSMGR_BOOT_FPGA_BSEL
 * 
 */
#define ALT_SYSMGR_BOOT_FPGA_BSEL_E_SD_MMC_EXTERNAL_TRANSCEIVER_1_8V    0x4
/*
 * Enumerated value for register field ALT_SYSMGR_BOOT_FPGA_BSEL
 * 
 */
#define ALT_SYSMGR_BOOT_FPGA_BSEL_E_SD_MMC_INTERNAL_TRANSCEIVER_3_0V    0x5
/*
 * Enumerated value for register field ALT_SYSMGR_BOOT_FPGA_BSEL
 * 
 */
#define ALT_SYSMGR_BOOT_FPGA_BSEL_E_QSPI_FLSH_1_8V                      0x6
/*
 * Enumerated value for register field ALT_SYSMGR_BOOT_FPGA_BSEL
 * 
 */
#define ALT_SYSMGR_BOOT_FPGA_BSEL_E_QSPI_FLSH_3_0V                      0x7

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_BOOT_FPGA_BSEL register field. */
#define ALT_SYSMGR_BOOT_FPGA_BSEL_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_BOOT_FPGA_BSEL register field. */
#define ALT_SYSMGR_BOOT_FPGA_BSEL_MSB        6
/* The width in bits of the ALT_SYSMGR_BOOT_FPGA_BSEL register field. */
#define ALT_SYSMGR_BOOT_FPGA_BSEL_WIDTH      3
/* The mask used to set the ALT_SYSMGR_BOOT_FPGA_BSEL register field value. */
#define ALT_SYSMGR_BOOT_FPGA_BSEL_SET_MSK    0x00000070
/* The mask used to clear the ALT_SYSMGR_BOOT_FPGA_BSEL register field value. */
#define ALT_SYSMGR_BOOT_FPGA_BSEL_CLR_MSK    0xffffff8f
/* The reset value of the ALT_SYSMGR_BOOT_FPGA_BSEL register field is UNKNOWN. */
#define ALT_SYSMGR_BOOT_FPGA_BSEL_RESET      0x0
/* Extracts the ALT_SYSMGR_BOOT_FPGA_BSEL field value from a register. */
#define ALT_SYSMGR_BOOT_FPGA_BSEL_GET(value) (((value) & 0x00000070) >> 4)
/* Produces a ALT_SYSMGR_BOOT_FPGA_BSEL register field value suitable for setting the register. */
#define ALT_SYSMGR_BOOT_FPGA_BSEL_SET(value) (((value) << 4) & 0x00000070)

/*
 * Field : pin_bsel
 * 
 * Specifies the sampled value of the HPS BSEL pins. The value of HPS BSEL pins are
 * sampled upon deassertion of cold reset.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                        | Value | Description
 * :------------------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_BOOT_PIN_BSEL_E_RSVDX                            | 0x0   |            
 *  ALT_SYSMGR_BOOT_PIN_BSEL_E_FPGA                             | 0x1   |            
 *  ALT_SYSMGR_BOOT_PIN_BSEL_E_NAND_FLSH_1_8V                   | 0x2   |            
 *  ALT_SYSMGR_BOOT_PIN_BSEL_E_NAND_FLSH_3_0V                   | 0x3   |            
 *  ALT_SYSMGR_BOOT_PIN_BSEL_E_SD_MMC_EXTERNAL_TRANSCEIVER_1_8V | 0x4   |            
 *  ALT_SYSMGR_BOOT_PIN_BSEL_E_SD_MMC_INTERNAL_TRANSCEIVER_3_0V | 0x5   |            
 *  ALT_SYSMGR_BOOT_PIN_BSEL_E_QSPI_FLSH_1_8V                   | 0x6   |            
 *  ALT_SYSMGR_BOOT_PIN_BSEL_E_QSPI_FLSH_3_0V                   | 0x7   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_BOOT_PIN_BSEL
 * 
 */
#define ALT_SYSMGR_BOOT_PIN_BSEL_E_RSVDX                            0x0
/*
 * Enumerated value for register field ALT_SYSMGR_BOOT_PIN_BSEL
 * 
 */
#define ALT_SYSMGR_BOOT_PIN_BSEL_E_FPGA                             0x1
/*
 * Enumerated value for register field ALT_SYSMGR_BOOT_PIN_BSEL
 * 
 */
#define ALT_SYSMGR_BOOT_PIN_BSEL_E_NAND_FLSH_1_8V                   0x2
/*
 * Enumerated value for register field ALT_SYSMGR_BOOT_PIN_BSEL
 * 
 */
#define ALT_SYSMGR_BOOT_PIN_BSEL_E_NAND_FLSH_3_0V                   0x3
/*
 * Enumerated value for register field ALT_SYSMGR_BOOT_PIN_BSEL
 * 
 */
#define ALT_SYSMGR_BOOT_PIN_BSEL_E_SD_MMC_EXTERNAL_TRANSCEIVER_1_8V 0x4
/*
 * Enumerated value for register field ALT_SYSMGR_BOOT_PIN_BSEL
 * 
 */
#define ALT_SYSMGR_BOOT_PIN_BSEL_E_SD_MMC_INTERNAL_TRANSCEIVER_3_0V 0x5
/*
 * Enumerated value for register field ALT_SYSMGR_BOOT_PIN_BSEL
 * 
 */
#define ALT_SYSMGR_BOOT_PIN_BSEL_E_QSPI_FLSH_1_8V                   0x6
/*
 * Enumerated value for register field ALT_SYSMGR_BOOT_PIN_BSEL
 * 
 */
#define ALT_SYSMGR_BOOT_PIN_BSEL_E_QSPI_FLSH_3_0V                   0x7

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_BOOT_PIN_BSEL register field. */
#define ALT_SYSMGR_BOOT_PIN_BSEL_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_BOOT_PIN_BSEL register field. */
#define ALT_SYSMGR_BOOT_PIN_BSEL_MSB        10
/* The width in bits of the ALT_SYSMGR_BOOT_PIN_BSEL register field. */
#define ALT_SYSMGR_BOOT_PIN_BSEL_WIDTH      3
/* The mask used to set the ALT_SYSMGR_BOOT_PIN_BSEL register field value. */
#define ALT_SYSMGR_BOOT_PIN_BSEL_SET_MSK    0x00000700
/* The mask used to clear the ALT_SYSMGR_BOOT_PIN_BSEL register field value. */
#define ALT_SYSMGR_BOOT_PIN_BSEL_CLR_MSK    0xfffff8ff
/* The reset value of the ALT_SYSMGR_BOOT_PIN_BSEL register field is UNKNOWN. */
#define ALT_SYSMGR_BOOT_PIN_BSEL_RESET      0x0
/* Extracts the ALT_SYSMGR_BOOT_PIN_BSEL field value from a register. */
#define ALT_SYSMGR_BOOT_PIN_BSEL_GET(value) (((value) & 0x00000700) >> 8)
/* Produces a ALT_SYSMGR_BOOT_PIN_BSEL register field value suitable for setting the register. */
#define ALT_SYSMGR_BOOT_PIN_BSEL_SET(value) (((value) << 8) & 0x00000700)

/*
 * Field : bsel
 * 
 * Multiplexed Value of Boot Select from pins and fpga
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                    | Value | Description
 * :--------------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_BOOT_BSEL_E_RSVDX                            | 0x0   |            
 *  ALT_SYSMGR_BOOT_BSEL_E_FPGA                             | 0x1   |            
 *  ALT_SYSMGR_BOOT_BSEL_E_NAND_FLSH_1_8V                   | 0x2   |            
 *  ALT_SYSMGR_BOOT_BSEL_E_NAND_FLSH_3_0V                   | 0x3   |            
 *  ALT_SYSMGR_BOOT_BSEL_E_SD_MMC_EXTERNAL_TRANSCEIVER_1_8V | 0x4   |            
 *  ALT_SYSMGR_BOOT_BSEL_E_SD_MMC_INTERNAL_TRANSCEIVER_3_0V | 0x5   |            
 *  ALT_SYSMGR_BOOT_BSEL_E_QSPI_FLSH_1_8V                   | 0x6   |            
 *  ALT_SYSMGR_BOOT_BSEL_E_QSPI_FLSH_3_0V                   | 0x7   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_BOOT_BSEL
 * 
 */
#define ALT_SYSMGR_BOOT_BSEL_E_RSVDX                            0x0
/*
 * Enumerated value for register field ALT_SYSMGR_BOOT_BSEL
 * 
 */
#define ALT_SYSMGR_BOOT_BSEL_E_FPGA                             0x1
/*
 * Enumerated value for register field ALT_SYSMGR_BOOT_BSEL
 * 
 */
#define ALT_SYSMGR_BOOT_BSEL_E_NAND_FLSH_1_8V                   0x2
/*
 * Enumerated value for register field ALT_SYSMGR_BOOT_BSEL
 * 
 */
#define ALT_SYSMGR_BOOT_BSEL_E_NAND_FLSH_3_0V                   0x3
/*
 * Enumerated value for register field ALT_SYSMGR_BOOT_BSEL
 * 
 */
#define ALT_SYSMGR_BOOT_BSEL_E_SD_MMC_EXTERNAL_TRANSCEIVER_1_8V 0x4
/*
 * Enumerated value for register field ALT_SYSMGR_BOOT_BSEL
 * 
 */
#define ALT_SYSMGR_BOOT_BSEL_E_SD_MMC_INTERNAL_TRANSCEIVER_3_0V 0x5
/*
 * Enumerated value for register field ALT_SYSMGR_BOOT_BSEL
 * 
 */
#define ALT_SYSMGR_BOOT_BSEL_E_QSPI_FLSH_1_8V                   0x6
/*
 * Enumerated value for register field ALT_SYSMGR_BOOT_BSEL
 * 
 */
#define ALT_SYSMGR_BOOT_BSEL_E_QSPI_FLSH_3_0V                   0x7

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_BOOT_BSEL register field. */
#define ALT_SYSMGR_BOOT_BSEL_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_BOOT_BSEL register field. */
#define ALT_SYSMGR_BOOT_BSEL_MSB        14
/* The width in bits of the ALT_SYSMGR_BOOT_BSEL register field. */
#define ALT_SYSMGR_BOOT_BSEL_WIDTH      3
/* The mask used to set the ALT_SYSMGR_BOOT_BSEL register field value. */
#define ALT_SYSMGR_BOOT_BSEL_SET_MSK    0x00007000
/* The mask used to clear the ALT_SYSMGR_BOOT_BSEL register field value. */
#define ALT_SYSMGR_BOOT_BSEL_CLR_MSK    0xffff8fff
/* The reset value of the ALT_SYSMGR_BOOT_BSEL register field is UNKNOWN. */
#define ALT_SYSMGR_BOOT_BSEL_RESET      0x0
/* Extracts the ALT_SYSMGR_BOOT_BSEL field value from a register. */
#define ALT_SYSMGR_BOOT_BSEL_GET(value) (((value) & 0x00007000) >> 12)
/* Produces a ALT_SYSMGR_BOOT_BSEL register field value suitable for setting the register. */
#define ALT_SYSMGR_BOOT_BSEL_SET(value) (((value) << 12) & 0x00007000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_BOOT.
 */
struct ALT_SYSMGR_BOOT_s
{
    const uint32_t  fpga_bsel_en :  1;  /* ALT_SYSMGR_BOOT_FPGA_BSEL_EN */
    uint32_t                     :  3;  /* *UNDEFINED* */
    const uint32_t  fpga_bsel    :  3;  /* ALT_SYSMGR_BOOT_FPGA_BSEL */
    uint32_t                     :  1;  /* *UNDEFINED* */
    const uint32_t  pin_bsel     :  3;  /* ALT_SYSMGR_BOOT_PIN_BSEL */
    uint32_t                     :  1;  /* *UNDEFINED* */
    const uint32_t  bsel         :  3;  /* ALT_SYSMGR_BOOT_BSEL */
    uint32_t                     : 17;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_BOOT. */
typedef volatile struct ALT_SYSMGR_BOOT_s  ALT_SYSMGR_BOOT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_BOOT register. */
#define ALT_SYSMGR_BOOT_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_BOOT register from the beginning of the component. */
#define ALT_SYSMGR_BOOT_OFST        0xc

/*
 * Register : L2 Data RAM ECC Enable Register - mpu_ctrl_l2_ecc
 * 
 * This register is used to enable ECC on the L2 Data RAM. ECC errors can be
 * injected into the write path using bits in this register. This register contains
 * interrupt status of the ECC single/double bit error.
 * 
 * Some fileds of this register are only reset by a cold reset (ignores warm
 * reset).
 * 
 * Some fields are affected by both warm and cold reset.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                      
 * :--------|:-------|:------|:--------------------------------------------------
 *  [0]     | RW     | 0x0   | L2 Data RAM Error Correction and Detection Enable
 *  [7:1]   | ???    | 0x0   | *UNDEFINED*                                      
 *  [8]     | RW     | 0x0   | ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_EN                 
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*                                      
 *  [16]    | RW     | 0x0   | ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE               
 *  [31:17] | ???    | 0x0   | *UNDEFINED*                                      
 * 
 */
/*
 * Field : L2 Data RAM Error Correction and Detection Enable - ecc_en
 * 
 * Enable Single bit or Double bit error Detection and Single bit Error Correction
 * for L2 Data RAM
 * 
 * Only reset by a cold reset (ignores warm reset).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_MPU_CTL_L2_ECC_ECC_EN register field. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_ECC_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_MPU_CTL_L2_ECC_ECC_EN register field. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_ECC_EN_MSB        0
/* The width in bits of the ALT_SYSMGR_MPU_CTL_L2_ECC_ECC_EN register field. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_ECC_EN_WIDTH      1
/* The mask used to set the ALT_SYSMGR_MPU_CTL_L2_ECC_ECC_EN register field value. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_ECC_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_MPU_CTL_L2_ECC_ECC_EN register field value. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_ECC_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_MPU_CTL_L2_ECC_ECC_EN register field. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_ECC_EN_RESET      0x0
/* Extracts the ALT_SYSMGR_MPU_CTL_L2_ECC_ECC_EN field value from a register. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_ECC_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_MPU_CTL_L2_ECC_ECC_EN register field value suitable for setting the register. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_ECC_EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : inj_en
 * 
 * Error injection enable. Write 1 here to enable error injection to MPU L2.
 * 
 * Please note that if ECC is not enabled by writing 1 to ecc_en bit there wont be
 * any error injections.
 * 
 * This bit will get reset on a warm reset and cold reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_EN register field. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_EN_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_EN register field. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_EN_MSB        8
/* The width in bits of the ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_EN register field. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_EN_WIDTH      1
/* The mask used to set the ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_EN register field value. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_EN_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_EN register field value. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_EN_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_EN register field. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_EN_RESET      0x0
/* Extracts the ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_EN field value from a register. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_EN_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_EN register field value suitable for setting the register. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_EN_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : inj_type
 * 
 * MPU L2 ECC error injection type. This bit will get reset on a warm reset and
 * cold reset.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description
 * :------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE_E_SINGLE_BIT | 0x0   |            
 *  ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE_E_DOUBLE_BIT | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE
 * 
 */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE_E_SINGLE_BIT 0x0
/*
 * Enumerated value for register field ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE
 * 
 */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE_E_DOUBLE_BIT 0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE register field. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE register field. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE_MSB        16
/* The width in bits of the ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE register field. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE_WIDTH      1
/* The mask used to set the ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE register field value. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE register field value. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE register field. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE_RESET      0x0
/* Extracts the ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE field value from a register. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE register field value suitable for setting the register. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE_SET(value) (((value) << 16) & 0x00010000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_MPU_CTL_L2_ECC.
 */
struct ALT_SYSMGR_MPU_CTL_L2_ECC_s
{
    uint32_t  ecc_en   :  1;  /* L2 Data RAM Error Correction and Detection Enable */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  inj_en   :  1;  /* ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_EN */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  inj_type :  1;  /* ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE */
    uint32_t           : 15;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_MPU_CTL_L2_ECC. */
typedef volatile struct ALT_SYSMGR_MPU_CTL_L2_ECC_s  ALT_SYSMGR_MPU_CTL_L2_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_MPU_CTL_L2_ECC register. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_MPU_CTL_L2_ECC register from the beginning of the component. */
#define ALT_SYSMGR_MPU_CTL_L2_ECC_OFST        0x10

/*
 * Register : Control Register - dma
 * 
 * Registers used by the DMA Controller. All fields are reset by a cold or warm
 * reset.
 * 
 * These register bits should be updated during system initialization prior to
 * removing the DMA controller from reset. They may not be changed dynamically
 * during DMA operation.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                    
 * :--------|:-------|:------|:--------------------------------
 *  [0]     | RW     | 0x0   | Channel Select I2C             
 *  [3:1]   | ???    | 0x0   | *UNDEFINED*                    
 *  [4]     | RW     | 0x0   | Channel Select I2C             
 *  [7:5]   | ???    | 0x0   | *UNDEFINED*                    
 *  [8]     | RW     | 0x1   | Channel Select Security Manager
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*                    
 *  [16]    | RW     | 0x0   | Manager Thread Security        
 *  [23:17] | ???    | 0x0   | *UNDEFINED*                    
 *  [31:24] | RW     | 0x0   | IRQ Security                   
 * 
 */
/*
 * Field : Channel Select I2C - chansel_0
 * 
 * Select between FPGA interface 6 and I2C4_Tx to be mapped to DMA peripheral
 * request index 6
 * 
 * Field Enumeration Values:
 * 
 *  Enum                               | Value | Description
 * :-----------------------------------|:------|:------------
 *  ALT_SYSMGR_DMA_CHANSEL_0_E_FPGA    | 0x0   |            
 *  ALT_SYSMGR_DMA_CHANSEL_0_E_I2C4_TX | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_DMA_CHANSEL_0
 * 
 */
#define ALT_SYSMGR_DMA_CHANSEL_0_E_FPGA     0x0
/*
 * Enumerated value for register field ALT_SYSMGR_DMA_CHANSEL_0
 * 
 */
#define ALT_SYSMGR_DMA_CHANSEL_0_E_I2C4_TX  0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_DMA_CHANSEL_0 register field. */
#define ALT_SYSMGR_DMA_CHANSEL_0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_DMA_CHANSEL_0 register field. */
#define ALT_SYSMGR_DMA_CHANSEL_0_MSB        0
/* The width in bits of the ALT_SYSMGR_DMA_CHANSEL_0 register field. */
#define ALT_SYSMGR_DMA_CHANSEL_0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_DMA_CHANSEL_0 register field value. */
#define ALT_SYSMGR_DMA_CHANSEL_0_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_DMA_CHANSEL_0 register field value. */
#define ALT_SYSMGR_DMA_CHANSEL_0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_DMA_CHANSEL_0 register field. */
#define ALT_SYSMGR_DMA_CHANSEL_0_RESET      0x0
/* Extracts the ALT_SYSMGR_DMA_CHANSEL_0 field value from a register. */
#define ALT_SYSMGR_DMA_CHANSEL_0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_DMA_CHANSEL_0 register field value suitable for setting the register. */
#define ALT_SYSMGR_DMA_CHANSEL_0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Channel Select I2C - chansel_1
 * 
 * select between FPGA interface 7 and I2C4_Rx to be mapped to DMA peripheral
 * request index 7
 * 
 * Field Enumeration Values:
 * 
 *  Enum                               | Value | Description
 * :-----------------------------------|:------|:------------
 *  ALT_SYSMGR_DMA_CHANSEL_1_E_FPGA    | 0x0   |            
 *  ALT_SYSMGR_DMA_CHANSEL_1_E_I2C4_RX | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_DMA_CHANSEL_1
 * 
 */
#define ALT_SYSMGR_DMA_CHANSEL_1_E_FPGA     0x0
/*
 * Enumerated value for register field ALT_SYSMGR_DMA_CHANSEL_1
 * 
 */
#define ALT_SYSMGR_DMA_CHANSEL_1_E_I2C4_RX  0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_DMA_CHANSEL_1 register field. */
#define ALT_SYSMGR_DMA_CHANSEL_1_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_DMA_CHANSEL_1 register field. */
#define ALT_SYSMGR_DMA_CHANSEL_1_MSB        4
/* The width in bits of the ALT_SYSMGR_DMA_CHANSEL_1 register field. */
#define ALT_SYSMGR_DMA_CHANSEL_1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_DMA_CHANSEL_1 register field value. */
#define ALT_SYSMGR_DMA_CHANSEL_1_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_DMA_CHANSEL_1 register field value. */
#define ALT_SYSMGR_DMA_CHANSEL_1_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_DMA_CHANSEL_1 register field. */
#define ALT_SYSMGR_DMA_CHANSEL_1_RESET      0x0
/* Extracts the ALT_SYSMGR_DMA_CHANSEL_1 field value from a register. */
#define ALT_SYSMGR_DMA_CHANSEL_1_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_DMA_CHANSEL_1 register field value suitable for setting the register. */
#define ALT_SYSMGR_DMA_CHANSEL_1_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : Channel Select Security Manager - chansel_2
 * 
 * select between FPGA interface 5 and Security Manager to be mapped to DMA
 * peripheral request index 5
 * 
 * Field Enumeration Values:
 * 
 *  Enum                              | Value | Description
 * :----------------------------------|:------|:------------
 *  ALT_SYSMGR_DMA_CHANSEL_2_E_FPGA   | 0x0   |            
 *  ALT_SYSMGR_DMA_CHANSEL_2_E_SECMGR | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_DMA_CHANSEL_2
 * 
 */
#define ALT_SYSMGR_DMA_CHANSEL_2_E_FPGA     0x0
/*
 * Enumerated value for register field ALT_SYSMGR_DMA_CHANSEL_2
 * 
 */
#define ALT_SYSMGR_DMA_CHANSEL_2_E_SECMGR   0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_DMA_CHANSEL_2 register field. */
#define ALT_SYSMGR_DMA_CHANSEL_2_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_DMA_CHANSEL_2 register field. */
#define ALT_SYSMGR_DMA_CHANSEL_2_MSB        8
/* The width in bits of the ALT_SYSMGR_DMA_CHANSEL_2 register field. */
#define ALT_SYSMGR_DMA_CHANSEL_2_WIDTH      1
/* The mask used to set the ALT_SYSMGR_DMA_CHANSEL_2 register field value. */
#define ALT_SYSMGR_DMA_CHANSEL_2_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_DMA_CHANSEL_2 register field value. */
#define ALT_SYSMGR_DMA_CHANSEL_2_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_DMA_CHANSEL_2 register field. */
#define ALT_SYSMGR_DMA_CHANSEL_2_RESET      0x1
/* Extracts the ALT_SYSMGR_DMA_CHANSEL_2 field value from a register. */
#define ALT_SYSMGR_DMA_CHANSEL_2_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_DMA_CHANSEL_2 register field value suitable for setting the register. */
#define ALT_SYSMGR_DMA_CHANSEL_2_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : Manager Thread Security - mgr_ns
 * 
 * Specifies the security state of the DMA manager thread.
 * 
 * 0 = assigns DMA manager to the Secure state.
 * 
 * 1 = assigns DMA manager to the Non-secure state.
 * 
 * Sampled by the DMA controller when it exits from reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_DMA_MGR_NS register field. */
#define ALT_SYSMGR_DMA_MGR_NS_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_DMA_MGR_NS register field. */
#define ALT_SYSMGR_DMA_MGR_NS_MSB        16
/* The width in bits of the ALT_SYSMGR_DMA_MGR_NS register field. */
#define ALT_SYSMGR_DMA_MGR_NS_WIDTH      1
/* The mask used to set the ALT_SYSMGR_DMA_MGR_NS register field value. */
#define ALT_SYSMGR_DMA_MGR_NS_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_DMA_MGR_NS register field value. */
#define ALT_SYSMGR_DMA_MGR_NS_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_DMA_MGR_NS register field. */
#define ALT_SYSMGR_DMA_MGR_NS_RESET      0x0
/* Extracts the ALT_SYSMGR_DMA_MGR_NS field value from a register. */
#define ALT_SYSMGR_DMA_MGR_NS_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_DMA_MGR_NS register field value suitable for setting the register. */
#define ALT_SYSMGR_DMA_MGR_NS_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : IRQ Security - irq_ns
 * 
 * Specifies the security state of an event-interrupt resource.
 * 
 * If bit index [x] is 0, the DMAC assigns event<x> or irq[x] to the Secure state.
 * 
 * If bit index [x] is 1, the DMAC assigns event<x> or irq[x] to the Non-secure
 * state.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_DMA_IRQ_NS register field. */
#define ALT_SYSMGR_DMA_IRQ_NS_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_DMA_IRQ_NS register field. */
#define ALT_SYSMGR_DMA_IRQ_NS_MSB        31
/* The width in bits of the ALT_SYSMGR_DMA_IRQ_NS register field. */
#define ALT_SYSMGR_DMA_IRQ_NS_WIDTH      8
/* The mask used to set the ALT_SYSMGR_DMA_IRQ_NS register field value. */
#define ALT_SYSMGR_DMA_IRQ_NS_SET_MSK    0xff000000
/* The mask used to clear the ALT_SYSMGR_DMA_IRQ_NS register field value. */
#define ALT_SYSMGR_DMA_IRQ_NS_CLR_MSK    0x00ffffff
/* The reset value of the ALT_SYSMGR_DMA_IRQ_NS register field. */
#define ALT_SYSMGR_DMA_IRQ_NS_RESET      0x0
/* Extracts the ALT_SYSMGR_DMA_IRQ_NS field value from a register. */
#define ALT_SYSMGR_DMA_IRQ_NS_GET(value) (((value) & 0xff000000) >> 24)
/* Produces a ALT_SYSMGR_DMA_IRQ_NS register field value suitable for setting the register. */
#define ALT_SYSMGR_DMA_IRQ_NS_SET(value) (((value) << 24) & 0xff000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_DMA.
 */
struct ALT_SYSMGR_DMA_s
{
    uint32_t  chansel_0 :  1;  /* Channel Select I2C */
    uint32_t            :  3;  /* *UNDEFINED* */
    uint32_t  chansel_1 :  1;  /* Channel Select I2C */
    uint32_t            :  3;  /* *UNDEFINED* */
    uint32_t  chansel_2 :  1;  /* Channel Select Security Manager */
    uint32_t            :  7;  /* *UNDEFINED* */
    uint32_t  mgr_ns    :  1;  /* Manager Thread Security */
    uint32_t            :  7;  /* *UNDEFINED* */
    uint32_t  irq_ns    :  8;  /* IRQ Security */
};

/* The typedef declaration for register ALT_SYSMGR_DMA. */
typedef volatile struct ALT_SYSMGR_DMA_s  ALT_SYSMGR_DMA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_DMA register. */
#define ALT_SYSMGR_DMA_RESET       0x00000100
/* The byte offset of the ALT_SYSMGR_DMA register from the beginning of the component. */
#define ALT_SYSMGR_DMA_OFST        0x20

/*
 * Register : Peripheral Security Register - dma_periph
 * 
 * Controls the security state of a peripheral request interface. Sampled by the
 * DMA controller when it exits from reset.
 * 
 * These register bits should be updated during system initialization prior to
 * removing the DMA controller from reset. They may not be changed dynamically
 * during DMA operation.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description          
 * :-------|:-------|:------|:----------------------
 *  [31:0] | RW     | 0x0   | Peripheral Non-Secure
 * 
 */
/*
 * Field : Peripheral Non-Secure - ns
 * 
 * If bit index [x] is 0, the DMA controller assigns peripheral request interface x
 * to the Secure state.
 * 
 * If bit index [x] is 1, the DMA controller assigns peripheral request interface x
 * to the Non-secure state.
 * 
 * Reset by a cold or warm reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_DMA_PERIPH_NS register field. */
#define ALT_SYSMGR_DMA_PERIPH_NS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_DMA_PERIPH_NS register field. */
#define ALT_SYSMGR_DMA_PERIPH_NS_MSB        31
/* The width in bits of the ALT_SYSMGR_DMA_PERIPH_NS register field. */
#define ALT_SYSMGR_DMA_PERIPH_NS_WIDTH      32
/* The mask used to set the ALT_SYSMGR_DMA_PERIPH_NS register field value. */
#define ALT_SYSMGR_DMA_PERIPH_NS_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_DMA_PERIPH_NS register field value. */
#define ALT_SYSMGR_DMA_PERIPH_NS_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_DMA_PERIPH_NS register field. */
#define ALT_SYSMGR_DMA_PERIPH_NS_RESET      0x0
/* Extracts the ALT_SYSMGR_DMA_PERIPH_NS field value from a register. */
#define ALT_SYSMGR_DMA_PERIPH_NS_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_DMA_PERIPH_NS register field value suitable for setting the register. */
#define ALT_SYSMGR_DMA_PERIPH_NS_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_DMA_PERIPH.
 */
struct ALT_SYSMGR_DMA_PERIPH_s
{
    uint32_t  ns : 32;  /* Peripheral Non-Secure */
};

/* The typedef declaration for register ALT_SYSMGR_DMA_PERIPH. */
typedef volatile struct ALT_SYSMGR_DMA_PERIPH_s  ALT_SYSMGR_DMA_PERIPH_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_DMA_PERIPH register. */
#define ALT_SYSMGR_DMA_PERIPH_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_DMA_PERIPH register from the beginning of the component. */
#define ALT_SYSMGR_DMA_PERIPH_OFST        0x24

/*
 * Register : Control Register - sdmmc
 * 
 * Registers used by the SDMMC Controller. All fields are reset by a cold or warm
 * reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [2:0]  | RW     | 0x0   | Drive Clock Phase Shift Select 
 *  [3]    | ???    | 0x0   | *UNDEFINED*                    
 *  [6:4]  | RW     | 0x0   | Sample Clock Phase Shift Select
 *  [31:7] | ???    | 0x0   | *UNDEFINED*                    
 * 
 */
/*
 * Field : Drive Clock Phase Shift Select - drvsel
 * 
 * Select which phase shift of the clock for cclk_in_drv.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description
 * :-------------------------------------|:------|:------------
 *  ALT_SYSMGR_SDMMC_DRVSEL_E_DEGREES0   | 0x0   |            
 *  ALT_SYSMGR_SDMMC_DRVSEL_E_DEGREES45  | 0x1   |            
 *  ALT_SYSMGR_SDMMC_DRVSEL_E_DEGREES90  | 0x2   |            
 *  ALT_SYSMGR_SDMMC_DRVSEL_E_DEGREES135 | 0x3   |            
 *  ALT_SYSMGR_SDMMC_DRVSEL_E_DEGREES180 | 0x4   |            
 *  ALT_SYSMGR_SDMMC_DRVSEL_E_DEGREES225 | 0x5   |            
 *  ALT_SYSMGR_SDMMC_DRVSEL_E_DEGREES270 | 0x6   |            
 *  ALT_SYSMGR_SDMMC_DRVSEL_E_DEGREES315 | 0x7   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_SDMMC_DRVSEL
 * 
 */
#define ALT_SYSMGR_SDMMC_DRVSEL_E_DEGREES0      0x0
/*
 * Enumerated value for register field ALT_SYSMGR_SDMMC_DRVSEL
 * 
 */
#define ALT_SYSMGR_SDMMC_DRVSEL_E_DEGREES45     0x1
/*
 * Enumerated value for register field ALT_SYSMGR_SDMMC_DRVSEL
 * 
 */
#define ALT_SYSMGR_SDMMC_DRVSEL_E_DEGREES90     0x2
/*
 * Enumerated value for register field ALT_SYSMGR_SDMMC_DRVSEL
 * 
 */
#define ALT_SYSMGR_SDMMC_DRVSEL_E_DEGREES135    0x3
/*
 * Enumerated value for register field ALT_SYSMGR_SDMMC_DRVSEL
 * 
 */
#define ALT_SYSMGR_SDMMC_DRVSEL_E_DEGREES180    0x4
/*
 * Enumerated value for register field ALT_SYSMGR_SDMMC_DRVSEL
 * 
 */
#define ALT_SYSMGR_SDMMC_DRVSEL_E_DEGREES225    0x5
/*
 * Enumerated value for register field ALT_SYSMGR_SDMMC_DRVSEL
 * 
 */
#define ALT_SYSMGR_SDMMC_DRVSEL_E_DEGREES270    0x6
/*
 * Enumerated value for register field ALT_SYSMGR_SDMMC_DRVSEL
 * 
 */
#define ALT_SYSMGR_SDMMC_DRVSEL_E_DEGREES315    0x7

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_SDMMC_DRVSEL register field. */
#define ALT_SYSMGR_SDMMC_DRVSEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_SDMMC_DRVSEL register field. */
#define ALT_SYSMGR_SDMMC_DRVSEL_MSB        2
/* The width in bits of the ALT_SYSMGR_SDMMC_DRVSEL register field. */
#define ALT_SYSMGR_SDMMC_DRVSEL_WIDTH      3
/* The mask used to set the ALT_SYSMGR_SDMMC_DRVSEL register field value. */
#define ALT_SYSMGR_SDMMC_DRVSEL_SET_MSK    0x00000007
/* The mask used to clear the ALT_SYSMGR_SDMMC_DRVSEL register field value. */
#define ALT_SYSMGR_SDMMC_DRVSEL_CLR_MSK    0xfffffff8
/* The reset value of the ALT_SYSMGR_SDMMC_DRVSEL register field. */
#define ALT_SYSMGR_SDMMC_DRVSEL_RESET      0x0
/* Extracts the ALT_SYSMGR_SDMMC_DRVSEL field value from a register. */
#define ALT_SYSMGR_SDMMC_DRVSEL_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_SYSMGR_SDMMC_DRVSEL register field value suitable for setting the register. */
#define ALT_SYSMGR_SDMMC_DRVSEL_SET(value) (((value) << 0) & 0x00000007)

/*
 * Field : Sample Clock Phase Shift Select - smplsel
 * 
 * Select which phase shift of the clock for cclk_in_sample.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description
 * :--------------------------------------|:------|:------------
 *  ALT_SYSMGR_SDMMC_SMPLSEL_E_DEGREES0   | 0x0   |            
 *  ALT_SYSMGR_SDMMC_SMPLSEL_E_DEGREES45  | 0x1   |            
 *  ALT_SYSMGR_SDMMC_SMPLSEL_E_DEGREES90  | 0x2   |            
 *  ALT_SYSMGR_SDMMC_SMPLSEL_E_DEGREES135 | 0x3   |            
 *  ALT_SYSMGR_SDMMC_SMPLSEL_E_DEGREES180 | 0x4   |            
 *  ALT_SYSMGR_SDMMC_SMPLSEL_E_DEGREES225 | 0x5   |            
 *  ALT_SYSMGR_SDMMC_SMPLSEL_E_DEGREES270 | 0x6   |            
 *  ALT_SYSMGR_SDMMC_SMPLSEL_E_DEGREES315 | 0x7   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_SDMMC_SMPLSEL
 * 
 */
#define ALT_SYSMGR_SDMMC_SMPLSEL_E_DEGREES0     0x0
/*
 * Enumerated value for register field ALT_SYSMGR_SDMMC_SMPLSEL
 * 
 */
#define ALT_SYSMGR_SDMMC_SMPLSEL_E_DEGREES45    0x1
/*
 * Enumerated value for register field ALT_SYSMGR_SDMMC_SMPLSEL
 * 
 */
#define ALT_SYSMGR_SDMMC_SMPLSEL_E_DEGREES90    0x2
/*
 * Enumerated value for register field ALT_SYSMGR_SDMMC_SMPLSEL
 * 
 */
#define ALT_SYSMGR_SDMMC_SMPLSEL_E_DEGREES135   0x3
/*
 * Enumerated value for register field ALT_SYSMGR_SDMMC_SMPLSEL
 * 
 */
#define ALT_SYSMGR_SDMMC_SMPLSEL_E_DEGREES180   0x4
/*
 * Enumerated value for register field ALT_SYSMGR_SDMMC_SMPLSEL
 * 
 */
#define ALT_SYSMGR_SDMMC_SMPLSEL_E_DEGREES225   0x5
/*
 * Enumerated value for register field ALT_SYSMGR_SDMMC_SMPLSEL
 * 
 */
#define ALT_SYSMGR_SDMMC_SMPLSEL_E_DEGREES270   0x6
/*
 * Enumerated value for register field ALT_SYSMGR_SDMMC_SMPLSEL
 * 
 */
#define ALT_SYSMGR_SDMMC_SMPLSEL_E_DEGREES315   0x7

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_SDMMC_SMPLSEL register field. */
#define ALT_SYSMGR_SDMMC_SMPLSEL_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_SDMMC_SMPLSEL register field. */
#define ALT_SYSMGR_SDMMC_SMPLSEL_MSB        6
/* The width in bits of the ALT_SYSMGR_SDMMC_SMPLSEL register field. */
#define ALT_SYSMGR_SDMMC_SMPLSEL_WIDTH      3
/* The mask used to set the ALT_SYSMGR_SDMMC_SMPLSEL register field value. */
#define ALT_SYSMGR_SDMMC_SMPLSEL_SET_MSK    0x00000070
/* The mask used to clear the ALT_SYSMGR_SDMMC_SMPLSEL register field value. */
#define ALT_SYSMGR_SDMMC_SMPLSEL_CLR_MSK    0xffffff8f
/* The reset value of the ALT_SYSMGR_SDMMC_SMPLSEL register field. */
#define ALT_SYSMGR_SDMMC_SMPLSEL_RESET      0x0
/* Extracts the ALT_SYSMGR_SDMMC_SMPLSEL field value from a register. */
#define ALT_SYSMGR_SDMMC_SMPLSEL_GET(value) (((value) & 0x00000070) >> 4)
/* Produces a ALT_SYSMGR_SDMMC_SMPLSEL register field value suitable for setting the register. */
#define ALT_SYSMGR_SDMMC_SMPLSEL_SET(value) (((value) << 4) & 0x00000070)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_SDMMC.
 */
struct ALT_SYSMGR_SDMMC_s
{
    uint32_t  drvsel  :  3;  /* Drive Clock Phase Shift Select */
    uint32_t          :  1;  /* *UNDEFINED* */
    uint32_t  smplsel :  3;  /* Sample Clock Phase Shift Select */
    uint32_t          : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_SDMMC. */
typedef volatile struct ALT_SYSMGR_SDMMC_s  ALT_SYSMGR_SDMMC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_SDMMC register. */
#define ALT_SYSMGR_SDMMC_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_SDMMC register from the beginning of the component. */
#define ALT_SYSMGR_SDMMC_OFST        0x28

/*
 * Register : SD/MMC L3 Master HPROT Register - sdmmc_l3master
 * 
 * Controls the L3 master HPROT AHB-Lite signal.
 * 
 * These register bits should be updated only during system initialization prior to
 * removing the peripheral from reset. They may not be changed dynamically during
 * peripheral operation
 * 
 * All fields are reset by a cold or warm reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                 
 * :-------|:-------|:------|:-----------------------------
 *  [4:0]  | RW     | 0x3   | ALT_SYSMGR_SDMMC_L3MST_HPROT
 *  [31:5] | ???    | 0x0   | *UNDEFINED*                 
 * 
 */
/*
 * Field : hprot
 * 
 * ==========================
 * 
 * HPROT[4] Allocate
 * 
 * 0: L3 master accesses for the module are non-allocatable
 * 
 * 1: L3 master accesses for the module are allocatable
 * 
 * ==========================
 * 
 * HPROT[3] Cachable
 * 
 * 0: L3 master accesses for the module are non-cacheable.
 * 
 * 1: L3 master accesses for the module are cacheable.
 * 
 * ==========================
 * 
 * HPROT[2] Bufferable
 * 
 * 0: L3 master accesses for the module are not bufferable.
 * 
 * 1: L3 master accesses for the module are bufferable.
 * 
 * ==========================
 * 
 * HPROT[1] Privileged
 * 
 * 0: L3 master accesses for the module are not privileged.
 * 
 * 1: L3 master accesses for the module are privileged.
 * 
 * ==========================
 * 
 * HPROT[0] Data/Opcode
 * 
 * 0: Specifies if the L3 master access is for opcode
 * 
 * 1: Specifies if the L3 master access is for data
 * 
 * ==========================
 * 
 * HPROT[4:2] Example Encodings
 * 
 * ==========================
 * 
 * 0       0       0       Strongly Ordered, cannot be buffered
 * 
 * 0       0       1       Device, can be buffered
 * 
 * 0       1       0       Cachable (Outer Noncachable, do not allocate on reads or
 * writes)
 * 
 * 1       1       0       Cachable Write-Through (allocate on reads only, no
 * allocate on write)
 * 
 * 0       1       1       Cachable Write-Back (allocate on reads and writes)
 * 
 * 1       1       1       Cachable Write-Back (allocate on reads only, no allocate
 * on write)
 * 
 * ==========================
 * 
 * HPROT[1:0] Example Encodings
 * 
 * ==========================
 * 
 * * 0       Opcode Fetch
 * 
 * * 1       Data Access
 * 
 * 0       -       User Access
 * 
 * 1       -       Privileged Access
 * 
 * ==========================
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_SDMMC_L3MST_HPROT register field. */
#define ALT_SYSMGR_SDMMC_L3MST_HPROT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_SDMMC_L3MST_HPROT register field. */
#define ALT_SYSMGR_SDMMC_L3MST_HPROT_MSB        4
/* The width in bits of the ALT_SYSMGR_SDMMC_L3MST_HPROT register field. */
#define ALT_SYSMGR_SDMMC_L3MST_HPROT_WIDTH      5
/* The mask used to set the ALT_SYSMGR_SDMMC_L3MST_HPROT register field value. */
#define ALT_SYSMGR_SDMMC_L3MST_HPROT_SET_MSK    0x0000001f
/* The mask used to clear the ALT_SYSMGR_SDMMC_L3MST_HPROT register field value. */
#define ALT_SYSMGR_SDMMC_L3MST_HPROT_CLR_MSK    0xffffffe0
/* The reset value of the ALT_SYSMGR_SDMMC_L3MST_HPROT register field. */
#define ALT_SYSMGR_SDMMC_L3MST_HPROT_RESET      0x3
/* Extracts the ALT_SYSMGR_SDMMC_L3MST_HPROT field value from a register. */
#define ALT_SYSMGR_SDMMC_L3MST_HPROT_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_SYSMGR_SDMMC_L3MST_HPROT register field value suitable for setting the register. */
#define ALT_SYSMGR_SDMMC_L3MST_HPROT_SET(value) (((value) << 0) & 0x0000001f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_SDMMC_L3MST.
 */
struct ALT_SYSMGR_SDMMC_L3MST_s
{
    uint32_t  hprot :  5;  /* ALT_SYSMGR_SDMMC_L3MST_HPROT */
    uint32_t        : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_SDMMC_L3MST. */
typedef volatile struct ALT_SYSMGR_SDMMC_L3MST_s  ALT_SYSMGR_SDMMC_L3MST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_SDMMC_L3MST register. */
#define ALT_SYSMGR_SDMMC_L3MST_RESET       0x00000003
/* The byte offset of the ALT_SYSMGR_SDMMC_L3MST register from the beginning of the component. */
#define ALT_SYSMGR_SDMMC_L3MST_OFST        0x2c

/*
 * Register : Bootstrap Control Register - nand_bootstrap
 * 
 * Bootstrap fields sampled by NAND Flash Controller when released from reset.
 * 
 * All fields are reset by a cold or warm reset.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                          
 * :--------|:-------|:------|:--------------------------------------
 *  [0]     | RW     | 0x0   | Bootstrap Inhibit Initialization     
 *  [7:1]   | ???    | 0x0   | *UNDEFINED*                          
 *  [8]     | RW     | 0x0   | Bootstrap Inhibit Load Block 0 Page 0
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*                          
 *  [16]    | RW     | 0x0   | Bootstrap Two Row Address Cycles     
 *  [23:17] | ???    | 0x0   | *UNDEFINED*                          
 *  [24]    | RW     | 0x0   | Bootstrap 512 Byte Device            
 *  [27:25] | ???    | 0x0   | *UNDEFINED*                          
 *  [28]    | RW     | 0x0   | ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_X16
 *  [31:29] | ???    | 0x0   | *UNDEFINED*                          
 * 
 */
/*
 * Field : Bootstrap Inhibit Initialization - noinit
 * 
 * If 1, inhibits NAND Flash Controller from performing initialization when coming
 * out of reset. Instead, software must program all registers pertaining to device
 * parameters like page size, width, etc.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NAND_BOOTSTRAP_NOINIT register field. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_NOINIT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NAND_BOOTSTRAP_NOINIT register field. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_NOINIT_MSB        0
/* The width in bits of the ALT_SYSMGR_NAND_BOOTSTRAP_NOINIT register field. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_NOINIT_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NAND_BOOTSTRAP_NOINIT register field value. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_NOINIT_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_NAND_BOOTSTRAP_NOINIT register field value. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_NOINIT_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_NAND_BOOTSTRAP_NOINIT register field. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_NOINIT_RESET      0x0
/* Extracts the ALT_SYSMGR_NAND_BOOTSTRAP_NOINIT field value from a register. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_NOINIT_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_NAND_BOOTSTRAP_NOINIT register field value suitable for setting the register. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_NOINIT_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Bootstrap Inhibit Load Block 0 Page 0 - noloadb0p0
 * 
 * If 1, inhibits NAND Flash Controller from loading page 0 of block 0 of the NAND
 * device as part of the initialization procedure.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NAND_BOOTSTRAP_NOLDB0P0 register field. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_NOLDB0P0_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NAND_BOOTSTRAP_NOLDB0P0 register field. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_NOLDB0P0_MSB        8
/* The width in bits of the ALT_SYSMGR_NAND_BOOTSTRAP_NOLDB0P0 register field. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_NOLDB0P0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NAND_BOOTSTRAP_NOLDB0P0 register field value. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_NOLDB0P0_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_NAND_BOOTSTRAP_NOLDB0P0 register field value. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_NOLDB0P0_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_NAND_BOOTSTRAP_NOLDB0P0 register field. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_NOLDB0P0_RESET      0x0
/* Extracts the ALT_SYSMGR_NAND_BOOTSTRAP_NOLDB0P0 field value from a register. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_NOLDB0P0_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_NAND_BOOTSTRAP_NOLDB0P0 register field value suitable for setting the register. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_NOLDB0P0_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : Bootstrap Two Row Address Cycles - tworowaddr
 * 
 * If 1, NAND device requires only 2 row address cycles instead of the normal 3 row
 * address cycles.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NAND_BOOTSTRAP_TWOROWADDR register field. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_TWOROWADDR_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NAND_BOOTSTRAP_TWOROWADDR register field. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_TWOROWADDR_MSB        16
/* The width in bits of the ALT_SYSMGR_NAND_BOOTSTRAP_TWOROWADDR register field. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_TWOROWADDR_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NAND_BOOTSTRAP_TWOROWADDR register field value. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_TWOROWADDR_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_NAND_BOOTSTRAP_TWOROWADDR register field value. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_TWOROWADDR_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_NAND_BOOTSTRAP_TWOROWADDR register field. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_TWOROWADDR_RESET      0x0
/* Extracts the ALT_SYSMGR_NAND_BOOTSTRAP_TWOROWADDR field value from a register. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_TWOROWADDR_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_NAND_BOOTSTRAP_TWOROWADDR register field value suitable for setting the register. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_TWOROWADDR_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : Bootstrap 512 Byte Device - page512
 * 
 * If 1, NAND device has a 512 byte page size.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512 register field. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512 register field. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_MSB        24
/* The width in bits of the ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512 register field. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512 register field value. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_SET_MSK    0x01000000
/* The mask used to clear the ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512 register field value. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_CLR_MSK    0xfeffffff
/* The reset value of the ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512 register field. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_RESET      0x0
/* Extracts the ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512 field value from a register. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512 register field value suitable for setting the register. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : page512_x16
 * 
 * Reset value - 0
 * 
 * Field name: PAGE512_x16_DEVICE
 * 
 * Description: If 1, NAND device has 512 bytes page size and I/O width is 16 bits.
 * This start should be asserted in case of 512 bytes devices only. This signal
 * must be stable and have proper value by the time Controller comes out of Reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_X16 register field. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_X16_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_X16 register field. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_X16_MSB        28
/* The width in bits of the ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_X16 register field. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_X16_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_X16 register field value. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_X16_SET_MSK    0x10000000
/* The mask used to clear the ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_X16 register field value. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_X16_CLR_MSK    0xefffffff
/* The reset value of the ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_X16 register field. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_X16_RESET      0x0
/* Extracts the ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_X16 field value from a register. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_X16_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_X16 register field value suitable for setting the register. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_X16_SET(value) (((value) << 28) & 0x10000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_NAND_BOOTSTRAP.
 */
struct ALT_SYSMGR_NAND_BOOTSTRAP_s
{
    uint32_t  noinit      :  1;  /* Bootstrap Inhibit Initialization */
    uint32_t              :  7;  /* *UNDEFINED* */
    uint32_t  noloadb0p0  :  1;  /* Bootstrap Inhibit Load Block 0 Page 0 */
    uint32_t              :  7;  /* *UNDEFINED* */
    uint32_t  tworowaddr  :  1;  /* Bootstrap Two Row Address Cycles */
    uint32_t              :  7;  /* *UNDEFINED* */
    uint32_t  page512     :  1;  /* Bootstrap 512 Byte Device */
    uint32_t              :  3;  /* *UNDEFINED* */
    uint32_t  page512_x16 :  1;  /* ALT_SYSMGR_NAND_BOOTSTRAP_PAGE512_X16 */
    uint32_t              :  3;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_NAND_BOOTSTRAP. */
typedef volatile struct ALT_SYSMGR_NAND_BOOTSTRAP_s  ALT_SYSMGR_NAND_BOOTSTRAP_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_NAND_BOOTSTRAP register. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_NAND_BOOTSTRAP register from the beginning of the component. */
#define ALT_SYSMGR_NAND_BOOTSTRAP_OFST        0x30

/*
 * Register : NAND L3 Master AxCACHE Register - nand_l3master
 * 
 * Controls the L3 master ARCACHE and AWCACHE AXI signals.
 * 
 * These register bits should be updated only during system initialization prior to
 * removing the peripheral from reset. They may not be changed dynamically during
 * peripheral operation
 * 
 * All fields are reset by a cold or warm reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description 
 * :-------|:-------|:------|:-------------
 *  [3:0]  | RW     | 0x0   | NAND ARCACHE
 *  [7:4]  | RW     | 0x0   | NAND AWCACHE
 *  [31:8] | ???    | 0x0   | *UNDEFINED* 
 * 
 */
/*
 * Field : NAND ARCACHE - arcache_0
 * 
 * Specifies the value of the module ARCACHE signal.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                   | Value | Description
 * :-------------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_NONCACHE_NONBUFF     | 0x0   |            
 *  ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_BUFF                 | 0x1   |            
 *  ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_CACHE_NONALLOC       | 0x2   |            
 *  ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_CACHE_BUFF_NONALLOC  | 0x3   |            
 *  ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_RSVD1                | 0x4   |            
 *  ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_RSVD2                | 0x5   |            
 *  ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_CACHE_WRTHRU_RDALLOC | 0x6   |            
 *  ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_CACHE_WRBACK_RDALLOC | 0x7   |            
 *  ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_RSVD3                | 0x8   |            
 *  ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_RSVD4                | 0x9   |            
 *  ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_CACHE_WRTHRU_WRALLOC | 0xa   |            
 *  ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_CACHE_WRBACK_WRALLOC | 0xb   |            
 *  ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_RSVD5                | 0xc   |            
 *  ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_RSVD6                | 0xd   |            
 *  ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_CACHE_WRTHRU_ALLOC   | 0xe   |            
 *  ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_CACHE_WRBACK_ALLOC   | 0xf   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_NONCACHE_NONBUFF      0x0
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_BUFF                  0x1
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_CACHE_NONALLOC        0x2
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_CACHE_BUFF_NONALLOC   0x3
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_RSVD1                 0x4
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_RSVD2                 0x5
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_CACHE_WRTHRU_RDALLOC  0x6
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_CACHE_WRBACK_RDALLOC  0x7
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_RSVD3                 0x8
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_RSVD4                 0x9
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_CACHE_WRTHRU_WRALLOC  0xa
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_CACHE_WRBACK_WRALLOC  0xb
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_RSVD5                 0xc
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_RSVD6                 0xd
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_CACHE_WRTHRU_ALLOC    0xe
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_ARCACHE_0_E_CACHE_WRBACK_ALLOC    0xf

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NAND_L3MST_ARCACHE_0 register field. */
#define ALT_SYSMGR_NAND_L3MST_ARCACHE_0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NAND_L3MST_ARCACHE_0 register field. */
#define ALT_SYSMGR_NAND_L3MST_ARCACHE_0_MSB        3
/* The width in bits of the ALT_SYSMGR_NAND_L3MST_ARCACHE_0 register field. */
#define ALT_SYSMGR_NAND_L3MST_ARCACHE_0_WIDTH      4
/* The mask used to set the ALT_SYSMGR_NAND_L3MST_ARCACHE_0 register field value. */
#define ALT_SYSMGR_NAND_L3MST_ARCACHE_0_SET_MSK    0x0000000f
/* The mask used to clear the ALT_SYSMGR_NAND_L3MST_ARCACHE_0 register field value. */
#define ALT_SYSMGR_NAND_L3MST_ARCACHE_0_CLR_MSK    0xfffffff0
/* The reset value of the ALT_SYSMGR_NAND_L3MST_ARCACHE_0 register field. */
#define ALT_SYSMGR_NAND_L3MST_ARCACHE_0_RESET      0x0
/* Extracts the ALT_SYSMGR_NAND_L3MST_ARCACHE_0 field value from a register. */
#define ALT_SYSMGR_NAND_L3MST_ARCACHE_0_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_SYSMGR_NAND_L3MST_ARCACHE_0 register field value suitable for setting the register. */
#define ALT_SYSMGR_NAND_L3MST_ARCACHE_0_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : NAND AWCACHE - awcache_0
 * 
 * Specifies the value of the module AWCACHE signal.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                   | Value | Description
 * :-------------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_NONCACHE_NONBUFF     | 0x0   |            
 *  ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_BUFF                 | 0x1   |            
 *  ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_CACHE_NONALLOC       | 0x2   |            
 *  ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_CACHE_BUFF_NONALLOC  | 0x3   |            
 *  ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_RSVD1                | 0x4   |            
 *  ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_RSVD2                | 0x5   |            
 *  ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_CACHE_WRTHRU_RDALLOC | 0x6   |            
 *  ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_CACHE_WRBACK_RDALLOC | 0x7   |            
 *  ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_RSVD3                | 0x8   |            
 *  ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_RSVD4                | 0x9   |            
 *  ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_CACHE_WRTHRU_WRALLOC | 0xa   |            
 *  ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_CACHE_WRBACK_WRALLOC | 0xb   |            
 *  ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_RSVD5                | 0xc   |            
 *  ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_RSVD6                | 0xd   |            
 *  ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_CACHE_WRTHRU_ALLOC   | 0xe   |            
 *  ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_CACHE_WRBACK_ALLOC   | 0xf   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_NONCACHE_NONBUFF      0x0
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_BUFF                  0x1
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_CACHE_NONALLOC        0x2
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_CACHE_BUFF_NONALLOC   0x3
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_RSVD1                 0x4
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_RSVD2                 0x5
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_CACHE_WRTHRU_RDALLOC  0x6
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_CACHE_WRBACK_RDALLOC  0x7
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_RSVD3                 0x8
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_RSVD4                 0x9
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_CACHE_WRTHRU_WRALLOC  0xa
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_CACHE_WRBACK_WRALLOC  0xb
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_RSVD5                 0xc
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_RSVD6                 0xd
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_CACHE_WRTHRU_ALLOC    0xe
/*
 * Enumerated value for register field ALT_SYSMGR_NAND_L3MST_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_NAND_L3MST_AWCACHE_0_E_CACHE_WRBACK_ALLOC    0xf

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NAND_L3MST_AWCACHE_0 register field. */
#define ALT_SYSMGR_NAND_L3MST_AWCACHE_0_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NAND_L3MST_AWCACHE_0 register field. */
#define ALT_SYSMGR_NAND_L3MST_AWCACHE_0_MSB        7
/* The width in bits of the ALT_SYSMGR_NAND_L3MST_AWCACHE_0 register field. */
#define ALT_SYSMGR_NAND_L3MST_AWCACHE_0_WIDTH      4
/* The mask used to set the ALT_SYSMGR_NAND_L3MST_AWCACHE_0 register field value. */
#define ALT_SYSMGR_NAND_L3MST_AWCACHE_0_SET_MSK    0x000000f0
/* The mask used to clear the ALT_SYSMGR_NAND_L3MST_AWCACHE_0 register field value. */
#define ALT_SYSMGR_NAND_L3MST_AWCACHE_0_CLR_MSK    0xffffff0f
/* The reset value of the ALT_SYSMGR_NAND_L3MST_AWCACHE_0 register field. */
#define ALT_SYSMGR_NAND_L3MST_AWCACHE_0_RESET      0x0
/* Extracts the ALT_SYSMGR_NAND_L3MST_AWCACHE_0 field value from a register. */
#define ALT_SYSMGR_NAND_L3MST_AWCACHE_0_GET(value) (((value) & 0x000000f0) >> 4)
/* Produces a ALT_SYSMGR_NAND_L3MST_AWCACHE_0 register field value suitable for setting the register. */
#define ALT_SYSMGR_NAND_L3MST_AWCACHE_0_SET(value) (((value) << 4) & 0x000000f0)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_NAND_L3MST.
 */
struct ALT_SYSMGR_NAND_L3MST_s
{
    uint32_t  arcache_0 :  4;  /* NAND ARCACHE */
    uint32_t  awcache_0 :  4;  /* NAND AWCACHE */
    uint32_t            : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_NAND_L3MST. */
typedef volatile struct ALT_SYSMGR_NAND_L3MST_s  ALT_SYSMGR_NAND_L3MST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_NAND_L3MST register. */
#define ALT_SYSMGR_NAND_L3MST_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_NAND_L3MST register from the beginning of the component. */
#define ALT_SYSMGR_NAND_L3MST_OFST        0x34

/*
 * Register : USB L3 Master HPROT Register - usb0_l3master
 * 
 * Controls the L3 master HPROT AHB-Lite signal.
 * 
 * These register bits should be updated only during system initialization prior to
 * removing the peripheral from reset. They may not be changed dynamically during
 * peripheral operation
 * 
 * All fields are reset by a cold or warm reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [3:0]  | RW     | 0x1   | ALT_SYSMGR_USB0_L3MST_HPROT
 *  [31:4] | ???    | 0x0   | *UNDEFINED*                
 * 
 */
/*
 * Field : hprot
 * 
 * Defines HPROT[4:1]. HPROT[0] from usb is tied HIGH allow only data access.
 * 
 * ==========================
 * 
 * HPROT[4] Allocate
 * 
 * 0: L3 master accesses for the module are non-allocatable
 * 
 * 1: L3 master accesses for the module are allocatable
 * 
 * ==========================
 * 
 * HPROT[3] Cachable
 * 
 * 0: L3 master accesses for the module are non-cacheable.
 * 
 * 1: L3 master accesses for the module are cacheable.
 * 
 * ==========================
 * 
 * HPROT[2] Bufferable
 * 
 * 0: L3 master accesses for the module are not bufferable.
 * 
 * 1: L3 master accesses for the module are bufferable.
 * 
 * ==========================
 * 
 * HPROT[1] Privileged
 * 
 * 0: L3 master accesses for the module are not privileged.
 * 
 * 1: L3 master accesses for the module are privileged.
 * 
 * ==========================
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_USB0_L3MST_HPROT register field. */
#define ALT_SYSMGR_USB0_L3MST_HPROT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_USB0_L3MST_HPROT register field. */
#define ALT_SYSMGR_USB0_L3MST_HPROT_MSB        3
/* The width in bits of the ALT_SYSMGR_USB0_L3MST_HPROT register field. */
#define ALT_SYSMGR_USB0_L3MST_HPROT_WIDTH      4
/* The mask used to set the ALT_SYSMGR_USB0_L3MST_HPROT register field value. */
#define ALT_SYSMGR_USB0_L3MST_HPROT_SET_MSK    0x0000000f
/* The mask used to clear the ALT_SYSMGR_USB0_L3MST_HPROT register field value. */
#define ALT_SYSMGR_USB0_L3MST_HPROT_CLR_MSK    0xfffffff0
/* The reset value of the ALT_SYSMGR_USB0_L3MST_HPROT register field. */
#define ALT_SYSMGR_USB0_L3MST_HPROT_RESET      0x1
/* Extracts the ALT_SYSMGR_USB0_L3MST_HPROT field value from a register. */
#define ALT_SYSMGR_USB0_L3MST_HPROT_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_SYSMGR_USB0_L3MST_HPROT register field value suitable for setting the register. */
#define ALT_SYSMGR_USB0_L3MST_HPROT_SET(value) (((value) << 0) & 0x0000000f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_USB0_L3MST.
 */
struct ALT_SYSMGR_USB0_L3MST_s
{
    uint32_t  hprot :  4;  /* ALT_SYSMGR_USB0_L3MST_HPROT */
    uint32_t        : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_USB0_L3MST. */
typedef volatile struct ALT_SYSMGR_USB0_L3MST_s  ALT_SYSMGR_USB0_L3MST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_USB0_L3MST register. */
#define ALT_SYSMGR_USB0_L3MST_RESET       0x00000001
/* The byte offset of the ALT_SYSMGR_USB0_L3MST register from the beginning of the component. */
#define ALT_SYSMGR_USB0_L3MST_OFST        0x38

/*
 * Register : USB L3 Master HPROT Register - usb1_l3master
 * 
 * Controls the L3 master HPROT AHB-Lite signal.
 * 
 * These register bits should be updated only during system initialization prior to
 * removing the peripheral from reset. They may not be changed dynamically during
 * peripheral operation
 * 
 * All fields are reset by a cold or warm reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [3:0]  | RW     | 0x1   | ALT_SYSMGR_USB1_L3MST_HPROT
 *  [31:4] | ???    | 0x0   | *UNDEFINED*                
 * 
 */
/*
 * Field : hprot
 * 
 * Defines HPROT[4:1]. HPROT[0] from usb is tied HIGH to allow only data access.
 * 
 * ==========================
 * 
 * HPROT[4] Allocate
 * 
 * 0: L3 master accesses for the module are non-allocatable
 * 
 * 1: L3 master accesses for the module are allocatable
 * 
 * ==========================
 * 
 * HPROT[3] Cachable
 * 
 * 0: L3 master accesses for the module are non-cacheable.
 * 
 * 1: L3 master accesses for the module are cacheable.
 * 
 * ==========================
 * 
 * HPROT[2] Bufferable
 * 
 * 0: L3 master accesses for the module are not bufferable.
 * 
 * 1: L3 master accesses for the module are bufferable.
 * 
 * ==========================
 * 
 * HPROT[1] Privileged
 * 
 * 0: L3 master accesses for the module are not privileged.
 * 
 * 1: L3 master accesses for the module are privileged.
 * 
 * ==========================
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_USB1_L3MST_HPROT register field. */
#define ALT_SYSMGR_USB1_L3MST_HPROT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_USB1_L3MST_HPROT register field. */
#define ALT_SYSMGR_USB1_L3MST_HPROT_MSB        3
/* The width in bits of the ALT_SYSMGR_USB1_L3MST_HPROT register field. */
#define ALT_SYSMGR_USB1_L3MST_HPROT_WIDTH      4
/* The mask used to set the ALT_SYSMGR_USB1_L3MST_HPROT register field value. */
#define ALT_SYSMGR_USB1_L3MST_HPROT_SET_MSK    0x0000000f
/* The mask used to clear the ALT_SYSMGR_USB1_L3MST_HPROT register field value. */
#define ALT_SYSMGR_USB1_L3MST_HPROT_CLR_MSK    0xfffffff0
/* The reset value of the ALT_SYSMGR_USB1_L3MST_HPROT register field. */
#define ALT_SYSMGR_USB1_L3MST_HPROT_RESET      0x1
/* Extracts the ALT_SYSMGR_USB1_L3MST_HPROT field value from a register. */
#define ALT_SYSMGR_USB1_L3MST_HPROT_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_SYSMGR_USB1_L3MST_HPROT register field value suitable for setting the register. */
#define ALT_SYSMGR_USB1_L3MST_HPROT_SET(value) (((value) << 0) & 0x0000000f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_USB1_L3MST.
 */
struct ALT_SYSMGR_USB1_L3MST_s
{
    uint32_t  hprot :  4;  /* ALT_SYSMGR_USB1_L3MST_HPROT */
    uint32_t        : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_USB1_L3MST. */
typedef volatile struct ALT_SYSMGR_USB1_L3MST_s  ALT_SYSMGR_USB1_L3MST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_USB1_L3MST register. */
#define ALT_SYSMGR_USB1_L3MST_RESET       0x00000001
/* The byte offset of the ALT_SYSMGR_USB1_L3MST register from the beginning of the component. */
#define ALT_SYSMGR_USB1_L3MST_OFST        0x3c

/*
 * Register : EMAC L3 Master AxCACHE Register - emac_global
 * 
 * Controls the L3 master ARCACHE and AWCACHE AXI signals.
 * 
 * These register bits should be updated only during system initialization prior to
 * removing the peripheral from reset. They may not be changed dynamically during
 * peripheral operation
 * 
 * All fields are reset by a cold or warm reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description     
 * :-------|:-------|:------|:-----------------
 *  [0]    | RW     | 0x0   | PTP Clock Select
 *  [31:1] | ???    | 0x0   | *UNDEFINED*     
 * 
 */
/*
 * Field : PTP Clock Select - ptp_clk_sel
 * 
 * Selects the source of the PTP reference clock between emac_ptp_clk from the
 * Clock Manager or f2s_ptp_ref_clk from the FPGA Fabric.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value | Description
 * :---------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC_GLOB_PTP_CLK_SEL_E_EMAC_PTP_CLK    | 0x0   |            
 *  ALT_SYSMGR_EMAC_GLOB_PTP_CLK_SEL_E_F2S_PTP_REF_CLK | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC_GLOB_PTP_CLK_SEL
 * 
 */
#define ALT_SYSMGR_EMAC_GLOB_PTP_CLK_SEL_E_EMAC_PTP_CLK     0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC_GLOB_PTP_CLK_SEL
 * 
 */
#define ALT_SYSMGR_EMAC_GLOB_PTP_CLK_SEL_E_F2S_PTP_REF_CLK  0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC_GLOB_PTP_CLK_SEL register field. */
#define ALT_SYSMGR_EMAC_GLOB_PTP_CLK_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC_GLOB_PTP_CLK_SEL register field. */
#define ALT_SYSMGR_EMAC_GLOB_PTP_CLK_SEL_MSB        0
/* The width in bits of the ALT_SYSMGR_EMAC_GLOB_PTP_CLK_SEL register field. */
#define ALT_SYSMGR_EMAC_GLOB_PTP_CLK_SEL_WIDTH      1
/* The mask used to set the ALT_SYSMGR_EMAC_GLOB_PTP_CLK_SEL register field value. */
#define ALT_SYSMGR_EMAC_GLOB_PTP_CLK_SEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_EMAC_GLOB_PTP_CLK_SEL register field value. */
#define ALT_SYSMGR_EMAC_GLOB_PTP_CLK_SEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_EMAC_GLOB_PTP_CLK_SEL register field. */
#define ALT_SYSMGR_EMAC_GLOB_PTP_CLK_SEL_RESET      0x0
/* Extracts the ALT_SYSMGR_EMAC_GLOB_PTP_CLK_SEL field value from a register. */
#define ALT_SYSMGR_EMAC_GLOB_PTP_CLK_SEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_EMAC_GLOB_PTP_CLK_SEL register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC_GLOB_PTP_CLK_SEL_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_EMAC_GLOB.
 */
struct ALT_SYSMGR_EMAC_GLOB_s
{
    uint32_t  ptp_clk_sel :  1;  /* PTP Clock Select */
    uint32_t              : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_EMAC_GLOB. */
typedef volatile struct ALT_SYSMGR_EMAC_GLOB_s  ALT_SYSMGR_EMAC_GLOB_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_EMAC_GLOB register. */
#define ALT_SYSMGR_EMAC_GLOB_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_EMAC_GLOB register from the beginning of the component. */
#define ALT_SYSMGR_EMAC_GLOB_OFST        0x40

/*
 * Register : Control Register - emac0
 * 
 * Registers used by the EMAC. All fields are reset by a cold or warm reset.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                         
 * :--------|:-------|:------|:-------------------------------------
 *  [1:0]   | RW     | 0x3   | ALT_SYSMGR_EMAC0_PHY_INTF_SEL       
 *  [7:2]   | ???    | 0x0   | *UNDEFINED*                         
 *  [8]     | RW     | 0x0   | ALT_SYSMGR_EMAC0_PTP_REF_SEL        
 *  [11:9]  | ???    | 0x0   | *UNDEFINED*                         
 *  [12]    | RW     | 0x0   | ALT_SYSMGR_EMAC0_APP_CLK_SEL        
 *  [15:13] | ???    | 0x0   | *UNDEFINED*                         
 *  [19:16] | RW     | 0x0   | ALT_SYSMGR_EMAC0_ARCACHE            
 *  [23:20] | RW     | 0x0   | ALT_SYSMGR_EMAC0_AWCACHE            
 *  [25:24] | RW     | 0x2   | ALT_SYSMGR_EMAC0_ARPROT             
 *  [26]    | ???    | 0x0   | *UNDEFINED*                         
 *  [28:27] | RW     | 0x2   | ALT_SYSMGR_EMAC0_AWPROT             
 *  [29]    | ???    | 0x0   | *UNDEFINED*                         
 *  [30]    | RW     | 0x0   | ALT_SYSMGR_EMAC0_SBD_DATA_ENDIANNESS
 *  [31]    | RW     | 0x0   | ALT_SYSMGR_EMAC0_AXI_DIS            
 * 
 */
/*
 * Field : phy_intf_sel
 * 
 * PHY Interface Select
 * 
 * Field to select "Out of Reset", GMII (or MII), RGMII or RMII as the PHY
 * interface.  Note, the MAC speed is an output of Synopsys IP.    So the System
 * Manager PHY Select combined with MAC speed from the IP determine the clock/PHY
 * configuration.  "Out of Reset" mode implies that the MAC RX and TX internal
 * clocks use the Clock Manager reference rather than depending on the PHY to have
 * active clocks.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description
 * :-----------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC0_PHY_INTF_SEL_E_GMII_MII | 0x0   |            
 *  ALT_SYSMGR_EMAC0_PHY_INTF_SEL_E_RGMII    | 0x1   |            
 *  ALT_SYSMGR_EMAC0_PHY_INTF_SEL_E_RMII     | 0x2   |            
 *  ALT_SYSMGR_EMAC0_PHY_INTF_SEL_E_RST      | 0x3   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_PHY_INTF_SEL
 * 
 */
#define ALT_SYSMGR_EMAC0_PHY_INTF_SEL_E_GMII_MII    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_PHY_INTF_SEL
 * 
 */
#define ALT_SYSMGR_EMAC0_PHY_INTF_SEL_E_RGMII       0x1
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_PHY_INTF_SEL
 * 
 */
#define ALT_SYSMGR_EMAC0_PHY_INTF_SEL_E_RMII        0x2
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_PHY_INTF_SEL
 * 
 */
#define ALT_SYSMGR_EMAC0_PHY_INTF_SEL_E_RST         0x3

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC0_PHY_INTF_SEL register field. */
#define ALT_SYSMGR_EMAC0_PHY_INTF_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC0_PHY_INTF_SEL register field. */
#define ALT_SYSMGR_EMAC0_PHY_INTF_SEL_MSB        1
/* The width in bits of the ALT_SYSMGR_EMAC0_PHY_INTF_SEL register field. */
#define ALT_SYSMGR_EMAC0_PHY_INTF_SEL_WIDTH      2
/* The mask used to set the ALT_SYSMGR_EMAC0_PHY_INTF_SEL register field value. */
#define ALT_SYSMGR_EMAC0_PHY_INTF_SEL_SET_MSK    0x00000003
/* The mask used to clear the ALT_SYSMGR_EMAC0_PHY_INTF_SEL register field value. */
#define ALT_SYSMGR_EMAC0_PHY_INTF_SEL_CLR_MSK    0xfffffffc
/* The reset value of the ALT_SYSMGR_EMAC0_PHY_INTF_SEL register field. */
#define ALT_SYSMGR_EMAC0_PHY_INTF_SEL_RESET      0x3
/* Extracts the ALT_SYSMGR_EMAC0_PHY_INTF_SEL field value from a register. */
#define ALT_SYSMGR_EMAC0_PHY_INTF_SEL_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_SYSMGR_EMAC0_PHY_INTF_SEL register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC0_PHY_INTF_SEL_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : ptp_ref_sel
 * 
 * This field selects if the Timestamp reference is internally or externally
 * generated.  EMAC0 may be the master to generate the timestamp for EMAC1 and
 * EMAC2.   EMAC0 must be set to Internal Timestamp.   EMAC1/2 may be set to either
 * Internal or External.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC0_PTP_REF_SEL_E_INTERNAL | 0x0   |            
 *  ALT_SYSMGR_EMAC0_PTP_REF_SEL_E_EXTERNAL | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_PTP_REF_SEL
 * 
 */
#define ALT_SYSMGR_EMAC0_PTP_REF_SEL_E_INTERNAL 0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_PTP_REF_SEL
 * 
 */
#define ALT_SYSMGR_EMAC0_PTP_REF_SEL_E_EXTERNAL 0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC0_PTP_REF_SEL register field. */
#define ALT_SYSMGR_EMAC0_PTP_REF_SEL_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC0_PTP_REF_SEL register field. */
#define ALT_SYSMGR_EMAC0_PTP_REF_SEL_MSB        8
/* The width in bits of the ALT_SYSMGR_EMAC0_PTP_REF_SEL register field. */
#define ALT_SYSMGR_EMAC0_PTP_REF_SEL_WIDTH      1
/* The mask used to set the ALT_SYSMGR_EMAC0_PTP_REF_SEL register field value. */
#define ALT_SYSMGR_EMAC0_PTP_REF_SEL_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_EMAC0_PTP_REF_SEL register field value. */
#define ALT_SYSMGR_EMAC0_PTP_REF_SEL_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_EMAC0_PTP_REF_SEL register field. */
#define ALT_SYSMGR_EMAC0_PTP_REF_SEL_RESET      0x0
/* Extracts the ALT_SYSMGR_EMAC0_PTP_REF_SEL field value from a register. */
#define ALT_SYSMGR_EMAC0_PTP_REF_SEL_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_EMAC0_PTP_REF_SEL register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC0_PTP_REF_SEL_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : app_clk_sel
 * 
 * Selects the source of the Application clock for the datapath to either l4_mp_clk
 * for normal Baum operation or to f2s_ap_clk if the switch interface is enabled to
 * the FPGA fabric.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description
 * :------------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC0_APP_CLK_SEL_E_L4_MP_CLK  | 0x0   |            
 *  ALT_SYSMGR_EMAC0_APP_CLK_SEL_E_F2S_AP_CLK | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_APP_CLK_SEL
 * 
 */
#define ALT_SYSMGR_EMAC0_APP_CLK_SEL_E_L4_MP_CLK    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_APP_CLK_SEL
 * 
 */
#define ALT_SYSMGR_EMAC0_APP_CLK_SEL_E_F2S_AP_CLK   0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC0_APP_CLK_SEL register field. */
#define ALT_SYSMGR_EMAC0_APP_CLK_SEL_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC0_APP_CLK_SEL register field. */
#define ALT_SYSMGR_EMAC0_APP_CLK_SEL_MSB        12
/* The width in bits of the ALT_SYSMGR_EMAC0_APP_CLK_SEL register field. */
#define ALT_SYSMGR_EMAC0_APP_CLK_SEL_WIDTH      1
/* The mask used to set the ALT_SYSMGR_EMAC0_APP_CLK_SEL register field value. */
#define ALT_SYSMGR_EMAC0_APP_CLK_SEL_SET_MSK    0x00001000
/* The mask used to clear the ALT_SYSMGR_EMAC0_APP_CLK_SEL register field value. */
#define ALT_SYSMGR_EMAC0_APP_CLK_SEL_CLR_MSK    0xffffefff
/* The reset value of the ALT_SYSMGR_EMAC0_APP_CLK_SEL register field. */
#define ALT_SYSMGR_EMAC0_APP_CLK_SEL_RESET      0x0
/* Extracts the ALT_SYSMGR_EMAC0_APP_CLK_SEL field value from a register. */
#define ALT_SYSMGR_EMAC0_APP_CLK_SEL_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SYSMGR_EMAC0_APP_CLK_SEL register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC0_APP_CLK_SEL_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : arcache
 * 
 * Specifies the values of the 2 EMAC ARCACHE signals.
 * 
 * The field array index corresponds to the EMAC index.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description
 * :------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC0_ARCACHE_E_NONCACHE_NONBUFF     | 0x0   |            
 *  ALT_SYSMGR_EMAC0_ARCACHE_E_BUFF                 | 0x1   |            
 *  ALT_SYSMGR_EMAC0_ARCACHE_E_CACHE_NONALLOC       | 0x2   |            
 *  ALT_SYSMGR_EMAC0_ARCACHE_E_CACHE_BUFF_NONALLOC  | 0x3   |            
 *  ALT_SYSMGR_EMAC0_ARCACHE_E_RSVD1                | 0x4   |            
 *  ALT_SYSMGR_EMAC0_ARCACHE_E_RSVD2                | 0x5   |            
 *  ALT_SYSMGR_EMAC0_ARCACHE_E_CACHE_WRTHRU_RDALLOC | 0x6   |            
 *  ALT_SYSMGR_EMAC0_ARCACHE_E_CACHE_WRBACK_RDALLOC | 0x7   |            
 *  ALT_SYSMGR_EMAC0_ARCACHE_E_RSVD3                | 0x8   |            
 *  ALT_SYSMGR_EMAC0_ARCACHE_E_RSVD4                | 0x9   |            
 *  ALT_SYSMGR_EMAC0_ARCACHE_E_CACHE_WRTHRU_WRALLOC | 0xa   |            
 *  ALT_SYSMGR_EMAC0_ARCACHE_E_CACHE_WRBACK_WRALLOC | 0xb   |            
 *  ALT_SYSMGR_EMAC0_ARCACHE_E_RSVD5                | 0xc   |            
 *  ALT_SYSMGR_EMAC0_ARCACHE_E_RSVD6                | 0xd   |            
 *  ALT_SYSMGR_EMAC0_ARCACHE_E_CACHE_WRTHRU_ALLOC   | 0xe   |            
 *  ALT_SYSMGR_EMAC0_ARCACHE_E_CACHE_WRBACK_ALLOC   | 0xf   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_ARCACHE_E_NONCACHE_NONBUFF     0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_ARCACHE_E_BUFF                 0x1
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_ARCACHE_E_CACHE_NONALLOC       0x2
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_ARCACHE_E_CACHE_BUFF_NONALLOC  0x3
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_ARCACHE_E_RSVD1                0x4
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_ARCACHE_E_RSVD2                0x5
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_ARCACHE_E_CACHE_WRTHRU_RDALLOC 0x6
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_ARCACHE_E_CACHE_WRBACK_RDALLOC 0x7
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_ARCACHE_E_RSVD3                0x8
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_ARCACHE_E_RSVD4                0x9
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_ARCACHE_E_CACHE_WRTHRU_WRALLOC 0xa
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_ARCACHE_E_CACHE_WRBACK_WRALLOC 0xb
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_ARCACHE_E_RSVD5                0xc
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_ARCACHE_E_RSVD6                0xd
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_ARCACHE_E_CACHE_WRTHRU_ALLOC   0xe
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_ARCACHE_E_CACHE_WRBACK_ALLOC   0xf

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC0_ARCACHE register field. */
#define ALT_SYSMGR_EMAC0_ARCACHE_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC0_ARCACHE register field. */
#define ALT_SYSMGR_EMAC0_ARCACHE_MSB        19
/* The width in bits of the ALT_SYSMGR_EMAC0_ARCACHE register field. */
#define ALT_SYSMGR_EMAC0_ARCACHE_WIDTH      4
/* The mask used to set the ALT_SYSMGR_EMAC0_ARCACHE register field value. */
#define ALT_SYSMGR_EMAC0_ARCACHE_SET_MSK    0x000f0000
/* The mask used to clear the ALT_SYSMGR_EMAC0_ARCACHE register field value. */
#define ALT_SYSMGR_EMAC0_ARCACHE_CLR_MSK    0xfff0ffff
/* The reset value of the ALT_SYSMGR_EMAC0_ARCACHE register field. */
#define ALT_SYSMGR_EMAC0_ARCACHE_RESET      0x0
/* Extracts the ALT_SYSMGR_EMAC0_ARCACHE field value from a register. */
#define ALT_SYSMGR_EMAC0_ARCACHE_GET(value) (((value) & 0x000f0000) >> 16)
/* Produces a ALT_SYSMGR_EMAC0_ARCACHE register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC0_ARCACHE_SET(value) (((value) << 16) & 0x000f0000)

/*
 * Field : awcache
 * 
 * Specifies the values of the 2 EMAC AWCACHE signals.
 * 
 * The field array index corresponds to the EMAC index.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description
 * :------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC0_AWCACHE_E_NONCACHE_NONBUFF     | 0x0   |            
 *  ALT_SYSMGR_EMAC0_AWCACHE_E_BUFF                 | 0x1   |            
 *  ALT_SYSMGR_EMAC0_AWCACHE_E_CACHE_NONALLOC       | 0x2   |            
 *  ALT_SYSMGR_EMAC0_AWCACHE_E_CACHE_BUFF_NONALLOC  | 0x3   |            
 *  ALT_SYSMGR_EMAC0_AWCACHE_E_RSVD1                | 0x4   |            
 *  ALT_SYSMGR_EMAC0_AWCACHE_E_RSVD2                | 0x5   |            
 *  ALT_SYSMGR_EMAC0_AWCACHE_E_CACHE_WRTHRU_RDALLOC | 0x6   |            
 *  ALT_SYSMGR_EMAC0_AWCACHE_E_CACHE_WRBACK_RDALLOC | 0x7   |            
 *  ALT_SYSMGR_EMAC0_AWCACHE_E_RSVD3                | 0x8   |            
 *  ALT_SYSMGR_EMAC0_AWCACHE_E_RSVD4                | 0x9   |            
 *  ALT_SYSMGR_EMAC0_AWCACHE_E_CACHE_WRTHRU_WRALLOC | 0xa   |            
 *  ALT_SYSMGR_EMAC0_AWCACHE_E_CACHE_WRBACK_WRALLOC | 0xb   |            
 *  ALT_SYSMGR_EMAC0_AWCACHE_E_RSVD5                | 0xc   |            
 *  ALT_SYSMGR_EMAC0_AWCACHE_E_RSVD6                | 0xd   |            
 *  ALT_SYSMGR_EMAC0_AWCACHE_E_CACHE_WRTHRU_ALLOC   | 0xe   |            
 *  ALT_SYSMGR_EMAC0_AWCACHE_E_CACHE_WRBACK_ALLOC   | 0xf   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_AWCACHE_E_NONCACHE_NONBUFF     0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_AWCACHE_E_BUFF                 0x1
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_AWCACHE_E_CACHE_NONALLOC       0x2
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_AWCACHE_E_CACHE_BUFF_NONALLOC  0x3
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_AWCACHE_E_RSVD1                0x4
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_AWCACHE_E_RSVD2                0x5
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_AWCACHE_E_CACHE_WRTHRU_RDALLOC 0x6
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_AWCACHE_E_CACHE_WRBACK_RDALLOC 0x7
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_AWCACHE_E_RSVD3                0x8
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_AWCACHE_E_RSVD4                0x9
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_AWCACHE_E_CACHE_WRTHRU_WRALLOC 0xa
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_AWCACHE_E_CACHE_WRBACK_WRALLOC 0xb
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_AWCACHE_E_RSVD5                0xc
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_AWCACHE_E_RSVD6                0xd
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_AWCACHE_E_CACHE_WRTHRU_ALLOC   0xe
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC0_AWCACHE_E_CACHE_WRBACK_ALLOC   0xf

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC0_AWCACHE register field. */
#define ALT_SYSMGR_EMAC0_AWCACHE_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC0_AWCACHE register field. */
#define ALT_SYSMGR_EMAC0_AWCACHE_MSB        23
/* The width in bits of the ALT_SYSMGR_EMAC0_AWCACHE register field. */
#define ALT_SYSMGR_EMAC0_AWCACHE_WIDTH      4
/* The mask used to set the ALT_SYSMGR_EMAC0_AWCACHE register field value. */
#define ALT_SYSMGR_EMAC0_AWCACHE_SET_MSK    0x00f00000
/* The mask used to clear the ALT_SYSMGR_EMAC0_AWCACHE register field value. */
#define ALT_SYSMGR_EMAC0_AWCACHE_CLR_MSK    0xff0fffff
/* The reset value of the ALT_SYSMGR_EMAC0_AWCACHE register field. */
#define ALT_SYSMGR_EMAC0_AWCACHE_RESET      0x0
/* Extracts the ALT_SYSMGR_EMAC0_AWCACHE field value from a register. */
#define ALT_SYSMGR_EMAC0_AWCACHE_GET(value) (((value) & 0x00f00000) >> 20)
/* Produces a ALT_SYSMGR_EMAC0_AWCACHE register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC0_AWCACHE_SET(value) (((value) << 20) & 0x00f00000)

/*
 * Field : arprot
 * 
 * Specifies the values of the ARPROT signals.
 * 
 * ==========================
 * 
 * AxPROT[1]
 * 
 * LOW:  Secure Access
 * 
 * HIGH: NonSecure Access
 * 
 * ==========================
 * 
 * AxPROT[0]
 * 
 * LOW:  Normal Access
 * 
 * HIGH: Privileged Access
 * 
 * ==========================
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                           | Value | Description
 * :-----------------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC0_ARPROT_E_SECURE_NORMAL        | 0x0   |            
 *  ALT_SYSMGR_EMAC0_ARPROT_E_SECURE_PRIVILEGED    | 0x1   |            
 *  ALT_SYSMGR_EMAC0_ARPROT_E_NONSECURE_NORMAL     | 0x2   |            
 *  ALT_SYSMGR_EMAC0_ARPROT_E_NONSECURE_PRIVILEGED | 0x3   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_ARPROT
 * 
 * Secure Normal(non-privileged) access
 */
#define ALT_SYSMGR_EMAC0_ARPROT_E_SECURE_NORMAL         0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_ARPROT
 * 
 * Secure Privileged access
 */
#define ALT_SYSMGR_EMAC0_ARPROT_E_SECURE_PRIVILEGED     0x1
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_ARPROT
 * 
 * Non-Secure Normal(non-privileged) access
 */
#define ALT_SYSMGR_EMAC0_ARPROT_E_NONSECURE_NORMAL      0x2
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_ARPROT
 * 
 * Non-Secure Privileged access
 */
#define ALT_SYSMGR_EMAC0_ARPROT_E_NONSECURE_PRIVILEGED  0x3

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC0_ARPROT register field. */
#define ALT_SYSMGR_EMAC0_ARPROT_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC0_ARPROT register field. */
#define ALT_SYSMGR_EMAC0_ARPROT_MSB        25
/* The width in bits of the ALT_SYSMGR_EMAC0_ARPROT register field. */
#define ALT_SYSMGR_EMAC0_ARPROT_WIDTH      2
/* The mask used to set the ALT_SYSMGR_EMAC0_ARPROT register field value. */
#define ALT_SYSMGR_EMAC0_ARPROT_SET_MSK    0x03000000
/* The mask used to clear the ALT_SYSMGR_EMAC0_ARPROT register field value. */
#define ALT_SYSMGR_EMAC0_ARPROT_CLR_MSK    0xfcffffff
/* The reset value of the ALT_SYSMGR_EMAC0_ARPROT register field. */
#define ALT_SYSMGR_EMAC0_ARPROT_RESET      0x2
/* Extracts the ALT_SYSMGR_EMAC0_ARPROT field value from a register. */
#define ALT_SYSMGR_EMAC0_ARPROT_GET(value) (((value) & 0x03000000) >> 24)
/* Produces a ALT_SYSMGR_EMAC0_ARPROT register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC0_ARPROT_SET(value) (((value) << 24) & 0x03000000)

/*
 * Field : awprot
 * 
 * Specifies the values of the 2 EMAC AWCACHE signals.
 * 
 * ==========================
 * 
 * AxPROT[1]
 * 
 * LOW:  Secure Access
 * 
 * HIGH: NonSecure Access
 * 
 * ==========================
 * 
 * AxPROT[0]
 * 
 * LOW:  Normal Access
 * 
 * HIGH: Privileged Access
 * 
 * ==========================
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                           | Value | Description
 * :-----------------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC0_AWPROT_E_SECURE_NORMAL        | 0x0   |            
 *  ALT_SYSMGR_EMAC0_AWPROT_E_SECURE_PRIVILEGED    | 0x1   |            
 *  ALT_SYSMGR_EMAC0_AWPROT_E_NONSECURE_NORMAL     | 0x2   |            
 *  ALT_SYSMGR_EMAC0_AWPROT_E_NONSECURE_PRIVILEGED | 0x3   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_AWPROT
 * 
 * Secure Normal(non-privileged) access
 */
#define ALT_SYSMGR_EMAC0_AWPROT_E_SECURE_NORMAL         0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_AWPROT
 * 
 * Secure Privileged access
 */
#define ALT_SYSMGR_EMAC0_AWPROT_E_SECURE_PRIVILEGED     0x1
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_AWPROT
 * 
 * Non-Secure Normal(non-privileged) access
 */
#define ALT_SYSMGR_EMAC0_AWPROT_E_NONSECURE_NORMAL      0x2
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_AWPROT
 * 
 * Non-Secure Privileged access
 */
#define ALT_SYSMGR_EMAC0_AWPROT_E_NONSECURE_PRIVILEGED  0x3

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC0_AWPROT register field. */
#define ALT_SYSMGR_EMAC0_AWPROT_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC0_AWPROT register field. */
#define ALT_SYSMGR_EMAC0_AWPROT_MSB        28
/* The width in bits of the ALT_SYSMGR_EMAC0_AWPROT register field. */
#define ALT_SYSMGR_EMAC0_AWPROT_WIDTH      2
/* The mask used to set the ALT_SYSMGR_EMAC0_AWPROT register field value. */
#define ALT_SYSMGR_EMAC0_AWPROT_SET_MSK    0x18000000
/* The mask used to clear the ALT_SYSMGR_EMAC0_AWPROT register field value. */
#define ALT_SYSMGR_EMAC0_AWPROT_CLR_MSK    0xe7ffffff
/* The reset value of the ALT_SYSMGR_EMAC0_AWPROT register field. */
#define ALT_SYSMGR_EMAC0_AWPROT_RESET      0x2
/* Extracts the ALT_SYSMGR_EMAC0_AWPROT field value from a register. */
#define ALT_SYSMGR_EMAC0_AWPROT_GET(value) (((value) & 0x18000000) >> 27)
/* Produces a ALT_SYSMGR_EMAC0_AWPROT register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC0_AWPROT_SET(value) (((value) << 27) & 0x18000000)

/*
 * Field : sbd_data_endianness
 * 
 * Specifies the endianness of the EMAC DMA transfers.
 * 
 * The field array index corresponds to the EMAC index.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                 | Value | Description
 * :-----------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC0_SBD_DATA_ENDIANNESS_E_LITTLE_ENDIAN | 0x0   |            
 *  ALT_SYSMGR_EMAC0_SBD_DATA_ENDIANNESS_E_BIG_ENDIAN    | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_SBD_DATA_ENDIANNESS
 * 
 */
#define ALT_SYSMGR_EMAC0_SBD_DATA_ENDIANNESS_E_LITTLE_ENDIAN    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC0_SBD_DATA_ENDIANNESS
 * 
 */
#define ALT_SYSMGR_EMAC0_SBD_DATA_ENDIANNESS_E_BIG_ENDIAN       0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC0_SBD_DATA_ENDIANNESS register field. */
#define ALT_SYSMGR_EMAC0_SBD_DATA_ENDIANNESS_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC0_SBD_DATA_ENDIANNESS register field. */
#define ALT_SYSMGR_EMAC0_SBD_DATA_ENDIANNESS_MSB        30
/* The width in bits of the ALT_SYSMGR_EMAC0_SBD_DATA_ENDIANNESS register field. */
#define ALT_SYSMGR_EMAC0_SBD_DATA_ENDIANNESS_WIDTH      1
/* The mask used to set the ALT_SYSMGR_EMAC0_SBD_DATA_ENDIANNESS register field value. */
#define ALT_SYSMGR_EMAC0_SBD_DATA_ENDIANNESS_SET_MSK    0x40000000
/* The mask used to clear the ALT_SYSMGR_EMAC0_SBD_DATA_ENDIANNESS register field value. */
#define ALT_SYSMGR_EMAC0_SBD_DATA_ENDIANNESS_CLR_MSK    0xbfffffff
/* The reset value of the ALT_SYSMGR_EMAC0_SBD_DATA_ENDIANNESS register field. */
#define ALT_SYSMGR_EMAC0_SBD_DATA_ENDIANNESS_RESET      0x0
/* Extracts the ALT_SYSMGR_EMAC0_SBD_DATA_ENDIANNESS field value from a register. */
#define ALT_SYSMGR_EMAC0_SBD_DATA_ENDIANNESS_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_SYSMGR_EMAC0_SBD_DATA_ENDIANNESS register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC0_SBD_DATA_ENDIANNESS_SET(value) (((value) << 30) & 0x40000000)

/*
 * Field : axi_disable
 * 
 * AXI Disable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC0_AXI_DIS register field. */
#define ALT_SYSMGR_EMAC0_AXI_DIS_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC0_AXI_DIS register field. */
#define ALT_SYSMGR_EMAC0_AXI_DIS_MSB        31
/* The width in bits of the ALT_SYSMGR_EMAC0_AXI_DIS register field. */
#define ALT_SYSMGR_EMAC0_AXI_DIS_WIDTH      1
/* The mask used to set the ALT_SYSMGR_EMAC0_AXI_DIS register field value. */
#define ALT_SYSMGR_EMAC0_AXI_DIS_SET_MSK    0x80000000
/* The mask used to clear the ALT_SYSMGR_EMAC0_AXI_DIS register field value. */
#define ALT_SYSMGR_EMAC0_AXI_DIS_CLR_MSK    0x7fffffff
/* The reset value of the ALT_SYSMGR_EMAC0_AXI_DIS register field. */
#define ALT_SYSMGR_EMAC0_AXI_DIS_RESET      0x0
/* Extracts the ALT_SYSMGR_EMAC0_AXI_DIS field value from a register. */
#define ALT_SYSMGR_EMAC0_AXI_DIS_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_SYSMGR_EMAC0_AXI_DIS register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC0_AXI_DIS_SET(value) (((value) << 31) & 0x80000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_EMAC0.
 */
struct ALT_SYSMGR_EMAC0_s
{
    uint32_t  phy_intf_sel        :  2;  /* ALT_SYSMGR_EMAC0_PHY_INTF_SEL */
    uint32_t                      :  6;  /* *UNDEFINED* */
    uint32_t  ptp_ref_sel         :  1;  /* ALT_SYSMGR_EMAC0_PTP_REF_SEL */
    uint32_t                      :  3;  /* *UNDEFINED* */
    uint32_t  app_clk_sel         :  1;  /* ALT_SYSMGR_EMAC0_APP_CLK_SEL */
    uint32_t                      :  3;  /* *UNDEFINED* */
    uint32_t  arcache             :  4;  /* ALT_SYSMGR_EMAC0_ARCACHE */
    uint32_t  awcache             :  4;  /* ALT_SYSMGR_EMAC0_AWCACHE */
    uint32_t  arprot              :  2;  /* ALT_SYSMGR_EMAC0_ARPROT */
    uint32_t                      :  1;  /* *UNDEFINED* */
    uint32_t  awprot              :  2;  /* ALT_SYSMGR_EMAC0_AWPROT */
    uint32_t                      :  1;  /* *UNDEFINED* */
    uint32_t  sbd_data_endianness :  1;  /* ALT_SYSMGR_EMAC0_SBD_DATA_ENDIANNESS */
    uint32_t  axi_disable         :  1;  /* ALT_SYSMGR_EMAC0_AXI_DIS */
};

/* The typedef declaration for register ALT_SYSMGR_EMAC0. */
typedef volatile struct ALT_SYSMGR_EMAC0_s  ALT_SYSMGR_EMAC0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_EMAC0 register. */
#define ALT_SYSMGR_EMAC0_RESET       0x12000003
/* The byte offset of the ALT_SYSMGR_EMAC0 register from the beginning of the component. */
#define ALT_SYSMGR_EMAC0_OFST        0x44

/*
 * Register : Control Register - emac1
 * 
 * Registers used by the EMAC. All fields are reset by a cold or warm reset.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                         
 * :--------|:-------|:------|:-------------------------------------
 *  [1:0]   | RW     | 0x3   | ALT_SYSMGR_EMAC1_PHY_INTF_SEL       
 *  [7:2]   | ???    | 0x0   | *UNDEFINED*                         
 *  [8]     | RW     | 0x0   | ALT_SYSMGR_EMAC1_PTP_REF_SEL        
 *  [11:9]  | ???    | 0x0   | *UNDEFINED*                         
 *  [12]    | RW     | 0x0   | ALT_SYSMGR_EMAC1_APP_CLK_SEL        
 *  [15:13] | ???    | 0x0   | *UNDEFINED*                         
 *  [19:16] | RW     | 0x0   | ALT_SYSMGR_EMAC1_ARCACHE            
 *  [23:20] | RW     | 0x0   | ALT_SYSMGR_EMAC1_AWCACHE            
 *  [25:24] | RW     | 0x2   | ALT_SYSMGR_EMAC1_ARPROT             
 *  [26]    | ???    | 0x0   | *UNDEFINED*                         
 *  [28:27] | RW     | 0x2   | ALT_SYSMGR_EMAC1_AWPROT             
 *  [29]    | ???    | 0x0   | *UNDEFINED*                         
 *  [30]    | RW     | 0x0   | ALT_SYSMGR_EMAC1_SBD_DATA_ENDIANNESS
 *  [31]    | RW     | 0x0   | ALT_SYSMGR_EMAC1_AXI_DIS            
 * 
 */
/*
 * Field : phy_intf_sel
 * 
 * PHY Interface Select
 * 
 * Field to select "Out of Reset", GMII (or MII), RGMII or RMII as the PHY
 * interface.  Note, the MAC speed is an output of Synopsys IP.    So the System
 * Manager PHY Select combined with MAC speed from the IP determine the clock/PHY
 * configuration.  "Out of Reset" mode implies that the MAC RX and TX internal
 * clocks use the Clock Manager reference rather than depending on the PHY to have
 * active clocks.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description
 * :-----------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC1_PHY_INTF_SEL_E_GMII_MII | 0x0   |            
 *  ALT_SYSMGR_EMAC1_PHY_INTF_SEL_E_RGMII    | 0x1   |            
 *  ALT_SYSMGR_EMAC1_PHY_INTF_SEL_E_RMII     | 0x2   |            
 *  ALT_SYSMGR_EMAC1_PHY_INTF_SEL_E_RST      | 0x3   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_PHY_INTF_SEL
 * 
 */
#define ALT_SYSMGR_EMAC1_PHY_INTF_SEL_E_GMII_MII    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_PHY_INTF_SEL
 * 
 */
#define ALT_SYSMGR_EMAC1_PHY_INTF_SEL_E_RGMII       0x1
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_PHY_INTF_SEL
 * 
 */
#define ALT_SYSMGR_EMAC1_PHY_INTF_SEL_E_RMII        0x2
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_PHY_INTF_SEL
 * 
 */
#define ALT_SYSMGR_EMAC1_PHY_INTF_SEL_E_RST         0x3

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC1_PHY_INTF_SEL register field. */
#define ALT_SYSMGR_EMAC1_PHY_INTF_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC1_PHY_INTF_SEL register field. */
#define ALT_SYSMGR_EMAC1_PHY_INTF_SEL_MSB        1
/* The width in bits of the ALT_SYSMGR_EMAC1_PHY_INTF_SEL register field. */
#define ALT_SYSMGR_EMAC1_PHY_INTF_SEL_WIDTH      2
/* The mask used to set the ALT_SYSMGR_EMAC1_PHY_INTF_SEL register field value. */
#define ALT_SYSMGR_EMAC1_PHY_INTF_SEL_SET_MSK    0x00000003
/* The mask used to clear the ALT_SYSMGR_EMAC1_PHY_INTF_SEL register field value. */
#define ALT_SYSMGR_EMAC1_PHY_INTF_SEL_CLR_MSK    0xfffffffc
/* The reset value of the ALT_SYSMGR_EMAC1_PHY_INTF_SEL register field. */
#define ALT_SYSMGR_EMAC1_PHY_INTF_SEL_RESET      0x3
/* Extracts the ALT_SYSMGR_EMAC1_PHY_INTF_SEL field value from a register. */
#define ALT_SYSMGR_EMAC1_PHY_INTF_SEL_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_SYSMGR_EMAC1_PHY_INTF_SEL register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC1_PHY_INTF_SEL_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : ptp_ref_sel
 * 
 * This field selects if the Timestamp reference is internally or externally
 * generated.  EMAC0 may be the master to generate the timestamp for EMAC1 and
 * EMAC2.   EMAC0 must be set to Internal Timestamp.   EMAC1/2 may be set to either
 * Internal or External.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC1_PTP_REF_SEL_E_INTERNAL | 0x0   |            
 *  ALT_SYSMGR_EMAC1_PTP_REF_SEL_E_EXTERNAL | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_PTP_REF_SEL
 * 
 */
#define ALT_SYSMGR_EMAC1_PTP_REF_SEL_E_INTERNAL 0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_PTP_REF_SEL
 * 
 */
#define ALT_SYSMGR_EMAC1_PTP_REF_SEL_E_EXTERNAL 0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC1_PTP_REF_SEL register field. */
#define ALT_SYSMGR_EMAC1_PTP_REF_SEL_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC1_PTP_REF_SEL register field. */
#define ALT_SYSMGR_EMAC1_PTP_REF_SEL_MSB        8
/* The width in bits of the ALT_SYSMGR_EMAC1_PTP_REF_SEL register field. */
#define ALT_SYSMGR_EMAC1_PTP_REF_SEL_WIDTH      1
/* The mask used to set the ALT_SYSMGR_EMAC1_PTP_REF_SEL register field value. */
#define ALT_SYSMGR_EMAC1_PTP_REF_SEL_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_EMAC1_PTP_REF_SEL register field value. */
#define ALT_SYSMGR_EMAC1_PTP_REF_SEL_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_EMAC1_PTP_REF_SEL register field. */
#define ALT_SYSMGR_EMAC1_PTP_REF_SEL_RESET      0x0
/* Extracts the ALT_SYSMGR_EMAC1_PTP_REF_SEL field value from a register. */
#define ALT_SYSMGR_EMAC1_PTP_REF_SEL_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_EMAC1_PTP_REF_SEL register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC1_PTP_REF_SEL_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : app_clk_sel
 * 
 * Selects the source of the Application clock for the datapath to either l4_mp_clk
 * for normal Baum operation or to f2s_ap_clk if the switch interface is enabled to
 * the FPGA fabric.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description
 * :------------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC1_APP_CLK_SEL_E_L4_MP_CLK  | 0x0   |            
 *  ALT_SYSMGR_EMAC1_APP_CLK_SEL_E_F2S_AP_CLK | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_APP_CLK_SEL
 * 
 */
#define ALT_SYSMGR_EMAC1_APP_CLK_SEL_E_L4_MP_CLK    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_APP_CLK_SEL
 * 
 */
#define ALT_SYSMGR_EMAC1_APP_CLK_SEL_E_F2S_AP_CLK   0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC1_APP_CLK_SEL register field. */
#define ALT_SYSMGR_EMAC1_APP_CLK_SEL_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC1_APP_CLK_SEL register field. */
#define ALT_SYSMGR_EMAC1_APP_CLK_SEL_MSB        12
/* The width in bits of the ALT_SYSMGR_EMAC1_APP_CLK_SEL register field. */
#define ALT_SYSMGR_EMAC1_APP_CLK_SEL_WIDTH      1
/* The mask used to set the ALT_SYSMGR_EMAC1_APP_CLK_SEL register field value. */
#define ALT_SYSMGR_EMAC1_APP_CLK_SEL_SET_MSK    0x00001000
/* The mask used to clear the ALT_SYSMGR_EMAC1_APP_CLK_SEL register field value. */
#define ALT_SYSMGR_EMAC1_APP_CLK_SEL_CLR_MSK    0xffffefff
/* The reset value of the ALT_SYSMGR_EMAC1_APP_CLK_SEL register field. */
#define ALT_SYSMGR_EMAC1_APP_CLK_SEL_RESET      0x0
/* Extracts the ALT_SYSMGR_EMAC1_APP_CLK_SEL field value from a register. */
#define ALT_SYSMGR_EMAC1_APP_CLK_SEL_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SYSMGR_EMAC1_APP_CLK_SEL register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC1_APP_CLK_SEL_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : arcache
 * 
 * Specifies the values of the 2 EMAC ARCACHE signals.
 * 
 * The field array index corresponds to the EMAC index.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description
 * :------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC1_ARCACHE_E_NONCACHE_NONBUFF     | 0x0   |            
 *  ALT_SYSMGR_EMAC1_ARCACHE_E_BUFF                 | 0x1   |            
 *  ALT_SYSMGR_EMAC1_ARCACHE_E_CACHE_NONALLOC       | 0x2   |            
 *  ALT_SYSMGR_EMAC1_ARCACHE_E_CACHE_BUFF_NONALLOC  | 0x3   |            
 *  ALT_SYSMGR_EMAC1_ARCACHE_E_RSVD1                | 0x4   |            
 *  ALT_SYSMGR_EMAC1_ARCACHE_E_RSVD2                | 0x5   |            
 *  ALT_SYSMGR_EMAC1_ARCACHE_E_CACHE_WRTHRU_RDALLOC | 0x6   |            
 *  ALT_SYSMGR_EMAC1_ARCACHE_E_CACHE_WRBACK_RDALLOC | 0x7   |            
 *  ALT_SYSMGR_EMAC1_ARCACHE_E_RSVD3                | 0x8   |            
 *  ALT_SYSMGR_EMAC1_ARCACHE_E_RSVD4                | 0x9   |            
 *  ALT_SYSMGR_EMAC1_ARCACHE_E_CACHE_WRTHRU_WRALLOC | 0xa   |            
 *  ALT_SYSMGR_EMAC1_ARCACHE_E_CACHE_WRBACK_WRALLOC | 0xb   |            
 *  ALT_SYSMGR_EMAC1_ARCACHE_E_RSVD5                | 0xc   |            
 *  ALT_SYSMGR_EMAC1_ARCACHE_E_RSVD6                | 0xd   |            
 *  ALT_SYSMGR_EMAC1_ARCACHE_E_CACHE_WRTHRU_ALLOC   | 0xe   |            
 *  ALT_SYSMGR_EMAC1_ARCACHE_E_CACHE_WRBACK_ALLOC   | 0xf   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_ARCACHE_E_NONCACHE_NONBUFF     0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_ARCACHE_E_BUFF                 0x1
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_ARCACHE_E_CACHE_NONALLOC       0x2
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_ARCACHE_E_CACHE_BUFF_NONALLOC  0x3
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_ARCACHE_E_RSVD1                0x4
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_ARCACHE_E_RSVD2                0x5
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_ARCACHE_E_CACHE_WRTHRU_RDALLOC 0x6
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_ARCACHE_E_CACHE_WRBACK_RDALLOC 0x7
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_ARCACHE_E_RSVD3                0x8
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_ARCACHE_E_RSVD4                0x9
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_ARCACHE_E_CACHE_WRTHRU_WRALLOC 0xa
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_ARCACHE_E_CACHE_WRBACK_WRALLOC 0xb
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_ARCACHE_E_RSVD5                0xc
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_ARCACHE_E_RSVD6                0xd
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_ARCACHE_E_CACHE_WRTHRU_ALLOC   0xe
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_ARCACHE_E_CACHE_WRBACK_ALLOC   0xf

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC1_ARCACHE register field. */
#define ALT_SYSMGR_EMAC1_ARCACHE_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC1_ARCACHE register field. */
#define ALT_SYSMGR_EMAC1_ARCACHE_MSB        19
/* The width in bits of the ALT_SYSMGR_EMAC1_ARCACHE register field. */
#define ALT_SYSMGR_EMAC1_ARCACHE_WIDTH      4
/* The mask used to set the ALT_SYSMGR_EMAC1_ARCACHE register field value. */
#define ALT_SYSMGR_EMAC1_ARCACHE_SET_MSK    0x000f0000
/* The mask used to clear the ALT_SYSMGR_EMAC1_ARCACHE register field value. */
#define ALT_SYSMGR_EMAC1_ARCACHE_CLR_MSK    0xfff0ffff
/* The reset value of the ALT_SYSMGR_EMAC1_ARCACHE register field. */
#define ALT_SYSMGR_EMAC1_ARCACHE_RESET      0x0
/* Extracts the ALT_SYSMGR_EMAC1_ARCACHE field value from a register. */
#define ALT_SYSMGR_EMAC1_ARCACHE_GET(value) (((value) & 0x000f0000) >> 16)
/* Produces a ALT_SYSMGR_EMAC1_ARCACHE register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC1_ARCACHE_SET(value) (((value) << 16) & 0x000f0000)

/*
 * Field : awcache
 * 
 * Specifies the values of the 2 EMAC AWCACHE signals.
 * 
 * The field array index corresponds to the EMAC index.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description
 * :------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC1_AWCACHE_E_NONCACHE_NONBUFF     | 0x0   |            
 *  ALT_SYSMGR_EMAC1_AWCACHE_E_BUFF                 | 0x1   |            
 *  ALT_SYSMGR_EMAC1_AWCACHE_E_CACHE_NONALLOC       | 0x2   |            
 *  ALT_SYSMGR_EMAC1_AWCACHE_E_CACHE_BUFF_NONALLOC  | 0x3   |            
 *  ALT_SYSMGR_EMAC1_AWCACHE_E_RSVD1                | 0x4   |            
 *  ALT_SYSMGR_EMAC1_AWCACHE_E_RSVD2                | 0x5   |            
 *  ALT_SYSMGR_EMAC1_AWCACHE_E_CACHE_WRTHRU_RDALLOC | 0x6   |            
 *  ALT_SYSMGR_EMAC1_AWCACHE_E_CACHE_WRBACK_RDALLOC | 0x7   |            
 *  ALT_SYSMGR_EMAC1_AWCACHE_E_RSVD3                | 0x8   |            
 *  ALT_SYSMGR_EMAC1_AWCACHE_E_RSVD4                | 0x9   |            
 *  ALT_SYSMGR_EMAC1_AWCACHE_E_CACHE_WRTHRU_WRALLOC | 0xa   |            
 *  ALT_SYSMGR_EMAC1_AWCACHE_E_CACHE_WRBACK_WRALLOC | 0xb   |            
 *  ALT_SYSMGR_EMAC1_AWCACHE_E_RSVD5                | 0xc   |            
 *  ALT_SYSMGR_EMAC1_AWCACHE_E_RSVD6                | 0xd   |            
 *  ALT_SYSMGR_EMAC1_AWCACHE_E_CACHE_WRTHRU_ALLOC   | 0xe   |            
 *  ALT_SYSMGR_EMAC1_AWCACHE_E_CACHE_WRBACK_ALLOC   | 0xf   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_AWCACHE_E_NONCACHE_NONBUFF     0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_AWCACHE_E_BUFF                 0x1
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_AWCACHE_E_CACHE_NONALLOC       0x2
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_AWCACHE_E_CACHE_BUFF_NONALLOC  0x3
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_AWCACHE_E_RSVD1                0x4
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_AWCACHE_E_RSVD2                0x5
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_AWCACHE_E_CACHE_WRTHRU_RDALLOC 0x6
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_AWCACHE_E_CACHE_WRBACK_RDALLOC 0x7
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_AWCACHE_E_RSVD3                0x8
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_AWCACHE_E_RSVD4                0x9
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_AWCACHE_E_CACHE_WRTHRU_WRALLOC 0xa
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_AWCACHE_E_CACHE_WRBACK_WRALLOC 0xb
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_AWCACHE_E_RSVD5                0xc
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_AWCACHE_E_RSVD6                0xd
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_AWCACHE_E_CACHE_WRTHRU_ALLOC   0xe
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC1_AWCACHE_E_CACHE_WRBACK_ALLOC   0xf

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC1_AWCACHE register field. */
#define ALT_SYSMGR_EMAC1_AWCACHE_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC1_AWCACHE register field. */
#define ALT_SYSMGR_EMAC1_AWCACHE_MSB        23
/* The width in bits of the ALT_SYSMGR_EMAC1_AWCACHE register field. */
#define ALT_SYSMGR_EMAC1_AWCACHE_WIDTH      4
/* The mask used to set the ALT_SYSMGR_EMAC1_AWCACHE register field value. */
#define ALT_SYSMGR_EMAC1_AWCACHE_SET_MSK    0x00f00000
/* The mask used to clear the ALT_SYSMGR_EMAC1_AWCACHE register field value. */
#define ALT_SYSMGR_EMAC1_AWCACHE_CLR_MSK    0xff0fffff
/* The reset value of the ALT_SYSMGR_EMAC1_AWCACHE register field. */
#define ALT_SYSMGR_EMAC1_AWCACHE_RESET      0x0
/* Extracts the ALT_SYSMGR_EMAC1_AWCACHE field value from a register. */
#define ALT_SYSMGR_EMAC1_AWCACHE_GET(value) (((value) & 0x00f00000) >> 20)
/* Produces a ALT_SYSMGR_EMAC1_AWCACHE register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC1_AWCACHE_SET(value) (((value) << 20) & 0x00f00000)

/*
 * Field : arprot
 * 
 * Specifies the values of the ARPROT signals.
 * 
 * ==========================
 * 
 * AxPROT[1]
 * 
 * LOW:  Secure Access
 * 
 * HIGH: NonSecure Access
 * 
 * ==========================
 * 
 * AxPROT[0]
 * 
 * LOW:  Normal Access
 * 
 * HIGH: Privileged Access
 * 
 * ==========================
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                           | Value | Description
 * :-----------------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC1_ARPROT_E_SECURE_NORMAL        | 0x0   |            
 *  ALT_SYSMGR_EMAC1_ARPROT_E_SECURE_PRIVILEGED    | 0x1   |            
 *  ALT_SYSMGR_EMAC1_ARPROT_E_NONSECURE_NORMAL     | 0x2   |            
 *  ALT_SYSMGR_EMAC1_ARPROT_E_NONSECURE_PRIVILEGED | 0x3   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_ARPROT
 * 
 * Secure Normal(non-privileged) access
 */
#define ALT_SYSMGR_EMAC1_ARPROT_E_SECURE_NORMAL         0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_ARPROT
 * 
 * Secure Privileged access
 */
#define ALT_SYSMGR_EMAC1_ARPROT_E_SECURE_PRIVILEGED     0x1
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_ARPROT
 * 
 * Non-Secure Normal(non-privileged) access
 */
#define ALT_SYSMGR_EMAC1_ARPROT_E_NONSECURE_NORMAL      0x2
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_ARPROT
 * 
 * Non-Secure Privileged access
 */
#define ALT_SYSMGR_EMAC1_ARPROT_E_NONSECURE_PRIVILEGED  0x3

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC1_ARPROT register field. */
#define ALT_SYSMGR_EMAC1_ARPROT_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC1_ARPROT register field. */
#define ALT_SYSMGR_EMAC1_ARPROT_MSB        25
/* The width in bits of the ALT_SYSMGR_EMAC1_ARPROT register field. */
#define ALT_SYSMGR_EMAC1_ARPROT_WIDTH      2
/* The mask used to set the ALT_SYSMGR_EMAC1_ARPROT register field value. */
#define ALT_SYSMGR_EMAC1_ARPROT_SET_MSK    0x03000000
/* The mask used to clear the ALT_SYSMGR_EMAC1_ARPROT register field value. */
#define ALT_SYSMGR_EMAC1_ARPROT_CLR_MSK    0xfcffffff
/* The reset value of the ALT_SYSMGR_EMAC1_ARPROT register field. */
#define ALT_SYSMGR_EMAC1_ARPROT_RESET      0x2
/* Extracts the ALT_SYSMGR_EMAC1_ARPROT field value from a register. */
#define ALT_SYSMGR_EMAC1_ARPROT_GET(value) (((value) & 0x03000000) >> 24)
/* Produces a ALT_SYSMGR_EMAC1_ARPROT register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC1_ARPROT_SET(value) (((value) << 24) & 0x03000000)

/*
 * Field : awprot
 * 
 * Specifies the values of the 2 EMAC AWCACHE signals.
 * 
 * ==========================
 * 
 * AxPROT[1]
 * 
 * LOW:  Secure Access
 * 
 * HIGH: NonSecure Access
 * 
 * ==========================
 * 
 * AxPROT[0]
 * 
 * LOW:  Normal Access
 * 
 * HIGH: Privileged Access
 * 
 * ==========================
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                           | Value | Description
 * :-----------------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC1_AWPROT_E_SECURE_NORMAL        | 0x0   |            
 *  ALT_SYSMGR_EMAC1_AWPROT_E_SECURE_PRIVILEGED    | 0x1   |            
 *  ALT_SYSMGR_EMAC1_AWPROT_E_NONSECURE_NORMAL     | 0x2   |            
 *  ALT_SYSMGR_EMAC1_AWPROT_E_NONSECURE_PRIVILEGED | 0x3   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_AWPROT
 * 
 * Secure Normal(non-privileged) access
 */
#define ALT_SYSMGR_EMAC1_AWPROT_E_SECURE_NORMAL         0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_AWPROT
 * 
 * Secure Privileged access
 */
#define ALT_SYSMGR_EMAC1_AWPROT_E_SECURE_PRIVILEGED     0x1
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_AWPROT
 * 
 * Non-Secure Normal(non-privileged) access
 */
#define ALT_SYSMGR_EMAC1_AWPROT_E_NONSECURE_NORMAL      0x2
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_AWPROT
 * 
 * Non-Secure Privileged access
 */
#define ALT_SYSMGR_EMAC1_AWPROT_E_NONSECURE_PRIVILEGED  0x3

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC1_AWPROT register field. */
#define ALT_SYSMGR_EMAC1_AWPROT_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC1_AWPROT register field. */
#define ALT_SYSMGR_EMAC1_AWPROT_MSB        28
/* The width in bits of the ALT_SYSMGR_EMAC1_AWPROT register field. */
#define ALT_SYSMGR_EMAC1_AWPROT_WIDTH      2
/* The mask used to set the ALT_SYSMGR_EMAC1_AWPROT register field value. */
#define ALT_SYSMGR_EMAC1_AWPROT_SET_MSK    0x18000000
/* The mask used to clear the ALT_SYSMGR_EMAC1_AWPROT register field value. */
#define ALT_SYSMGR_EMAC1_AWPROT_CLR_MSK    0xe7ffffff
/* The reset value of the ALT_SYSMGR_EMAC1_AWPROT register field. */
#define ALT_SYSMGR_EMAC1_AWPROT_RESET      0x2
/* Extracts the ALT_SYSMGR_EMAC1_AWPROT field value from a register. */
#define ALT_SYSMGR_EMAC1_AWPROT_GET(value) (((value) & 0x18000000) >> 27)
/* Produces a ALT_SYSMGR_EMAC1_AWPROT register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC1_AWPROT_SET(value) (((value) << 27) & 0x18000000)

/*
 * Field : sbd_data_endianness
 * 
 * Specifies the endianness of the EMAC DMA transfers.
 * 
 * The field array index corresponds to the EMAC index.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                 | Value | Description
 * :-----------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC1_SBD_DATA_ENDIANNESS_E_LITTLE_ENDIAN | 0x0   |            
 *  ALT_SYSMGR_EMAC1_SBD_DATA_ENDIANNESS_E_BIG_ENDIAN    | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_SBD_DATA_ENDIANNESS
 * 
 */
#define ALT_SYSMGR_EMAC1_SBD_DATA_ENDIANNESS_E_LITTLE_ENDIAN    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC1_SBD_DATA_ENDIANNESS
 * 
 */
#define ALT_SYSMGR_EMAC1_SBD_DATA_ENDIANNESS_E_BIG_ENDIAN       0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC1_SBD_DATA_ENDIANNESS register field. */
#define ALT_SYSMGR_EMAC1_SBD_DATA_ENDIANNESS_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC1_SBD_DATA_ENDIANNESS register field. */
#define ALT_SYSMGR_EMAC1_SBD_DATA_ENDIANNESS_MSB        30
/* The width in bits of the ALT_SYSMGR_EMAC1_SBD_DATA_ENDIANNESS register field. */
#define ALT_SYSMGR_EMAC1_SBD_DATA_ENDIANNESS_WIDTH      1
/* The mask used to set the ALT_SYSMGR_EMAC1_SBD_DATA_ENDIANNESS register field value. */
#define ALT_SYSMGR_EMAC1_SBD_DATA_ENDIANNESS_SET_MSK    0x40000000
/* The mask used to clear the ALT_SYSMGR_EMAC1_SBD_DATA_ENDIANNESS register field value. */
#define ALT_SYSMGR_EMAC1_SBD_DATA_ENDIANNESS_CLR_MSK    0xbfffffff
/* The reset value of the ALT_SYSMGR_EMAC1_SBD_DATA_ENDIANNESS register field. */
#define ALT_SYSMGR_EMAC1_SBD_DATA_ENDIANNESS_RESET      0x0
/* Extracts the ALT_SYSMGR_EMAC1_SBD_DATA_ENDIANNESS field value from a register. */
#define ALT_SYSMGR_EMAC1_SBD_DATA_ENDIANNESS_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_SYSMGR_EMAC1_SBD_DATA_ENDIANNESS register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC1_SBD_DATA_ENDIANNESS_SET(value) (((value) << 30) & 0x40000000)

/*
 * Field : axi_disable
 * 
 * AXI Disable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC1_AXI_DIS register field. */
#define ALT_SYSMGR_EMAC1_AXI_DIS_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC1_AXI_DIS register field. */
#define ALT_SYSMGR_EMAC1_AXI_DIS_MSB        31
/* The width in bits of the ALT_SYSMGR_EMAC1_AXI_DIS register field. */
#define ALT_SYSMGR_EMAC1_AXI_DIS_WIDTH      1
/* The mask used to set the ALT_SYSMGR_EMAC1_AXI_DIS register field value. */
#define ALT_SYSMGR_EMAC1_AXI_DIS_SET_MSK    0x80000000
/* The mask used to clear the ALT_SYSMGR_EMAC1_AXI_DIS register field value. */
#define ALT_SYSMGR_EMAC1_AXI_DIS_CLR_MSK    0x7fffffff
/* The reset value of the ALT_SYSMGR_EMAC1_AXI_DIS register field. */
#define ALT_SYSMGR_EMAC1_AXI_DIS_RESET      0x0
/* Extracts the ALT_SYSMGR_EMAC1_AXI_DIS field value from a register. */
#define ALT_SYSMGR_EMAC1_AXI_DIS_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_SYSMGR_EMAC1_AXI_DIS register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC1_AXI_DIS_SET(value) (((value) << 31) & 0x80000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_EMAC1.
 */
struct ALT_SYSMGR_EMAC1_s
{
    uint32_t  phy_intf_sel        :  2;  /* ALT_SYSMGR_EMAC1_PHY_INTF_SEL */
    uint32_t                      :  6;  /* *UNDEFINED* */
    uint32_t  ptp_ref_sel         :  1;  /* ALT_SYSMGR_EMAC1_PTP_REF_SEL */
    uint32_t                      :  3;  /* *UNDEFINED* */
    uint32_t  app_clk_sel         :  1;  /* ALT_SYSMGR_EMAC1_APP_CLK_SEL */
    uint32_t                      :  3;  /* *UNDEFINED* */
    uint32_t  arcache             :  4;  /* ALT_SYSMGR_EMAC1_ARCACHE */
    uint32_t  awcache             :  4;  /* ALT_SYSMGR_EMAC1_AWCACHE */
    uint32_t  arprot              :  2;  /* ALT_SYSMGR_EMAC1_ARPROT */
    uint32_t                      :  1;  /* *UNDEFINED* */
    uint32_t  awprot              :  2;  /* ALT_SYSMGR_EMAC1_AWPROT */
    uint32_t                      :  1;  /* *UNDEFINED* */
    uint32_t  sbd_data_endianness :  1;  /* ALT_SYSMGR_EMAC1_SBD_DATA_ENDIANNESS */
    uint32_t  axi_disable         :  1;  /* ALT_SYSMGR_EMAC1_AXI_DIS */
};

/* The typedef declaration for register ALT_SYSMGR_EMAC1. */
typedef volatile struct ALT_SYSMGR_EMAC1_s  ALT_SYSMGR_EMAC1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_EMAC1 register. */
#define ALT_SYSMGR_EMAC1_RESET       0x12000003
/* The byte offset of the ALT_SYSMGR_EMAC1 register from the beginning of the component. */
#define ALT_SYSMGR_EMAC1_OFST        0x48

/*
 * Register : Control Register - emac2
 * 
 * Registers used by the EMAC. All fields are reset by a cold or warm reset.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                         
 * :--------|:-------|:------|:-------------------------------------
 *  [1:0]   | RW     | 0x3   | ALT_SYSMGR_EMAC2_PHY_INTF_SEL       
 *  [7:2]   | ???    | 0x0   | *UNDEFINED*                         
 *  [8]     | RW     | 0x0   | ALT_SYSMGR_EMAC2_PTP_REF_SEL        
 *  [11:9]  | ???    | 0x0   | *UNDEFINED*                         
 *  [12]    | RW     | 0x0   | ALT_SYSMGR_EMAC2_APP_CLK_SEL        
 *  [15:13] | ???    | 0x0   | *UNDEFINED*                         
 *  [19:16] | RW     | 0x0   | ALT_SYSMGR_EMAC2_ARCACHE            
 *  [23:20] | RW     | 0x0   | ALT_SYSMGR_EMAC2_AWCACHE            
 *  [25:24] | RW     | 0x2   | ALT_SYSMGR_EMAC2_ARPROT             
 *  [26]    | ???    | 0x0   | *UNDEFINED*                         
 *  [28:27] | RW     | 0x2   | ALT_SYSMGR_EMAC2_AWPROT             
 *  [29]    | ???    | 0x0   | *UNDEFINED*                         
 *  [30]    | RW     | 0x0   | ALT_SYSMGR_EMAC2_SBD_DATA_ENDIANNESS
 *  [31]    | RW     | 0x0   | ALT_SYSMGR_EMAC2_AXI_DIS            
 * 
 */
/*
 * Field : phy_intf_sel
 * 
 * PHY Interface Select
 * 
 * Field to select "Out of Reset", GMII (or MII), RGMII or RMII as the PHY
 * interface.  Note, the MAC speed is an output of Synopsys IP.    So the System
 * Manager PHY Select combined with MAC speed from the IP determine the clock/PHY
 * configuration.  "Out of Reset" mode implies that the MAC RX and TX internal
 * clocks use the Clock Manager reference rather than depending on the PHY to have
 * active clocks.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description
 * :-----------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC2_PHY_INTF_SEL_E_GMII_MII | 0x0   |            
 *  ALT_SYSMGR_EMAC2_PHY_INTF_SEL_E_RGMII    | 0x1   |            
 *  ALT_SYSMGR_EMAC2_PHY_INTF_SEL_E_RMII     | 0x2   |            
 *  ALT_SYSMGR_EMAC2_PHY_INTF_SEL_E_RST      | 0x3   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_PHY_INTF_SEL
 * 
 */
#define ALT_SYSMGR_EMAC2_PHY_INTF_SEL_E_GMII_MII    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_PHY_INTF_SEL
 * 
 */
#define ALT_SYSMGR_EMAC2_PHY_INTF_SEL_E_RGMII       0x1
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_PHY_INTF_SEL
 * 
 */
#define ALT_SYSMGR_EMAC2_PHY_INTF_SEL_E_RMII        0x2
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_PHY_INTF_SEL
 * 
 */
#define ALT_SYSMGR_EMAC2_PHY_INTF_SEL_E_RST         0x3

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC2_PHY_INTF_SEL register field. */
#define ALT_SYSMGR_EMAC2_PHY_INTF_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC2_PHY_INTF_SEL register field. */
#define ALT_SYSMGR_EMAC2_PHY_INTF_SEL_MSB        1
/* The width in bits of the ALT_SYSMGR_EMAC2_PHY_INTF_SEL register field. */
#define ALT_SYSMGR_EMAC2_PHY_INTF_SEL_WIDTH      2
/* The mask used to set the ALT_SYSMGR_EMAC2_PHY_INTF_SEL register field value. */
#define ALT_SYSMGR_EMAC2_PHY_INTF_SEL_SET_MSK    0x00000003
/* The mask used to clear the ALT_SYSMGR_EMAC2_PHY_INTF_SEL register field value. */
#define ALT_SYSMGR_EMAC2_PHY_INTF_SEL_CLR_MSK    0xfffffffc
/* The reset value of the ALT_SYSMGR_EMAC2_PHY_INTF_SEL register field. */
#define ALT_SYSMGR_EMAC2_PHY_INTF_SEL_RESET      0x3
/* Extracts the ALT_SYSMGR_EMAC2_PHY_INTF_SEL field value from a register. */
#define ALT_SYSMGR_EMAC2_PHY_INTF_SEL_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_SYSMGR_EMAC2_PHY_INTF_SEL register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC2_PHY_INTF_SEL_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : ptp_ref_sel
 * 
 * This field selects if the Timestamp reference is internally or externally
 * generated.  EMAC0 may be the master to generate the timestamp for EMAC1 and
 * EMAC2.   EMAC0 must be set to Internal Timestamp.   EMAC1/2 may be set to either
 * Internal or External.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC2_PTP_REF_SEL_E_INTERNAL | 0x0   |            
 *  ALT_SYSMGR_EMAC2_PTP_REF_SEL_E_EXTERNAL | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_PTP_REF_SEL
 * 
 */
#define ALT_SYSMGR_EMAC2_PTP_REF_SEL_E_INTERNAL 0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_PTP_REF_SEL
 * 
 */
#define ALT_SYSMGR_EMAC2_PTP_REF_SEL_E_EXTERNAL 0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC2_PTP_REF_SEL register field. */
#define ALT_SYSMGR_EMAC2_PTP_REF_SEL_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC2_PTP_REF_SEL register field. */
#define ALT_SYSMGR_EMAC2_PTP_REF_SEL_MSB        8
/* The width in bits of the ALT_SYSMGR_EMAC2_PTP_REF_SEL register field. */
#define ALT_SYSMGR_EMAC2_PTP_REF_SEL_WIDTH      1
/* The mask used to set the ALT_SYSMGR_EMAC2_PTP_REF_SEL register field value. */
#define ALT_SYSMGR_EMAC2_PTP_REF_SEL_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_EMAC2_PTP_REF_SEL register field value. */
#define ALT_SYSMGR_EMAC2_PTP_REF_SEL_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_EMAC2_PTP_REF_SEL register field. */
#define ALT_SYSMGR_EMAC2_PTP_REF_SEL_RESET      0x0
/* Extracts the ALT_SYSMGR_EMAC2_PTP_REF_SEL field value from a register. */
#define ALT_SYSMGR_EMAC2_PTP_REF_SEL_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_EMAC2_PTP_REF_SEL register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC2_PTP_REF_SEL_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : app_clk_sel
 * 
 * Selects the source of the Application clock for the datapath to either l4_mp_clk
 * for normal Baum operation or to f2s_ap_clk if the switch interface is enabled to
 * the FPGA fabric.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description
 * :------------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC2_APP_CLK_SEL_E_L4_MP_CLK  | 0x0   |            
 *  ALT_SYSMGR_EMAC2_APP_CLK_SEL_E_F2S_AP_CLK | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_APP_CLK_SEL
 * 
 */
#define ALT_SYSMGR_EMAC2_APP_CLK_SEL_E_L4_MP_CLK    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_APP_CLK_SEL
 * 
 */
#define ALT_SYSMGR_EMAC2_APP_CLK_SEL_E_F2S_AP_CLK   0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC2_APP_CLK_SEL register field. */
#define ALT_SYSMGR_EMAC2_APP_CLK_SEL_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC2_APP_CLK_SEL register field. */
#define ALT_SYSMGR_EMAC2_APP_CLK_SEL_MSB        12
/* The width in bits of the ALT_SYSMGR_EMAC2_APP_CLK_SEL register field. */
#define ALT_SYSMGR_EMAC2_APP_CLK_SEL_WIDTH      1
/* The mask used to set the ALT_SYSMGR_EMAC2_APP_CLK_SEL register field value. */
#define ALT_SYSMGR_EMAC2_APP_CLK_SEL_SET_MSK    0x00001000
/* The mask used to clear the ALT_SYSMGR_EMAC2_APP_CLK_SEL register field value. */
#define ALT_SYSMGR_EMAC2_APP_CLK_SEL_CLR_MSK    0xffffefff
/* The reset value of the ALT_SYSMGR_EMAC2_APP_CLK_SEL register field. */
#define ALT_SYSMGR_EMAC2_APP_CLK_SEL_RESET      0x0
/* Extracts the ALT_SYSMGR_EMAC2_APP_CLK_SEL field value from a register. */
#define ALT_SYSMGR_EMAC2_APP_CLK_SEL_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SYSMGR_EMAC2_APP_CLK_SEL register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC2_APP_CLK_SEL_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : arcache
 * 
 * Specifies the values of the 2 EMAC ARCACHE signals.
 * 
 * The field array index corresponds to the EMAC index.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description
 * :------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC2_ARCACHE_E_NONCACHE_NONBUFF     | 0x0   |            
 *  ALT_SYSMGR_EMAC2_ARCACHE_E_BUFF                 | 0x1   |            
 *  ALT_SYSMGR_EMAC2_ARCACHE_E_CACHE_NONALLOC       | 0x2   |            
 *  ALT_SYSMGR_EMAC2_ARCACHE_E_CACHE_BUFF_NONALLOC  | 0x3   |            
 *  ALT_SYSMGR_EMAC2_ARCACHE_E_RSVD1                | 0x4   |            
 *  ALT_SYSMGR_EMAC2_ARCACHE_E_RSVD2                | 0x5   |            
 *  ALT_SYSMGR_EMAC2_ARCACHE_E_CACHE_WRTHRU_RDALLOC | 0x6   |            
 *  ALT_SYSMGR_EMAC2_ARCACHE_E_CACHE_WRBACK_RDALLOC | 0x7   |            
 *  ALT_SYSMGR_EMAC2_ARCACHE_E_RSVD3                | 0x8   |            
 *  ALT_SYSMGR_EMAC2_ARCACHE_E_RSVD4                | 0x9   |            
 *  ALT_SYSMGR_EMAC2_ARCACHE_E_CACHE_WRTHRU_WRALLOC | 0xa   |            
 *  ALT_SYSMGR_EMAC2_ARCACHE_E_CACHE_WRBACK_WRALLOC | 0xb   |            
 *  ALT_SYSMGR_EMAC2_ARCACHE_E_RSVD5                | 0xc   |            
 *  ALT_SYSMGR_EMAC2_ARCACHE_E_RSVD6                | 0xd   |            
 *  ALT_SYSMGR_EMAC2_ARCACHE_E_CACHE_WRTHRU_ALLOC   | 0xe   |            
 *  ALT_SYSMGR_EMAC2_ARCACHE_E_CACHE_WRBACK_ALLOC   | 0xf   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_ARCACHE_E_NONCACHE_NONBUFF     0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_ARCACHE_E_BUFF                 0x1
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_ARCACHE_E_CACHE_NONALLOC       0x2
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_ARCACHE_E_CACHE_BUFF_NONALLOC  0x3
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_ARCACHE_E_RSVD1                0x4
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_ARCACHE_E_RSVD2                0x5
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_ARCACHE_E_CACHE_WRTHRU_RDALLOC 0x6
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_ARCACHE_E_CACHE_WRBACK_RDALLOC 0x7
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_ARCACHE_E_RSVD3                0x8
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_ARCACHE_E_RSVD4                0x9
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_ARCACHE_E_CACHE_WRTHRU_WRALLOC 0xa
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_ARCACHE_E_CACHE_WRBACK_WRALLOC 0xb
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_ARCACHE_E_RSVD5                0xc
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_ARCACHE_E_RSVD6                0xd
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_ARCACHE_E_CACHE_WRTHRU_ALLOC   0xe
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_ARCACHE_E_CACHE_WRBACK_ALLOC   0xf

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC2_ARCACHE register field. */
#define ALT_SYSMGR_EMAC2_ARCACHE_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC2_ARCACHE register field. */
#define ALT_SYSMGR_EMAC2_ARCACHE_MSB        19
/* The width in bits of the ALT_SYSMGR_EMAC2_ARCACHE register field. */
#define ALT_SYSMGR_EMAC2_ARCACHE_WIDTH      4
/* The mask used to set the ALT_SYSMGR_EMAC2_ARCACHE register field value. */
#define ALT_SYSMGR_EMAC2_ARCACHE_SET_MSK    0x000f0000
/* The mask used to clear the ALT_SYSMGR_EMAC2_ARCACHE register field value. */
#define ALT_SYSMGR_EMAC2_ARCACHE_CLR_MSK    0xfff0ffff
/* The reset value of the ALT_SYSMGR_EMAC2_ARCACHE register field. */
#define ALT_SYSMGR_EMAC2_ARCACHE_RESET      0x0
/* Extracts the ALT_SYSMGR_EMAC2_ARCACHE field value from a register. */
#define ALT_SYSMGR_EMAC2_ARCACHE_GET(value) (((value) & 0x000f0000) >> 16)
/* Produces a ALT_SYSMGR_EMAC2_ARCACHE register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC2_ARCACHE_SET(value) (((value) << 16) & 0x000f0000)

/*
 * Field : awcache
 * 
 * Specifies the values of the 2 EMAC AWCACHE signals.
 * 
 * The field array index corresponds to the EMAC index.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description
 * :------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC2_AWCACHE_E_NONCACHE_NONBUFF     | 0x0   |            
 *  ALT_SYSMGR_EMAC2_AWCACHE_E_BUFF                 | 0x1   |            
 *  ALT_SYSMGR_EMAC2_AWCACHE_E_CACHE_NONALLOC       | 0x2   |            
 *  ALT_SYSMGR_EMAC2_AWCACHE_E_CACHE_BUFF_NONALLOC  | 0x3   |            
 *  ALT_SYSMGR_EMAC2_AWCACHE_E_RSVD1                | 0x4   |            
 *  ALT_SYSMGR_EMAC2_AWCACHE_E_RSVD2                | 0x5   |            
 *  ALT_SYSMGR_EMAC2_AWCACHE_E_CACHE_WRTHRU_RDALLOC | 0x6   |            
 *  ALT_SYSMGR_EMAC2_AWCACHE_E_CACHE_WRBACK_RDALLOC | 0x7   |            
 *  ALT_SYSMGR_EMAC2_AWCACHE_E_RSVD3                | 0x8   |            
 *  ALT_SYSMGR_EMAC2_AWCACHE_E_RSVD4                | 0x9   |            
 *  ALT_SYSMGR_EMAC2_AWCACHE_E_CACHE_WRTHRU_WRALLOC | 0xa   |            
 *  ALT_SYSMGR_EMAC2_AWCACHE_E_CACHE_WRBACK_WRALLOC | 0xb   |            
 *  ALT_SYSMGR_EMAC2_AWCACHE_E_RSVD5                | 0xc   |            
 *  ALT_SYSMGR_EMAC2_AWCACHE_E_RSVD6                | 0xd   |            
 *  ALT_SYSMGR_EMAC2_AWCACHE_E_CACHE_WRTHRU_ALLOC   | 0xe   |            
 *  ALT_SYSMGR_EMAC2_AWCACHE_E_CACHE_WRBACK_ALLOC   | 0xf   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_AWCACHE_E_NONCACHE_NONBUFF     0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_AWCACHE_E_BUFF                 0x1
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_AWCACHE_E_CACHE_NONALLOC       0x2
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_AWCACHE_E_CACHE_BUFF_NONALLOC  0x3
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_AWCACHE_E_RSVD1                0x4
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_AWCACHE_E_RSVD2                0x5
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_AWCACHE_E_CACHE_WRTHRU_RDALLOC 0x6
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_AWCACHE_E_CACHE_WRBACK_RDALLOC 0x7
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_AWCACHE_E_RSVD3                0x8
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_AWCACHE_E_RSVD4                0x9
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_AWCACHE_E_CACHE_WRTHRU_WRALLOC 0xa
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_AWCACHE_E_CACHE_WRBACK_WRALLOC 0xb
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_AWCACHE_E_RSVD5                0xc
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_AWCACHE_E_RSVD6                0xd
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_AWCACHE_E_CACHE_WRTHRU_ALLOC   0xe
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_EMAC2_AWCACHE_E_CACHE_WRBACK_ALLOC   0xf

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC2_AWCACHE register field. */
#define ALT_SYSMGR_EMAC2_AWCACHE_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC2_AWCACHE register field. */
#define ALT_SYSMGR_EMAC2_AWCACHE_MSB        23
/* The width in bits of the ALT_SYSMGR_EMAC2_AWCACHE register field. */
#define ALT_SYSMGR_EMAC2_AWCACHE_WIDTH      4
/* The mask used to set the ALT_SYSMGR_EMAC2_AWCACHE register field value. */
#define ALT_SYSMGR_EMAC2_AWCACHE_SET_MSK    0x00f00000
/* The mask used to clear the ALT_SYSMGR_EMAC2_AWCACHE register field value. */
#define ALT_SYSMGR_EMAC2_AWCACHE_CLR_MSK    0xff0fffff
/* The reset value of the ALT_SYSMGR_EMAC2_AWCACHE register field. */
#define ALT_SYSMGR_EMAC2_AWCACHE_RESET      0x0
/* Extracts the ALT_SYSMGR_EMAC2_AWCACHE field value from a register. */
#define ALT_SYSMGR_EMAC2_AWCACHE_GET(value) (((value) & 0x00f00000) >> 20)
/* Produces a ALT_SYSMGR_EMAC2_AWCACHE register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC2_AWCACHE_SET(value) (((value) << 20) & 0x00f00000)

/*
 * Field : arprot
 * 
 * Specifies the values of the ARPROT signals.
 * 
 * ==========================
 * 
 * AxPROT[1]
 * 
 * LOW:  Secure Access
 * 
 * HIGH: NonSecure Access
 * 
 * ==========================
 * 
 * AxPROT[0]
 * 
 * LOW:  Normal Access
 * 
 * HIGH: Privileged Access
 * 
 * ==========================
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                           | Value | Description
 * :-----------------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC2_ARPROT_E_SECURE_NORMAL        | 0x0   |            
 *  ALT_SYSMGR_EMAC2_ARPROT_E_SECURE_PRIVILEGED    | 0x1   |            
 *  ALT_SYSMGR_EMAC2_ARPROT_E_NONSECURE_NORMAL     | 0x2   |            
 *  ALT_SYSMGR_EMAC2_ARPROT_E_NONSECURE_PRIVILEGED | 0x3   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_ARPROT
 * 
 * Secure Normal(non-privileged) access
 */
#define ALT_SYSMGR_EMAC2_ARPROT_E_SECURE_NORMAL         0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_ARPROT
 * 
 * Secure Privileged access
 */
#define ALT_SYSMGR_EMAC2_ARPROT_E_SECURE_PRIVILEGED     0x1
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_ARPROT
 * 
 * Non-Secure Normal(non-privileged) access
 */
#define ALT_SYSMGR_EMAC2_ARPROT_E_NONSECURE_NORMAL      0x2
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_ARPROT
 * 
 * Non-Secure Privileged access
 */
#define ALT_SYSMGR_EMAC2_ARPROT_E_NONSECURE_PRIVILEGED  0x3

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC2_ARPROT register field. */
#define ALT_SYSMGR_EMAC2_ARPROT_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC2_ARPROT register field. */
#define ALT_SYSMGR_EMAC2_ARPROT_MSB        25
/* The width in bits of the ALT_SYSMGR_EMAC2_ARPROT register field. */
#define ALT_SYSMGR_EMAC2_ARPROT_WIDTH      2
/* The mask used to set the ALT_SYSMGR_EMAC2_ARPROT register field value. */
#define ALT_SYSMGR_EMAC2_ARPROT_SET_MSK    0x03000000
/* The mask used to clear the ALT_SYSMGR_EMAC2_ARPROT register field value. */
#define ALT_SYSMGR_EMAC2_ARPROT_CLR_MSK    0xfcffffff
/* The reset value of the ALT_SYSMGR_EMAC2_ARPROT register field. */
#define ALT_SYSMGR_EMAC2_ARPROT_RESET      0x2
/* Extracts the ALT_SYSMGR_EMAC2_ARPROT field value from a register. */
#define ALT_SYSMGR_EMAC2_ARPROT_GET(value) (((value) & 0x03000000) >> 24)
/* Produces a ALT_SYSMGR_EMAC2_ARPROT register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC2_ARPROT_SET(value) (((value) << 24) & 0x03000000)

/*
 * Field : awprot
 * 
 * Specifies the values of the 2 EMAC AWCACHE signals.
 * 
 * ==========================
 * 
 * AxPROT[1]
 * 
 * LOW:  Secure Access
 * 
 * HIGH: NonSecure Access
 * 
 * ==========================
 * 
 * AxPROT[0]
 * 
 * LOW:  Normal Access
 * 
 * HIGH: Privileged Access
 * 
 * ==========================
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                           | Value | Description
 * :-----------------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC2_AWPROT_E_SECURE_NORMAL        | 0x0   |            
 *  ALT_SYSMGR_EMAC2_AWPROT_E_SECURE_PRIVILEGED    | 0x1   |            
 *  ALT_SYSMGR_EMAC2_AWPROT_E_NONSECURE_NORMAL     | 0x2   |            
 *  ALT_SYSMGR_EMAC2_AWPROT_E_NONSECURE_PRIVILEGED | 0x3   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_AWPROT
 * 
 * Secure Normal(non-privileged) access
 */
#define ALT_SYSMGR_EMAC2_AWPROT_E_SECURE_NORMAL         0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_AWPROT
 * 
 * Secure Privileged access
 */
#define ALT_SYSMGR_EMAC2_AWPROT_E_SECURE_PRIVILEGED     0x1
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_AWPROT
 * 
 * Non-Secure Normal(non-privileged) access
 */
#define ALT_SYSMGR_EMAC2_AWPROT_E_NONSECURE_NORMAL      0x2
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_AWPROT
 * 
 * Non-Secure Privileged access
 */
#define ALT_SYSMGR_EMAC2_AWPROT_E_NONSECURE_PRIVILEGED  0x3

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC2_AWPROT register field. */
#define ALT_SYSMGR_EMAC2_AWPROT_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC2_AWPROT register field. */
#define ALT_SYSMGR_EMAC2_AWPROT_MSB        28
/* The width in bits of the ALT_SYSMGR_EMAC2_AWPROT register field. */
#define ALT_SYSMGR_EMAC2_AWPROT_WIDTH      2
/* The mask used to set the ALT_SYSMGR_EMAC2_AWPROT register field value. */
#define ALT_SYSMGR_EMAC2_AWPROT_SET_MSK    0x18000000
/* The mask used to clear the ALT_SYSMGR_EMAC2_AWPROT register field value. */
#define ALT_SYSMGR_EMAC2_AWPROT_CLR_MSK    0xe7ffffff
/* The reset value of the ALT_SYSMGR_EMAC2_AWPROT register field. */
#define ALT_SYSMGR_EMAC2_AWPROT_RESET      0x2
/* Extracts the ALT_SYSMGR_EMAC2_AWPROT field value from a register. */
#define ALT_SYSMGR_EMAC2_AWPROT_GET(value) (((value) & 0x18000000) >> 27)
/* Produces a ALT_SYSMGR_EMAC2_AWPROT register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC2_AWPROT_SET(value) (((value) << 27) & 0x18000000)

/*
 * Field : sbd_data_endianness
 * 
 * Specifies the endianness of the EMAC DMA transfers.
 * 
 * The field array index corresponds to the EMAC index.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                 | Value | Description
 * :-----------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_EMAC2_SBD_DATA_ENDIANNESS_E_LITTLE_ENDIAN | 0x0   |            
 *  ALT_SYSMGR_EMAC2_SBD_DATA_ENDIANNESS_E_BIG_ENDIAN    | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_SBD_DATA_ENDIANNESS
 * 
 */
#define ALT_SYSMGR_EMAC2_SBD_DATA_ENDIANNESS_E_LITTLE_ENDIAN    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_EMAC2_SBD_DATA_ENDIANNESS
 * 
 */
#define ALT_SYSMGR_EMAC2_SBD_DATA_ENDIANNESS_E_BIG_ENDIAN       0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC2_SBD_DATA_ENDIANNESS register field. */
#define ALT_SYSMGR_EMAC2_SBD_DATA_ENDIANNESS_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC2_SBD_DATA_ENDIANNESS register field. */
#define ALT_SYSMGR_EMAC2_SBD_DATA_ENDIANNESS_MSB        30
/* The width in bits of the ALT_SYSMGR_EMAC2_SBD_DATA_ENDIANNESS register field. */
#define ALT_SYSMGR_EMAC2_SBD_DATA_ENDIANNESS_WIDTH      1
/* The mask used to set the ALT_SYSMGR_EMAC2_SBD_DATA_ENDIANNESS register field value. */
#define ALT_SYSMGR_EMAC2_SBD_DATA_ENDIANNESS_SET_MSK    0x40000000
/* The mask used to clear the ALT_SYSMGR_EMAC2_SBD_DATA_ENDIANNESS register field value. */
#define ALT_SYSMGR_EMAC2_SBD_DATA_ENDIANNESS_CLR_MSK    0xbfffffff
/* The reset value of the ALT_SYSMGR_EMAC2_SBD_DATA_ENDIANNESS register field. */
#define ALT_SYSMGR_EMAC2_SBD_DATA_ENDIANNESS_RESET      0x0
/* Extracts the ALT_SYSMGR_EMAC2_SBD_DATA_ENDIANNESS field value from a register. */
#define ALT_SYSMGR_EMAC2_SBD_DATA_ENDIANNESS_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_SYSMGR_EMAC2_SBD_DATA_ENDIANNESS register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC2_SBD_DATA_ENDIANNESS_SET(value) (((value) << 30) & 0x40000000)

/*
 * Field : axi_disable
 * 
 * AXI Disable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_EMAC2_AXI_DIS register field. */
#define ALT_SYSMGR_EMAC2_AXI_DIS_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_EMAC2_AXI_DIS register field. */
#define ALT_SYSMGR_EMAC2_AXI_DIS_MSB        31
/* The width in bits of the ALT_SYSMGR_EMAC2_AXI_DIS register field. */
#define ALT_SYSMGR_EMAC2_AXI_DIS_WIDTH      1
/* The mask used to set the ALT_SYSMGR_EMAC2_AXI_DIS register field value. */
#define ALT_SYSMGR_EMAC2_AXI_DIS_SET_MSK    0x80000000
/* The mask used to clear the ALT_SYSMGR_EMAC2_AXI_DIS register field value. */
#define ALT_SYSMGR_EMAC2_AXI_DIS_CLR_MSK    0x7fffffff
/* The reset value of the ALT_SYSMGR_EMAC2_AXI_DIS register field. */
#define ALT_SYSMGR_EMAC2_AXI_DIS_RESET      0x0
/* Extracts the ALT_SYSMGR_EMAC2_AXI_DIS field value from a register. */
#define ALT_SYSMGR_EMAC2_AXI_DIS_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_SYSMGR_EMAC2_AXI_DIS register field value suitable for setting the register. */
#define ALT_SYSMGR_EMAC2_AXI_DIS_SET(value) (((value) << 31) & 0x80000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_EMAC2.
 */
struct ALT_SYSMGR_EMAC2_s
{
    uint32_t  phy_intf_sel        :  2;  /* ALT_SYSMGR_EMAC2_PHY_INTF_SEL */
    uint32_t                      :  6;  /* *UNDEFINED* */
    uint32_t  ptp_ref_sel         :  1;  /* ALT_SYSMGR_EMAC2_PTP_REF_SEL */
    uint32_t                      :  3;  /* *UNDEFINED* */
    uint32_t  app_clk_sel         :  1;  /* ALT_SYSMGR_EMAC2_APP_CLK_SEL */
    uint32_t                      :  3;  /* *UNDEFINED* */
    uint32_t  arcache             :  4;  /* ALT_SYSMGR_EMAC2_ARCACHE */
    uint32_t  awcache             :  4;  /* ALT_SYSMGR_EMAC2_AWCACHE */
    uint32_t  arprot              :  2;  /* ALT_SYSMGR_EMAC2_ARPROT */
    uint32_t                      :  1;  /* *UNDEFINED* */
    uint32_t  awprot              :  2;  /* ALT_SYSMGR_EMAC2_AWPROT */
    uint32_t                      :  1;  /* *UNDEFINED* */
    uint32_t  sbd_data_endianness :  1;  /* ALT_SYSMGR_EMAC2_SBD_DATA_ENDIANNESS */
    uint32_t  axi_disable         :  1;  /* ALT_SYSMGR_EMAC2_AXI_DIS */
};

/* The typedef declaration for register ALT_SYSMGR_EMAC2. */
typedef volatile struct ALT_SYSMGR_EMAC2_s  ALT_SYSMGR_EMAC2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_EMAC2 register. */
#define ALT_SYSMGR_EMAC2_RESET       0x12000003
/* The byte offset of the ALT_SYSMGR_EMAC2 register from the beginning of the component. */
#define ALT_SYSMGR_EMAC2_OFST        0x4c

/*
 * Register : Global Disable Register - fpgaintf_en_global
 * 
 * Used to disable all interfaces between the FPGA and HPS.
 * 
 * This register is reset only on a cold reset (ignores warm reset).
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description     
 * :-------|:-------|:------|:-----------------
 *  [0]    | RW     | 0x1   | Global Interface
 *  [31:1] | ???    | 0x0   | *UNDEFINED*     
 * 
 */
/*
 * Field : Global Interface - intf
 * 
 * Used to disable all interfaces between the FPGA and HPS. Software must ensure
 * that all interfaces between the FPGA and HPS are inactive before disabling them.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description
 * :---------------------------------------|:------|:------------
 *  ALT_SYSMGR_FPGAINTF_EN_GLOB_INTF_E_DIS | 0x0   |            
 *  ALT_SYSMGR_FPGAINTF_EN_GLOB_INTF_E_EN  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_GLOB_INTF
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_GLOB_INTF_E_DIS  0x0
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_GLOB_INTF
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_GLOB_INTF_E_EN   0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_FPGAINTF_EN_GLOB_INTF register field. */
#define ALT_SYSMGR_FPGAINTF_EN_GLOB_INTF_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_FPGAINTF_EN_GLOB_INTF register field. */
#define ALT_SYSMGR_FPGAINTF_EN_GLOB_INTF_MSB        0
/* The width in bits of the ALT_SYSMGR_FPGAINTF_EN_GLOB_INTF register field. */
#define ALT_SYSMGR_FPGAINTF_EN_GLOB_INTF_WIDTH      1
/* The mask used to set the ALT_SYSMGR_FPGAINTF_EN_GLOB_INTF register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_GLOB_INTF_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_FPGAINTF_EN_GLOB_INTF register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_GLOB_INTF_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_FPGAINTF_EN_GLOB_INTF register field. */
#define ALT_SYSMGR_FPGAINTF_EN_GLOB_INTF_RESET      0x1
/* Extracts the ALT_SYSMGR_FPGAINTF_EN_GLOB_INTF field value from a register. */
#define ALT_SYSMGR_FPGAINTF_EN_GLOB_INTF_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_FPGAINTF_EN_GLOB_INTF register field value suitable for setting the register. */
#define ALT_SYSMGR_FPGAINTF_EN_GLOB_INTF_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_FPGAINTF_EN_GLOB.
 */
struct ALT_SYSMGR_FPGAINTF_EN_GLOB_s
{
    uint32_t  intf :  1;  /* Global Interface */
    uint32_t       : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_FPGAINTF_EN_GLOB. */
typedef volatile struct ALT_SYSMGR_FPGAINTF_EN_GLOB_s  ALT_SYSMGR_FPGAINTF_EN_GLOB_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_FPGAINTF_EN_GLOB register. */
#define ALT_SYSMGR_FPGAINTF_EN_GLOB_RESET       0x00000001
/* The byte offset of the ALT_SYSMGR_FPGAINTF_EN_GLOB register from the beginning of the component. */
#define ALT_SYSMGR_FPGAINTF_EN_GLOB_OFST        0x60

/*
 * Register : FPGA interface Individual Enable Register - fpgaintf_en_0
 * 
 * Used to disable individual interfaces between the FPGA and HPS.
 * 
 * This register is reset only on a cold reset (ignores warm reset).
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset  | Description            
 * :--------|:-------|:-------|:------------------------
 *  [0]     | RW     | 0x1    | Reset Request Interface
 *  [7:1]   | ???    | 0x7f   | *UNDEFINED*            
 *  [8]     | RW     | 0x1    | CONFIG_IO Interface    
 *  [15:9]  | ???    | 0x7f   | *UNDEFINED*            
 *  [16]    | RW     | 0x1    | Boundary-Scan Interface
 *  [31:17] | ???    | 0x7fff | *UNDEFINED*            
 * 
 */
/*
 * Field : Reset Request Interface - rstreq
 * 
 * Used to disable the reset request interface. This interface allows logic in the
 * FPGA fabric to request HPS resets. This field disables the following reset
 * request signals from the FPGA fabric to HPS:[list][*]f2s_cold_rst_req - Triggers
 * a cold reset of the HPS[*]f2s_warm_rst_req - Triggers a warm reset of the
 * HPS[*]f2s_dbg_rst_req - Triggers a debug reset of the HPS[/list]
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description
 * :--------------------------------------|:------|:------------
 *  ALT_SYSMGR_FPGAINTF_EN_0_RSTREQ_E_DIS | 0x0   |            
 *  ALT_SYSMGR_FPGAINTF_EN_0_RSTREQ_E_EN  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_0_RSTREQ
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_0_RSTREQ_E_DIS   0x0
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_0_RSTREQ
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_0_RSTREQ_E_EN    0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_FPGAINTF_EN_0_RSTREQ register field. */
#define ALT_SYSMGR_FPGAINTF_EN_0_RSTREQ_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_FPGAINTF_EN_0_RSTREQ register field. */
#define ALT_SYSMGR_FPGAINTF_EN_0_RSTREQ_MSB        0
/* The width in bits of the ALT_SYSMGR_FPGAINTF_EN_0_RSTREQ register field. */
#define ALT_SYSMGR_FPGAINTF_EN_0_RSTREQ_WIDTH      1
/* The mask used to set the ALT_SYSMGR_FPGAINTF_EN_0_RSTREQ register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_0_RSTREQ_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_FPGAINTF_EN_0_RSTREQ register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_0_RSTREQ_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_FPGAINTF_EN_0_RSTREQ register field. */
#define ALT_SYSMGR_FPGAINTF_EN_0_RSTREQ_RESET      0x1
/* Extracts the ALT_SYSMGR_FPGAINTF_EN_0_RSTREQ field value from a register. */
#define ALT_SYSMGR_FPGAINTF_EN_0_RSTREQ_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_FPGAINTF_EN_0_RSTREQ register field value suitable for setting the register. */
#define ALT_SYSMGR_FPGAINTF_EN_0_RSTREQ_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : CONFIG_IO Interface - cfgio
 * 
 * Used to disable the CONFIG_IO interface. This interface allows the FPGA JTAG TAP
 * controller to execute the CONFIG_IO instruction and configure all device I/Os
 * (FPGA and HPS). This is typically done before executing boundary-scan
 * instructions. The CONFIG_IO interface must be enabled before attempting to send
 * the CONFIG_IO instruction to the FPGA JTAG TAP controller.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description
 * :-------------------------------------|:------|:------------
 *  ALT_SYSMGR_FPGAINTF_EN_0_CFGIO_E_DIS | 0x0   |            
 *  ALT_SYSMGR_FPGAINTF_EN_0_CFGIO_E_EN  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_0_CFGIO
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_0_CFGIO_E_DIS    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_0_CFGIO
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_0_CFGIO_E_EN     0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_FPGAINTF_EN_0_CFGIO register field. */
#define ALT_SYSMGR_FPGAINTF_EN_0_CFGIO_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_FPGAINTF_EN_0_CFGIO register field. */
#define ALT_SYSMGR_FPGAINTF_EN_0_CFGIO_MSB        8
/* The width in bits of the ALT_SYSMGR_FPGAINTF_EN_0_CFGIO register field. */
#define ALT_SYSMGR_FPGAINTF_EN_0_CFGIO_WIDTH      1
/* The mask used to set the ALT_SYSMGR_FPGAINTF_EN_0_CFGIO register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_0_CFGIO_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_FPGAINTF_EN_0_CFGIO register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_0_CFGIO_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_FPGAINTF_EN_0_CFGIO register field. */
#define ALT_SYSMGR_FPGAINTF_EN_0_CFGIO_RESET      0x1
/* Extracts the ALT_SYSMGR_FPGAINTF_EN_0_CFGIO field value from a register. */
#define ALT_SYSMGR_FPGAINTF_EN_0_CFGIO_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_FPGAINTF_EN_0_CFGIO register field value suitable for setting the register. */
#define ALT_SYSMGR_FPGAINTF_EN_0_CFGIO_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : Boundary-Scan Interface - bscan
 * 
 * Used to disable the boundary-scan interface. This interface allows the FPGA JTAG
 * TAP controller to execute boundary-scan instructions such as SAMPLE/PRELOAD,
 * EXTEST, and HIGHZ. The boundary-scan interface must be enabled before attempting
 * to send the boundary-scan instructions to the FPGA JTAG TAP controller.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description
 * :-------------------------------------|:------|:------------
 *  ALT_SYSMGR_FPGAINTF_EN_0_BSCAN_E_DIS | 0x0   |            
 *  ALT_SYSMGR_FPGAINTF_EN_0_BSCAN_E_EN  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_0_BSCAN
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_0_BSCAN_E_DIS    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_0_BSCAN
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_0_BSCAN_E_EN     0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_FPGAINTF_EN_0_BSCAN register field. */
#define ALT_SYSMGR_FPGAINTF_EN_0_BSCAN_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_FPGAINTF_EN_0_BSCAN register field. */
#define ALT_SYSMGR_FPGAINTF_EN_0_BSCAN_MSB        16
/* The width in bits of the ALT_SYSMGR_FPGAINTF_EN_0_BSCAN register field. */
#define ALT_SYSMGR_FPGAINTF_EN_0_BSCAN_WIDTH      1
/* The mask used to set the ALT_SYSMGR_FPGAINTF_EN_0_BSCAN register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_0_BSCAN_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_FPGAINTF_EN_0_BSCAN register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_0_BSCAN_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_FPGAINTF_EN_0_BSCAN register field. */
#define ALT_SYSMGR_FPGAINTF_EN_0_BSCAN_RESET      0x1
/* Extracts the ALT_SYSMGR_FPGAINTF_EN_0_BSCAN field value from a register. */
#define ALT_SYSMGR_FPGAINTF_EN_0_BSCAN_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_FPGAINTF_EN_0_BSCAN register field value suitable for setting the register. */
#define ALT_SYSMGR_FPGAINTF_EN_0_BSCAN_SET(value) (((value) << 16) & 0x00010000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_FPGAINTF_EN_0.
 */
struct ALT_SYSMGR_FPGAINTF_EN_0_s
{
    uint32_t  rstreq :  1;  /* Reset Request Interface */
    uint32_t         :  7;  /* *UNDEFINED* */
    uint32_t  cfgio  :  1;  /* CONFIG_IO Interface */
    uint32_t         :  7;  /* *UNDEFINED* */
    uint32_t  bscan  :  1;  /* Boundary-Scan Interface */
    uint32_t         : 15;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_FPGAINTF_EN_0. */
typedef volatile struct ALT_SYSMGR_FPGAINTF_EN_0_s  ALT_SYSMGR_FPGAINTF_EN_0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_FPGAINTF_EN_0 register. */
#define ALT_SYSMGR_FPGAINTF_EN_0_RESET       0xffffffff
/* The byte offset of the ALT_SYSMGR_FPGAINTF_EN_0 register from the beginning of the component. */
#define ALT_SYSMGR_FPGAINTF_EN_0_OFST        0x64

/*
 * Register : FPGA interface Individual Enable Register - fpgaintf_en_1
 * 
 * Used to disable individual interfaces between the FPGA and HPS.
 * 
 * This register is reset only on a cold reset (ignores warm reset).
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                  
 * :--------|:-------|:------|:------------------------------
 *  [3:0]   | ???    | 0xf   | *UNDEFINED*                  
 *  [4]     | RW     | 0x1   | Trace Interface              
 *  [7:5]   | ???    | 0x7   | *UNDEFINED*                  
 *  [8]     | RW     | 0x1   | Debug APB Interface          
 *  [15:9]  | ???    | 0x7f  | *UNDEFINED*                  
 *  [16]    | RW     | 0x1   | STM Event Interface          
 *  [23:17] | ???    | 0x7f  | *UNDEFINED*                  
 *  [24]    | RW     | 0x1   | Cross Trigger Interface (CTI)
 *  [31:25] | ???    | 0x7f  | *UNDEFINED*                  
 * 
 */
/*
 * Field : Trace Interface - trace
 * 
 * Used to disable the trace interface. This interface allows the HPS debug logic
 * to send trace data to logic in the FPGA fabric.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description
 * :-------------------------------------|:------|:------------
 *  ALT_SYSMGR_FPGAINTF_EN_1_TRACE_E_DIS | 0x0   |            
 *  ALT_SYSMGR_FPGAINTF_EN_1_TRACE_E_EN  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_1_TRACE
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_1_TRACE_E_DIS    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_1_TRACE
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_1_TRACE_E_EN     0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_FPGAINTF_EN_1_TRACE register field. */
#define ALT_SYSMGR_FPGAINTF_EN_1_TRACE_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_FPGAINTF_EN_1_TRACE register field. */
#define ALT_SYSMGR_FPGAINTF_EN_1_TRACE_MSB        4
/* The width in bits of the ALT_SYSMGR_FPGAINTF_EN_1_TRACE register field. */
#define ALT_SYSMGR_FPGAINTF_EN_1_TRACE_WIDTH      1
/* The mask used to set the ALT_SYSMGR_FPGAINTF_EN_1_TRACE register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_1_TRACE_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_FPGAINTF_EN_1_TRACE register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_1_TRACE_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_FPGAINTF_EN_1_TRACE register field. */
#define ALT_SYSMGR_FPGAINTF_EN_1_TRACE_RESET      0x1
/* Extracts the ALT_SYSMGR_FPGAINTF_EN_1_TRACE field value from a register. */
#define ALT_SYSMGR_FPGAINTF_EN_1_TRACE_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_FPGAINTF_EN_1_TRACE register field value suitable for setting the register. */
#define ALT_SYSMGR_FPGAINTF_EN_1_TRACE_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : Debug APB Interface - dbgapb
 * 
 * Used to disable the debug APB interface. This interface allows the HPS debug
 * logic to communicate with debug APB slaves in the FPGA fabric.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description
 * :--------------------------------------|:------|:------------
 *  ALT_SYSMGR_FPGAINTF_EN_1_DBGAPB_E_DIS | 0x0   |            
 *  ALT_SYSMGR_FPGAINTF_EN_1_DBGAPB_E_EN  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_1_DBGAPB
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_1_DBGAPB_E_DIS   0x0
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_1_DBGAPB
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_1_DBGAPB_E_EN    0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_FPGAINTF_EN_1_DBGAPB register field. */
#define ALT_SYSMGR_FPGAINTF_EN_1_DBGAPB_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_FPGAINTF_EN_1_DBGAPB register field. */
#define ALT_SYSMGR_FPGAINTF_EN_1_DBGAPB_MSB        8
/* The width in bits of the ALT_SYSMGR_FPGAINTF_EN_1_DBGAPB register field. */
#define ALT_SYSMGR_FPGAINTF_EN_1_DBGAPB_WIDTH      1
/* The mask used to set the ALT_SYSMGR_FPGAINTF_EN_1_DBGAPB register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_1_DBGAPB_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_FPGAINTF_EN_1_DBGAPB register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_1_DBGAPB_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_FPGAINTF_EN_1_DBGAPB register field. */
#define ALT_SYSMGR_FPGAINTF_EN_1_DBGAPB_RESET      0x1
/* Extracts the ALT_SYSMGR_FPGAINTF_EN_1_DBGAPB field value from a register. */
#define ALT_SYSMGR_FPGAINTF_EN_1_DBGAPB_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_FPGAINTF_EN_1_DBGAPB register field value suitable for setting the register. */
#define ALT_SYSMGR_FPGAINTF_EN_1_DBGAPB_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : STM Event Interface - stmevent
 * 
 * Used to disable the STM event interface. This interface allows logic in the FPGA
 * fabric to trigger events to the STM debug module in the HPS.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_SYSMGR_FPGAINTF_EN_1_STMEVENT_E_DIS | 0x0   |            
 *  ALT_SYSMGR_FPGAINTF_EN_1_STMEVENT_E_EN  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_1_STMEVENT
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_1_STMEVENT_E_DIS 0x0
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_1_STMEVENT
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_1_STMEVENT_E_EN  0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_FPGAINTF_EN_1_STMEVENT register field. */
#define ALT_SYSMGR_FPGAINTF_EN_1_STMEVENT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_FPGAINTF_EN_1_STMEVENT register field. */
#define ALT_SYSMGR_FPGAINTF_EN_1_STMEVENT_MSB        16
/* The width in bits of the ALT_SYSMGR_FPGAINTF_EN_1_STMEVENT register field. */
#define ALT_SYSMGR_FPGAINTF_EN_1_STMEVENT_WIDTH      1
/* The mask used to set the ALT_SYSMGR_FPGAINTF_EN_1_STMEVENT register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_1_STMEVENT_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_FPGAINTF_EN_1_STMEVENT register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_1_STMEVENT_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_FPGAINTF_EN_1_STMEVENT register field. */
#define ALT_SYSMGR_FPGAINTF_EN_1_STMEVENT_RESET      0x1
/* Extracts the ALT_SYSMGR_FPGAINTF_EN_1_STMEVENT field value from a register. */
#define ALT_SYSMGR_FPGAINTF_EN_1_STMEVENT_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_FPGAINTF_EN_1_STMEVENT register field value suitable for setting the register. */
#define ALT_SYSMGR_FPGAINTF_EN_1_STMEVENT_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : Cross Trigger Interface (CTI) - ctmtrigger
 * 
 * Used to disable the FPGA Fabric from sending triggers to HPS debug logic.  Note
 * that this doesn't prevent the HPS debug logic from sending triggers to the FPGA
 * Fabric.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description
 * :------------------------------------------|:------|:------------
 *  ALT_SYSMGR_FPGAINTF_EN_1_CTMTRIGGER_E_DIS | 0x0   |            
 *  ALT_SYSMGR_FPGAINTF_EN_1_CTMTRIGGER_E_EN  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_1_CTMTRIGGER
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_1_CTMTRIGGER_E_DIS   0x0
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_1_CTMTRIGGER
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_1_CTMTRIGGER_E_EN    0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_FPGAINTF_EN_1_CTMTRIGGER register field. */
#define ALT_SYSMGR_FPGAINTF_EN_1_CTMTRIGGER_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_FPGAINTF_EN_1_CTMTRIGGER register field. */
#define ALT_SYSMGR_FPGAINTF_EN_1_CTMTRIGGER_MSB        24
/* The width in bits of the ALT_SYSMGR_FPGAINTF_EN_1_CTMTRIGGER register field. */
#define ALT_SYSMGR_FPGAINTF_EN_1_CTMTRIGGER_WIDTH      1
/* The mask used to set the ALT_SYSMGR_FPGAINTF_EN_1_CTMTRIGGER register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_1_CTMTRIGGER_SET_MSK    0x01000000
/* The mask used to clear the ALT_SYSMGR_FPGAINTF_EN_1_CTMTRIGGER register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_1_CTMTRIGGER_CLR_MSK    0xfeffffff
/* The reset value of the ALT_SYSMGR_FPGAINTF_EN_1_CTMTRIGGER register field. */
#define ALT_SYSMGR_FPGAINTF_EN_1_CTMTRIGGER_RESET      0x1
/* Extracts the ALT_SYSMGR_FPGAINTF_EN_1_CTMTRIGGER field value from a register. */
#define ALT_SYSMGR_FPGAINTF_EN_1_CTMTRIGGER_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_SYSMGR_FPGAINTF_EN_1_CTMTRIGGER register field value suitable for setting the register. */
#define ALT_SYSMGR_FPGAINTF_EN_1_CTMTRIGGER_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_FPGAINTF_EN_1.
 */
struct ALT_SYSMGR_FPGAINTF_EN_1_s
{
    uint32_t             :  4;  /* *UNDEFINED* */
    uint32_t  trace      :  1;  /* Trace Interface */
    uint32_t             :  3;  /* *UNDEFINED* */
    uint32_t  dbgapb     :  1;  /* Debug APB Interface */
    uint32_t             :  7;  /* *UNDEFINED* */
    uint32_t  stmevent   :  1;  /* STM Event Interface */
    uint32_t             :  7;  /* *UNDEFINED* */
    uint32_t  ctmtrigger :  1;  /* Cross Trigger Interface (CTI) */
    uint32_t             :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_FPGAINTF_EN_1. */
typedef volatile struct ALT_SYSMGR_FPGAINTF_EN_1_s  ALT_SYSMGR_FPGAINTF_EN_1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_FPGAINTF_EN_1 register. */
#define ALT_SYSMGR_FPGAINTF_EN_1_RESET       0xffffffff
/* The byte offset of the ALT_SYSMGR_FPGAINTF_EN_1 register from the beginning of the component. */
#define ALT_SYSMGR_FPGAINTF_EN_1_OFST        0x68

/*
 * Register : FPGA interface Individual Enable Register - fpgaintf_en_2
 * 
 * Used to disable individual interfaces between the FPGA and HPS.
 * 
 * This register is reset only on a cold reset (ignores warm reset).
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                 
 * :--------|:-------|:------|:-----------------------------
 *  [3:0]   | ???    | 0x0   | *UNDEFINED*                 
 *  [4]     | RW     | 0x0   | NAND Flash Controller Module
 *  [7:5]   | ???    | 0x0   | *UNDEFINED*                 
 *  [8]     | RW     | 0x0   | SD/MMC Controller Module    
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*                 
 *  [16]    | RW     | 0x0   | SPI Master Module           
 *  [23:17] | ???    | 0x0   | *UNDEFINED*                 
 *  [24]    | RW     | 0x0   | SPI Master Module           
 *  [31:25] | ???    | 0x0   | *UNDEFINED*                 
 * 
 */
/*
 * Field : NAND Flash Controller Module - nand
 * 
 * Used to disable signals from the FPGA fabric to the NAND flash controller module
 * that could potentially interfere with its normal operation.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                | Value | Description
 * :------------------------------------|:------|:------------
 *  ALT_SYSMGR_FPGAINTF_EN_2_NAND_E_DIS | 0x0   |            
 *  ALT_SYSMGR_FPGAINTF_EN_2_NAND_E_EN  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_2_NAND
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_2_NAND_E_DIS 0x0
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_2_NAND
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_2_NAND_E_EN  0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_FPGAINTF_EN_2_NAND register field. */
#define ALT_SYSMGR_FPGAINTF_EN_2_NAND_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_FPGAINTF_EN_2_NAND register field. */
#define ALT_SYSMGR_FPGAINTF_EN_2_NAND_MSB        4
/* The width in bits of the ALT_SYSMGR_FPGAINTF_EN_2_NAND register field. */
#define ALT_SYSMGR_FPGAINTF_EN_2_NAND_WIDTH      1
/* The mask used to set the ALT_SYSMGR_FPGAINTF_EN_2_NAND register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_2_NAND_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_FPGAINTF_EN_2_NAND register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_2_NAND_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_FPGAINTF_EN_2_NAND register field. */
#define ALT_SYSMGR_FPGAINTF_EN_2_NAND_RESET      0x0
/* Extracts the ALT_SYSMGR_FPGAINTF_EN_2_NAND field value from a register. */
#define ALT_SYSMGR_FPGAINTF_EN_2_NAND_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_FPGAINTF_EN_2_NAND register field value suitable for setting the register. */
#define ALT_SYSMGR_FPGAINTF_EN_2_NAND_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : SD/MMC Controller Module - sdmmc
 * 
 * Used to disable signals from the FPGA fabric to the SD/MMC controller module
 * that could potentially interfere with its normal operation.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description
 * :-------------------------------------|:------|:------------
 *  ALT_SYSMGR_FPGAINTF_EN_2_SDMMC_E_DIS | 0x0   |            
 *  ALT_SYSMGR_FPGAINTF_EN_2_SDMMC_E_EN  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_2_SDMMC
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_2_SDMMC_E_DIS    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_2_SDMMC
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_2_SDMMC_E_EN     0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_FPGAINTF_EN_2_SDMMC register field. */
#define ALT_SYSMGR_FPGAINTF_EN_2_SDMMC_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_FPGAINTF_EN_2_SDMMC register field. */
#define ALT_SYSMGR_FPGAINTF_EN_2_SDMMC_MSB        8
/* The width in bits of the ALT_SYSMGR_FPGAINTF_EN_2_SDMMC register field. */
#define ALT_SYSMGR_FPGAINTF_EN_2_SDMMC_WIDTH      1
/* The mask used to set the ALT_SYSMGR_FPGAINTF_EN_2_SDMMC register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_2_SDMMC_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_FPGAINTF_EN_2_SDMMC register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_2_SDMMC_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_FPGAINTF_EN_2_SDMMC register field. */
#define ALT_SYSMGR_FPGAINTF_EN_2_SDMMC_RESET      0x0
/* Extracts the ALT_SYSMGR_FPGAINTF_EN_2_SDMMC field value from a register. */
#define ALT_SYSMGR_FPGAINTF_EN_2_SDMMC_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_FPGAINTF_EN_2_SDMMC register field value suitable for setting the register. */
#define ALT_SYSMGR_FPGAINTF_EN_2_SDMMC_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : SPI Master Module - spim_0
 * 
 * Used to disable signals from the FPGA fabric to the SPI master modules that
 * could potentially interfere with their normal operation.
 * 
 * The array index corresponds to the SPI master module instance.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description
 * :--------------------------------------|:------|:------------
 *  ALT_SYSMGR_FPGAINTF_EN_2_SPIM_0_E_DIS | 0x0   |            
 *  ALT_SYSMGR_FPGAINTF_EN_2_SPIM_0_E_EN  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_2_SPIM_0
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_2_SPIM_0_E_DIS   0x0
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_2_SPIM_0
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_2_SPIM_0_E_EN    0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_FPGAINTF_EN_2_SPIM_0 register field. */
#define ALT_SYSMGR_FPGAINTF_EN_2_SPIM_0_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_FPGAINTF_EN_2_SPIM_0 register field. */
#define ALT_SYSMGR_FPGAINTF_EN_2_SPIM_0_MSB        16
/* The width in bits of the ALT_SYSMGR_FPGAINTF_EN_2_SPIM_0 register field. */
#define ALT_SYSMGR_FPGAINTF_EN_2_SPIM_0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_FPGAINTF_EN_2_SPIM_0 register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_2_SPIM_0_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_FPGAINTF_EN_2_SPIM_0 register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_2_SPIM_0_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_FPGAINTF_EN_2_SPIM_0 register field. */
#define ALT_SYSMGR_FPGAINTF_EN_2_SPIM_0_RESET      0x0
/* Extracts the ALT_SYSMGR_FPGAINTF_EN_2_SPIM_0 field value from a register. */
#define ALT_SYSMGR_FPGAINTF_EN_2_SPIM_0_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_FPGAINTF_EN_2_SPIM_0 register field value suitable for setting the register. */
#define ALT_SYSMGR_FPGAINTF_EN_2_SPIM_0_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : SPI Master Module - spim_1
 * 
 * Used to disable signals from the FPGA fabric to the SPI master modules that
 * could potentially interfere with their normal operation.
 * 
 * The array index corresponds to the SPI master module instance.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description
 * :--------------------------------------|:------|:------------
 *  ALT_SYSMGR_FPGAINTF_EN_2_SPIM_1_E_DIS | 0x0   |            
 *  ALT_SYSMGR_FPGAINTF_EN_2_SPIM_1_E_EN  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_2_SPIM_1
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_2_SPIM_1_E_DIS   0x0
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_2_SPIM_1
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_2_SPIM_1_E_EN    0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_FPGAINTF_EN_2_SPIM_1 register field. */
#define ALT_SYSMGR_FPGAINTF_EN_2_SPIM_1_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_FPGAINTF_EN_2_SPIM_1 register field. */
#define ALT_SYSMGR_FPGAINTF_EN_2_SPIM_1_MSB        24
/* The width in bits of the ALT_SYSMGR_FPGAINTF_EN_2_SPIM_1 register field. */
#define ALT_SYSMGR_FPGAINTF_EN_2_SPIM_1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_FPGAINTF_EN_2_SPIM_1 register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_2_SPIM_1_SET_MSK    0x01000000
/* The mask used to clear the ALT_SYSMGR_FPGAINTF_EN_2_SPIM_1 register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_2_SPIM_1_CLR_MSK    0xfeffffff
/* The reset value of the ALT_SYSMGR_FPGAINTF_EN_2_SPIM_1 register field. */
#define ALT_SYSMGR_FPGAINTF_EN_2_SPIM_1_RESET      0x0
/* Extracts the ALT_SYSMGR_FPGAINTF_EN_2_SPIM_1 field value from a register. */
#define ALT_SYSMGR_FPGAINTF_EN_2_SPIM_1_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_SYSMGR_FPGAINTF_EN_2_SPIM_1 register field value suitable for setting the register. */
#define ALT_SYSMGR_FPGAINTF_EN_2_SPIM_1_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_FPGAINTF_EN_2.
 */
struct ALT_SYSMGR_FPGAINTF_EN_2_s
{
    uint32_t         :  4;  /* *UNDEFINED* */
    uint32_t  nand   :  1;  /* NAND Flash Controller Module */
    uint32_t         :  3;  /* *UNDEFINED* */
    uint32_t  sdmmc  :  1;  /* SD/MMC Controller Module */
    uint32_t         :  7;  /* *UNDEFINED* */
    uint32_t  spim_0 :  1;  /* SPI Master Module */
    uint32_t         :  7;  /* *UNDEFINED* */
    uint32_t  spim_1 :  1;  /* SPI Master Module */
    uint32_t         :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_FPGAINTF_EN_2. */
typedef volatile struct ALT_SYSMGR_FPGAINTF_EN_2_s  ALT_SYSMGR_FPGAINTF_EN_2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_FPGAINTF_EN_2 register. */
#define ALT_SYSMGR_FPGAINTF_EN_2_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_FPGAINTF_EN_2 register from the beginning of the component. */
#define ALT_SYSMGR_FPGAINTF_EN_2_OFST        0x6c

/*
 * Register : FPGA interface Individual Enable Register - fpgaintf_en_3
 * 
 * Used to disable individual interfaces between the FPGA and HPS.
 * 
 * This register is reset only on a cold reset (ignores warm reset).
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description
 * :--------|:-------|:------|:------------
 *  [0]     | RW     | 0x0   | EMAC Module
 *  [3:1]   | ???    | 0x0   | *UNDEFINED*
 *  [4]     | RW     | 0x0   | EMAC Module
 *  [7:5]   | ???    | 0x0   | *UNDEFINED*
 *  [8]     | RW     | 0x0   | EMAC Module
 *  [11:9]  | ???    | 0x0   | *UNDEFINED*
 *  [12]    | RW     | 0x0   | EMAC Module
 *  [15:13] | ???    | 0x0   | *UNDEFINED*
 *  [16]    | RW     | 0x0   | EMAC Module
 *  [19:17] | ???    | 0x0   | *UNDEFINED*
 *  [20]    | RW     | 0x0   | EMAC Module
 *  [31:21] | ???    | 0x0   | *UNDEFINED*
 * 
 */
/*
 * Field : EMAC Module - emac_0
 * 
 * Used to disable signals from the FPGA fabric to the EMAC modules that could
 * potentially interfere with their normal operation.
 * 
 * The array index corresponds to the EMAC module instance.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description
 * :--------------------------------------|:------|:------------
 *  ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_E_DIS | 0x0   |            
 *  ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_E_EN  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_E_DIS   0x0
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_E_EN    0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0 register field. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0 register field. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_MSB        0
/* The width in bits of the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0 register field. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0 register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0 register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0 register field. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_RESET      0x0
/* Extracts the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0 field value from a register. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0 register field value suitable for setting the register. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : EMAC Module - emac_0_switch
 * 
 * EMAC FPGA interface switch Enable
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                         | Value | Description
 * :---------------------------------------------|:------|:------------
 *  ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_SWITCH_E_DIS | 0x0   |            
 *  ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_SWITCH_E_EN  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_SWITCH
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_SWITCH_E_DIS    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_SWITCH
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_SWITCH_E_EN     0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_SWITCH register field. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_SWITCH_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_SWITCH register field. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_SWITCH_MSB        4
/* The width in bits of the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_SWITCH register field. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_SWITCH_WIDTH      1
/* The mask used to set the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_SWITCH register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_SWITCH_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_SWITCH register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_SWITCH_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_SWITCH register field. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_SWITCH_RESET      0x0
/* Extracts the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_SWITCH field value from a register. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_SWITCH_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_SWITCH register field value suitable for setting the register. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_0_SWITCH_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : EMAC Module - emac_1
 * 
 * Used to disable signals from the FPGA fabric to the EMAC modules that could
 * potentially interfere with their normal operation.
 * 
 * The array index corresponds to the EMAC module instance.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description
 * :--------------------------------------|:------|:------------
 *  ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_E_DIS | 0x0   |            
 *  ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_E_EN  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_E_DIS   0x0
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_E_EN    0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1 register field. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1 register field. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_MSB        8
/* The width in bits of the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1 register field. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1 register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1 register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1 register field. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_RESET      0x0
/* Extracts the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1 field value from a register. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1 register field value suitable for setting the register. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : EMAC Module - emac_1_switch
 * 
 * EMAC FPGA interface switch Enable
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                         | Value | Description
 * :---------------------------------------------|:------|:------------
 *  ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_SWITCH_E_DIS | 0x0   |            
 *  ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_SWITCH_E_EN  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_SWITCH
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_SWITCH_E_DIS    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_SWITCH
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_SWITCH_E_EN     0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_SWITCH register field. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_SWITCH_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_SWITCH register field. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_SWITCH_MSB        12
/* The width in bits of the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_SWITCH register field. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_SWITCH_WIDTH      1
/* The mask used to set the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_SWITCH register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_SWITCH_SET_MSK    0x00001000
/* The mask used to clear the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_SWITCH register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_SWITCH_CLR_MSK    0xffffefff
/* The reset value of the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_SWITCH register field. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_SWITCH_RESET      0x0
/* Extracts the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_SWITCH field value from a register. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_SWITCH_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_SWITCH register field value suitable for setting the register. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_1_SWITCH_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : EMAC Module - emac_2
 * 
 * Used to disable signals from the FPGA fabric to the EMAC modules that could
 * potentially interfere with their normal operation.
 * 
 * The array index corresponds to the EMAC module instance.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description
 * :--------------------------------------|:------|:------------
 *  ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_E_DIS | 0x0   |            
 *  ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_E_EN  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_E_DIS   0x0
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_E_EN    0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2 register field. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2 register field. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_MSB        16
/* The width in bits of the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2 register field. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_WIDTH      1
/* The mask used to set the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2 register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2 register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2 register field. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_RESET      0x0
/* Extracts the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2 field value from a register. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2 register field value suitable for setting the register. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : EMAC Module - emac_2_switch
 * 
 * EMAC FPGA interface switch Enable
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                         | Value | Description
 * :---------------------------------------------|:------|:------------
 *  ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_SWITCH_E_DIS | 0x0   |            
 *  ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_SWITCH_E_EN  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_SWITCH
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_SWITCH_E_DIS    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_SWITCH
 * 
 */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_SWITCH_E_EN     0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_SWITCH register field. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_SWITCH_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_SWITCH register field. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_SWITCH_MSB        20
/* The width in bits of the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_SWITCH register field. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_SWITCH_WIDTH      1
/* The mask used to set the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_SWITCH register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_SWITCH_SET_MSK    0x00100000
/* The mask used to clear the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_SWITCH register field value. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_SWITCH_CLR_MSK    0xffefffff
/* The reset value of the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_SWITCH register field. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_SWITCH_RESET      0x0
/* Extracts the ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_SWITCH field value from a register. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_SWITCH_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_SWITCH register field value suitable for setting the register. */
#define ALT_SYSMGR_FPGAINTF_EN_3_EMAC_2_SWITCH_SET(value) (((value) << 20) & 0x00100000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_FPGAINTF_EN_3.
 */
struct ALT_SYSMGR_FPGAINTF_EN_3_s
{
    uint32_t  emac_0        :  1;  /* EMAC Module */
    uint32_t                :  3;  /* *UNDEFINED* */
    uint32_t  emac_0_switch :  1;  /* EMAC Module */
    uint32_t                :  3;  /* *UNDEFINED* */
    uint32_t  emac_1        :  1;  /* EMAC Module */
    uint32_t                :  3;  /* *UNDEFINED* */
    uint32_t  emac_1_switch :  1;  /* EMAC Module */
    uint32_t                :  3;  /* *UNDEFINED* */
    uint32_t  emac_2        :  1;  /* EMAC Module */
    uint32_t                :  3;  /* *UNDEFINED* */
    uint32_t  emac_2_switch :  1;  /* EMAC Module */
    uint32_t                : 11;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_FPGAINTF_EN_3. */
typedef volatile struct ALT_SYSMGR_FPGAINTF_EN_3_s  ALT_SYSMGR_FPGAINTF_EN_3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_FPGAINTF_EN_3 register. */
#define ALT_SYSMGR_FPGAINTF_EN_3_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_FPGAINTF_EN_3 register from the beginning of the component. */
#define ALT_SYSMGR_FPGAINTF_EN_3_OFST        0x70

/*
 * Register : noc_addr_remap_value
 * 
 * Address remap register. This register drives the remap bits for the NOC.
 * 
 * This is read / write register.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [0]    | RW     | 0x0   | ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP0
 *  [1]    | RW     | 0x0   | ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP1
 *  [31:2] | ???    | 0x0   | *UNDEFINED*                           
 * 
 */
/*
 * Field : remap0
 * 
 * if this bit is 0 ROM is also mapped to base address 0x0000_0000
 * 
 * if this bit is 1 ROM is NOT available at base address 0x0000_0000
 * 
 * Note:
 * 
 * ROM is always available at base address 0xFFFC_0000
 * 
 * RAM is always available at base address 0xFFE0_0000
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP0 register field. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP0 register field. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP0_MSB        0
/* The width in bits of the ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP0 register field. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP0 register field value. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP0_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP0 register field value. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP0 register field. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP0_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP0 field value from a register. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP0 register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : remap1
 * 
 * if this bit is 0 RAM is NOT available at base address 0x0000_0000
 * 
 * if this bit is 1 RAM is also mapped to base address 0x0000_0000, as long as ROM
 * is not being mapped to the same base address because of remap0
 * 
 * Note:
 * 
 * ROM is always available at base address 0xFFFC_0000
 * 
 * RAM is always available at base address 0xFFE0_0000
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP1 register field. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP1_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP1 register field. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP1_MSB        1
/* The width in bits of the ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP1 register field. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP1 register field value. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP1_SET_MSK    0x00000002
/* The mask used to clear the ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP1 register field value. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP1_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP1 register field. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP1_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP1 field value from a register. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP1_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP1 register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP1_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_NOC_ADDR_REMAP_VALUE.
 */
struct ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_s
{
    uint32_t  remap0 :  1;  /* ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP0 */
    uint32_t  remap1 :  1;  /* ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_REMAP1 */
    uint32_t         : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_NOC_ADDR_REMAP_VALUE. */
typedef volatile struct ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_s  ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_NOC_ADDR_REMAP_VALUE register. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_NOC_ADDR_REMAP_VALUE register from the beginning of the component. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_OFST        0x80

/*
 * Register : noc_addr_remap_set
 * 
 * This is a Write 1 to Set register.
 * 
 * Writing 0 is ignored, and writing 1 to a specific bit field sets the specific
 * remap bit.
 * 
 * Reads should not return an error, but the actual read value is "Undefined" .
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [0]    | RW     | 0x0   | Remap Set register
 *  [1]    | RW     | 0x0   | Remap Set register
 *  [31:2] | ???    | 0x0   | *UNDEFINED*       
 * 
 */
/*
 * Field : Remap Set register - remap0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP0 register field. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP0 register field. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP0_MSB        0
/* The width in bits of the ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP0 register field. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP0 register field value. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP0_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP0 register field value. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP0 register field. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP0_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP0 field value from a register. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP0 register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Remap Set register - remap1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP1 register field. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP1_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP1 register field. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP1_MSB        1
/* The width in bits of the ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP1 register field. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP1 register field value. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP1_SET_MSK    0x00000002
/* The mask used to clear the ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP1 register field value. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP1_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP1 register field. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP1_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP1 field value from a register. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP1_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP1 register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_SET_REMAP1_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_NOC_ADDR_REMAP_SET.
 */
struct ALT_SYSMGR_NOC_ADDR_REMAP_SET_s
{
    uint32_t  remap0 :  1;  /* Remap Set register */
    uint32_t  remap1 :  1;  /* Remap Set register */
    uint32_t         : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_NOC_ADDR_REMAP_SET. */
typedef volatile struct ALT_SYSMGR_NOC_ADDR_REMAP_SET_s  ALT_SYSMGR_NOC_ADDR_REMAP_SET_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_NOC_ADDR_REMAP_SET register. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_SET_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_NOC_ADDR_REMAP_SET register from the beginning of the component. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_SET_OFST        0x84

/*
 * Register : noc_addr_remap_clear
 * 
 * This is a Write 1 to Clear register.
 * 
 * Writing 0 is ignored, and writing 1 to a specific bit field Clears the specific
 * remap bit.
 * 
 * Reads should not return an error, but the actual read value is "Undefined" .
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description       
 * :-------|:-------|:------|:-------------------
 *  [0]    | RW     | 0x0   | Remap Set register
 *  [1]    | RW     | 0x0   | Remap Set register
 *  [31:2] | ???    | 0x0   | *UNDEFINED*       
 * 
 */
/*
 * Field : Remap Set register - remap0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP0 register field. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP0 register field. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP0_MSB        0
/* The width in bits of the ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP0 register field. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP0 register field value. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP0_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP0 register field value. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP0 register field. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP0_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP0 field value from a register. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP0 register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Remap Set register - remap1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP1 register field. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP1_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP1 register field. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP1_MSB        1
/* The width in bits of the ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP1 register field. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP1 register field value. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP1_SET_MSK    0x00000002
/* The mask used to clear the ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP1 register field value. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP1_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP1 register field. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP1_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP1 field value from a register. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP1_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP1 register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_CLR_REMAP1_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_NOC_ADDR_REMAP_CLR.
 */
struct ALT_SYSMGR_NOC_ADDR_REMAP_CLR_s
{
    uint32_t  remap0 :  1;  /* Remap Set register */
    uint32_t  remap1 :  1;  /* Remap Set register */
    uint32_t         : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_NOC_ADDR_REMAP_CLR. */
typedef volatile struct ALT_SYSMGR_NOC_ADDR_REMAP_CLR_s  ALT_SYSMGR_NOC_ADDR_REMAP_CLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_NOC_ADDR_REMAP_CLR register. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_CLR_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_NOC_ADDR_REMAP_CLR register from the beginning of the component. */
#define ALT_SYSMGR_NOC_ADDR_REMAP_CLR_OFST        0x88

/*
 * Register : ecc_intmask_value
 * 
 * ECC interrupt mask register.
 * 
 * This is a read/write register.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description       
 * :--------|:-------|:------|:-------------------
 *  [0]     | RW     | 0x0   | Interrupt Mask Set
 *  [1]     | RW     | 0x0   | Interrupt Mask Set
 *  [2]     | RW     | 0x0   | Interrupt Mask Set
 *  [3]     | RW     | 0x0   | Interrupt Mask Set
 *  [4]     | RW     | 0x0   | Interrupt Mask Set
 *  [5]     | RW     | 0x0   | Interrupt Mask Set
 *  [6]     | RW     | 0x0   | Interrupt Mask Set
 *  [7]     | RW     | 0x0   | Interrupt Mask Set
 *  [8]     | RW     | 0x0   | Interrupt Mask Set
 *  [9]     | RW     | 0x0   | Interrupt Mask Set
 *  [10]    | RW     | 0x0   | Interrupt Mask Set
 *  [11]    | RW     | 0x0   | Interrupt Mask Set
 *  [12]    | RW     | 0x0   | Interrupt Mask Set
 *  [13]    | RW     | 0x0   | Interrupt Mask Set
 *  [14]    | RW     | 0x0   | Interrupt Mask Set
 *  [15]    | RW     | 0x0   | Interrupt Mask Set
 *  [16]    | RW     | 0x0   | Interrupt Mask Set
 *  [17]    | RW     | 0x0   | Interrupt Mask Set
 *  [18]    | RW     | 0x0   | Interrupt Mask Set
 *  [31:19] | ???    | 0x0   | *UNDEFINED*       
 * 
 */
/*
 * Field : Interrupt Mask Set - l2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_L2 register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_L2_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_L2 register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_L2_MSB        0
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_VALUE_L2 register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_L2_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_VALUE_L2 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_L2_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_VALUE_L2 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_L2_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_VALUE_L2 register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_L2_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_VALUE_L2 field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_L2_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_ECC_INTMSK_VALUE_L2 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_L2_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Interrupt Mask Set - ocram
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_OCRAM register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_OCRAM_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_OCRAM register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_OCRAM_MSB        1
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_VALUE_OCRAM register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_OCRAM_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_VALUE_OCRAM register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_OCRAM_SET_MSK    0x00000002
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_VALUE_OCRAM register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_OCRAM_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_VALUE_OCRAM register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_OCRAM_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_VALUE_OCRAM field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_OCRAM_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SYSMGR_ECC_INTMSK_VALUE_OCRAM register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_OCRAM_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : Interrupt Mask Set - usb0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_USB0 register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_USB0_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_USB0 register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_USB0_MSB        2
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_VALUE_USB0 register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_USB0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_VALUE_USB0 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_USB0_SET_MSK    0x00000004
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_VALUE_USB0 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_USB0_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_VALUE_USB0 register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_USB0_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_VALUE_USB0 field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_USB0_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SYSMGR_ECC_INTMSK_VALUE_USB0 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_USB0_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : Interrupt Mask Set - usb1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_USB1 register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_USB1_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_USB1 register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_USB1_MSB        3
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_VALUE_USB1 register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_USB1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_VALUE_USB1 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_USB1_SET_MSK    0x00000008
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_VALUE_USB1 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_USB1_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_VALUE_USB1 register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_USB1_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_VALUE_USB1 field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_USB1_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SYSMGR_ECC_INTMSK_VALUE_USB1 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_USB1_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : Interrupt Mask Set - emac0_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_RX_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_RX_MSB        4
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_RX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_RX_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_RX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_RX_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_RX field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_RX_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_RX_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : Interrupt Mask Set - emac0_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_TX_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_TX_MSB        5
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_TX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_TX_SET_MSK    0x00000020
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_TX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_TX_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_TX field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_TX_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC0_TX_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Interrupt Mask Set - emac1_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_RX_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_RX_MSB        6
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_RX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_RX_SET_MSK    0x00000040
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_RX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_RX_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_RX field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_RX_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_RX_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : Interrupt Mask Set - emac1_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_TX_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_TX_MSB        7
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_TX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_TX_SET_MSK    0x00000080
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_TX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_TX_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_TX field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_TX_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC1_TX_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : Interrupt Mask Set - emac2_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_RX_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_RX_MSB        8
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_RX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_RX_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_RX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_RX_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_RX field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_RX_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_RX_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : Interrupt Mask Set - emac2_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_TX_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_TX_MSB        9
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_TX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_TX_SET_MSK    0x00000200
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_TX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_TX_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_TX field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_TX_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_EMAC2_TX_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : Interrupt Mask Set - dma
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_DMA register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_DMA_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_DMA register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_DMA_MSB        10
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_VALUE_DMA register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_DMA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_VALUE_DMA register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_DMA_SET_MSK    0x00000400
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_VALUE_DMA register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_DMA_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_VALUE_DMA register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_DMA_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_VALUE_DMA field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_DMA_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SYSMGR_ECC_INTMSK_VALUE_DMA register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_DMA_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : Interrupt Mask Set - nand_buf
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_BUF register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_BUF_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_BUF register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_BUF_MSB        11
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_BUF register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_BUF_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_BUF register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_BUF_SET_MSK    0x00000800
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_BUF register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_BUF_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_BUF register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_BUF_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_BUF field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_BUF_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_BUF register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_BUF_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : Interrupt Mask Set - nand_wr
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_WR register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_WR_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_WR register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_WR_MSB        12
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_WR register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_WR_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_WR register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_WR_SET_MSK    0x00001000
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_WR register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_WR_CLR_MSK    0xffffefff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_WR register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_WR_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_WR field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_WR_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_WR register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_WR_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : Interrupt Mask Set - nand_rd
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_RD register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_RD_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_RD register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_RD_MSB        13
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_RD register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_RD_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_RD register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_RD_SET_MSK    0x00002000
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_RD register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_RD_CLR_MSK    0xffffdfff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_RD register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_RD_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_RD field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_RD_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_RD register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_NAND_RD_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Interrupt Mask Set - qspi
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_QSPI register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_QSPI_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_QSPI register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_QSPI_MSB        14
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_VALUE_QSPI register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_QSPI_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_VALUE_QSPI register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_QSPI_SET_MSK    0x00004000
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_VALUE_QSPI register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_QSPI_CLR_MSK    0xffffbfff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_VALUE_QSPI register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_QSPI_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_VALUE_QSPI field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_QSPI_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_SYSMGR_ECC_INTMSK_VALUE_QSPI register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_QSPI_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : Interrupt Mask Set - sdmmca
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCA register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCA_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCA register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCA_MSB        15
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCA register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCA register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCA_SET_MSK    0x00008000
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCA register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCA_CLR_MSK    0xffff7fff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCA register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCA_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCA field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCA_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCA register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCA_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : Interrupt Mask Set - sdmmcb
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCB register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCB_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCB register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCB_MSB        16
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCB register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCB_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCB register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCB_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCB register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCB_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCB register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCB_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCB field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCB_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCB register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_SDMMCB_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : Interrupt Mask Set - ddr0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_DDR0 register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_DDR0_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_DDR0 register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_DDR0_MSB        17
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_VALUE_DDR0 register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_DDR0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_VALUE_DDR0 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_DDR0_SET_MSK    0x00020000
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_VALUE_DDR0 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_DDR0_CLR_MSK    0xfffdffff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_VALUE_DDR0 register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_DDR0_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_VALUE_DDR0 field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_DDR0_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_SYSMGR_ECC_INTMSK_VALUE_DDR0 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_DDR0_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : Interrupt Mask Set - ddr1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_DDR1 register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_DDR1_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_VALUE_DDR1 register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_DDR1_MSB        18
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_VALUE_DDR1 register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_DDR1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_VALUE_DDR1 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_DDR1_SET_MSK    0x00040000
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_VALUE_DDR1 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_DDR1_CLR_MSK    0xfffbffff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_VALUE_DDR1 register field. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_DDR1_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_VALUE_DDR1 field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_DDR1_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_SYSMGR_ECC_INTMSK_VALUE_DDR1 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_DDR1_SET(value) (((value) << 18) & 0x00040000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_ECC_INTMSK_VALUE.
 */
struct ALT_SYSMGR_ECC_INTMSK_VALUE_s
{
    uint32_t  l2       :  1;  /* Interrupt Mask Set */
    uint32_t  ocram    :  1;  /* Interrupt Mask Set */
    uint32_t  usb0     :  1;  /* Interrupt Mask Set */
    uint32_t  usb1     :  1;  /* Interrupt Mask Set */
    uint32_t  emac0_rx :  1;  /* Interrupt Mask Set */
    uint32_t  emac0_tx :  1;  /* Interrupt Mask Set */
    uint32_t  emac1_rx :  1;  /* Interrupt Mask Set */
    uint32_t  emac1_tx :  1;  /* Interrupt Mask Set */
    uint32_t  emac2_rx :  1;  /* Interrupt Mask Set */
    uint32_t  emac2_tx :  1;  /* Interrupt Mask Set */
    uint32_t  dma      :  1;  /* Interrupt Mask Set */
    uint32_t  nand_buf :  1;  /* Interrupt Mask Set */
    uint32_t  nand_wr  :  1;  /* Interrupt Mask Set */
    uint32_t  nand_rd  :  1;  /* Interrupt Mask Set */
    uint32_t  qspi     :  1;  /* Interrupt Mask Set */
    uint32_t  sdmmca   :  1;  /* Interrupt Mask Set */
    uint32_t  sdmmcb   :  1;  /* Interrupt Mask Set */
    uint32_t  ddr0     :  1;  /* Interrupt Mask Set */
    uint32_t  ddr1     :  1;  /* Interrupt Mask Set */
    uint32_t           : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_ECC_INTMSK_VALUE. */
typedef volatile struct ALT_SYSMGR_ECC_INTMSK_VALUE_s  ALT_SYSMGR_ECC_INTMSK_VALUE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_ECC_INTMSK_VALUE register. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_ECC_INTMSK_VALUE register from the beginning of the component. */
#define ALT_SYSMGR_ECC_INTMSK_VALUE_OFST        0x90

/*
 * Register : ECC interrupt mask Set register - ecc_intmask_set
 * 
 * Write 1 to set a specific modules interrupt mask.
 * 
 * Reads should not return an error, but the actual read value is "Undefined" .
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description       
 * :--------|:-------|:------|:-------------------
 *  [0]     | RW     | 0x0   | Interrupt Mask Set
 *  [1]     | RW     | 0x0   | Interrupt Mask Set
 *  [2]     | RW     | 0x0   | Interrupt Mask Set
 *  [3]     | RW     | 0x0   | Interrupt Mask Set
 *  [4]     | RW     | 0x0   | Interrupt Mask Set
 *  [5]     | RW     | 0x0   | Interrupt Mask Set
 *  [6]     | RW     | 0x0   | Interrupt Mask Set
 *  [7]     | RW     | 0x0   | Interrupt Mask Set
 *  [8]     | RW     | 0x0   | Interrupt Mask Set
 *  [9]     | RW     | 0x0   | Interrupt Mask Set
 *  [10]    | RW     | 0x0   | Interrupt Mask Set
 *  [11]    | RW     | 0x0   | Interrupt Mask Set
 *  [12]    | RW     | 0x0   | Interrupt Mask Set
 *  [13]    | RW     | 0x0   | Interrupt Mask Set
 *  [14]    | RW     | 0x0   | Interrupt Mask Set
 *  [15]    | RW     | 0x0   | Interrupt Mask Set
 *  [16]    | RW     | 0x0   | Interrupt Mask Set
 *  [17]    | RW     | 0x0   | Interrupt Mask Set
 *  [18]    | RW     | 0x0   | Interrupt Mask Set
 *  [31:19] | ???    | 0x0   | *UNDEFINED*       
 * 
 */
/*
 * Field : Interrupt Mask Set - l2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_L2 register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_L2_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_L2 register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_L2_MSB        0
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_SET_L2 register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_L2_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_SET_L2 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_L2_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_SET_L2 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_L2_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_SET_L2 register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_L2_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_SET_L2 field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_L2_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_ECC_INTMSK_SET_L2 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_L2_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Interrupt Mask Set - ocram
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_OCRAM register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_OCRAM_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_OCRAM register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_OCRAM_MSB        1
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_SET_OCRAM register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_OCRAM_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_SET_OCRAM register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_OCRAM_SET_MSK    0x00000002
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_SET_OCRAM register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_OCRAM_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_SET_OCRAM register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_OCRAM_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_SET_OCRAM field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_OCRAM_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SYSMGR_ECC_INTMSK_SET_OCRAM register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_OCRAM_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : Interrupt Mask Set - usb0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_USB0 register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_USB0_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_USB0 register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_USB0_MSB        2
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_SET_USB0 register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_USB0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_SET_USB0 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_USB0_SET_MSK    0x00000004
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_SET_USB0 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_USB0_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_SET_USB0 register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_USB0_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_SET_USB0 field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_USB0_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SYSMGR_ECC_INTMSK_SET_USB0 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_USB0_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : Interrupt Mask Set - usb1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_USB1 register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_USB1_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_USB1 register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_USB1_MSB        3
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_SET_USB1 register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_USB1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_SET_USB1 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_USB1_SET_MSK    0x00000008
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_SET_USB1 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_USB1_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_SET_USB1 register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_USB1_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_SET_USB1 field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_USB1_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SYSMGR_ECC_INTMSK_SET_USB1 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_USB1_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : Interrupt Mask Set - emac0_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_RX_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_RX_MSB        4
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_RX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_RX_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_RX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_RX_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_RX field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_RX_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_RX_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : Interrupt Mask Set - emac0_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_TX_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_TX_MSB        5
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_TX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_TX_SET_MSK    0x00000020
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_TX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_TX_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_TX field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_TX_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_TX_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Interrupt Mask Set - emac1_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_RX_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_RX_MSB        6
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_RX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_RX_SET_MSK    0x00000040
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_RX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_RX_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_RX field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_RX_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_RX_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : Interrupt Mask Set - emac1_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_TX_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_TX_MSB        7
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_TX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_TX_SET_MSK    0x00000080
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_TX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_TX_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_TX field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_TX_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_TX_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : Interrupt Mask Set - emac2_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_RX_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_RX_MSB        8
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_RX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_RX_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_RX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_RX_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_RX field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_RX_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_RX_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : Interrupt Mask Set - emac2_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_TX_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_TX_MSB        9
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_TX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_TX_SET_MSK    0x00000200
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_TX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_TX_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_TX field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_TX_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_TX_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : Interrupt Mask Set - dma
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_DMA register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_DMA_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_DMA register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_DMA_MSB        10
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_SET_DMA register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_DMA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_SET_DMA register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_DMA_SET_MSK    0x00000400
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_SET_DMA register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_DMA_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_SET_DMA register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_DMA_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_SET_DMA field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_DMA_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SYSMGR_ECC_INTMSK_SET_DMA register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_DMA_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : Interrupt Mask Set - nand_buf
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_NAND_BUF register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_NAND_BUF_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_NAND_BUF register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_NAND_BUF_MSB        11
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_SET_NAND_BUF register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_NAND_BUF_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_SET_NAND_BUF register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_NAND_BUF_SET_MSK    0x00000800
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_SET_NAND_BUF register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_NAND_BUF_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_SET_NAND_BUF register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_NAND_BUF_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_SET_NAND_BUF field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_NAND_BUF_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_SYSMGR_ECC_INTMSK_SET_NAND_BUF register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_NAND_BUF_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : Interrupt Mask Set - nand_wr
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_NAND_WR register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_NAND_WR_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_NAND_WR register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_NAND_WR_MSB        12
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_SET_NAND_WR register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_NAND_WR_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_SET_NAND_WR register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_NAND_WR_SET_MSK    0x00001000
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_SET_NAND_WR register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_NAND_WR_CLR_MSK    0xffffefff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_SET_NAND_WR register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_NAND_WR_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_SET_NAND_WR field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_NAND_WR_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SYSMGR_ECC_INTMSK_SET_NAND_WR register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_NAND_WR_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : Interrupt Mask Set - nand_rd
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_NAND_RD register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_NAND_RD_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_NAND_RD register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_NAND_RD_MSB        13
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_SET_NAND_RD register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_NAND_RD_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_SET_NAND_RD register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_NAND_RD_SET_MSK    0x00002000
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_SET_NAND_RD register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_NAND_RD_CLR_MSK    0xffffdfff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_SET_NAND_RD register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_NAND_RD_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_SET_NAND_RD field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_NAND_RD_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_SYSMGR_ECC_INTMSK_SET_NAND_RD register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_NAND_RD_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Interrupt Mask Set - qspi
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_QSPI register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_QSPI_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_QSPI register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_QSPI_MSB        14
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_SET_QSPI register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_QSPI_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_SET_QSPI register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_QSPI_SET_MSK    0x00004000
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_SET_QSPI register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_QSPI_CLR_MSK    0xffffbfff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_SET_QSPI register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_QSPI_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_SET_QSPI field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_QSPI_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_SYSMGR_ECC_INTMSK_SET_QSPI register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_QSPI_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : Interrupt Mask Set - sdmmca
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_SDMMCA register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_SDMMCA_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_SDMMCA register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_SDMMCA_MSB        15
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_SET_SDMMCA register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_SDMMCA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_SET_SDMMCA register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_SDMMCA_SET_MSK    0x00008000
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_SET_SDMMCA register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_SDMMCA_CLR_MSK    0xffff7fff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_SET_SDMMCA register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_SDMMCA_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_SET_SDMMCA field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_SDMMCA_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_SYSMGR_ECC_INTMSK_SET_SDMMCA register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_SDMMCA_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : Interrupt Mask Set - sdmmcb
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_SDMMCB register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_SDMMCB_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_SDMMCB register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_SDMMCB_MSB        16
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_SET_SDMMCB register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_SDMMCB_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_SET_SDMMCB register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_SDMMCB_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_SET_SDMMCB register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_SDMMCB_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_SET_SDMMCB register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_SDMMCB_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_SET_SDMMCB field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_SDMMCB_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_ECC_INTMSK_SET_SDMMCB register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_SDMMCB_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : Interrupt Mask Set - ddr0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_DDR0 register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_DDR0_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_DDR0 register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_DDR0_MSB        17
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_SET_DDR0 register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_DDR0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_SET_DDR0 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_DDR0_SET_MSK    0x00020000
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_SET_DDR0 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_DDR0_CLR_MSK    0xfffdffff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_SET_DDR0 register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_DDR0_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_SET_DDR0 field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_DDR0_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_SYSMGR_ECC_INTMSK_SET_DDR0 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_DDR0_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : Interrupt Mask Set - ddr1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_DDR1 register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_DDR1_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_SET_DDR1 register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_DDR1_MSB        18
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_SET_DDR1 register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_DDR1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_SET_DDR1 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_DDR1_SET_MSK    0x00040000
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_SET_DDR1 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_SET_DDR1_CLR_MSK    0xfffbffff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_SET_DDR1 register field. */
#define ALT_SYSMGR_ECC_INTMSK_SET_DDR1_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_SET_DDR1 field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_DDR1_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_SYSMGR_ECC_INTMSK_SET_DDR1 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_DDR1_SET(value) (((value) << 18) & 0x00040000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_ECC_INTMSK_SET.
 */
struct ALT_SYSMGR_ECC_INTMSK_SET_s
{
    uint32_t  l2       :  1;  /* Interrupt Mask Set */
    uint32_t  ocram    :  1;  /* Interrupt Mask Set */
    uint32_t  usb0     :  1;  /* Interrupt Mask Set */
    uint32_t  usb1     :  1;  /* Interrupt Mask Set */
    uint32_t  emac0_rx :  1;  /* Interrupt Mask Set */
    uint32_t  emac0_tx :  1;  /* Interrupt Mask Set */
    uint32_t  emac1_rx :  1;  /* Interrupt Mask Set */
    uint32_t  emac1_tx :  1;  /* Interrupt Mask Set */
    uint32_t  emac2_rx :  1;  /* Interrupt Mask Set */
    uint32_t  emac2_tx :  1;  /* Interrupt Mask Set */
    uint32_t  dma      :  1;  /* Interrupt Mask Set */
    uint32_t  nand_buf :  1;  /* Interrupt Mask Set */
    uint32_t  nand_wr  :  1;  /* Interrupt Mask Set */
    uint32_t  nand_rd  :  1;  /* Interrupt Mask Set */
    uint32_t  qspi     :  1;  /* Interrupt Mask Set */
    uint32_t  sdmmca   :  1;  /* Interrupt Mask Set */
    uint32_t  sdmmcb   :  1;  /* Interrupt Mask Set */
    uint32_t  ddr0     :  1;  /* Interrupt Mask Set */
    uint32_t  ddr1     :  1;  /* Interrupt Mask Set */
    uint32_t           : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_ECC_INTMSK_SET. */
typedef volatile struct ALT_SYSMGR_ECC_INTMSK_SET_s  ALT_SYSMGR_ECC_INTMSK_SET_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_ECC_INTMSK_SET register. */
#define ALT_SYSMGR_ECC_INTMSK_SET_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_ECC_INTMSK_SET register from the beginning of the component. */
#define ALT_SYSMGR_ECC_INTMSK_SET_OFST        0x94

/*
 * Register : ECC interrupt mask Clear register - ecc_intmask_clr
 * 
 * Write 1 to Clear a specific modules interrupt mask.
 * 
 * Reads should not return an error, but the actual read value is "Undefined" .
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description       
 * :--------|:-------|:------|:-------------------
 *  [0]     | RW     | 0x0   | Interrupt Mask Set
 *  [1]     | RW     | 0x0   | Interrupt Mask Set
 *  [2]     | RW     | 0x0   | Interrupt Mask Set
 *  [3]     | RW     | 0x0   | Interrupt Mask Set
 *  [4]     | RW     | 0x0   | Interrupt Mask Set
 *  [5]     | RW     | 0x0   | Interrupt Mask Set
 *  [6]     | RW     | 0x0   | Interrupt Mask Set
 *  [7]     | RW     | 0x0   | Interrupt Mask Set
 *  [8]     | RW     | 0x0   | Interrupt Mask Set
 *  [9]     | RW     | 0x0   | Interrupt Mask Set
 *  [10]    | RW     | 0x0   | Interrupt Mask Set
 *  [11]    | RW     | 0x0   | Interrupt Mask Set
 *  [12]    | RW     | 0x0   | Interrupt Mask Set
 *  [13]    | RW     | 0x0   | Interrupt Mask Set
 *  [14]    | RW     | 0x0   | Interrupt Mask Set
 *  [15]    | RW     | 0x0   | Interrupt Mask Set
 *  [16]    | RW     | 0x0   | Interrupt Mask Set
 *  [17]    | RW     | 0x0   | Interrupt Mask Set
 *  [18]    | RW     | 0x0   | Interrupt Mask Set
 *  [31:19] | ???    | 0x0   | *UNDEFINED*       
 * 
 */
/*
 * Field : Interrupt Mask Set - l2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_L2 register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_L2_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_L2 register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_L2_MSB        0
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_CLR_L2 register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_L2_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_CLR_L2 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_L2_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_CLR_L2 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_L2_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_CLR_L2 register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_L2_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_CLR_L2 field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_L2_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_ECC_INTMSK_CLR_L2 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_L2_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Interrupt Mask Set - ocram
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_OCRAM register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_OCRAM_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_OCRAM register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_OCRAM_MSB        1
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_CLR_OCRAM register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_OCRAM_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_CLR_OCRAM register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_OCRAM_SET_MSK    0x00000002
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_CLR_OCRAM register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_OCRAM_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_CLR_OCRAM register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_OCRAM_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_CLR_OCRAM field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_OCRAM_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SYSMGR_ECC_INTMSK_CLR_OCRAM register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_OCRAM_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : Interrupt Mask Set - usb0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_USB0 register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_USB0_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_USB0 register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_USB0_MSB        2
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_CLR_USB0 register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_USB0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_CLR_USB0 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_USB0_SET_MSK    0x00000004
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_CLR_USB0 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_USB0_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_CLR_USB0 register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_USB0_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_CLR_USB0 field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_USB0_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SYSMGR_ECC_INTMSK_CLR_USB0 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_USB0_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : Interrupt Mask Set - usb1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_USB1 register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_USB1_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_USB1 register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_USB1_MSB        3
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_CLR_USB1 register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_USB1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_CLR_USB1 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_USB1_SET_MSK    0x00000008
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_CLR_USB1 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_USB1_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_CLR_USB1 register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_USB1_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_CLR_USB1 field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_USB1_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SYSMGR_ECC_INTMSK_CLR_USB1 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_USB1_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : Interrupt Mask Set - emac0_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_RX_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_RX_MSB        4
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_RX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_RX_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_RX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_RX_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_RX field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_RX_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_RX_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : Interrupt Mask Set - emac0_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_TX_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_TX_MSB        5
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_TX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_TX_SET_MSK    0x00000020
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_TX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_TX_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_TX field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_TX_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC0_TX_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Interrupt Mask Set - emac1_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_RX_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_RX_MSB        6
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_RX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_RX_SET_MSK    0x00000040
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_RX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_RX_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_RX field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_RX_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_RX_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : Interrupt Mask Set - emac1_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_TX_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_TX_MSB        7
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_TX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_TX_SET_MSK    0x00000080
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_TX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_TX_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_TX field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_TX_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC1_TX_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : Interrupt Mask Set - emac2_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_RX_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_RX_MSB        8
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_RX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_RX_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_RX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_RX_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_RX register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_RX field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_RX_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_RX_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : Interrupt Mask Set - emac2_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_TX_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_TX_MSB        9
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_TX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_TX_SET_MSK    0x00000200
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_TX register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_TX_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_TX register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_TX field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_TX_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_EMAC2_TX_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : Interrupt Mask Set - dma
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_DMA register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_DMA_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_DMA register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_DMA_MSB        10
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_CLR_DMA register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_DMA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_CLR_DMA register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_DMA_SET_MSK    0x00000400
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_CLR_DMA register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_DMA_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_CLR_DMA register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_DMA_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_CLR_DMA field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_DMA_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SYSMGR_ECC_INTMSK_CLR_DMA register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_DMA_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : Interrupt Mask Set - nand_buf
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_NAND_BUF register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_NAND_BUF_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_NAND_BUF register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_NAND_BUF_MSB        11
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_CLR_NAND_BUF register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_NAND_BUF_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_CLR_NAND_BUF register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_NAND_BUF_SET_MSK    0x00000800
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_CLR_NAND_BUF register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_NAND_BUF_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_CLR_NAND_BUF register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_NAND_BUF_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_CLR_NAND_BUF field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_NAND_BUF_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_SYSMGR_ECC_INTMSK_CLR_NAND_BUF register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_NAND_BUF_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : Interrupt Mask Set - nand_wr
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_NAND_WR register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_NAND_WR_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_NAND_WR register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_NAND_WR_MSB        12
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_CLR_NAND_WR register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_NAND_WR_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_CLR_NAND_WR register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_NAND_WR_SET_MSK    0x00001000
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_CLR_NAND_WR register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_NAND_WR_CLR_MSK    0xffffefff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_CLR_NAND_WR register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_NAND_WR_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_CLR_NAND_WR field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_NAND_WR_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SYSMGR_ECC_INTMSK_CLR_NAND_WR register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_NAND_WR_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : Interrupt Mask Set - nand_rd
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_NAND_RD register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_NAND_RD_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_NAND_RD register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_NAND_RD_MSB        13
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_CLR_NAND_RD register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_NAND_RD_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_CLR_NAND_RD register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_NAND_RD_SET_MSK    0x00002000
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_CLR_NAND_RD register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_NAND_RD_CLR_MSK    0xffffdfff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_CLR_NAND_RD register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_NAND_RD_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_CLR_NAND_RD field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_NAND_RD_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_SYSMGR_ECC_INTMSK_CLR_NAND_RD register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_NAND_RD_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Interrupt Mask Set - qspi
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_QSPI register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_QSPI_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_QSPI register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_QSPI_MSB        14
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_CLR_QSPI register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_QSPI_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_CLR_QSPI register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_QSPI_SET_MSK    0x00004000
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_CLR_QSPI register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_QSPI_CLR_MSK    0xffffbfff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_CLR_QSPI register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_QSPI_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_CLR_QSPI field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_QSPI_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_SYSMGR_ECC_INTMSK_CLR_QSPI register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_QSPI_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : Interrupt Mask Set - sdmmca
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCA register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCA_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCA register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCA_MSB        15
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCA register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCA register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCA_SET_MSK    0x00008000
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCA register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCA_CLR_MSK    0xffff7fff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCA register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCA_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCA field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCA_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCA register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCA_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : Interrupt Mask Set - sdmmcb
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCB register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCB_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCB register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCB_MSB        16
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCB register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCB_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCB register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCB_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCB register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCB_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCB register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCB_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCB field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCB_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCB register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_SDMMCB_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : Interrupt Mask Set - ddr0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_DDR0 register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_DDR0_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_DDR0 register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_DDR0_MSB        17
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_CLR_DDR0 register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_DDR0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_CLR_DDR0 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_DDR0_SET_MSK    0x00020000
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_CLR_DDR0 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_DDR0_CLR_MSK    0xfffdffff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_CLR_DDR0 register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_DDR0_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_CLR_DDR0 field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_DDR0_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_SYSMGR_ECC_INTMSK_CLR_DDR0 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_DDR0_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : Interrupt Mask Set - ddr1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_DDR1 register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_DDR1_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTMSK_CLR_DDR1 register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_DDR1_MSB        18
/* The width in bits of the ALT_SYSMGR_ECC_INTMSK_CLR_DDR1 register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_DDR1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTMSK_CLR_DDR1 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_DDR1_SET_MSK    0x00040000
/* The mask used to clear the ALT_SYSMGR_ECC_INTMSK_CLR_DDR1 register field value. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_DDR1_CLR_MSK    0xfffbffff
/* The reset value of the ALT_SYSMGR_ECC_INTMSK_CLR_DDR1 register field. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_DDR1_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTMSK_CLR_DDR1 field value from a register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_DDR1_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_SYSMGR_ECC_INTMSK_CLR_DDR1 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_DDR1_SET(value) (((value) << 18) & 0x00040000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_ECC_INTMSK_CLR.
 */
struct ALT_SYSMGR_ECC_INTMSK_CLR_s
{
    uint32_t  l2       :  1;  /* Interrupt Mask Set */
    uint32_t  ocram    :  1;  /* Interrupt Mask Set */
    uint32_t  usb0     :  1;  /* Interrupt Mask Set */
    uint32_t  usb1     :  1;  /* Interrupt Mask Set */
    uint32_t  emac0_rx :  1;  /* Interrupt Mask Set */
    uint32_t  emac0_tx :  1;  /* Interrupt Mask Set */
    uint32_t  emac1_rx :  1;  /* Interrupt Mask Set */
    uint32_t  emac1_tx :  1;  /* Interrupt Mask Set */
    uint32_t  emac2_rx :  1;  /* Interrupt Mask Set */
    uint32_t  emac2_tx :  1;  /* Interrupt Mask Set */
    uint32_t  dma      :  1;  /* Interrupt Mask Set */
    uint32_t  nand_buf :  1;  /* Interrupt Mask Set */
    uint32_t  nand_wr  :  1;  /* Interrupt Mask Set */
    uint32_t  nand_rd  :  1;  /* Interrupt Mask Set */
    uint32_t  qspi     :  1;  /* Interrupt Mask Set */
    uint32_t  sdmmca   :  1;  /* Interrupt Mask Set */
    uint32_t  sdmmcb   :  1;  /* Interrupt Mask Set */
    uint32_t  ddr0     :  1;  /* Interrupt Mask Set */
    uint32_t  ddr1     :  1;  /* Interrupt Mask Set */
    uint32_t           : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_ECC_INTMSK_CLR. */
typedef volatile struct ALT_SYSMGR_ECC_INTMSK_CLR_s  ALT_SYSMGR_ECC_INTMSK_CLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_ECC_INTMSK_CLR register. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_ECC_INTMSK_CLR register from the beginning of the component. */
#define ALT_SYSMGR_ECC_INTMSK_CLR_OFST        0x98

/*
 * Register : ecc_intstatus_serr
 * 
 * ECC single bit error status of individual modules.
 * 
 * A write to this register should return an error.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description       
 * :--------|:-------|:------|:-------------------
 *  [0]     | RW     | 0x0   | Interrupt Mask Set
 *  [1]     | RW     | 0x0   | Interrupt Mask Set
 *  [2]     | RW     | 0x0   | Interrupt Mask Set
 *  [3]     | RW     | 0x0   | Interrupt Mask Set
 *  [4]     | RW     | 0x0   | Interrupt Mask Set
 *  [5]     | RW     | 0x0   | Interrupt Mask Set
 *  [6]     | RW     | 0x0   | Interrupt Mask Set
 *  [7]     | RW     | 0x0   | Interrupt Mask Set
 *  [8]     | RW     | 0x0   | Interrupt Mask Set
 *  [9]     | RW     | 0x0   | Interrupt Mask Set
 *  [10]    | RW     | 0x0   | Interrupt Mask Set
 *  [11]    | RW     | 0x0   | Interrupt Mask Set
 *  [12]    | RW     | 0x0   | Interrupt Mask Set
 *  [13]    | RW     | 0x0   | Interrupt Mask Set
 *  [14]    | RW     | 0x0   | Interrupt Mask Set
 *  [15]    | RW     | 0x0   | Interrupt Mask Set
 *  [16]    | RW     | 0x0   | Interrupt Mask Set
 *  [17]    | RW     | 0x0   | Interrupt Mask Set
 *  [18]    | RW     | 0x0   | Interrupt Mask Set
 *  [31:19] | ???    | 0x0   | *UNDEFINED*       
 * 
 */
/*
 * Field : Interrupt Mask Set - l2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_L2 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_L2_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_L2 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_L2_MSB        0
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_SERR_L2 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_L2_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_SERR_L2 register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_L2_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_SERR_L2 register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_L2_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_SERR_L2 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_L2_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_SERR_L2 field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_L2_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_SERR_L2 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_L2_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Interrupt Mask Set - ocram
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_OCRAM register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_OCRAM_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_OCRAM register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_OCRAM_MSB        1
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_SERR_OCRAM register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_OCRAM_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_SERR_OCRAM register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_OCRAM_SET_MSK    0x00000002
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_SERR_OCRAM register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_OCRAM_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_SERR_OCRAM register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_OCRAM_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_SERR_OCRAM field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_OCRAM_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_SERR_OCRAM register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_OCRAM_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : Interrupt Mask Set - usb0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_USB0 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_USB0_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_USB0 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_USB0_MSB        2
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_SERR_USB0 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_USB0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_SERR_USB0 register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_USB0_SET_MSK    0x00000004
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_SERR_USB0 register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_USB0_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_SERR_USB0 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_USB0_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_SERR_USB0 field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_USB0_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_SERR_USB0 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_USB0_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : Interrupt Mask Set - usb1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_USB1 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_USB1_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_USB1 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_USB1_MSB        3
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_SERR_USB1 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_USB1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_SERR_USB1 register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_USB1_SET_MSK    0x00000008
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_SERR_USB1 register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_USB1_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_SERR_USB1 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_USB1_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_SERR_USB1 field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_USB1_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_SERR_USB1 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_USB1_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : Interrupt Mask Set - emac0_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_RX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_RX_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_RX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_RX_MSB        4
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_RX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_RX register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_RX_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_RX register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_RX_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_RX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_RX field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_RX_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_RX_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : Interrupt Mask Set - emac0_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_TX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_TX_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_TX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_TX_MSB        5
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_TX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_TX register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_TX_SET_MSK    0x00000020
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_TX register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_TX_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_TX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_TX field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_TX_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC0_TX_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Interrupt Mask Set - emac1_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_RX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_RX_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_RX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_RX_MSB        6
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_RX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_RX register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_RX_SET_MSK    0x00000040
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_RX register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_RX_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_RX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_RX field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_RX_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_RX_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : Interrupt Mask Set - emac1_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_TX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_TX_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_TX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_TX_MSB        7
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_TX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_TX register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_TX_SET_MSK    0x00000080
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_TX register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_TX_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_TX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_TX field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_TX_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC1_TX_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : Interrupt Mask Set - emac2_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_RX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_RX_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_RX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_RX_MSB        8
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_RX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_RX register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_RX_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_RX register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_RX_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_RX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_RX field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_RX_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_RX_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : Interrupt Mask Set - emac2_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_TX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_TX_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_TX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_TX_MSB        9
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_TX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_TX register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_TX_SET_MSK    0x00000200
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_TX register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_TX_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_TX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_TX field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_TX_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_EMAC2_TX_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : Interrupt Mask Set - dma
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_DMA register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_DMA_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_DMA register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_DMA_MSB        10
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_SERR_DMA register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_DMA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_SERR_DMA register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_DMA_SET_MSK    0x00000400
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_SERR_DMA register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_DMA_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_SERR_DMA register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_DMA_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_SERR_DMA field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_DMA_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_SERR_DMA register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_DMA_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : Interrupt Mask Set - nand_buf
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_BUF register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_BUF_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_BUF register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_BUF_MSB        11
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_BUF register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_BUF_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_BUF register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_BUF_SET_MSK    0x00000800
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_BUF register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_BUF_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_BUF register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_BUF_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_BUF field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_BUF_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_BUF register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_BUF_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : Interrupt Mask Set - nand_wr
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_WR register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_WR_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_WR register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_WR_MSB        12
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_WR register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_WR_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_WR register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_WR_SET_MSK    0x00001000
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_WR register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_WR_CLR_MSK    0xffffefff
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_WR register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_WR_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_WR field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_WR_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_WR register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_WR_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : Interrupt Mask Set - nand_rd
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_RD register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_RD_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_RD register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_RD_MSB        13
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_RD register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_RD_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_RD register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_RD_SET_MSK    0x00002000
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_RD register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_RD_CLR_MSK    0xffffdfff
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_RD register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_RD_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_RD field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_RD_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_RD register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_NAND_RD_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Interrupt Mask Set - qspi
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_QSPI register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_QSPI_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_QSPI register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_QSPI_MSB        14
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_SERR_QSPI register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_QSPI_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_SERR_QSPI register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_QSPI_SET_MSK    0x00004000
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_SERR_QSPI register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_QSPI_CLR_MSK    0xffffbfff
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_SERR_QSPI register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_QSPI_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_SERR_QSPI field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_QSPI_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_SERR_QSPI register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_QSPI_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : Interrupt Mask Set - sdmmca
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCA register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCA_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCA register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCA_MSB        15
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCA register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCA register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCA_SET_MSK    0x00008000
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCA register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCA_CLR_MSK    0xffff7fff
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCA register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCA_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCA field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCA_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCA register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCA_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : Interrupt Mask Set - sdmmcb
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCB register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCB_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCB register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCB_MSB        16
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCB register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCB_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCB register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCB_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCB register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCB_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCB register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCB_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCB field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCB_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCB register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_SDMMCB_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : Interrupt Mask Set - ddr0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_DDR0 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_DDR0_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_DDR0 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_DDR0_MSB        17
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_SERR_DDR0 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_DDR0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_SERR_DDR0 register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_DDR0_SET_MSK    0x00020000
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_SERR_DDR0 register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_DDR0_CLR_MSK    0xfffdffff
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_SERR_DDR0 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_DDR0_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_SERR_DDR0 field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_DDR0_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_SERR_DDR0 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_DDR0_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : Interrupt Mask Set - ddr1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_DDR1 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_DDR1_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_SERR_DDR1 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_DDR1_MSB        18
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_SERR_DDR1 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_DDR1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_SERR_DDR1 register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_DDR1_SET_MSK    0x00040000
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_SERR_DDR1 register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_DDR1_CLR_MSK    0xfffbffff
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_SERR_DDR1 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_DDR1_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_SERR_DDR1 field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_DDR1_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_SERR_DDR1 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_DDR1_SET(value) (((value) << 18) & 0x00040000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_ECC_INTSTAT_SERR.
 */
struct ALT_SYSMGR_ECC_INTSTAT_SERR_s
{
    uint32_t  l2       :  1;  /* Interrupt Mask Set */
    uint32_t  ocram    :  1;  /* Interrupt Mask Set */
    uint32_t  usb0     :  1;  /* Interrupt Mask Set */
    uint32_t  usb1     :  1;  /* Interrupt Mask Set */
    uint32_t  emac0_rx :  1;  /* Interrupt Mask Set */
    uint32_t  emac0_tx :  1;  /* Interrupt Mask Set */
    uint32_t  emac1_rx :  1;  /* Interrupt Mask Set */
    uint32_t  emac1_tx :  1;  /* Interrupt Mask Set */
    uint32_t  emac2_rx :  1;  /* Interrupt Mask Set */
    uint32_t  emac2_tx :  1;  /* Interrupt Mask Set */
    uint32_t  dma      :  1;  /* Interrupt Mask Set */
    uint32_t  nand_buf :  1;  /* Interrupt Mask Set */
    uint32_t  nand_wr  :  1;  /* Interrupt Mask Set */
    uint32_t  nand_rd  :  1;  /* Interrupt Mask Set */
    uint32_t  qspi     :  1;  /* Interrupt Mask Set */
    uint32_t  sdmmca   :  1;  /* Interrupt Mask Set */
    uint32_t  sdmmcb   :  1;  /* Interrupt Mask Set */
    uint32_t  ddr0     :  1;  /* Interrupt Mask Set */
    uint32_t  ddr1     :  1;  /* Interrupt Mask Set */
    uint32_t           : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_ECC_INTSTAT_SERR. */
typedef volatile struct ALT_SYSMGR_ECC_INTSTAT_SERR_s  ALT_SYSMGR_ECC_INTSTAT_SERR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_SERR register. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_ECC_INTSTAT_SERR register from the beginning of the component. */
#define ALT_SYSMGR_ECC_INTSTAT_SERR_OFST        0x9c

/*
 * Register : ecc_intstatus_derr
 * 
 * ECC double bit error status of individual modules.
 * 
 * A write to this register should return an error.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description       
 * :--------|:-------|:------|:-------------------
 *  [0]     | RW     | 0x0   | Interrupt Mask Set
 *  [1]     | RW     | 0x0   | Interrupt Mask Set
 *  [2]     | RW     | 0x0   | Interrupt Mask Set
 *  [3]     | RW     | 0x0   | Interrupt Mask Set
 *  [4]     | RW     | 0x0   | Interrupt Mask Set
 *  [5]     | RW     | 0x0   | Interrupt Mask Set
 *  [6]     | RW     | 0x0   | Interrupt Mask Set
 *  [7]     | RW     | 0x0   | Interrupt Mask Set
 *  [8]     | RW     | 0x0   | Interrupt Mask Set
 *  [9]     | RW     | 0x0   | Interrupt Mask Set
 *  [10]    | RW     | 0x0   | Interrupt Mask Set
 *  [11]    | RW     | 0x0   | Interrupt Mask Set
 *  [12]    | RW     | 0x0   | Interrupt Mask Set
 *  [13]    | RW     | 0x0   | Interrupt Mask Set
 *  [14]    | RW     | 0x0   | Interrupt Mask Set
 *  [15]    | RW     | 0x0   | Interrupt Mask Set
 *  [16]    | RW     | 0x0   | Interrupt Mask Set
 *  [17]    | RW     | 0x0   | Interrupt Mask Set
 *  [18]    | RW     | 0x0   | Interrupt Mask Set
 *  [31:19] | ???    | 0x0   | *UNDEFINED*       
 * 
 */
/*
 * Field : Interrupt Mask Set - l2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_L2 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_L2_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_L2 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_L2_MSB        0
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_DERR_L2 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_L2_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_DERR_L2 register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_L2_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_DERR_L2 register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_L2_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_DERR_L2 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_L2_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_DERR_L2 field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_L2_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_DERR_L2 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_L2_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Interrupt Mask Set - ocram
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_OCRAM register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_OCRAM_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_OCRAM register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_OCRAM_MSB        1
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_DERR_OCRAM register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_OCRAM_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_DERR_OCRAM register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_OCRAM_SET_MSK    0x00000002
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_DERR_OCRAM register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_OCRAM_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_DERR_OCRAM register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_OCRAM_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_DERR_OCRAM field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_OCRAM_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_DERR_OCRAM register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_OCRAM_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : Interrupt Mask Set - usb0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_USB0 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_USB0_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_USB0 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_USB0_MSB        2
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_DERR_USB0 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_USB0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_DERR_USB0 register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_USB0_SET_MSK    0x00000004
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_DERR_USB0 register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_USB0_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_DERR_USB0 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_USB0_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_DERR_USB0 field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_USB0_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_DERR_USB0 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_USB0_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : Interrupt Mask Set - usb1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_USB1 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_USB1_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_USB1 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_USB1_MSB        3
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_DERR_USB1 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_USB1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_DERR_USB1 register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_USB1_SET_MSK    0x00000008
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_DERR_USB1 register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_USB1_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_DERR_USB1 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_USB1_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_DERR_USB1 field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_USB1_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_DERR_USB1 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_USB1_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : Interrupt Mask Set - emac0_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_RX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_RX_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_RX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_RX_MSB        4
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_RX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_RX register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_RX_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_RX register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_RX_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_RX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_RX field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_RX_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_RX_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : Interrupt Mask Set - emac0_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_TX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_TX_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_TX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_TX_MSB        5
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_TX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_TX register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_TX_SET_MSK    0x00000020
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_TX register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_TX_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_TX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_TX field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_TX_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC0_TX_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Interrupt Mask Set - emac1_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_RX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_RX_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_RX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_RX_MSB        6
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_RX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_RX register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_RX_SET_MSK    0x00000040
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_RX register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_RX_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_RX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_RX field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_RX_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_RX_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : Interrupt Mask Set - emac1_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_TX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_TX_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_TX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_TX_MSB        7
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_TX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_TX register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_TX_SET_MSK    0x00000080
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_TX register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_TX_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_TX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_TX field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_TX_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC1_TX_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : Interrupt Mask Set - emac2_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_RX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_RX_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_RX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_RX_MSB        8
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_RX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_RX register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_RX_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_RX register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_RX_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_RX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_RX field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_RX_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_RX_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : Interrupt Mask Set - emac2_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_TX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_TX_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_TX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_TX_MSB        9
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_TX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_TX register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_TX_SET_MSK    0x00000200
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_TX register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_TX_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_TX register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_TX field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_TX_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_EMAC2_TX_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : Interrupt Mask Set - dma
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_DMA register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_DMA_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_DMA register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_DMA_MSB        10
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_DERR_DMA register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_DMA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_DERR_DMA register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_DMA_SET_MSK    0x00000400
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_DERR_DMA register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_DMA_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_DERR_DMA register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_DMA_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_DERR_DMA field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_DMA_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_DERR_DMA register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_DMA_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : Interrupt Mask Set - nand_buf
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_BUF register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_BUF_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_BUF register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_BUF_MSB        11
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_BUF register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_BUF_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_BUF register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_BUF_SET_MSK    0x00000800
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_BUF register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_BUF_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_BUF register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_BUF_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_BUF field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_BUF_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_BUF register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_BUF_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : Interrupt Mask Set - nand_wr
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_WR register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_WR_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_WR register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_WR_MSB        12
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_WR register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_WR_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_WR register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_WR_SET_MSK    0x00001000
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_WR register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_WR_CLR_MSK    0xffffefff
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_WR register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_WR_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_WR field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_WR_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_WR register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_WR_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : Interrupt Mask Set - nand_rd
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_RD register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_RD_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_RD register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_RD_MSB        13
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_RD register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_RD_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_RD register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_RD_SET_MSK    0x00002000
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_RD register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_RD_CLR_MSK    0xffffdfff
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_RD register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_RD_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_RD field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_RD_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_RD register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_NAND_RD_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Interrupt Mask Set - qspi
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_QSPI register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_QSPI_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_QSPI register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_QSPI_MSB        14
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_DERR_QSPI register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_QSPI_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_DERR_QSPI register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_QSPI_SET_MSK    0x00004000
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_DERR_QSPI register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_QSPI_CLR_MSK    0xffffbfff
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_DERR_QSPI register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_QSPI_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_DERR_QSPI field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_QSPI_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_DERR_QSPI register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_QSPI_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : Interrupt Mask Set - sdmmca
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCA register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCA_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCA register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCA_MSB        15
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCA register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCA register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCA_SET_MSK    0x00008000
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCA register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCA_CLR_MSK    0xffff7fff
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCA register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCA_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCA field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCA_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCA register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCA_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : Interrupt Mask Set - sdmmcb
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCB register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCB_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCB register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCB_MSB        16
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCB register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCB_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCB register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCB_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCB register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCB_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCB register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCB_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCB field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCB_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCB register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_SDMMCB_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : Interrupt Mask Set - ddr0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_DDR0 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_DDR0_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_DDR0 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_DDR0_MSB        17
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_DERR_DDR0 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_DDR0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_DERR_DDR0 register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_DDR0_SET_MSK    0x00020000
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_DERR_DDR0 register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_DDR0_CLR_MSK    0xfffdffff
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_DERR_DDR0 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_DDR0_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_DERR_DDR0 field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_DDR0_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_DERR_DDR0 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_DDR0_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : Interrupt Mask Set - ddr1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_DDR1 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_DDR1_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ECC_INTSTAT_DERR_DDR1 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_DDR1_MSB        18
/* The width in bits of the ALT_SYSMGR_ECC_INTSTAT_DERR_DDR1 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_DDR1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ECC_INTSTAT_DERR_DDR1 register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_DDR1_SET_MSK    0x00040000
/* The mask used to clear the ALT_SYSMGR_ECC_INTSTAT_DERR_DDR1 register field value. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_DDR1_CLR_MSK    0xfffbffff
/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_DERR_DDR1 register field. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_DDR1_RESET      0x0
/* Extracts the ALT_SYSMGR_ECC_INTSTAT_DERR_DDR1 field value from a register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_DDR1_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_SYSMGR_ECC_INTSTAT_DERR_DDR1 register field value suitable for setting the register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_DDR1_SET(value) (((value) << 18) & 0x00040000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_ECC_INTSTAT_DERR.
 */
struct ALT_SYSMGR_ECC_INTSTAT_DERR_s
{
    uint32_t  l2       :  1;  /* Interrupt Mask Set */
    uint32_t  ocram    :  1;  /* Interrupt Mask Set */
    uint32_t  usb0     :  1;  /* Interrupt Mask Set */
    uint32_t  usb1     :  1;  /* Interrupt Mask Set */
    uint32_t  emac0_rx :  1;  /* Interrupt Mask Set */
    uint32_t  emac0_tx :  1;  /* Interrupt Mask Set */
    uint32_t  emac1_rx :  1;  /* Interrupt Mask Set */
    uint32_t  emac1_tx :  1;  /* Interrupt Mask Set */
    uint32_t  emac2_rx :  1;  /* Interrupt Mask Set */
    uint32_t  emac2_tx :  1;  /* Interrupt Mask Set */
    uint32_t  dma      :  1;  /* Interrupt Mask Set */
    uint32_t  nand_buf :  1;  /* Interrupt Mask Set */
    uint32_t  nand_wr  :  1;  /* Interrupt Mask Set */
    uint32_t  nand_rd  :  1;  /* Interrupt Mask Set */
    uint32_t  qspi     :  1;  /* Interrupt Mask Set */
    uint32_t  sdmmca   :  1;  /* Interrupt Mask Set */
    uint32_t  sdmmcb   :  1;  /* Interrupt Mask Set */
    uint32_t  ddr0     :  1;  /* Interrupt Mask Set */
    uint32_t  ddr1     :  1;  /* Interrupt Mask Set */
    uint32_t           : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_ECC_INTSTAT_DERR. */
typedef volatile struct ALT_SYSMGR_ECC_INTSTAT_DERR_s  ALT_SYSMGR_ECC_INTSTAT_DERR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_ECC_INTSTAT_DERR register. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_ECC_INTSTAT_DERR register from the beginning of the component. */
#define ALT_SYSMGR_ECC_INTSTAT_DERR_OFST        0xa0

/*
 * Register : mpu_status_l2_ecc
 * 
 * This is a read only register which reads the current mpu L2 ecc interrupt
 * status.
 * 
 * A write to this register should return an error.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                            
 * :--------|:-------|:--------|:----------------------------------------
 *  [11:0]  | RW     | Unknown | ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_INFO   
 *  [14:12] | ???    | Unknown | *UNDEFINED*                            
 *  [15]    | RW     | Unknown | ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_PENDING
 *  [27:16] | RW     | Unknown | ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_INFO   
 *  [30:28] | ???    | Unknown | *UNDEFINED*                            
 *  [31]    | RW     | Unknown | ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_PENDING
 * 
 */
/*
 * Field : serr_info
 * 
 * 12 bit Serr Info field.
 * 
 * In Baum this will be the index and way information where the ECC error occured.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_INFO register field. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_INFO_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_INFO register field. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_INFO_MSB        11
/* The width in bits of the ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_INFO register field. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_INFO_WIDTH      12
/* The mask used to set the ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_INFO register field value. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_INFO_SET_MSK    0x00000fff
/* The mask used to clear the ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_INFO register field value. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_INFO_CLR_MSK    0xfffff000
/* The reset value of the ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_INFO register field is UNKNOWN. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_INFO_RESET      0x0
/* Extracts the ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_INFO field value from a register. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_INFO_GET(value) (((value) & 0x00000fff) >> 0)
/* Produces a ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_INFO register field value suitable for setting the register. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_INFO_SET(value) (((value) << 0) & 0x00000fff)

/*
 * Field : serr_pending
 * 
 * Unmaksed value of a pending single bit ECC error status.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_PENDING register field. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_PENDING_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_PENDING register field. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_PENDING_MSB        15
/* The width in bits of the ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_PENDING register field. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_PENDING_WIDTH      1
/* The mask used to set the ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_PENDING register field value. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_PENDING_SET_MSK    0x00008000
/* The mask used to clear the ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_PENDING register field value. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_PENDING_CLR_MSK    0xffff7fff
/* The reset value of the ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_PENDING register field is UNKNOWN. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_PENDING_RESET      0x0
/* Extracts the ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_PENDING field value from a register. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_PENDING_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_PENDING register field value suitable for setting the register. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_PENDING_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : merr_info
 * 
 * 12 bit Serr Info field.
 * 
 * In Baum this will be the index and way information where the ECC error occured.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_INFO register field. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_INFO_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_INFO register field. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_INFO_MSB        27
/* The width in bits of the ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_INFO register field. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_INFO_WIDTH      12
/* The mask used to set the ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_INFO register field value. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_INFO_SET_MSK    0x0fff0000
/* The mask used to clear the ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_INFO register field value. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_INFO_CLR_MSK    0xf000ffff
/* The reset value of the ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_INFO register field is UNKNOWN. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_INFO_RESET      0x0
/* Extracts the ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_INFO field value from a register. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_INFO_GET(value) (((value) & 0x0fff0000) >> 16)
/* Produces a ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_INFO register field value suitable for setting the register. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_INFO_SET(value) (((value) << 16) & 0x0fff0000)

/*
 * Field : merr_pending
 * 
 * Unmaksed value of a pending multiple bits ECC error status.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_PENDING register field. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_PENDING_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_PENDING register field. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_PENDING_MSB        31
/* The width in bits of the ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_PENDING register field. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_PENDING_WIDTH      1
/* The mask used to set the ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_PENDING register field value. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_PENDING_SET_MSK    0x80000000
/* The mask used to clear the ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_PENDING register field value. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_PENDING_CLR_MSK    0x7fffffff
/* The reset value of the ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_PENDING register field is UNKNOWN. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_PENDING_RESET      0x0
/* Extracts the ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_PENDING field value from a register. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_PENDING_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_PENDING register field value suitable for setting the register. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_PENDING_SET(value) (((value) << 31) & 0x80000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_MPU_STAT_L2_ECC.
 */
struct ALT_SYSMGR_MPU_STAT_L2_ECC_s
{
    uint32_t  serr_info    : 12;  /* ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_INFO */
    uint32_t               :  3;  /* *UNDEFINED* */
    uint32_t  serr_pending :  1;  /* ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_PENDING */
    uint32_t  merr_info    : 12;  /* ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_INFO */
    uint32_t               :  3;  /* *UNDEFINED* */
    uint32_t  merr_pending :  1;  /* ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_PENDING */
};

/* The typedef declaration for register ALT_SYSMGR_MPU_STAT_L2_ECC. */
typedef volatile struct ALT_SYSMGR_MPU_STAT_L2_ECC_s  ALT_SYSMGR_MPU_STAT_L2_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_MPU_STAT_L2_ECC register. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_MPU_STAT_L2_ECC register from the beginning of the component. */
#define ALT_SYSMGR_MPU_STAT_L2_ECC_OFST        0xa4

/*
 * Register : mpu_clear_l2_ecc
 * 
 * Write 1 to Clear register to clear the specific bit field of mpu l2 ecc
 * interrupt pending status
 * 
 * Reads should not return an error, but the read value is undefined.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                   
 * :--------|:-------|:------|:-------------------------------
 *  [14:0]  | ???    | 0x0   | *UNDEFINED*                   
 *  [15]    | RW     | 0x0   | ALT_SYSMGR_MPU_CLR_L2_ECC_SERR
 *  [30:16] | ???    | 0x0   | *UNDEFINED*                   
 *  [31]    | RW     | 0x0   | ALT_SYSMGR_MPU_CLR_L2_ECC_MERR
 * 
 */
/*
 * Field : serr
 * 
 * Write 1 to this field to clear the MPU L2 ECC single bit Error interrupt Status
 * and the actual Interrupt.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_MPU_CLR_L2_ECC_SERR register field. */
#define ALT_SYSMGR_MPU_CLR_L2_ECC_SERR_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_MPU_CLR_L2_ECC_SERR register field. */
#define ALT_SYSMGR_MPU_CLR_L2_ECC_SERR_MSB        15
/* The width in bits of the ALT_SYSMGR_MPU_CLR_L2_ECC_SERR register field. */
#define ALT_SYSMGR_MPU_CLR_L2_ECC_SERR_WIDTH      1
/* The mask used to set the ALT_SYSMGR_MPU_CLR_L2_ECC_SERR register field value. */
#define ALT_SYSMGR_MPU_CLR_L2_ECC_SERR_SET_MSK    0x00008000
/* The mask used to clear the ALT_SYSMGR_MPU_CLR_L2_ECC_SERR register field value. */
#define ALT_SYSMGR_MPU_CLR_L2_ECC_SERR_CLR_MSK    0xffff7fff
/* The reset value of the ALT_SYSMGR_MPU_CLR_L2_ECC_SERR register field. */
#define ALT_SYSMGR_MPU_CLR_L2_ECC_SERR_RESET      0x0
/* Extracts the ALT_SYSMGR_MPU_CLR_L2_ECC_SERR field value from a register. */
#define ALT_SYSMGR_MPU_CLR_L2_ECC_SERR_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_SYSMGR_MPU_CLR_L2_ECC_SERR register field value suitable for setting the register. */
#define ALT_SYSMGR_MPU_CLR_L2_ECC_SERR_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : merr
 * 
 * Write 1 to this field to clear the MPU L2 ECC multiple bit Error interrupt
 * Status and the actual Interrupt.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_MPU_CLR_L2_ECC_MERR register field. */
#define ALT_SYSMGR_MPU_CLR_L2_ECC_MERR_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_MPU_CLR_L2_ECC_MERR register field. */
#define ALT_SYSMGR_MPU_CLR_L2_ECC_MERR_MSB        31
/* The width in bits of the ALT_SYSMGR_MPU_CLR_L2_ECC_MERR register field. */
#define ALT_SYSMGR_MPU_CLR_L2_ECC_MERR_WIDTH      1
/* The mask used to set the ALT_SYSMGR_MPU_CLR_L2_ECC_MERR register field value. */
#define ALT_SYSMGR_MPU_CLR_L2_ECC_MERR_SET_MSK    0x80000000
/* The mask used to clear the ALT_SYSMGR_MPU_CLR_L2_ECC_MERR register field value. */
#define ALT_SYSMGR_MPU_CLR_L2_ECC_MERR_CLR_MSK    0x7fffffff
/* The reset value of the ALT_SYSMGR_MPU_CLR_L2_ECC_MERR register field. */
#define ALT_SYSMGR_MPU_CLR_L2_ECC_MERR_RESET      0x0
/* Extracts the ALT_SYSMGR_MPU_CLR_L2_ECC_MERR field value from a register. */
#define ALT_SYSMGR_MPU_CLR_L2_ECC_MERR_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_SYSMGR_MPU_CLR_L2_ECC_MERR register field value suitable for setting the register. */
#define ALT_SYSMGR_MPU_CLR_L2_ECC_MERR_SET(value) (((value) << 31) & 0x80000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_MPU_CLR_L2_ECC.
 */
struct ALT_SYSMGR_MPU_CLR_L2_ECC_s
{
    uint32_t       : 15;  /* *UNDEFINED* */
    uint32_t  serr :  1;  /* ALT_SYSMGR_MPU_CLR_L2_ECC_SERR */
    uint32_t       : 15;  /* *UNDEFINED* */
    uint32_t  merr :  1;  /* ALT_SYSMGR_MPU_CLR_L2_ECC_MERR */
};

/* The typedef declaration for register ALT_SYSMGR_MPU_CLR_L2_ECC. */
typedef volatile struct ALT_SYSMGR_MPU_CLR_L2_ECC_s  ALT_SYSMGR_MPU_CLR_L2_ECC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_MPU_CLR_L2_ECC register. */
#define ALT_SYSMGR_MPU_CLR_L2_ECC_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_MPU_CLR_L2_ECC register from the beginning of the component. */
#define ALT_SYSMGR_MPU_CLR_L2_ECC_OFST        0xa8

/*
 * Register : mpu_status_l1_parity
 * 
 * Parity status from L1 and scu. This is a read only register.
 * 
 * A write to this register should return an error.
 * 
 * [17] CPU1 SCU parity error
 * 
 * [16] CPU0 SCU parity error
 * 
 * [15] CPU1 BTAC parity error
 * 
 * [14] CPU1 GHB parity error
 * 
 * [13] CPU1 instruction tag RAM parity error
 * 
 * [12] CPU1 instruction data RAM parity error
 * 
 * [11] CPU1 main TLB parity error
 * 
 * [10] CPU1 data outer RAM parity error
 * 
 * [9]  CPU1 data tag RAM parity error
 * 
 * [8]  CPU1 data data RAM parity error.
 * 
 * [7]  CPU0 BTAC parity error
 * 
 * [6]  CPU0 GHB parity error
 * 
 * [5]  CPU0 instruction tag RAM parity error
 * 
 * [4]  CPU0 instruction data RAM parity error
 * 
 * [3]  CPU0 main TLB parity error
 * 
 * [2]  CPU0 data outer RAM parity error
 * 
 * [1]  CPU0 data tag RAM parity error
 * 
 * [0]  CPU0 data data RAM parity error.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                       
 * :--------|:-------|:--------|:-----------------------------------
 *  [7:0]   | RW     | Unknown | ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU0
 *  [15:8]  | RW     | Unknown | ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU1
 *  [17:16] | RW     | Unknown | ALT_SYSMGR_MPU_STAT_L1_PARITY_SCU 
 *  [31:18] | ???    | Unknown | *UNDEFINED*                       
 * 
 */
/*
 * Field : cpu0
 * 
 * CPU0 L1 parity interrupt status
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU0 register field. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU0 register field. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU0_MSB        7
/* The width in bits of the ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU0 register field. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU0_WIDTH      8
/* The mask used to set the ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU0 register field value. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU0_SET_MSK    0x000000ff
/* The mask used to clear the ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU0 register field value. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU0_CLR_MSK    0xffffff00
/* The reset value of the ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU0 register field is UNKNOWN. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU0_RESET      0x0
/* Extracts the ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU0 field value from a register. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU0_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU0 register field value suitable for setting the register. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU0_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : cpu1
 * 
 * CPU1 L1 parity interrupt status
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU1 register field. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU1_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU1 register field. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU1_MSB        15
/* The width in bits of the ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU1 register field. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU1_WIDTH      8
/* The mask used to set the ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU1 register field value. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU1_SET_MSK    0x0000ff00
/* The mask used to clear the ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU1 register field value. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU1_CLR_MSK    0xffff00ff
/* The reset value of the ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU1 register field is UNKNOWN. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU1_RESET      0x0
/* Extracts the ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU1 field value from a register. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU1_GET(value) (((value) & 0x0000ff00) >> 8)
/* Produces a ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU1 register field value suitable for setting the register. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU1_SET(value) (((value) << 8) & 0x0000ff00)

/*
 * Field : scu
 * 
 * SCU parity interrupt status
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_MPU_STAT_L1_PARITY_SCU register field. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_SCU_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_MPU_STAT_L1_PARITY_SCU register field. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_SCU_MSB        17
/* The width in bits of the ALT_SYSMGR_MPU_STAT_L1_PARITY_SCU register field. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_SCU_WIDTH      2
/* The mask used to set the ALT_SYSMGR_MPU_STAT_L1_PARITY_SCU register field value. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_SCU_SET_MSK    0x00030000
/* The mask used to clear the ALT_SYSMGR_MPU_STAT_L1_PARITY_SCU register field value. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_SCU_CLR_MSK    0xfffcffff
/* The reset value of the ALT_SYSMGR_MPU_STAT_L1_PARITY_SCU register field is UNKNOWN. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_SCU_RESET      0x0
/* Extracts the ALT_SYSMGR_MPU_STAT_L1_PARITY_SCU field value from a register. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_SCU_GET(value) (((value) & 0x00030000) >> 16)
/* Produces a ALT_SYSMGR_MPU_STAT_L1_PARITY_SCU register field value suitable for setting the register. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_SCU_SET(value) (((value) << 16) & 0x00030000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_MPU_STAT_L1_PARITY.
 */
struct ALT_SYSMGR_MPU_STAT_L1_PARITY_s
{
    uint32_t  cpu0 :  8;  /* ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU0 */
    uint32_t  cpu1 :  8;  /* ALT_SYSMGR_MPU_STAT_L1_PARITY_CPU1 */
    uint32_t  scu  :  2;  /* ALT_SYSMGR_MPU_STAT_L1_PARITY_SCU */
    uint32_t       : 14;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_MPU_STAT_L1_PARITY. */
typedef volatile struct ALT_SYSMGR_MPU_STAT_L1_PARITY_s  ALT_SYSMGR_MPU_STAT_L1_PARITY_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_MPU_STAT_L1_PARITY register. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_MPU_STAT_L1_PARITY register from the beginning of the component. */
#define ALT_SYSMGR_MPU_STAT_L1_PARITY_OFST        0xac

/*
 * Register : mpu_clear_l1_parity
 * 
 * Parity status clear bit.
 * 
 * A write to 1 of a specific bit clears the curresponding parity status bit.
 * 
 * A read of this register should not return an error, but the actual read value is
 * undefined.
 * 
 * [17] CPU1 SCU parity error
 * 
 * [16] CPU0 SCU parity error
 * 
 * [15] CPU1 BTAC parity error
 * 
 * [14] CPU1 GHB parity error
 * 
 * [13] CPU1 instruction tag RAM parity error
 * 
 * [12] CPU1 instruction data RAM parity error
 * 
 * [11] CPU1 main TLB parity error
 * 
 * [10] CPU1 data outer RAM parity error
 * 
 * [9]  CPU1 data tag RAM parity error
 * 
 * [8]  CPU1 data data RAM parity error.
 * 
 * [7]  CPU0 BTAC parity error
 * 
 * [6]  CPU0 GHB parity error
 * 
 * [5]  CPU0 instruction tag RAM parity error
 * 
 * [4]  CPU0 instruction data RAM parity error
 * 
 * [3]  CPU0 main TLB parity error
 * 
 * [2]  CPU0 data outer RAM parity error
 * 
 * [1]  CPU0 data tag RAM parity error
 * 
 * [0]  CPU0 data data RAM parity error.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                      
 * :--------|:-------|:------|:----------------------------------
 *  [7:0]   | RW     | 0x0   | ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU0
 *  [15:8]  | RW     | 0x0   | ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU1
 *  [17:16] | RW     | 0x0   | ALT_SYSMGR_MPU_CLR_L1_PARITY_SCU 
 *  [31:18] | ???    | 0x0   | *UNDEFINED*                      
 * 
 */
/*
 * Field : cpu0
 * 
 * CPU0 L1 parity interrupt clear. Write 1 to Clear
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU0 register field. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU0 register field. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU0_MSB        7
/* The width in bits of the ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU0 register field. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU0_WIDTH      8
/* The mask used to set the ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU0 register field value. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU0_SET_MSK    0x000000ff
/* The mask used to clear the ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU0 register field value. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU0_CLR_MSK    0xffffff00
/* The reset value of the ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU0 register field. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU0_RESET      0x0
/* Extracts the ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU0 field value from a register. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU0_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU0 register field value suitable for setting the register. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU0_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : cpu1
 * 
 * CPU1 L1 parity interrupt clear. Write 1 to Clear
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU1 register field. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU1_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU1 register field. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU1_MSB        15
/* The width in bits of the ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU1 register field. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU1_WIDTH      8
/* The mask used to set the ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU1 register field value. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU1_SET_MSK    0x0000ff00
/* The mask used to clear the ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU1 register field value. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU1_CLR_MSK    0xffff00ff
/* The reset value of the ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU1 register field. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU1_RESET      0x0
/* Extracts the ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU1 field value from a register. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU1_GET(value) (((value) & 0x0000ff00) >> 8)
/* Produces a ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU1 register field value suitable for setting the register. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU1_SET(value) (((value) << 8) & 0x0000ff00)

/*
 * Field : scu
 * 
 * SCU parity interrupt clear. Write 1 to Clear
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_MPU_CLR_L1_PARITY_SCU register field. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_SCU_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_MPU_CLR_L1_PARITY_SCU register field. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_SCU_MSB        17
/* The width in bits of the ALT_SYSMGR_MPU_CLR_L1_PARITY_SCU register field. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_SCU_WIDTH      2
/* The mask used to set the ALT_SYSMGR_MPU_CLR_L1_PARITY_SCU register field value. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_SCU_SET_MSK    0x00030000
/* The mask used to clear the ALT_SYSMGR_MPU_CLR_L1_PARITY_SCU register field value. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_SCU_CLR_MSK    0xfffcffff
/* The reset value of the ALT_SYSMGR_MPU_CLR_L1_PARITY_SCU register field. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_SCU_RESET      0x0
/* Extracts the ALT_SYSMGR_MPU_CLR_L1_PARITY_SCU field value from a register. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_SCU_GET(value) (((value) & 0x00030000) >> 16)
/* Produces a ALT_SYSMGR_MPU_CLR_L1_PARITY_SCU register field value suitable for setting the register. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_SCU_SET(value) (((value) << 16) & 0x00030000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_MPU_CLR_L1_PARITY.
 */
struct ALT_SYSMGR_MPU_CLR_L1_PARITY_s
{
    uint32_t  cpu0 :  8;  /* ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU0 */
    uint32_t  cpu1 :  8;  /* ALT_SYSMGR_MPU_CLR_L1_PARITY_CPU1 */
    uint32_t  scu  :  2;  /* ALT_SYSMGR_MPU_CLR_L1_PARITY_SCU */
    uint32_t       : 14;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_MPU_CLR_L1_PARITY. */
typedef volatile struct ALT_SYSMGR_MPU_CLR_L1_PARITY_s  ALT_SYSMGR_MPU_CLR_L1_PARITY_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_MPU_CLR_L1_PARITY register. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_MPU_CLR_L1_PARITY register from the beginning of the component. */
#define ALT_SYSMGR_MPU_CLR_L1_PARITY_OFST        0xb0

/*
 * Register : mpu_set_l1_parity
 * 
 * Parity status set bit.
 * 
 * A write to 1 of a specific bit sets the curresponding parity status bit.
 * 
 * This register is used only to check the specific ISR routine.
 * 
 * A read of this register should not return an error, but the actual read value is
 * undefined.
 * 
 * [17] CPU1 SCU parity error
 * 
 * [16] CPU0 SCU parity error
 * 
 * [15] CPU1 BTAC parity error
 * 
 * [14] CPU1 GHB parity error
 * 
 * [13] CPU1 instruction tag RAM parity error
 * 
 * [12] CPU1 instruction data RAM parity error
 * 
 * [11] CPU1 main TLB parity error
 * 
 * [10] CPU1 data outer RAM parity error
 * 
 * [9]  CPU1 data tag RAM parity error
 * 
 * [8]  CPU1 data data RAM parity error.
 * 
 * [7]  CPU0 BTAC parity error
 * 
 * [6]  CPU0 GHB parity error
 * 
 * [5]  CPU0 instruction tag RAM parity error
 * 
 * [4]  CPU0 instruction data RAM parity error
 * 
 * [3]  CPU0 main TLB parity error
 * 
 * [2]  CPU0 data outer RAM parity error
 * 
 * [1]  CPU0 data tag RAM parity error
 * 
 * [0]  CPU0 data data RAM parity error.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                      
 * :--------|:-------|:------|:----------------------------------
 *  [7:0]   | RW     | 0x0   | ALT_SYSMGR_MPU_SET_L1_PARITY_CPU0
 *  [15:8]  | RW     | 0x0   | ALT_SYSMGR_MPU_SET_L1_PARITY_CPU1
 *  [17:16] | RW     | 0x0   | ALT_SYSMGR_MPU_SET_L1_PARITY_SCU 
 *  [31:18] | ???    | 0x0   | *UNDEFINED*                      
 * 
 */
/*
 * Field : cpu0
 * 
 * CPU0 L1 parity interrupt set. Write 1 to Set
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_MPU_SET_L1_PARITY_CPU0 register field. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_CPU0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_MPU_SET_L1_PARITY_CPU0 register field. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_CPU0_MSB        7
/* The width in bits of the ALT_SYSMGR_MPU_SET_L1_PARITY_CPU0 register field. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_CPU0_WIDTH      8
/* The mask used to set the ALT_SYSMGR_MPU_SET_L1_PARITY_CPU0 register field value. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_CPU0_SET_MSK    0x000000ff
/* The mask used to clear the ALT_SYSMGR_MPU_SET_L1_PARITY_CPU0 register field value. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_CPU0_CLR_MSK    0xffffff00
/* The reset value of the ALT_SYSMGR_MPU_SET_L1_PARITY_CPU0 register field. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_CPU0_RESET      0x0
/* Extracts the ALT_SYSMGR_MPU_SET_L1_PARITY_CPU0 field value from a register. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_CPU0_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_SYSMGR_MPU_SET_L1_PARITY_CPU0 register field value suitable for setting the register. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_CPU0_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : cpu1
 * 
 * CPU1 L1 parity interrupt set. Write 1 to Set
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_MPU_SET_L1_PARITY_CPU1 register field. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_CPU1_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_MPU_SET_L1_PARITY_CPU1 register field. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_CPU1_MSB        15
/* The width in bits of the ALT_SYSMGR_MPU_SET_L1_PARITY_CPU1 register field. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_CPU1_WIDTH      8
/* The mask used to set the ALT_SYSMGR_MPU_SET_L1_PARITY_CPU1 register field value. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_CPU1_SET_MSK    0x0000ff00
/* The mask used to clear the ALT_SYSMGR_MPU_SET_L1_PARITY_CPU1 register field value. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_CPU1_CLR_MSK    0xffff00ff
/* The reset value of the ALT_SYSMGR_MPU_SET_L1_PARITY_CPU1 register field. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_CPU1_RESET      0x0
/* Extracts the ALT_SYSMGR_MPU_SET_L1_PARITY_CPU1 field value from a register. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_CPU1_GET(value) (((value) & 0x0000ff00) >> 8)
/* Produces a ALT_SYSMGR_MPU_SET_L1_PARITY_CPU1 register field value suitable for setting the register. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_CPU1_SET(value) (((value) << 8) & 0x0000ff00)

/*
 * Field : scu
 * 
 * SCU parity interrupt set. Write 1 to Set
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_MPU_SET_L1_PARITY_SCU register field. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_SCU_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_MPU_SET_L1_PARITY_SCU register field. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_SCU_MSB        17
/* The width in bits of the ALT_SYSMGR_MPU_SET_L1_PARITY_SCU register field. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_SCU_WIDTH      2
/* The mask used to set the ALT_SYSMGR_MPU_SET_L1_PARITY_SCU register field value. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_SCU_SET_MSK    0x00030000
/* The mask used to clear the ALT_SYSMGR_MPU_SET_L1_PARITY_SCU register field value. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_SCU_CLR_MSK    0xfffcffff
/* The reset value of the ALT_SYSMGR_MPU_SET_L1_PARITY_SCU register field. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_SCU_RESET      0x0
/* Extracts the ALT_SYSMGR_MPU_SET_L1_PARITY_SCU field value from a register. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_SCU_GET(value) (((value) & 0x00030000) >> 16)
/* Produces a ALT_SYSMGR_MPU_SET_L1_PARITY_SCU register field value suitable for setting the register. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_SCU_SET(value) (((value) << 16) & 0x00030000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_MPU_SET_L1_PARITY.
 */
struct ALT_SYSMGR_MPU_SET_L1_PARITY_s
{
    uint32_t  cpu0 :  8;  /* ALT_SYSMGR_MPU_SET_L1_PARITY_CPU0 */
    uint32_t  cpu1 :  8;  /* ALT_SYSMGR_MPU_SET_L1_PARITY_CPU1 */
    uint32_t  scu  :  2;  /* ALT_SYSMGR_MPU_SET_L1_PARITY_SCU */
    uint32_t       : 14;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_MPU_SET_L1_PARITY. */
typedef volatile struct ALT_SYSMGR_MPU_SET_L1_PARITY_s  ALT_SYSMGR_MPU_SET_L1_PARITY_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_MPU_SET_L1_PARITY register. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_MPU_SET_L1_PARITY register from the beginning of the component. */
#define ALT_SYSMGR_MPU_SET_L1_PARITY_OFST        0xb4

/*
 * Register : noc_timeout
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description          
 * :-------|:-------|:------|:----------------------
 *  [0]    | RW     | 0x0   | ALT_SYSMGR_NOC_TMO_EN
 *  [31:1] | ???    | 0x0   | *UNDEFINED*          
 * 
 */
/*
 * Field : en
 * 
 * NOC Timeout Enable. Write 1 to enable noc timeout.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_TMO_EN register field. */
#define ALT_SYSMGR_NOC_TMO_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_TMO_EN register field. */
#define ALT_SYSMGR_NOC_TMO_EN_MSB        0
/* The width in bits of the ALT_SYSMGR_NOC_TMO_EN register field. */
#define ALT_SYSMGR_NOC_TMO_EN_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_TMO_EN register field value. */
#define ALT_SYSMGR_NOC_TMO_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_NOC_TMO_EN register field value. */
#define ALT_SYSMGR_NOC_TMO_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_NOC_TMO_EN register field. */
#define ALT_SYSMGR_NOC_TMO_EN_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_TMO_EN field value from a register. */
#define ALT_SYSMGR_NOC_TMO_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_NOC_TMO_EN register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_TMO_EN_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_NOC_TMO.
 */
struct ALT_SYSMGR_NOC_TMO_s
{
    uint32_t  en :  1;  /* ALT_SYSMGR_NOC_TMO_EN */
    uint32_t     : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_NOC_TMO. */
typedef volatile struct ALT_SYSMGR_NOC_TMO_s  ALT_SYSMGR_NOC_TMO_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_NOC_TMO register. */
#define ALT_SYSMGR_NOC_TMO_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_NOC_TMO register from the beginning of the component. */
#define ALT_SYSMGR_NOC_TMO_OFST        0xc0

/*
 * Register : noc_idlereq_set
 * 
 * Set IDLE request to each NOC master.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                      
 * :--------|:-------|:--------|:----------------------------------
 *  [0]     | RW     | Unknown | ALT_SYSMGR_NOC_IDLEREQ_SET_H2F   
 *  [3:1]   | ???    | Unknown | *UNDEFINED*                      
 *  [4]     | RW     | Unknown | ALT_SYSMGR_NOC_IDLEREQ_SET_LWH2F 
 *  [7:5]   | ???    | Unknown | *UNDEFINED*                      
 *  [8]     | RW     | Unknown | ALT_SYSMGR_NOC_IDLEREQ_SET_F2H   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                      
 *  [16]    | RW     | Unknown | ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR0
 *  [19:17] | ???    | Unknown | *UNDEFINED*                      
 *  [20]    | RW     | Unknown | ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR1
 *  [23:21] | ???    | Unknown | *UNDEFINED*                      
 *  [24]    | RW     | Unknown | ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR2
 *  [31:25] | ???    | Unknown | *UNDEFINED*                      
 * 
 */
/*
 * Field : soc2fpga
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLEREQ_SET_H2F register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_H2F_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLEREQ_SET_H2F register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_H2F_MSB        0
/* The width in bits of the ALT_SYSMGR_NOC_IDLEREQ_SET_H2F register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_H2F_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLEREQ_SET_H2F register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_H2F_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_NOC_IDLEREQ_SET_H2F register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_H2F_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_NOC_IDLEREQ_SET_H2F register field is UNKNOWN. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_H2F_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLEREQ_SET_H2F field value from a register. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_H2F_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_NOC_IDLEREQ_SET_H2F register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_H2F_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : lwsoc2fpga
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLEREQ_SET_LWH2F register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_LWH2F_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLEREQ_SET_LWH2F register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_LWH2F_MSB        4
/* The width in bits of the ALT_SYSMGR_NOC_IDLEREQ_SET_LWH2F register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_LWH2F_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLEREQ_SET_LWH2F register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_LWH2F_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_NOC_IDLEREQ_SET_LWH2F register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_LWH2F_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_NOC_IDLEREQ_SET_LWH2F register field is UNKNOWN. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_LWH2F_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLEREQ_SET_LWH2F field value from a register. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_LWH2F_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_NOC_IDLEREQ_SET_LWH2F register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_LWH2F_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : fpga2soc
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLEREQ_SET_F2H register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2H_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLEREQ_SET_F2H register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2H_MSB        8
/* The width in bits of the ALT_SYSMGR_NOC_IDLEREQ_SET_F2H register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2H_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLEREQ_SET_F2H register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2H_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_NOC_IDLEREQ_SET_F2H register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2H_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_NOC_IDLEREQ_SET_F2H register field is UNKNOWN. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2H_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLEREQ_SET_F2H field value from a register. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2H_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_NOC_IDLEREQ_SET_F2H register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2H_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2sdram0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR0 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR0_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR0 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR0_MSB        16
/* The width in bits of the ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR0 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR0 register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR0_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR0 register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR0_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR0 register field is UNKNOWN. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR0_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR0 field value from a register. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR0_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR0 register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR0_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : fpga2sdram1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR1 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR1_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR1 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR1_MSB        20
/* The width in bits of the ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR1 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR1 register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR1_SET_MSK    0x00100000
/* The mask used to clear the ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR1 register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR1_CLR_MSK    0xffefffff
/* The reset value of the ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR1 register field is UNKNOWN. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR1_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR1 field value from a register. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR1_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR1 register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR1_SET(value) (((value) << 20) & 0x00100000)

/*
 * Field : fpga2sdram2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR2 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR2_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR2 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR2_MSB        24
/* The width in bits of the ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR2 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR2_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR2 register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR2_SET_MSK    0x01000000
/* The mask used to clear the ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR2 register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR2_CLR_MSK    0xfeffffff
/* The reset value of the ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR2 register field is UNKNOWN. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR2_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR2 field value from a register. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR2_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR2 register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR2_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_NOC_IDLEREQ_SET.
 */
struct ALT_SYSMGR_NOC_IDLEREQ_SET_s
{
    uint32_t  soc2fpga    :  1;  /* ALT_SYSMGR_NOC_IDLEREQ_SET_H2F */
    uint32_t              :  3;  /* *UNDEFINED* */
    uint32_t  lwsoc2fpga  :  1;  /* ALT_SYSMGR_NOC_IDLEREQ_SET_LWH2F */
    uint32_t              :  3;  /* *UNDEFINED* */
    uint32_t  fpga2soc    :  1;  /* ALT_SYSMGR_NOC_IDLEREQ_SET_F2H */
    uint32_t              :  7;  /* *UNDEFINED* */
    uint32_t  fpga2sdram0 :  1;  /* ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR0 */
    uint32_t              :  3;  /* *UNDEFINED* */
    uint32_t  fpga2sdram1 :  1;  /* ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR1 */
    uint32_t              :  3;  /* *UNDEFINED* */
    uint32_t  fpga2sdram2 :  1;  /* ALT_SYSMGR_NOC_IDLEREQ_SET_F2SDR2 */
    uint32_t              :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_NOC_IDLEREQ_SET. */
typedef volatile struct ALT_SYSMGR_NOC_IDLEREQ_SET_s  ALT_SYSMGR_NOC_IDLEREQ_SET_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_NOC_IDLEREQ_SET register. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_NOC_IDLEREQ_SET register from the beginning of the component. */
#define ALT_SYSMGR_NOC_IDLEREQ_SET_OFST        0xc4

/*
 * Register : noc_idlereq_clr
 * 
 * Clear IDLE request to each NOC master.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                      
 * :--------|:-------|:--------|:----------------------------------
 *  [0]     | RW     | Unknown | ALT_SYSMGR_NOC_IDLEREQ_CLR_H2F   
 *  [3:1]   | ???    | Unknown | *UNDEFINED*                      
 *  [4]     | RW     | Unknown | ALT_SYSMGR_NOC_IDLEREQ_CLR_LWH2F 
 *  [7:5]   | ???    | Unknown | *UNDEFINED*                      
 *  [8]     | RW     | Unknown | ALT_SYSMGR_NOC_IDLEREQ_CLR_F2H   
 *  [15:9]  | ???    | Unknown | *UNDEFINED*                      
 *  [16]    | RW     | Unknown | ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR0
 *  [19:17] | ???    | Unknown | *UNDEFINED*                      
 *  [20]    | RW     | Unknown | ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR1
 *  [23:21] | ???    | Unknown | *UNDEFINED*                      
 *  [24]    | RW     | Unknown | ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR2
 *  [31:25] | ???    | Unknown | *UNDEFINED*                      
 * 
 */
/*
 * Field : soc2fpga
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLEREQ_CLR_H2F register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_H2F_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLEREQ_CLR_H2F register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_H2F_MSB        0
/* The width in bits of the ALT_SYSMGR_NOC_IDLEREQ_CLR_H2F register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_H2F_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLEREQ_CLR_H2F register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_H2F_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_NOC_IDLEREQ_CLR_H2F register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_H2F_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_NOC_IDLEREQ_CLR_H2F register field is UNKNOWN. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_H2F_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLEREQ_CLR_H2F field value from a register. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_H2F_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_NOC_IDLEREQ_CLR_H2F register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_H2F_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : lwsoc2fpga
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLEREQ_CLR_LWH2F register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_LWH2F_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLEREQ_CLR_LWH2F register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_LWH2F_MSB        4
/* The width in bits of the ALT_SYSMGR_NOC_IDLEREQ_CLR_LWH2F register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_LWH2F_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLEREQ_CLR_LWH2F register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_LWH2F_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_NOC_IDLEREQ_CLR_LWH2F register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_LWH2F_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_NOC_IDLEREQ_CLR_LWH2F register field is UNKNOWN. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_LWH2F_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLEREQ_CLR_LWH2F field value from a register. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_LWH2F_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_NOC_IDLEREQ_CLR_LWH2F register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_LWH2F_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : fpga2soc
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2H register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2H_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2H register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2H_MSB        8
/* The width in bits of the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2H register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2H_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2H register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2H_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2H register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2H_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2H register field is UNKNOWN. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2H_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2H field value from a register. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2H_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_NOC_IDLEREQ_CLR_F2H register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2H_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2sdram0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR0 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR0_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR0 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR0_MSB        16
/* The width in bits of the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR0 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR0 register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR0_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR0 register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR0_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR0 register field is UNKNOWN. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR0_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR0 field value from a register. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR0_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR0 register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR0_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : fpga2sdram1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR1 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR1_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR1 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR1_MSB        20
/* The width in bits of the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR1 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR1 register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR1_SET_MSK    0x00100000
/* The mask used to clear the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR1 register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR1_CLR_MSK    0xffefffff
/* The reset value of the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR1 register field is UNKNOWN. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR1_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR1 field value from a register. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR1_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR1 register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR1_SET(value) (((value) << 20) & 0x00100000)

/*
 * Field : fpga2sdram2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR2 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR2_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR2 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR2_MSB        24
/* The width in bits of the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR2 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR2_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR2 register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR2_SET_MSK    0x01000000
/* The mask used to clear the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR2 register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR2_CLR_MSK    0xfeffffff
/* The reset value of the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR2 register field is UNKNOWN. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR2_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR2 field value from a register. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR2_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR2 register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR2_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_NOC_IDLEREQ_CLR.
 */
struct ALT_SYSMGR_NOC_IDLEREQ_CLR_s
{
    uint32_t  soc2fpga    :  1;  /* ALT_SYSMGR_NOC_IDLEREQ_CLR_H2F */
    uint32_t              :  3;  /* *UNDEFINED* */
    uint32_t  lwsoc2fpga  :  1;  /* ALT_SYSMGR_NOC_IDLEREQ_CLR_LWH2F */
    uint32_t              :  3;  /* *UNDEFINED* */
    uint32_t  fpga2soc    :  1;  /* ALT_SYSMGR_NOC_IDLEREQ_CLR_F2H */
    uint32_t              :  7;  /* *UNDEFINED* */
    uint32_t  fpga2sdram0 :  1;  /* ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR0 */
    uint32_t              :  3;  /* *UNDEFINED* */
    uint32_t  fpga2sdram1 :  1;  /* ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR1 */
    uint32_t              :  3;  /* *UNDEFINED* */
    uint32_t  fpga2sdram2 :  1;  /* ALT_SYSMGR_NOC_IDLEREQ_CLR_F2SDR2 */
    uint32_t              :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_NOC_IDLEREQ_CLR. */
typedef volatile struct ALT_SYSMGR_NOC_IDLEREQ_CLR_s  ALT_SYSMGR_NOC_IDLEREQ_CLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_NOC_IDLEREQ_CLR register. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_NOC_IDLEREQ_CLR register from the beginning of the component. */
#define ALT_SYSMGR_NOC_IDLEREQ_CLR_OFST        0xc8

/*
 * Register : noc_idlereq_value
 * 
 * IDLE request to each NOC master.
 * 
 * This register can be set by writing 1 to the specific bit in noc_idlereq_set
 * register.
 * 
 * This register can be cleared by writing 1 to the specific bit in noc_idlereq_clr
 * register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                        
 * :--------|:-------|:------|:------------------------------------
 *  [0]     | RW     | 0x0   | ALT_SYSMGR_NOC_IDLEREQ_VALUE_H2F   
 *  [3:1]   | ???    | 0x0   | *UNDEFINED*                        
 *  [4]     | RW     | 0x0   | ALT_SYSMGR_NOC_IDLEREQ_VALUE_LWH2F 
 *  [7:5]   | ???    | 0x0   | *UNDEFINED*                        
 *  [8]     | RW     | 0x0   | ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2H   
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*                        
 *  [16]    | RW     | 0x0   | ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR0
 *  [19:17] | ???    | 0x0   | *UNDEFINED*                        
 *  [20]    | RW     | 0x0   | ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR1
 *  [23:21] | ???    | 0x0   | *UNDEFINED*                        
 *  [24]    | RW     | 0x0   | ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR2
 *  [31:25] | ???    | 0x0   | *UNDEFINED*                        
 * 
 */
/*
 * Field : soc2fpga
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLEREQ_VALUE_H2F register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_H2F_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLEREQ_VALUE_H2F register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_H2F_MSB        0
/* The width in bits of the ALT_SYSMGR_NOC_IDLEREQ_VALUE_H2F register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_H2F_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLEREQ_VALUE_H2F register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_H2F_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_NOC_IDLEREQ_VALUE_H2F register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_H2F_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_NOC_IDLEREQ_VALUE_H2F register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_H2F_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLEREQ_VALUE_H2F field value from a register. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_H2F_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_NOC_IDLEREQ_VALUE_H2F register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_H2F_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : lwsoc2fpga
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLEREQ_VALUE_LWH2F register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_LWH2F_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLEREQ_VALUE_LWH2F register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_LWH2F_MSB        4
/* The width in bits of the ALT_SYSMGR_NOC_IDLEREQ_VALUE_LWH2F register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_LWH2F_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLEREQ_VALUE_LWH2F register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_LWH2F_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_NOC_IDLEREQ_VALUE_LWH2F register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_LWH2F_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_NOC_IDLEREQ_VALUE_LWH2F register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_LWH2F_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLEREQ_VALUE_LWH2F field value from a register. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_LWH2F_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_NOC_IDLEREQ_VALUE_LWH2F register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_LWH2F_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : fpga2soc
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2H register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2H_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2H register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2H_MSB        8
/* The width in bits of the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2H register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2H_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2H register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2H_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2H register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2H_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2H register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2H_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2H field value from a register. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2H_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2H register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2H_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2sdram0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR0 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR0_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR0 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR0_MSB        16
/* The width in bits of the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR0 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR0 register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR0_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR0 register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR0_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR0 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR0_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR0 field value from a register. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR0_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR0 register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR0_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : fpga2sdram1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR1 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR1_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR1 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR1_MSB        20
/* The width in bits of the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR1 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR1 register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR1_SET_MSK    0x00100000
/* The mask used to clear the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR1 register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR1_CLR_MSK    0xffefffff
/* The reset value of the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR1 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR1_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR1 field value from a register. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR1_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR1 register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR1_SET(value) (((value) << 20) & 0x00100000)

/*
 * Field : fpga2sdram2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR2 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR2_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR2 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR2_MSB        24
/* The width in bits of the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR2 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR2_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR2 register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR2_SET_MSK    0x01000000
/* The mask used to clear the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR2 register field value. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR2_CLR_MSK    0xfeffffff
/* The reset value of the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR2 register field. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR2_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR2 field value from a register. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR2_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR2 register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR2_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_NOC_IDLEREQ_VALUE.
 */
struct ALT_SYSMGR_NOC_IDLEREQ_VALUE_s
{
    uint32_t  soc2fpga    :  1;  /* ALT_SYSMGR_NOC_IDLEREQ_VALUE_H2F */
    uint32_t              :  3;  /* *UNDEFINED* */
    uint32_t  lwsoc2fpga  :  1;  /* ALT_SYSMGR_NOC_IDLEREQ_VALUE_LWH2F */
    uint32_t              :  3;  /* *UNDEFINED* */
    uint32_t  fpga2soc    :  1;  /* ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2H */
    uint32_t              :  7;  /* *UNDEFINED* */
    uint32_t  fpga2sdram0 :  1;  /* ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR0 */
    uint32_t              :  3;  /* *UNDEFINED* */
    uint32_t  fpga2sdram1 :  1;  /* ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR1 */
    uint32_t              :  3;  /* *UNDEFINED* */
    uint32_t  fpga2sdram2 :  1;  /* ALT_SYSMGR_NOC_IDLEREQ_VALUE_F2SDR2 */
    uint32_t              :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_NOC_IDLEREQ_VALUE. */
typedef volatile struct ALT_SYSMGR_NOC_IDLEREQ_VALUE_s  ALT_SYSMGR_NOC_IDLEREQ_VALUE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_NOC_IDLEREQ_VALUE register. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_NOC_IDLEREQ_VALUE register from the beginning of the component. */
#define ALT_SYSMGR_NOC_IDLEREQ_VALUE_OFST        0xcc

/*
 * Register : noc_idleack
 * 
 * Idle acknowledge value from NOC Masters. This is asserted (value 1 in the field)
 * in response to the IDLE requests asserted by software.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                  
 * :--------|:-------|:------|:------------------------------
 *  [0]     | RW     | 0x0   | ALT_SYSMGR_NOC_IDLEACK_H2F   
 *  [3:1]   | ???    | 0x0   | *UNDEFINED*                  
 *  [4]     | RW     | 0x0   | ALT_SYSMGR_NOC_IDLEACK_LWH2F 
 *  [7:5]   | ???    | 0x0   | *UNDEFINED*                  
 *  [8]     | RW     | 0x0   | ALT_SYSMGR_NOC_IDLEACK_F2H   
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*                  
 *  [16]    | RW     | 0x0   | ALT_SYSMGR_NOC_IDLEACK_F2SDR0
 *  [19:17] | ???    | 0x0   | *UNDEFINED*                  
 *  [20]    | RW     | 0x0   | ALT_SYSMGR_NOC_IDLEACK_F2SDR1
 *  [23:21] | ???    | 0x0   | *UNDEFINED*                  
 *  [24]    | RW     | 0x0   | ALT_SYSMGR_NOC_IDLEACK_F2SDR2
 *  [31:25] | ???    | 0x0   | *UNDEFINED*                  
 * 
 */
/*
 * Field : soc2fpga
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLEACK_H2F register field. */
#define ALT_SYSMGR_NOC_IDLEACK_H2F_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLEACK_H2F register field. */
#define ALT_SYSMGR_NOC_IDLEACK_H2F_MSB        0
/* The width in bits of the ALT_SYSMGR_NOC_IDLEACK_H2F register field. */
#define ALT_SYSMGR_NOC_IDLEACK_H2F_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLEACK_H2F register field value. */
#define ALT_SYSMGR_NOC_IDLEACK_H2F_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_NOC_IDLEACK_H2F register field value. */
#define ALT_SYSMGR_NOC_IDLEACK_H2F_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_NOC_IDLEACK_H2F register field. */
#define ALT_SYSMGR_NOC_IDLEACK_H2F_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLEACK_H2F field value from a register. */
#define ALT_SYSMGR_NOC_IDLEACK_H2F_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_NOC_IDLEACK_H2F register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLEACK_H2F_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : lwsoc2fpga
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLEACK_LWH2F register field. */
#define ALT_SYSMGR_NOC_IDLEACK_LWH2F_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLEACK_LWH2F register field. */
#define ALT_SYSMGR_NOC_IDLEACK_LWH2F_MSB        4
/* The width in bits of the ALT_SYSMGR_NOC_IDLEACK_LWH2F register field. */
#define ALT_SYSMGR_NOC_IDLEACK_LWH2F_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLEACK_LWH2F register field value. */
#define ALT_SYSMGR_NOC_IDLEACK_LWH2F_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_NOC_IDLEACK_LWH2F register field value. */
#define ALT_SYSMGR_NOC_IDLEACK_LWH2F_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_NOC_IDLEACK_LWH2F register field. */
#define ALT_SYSMGR_NOC_IDLEACK_LWH2F_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLEACK_LWH2F field value from a register. */
#define ALT_SYSMGR_NOC_IDLEACK_LWH2F_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_NOC_IDLEACK_LWH2F register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLEACK_LWH2F_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : fpga2soc
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLEACK_F2H register field. */
#define ALT_SYSMGR_NOC_IDLEACK_F2H_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLEACK_F2H register field. */
#define ALT_SYSMGR_NOC_IDLEACK_F2H_MSB        8
/* The width in bits of the ALT_SYSMGR_NOC_IDLEACK_F2H register field. */
#define ALT_SYSMGR_NOC_IDLEACK_F2H_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLEACK_F2H register field value. */
#define ALT_SYSMGR_NOC_IDLEACK_F2H_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_NOC_IDLEACK_F2H register field value. */
#define ALT_SYSMGR_NOC_IDLEACK_F2H_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_NOC_IDLEACK_F2H register field. */
#define ALT_SYSMGR_NOC_IDLEACK_F2H_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLEACK_F2H field value from a register. */
#define ALT_SYSMGR_NOC_IDLEACK_F2H_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_NOC_IDLEACK_F2H register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLEACK_F2H_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2sdram0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLEACK_F2SDR0 register field. */
#define ALT_SYSMGR_NOC_IDLEACK_F2SDR0_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLEACK_F2SDR0 register field. */
#define ALT_SYSMGR_NOC_IDLEACK_F2SDR0_MSB        16
/* The width in bits of the ALT_SYSMGR_NOC_IDLEACK_F2SDR0 register field. */
#define ALT_SYSMGR_NOC_IDLEACK_F2SDR0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLEACK_F2SDR0 register field value. */
#define ALT_SYSMGR_NOC_IDLEACK_F2SDR0_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_NOC_IDLEACK_F2SDR0 register field value. */
#define ALT_SYSMGR_NOC_IDLEACK_F2SDR0_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_NOC_IDLEACK_F2SDR0 register field. */
#define ALT_SYSMGR_NOC_IDLEACK_F2SDR0_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLEACK_F2SDR0 field value from a register. */
#define ALT_SYSMGR_NOC_IDLEACK_F2SDR0_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_NOC_IDLEACK_F2SDR0 register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLEACK_F2SDR0_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : fpga2sdram1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLEACK_F2SDR1 register field. */
#define ALT_SYSMGR_NOC_IDLEACK_F2SDR1_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLEACK_F2SDR1 register field. */
#define ALT_SYSMGR_NOC_IDLEACK_F2SDR1_MSB        20
/* The width in bits of the ALT_SYSMGR_NOC_IDLEACK_F2SDR1 register field. */
#define ALT_SYSMGR_NOC_IDLEACK_F2SDR1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLEACK_F2SDR1 register field value. */
#define ALT_SYSMGR_NOC_IDLEACK_F2SDR1_SET_MSK    0x00100000
/* The mask used to clear the ALT_SYSMGR_NOC_IDLEACK_F2SDR1 register field value. */
#define ALT_SYSMGR_NOC_IDLEACK_F2SDR1_CLR_MSK    0xffefffff
/* The reset value of the ALT_SYSMGR_NOC_IDLEACK_F2SDR1 register field. */
#define ALT_SYSMGR_NOC_IDLEACK_F2SDR1_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLEACK_F2SDR1 field value from a register. */
#define ALT_SYSMGR_NOC_IDLEACK_F2SDR1_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_SYSMGR_NOC_IDLEACK_F2SDR1 register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLEACK_F2SDR1_SET(value) (((value) << 20) & 0x00100000)

/*
 * Field : fpga2sdram2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLEACK_F2SDR2 register field. */
#define ALT_SYSMGR_NOC_IDLEACK_F2SDR2_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLEACK_F2SDR2 register field. */
#define ALT_SYSMGR_NOC_IDLEACK_F2SDR2_MSB        24
/* The width in bits of the ALT_SYSMGR_NOC_IDLEACK_F2SDR2 register field. */
#define ALT_SYSMGR_NOC_IDLEACK_F2SDR2_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLEACK_F2SDR2 register field value. */
#define ALT_SYSMGR_NOC_IDLEACK_F2SDR2_SET_MSK    0x01000000
/* The mask used to clear the ALT_SYSMGR_NOC_IDLEACK_F2SDR2 register field value. */
#define ALT_SYSMGR_NOC_IDLEACK_F2SDR2_CLR_MSK    0xfeffffff
/* The reset value of the ALT_SYSMGR_NOC_IDLEACK_F2SDR2 register field. */
#define ALT_SYSMGR_NOC_IDLEACK_F2SDR2_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLEACK_F2SDR2 field value from a register. */
#define ALT_SYSMGR_NOC_IDLEACK_F2SDR2_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_SYSMGR_NOC_IDLEACK_F2SDR2 register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLEACK_F2SDR2_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_NOC_IDLEACK.
 */
struct ALT_SYSMGR_NOC_IDLEACK_s
{
    uint32_t  soc2fpga    :  1;  /* ALT_SYSMGR_NOC_IDLEACK_H2F */
    uint32_t              :  3;  /* *UNDEFINED* */
    uint32_t  lwsoc2fpga  :  1;  /* ALT_SYSMGR_NOC_IDLEACK_LWH2F */
    uint32_t              :  3;  /* *UNDEFINED* */
    uint32_t  fpga2soc    :  1;  /* ALT_SYSMGR_NOC_IDLEACK_F2H */
    uint32_t              :  7;  /* *UNDEFINED* */
    uint32_t  fpga2sdram0 :  1;  /* ALT_SYSMGR_NOC_IDLEACK_F2SDR0 */
    uint32_t              :  3;  /* *UNDEFINED* */
    uint32_t  fpga2sdram1 :  1;  /* ALT_SYSMGR_NOC_IDLEACK_F2SDR1 */
    uint32_t              :  3;  /* *UNDEFINED* */
    uint32_t  fpga2sdram2 :  1;  /* ALT_SYSMGR_NOC_IDLEACK_F2SDR2 */
    uint32_t              :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_NOC_IDLEACK. */
typedef volatile struct ALT_SYSMGR_NOC_IDLEACK_s  ALT_SYSMGR_NOC_IDLEACK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_NOC_IDLEACK register. */
#define ALT_SYSMGR_NOC_IDLEACK_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_NOC_IDLEACK register from the beginning of the component. */
#define ALT_SYSMGR_NOC_IDLEACK_OFST        0xd0

/*
 * Register : noc_idlestatus
 * 
 * Status of IDLE from the NOC masters. A 1 in the field means the specific master
 * is idle.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                   
 * :--------|:-------|:------|:-------------------------------
 *  [0]     | RW     | 0x0   | ALT_SYSMGR_NOC_IDLESTAT_H2F   
 *  [3:1]   | ???    | 0x0   | *UNDEFINED*                   
 *  [4]     | RW     | 0x0   | ALT_SYSMGR_NOC_IDLESTAT_LWH2F 
 *  [7:5]   | ???    | 0x0   | *UNDEFINED*                   
 *  [8]     | RW     | 0x0   | ALT_SYSMGR_NOC_IDLESTAT_F2H   
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*                   
 *  [16]    | RW     | 0x0   | ALT_SYSMGR_NOC_IDLESTAT_F2SDR0
 *  [19:17] | ???    | 0x0   | *UNDEFINED*                   
 *  [20]    | RW     | 0x0   | ALT_SYSMGR_NOC_IDLESTAT_F2SDR1
 *  [23:21] | ???    | 0x0   | *UNDEFINED*                   
 *  [24]    | RW     | 0x0   | ALT_SYSMGR_NOC_IDLESTAT_F2SDR2
 *  [31:25] | ???    | 0x0   | *UNDEFINED*                   
 * 
 */
/*
 * Field : soc2fpga
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLESTAT_H2F register field. */
#define ALT_SYSMGR_NOC_IDLESTAT_H2F_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLESTAT_H2F register field. */
#define ALT_SYSMGR_NOC_IDLESTAT_H2F_MSB        0
/* The width in bits of the ALT_SYSMGR_NOC_IDLESTAT_H2F register field. */
#define ALT_SYSMGR_NOC_IDLESTAT_H2F_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLESTAT_H2F register field value. */
#define ALT_SYSMGR_NOC_IDLESTAT_H2F_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_NOC_IDLESTAT_H2F register field value. */
#define ALT_SYSMGR_NOC_IDLESTAT_H2F_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_NOC_IDLESTAT_H2F register field. */
#define ALT_SYSMGR_NOC_IDLESTAT_H2F_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLESTAT_H2F field value from a register. */
#define ALT_SYSMGR_NOC_IDLESTAT_H2F_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_NOC_IDLESTAT_H2F register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLESTAT_H2F_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : lwsoc2fpga
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLESTAT_LWH2F register field. */
#define ALT_SYSMGR_NOC_IDLESTAT_LWH2F_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLESTAT_LWH2F register field. */
#define ALT_SYSMGR_NOC_IDLESTAT_LWH2F_MSB        4
/* The width in bits of the ALT_SYSMGR_NOC_IDLESTAT_LWH2F register field. */
#define ALT_SYSMGR_NOC_IDLESTAT_LWH2F_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLESTAT_LWH2F register field value. */
#define ALT_SYSMGR_NOC_IDLESTAT_LWH2F_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_NOC_IDLESTAT_LWH2F register field value. */
#define ALT_SYSMGR_NOC_IDLESTAT_LWH2F_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_NOC_IDLESTAT_LWH2F register field. */
#define ALT_SYSMGR_NOC_IDLESTAT_LWH2F_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLESTAT_LWH2F field value from a register. */
#define ALT_SYSMGR_NOC_IDLESTAT_LWH2F_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_NOC_IDLESTAT_LWH2F register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLESTAT_LWH2F_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : fpga2soc
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLESTAT_F2H register field. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2H_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLESTAT_F2H register field. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2H_MSB        8
/* The width in bits of the ALT_SYSMGR_NOC_IDLESTAT_F2H register field. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2H_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLESTAT_F2H register field value. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2H_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_NOC_IDLESTAT_F2H register field value. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2H_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_NOC_IDLESTAT_F2H register field. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2H_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLESTAT_F2H field value from a register. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2H_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_NOC_IDLESTAT_F2H register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2H_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : fpga2sdram0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLESTAT_F2SDR0 register field. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2SDR0_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLESTAT_F2SDR0 register field. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2SDR0_MSB        16
/* The width in bits of the ALT_SYSMGR_NOC_IDLESTAT_F2SDR0 register field. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2SDR0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLESTAT_F2SDR0 register field value. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2SDR0_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_NOC_IDLESTAT_F2SDR0 register field value. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2SDR0_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_NOC_IDLESTAT_F2SDR0 register field. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2SDR0_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLESTAT_F2SDR0 field value from a register. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2SDR0_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_NOC_IDLESTAT_F2SDR0 register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2SDR0_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : fpga2sdram1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLESTAT_F2SDR1 register field. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2SDR1_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLESTAT_F2SDR1 register field. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2SDR1_MSB        20
/* The width in bits of the ALT_SYSMGR_NOC_IDLESTAT_F2SDR1 register field. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2SDR1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLESTAT_F2SDR1 register field value. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2SDR1_SET_MSK    0x00100000
/* The mask used to clear the ALT_SYSMGR_NOC_IDLESTAT_F2SDR1 register field value. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2SDR1_CLR_MSK    0xffefffff
/* The reset value of the ALT_SYSMGR_NOC_IDLESTAT_F2SDR1 register field. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2SDR1_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLESTAT_F2SDR1 field value from a register. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2SDR1_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_SYSMGR_NOC_IDLESTAT_F2SDR1 register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2SDR1_SET(value) (((value) << 20) & 0x00100000)

/*
 * Field : fpga2sdram2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_NOC_IDLESTAT_F2SDR2 register field. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2SDR2_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_NOC_IDLESTAT_F2SDR2 register field. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2SDR2_MSB        24
/* The width in bits of the ALT_SYSMGR_NOC_IDLESTAT_F2SDR2 register field. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2SDR2_WIDTH      1
/* The mask used to set the ALT_SYSMGR_NOC_IDLESTAT_F2SDR2 register field value. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2SDR2_SET_MSK    0x01000000
/* The mask used to clear the ALT_SYSMGR_NOC_IDLESTAT_F2SDR2 register field value. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2SDR2_CLR_MSK    0xfeffffff
/* The reset value of the ALT_SYSMGR_NOC_IDLESTAT_F2SDR2 register field. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2SDR2_RESET      0x0
/* Extracts the ALT_SYSMGR_NOC_IDLESTAT_F2SDR2 field value from a register. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2SDR2_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_SYSMGR_NOC_IDLESTAT_F2SDR2 register field value suitable for setting the register. */
#define ALT_SYSMGR_NOC_IDLESTAT_F2SDR2_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_NOC_IDLESTAT.
 */
struct ALT_SYSMGR_NOC_IDLESTAT_s
{
    uint32_t  soc2fpga    :  1;  /* ALT_SYSMGR_NOC_IDLESTAT_H2F */
    uint32_t              :  3;  /* *UNDEFINED* */
    uint32_t  lwsoc2fpga  :  1;  /* ALT_SYSMGR_NOC_IDLESTAT_LWH2F */
    uint32_t              :  3;  /* *UNDEFINED* */
    uint32_t  fpga2soc    :  1;  /* ALT_SYSMGR_NOC_IDLESTAT_F2H */
    uint32_t              :  7;  /* *UNDEFINED* */
    uint32_t  fpga2sdram0 :  1;  /* ALT_SYSMGR_NOC_IDLESTAT_F2SDR0 */
    uint32_t              :  3;  /* *UNDEFINED* */
    uint32_t  fpga2sdram1 :  1;  /* ALT_SYSMGR_NOC_IDLESTAT_F2SDR1 */
    uint32_t              :  3;  /* *UNDEFINED* */
    uint32_t  fpga2sdram2 :  1;  /* ALT_SYSMGR_NOC_IDLESTAT_F2SDR2 */
    uint32_t              :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_NOC_IDLESTAT. */
typedef volatile struct ALT_SYSMGR_NOC_IDLESTAT_s  ALT_SYSMGR_NOC_IDLESTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_NOC_IDLESTAT register. */
#define ALT_SYSMGR_NOC_IDLESTAT_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_NOC_IDLESTAT register from the beginning of the component. */
#define ALT_SYSMGR_NOC_IDLESTAT_OFST        0xd4

/*
 * Register : fpga2soc_ctrl
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                    
 * :-------|:-------|:--------|:--------------------------------
 *  [0]    | RW     | 0x0     | ALT_SYSMGR_F2H_CTL_ALLOW_SECURE
 *  [31:1] | ???    | Unknown | *UNDEFINED*                    
 * 
 */
/*
 * Field : allow_secure
 * 
 * 0 - All Transactions from FPGA2SOC is converted to be Non-Secure
 * 
 * 1 - Both Secure and Non-Secure Transactions is allowed by FPGA2SOC.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_F2H_CTL_ALLOW_SECURE register field. */
#define ALT_SYSMGR_F2H_CTL_ALLOW_SECURE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_F2H_CTL_ALLOW_SECURE register field. */
#define ALT_SYSMGR_F2H_CTL_ALLOW_SECURE_MSB        0
/* The width in bits of the ALT_SYSMGR_F2H_CTL_ALLOW_SECURE register field. */
#define ALT_SYSMGR_F2H_CTL_ALLOW_SECURE_WIDTH      1
/* The mask used to set the ALT_SYSMGR_F2H_CTL_ALLOW_SECURE register field value. */
#define ALT_SYSMGR_F2H_CTL_ALLOW_SECURE_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_F2H_CTL_ALLOW_SECURE register field value. */
#define ALT_SYSMGR_F2H_CTL_ALLOW_SECURE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_F2H_CTL_ALLOW_SECURE register field. */
#define ALT_SYSMGR_F2H_CTL_ALLOW_SECURE_RESET      0x0
/* Extracts the ALT_SYSMGR_F2H_CTL_ALLOW_SECURE field value from a register. */
#define ALT_SYSMGR_F2H_CTL_ALLOW_SECURE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_F2H_CTL_ALLOW_SECURE register field value suitable for setting the register. */
#define ALT_SYSMGR_F2H_CTL_ALLOW_SECURE_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_F2H_CTL.
 */
struct ALT_SYSMGR_F2H_CTL_s
{
    uint32_t  allow_secure :  1;  /* ALT_SYSMGR_F2H_CTL_ALLOW_SECURE */
    uint32_t               : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_F2H_CTL. */
typedef volatile struct ALT_SYSMGR_F2H_CTL_s  ALT_SYSMGR_F2H_CTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_F2H_CTL register. */
#define ALT_SYSMGR_F2H_CTL_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_F2H_CTL register from the beginning of the component. */
#define ALT_SYSMGR_F2H_CTL_OFST        0xd8

/*
 * Register : tsmc_tsel_0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                       
 * :--------|:-------|:------|:-----------------------------------
 *  [1:0]   | RW     | 0x1   | ALT_SYSMGR_TSMC_TSEL_0_ROM_RTSEL  
 *  [3:2]   | ???    | 0x0   | *UNDEFINED*                       
 *  [5:4]   | RW     | 0x1   | ALT_SYSMGR_TSMC_TSEL_0_ROM_PTSEL  
 *  [7:6]   | ???    | 0x0   | *UNDEFINED*                       
 *  [9:8]   | RW     | 0x1   | ALT_SYSMGR_TSMC_TSEL_0_ROM_TRB    
 *  [15:10] | ???    | 0x0   | *UNDEFINED*                       
 *  [17:16] | RW     | 0x0   | ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCW  
 *  [19:18] | ???    | 0x0   | *UNDEFINED*                       
 *  [21:20] | RW     | 0x0   | ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCR  
 *  [23:22] | ???    | 0x0   | *UNDEFINED*                       
 *  [26:24] | RW     | 0x0   | ALT_SYSMGR_TSMC_TSEL_0_MPUL2_WTSEL
 *  [27]    | ???    | 0x0   | *UNDEFINED*                       
 *  [29:28] | RW     | 0x1   | ALT_SYSMGR_TSMC_TSEL_0_MPUL2_RTSEL
 *  [31:30] | ???    | 0x0   | *UNDEFINED*                       
 * 
 */
/*
 * Field : rom_rtsel
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_0_ROM_RTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_ROM_RTSEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_0_ROM_RTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_ROM_RTSEL_MSB        1
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_0_ROM_RTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_ROM_RTSEL_WIDTH      2
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_0_ROM_RTSEL register field value. */
#define ALT_SYSMGR_TSMC_TSEL_0_ROM_RTSEL_SET_MSK    0x00000003
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_0_ROM_RTSEL register field value. */
#define ALT_SYSMGR_TSMC_TSEL_0_ROM_RTSEL_CLR_MSK    0xfffffffc
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_0_ROM_RTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_ROM_RTSEL_RESET      0x1
/* Extracts the ALT_SYSMGR_TSMC_TSEL_0_ROM_RTSEL field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_0_ROM_RTSEL_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_SYSMGR_TSMC_TSEL_0_ROM_RTSEL register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_0_ROM_RTSEL_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : rom_ptsel
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_0_ROM_PTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_ROM_PTSEL_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_0_ROM_PTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_ROM_PTSEL_MSB        5
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_0_ROM_PTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_ROM_PTSEL_WIDTH      2
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_0_ROM_PTSEL register field value. */
#define ALT_SYSMGR_TSMC_TSEL_0_ROM_PTSEL_SET_MSK    0x00000030
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_0_ROM_PTSEL register field value. */
#define ALT_SYSMGR_TSMC_TSEL_0_ROM_PTSEL_CLR_MSK    0xffffffcf
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_0_ROM_PTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_ROM_PTSEL_RESET      0x1
/* Extracts the ALT_SYSMGR_TSMC_TSEL_0_ROM_PTSEL field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_0_ROM_PTSEL_GET(value) (((value) & 0x00000030) >> 4)
/* Produces a ALT_SYSMGR_TSMC_TSEL_0_ROM_PTSEL register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_0_ROM_PTSEL_SET(value) (((value) << 4) & 0x00000030)

/*
 * Field : rom_trb
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_0_ROM_TRB register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_ROM_TRB_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_0_ROM_TRB register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_ROM_TRB_MSB        9
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_0_ROM_TRB register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_ROM_TRB_WIDTH      2
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_0_ROM_TRB register field value. */
#define ALT_SYSMGR_TSMC_TSEL_0_ROM_TRB_SET_MSK    0x00000300
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_0_ROM_TRB register field value. */
#define ALT_SYSMGR_TSMC_TSEL_0_ROM_TRB_CLR_MSK    0xfffffcff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_0_ROM_TRB register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_ROM_TRB_RESET      0x1
/* Extracts the ALT_SYSMGR_TSMC_TSEL_0_ROM_TRB field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_0_ROM_TRB_GET(value) (((value) & 0x00000300) >> 8)
/* Produces a ALT_SYSMGR_TSMC_TSEL_0_ROM_TRB register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_0_ROM_TRB_SET(value) (((value) << 8) & 0x00000300)

/*
 * Field : mpul1_mcw
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCW register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCW_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCW register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCW_MSB        17
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCW register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCW_WIDTH      2
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCW register field value. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCW_SET_MSK    0x00030000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCW register field value. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCW_CLR_MSK    0xfffcffff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCW register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCW_RESET      0x0
/* Extracts the ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCW field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCW_GET(value) (((value) & 0x00030000) >> 16)
/* Produces a ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCW register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCW_SET(value) (((value) << 16) & 0x00030000)

/*
 * Field : mpul1_mcr
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCR register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCR_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCR register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCR_MSB        21
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCR register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCR_WIDTH      2
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCR register field value. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCR_SET_MSK    0x00300000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCR register field value. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCR_CLR_MSK    0xffcfffff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCR register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCR_RESET      0x0
/* Extracts the ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCR field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCR_GET(value) (((value) & 0x00300000) >> 20)
/* Produces a ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCR register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCR_SET(value) (((value) << 20) & 0x00300000)

/*
 * Field : mpul2_wtsel
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_0_MPUL2_WTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL2_WTSEL_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_0_MPUL2_WTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL2_WTSEL_MSB        26
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_0_MPUL2_WTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL2_WTSEL_WIDTH      3
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_0_MPUL2_WTSEL register field value. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL2_WTSEL_SET_MSK    0x07000000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_0_MPUL2_WTSEL register field value. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL2_WTSEL_CLR_MSK    0xf8ffffff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_0_MPUL2_WTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL2_WTSEL_RESET      0x0
/* Extracts the ALT_SYSMGR_TSMC_TSEL_0_MPUL2_WTSEL field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL2_WTSEL_GET(value) (((value) & 0x07000000) >> 24)
/* Produces a ALT_SYSMGR_TSMC_TSEL_0_MPUL2_WTSEL register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL2_WTSEL_SET(value) (((value) << 24) & 0x07000000)

/*
 * Field : mpul2_rtsel
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_0_MPUL2_RTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL2_RTSEL_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_0_MPUL2_RTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL2_RTSEL_MSB        29
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_0_MPUL2_RTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL2_RTSEL_WIDTH      2
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_0_MPUL2_RTSEL register field value. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL2_RTSEL_SET_MSK    0x30000000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_0_MPUL2_RTSEL register field value. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL2_RTSEL_CLR_MSK    0xcfffffff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_0_MPUL2_RTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL2_RTSEL_RESET      0x1
/* Extracts the ALT_SYSMGR_TSMC_TSEL_0_MPUL2_RTSEL field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL2_RTSEL_GET(value) (((value) & 0x30000000) >> 28)
/* Produces a ALT_SYSMGR_TSMC_TSEL_0_MPUL2_RTSEL register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_0_MPUL2_RTSEL_SET(value) (((value) << 28) & 0x30000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_TSMC_TSEL_0.
 */
struct ALT_SYSMGR_TSMC_TSEL_0_s
{
    uint32_t  rom_rtsel   :  2;  /* ALT_SYSMGR_TSMC_TSEL_0_ROM_RTSEL */
    uint32_t              :  2;  /* *UNDEFINED* */
    uint32_t  rom_ptsel   :  2;  /* ALT_SYSMGR_TSMC_TSEL_0_ROM_PTSEL */
    uint32_t              :  2;  /* *UNDEFINED* */
    uint32_t  rom_trb     :  2;  /* ALT_SYSMGR_TSMC_TSEL_0_ROM_TRB */
    uint32_t              :  6;  /* *UNDEFINED* */
    uint32_t  mpul1_mcw   :  2;  /* ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCW */
    uint32_t              :  2;  /* *UNDEFINED* */
    uint32_t  mpul1_mcr   :  2;  /* ALT_SYSMGR_TSMC_TSEL_0_MPUL1_MCR */
    uint32_t              :  2;  /* *UNDEFINED* */
    uint32_t  mpul2_wtsel :  3;  /* ALT_SYSMGR_TSMC_TSEL_0_MPUL2_WTSEL */
    uint32_t              :  1;  /* *UNDEFINED* */
    uint32_t  mpul2_rtsel :  2;  /* ALT_SYSMGR_TSMC_TSEL_0_MPUL2_RTSEL */
    uint32_t              :  2;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_TSMC_TSEL_0. */
typedef volatile struct ALT_SYSMGR_TSMC_TSEL_0_s  ALT_SYSMGR_TSMC_TSEL_0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_TSMC_TSEL_0 register. */
#define ALT_SYSMGR_TSMC_TSEL_0_RESET       0x10000111
/* The byte offset of the ALT_SYSMGR_TSMC_TSEL_0 register from the beginning of the component. */
#define ALT_SYSMGR_TSMC_TSEL_0_OFST        0x100

/*
 * Register : tsmc_tsel_1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                       
 * :--------|:-------|:------|:-----------------------------------
 *  [2:0]   | RW     | 0x0   | ALT_SYSMGR_TSMC_TSEL_1_OCRAM_WTSEL
 *  [3]     | ???    | 0x0   | *UNDEFINED*                       
 *  [5:4]   | RW     | 0x1   | ALT_SYSMGR_TSMC_TSEL_1_OCRAM_RTSEL
 *  [7:6]   | ???    | 0x0   | *UNDEFINED*                       
 *  [10:8]  | RW     | 0x0   | ALT_SYSMGR_TSMC_TSEL_1_OTG_WTSEL  
 *  [11]    | ???    | 0x0   | *UNDEFINED*                       
 *  [13:12] | RW     | 0x1   | ALT_SYSMGR_TSMC_TSEL_1_OTG_RTSEL  
 *  [15:14] | ???    | 0x0   | *UNDEFINED*                       
 *  [18:16] | RW     | 0x0   | ALT_SYSMGR_TSMC_TSEL_1_QSPI_WTSEL 
 *  [19]    | ???    | 0x0   | *UNDEFINED*                       
 *  [21:20] | RW     | 0x1   | ALT_SYSMGR_TSMC_TSEL_1_QSPI_RTSEL 
 *  [23:22] | ???    | 0x0   | *UNDEFINED*                       
 *  [26:24] | RW     | 0x0   | ALT_SYSMGR_TSMC_TSEL_1_ETF_WTSEL  
 *  [27]    | ???    | 0x0   | *UNDEFINED*                       
 *  [29:28] | RW     | 0x1   | ALT_SYSMGR_TSMC_TSEL_1_ETF_RTSEL  
 *  [31:30] | ???    | 0x0   | *UNDEFINED*                       
 * 
 */
/*
 * Field : ocram_wtsel
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_1_OCRAM_WTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_OCRAM_WTSEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_1_OCRAM_WTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_OCRAM_WTSEL_MSB        2
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_1_OCRAM_WTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_OCRAM_WTSEL_WIDTH      3
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_1_OCRAM_WTSEL register field value. */
#define ALT_SYSMGR_TSMC_TSEL_1_OCRAM_WTSEL_SET_MSK    0x00000007
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_1_OCRAM_WTSEL register field value. */
#define ALT_SYSMGR_TSMC_TSEL_1_OCRAM_WTSEL_CLR_MSK    0xfffffff8
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_1_OCRAM_WTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_OCRAM_WTSEL_RESET      0x0
/* Extracts the ALT_SYSMGR_TSMC_TSEL_1_OCRAM_WTSEL field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_1_OCRAM_WTSEL_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_SYSMGR_TSMC_TSEL_1_OCRAM_WTSEL register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_1_OCRAM_WTSEL_SET(value) (((value) << 0) & 0x00000007)

/*
 * Field : ocram_rtsel
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_1_OCRAM_RTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_OCRAM_RTSEL_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_1_OCRAM_RTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_OCRAM_RTSEL_MSB        5
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_1_OCRAM_RTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_OCRAM_RTSEL_WIDTH      2
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_1_OCRAM_RTSEL register field value. */
#define ALT_SYSMGR_TSMC_TSEL_1_OCRAM_RTSEL_SET_MSK    0x00000030
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_1_OCRAM_RTSEL register field value. */
#define ALT_SYSMGR_TSMC_TSEL_1_OCRAM_RTSEL_CLR_MSK    0xffffffcf
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_1_OCRAM_RTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_OCRAM_RTSEL_RESET      0x1
/* Extracts the ALT_SYSMGR_TSMC_TSEL_1_OCRAM_RTSEL field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_1_OCRAM_RTSEL_GET(value) (((value) & 0x00000030) >> 4)
/* Produces a ALT_SYSMGR_TSMC_TSEL_1_OCRAM_RTSEL register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_1_OCRAM_RTSEL_SET(value) (((value) << 4) & 0x00000030)

/*
 * Field : otg_wtsel
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_1_OTG_WTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_OTG_WTSEL_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_1_OTG_WTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_OTG_WTSEL_MSB        10
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_1_OTG_WTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_OTG_WTSEL_WIDTH      3
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_1_OTG_WTSEL register field value. */
#define ALT_SYSMGR_TSMC_TSEL_1_OTG_WTSEL_SET_MSK    0x00000700
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_1_OTG_WTSEL register field value. */
#define ALT_SYSMGR_TSMC_TSEL_1_OTG_WTSEL_CLR_MSK    0xfffff8ff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_1_OTG_WTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_OTG_WTSEL_RESET      0x0
/* Extracts the ALT_SYSMGR_TSMC_TSEL_1_OTG_WTSEL field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_1_OTG_WTSEL_GET(value) (((value) & 0x00000700) >> 8)
/* Produces a ALT_SYSMGR_TSMC_TSEL_1_OTG_WTSEL register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_1_OTG_WTSEL_SET(value) (((value) << 8) & 0x00000700)

/*
 * Field : otg_rtsel
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_1_OTG_RTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_OTG_RTSEL_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_1_OTG_RTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_OTG_RTSEL_MSB        13
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_1_OTG_RTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_OTG_RTSEL_WIDTH      2
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_1_OTG_RTSEL register field value. */
#define ALT_SYSMGR_TSMC_TSEL_1_OTG_RTSEL_SET_MSK    0x00003000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_1_OTG_RTSEL register field value. */
#define ALT_SYSMGR_TSMC_TSEL_1_OTG_RTSEL_CLR_MSK    0xffffcfff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_1_OTG_RTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_OTG_RTSEL_RESET      0x1
/* Extracts the ALT_SYSMGR_TSMC_TSEL_1_OTG_RTSEL field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_1_OTG_RTSEL_GET(value) (((value) & 0x00003000) >> 12)
/* Produces a ALT_SYSMGR_TSMC_TSEL_1_OTG_RTSEL register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_1_OTG_RTSEL_SET(value) (((value) << 12) & 0x00003000)

/*
 * Field : qspi_wtsel
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_1_QSPI_WTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_QSPI_WTSEL_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_1_QSPI_WTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_QSPI_WTSEL_MSB        18
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_1_QSPI_WTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_QSPI_WTSEL_WIDTH      3
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_1_QSPI_WTSEL register field value. */
#define ALT_SYSMGR_TSMC_TSEL_1_QSPI_WTSEL_SET_MSK    0x00070000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_1_QSPI_WTSEL register field value. */
#define ALT_SYSMGR_TSMC_TSEL_1_QSPI_WTSEL_CLR_MSK    0xfff8ffff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_1_QSPI_WTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_QSPI_WTSEL_RESET      0x0
/* Extracts the ALT_SYSMGR_TSMC_TSEL_1_QSPI_WTSEL field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_1_QSPI_WTSEL_GET(value) (((value) & 0x00070000) >> 16)
/* Produces a ALT_SYSMGR_TSMC_TSEL_1_QSPI_WTSEL register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_1_QSPI_WTSEL_SET(value) (((value) << 16) & 0x00070000)

/*
 * Field : qspi_rtsel
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_1_QSPI_RTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_QSPI_RTSEL_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_1_QSPI_RTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_QSPI_RTSEL_MSB        21
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_1_QSPI_RTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_QSPI_RTSEL_WIDTH      2
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_1_QSPI_RTSEL register field value. */
#define ALT_SYSMGR_TSMC_TSEL_1_QSPI_RTSEL_SET_MSK    0x00300000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_1_QSPI_RTSEL register field value. */
#define ALT_SYSMGR_TSMC_TSEL_1_QSPI_RTSEL_CLR_MSK    0xffcfffff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_1_QSPI_RTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_QSPI_RTSEL_RESET      0x1
/* Extracts the ALT_SYSMGR_TSMC_TSEL_1_QSPI_RTSEL field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_1_QSPI_RTSEL_GET(value) (((value) & 0x00300000) >> 20)
/* Produces a ALT_SYSMGR_TSMC_TSEL_1_QSPI_RTSEL register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_1_QSPI_RTSEL_SET(value) (((value) << 20) & 0x00300000)

/*
 * Field : etf_wtsel
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_1_ETF_WTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_ETF_WTSEL_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_1_ETF_WTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_ETF_WTSEL_MSB        26
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_1_ETF_WTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_ETF_WTSEL_WIDTH      3
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_1_ETF_WTSEL register field value. */
#define ALT_SYSMGR_TSMC_TSEL_1_ETF_WTSEL_SET_MSK    0x07000000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_1_ETF_WTSEL register field value. */
#define ALT_SYSMGR_TSMC_TSEL_1_ETF_WTSEL_CLR_MSK    0xf8ffffff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_1_ETF_WTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_ETF_WTSEL_RESET      0x0
/* Extracts the ALT_SYSMGR_TSMC_TSEL_1_ETF_WTSEL field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_1_ETF_WTSEL_GET(value) (((value) & 0x07000000) >> 24)
/* Produces a ALT_SYSMGR_TSMC_TSEL_1_ETF_WTSEL register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_1_ETF_WTSEL_SET(value) (((value) << 24) & 0x07000000)

/*
 * Field : etf_rtsel
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_1_ETF_RTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_ETF_RTSEL_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_1_ETF_RTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_ETF_RTSEL_MSB        29
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_1_ETF_RTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_ETF_RTSEL_WIDTH      2
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_1_ETF_RTSEL register field value. */
#define ALT_SYSMGR_TSMC_TSEL_1_ETF_RTSEL_SET_MSK    0x30000000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_1_ETF_RTSEL register field value. */
#define ALT_SYSMGR_TSMC_TSEL_1_ETF_RTSEL_CLR_MSK    0xcfffffff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_1_ETF_RTSEL register field. */
#define ALT_SYSMGR_TSMC_TSEL_1_ETF_RTSEL_RESET      0x1
/* Extracts the ALT_SYSMGR_TSMC_TSEL_1_ETF_RTSEL field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_1_ETF_RTSEL_GET(value) (((value) & 0x30000000) >> 28)
/* Produces a ALT_SYSMGR_TSMC_TSEL_1_ETF_RTSEL register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_1_ETF_RTSEL_SET(value) (((value) << 28) & 0x30000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_TSMC_TSEL_1.
 */
struct ALT_SYSMGR_TSMC_TSEL_1_s
{
    uint32_t  ocram_wtsel :  3;  /* ALT_SYSMGR_TSMC_TSEL_1_OCRAM_WTSEL */
    uint32_t              :  1;  /* *UNDEFINED* */
    uint32_t  ocram_rtsel :  2;  /* ALT_SYSMGR_TSMC_TSEL_1_OCRAM_RTSEL */
    uint32_t              :  2;  /* *UNDEFINED* */
    uint32_t  otg_wtsel   :  3;  /* ALT_SYSMGR_TSMC_TSEL_1_OTG_WTSEL */
    uint32_t              :  1;  /* *UNDEFINED* */
    uint32_t  otg_rtsel   :  2;  /* ALT_SYSMGR_TSMC_TSEL_1_OTG_RTSEL */
    uint32_t              :  2;  /* *UNDEFINED* */
    uint32_t  qspi_wtsel  :  3;  /* ALT_SYSMGR_TSMC_TSEL_1_QSPI_WTSEL */
    uint32_t              :  1;  /* *UNDEFINED* */
    uint32_t  qspi_rtsel  :  2;  /* ALT_SYSMGR_TSMC_TSEL_1_QSPI_RTSEL */
    uint32_t              :  2;  /* *UNDEFINED* */
    uint32_t  etf_wtsel   :  3;  /* ALT_SYSMGR_TSMC_TSEL_1_ETF_WTSEL */
    uint32_t              :  1;  /* *UNDEFINED* */
    uint32_t  etf_rtsel   :  2;  /* ALT_SYSMGR_TSMC_TSEL_1_ETF_RTSEL */
    uint32_t              :  2;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_TSMC_TSEL_1. */
typedef volatile struct ALT_SYSMGR_TSMC_TSEL_1_s  ALT_SYSMGR_TSMC_TSEL_1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_TSMC_TSEL_1 register. */
#define ALT_SYSMGR_TSMC_TSEL_1_RESET       0x10101010
/* The byte offset of the ALT_SYSMGR_TSMC_TSEL_1 register from the beginning of the component. */
#define ALT_SYSMGR_TSMC_TSEL_1_OFST        0x104

/*
 * Register : tsmc_tsel_2
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                       
 * :--------|:-------|:------|:-----------------------------------
 *  [1:0]   | RW     | 0x2   | ALT_SYSMGR_TSMC_TSEL_2_NANDECC_WCT
 *  [3:2]   | RW     | 0x2   | ALT_SYSMGR_TSMC_TSEL_2_NANDECC_RCT
 *  [6:4]   | RW     | 0x4   | ALT_SYSMGR_TSMC_TSEL_2_NANDECC_KP 
 *  [7]     | RW     | 0x0   | ALT_SYSMGR_TSMC_TSEL_2_NANDECC_TM 
 *  [9:8]   | RW     | 0x2   | ALT_SYSMGR_TSMC_TSEL_2_NANDWR_WCT 
 *  [11:10] | RW     | 0x2   | ALT_SYSMGR_TSMC_TSEL_2_NANDWR_RCT 
 *  [14:12] | RW     | 0x4   | ALT_SYSMGR_TSMC_TSEL_2_NANDWR_KP  
 *  [15]    | RW     | 0x0   | ALT_SYSMGR_TSMC_TSEL_2_NANDWR_TM  
 *  [17:16] | RW     | 0x2   | ALT_SYSMGR_TSMC_TSEL_2_NANDRD_WCT 
 *  [19:18] | RW     | 0x2   | ALT_SYSMGR_TSMC_TSEL_2_NANDRD_RCT 
 *  [22:20] | RW     | 0x4   | ALT_SYSMGR_TSMC_TSEL_2_NANDRD_KP  
 *  [23]    | RW     | 0x0   | ALT_SYSMGR_TSMC_TSEL_2_NANDRD_TM  
 *  [25:24] | RW     | 0x2   | ALT_SYSMGR_TSMC_TSEL_2_SDMMC_WCT  
 *  [27:26] | RW     | 0x2   | ALT_SYSMGR_TSMC_TSEL_2_SDMMC_RCT  
 *  [30:28] | RW     | 0x4   | ALT_SYSMGR_TSMC_TSEL_2_SDMMC_KP   
 *  [31]    | RW     | 0x0   | ALT_SYSMGR_TSMC_TSEL_2_SDMMC_TM   
 * 
 */
/*
 * Field : nandecc_wct
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_WCT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_WCT_MSB        1
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_WCT_WIDTH      2
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_WCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_WCT_SET_MSK    0x00000003
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_WCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_WCT_CLR_MSK    0xfffffffc
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_WCT_RESET      0x2
/* Extracts the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_WCT field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_WCT_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_SYSMGR_TSMC_TSEL_2_NANDECC_WCT register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_WCT_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : nandecc_rct
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_RCT_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_RCT_MSB        3
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_RCT_WIDTH      2
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_RCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_RCT_SET_MSK    0x0000000c
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_RCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_RCT_CLR_MSK    0xfffffff3
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_RCT_RESET      0x2
/* Extracts the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_RCT field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_RCT_GET(value) (((value) & 0x0000000c) >> 2)
/* Produces a ALT_SYSMGR_TSMC_TSEL_2_NANDECC_RCT register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_RCT_SET(value) (((value) << 2) & 0x0000000c)

/*
 * Field : nandecc_kp
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_KP_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_KP_MSB        6
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_KP_WIDTH      3
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_KP register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_KP_SET_MSK    0x00000070
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_KP register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_KP_CLR_MSK    0xffffff8f
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_KP_RESET      0x4
/* Extracts the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_KP field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_KP_GET(value) (((value) & 0x00000070) >> 4)
/* Produces a ALT_SYSMGR_TSMC_TSEL_2_NANDECC_KP register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_KP_SET(value) (((value) << 4) & 0x00000070)

/*
 * Field : nandecc_tm
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_TM_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_TM_MSB        7
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_TM_WIDTH      1
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_TM register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_TM_SET_MSK    0x00000080
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_TM register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_TM_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_TM_RESET      0x0
/* Extracts the ALT_SYSMGR_TSMC_TSEL_2_NANDECC_TM field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_TM_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SYSMGR_TSMC_TSEL_2_NANDECC_TM register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDECC_TM_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : nandwr_wct
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_WCT_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_WCT_MSB        9
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_WCT_WIDTH      2
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_WCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_WCT_SET_MSK    0x00000300
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_WCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_WCT_CLR_MSK    0xfffffcff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_WCT_RESET      0x2
/* Extracts the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_WCT field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_WCT_GET(value) (((value) & 0x00000300) >> 8)
/* Produces a ALT_SYSMGR_TSMC_TSEL_2_NANDWR_WCT register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_WCT_SET(value) (((value) << 8) & 0x00000300)

/*
 * Field : nandwr_rct
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_RCT_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_RCT_MSB        11
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_RCT_WIDTH      2
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_RCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_RCT_SET_MSK    0x00000c00
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_RCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_RCT_CLR_MSK    0xfffff3ff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_RCT_RESET      0x2
/* Extracts the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_RCT field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_RCT_GET(value) (((value) & 0x00000c00) >> 10)
/* Produces a ALT_SYSMGR_TSMC_TSEL_2_NANDWR_RCT register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_RCT_SET(value) (((value) << 10) & 0x00000c00)

/*
 * Field : nandwr_kp
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_KP_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_KP_MSB        14
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_KP_WIDTH      3
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_KP register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_KP_SET_MSK    0x00007000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_KP register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_KP_CLR_MSK    0xffff8fff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_KP_RESET      0x4
/* Extracts the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_KP field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_KP_GET(value) (((value) & 0x00007000) >> 12)
/* Produces a ALT_SYSMGR_TSMC_TSEL_2_NANDWR_KP register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_KP_SET(value) (((value) << 12) & 0x00007000)

/*
 * Field : nandwr_tm
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_TM_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_TM_MSB        15
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_TM_WIDTH      1
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_TM register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_TM_SET_MSK    0x00008000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_TM register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_TM_CLR_MSK    0xffff7fff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_TM_RESET      0x0
/* Extracts the ALT_SYSMGR_TSMC_TSEL_2_NANDWR_TM field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_TM_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_SYSMGR_TSMC_TSEL_2_NANDWR_TM register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDWR_TM_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : nandrd_wct
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_WCT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_WCT_MSB        17
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_WCT_WIDTH      2
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_WCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_WCT_SET_MSK    0x00030000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_WCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_WCT_CLR_MSK    0xfffcffff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_WCT_RESET      0x2
/* Extracts the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_WCT field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_WCT_GET(value) (((value) & 0x00030000) >> 16)
/* Produces a ALT_SYSMGR_TSMC_TSEL_2_NANDRD_WCT register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_WCT_SET(value) (((value) << 16) & 0x00030000)

/*
 * Field : nandrd_rct
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_RCT_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_RCT_MSB        19
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_RCT_WIDTH      2
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_RCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_RCT_SET_MSK    0x000c0000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_RCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_RCT_CLR_MSK    0xfff3ffff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_RCT_RESET      0x2
/* Extracts the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_RCT field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_RCT_GET(value) (((value) & 0x000c0000) >> 18)
/* Produces a ALT_SYSMGR_TSMC_TSEL_2_NANDRD_RCT register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_RCT_SET(value) (((value) << 18) & 0x000c0000)

/*
 * Field : nandrd_kp
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_KP_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_KP_MSB        22
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_KP_WIDTH      3
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_KP register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_KP_SET_MSK    0x00700000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_KP register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_KP_CLR_MSK    0xff8fffff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_KP_RESET      0x4
/* Extracts the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_KP field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_KP_GET(value) (((value) & 0x00700000) >> 20)
/* Produces a ALT_SYSMGR_TSMC_TSEL_2_NANDRD_KP register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_KP_SET(value) (((value) << 20) & 0x00700000)

/*
 * Field : nandrd_tm
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_TM_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_TM_MSB        23
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_TM_WIDTH      1
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_TM register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_TM_SET_MSK    0x00800000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_TM register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_TM_CLR_MSK    0xff7fffff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_TM_RESET      0x0
/* Extracts the ALT_SYSMGR_TSMC_TSEL_2_NANDRD_TM field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_TM_GET(value) (((value) & 0x00800000) >> 23)
/* Produces a ALT_SYSMGR_TSMC_TSEL_2_NANDRD_TM register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_2_NANDRD_TM_SET(value) (((value) << 23) & 0x00800000)

/*
 * Field : sdmmc_wct
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_WCT_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_WCT_MSB        25
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_WCT_WIDTH      2
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_WCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_WCT_SET_MSK    0x03000000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_WCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_WCT_CLR_MSK    0xfcffffff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_WCT_RESET      0x2
/* Extracts the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_WCT field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_WCT_GET(value) (((value) & 0x03000000) >> 24)
/* Produces a ALT_SYSMGR_TSMC_TSEL_2_SDMMC_WCT register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_WCT_SET(value) (((value) << 24) & 0x03000000)

/*
 * Field : sdmmc_rct
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_RCT_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_RCT_MSB        27
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_RCT_WIDTH      2
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_RCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_RCT_SET_MSK    0x0c000000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_RCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_RCT_CLR_MSK    0xf3ffffff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_RCT_RESET      0x2
/* Extracts the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_RCT field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_RCT_GET(value) (((value) & 0x0c000000) >> 26)
/* Produces a ALT_SYSMGR_TSMC_TSEL_2_SDMMC_RCT register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_RCT_SET(value) (((value) << 26) & 0x0c000000)

/*
 * Field : sdmmc_kp
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_KP_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_KP_MSB        30
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_KP_WIDTH      3
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_KP register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_KP_SET_MSK    0x70000000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_KP register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_KP_CLR_MSK    0x8fffffff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_KP_RESET      0x4
/* Extracts the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_KP field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_KP_GET(value) (((value) & 0x70000000) >> 28)
/* Produces a ALT_SYSMGR_TSMC_TSEL_2_SDMMC_KP register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_KP_SET(value) (((value) << 28) & 0x70000000)

/*
 * Field : sdmmc_tm
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_TM_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_TM_MSB        31
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_TM_WIDTH      1
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_TM register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_TM_SET_MSK    0x80000000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_TM register field value. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_TM_CLR_MSK    0x7fffffff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_TM_RESET      0x0
/* Extracts the ALT_SYSMGR_TSMC_TSEL_2_SDMMC_TM field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_TM_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_SYSMGR_TSMC_TSEL_2_SDMMC_TM register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_2_SDMMC_TM_SET(value) (((value) << 31) & 0x80000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_TSMC_TSEL_2.
 */
struct ALT_SYSMGR_TSMC_TSEL_2_s
{
    uint32_t  nandecc_wct :  2;  /* ALT_SYSMGR_TSMC_TSEL_2_NANDECC_WCT */
    uint32_t  nandecc_rct :  2;  /* ALT_SYSMGR_TSMC_TSEL_2_NANDECC_RCT */
    uint32_t  nandecc_kp  :  3;  /* ALT_SYSMGR_TSMC_TSEL_2_NANDECC_KP */
    uint32_t  nandecc_tm  :  1;  /* ALT_SYSMGR_TSMC_TSEL_2_NANDECC_TM */
    uint32_t  nandwr_wct  :  2;  /* ALT_SYSMGR_TSMC_TSEL_2_NANDWR_WCT */
    uint32_t  nandwr_rct  :  2;  /* ALT_SYSMGR_TSMC_TSEL_2_NANDWR_RCT */
    uint32_t  nandwr_kp   :  3;  /* ALT_SYSMGR_TSMC_TSEL_2_NANDWR_KP */
    uint32_t  nandwr_tm   :  1;  /* ALT_SYSMGR_TSMC_TSEL_2_NANDWR_TM */
    uint32_t  nandrd_wct  :  2;  /* ALT_SYSMGR_TSMC_TSEL_2_NANDRD_WCT */
    uint32_t  nandrd_rct  :  2;  /* ALT_SYSMGR_TSMC_TSEL_2_NANDRD_RCT */
    uint32_t  nandrd_kp   :  3;  /* ALT_SYSMGR_TSMC_TSEL_2_NANDRD_KP */
    uint32_t  nandrd_tm   :  1;  /* ALT_SYSMGR_TSMC_TSEL_2_NANDRD_TM */
    uint32_t  sdmmc_wct   :  2;  /* ALT_SYSMGR_TSMC_TSEL_2_SDMMC_WCT */
    uint32_t  sdmmc_rct   :  2;  /* ALT_SYSMGR_TSMC_TSEL_2_SDMMC_RCT */
    uint32_t  sdmmc_kp    :  3;  /* ALT_SYSMGR_TSMC_TSEL_2_SDMMC_KP */
    uint32_t  sdmmc_tm    :  1;  /* ALT_SYSMGR_TSMC_TSEL_2_SDMMC_TM */
};

/* The typedef declaration for register ALT_SYSMGR_TSMC_TSEL_2. */
typedef volatile struct ALT_SYSMGR_TSMC_TSEL_2_s  ALT_SYSMGR_TSMC_TSEL_2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_TSMC_TSEL_2 register. */
#define ALT_SYSMGR_TSMC_TSEL_2_RESET       0x4a4a4a4a
/* The byte offset of the ALT_SYSMGR_TSMC_TSEL_2 register from the beginning of the component. */
#define ALT_SYSMGR_TSMC_TSEL_2_OFST        0x108

/*
 * Register : tsmc_tsel_3
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                      
 * :--------|:-------|:------|:----------------------------------
 *  [1:0]   | RW     | 0x2   | ALT_SYSMGR_TSMC_TSEL_3_EMACRX_WCT
 *  [3:2]   | RW     | 0x2   | ALT_SYSMGR_TSMC_TSEL_3_EMACRX_RCT
 *  [6:4]   | RW     | 0x4   | ALT_SYSMGR_TSMC_TSEL_3_EMACRX_KP 
 *  [7]     | RW     | 0x0   | ALT_SYSMGR_TSMC_TSEL_3_EMACRX_TM 
 *  [9:8]   | RW     | 0x2   | ALT_SYSMGR_TSMC_TSEL_3_EMACTX_WCT
 *  [11:10] | RW     | 0x2   | ALT_SYSMGR_TSMC_TSEL_3_EMACTX_RCT
 *  [14:12] | RW     | 0x4   | ALT_SYSMGR_TSMC_TSEL_3_EMACTX_KP 
 *  [15]    | RW     | 0x0   | ALT_SYSMGR_TSMC_TSEL_3_EMACTX_TM 
 *  [17:16] | RW     | 0x2   | ALT_SYSMGR_TSMC_TSEL_3_DMAC_WCT  
 *  [19:18] | RW     | 0x2   | ALT_SYSMGR_TSMC_TSEL_3_DMAC_RCT  
 *  [22:20] | RW     | 0x4   | ALT_SYSMGR_TSMC_TSEL_3_DMAC_KP   
 *  [23]    | RW     | 0x0   | ALT_SYSMGR_TSMC_TSEL_3_DMAC_TM   
 *  [31:24] | ???    | 0x0   | *UNDEFINED*                      
 * 
 */
/*
 * Field : emacrx_wct
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_WCT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_WCT_MSB        1
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_WCT_WIDTH      2
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_WCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_WCT_SET_MSK    0x00000003
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_WCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_WCT_CLR_MSK    0xfffffffc
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_WCT_RESET      0x2
/* Extracts the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_WCT field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_WCT_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_SYSMGR_TSMC_TSEL_3_EMACRX_WCT register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_WCT_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : emacrx_rct
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_RCT_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_RCT_MSB        3
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_RCT_WIDTH      2
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_RCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_RCT_SET_MSK    0x0000000c
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_RCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_RCT_CLR_MSK    0xfffffff3
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_RCT_RESET      0x2
/* Extracts the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_RCT field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_RCT_GET(value) (((value) & 0x0000000c) >> 2)
/* Produces a ALT_SYSMGR_TSMC_TSEL_3_EMACRX_RCT register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_RCT_SET(value) (((value) << 2) & 0x0000000c)

/*
 * Field : emacrx_kp
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_KP_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_KP_MSB        6
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_KP_WIDTH      3
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_KP register field value. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_KP_SET_MSK    0x00000070
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_KP register field value. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_KP_CLR_MSK    0xffffff8f
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_KP_RESET      0x4
/* Extracts the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_KP field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_KP_GET(value) (((value) & 0x00000070) >> 4)
/* Produces a ALT_SYSMGR_TSMC_TSEL_3_EMACRX_KP register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_KP_SET(value) (((value) << 4) & 0x00000070)

/*
 * Field : emacrx_tm
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_TM_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_TM_MSB        7
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_TM_WIDTH      1
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_TM register field value. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_TM_SET_MSK    0x00000080
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_TM register field value. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_TM_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_TM_RESET      0x0
/* Extracts the ALT_SYSMGR_TSMC_TSEL_3_EMACRX_TM field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_TM_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SYSMGR_TSMC_TSEL_3_EMACRX_TM register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACRX_TM_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : emactx_wct
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_WCT_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_WCT_MSB        9
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_WCT_WIDTH      2
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_WCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_WCT_SET_MSK    0x00000300
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_WCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_WCT_CLR_MSK    0xfffffcff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_WCT_RESET      0x2
/* Extracts the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_WCT field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_WCT_GET(value) (((value) & 0x00000300) >> 8)
/* Produces a ALT_SYSMGR_TSMC_TSEL_3_EMACTX_WCT register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_WCT_SET(value) (((value) << 8) & 0x00000300)

/*
 * Field : emactx_rct
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_RCT_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_RCT_MSB        11
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_RCT_WIDTH      2
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_RCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_RCT_SET_MSK    0x00000c00
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_RCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_RCT_CLR_MSK    0xfffff3ff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_RCT_RESET      0x2
/* Extracts the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_RCT field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_RCT_GET(value) (((value) & 0x00000c00) >> 10)
/* Produces a ALT_SYSMGR_TSMC_TSEL_3_EMACTX_RCT register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_RCT_SET(value) (((value) << 10) & 0x00000c00)

/*
 * Field : emactx_kp
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_KP_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_KP_MSB        14
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_KP_WIDTH      3
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_KP register field value. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_KP_SET_MSK    0x00007000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_KP register field value. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_KP_CLR_MSK    0xffff8fff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_KP_RESET      0x4
/* Extracts the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_KP field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_KP_GET(value) (((value) & 0x00007000) >> 12)
/* Produces a ALT_SYSMGR_TSMC_TSEL_3_EMACTX_KP register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_KP_SET(value) (((value) << 12) & 0x00007000)

/*
 * Field : emactx_tm
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_TM_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_TM_MSB        15
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_TM_WIDTH      1
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_TM register field value. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_TM_SET_MSK    0x00008000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_TM register field value. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_TM_CLR_MSK    0xffff7fff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_TM_RESET      0x0
/* Extracts the ALT_SYSMGR_TSMC_TSEL_3_EMACTX_TM field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_TM_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_SYSMGR_TSMC_TSEL_3_EMACTX_TM register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_3_EMACTX_TM_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : dmac_wct
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_3_DMAC_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_WCT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_3_DMAC_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_WCT_MSB        17
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_3_DMAC_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_WCT_WIDTH      2
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_3_DMAC_WCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_WCT_SET_MSK    0x00030000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_3_DMAC_WCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_WCT_CLR_MSK    0xfffcffff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_3_DMAC_WCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_WCT_RESET      0x2
/* Extracts the ALT_SYSMGR_TSMC_TSEL_3_DMAC_WCT field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_WCT_GET(value) (((value) & 0x00030000) >> 16)
/* Produces a ALT_SYSMGR_TSMC_TSEL_3_DMAC_WCT register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_WCT_SET(value) (((value) << 16) & 0x00030000)

/*
 * Field : dmac_rct
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_3_DMAC_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_RCT_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_3_DMAC_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_RCT_MSB        19
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_3_DMAC_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_RCT_WIDTH      2
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_3_DMAC_RCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_RCT_SET_MSK    0x000c0000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_3_DMAC_RCT register field value. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_RCT_CLR_MSK    0xfff3ffff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_3_DMAC_RCT register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_RCT_RESET      0x2
/* Extracts the ALT_SYSMGR_TSMC_TSEL_3_DMAC_RCT field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_RCT_GET(value) (((value) & 0x000c0000) >> 18)
/* Produces a ALT_SYSMGR_TSMC_TSEL_3_DMAC_RCT register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_RCT_SET(value) (((value) << 18) & 0x000c0000)

/*
 * Field : dmac_kp
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_3_DMAC_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_KP_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_3_DMAC_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_KP_MSB        22
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_3_DMAC_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_KP_WIDTH      3
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_3_DMAC_KP register field value. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_KP_SET_MSK    0x00700000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_3_DMAC_KP register field value. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_KP_CLR_MSK    0xff8fffff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_3_DMAC_KP register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_KP_RESET      0x4
/* Extracts the ALT_SYSMGR_TSMC_TSEL_3_DMAC_KP field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_KP_GET(value) (((value) & 0x00700000) >> 20)
/* Produces a ALT_SYSMGR_TSMC_TSEL_3_DMAC_KP register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_KP_SET(value) (((value) << 20) & 0x00700000)

/*
 * Field : dmac_tm
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_TSMC_TSEL_3_DMAC_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_TM_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_TSMC_TSEL_3_DMAC_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_TM_MSB        23
/* The width in bits of the ALT_SYSMGR_TSMC_TSEL_3_DMAC_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_TM_WIDTH      1
/* The mask used to set the ALT_SYSMGR_TSMC_TSEL_3_DMAC_TM register field value. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_TM_SET_MSK    0x00800000
/* The mask used to clear the ALT_SYSMGR_TSMC_TSEL_3_DMAC_TM register field value. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_TM_CLR_MSK    0xff7fffff
/* The reset value of the ALT_SYSMGR_TSMC_TSEL_3_DMAC_TM register field. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_TM_RESET      0x0
/* Extracts the ALT_SYSMGR_TSMC_TSEL_3_DMAC_TM field value from a register. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_TM_GET(value) (((value) & 0x00800000) >> 23)
/* Produces a ALT_SYSMGR_TSMC_TSEL_3_DMAC_TM register field value suitable for setting the register. */
#define ALT_SYSMGR_TSMC_TSEL_3_DMAC_TM_SET(value) (((value) << 23) & 0x00800000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_TSMC_TSEL_3.
 */
struct ALT_SYSMGR_TSMC_TSEL_3_s
{
    uint32_t  emacrx_wct :  2;  /* ALT_SYSMGR_TSMC_TSEL_3_EMACRX_WCT */
    uint32_t  emacrx_rct :  2;  /* ALT_SYSMGR_TSMC_TSEL_3_EMACRX_RCT */
    uint32_t  emacrx_kp  :  3;  /* ALT_SYSMGR_TSMC_TSEL_3_EMACRX_KP */
    uint32_t  emacrx_tm  :  1;  /* ALT_SYSMGR_TSMC_TSEL_3_EMACRX_TM */
    uint32_t  emactx_wct :  2;  /* ALT_SYSMGR_TSMC_TSEL_3_EMACTX_WCT */
    uint32_t  emactx_rct :  2;  /* ALT_SYSMGR_TSMC_TSEL_3_EMACTX_RCT */
    uint32_t  emactx_kp  :  3;  /* ALT_SYSMGR_TSMC_TSEL_3_EMACTX_KP */
    uint32_t  emactx_tm  :  1;  /* ALT_SYSMGR_TSMC_TSEL_3_EMACTX_TM */
    uint32_t  dmac_wct   :  2;  /* ALT_SYSMGR_TSMC_TSEL_3_DMAC_WCT */
    uint32_t  dmac_rct   :  2;  /* ALT_SYSMGR_TSMC_TSEL_3_DMAC_RCT */
    uint32_t  dmac_kp    :  3;  /* ALT_SYSMGR_TSMC_TSEL_3_DMAC_KP */
    uint32_t  dmac_tm    :  1;  /* ALT_SYSMGR_TSMC_TSEL_3_DMAC_TM */
    uint32_t             :  8;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_TSMC_TSEL_3. */
typedef volatile struct ALT_SYSMGR_TSMC_TSEL_3_s  ALT_SYSMGR_TSMC_TSEL_3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_TSMC_TSEL_3 register. */
#define ALT_SYSMGR_TSMC_TSEL_3_RESET       0x004a4a4a
/* The byte offset of the ALT_SYSMGR_TSMC_TSEL_3 register from the beginning of the component. */
#define ALT_SYSMGR_TSMC_TSEL_3_OFST        0x10c

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_SYSMGR.
 */
struct ALT_SYSMGR_s
{
    ALT_SYSMGR_SILICONID1_t            siliconid1;            /* ALT_SYSMGR_SILICONID1 */
    ALT_SYSMGR_SILICONID2_t            siliconid2;            /* ALT_SYSMGR_SILICONID2 */
    ALT_SYSMGR_WDDBG_t                 wddbg;                 /* ALT_SYSMGR_WDDBG */
    ALT_SYSMGR_BOOT_t                  bootinfo;              /* ALT_SYSMGR_BOOT */
    ALT_SYSMGR_MPU_CTL_L2_ECC_t        mpu_ctrl_l2_ecc;       /* ALT_SYSMGR_MPU_CTL_L2_ECC */
    volatile uint32_t                  _pad_0x14_0x1f[3];     /* *UNDEFINED* */
    ALT_SYSMGR_DMA_t                   dma;                   /* ALT_SYSMGR_DMA */
    ALT_SYSMGR_DMA_PERIPH_t            dma_periph;            /* ALT_SYSMGR_DMA_PERIPH */
    ALT_SYSMGR_SDMMC_t                 sdmmc;                 /* ALT_SYSMGR_SDMMC */
    ALT_SYSMGR_SDMMC_L3MST_t           sdmmc_l3master;        /* ALT_SYSMGR_SDMMC_L3MST */
    ALT_SYSMGR_NAND_BOOTSTRAP_t        nand_bootstrap;        /* ALT_SYSMGR_NAND_BOOTSTRAP */
    ALT_SYSMGR_NAND_L3MST_t            nand_l3master;         /* ALT_SYSMGR_NAND_L3MST */
    ALT_SYSMGR_USB0_L3MST_t            usb0_l3master;         /* ALT_SYSMGR_USB0_L3MST */
    ALT_SYSMGR_USB1_L3MST_t            usb1_l3master;         /* ALT_SYSMGR_USB1_L3MST */
    ALT_SYSMGR_EMAC_GLOB_t             emac_global;           /* ALT_SYSMGR_EMAC_GLOB */
    ALT_SYSMGR_EMAC0_t                 emac0;                 /* ALT_SYSMGR_EMAC0 */
    ALT_SYSMGR_EMAC1_t                 emac1;                 /* ALT_SYSMGR_EMAC1 */
    ALT_SYSMGR_EMAC2_t                 emac2;                 /* ALT_SYSMGR_EMAC2 */
    volatile uint32_t                  _pad_0x50_0x5f[4];     /* *UNDEFINED* */
    ALT_SYSMGR_FPGAINTF_EN_GLOB_t      fpgaintf_en_global;    /* ALT_SYSMGR_FPGAINTF_EN_GLOB */
    ALT_SYSMGR_FPGAINTF_EN_0_t         fpgaintf_en_0;         /* ALT_SYSMGR_FPGAINTF_EN_0 */
    ALT_SYSMGR_FPGAINTF_EN_1_t         fpgaintf_en_1;         /* ALT_SYSMGR_FPGAINTF_EN_1 */
    ALT_SYSMGR_FPGAINTF_EN_2_t         fpgaintf_en_2;         /* ALT_SYSMGR_FPGAINTF_EN_2 */
    ALT_SYSMGR_FPGAINTF_EN_3_t         fpgaintf_en_3;         /* ALT_SYSMGR_FPGAINTF_EN_3 */
    volatile uint32_t                  _pad_0x74_0x7f[3];     /* *UNDEFINED* */
    ALT_SYSMGR_NOC_ADDR_REMAP_VALUE_t  noc_addr_remap_value;  /* ALT_SYSMGR_NOC_ADDR_REMAP_VALUE */
    ALT_SYSMGR_NOC_ADDR_REMAP_SET_t    noc_addr_remap_set;    /* ALT_SYSMGR_NOC_ADDR_REMAP_SET */
    ALT_SYSMGR_NOC_ADDR_REMAP_CLR_t    noc_addr_remap_clear;  /* ALT_SYSMGR_NOC_ADDR_REMAP_CLR */
    volatile uint32_t                  _pad_0x8c_0x8f;        /* *UNDEFINED* */
    ALT_SYSMGR_ECC_INTMSK_VALUE_t      ecc_intmask_value;     /* ALT_SYSMGR_ECC_INTMSK_VALUE */
    ALT_SYSMGR_ECC_INTMSK_SET_t        ecc_intmask_set;       /* ALT_SYSMGR_ECC_INTMSK_SET */
    ALT_SYSMGR_ECC_INTMSK_CLR_t        ecc_intmask_clr;       /* ALT_SYSMGR_ECC_INTMSK_CLR */
    ALT_SYSMGR_ECC_INTSTAT_SERR_t      ecc_intstatus_serr;    /* ALT_SYSMGR_ECC_INTSTAT_SERR */
    ALT_SYSMGR_ECC_INTSTAT_DERR_t      ecc_intstatus_derr;    /* ALT_SYSMGR_ECC_INTSTAT_DERR */
    ALT_SYSMGR_MPU_STAT_L2_ECC_t       mpu_status_l2_ecc;     /* ALT_SYSMGR_MPU_STAT_L2_ECC */
    ALT_SYSMGR_MPU_CLR_L2_ECC_t        mpu_clear_l2_ecc;      /* ALT_SYSMGR_MPU_CLR_L2_ECC */
    ALT_SYSMGR_MPU_STAT_L1_PARITY_t    mpu_status_l1_parity;  /* ALT_SYSMGR_MPU_STAT_L1_PARITY */
    ALT_SYSMGR_MPU_CLR_L1_PARITY_t     mpu_clear_l1_parity;   /* ALT_SYSMGR_MPU_CLR_L1_PARITY */
    ALT_SYSMGR_MPU_SET_L1_PARITY_t     mpu_set_l1_parity;     /* ALT_SYSMGR_MPU_SET_L1_PARITY */
    volatile uint32_t                  _pad_0xb8_0xbf[2];     /* *UNDEFINED* */
    ALT_SYSMGR_NOC_TMO_t               noc_timeout;           /* ALT_SYSMGR_NOC_TMO */
    ALT_SYSMGR_NOC_IDLEREQ_SET_t       noc_idlereq_set;       /* ALT_SYSMGR_NOC_IDLEREQ_SET */
    ALT_SYSMGR_NOC_IDLEREQ_CLR_t       noc_idlereq_clr;       /* ALT_SYSMGR_NOC_IDLEREQ_CLR */
    ALT_SYSMGR_NOC_IDLEREQ_VALUE_t     noc_idlereq_value;     /* ALT_SYSMGR_NOC_IDLEREQ_VALUE */
    ALT_SYSMGR_NOC_IDLEACK_t           noc_idleack;           /* ALT_SYSMGR_NOC_IDLEACK */
    ALT_SYSMGR_NOC_IDLESTAT_t          noc_idlestatus;        /* ALT_SYSMGR_NOC_IDLESTAT */
    ALT_SYSMGR_F2H_CTL_t               fpga2soc_ctrl;         /* ALT_SYSMGR_F2H_CTL */
    volatile uint32_t                  _pad_0xdc_0xff[9];     /* *UNDEFINED* */
    ALT_SYSMGR_TSMC_TSEL_0_t           tsmc_tsel_0;           /* ALT_SYSMGR_TSMC_TSEL_0 */
    ALT_SYSMGR_TSMC_TSEL_1_t           tsmc_tsel_1;           /* ALT_SYSMGR_TSMC_TSEL_1 */
    ALT_SYSMGR_TSMC_TSEL_2_t           tsmc_tsel_2;           /* ALT_SYSMGR_TSMC_TSEL_2 */
    ALT_SYSMGR_TSMC_TSEL_3_t           tsmc_tsel_3;           /* ALT_SYSMGR_TSMC_TSEL_3 */
    volatile uint32_t                  _pad_0x110_0x200[60];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_SYSMGR. */
typedef volatile struct ALT_SYSMGR_s  ALT_SYSMGR_t;
/* The struct declaration for the raw register contents of register group ALT_SYSMGR. */
struct ALT_SYSMGR_raw_s
{
    volatile uint32_t  siliconid1;            /* ALT_SYSMGR_SILICONID1 */
    volatile uint32_t  siliconid2;            /* ALT_SYSMGR_SILICONID2 */
    volatile uint32_t  wddbg;                 /* ALT_SYSMGR_WDDBG */
    volatile uint32_t  bootinfo;              /* ALT_SYSMGR_BOOT */
    volatile uint32_t  mpu_ctrl_l2_ecc;       /* ALT_SYSMGR_MPU_CTL_L2_ECC */
    uint32_t           _pad_0x14_0x1f[3];     /* *UNDEFINED* */
    volatile uint32_t  dma;                   /* ALT_SYSMGR_DMA */
    volatile uint32_t  dma_periph;            /* ALT_SYSMGR_DMA_PERIPH */
    volatile uint32_t  sdmmc;                 /* ALT_SYSMGR_SDMMC */
    volatile uint32_t  sdmmc_l3master;        /* ALT_SYSMGR_SDMMC_L3MST */
    volatile uint32_t  nand_bootstrap;        /* ALT_SYSMGR_NAND_BOOTSTRAP */
    volatile uint32_t  nand_l3master;         /* ALT_SYSMGR_NAND_L3MST */
    volatile uint32_t  usb0_l3master;         /* ALT_SYSMGR_USB0_L3MST */
    volatile uint32_t  usb1_l3master;         /* ALT_SYSMGR_USB1_L3MST */
    volatile uint32_t  emac_global;           /* ALT_SYSMGR_EMAC_GLOB */
    volatile uint32_t  emac0;                 /* ALT_SYSMGR_EMAC0 */
    volatile uint32_t  emac1;                 /* ALT_SYSMGR_EMAC1 */
    volatile uint32_t  emac2;                 /* ALT_SYSMGR_EMAC2 */
    uint32_t           _pad_0x50_0x5f[4];     /* *UNDEFINED* */
    volatile uint32_t  fpgaintf_en_global;    /* ALT_SYSMGR_FPGAINTF_EN_GLOB */
    volatile uint32_t  fpgaintf_en_0;         /* ALT_SYSMGR_FPGAINTF_EN_0 */
    volatile uint32_t  fpgaintf_en_1;         /* ALT_SYSMGR_FPGAINTF_EN_1 */
    volatile uint32_t  fpgaintf_en_2;         /* ALT_SYSMGR_FPGAINTF_EN_2 */
    volatile uint32_t  fpgaintf_en_3;         /* ALT_SYSMGR_FPGAINTF_EN_3 */
    uint32_t           _pad_0x74_0x7f[3];     /* *UNDEFINED* */
    volatile uint32_t  noc_addr_remap_value;  /* ALT_SYSMGR_NOC_ADDR_REMAP_VALUE */
    volatile uint32_t  noc_addr_remap_set;    /* ALT_SYSMGR_NOC_ADDR_REMAP_SET */
    volatile uint32_t  noc_addr_remap_clear;  /* ALT_SYSMGR_NOC_ADDR_REMAP_CLR */
    uint32_t           _pad_0x8c_0x8f;        /* *UNDEFINED* */
    volatile uint32_t  ecc_intmask_value;     /* ALT_SYSMGR_ECC_INTMSK_VALUE */
    volatile uint32_t  ecc_intmask_set;       /* ALT_SYSMGR_ECC_INTMSK_SET */
    volatile uint32_t  ecc_intmask_clr;       /* ALT_SYSMGR_ECC_INTMSK_CLR */
    volatile uint32_t  ecc_intstatus_serr;    /* ALT_SYSMGR_ECC_INTSTAT_SERR */
    volatile uint32_t  ecc_intstatus_derr;    /* ALT_SYSMGR_ECC_INTSTAT_DERR */
    volatile uint32_t  mpu_status_l2_ecc;     /* ALT_SYSMGR_MPU_STAT_L2_ECC */
    volatile uint32_t  mpu_clear_l2_ecc;      /* ALT_SYSMGR_MPU_CLR_L2_ECC */
    volatile uint32_t  mpu_status_l1_parity;  /* ALT_SYSMGR_MPU_STAT_L1_PARITY */
    volatile uint32_t  mpu_clear_l1_parity;   /* ALT_SYSMGR_MPU_CLR_L1_PARITY */
    volatile uint32_t  mpu_set_l1_parity;     /* ALT_SYSMGR_MPU_SET_L1_PARITY */
    uint32_t           _pad_0xb8_0xbf[2];     /* *UNDEFINED* */
    volatile uint32_t  noc_timeout;           /* ALT_SYSMGR_NOC_TMO */
    volatile uint32_t  noc_idlereq_set;       /* ALT_SYSMGR_NOC_IDLEREQ_SET */
    volatile uint32_t  noc_idlereq_clr;       /* ALT_SYSMGR_NOC_IDLEREQ_CLR */
    volatile uint32_t  noc_idlereq_value;     /* ALT_SYSMGR_NOC_IDLEREQ_VALUE */
    volatile uint32_t  noc_idleack;           /* ALT_SYSMGR_NOC_IDLEACK */
    volatile uint32_t  noc_idlestatus;        /* ALT_SYSMGR_NOC_IDLESTAT */
    volatile uint32_t  fpga2soc_ctrl;         /* ALT_SYSMGR_F2H_CTL */
    uint32_t           _pad_0xdc_0xff[9];     /* *UNDEFINED* */
    volatile uint32_t  tsmc_tsel_0;           /* ALT_SYSMGR_TSMC_TSEL_0 */
    volatile uint32_t  tsmc_tsel_1;           /* ALT_SYSMGR_TSMC_TSEL_1 */
    volatile uint32_t  tsmc_tsel_2;           /* ALT_SYSMGR_TSMC_TSEL_2 */
    volatile uint32_t  tsmc_tsel_3;           /* ALT_SYSMGR_TSMC_TSEL_3 */
    uint32_t           _pad_0x110_0x200[60];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_SYSMGR. */
typedef volatile struct ALT_SYSMGR_raw_s  ALT_SYSMGR_raw_t;
#endif  /* __ASSEMBLY__ */


/*
 * Component : ALT_SYSMGR_ROM
 * 
 */
/*
 * Register : Boot ROM Hardware Control Register - romhw_ctrl
 * 
 * Controls behavior of Boot ROM hardware.
 * 
 * Reset only on a cold reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [0]    | RW     | 0x0   | Wait State 
 *  [31:1] | ???    | 0x80  | *UNDEFINED*
 * 
 */
/*
 * Field : Wait State - waitstate
 * 
 * Controls the number of wait states applied to the Boot ROM's read operation.
 * 
 * This field is cleared on a cold reset and optionally updated by hardware upon
 * deassertion of warm reset.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description
 * :-----------------------------------------|:------|:------------
 *  ALT_SYSMGR_ROM_ROMHW_CTL_WAITSTATE_E_DIS | 0x0   |            
 *  ALT_SYSMGR_ROM_ROMHW_CTL_WAITSTATE_E_EN  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_ROM_ROMHW_CTL_WAITSTATE
 * 
 */
#define ALT_SYSMGR_ROM_ROMHW_CTL_WAITSTATE_E_DIS    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_ROM_ROMHW_CTL_WAITSTATE
 * 
 */
#define ALT_SYSMGR_ROM_ROMHW_CTL_WAITSTATE_E_EN     0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ROM_ROMHW_CTL_WAITSTATE register field. */
#define ALT_SYSMGR_ROM_ROMHW_CTL_WAITSTATE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ROM_ROMHW_CTL_WAITSTATE register field. */
#define ALT_SYSMGR_ROM_ROMHW_CTL_WAITSTATE_MSB        0
/* The width in bits of the ALT_SYSMGR_ROM_ROMHW_CTL_WAITSTATE register field. */
#define ALT_SYSMGR_ROM_ROMHW_CTL_WAITSTATE_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ROM_ROMHW_CTL_WAITSTATE register field value. */
#define ALT_SYSMGR_ROM_ROMHW_CTL_WAITSTATE_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_ROM_ROMHW_CTL_WAITSTATE register field value. */
#define ALT_SYSMGR_ROM_ROMHW_CTL_WAITSTATE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_ROM_ROMHW_CTL_WAITSTATE register field. */
#define ALT_SYSMGR_ROM_ROMHW_CTL_WAITSTATE_RESET      0x0
/* Extracts the ALT_SYSMGR_ROM_ROMHW_CTL_WAITSTATE field value from a register. */
#define ALT_SYSMGR_ROM_ROMHW_CTL_WAITSTATE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_ROM_ROMHW_CTL_WAITSTATE register field value suitable for setting the register. */
#define ALT_SYSMGR_ROM_ROMHW_CTL_WAITSTATE_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_ROM_ROMHW_CTL.
 */
struct ALT_SYSMGR_ROM_ROMHW_CTL_s
{
    uint32_t  waitstate :  1;  /* Wait State */
    uint32_t            : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_ROM_ROMHW_CTL. */
typedef volatile struct ALT_SYSMGR_ROM_ROMHW_CTL_s  ALT_SYSMGR_ROM_ROMHW_CTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_ROM_ROMHW_CTL register. */
#define ALT_SYSMGR_ROM_ROMHW_CTL_RESET       0x00000100
/* The byte offset of the ALT_SYSMGR_ROM_ROMHW_CTL register from the beginning of the component. */
#define ALT_SYSMGR_ROM_ROMHW_CTL_OFST        0x0

/*
 * Register : Control Register - romcode_ctrl
 * 
 * Contains information used to control Boot ROM code.
 * 
 * Reset only on a cold reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                               
 * :-------|:-------|:------|:-------------------------------------------
 *  [0]    | RW     | 0x0   | Warm Reset Configure Pin Mux for Boot Pins
 *  [1]    | RW     | 0x0   | Warm Reset Configure IOs for Boot Pins    
 *  [31:2] | ???    | 0x0   | *UNDEFINED*                               
 * 
 */
/*
 * Field : Warm Reset Configure Pin Mux for Boot Pins - warmrstcfgpinmux
 * 
 * Specifies whether the Boot ROM code configures the pin mux for boot pins after a
 * warm reset. Note that the Boot ROM code always configures the pin mux for boot
 * pins after a cold reset. After the Boot ROM code configures the pin mux for boot
 * pins, it always disables this field. It is up to user software to enable this
 * field if it wants a different behavior.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value | Description
 * :---------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGPINMUX_E_DISD | 0x0   |            
 *  ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGPINMUX_E_END  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGPINMUX
 * 
 */
#define ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGPINMUX_E_DISD  0x0
/*
 * Enumerated value for register field ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGPINMUX
 * 
 */
#define ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGPINMUX_E_END   0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGPINMUX register field. */
#define ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGPINMUX_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGPINMUX register field. */
#define ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGPINMUX_MSB        0
/* The width in bits of the ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGPINMUX register field. */
#define ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGPINMUX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGPINMUX register field value. */
#define ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGPINMUX_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGPINMUX register field value. */
#define ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGPINMUX_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGPINMUX register field. */
#define ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGPINMUX_RESET      0x0
/* Extracts the ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGPINMUX field value from a register. */
#define ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGPINMUX_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGPINMUX register field value suitable for setting the register. */
#define ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGPINMUX_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Warm Reset Configure IOs for Boot Pins - warmrstcfgio
 * 
 * Specifies whether the Boot ROM code configures the IOs used by boot after a warm
 * reset. Note that the Boot ROM code always configures the IOs used by boot after
 * a cold reset. After the Boot ROM code configures the IOs used by boot, it always
 * disables this field. It is up to user software to enable this field if it wants
 * a different behavior.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                           | Value | Description
 * :-----------------------------------------------|:------|:------------
 *  ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGIO_E_DISD | 0x0   |            
 *  ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGIO_E_END  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGIO
 * 
 */
#define ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGIO_E_DISD  0x0
/*
 * Enumerated value for register field ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGIO
 * 
 */
#define ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGIO_E_END   0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGIO register field. */
#define ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGIO_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGIO register field. */
#define ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGIO_MSB        1
/* The width in bits of the ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGIO register field. */
#define ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGIO_WIDTH      1
/* The mask used to set the ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGIO register field value. */
#define ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGIO_SET_MSK    0x00000002
/* The mask used to clear the ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGIO register field value. */
#define ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGIO_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGIO register field. */
#define ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGIO_RESET      0x0
/* Extracts the ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGIO field value from a register. */
#define ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGIO_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGIO register field value suitable for setting the register. */
#define ALT_SYSMGR_ROM_ROMCODE_CTL_WARMRSTCFGIO_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_ROM_ROMCODE_CTL.
 */
struct ALT_SYSMGR_ROM_ROMCODE_CTL_s
{
    uint32_t  warmrstcfgpinmux :  1;  /* Warm Reset Configure Pin Mux for Boot Pins */
    uint32_t  warmrstcfgio     :  1;  /* Warm Reset Configure IOs for Boot Pins */
    uint32_t                   : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_ROM_ROMCODE_CTL. */
typedef volatile struct ALT_SYSMGR_ROM_ROMCODE_CTL_s  ALT_SYSMGR_ROM_ROMCODE_CTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_ROM_ROMCODE_CTL register. */
#define ALT_SYSMGR_ROM_ROMCODE_CTL_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_ROM_ROMCODE_CTL register from the beginning of the component. */
#define ALT_SYSMGR_ROM_ROMCODE_CTL_OFST        0x4

/*
 * Register : QSPI reset command - romcode_qspi_reset_command
 * 
 * Information used by bootrom to send specific reset command sequences to QSPI.
 * 
 * This register value gets reset only on a cold reset.
 * 
 * Below are the definisions used by bootrom
 * 
 * 0xXXXXXX00: Don't software reset.
 * 
 * 0xXXXXXX01: Send 0x66, 0x99 as reset command.
 * 
 * 0xXXXXXX02: Send 0xFF as reset command.
 * 
 * 0xXXXXXX03: Send TBA as reset command.
 * 
 * There is also a custom command for devices we don't know about yet.
 * 
 * 0xXXXXZZ81: Send byte 0xZZ as reset command.
 * 
 * 0xXXWWZZ82: Send byte 0xZZ, 0xWW as reset command.
 * 
 * 0xYYWWZZ83: Send byte 0xZZ, 0xWW, 0xYY as reset command.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Address    
 * 
 */
/*
 * Field : Address - value
 * 
 * Address for CPU1 to start executing at after coming out of reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD_VALUE register field. */
#define ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD_VALUE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD_VALUE register field. */
#define ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD_VALUE_MSB        31
/* The width in bits of the ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD_VALUE register field. */
#define ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD_VALUE_WIDTH      32
/* The mask used to set the ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD_VALUE register field value. */
#define ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD_VALUE_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD_VALUE register field value. */
#define ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD_VALUE_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD_VALUE register field. */
#define ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD_VALUE_RESET      0x0
/* Extracts the ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD_VALUE field value from a register. */
#define ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD_VALUE_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD_VALUE register field value suitable for setting the register. */
#define ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD_VALUE_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD.
 */
struct ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD_s
{
    uint32_t  value : 32;  /* Address */
};

/* The typedef declaration for register ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD. */
typedef volatile struct ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD_s  ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD register. */
#define ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD register from the beginning of the component. */
#define ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD_OFST        0x8

/*
 * Register : Initial Software State Register - romcode_initswstate
 * 
 * Initial Software loaded by the Boot ROM writes the magic value 0x49535756 (ISWV
 * in ASCII) to this register when it has reached a valid state.
 * 
 * Reset only on a cold reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Value      
 * 
 */
/*
 * Field : Value - value
 * 
 * Written with magic value.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value      | Description
 * :---------------------------------------------------|:-----------|:------------
 *  ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_VALUE_E_INVALID | 0x0        |            
 *  ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_VALUE_E_VALID   | 0x49535756 |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_VALUE
 * 
 */
#define ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_VALUE_E_INVALID  0x0
/*
 * Enumerated value for register field ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_VALUE
 * 
 */
#define ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_VALUE_E_VALID    0x49535756

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_VALUE register field. */
#define ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_VALUE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_VALUE register field. */
#define ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_VALUE_MSB        31
/* The width in bits of the ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_VALUE register field. */
#define ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_VALUE_WIDTH      32
/* The mask used to set the ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_VALUE register field value. */
#define ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_VALUE_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_VALUE register field value. */
#define ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_VALUE_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_VALUE register field. */
#define ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_VALUE_RESET      0x0
/* Extracts the ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_VALUE field value from a register. */
#define ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_VALUE_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_VALUE register field value suitable for setting the register. */
#define ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_VALUE_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE.
 */
struct ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_s
{
    uint32_t  value : 32;  /* Value */
};

/* The typedef declaration for register ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE. */
typedef volatile struct ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_s  ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE register. */
#define ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE register from the beginning of the component. */
#define ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_OFST        0xc

/*
 * Register : Initial Software Last Image Loaded Register - romcode_initswlastld
 * 
 * Contains the index of the last Initial Software image loaded by the Boot ROM
 * from the boot device.
 * 
 * Reset only on a cold reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [1:0]  | RW     | 0x0   | Index      
 *  [31:2] | ???    | 0x0   | *UNDEFINED*
 * 
 */
/*
 * Field : Index - index
 * 
 * Index of last image loaded.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD_INDEX register field. */
#define ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD_INDEX_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD_INDEX register field. */
#define ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD_INDEX_MSB        1
/* The width in bits of the ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD_INDEX register field. */
#define ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD_INDEX_WIDTH      2
/* The mask used to set the ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD_INDEX register field value. */
#define ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD_INDEX_SET_MSK    0x00000003
/* The mask used to clear the ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD_INDEX register field value. */
#define ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD_INDEX_CLR_MSK    0xfffffffc
/* The reset value of the ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD_INDEX register field. */
#define ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD_INDEX_RESET      0x0
/* Extracts the ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD_INDEX field value from a register. */
#define ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD_INDEX_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD_INDEX register field value suitable for setting the register. */
#define ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD_INDEX_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD.
 */
struct ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD_s
{
    uint32_t  index :  2;  /* Index */
    uint32_t        : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD. */
typedef volatile struct ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD_s  ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD register. */
#define ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD register from the beginning of the component. */
#define ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD_OFST        0x10

/*
 * Register : Enable Register - warmram_enable
 * 
 * Enables or disables the warm reset from On-chip RAM feature.
 * 
 * Reset only on a cold reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [31:0] | RW     | 0x0   | Warm Reset from On-chip RAM
 * 
 */
/*
 * Field : Warm Reset from On-chip RAM - magic
 * 
 * Controls whether Boot ROM will attempt to boot from the contents of the On-chip
 * RAM on a warm reset. When this feature is enabled, the Boot ROM code will not
 * configure boot IOs, the pin mux, or clocks.
 * 
 * Note that the enable value is a 32-bit magic value (provided by the enum).
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value      | Description
 * :---------------------------------------|:-----------|:------------
 *  ALT_SYSMGR_ROM_WARMRAM_EN_MAGIC_E_DISD | 0x0        |            
 *  ALT_SYSMGR_ROM_WARMRAM_EN_MAGIC_E_END  | 0xae9efebc |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_ROM_WARMRAM_EN_MAGIC
 * 
 */
#define ALT_SYSMGR_ROM_WARMRAM_EN_MAGIC_E_DISD  0x0
/*
 * Enumerated value for register field ALT_SYSMGR_ROM_WARMRAM_EN_MAGIC
 * 
 */
#define ALT_SYSMGR_ROM_WARMRAM_EN_MAGIC_E_END   0xae9efebc

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ROM_WARMRAM_EN_MAGIC register field. */
#define ALT_SYSMGR_ROM_WARMRAM_EN_MAGIC_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ROM_WARMRAM_EN_MAGIC register field. */
#define ALT_SYSMGR_ROM_WARMRAM_EN_MAGIC_MSB        31
/* The width in bits of the ALT_SYSMGR_ROM_WARMRAM_EN_MAGIC register field. */
#define ALT_SYSMGR_ROM_WARMRAM_EN_MAGIC_WIDTH      32
/* The mask used to set the ALT_SYSMGR_ROM_WARMRAM_EN_MAGIC register field value. */
#define ALT_SYSMGR_ROM_WARMRAM_EN_MAGIC_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_ROM_WARMRAM_EN_MAGIC register field value. */
#define ALT_SYSMGR_ROM_WARMRAM_EN_MAGIC_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_ROM_WARMRAM_EN_MAGIC register field. */
#define ALT_SYSMGR_ROM_WARMRAM_EN_MAGIC_RESET      0x0
/* Extracts the ALT_SYSMGR_ROM_WARMRAM_EN_MAGIC field value from a register. */
#define ALT_SYSMGR_ROM_WARMRAM_EN_MAGIC_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_ROM_WARMRAM_EN_MAGIC register field value suitable for setting the register. */
#define ALT_SYSMGR_ROM_WARMRAM_EN_MAGIC_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_ROM_WARMRAM_EN.
 */
struct ALT_SYSMGR_ROM_WARMRAM_EN_s
{
    uint32_t  magic : 32;  /* Warm Reset from On-chip RAM */
};

/* The typedef declaration for register ALT_SYSMGR_ROM_WARMRAM_EN. */
typedef volatile struct ALT_SYSMGR_ROM_WARMRAM_EN_s  ALT_SYSMGR_ROM_WARMRAM_EN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_ROM_WARMRAM_EN register. */
#define ALT_SYSMGR_ROM_WARMRAM_EN_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_ROM_WARMRAM_EN register from the beginning of the component. */
#define ALT_SYSMGR_ROM_WARMRAM_EN_OFST        0x18

/*
 * Register : Data Start Register - warmram_datastart
 * 
 * Offset into On-chip RAM of the start of the region for CRC validation
 * 
 * Reset only on a cold reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description      
 * :-------|:-------|:------|:------------------
 *  [31:0] | RW     | 0x0   | Data Start Offset
 * 
 */
/*
 * Field : Data Start Offset - offset
 * 
 * Contains the byte offset into the On-chip RAM of the start of the On-chip RAM
 * region for the warm boot CRC validation. The offset must be an integer multiple
 * of 4 (i.e. aligned to a word). The Boot ROM code will set the top 16 bits to
 * 0xFFFF and clear the bottom 2 bits.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ROM_WARMRAM_DATASTART_OFFSET register field. */
#define ALT_SYSMGR_ROM_WARMRAM_DATASTART_OFFSET_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ROM_WARMRAM_DATASTART_OFFSET register field. */
#define ALT_SYSMGR_ROM_WARMRAM_DATASTART_OFFSET_MSB        31
/* The width in bits of the ALT_SYSMGR_ROM_WARMRAM_DATASTART_OFFSET register field. */
#define ALT_SYSMGR_ROM_WARMRAM_DATASTART_OFFSET_WIDTH      32
/* The mask used to set the ALT_SYSMGR_ROM_WARMRAM_DATASTART_OFFSET register field value. */
#define ALT_SYSMGR_ROM_WARMRAM_DATASTART_OFFSET_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_ROM_WARMRAM_DATASTART_OFFSET register field value. */
#define ALT_SYSMGR_ROM_WARMRAM_DATASTART_OFFSET_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_ROM_WARMRAM_DATASTART_OFFSET register field. */
#define ALT_SYSMGR_ROM_WARMRAM_DATASTART_OFFSET_RESET      0x0
/* Extracts the ALT_SYSMGR_ROM_WARMRAM_DATASTART_OFFSET field value from a register. */
#define ALT_SYSMGR_ROM_WARMRAM_DATASTART_OFFSET_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_ROM_WARMRAM_DATASTART_OFFSET register field value suitable for setting the register. */
#define ALT_SYSMGR_ROM_WARMRAM_DATASTART_OFFSET_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_ROM_WARMRAM_DATASTART.
 */
struct ALT_SYSMGR_ROM_WARMRAM_DATASTART_s
{
    uint32_t  offset : 32;  /* Data Start Offset */
};

/* The typedef declaration for register ALT_SYSMGR_ROM_WARMRAM_DATASTART. */
typedef volatile struct ALT_SYSMGR_ROM_WARMRAM_DATASTART_s  ALT_SYSMGR_ROM_WARMRAM_DATASTART_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_ROM_WARMRAM_DATASTART register. */
#define ALT_SYSMGR_ROM_WARMRAM_DATASTART_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_ROM_WARMRAM_DATASTART register from the beginning of the component. */
#define ALT_SYSMGR_ROM_WARMRAM_DATASTART_OFST        0x1c

/*
 * Register : Length Register - warmram_length
 * 
 * Length of region in On-chip RAM for CRC validation.
 * 
 * Reset only on a cold reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | Size       
 * 
 */
/*
 * Field : Size - size
 * 
 * Contains the length (in bytes) of the region in the On-chip RAM for the warm
 * boot CRC validation.
 * 
 * If the length is 0, the Boot ROM won't perform CRC calculation and CRC check to
 * avoid overhead caused by CRC validation.
 * 
 * If the START + LENGTH exceeds the maximum offset into the On-chip RAM, the Boot
 * ROM won't boot from the On-chip RAM.
 * 
 * The length must be an integer multiple of 4.
 * 
 * The Boot ROM code will clear the top 16 bits and the bottom 2 bits.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ROM_WARMRAM_LEN_SIZE register field. */
#define ALT_SYSMGR_ROM_WARMRAM_LEN_SIZE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ROM_WARMRAM_LEN_SIZE register field. */
#define ALT_SYSMGR_ROM_WARMRAM_LEN_SIZE_MSB        31
/* The width in bits of the ALT_SYSMGR_ROM_WARMRAM_LEN_SIZE register field. */
#define ALT_SYSMGR_ROM_WARMRAM_LEN_SIZE_WIDTH      32
/* The mask used to set the ALT_SYSMGR_ROM_WARMRAM_LEN_SIZE register field value. */
#define ALT_SYSMGR_ROM_WARMRAM_LEN_SIZE_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_ROM_WARMRAM_LEN_SIZE register field value. */
#define ALT_SYSMGR_ROM_WARMRAM_LEN_SIZE_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_ROM_WARMRAM_LEN_SIZE register field. */
#define ALT_SYSMGR_ROM_WARMRAM_LEN_SIZE_RESET      0x0
/* Extracts the ALT_SYSMGR_ROM_WARMRAM_LEN_SIZE field value from a register. */
#define ALT_SYSMGR_ROM_WARMRAM_LEN_SIZE_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_ROM_WARMRAM_LEN_SIZE register field value suitable for setting the register. */
#define ALT_SYSMGR_ROM_WARMRAM_LEN_SIZE_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_ROM_WARMRAM_LEN.
 */
struct ALT_SYSMGR_ROM_WARMRAM_LEN_s
{
    uint32_t  size : 32;  /* Size */
};

/* The typedef declaration for register ALT_SYSMGR_ROM_WARMRAM_LEN. */
typedef volatile struct ALT_SYSMGR_ROM_WARMRAM_LEN_s  ALT_SYSMGR_ROM_WARMRAM_LEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_ROM_WARMRAM_LEN register. */
#define ALT_SYSMGR_ROM_WARMRAM_LEN_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_ROM_WARMRAM_LEN register from the beginning of the component. */
#define ALT_SYSMGR_ROM_WARMRAM_LEN_OFST        0x20

/*
 * Register : Execution Register - warmram_execution
 * 
 * Offset into On-chip RAM to enter to on a warm boot.
 * 
 * Reset only on a cold reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description     
 * :-------|:-------|:------|:-----------------
 *  [31:0] | RW     | 0x0   | Execution Offset
 * 
 */
/*
 * Field : Execution Offset - offset
 * 
 * Contains the byte offset into the On-chip RAM that the Boot ROM will jump to if
 * the CRC validation succeeds.
 * 
 * The Boot ROM code will set the top 16 bits to 0xFFFF.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ROM_WARMRAM_EXECUTION_OFFSET register field. */
#define ALT_SYSMGR_ROM_WARMRAM_EXECUTION_OFFSET_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ROM_WARMRAM_EXECUTION_OFFSET register field. */
#define ALT_SYSMGR_ROM_WARMRAM_EXECUTION_OFFSET_MSB        31
/* The width in bits of the ALT_SYSMGR_ROM_WARMRAM_EXECUTION_OFFSET register field. */
#define ALT_SYSMGR_ROM_WARMRAM_EXECUTION_OFFSET_WIDTH      32
/* The mask used to set the ALT_SYSMGR_ROM_WARMRAM_EXECUTION_OFFSET register field value. */
#define ALT_SYSMGR_ROM_WARMRAM_EXECUTION_OFFSET_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_ROM_WARMRAM_EXECUTION_OFFSET register field value. */
#define ALT_SYSMGR_ROM_WARMRAM_EXECUTION_OFFSET_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_ROM_WARMRAM_EXECUTION_OFFSET register field. */
#define ALT_SYSMGR_ROM_WARMRAM_EXECUTION_OFFSET_RESET      0x0
/* Extracts the ALT_SYSMGR_ROM_WARMRAM_EXECUTION_OFFSET field value from a register. */
#define ALT_SYSMGR_ROM_WARMRAM_EXECUTION_OFFSET_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_ROM_WARMRAM_EXECUTION_OFFSET register field value suitable for setting the register. */
#define ALT_SYSMGR_ROM_WARMRAM_EXECUTION_OFFSET_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_ROM_WARMRAM_EXECUTION.
 */
struct ALT_SYSMGR_ROM_WARMRAM_EXECUTION_s
{
    uint32_t  offset : 32;  /* Execution Offset */
};

/* The typedef declaration for register ALT_SYSMGR_ROM_WARMRAM_EXECUTION. */
typedef volatile struct ALT_SYSMGR_ROM_WARMRAM_EXECUTION_s  ALT_SYSMGR_ROM_WARMRAM_EXECUTION_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_ROM_WARMRAM_EXECUTION register. */
#define ALT_SYSMGR_ROM_WARMRAM_EXECUTION_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_ROM_WARMRAM_EXECUTION register from the beginning of the component. */
#define ALT_SYSMGR_ROM_WARMRAM_EXECUTION_OFST        0x24

/*
 * Register : Expected CRC Register - warmram_crc
 * 
 * Length of region in On-chip RAM for CRC validation.
 * 
 * Reset only on a cold reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description 
 * :-------|:-------|:------|:-------------
 *  [31:0] | RW     | 0x0   | Expected CRC
 * 
 */
/*
 * Field : Expected CRC - expected
 * 
 * Contains the expected CRC of the region in the On-chip RAM.The Boot ROM code
 * calculates the actual CRC for all bytes in the region specified by the DATA
 * START an LENGTH registers. The contents of the EXECUTION register (after it has
 * been read and modified by the Boot ROM code) is also included in the CRC
 * calculation. The contents of the EXECUTION register is added to the CRC
 * accumulator a byte at a time starting with the least significant byte. If the
 * actual CRC doesn't match the expected CRC value in this register, the Boot ROM
 * won't boot from the On-chip RAM.
 * 
 * The CRC is a standard CRC32 with the polynomial:
 * 
 * x^32 + x^26 + x^23 + x^22 + x^16 + x^12 + x^11 + x^10 + x^8 + x^7 + x^5 + x^4 +
 * x^2 + x + 1
 * 
 * There is no reflection of the bits and the initial value of the remainder is
 * 0xFFFFFFFF and the final value is exclusive ORed with 0xFFFFFFFF.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ROM_WARMRAM_CRC_EXPECTED register field. */
#define ALT_SYSMGR_ROM_WARMRAM_CRC_EXPECTED_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ROM_WARMRAM_CRC_EXPECTED register field. */
#define ALT_SYSMGR_ROM_WARMRAM_CRC_EXPECTED_MSB        31
/* The width in bits of the ALT_SYSMGR_ROM_WARMRAM_CRC_EXPECTED register field. */
#define ALT_SYSMGR_ROM_WARMRAM_CRC_EXPECTED_WIDTH      32
/* The mask used to set the ALT_SYSMGR_ROM_WARMRAM_CRC_EXPECTED register field value. */
#define ALT_SYSMGR_ROM_WARMRAM_CRC_EXPECTED_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_ROM_WARMRAM_CRC_EXPECTED register field value. */
#define ALT_SYSMGR_ROM_WARMRAM_CRC_EXPECTED_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_ROM_WARMRAM_CRC_EXPECTED register field. */
#define ALT_SYSMGR_ROM_WARMRAM_CRC_EXPECTED_RESET      0x0
/* Extracts the ALT_SYSMGR_ROM_WARMRAM_CRC_EXPECTED field value from a register. */
#define ALT_SYSMGR_ROM_WARMRAM_CRC_EXPECTED_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_ROM_WARMRAM_CRC_EXPECTED register field value suitable for setting the register. */
#define ALT_SYSMGR_ROM_WARMRAM_CRC_EXPECTED_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_ROM_WARMRAM_CRC.
 */
struct ALT_SYSMGR_ROM_WARMRAM_CRC_s
{
    uint32_t  expected : 32;  /* Expected CRC */
};

/* The typedef declaration for register ALT_SYSMGR_ROM_WARMRAM_CRC. */
typedef volatile struct ALT_SYSMGR_ROM_WARMRAM_CRC_s  ALT_SYSMGR_ROM_WARMRAM_CRC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_ROM_WARMRAM_CRC register. */
#define ALT_SYSMGR_ROM_WARMRAM_CRC_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_ROM_WARMRAM_CRC register from the beginning of the component. */
#define ALT_SYSMGR_ROM_WARMRAM_CRC_OFST        0x28

/*
 * Register : Preloader to OS Handoff Information - isw_handoff
 * 
 * These registers are used to store handoff infomation between the preloader and
 * the OS. These 8 registers can be used to store any information. The contents of
 * these registers have no impact on the state of the HPS hardware.
 * 
 * A total of 8 x 32 bit registers for Second State Boot Loader handoff
 * 
 * Reset only on a cold reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_SYSMGR_ROM_ISW_HANDOFF_ISW_HANDOFF
 * 
 */
/*
 * Field : isw_handoff
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ROM_ISW_HANDOFF_ISW_HANDOFF register field. */
#define ALT_SYSMGR_ROM_ISW_HANDOFF_ISW_HANDOFF_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ROM_ISW_HANDOFF_ISW_HANDOFF register field. */
#define ALT_SYSMGR_ROM_ISW_HANDOFF_ISW_HANDOFF_MSB        31
/* The width in bits of the ALT_SYSMGR_ROM_ISW_HANDOFF_ISW_HANDOFF register field. */
#define ALT_SYSMGR_ROM_ISW_HANDOFF_ISW_HANDOFF_WIDTH      32
/* The mask used to set the ALT_SYSMGR_ROM_ISW_HANDOFF_ISW_HANDOFF register field value. */
#define ALT_SYSMGR_ROM_ISW_HANDOFF_ISW_HANDOFF_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_ROM_ISW_HANDOFF_ISW_HANDOFF register field value. */
#define ALT_SYSMGR_ROM_ISW_HANDOFF_ISW_HANDOFF_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_ROM_ISW_HANDOFF_ISW_HANDOFF register field. */
#define ALT_SYSMGR_ROM_ISW_HANDOFF_ISW_HANDOFF_RESET      0x0
/* Extracts the ALT_SYSMGR_ROM_ISW_HANDOFF_ISW_HANDOFF field value from a register. */
#define ALT_SYSMGR_ROM_ISW_HANDOFF_ISW_HANDOFF_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_ROM_ISW_HANDOFF_ISW_HANDOFF register field value suitable for setting the register. */
#define ALT_SYSMGR_ROM_ISW_HANDOFF_ISW_HANDOFF_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_ROM_ISW_HANDOFF.
 */
struct ALT_SYSMGR_ROM_ISW_HANDOFF_s
{
    uint32_t  isw_handoff : 32;  /* ALT_SYSMGR_ROM_ISW_HANDOFF_ISW_HANDOFF */
};

/* The typedef declaration for register ALT_SYSMGR_ROM_ISW_HANDOFF. */
typedef volatile struct ALT_SYSMGR_ROM_ISW_HANDOFF_s  ALT_SYSMGR_ROM_ISW_HANDOFF_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_ROM_ISW_HANDOFF register. */
#define ALT_SYSMGR_ROM_ISW_HANDOFF_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_ROM_ISW_HANDOFF register from the beginning of the component. */
#define ALT_SYSMGR_ROM_ISW_HANDOFF_OFST        0x30

/*
 * Register : Preloader to OS Handoff Information - romcode_bootromswstate
 * 
 * general purpose register used by the Boot ROM code. Actual usage is defined in
 * the Boot ROM source code.
 * 
 * Reset only on a cold reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                
 * :-------|:-------|:------|:--------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE_VALUE
 * 
 */
/*
 * Field : value
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE_VALUE register field. */
#define ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE_VALUE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE_VALUE register field. */
#define ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE_VALUE_MSB        31
/* The width in bits of the ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE_VALUE register field. */
#define ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE_VALUE_WIDTH      32
/* The mask used to set the ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE_VALUE register field value. */
#define ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE_VALUE_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE_VALUE register field value. */
#define ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE_VALUE_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE_VALUE register field. */
#define ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE_VALUE_RESET      0x0
/* Extracts the ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE_VALUE field value from a register. */
#define ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE_VALUE_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE_VALUE register field value suitable for setting the register. */
#define ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE_VALUE_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE.
 */
struct ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE_s
{
    uint32_t  value : 32;  /* ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE_VALUE */
};

/* The typedef declaration for register ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE. */
typedef volatile struct ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE_s  ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE register. */
#define ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE register from the beginning of the component. */
#define ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE_OFST        0x50

/*
 * Register : romcode_stickyset_warmclr
 * 
 * Write 1 to set each bit.
 * 
 * Write 0 has no effect.
 * 
 * Clears on warm/cold reset. No other way to clear the value once written 1.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                   
 * :-------|:-------|:------|:-----------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR_VALUE
 * 
 */
/*
 * Field : value
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR_VALUE register field. */
#define ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR_VALUE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR_VALUE register field. */
#define ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR_VALUE_MSB        31
/* The width in bits of the ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR_VALUE register field. */
#define ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR_VALUE_WIDTH      32
/* The mask used to set the ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR_VALUE register field value. */
#define ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR_VALUE_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR_VALUE register field value. */
#define ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR_VALUE_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR_VALUE register field. */
#define ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR_VALUE_RESET      0x0
/* Extracts the ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR_VALUE field value from a register. */
#define ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR_VALUE_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR_VALUE register field value suitable for setting the register. */
#define ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR_VALUE_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR.
 */
struct ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR_s
{
    uint32_t  value : 32;  /* ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR_VALUE */
};

/* The typedef declaration for register ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR. */
typedef volatile struct ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR_s  ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR register. */
#define ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR register from the beginning of the component. */
#define ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR_OFST        0x70

/*
 * Register : romcode_stickyset_coldclr
 * 
 * Write 1 to set each bit.
 * 
 * Write 0 has no effect.
 * 
 * Clears on cold reset. No other way to clear the value once written 1.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                   
 * :-------|:-------|:------|:-----------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR_VALUE
 * 
 */
/*
 * Field : value
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR_VALUE register field. */
#define ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR_VALUE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR_VALUE register field. */
#define ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR_VALUE_MSB        31
/* The width in bits of the ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR_VALUE register field. */
#define ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR_VALUE_WIDTH      32
/* The mask used to set the ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR_VALUE register field value. */
#define ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR_VALUE_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR_VALUE register field value. */
#define ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR_VALUE_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR_VALUE register field. */
#define ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR_VALUE_RESET      0x0
/* Extracts the ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR_VALUE field value from a register. */
#define ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR_VALUE_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR_VALUE register field value suitable for setting the register. */
#define ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR_VALUE_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR.
 */
struct ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR_s
{
    uint32_t  value : 32;  /* ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR_VALUE */
};

/* The typedef declaration for register ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR. */
typedef volatile struct ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR_s  ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR register. */
#define ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR register from the beginning of the component. */
#define ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR_OFST        0x74

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_SYSMGR_ROM.
 */
struct ALT_SYSMGR_ROM_s
{
    ALT_SYSMGR_ROM_ROMHW_CTL_t                  romhw_ctrl;                  /* ALT_SYSMGR_ROM_ROMHW_CTL */
    ALT_SYSMGR_ROM_ROMCODE_CTL_t                romcode_ctrl;                /* ALT_SYSMGR_ROM_ROMCODE_CTL */
    ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD_t       romcode_qspi_reset_command;  /* ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD */
    ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE_t        romcode_initswstate;         /* ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE */
    ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD_t       romcode_initswlastld;        /* ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD */
    volatile uint32_t                           _pad_0x14_0x17;              /* *UNDEFINED* */
    ALT_SYSMGR_ROM_WARMRAM_EN_t                 warmram_enable;              /* ALT_SYSMGR_ROM_WARMRAM_EN */
    ALT_SYSMGR_ROM_WARMRAM_DATASTART_t          warmram_datastart;           /* ALT_SYSMGR_ROM_WARMRAM_DATASTART */
    ALT_SYSMGR_ROM_WARMRAM_LEN_t                warmram_length;              /* ALT_SYSMGR_ROM_WARMRAM_LEN */
    ALT_SYSMGR_ROM_WARMRAM_EXECUTION_t          warmram_execution;           /* ALT_SYSMGR_ROM_WARMRAM_EXECUTION */
    ALT_SYSMGR_ROM_WARMRAM_CRC_t                warmram_crc;                 /* ALT_SYSMGR_ROM_WARMRAM_CRC */
    volatile uint32_t                           _pad_0x2c_0x2f;              /* *UNDEFINED* */
    ALT_SYSMGR_ROM_ISW_HANDOFF_t                isw_handoff[8];              /* ALT_SYSMGR_ROM_ISW_HANDOFF */
    ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE_t     romcode_bootromswstate[8];   /* ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE */
    ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR_t  romcode_stickyset_warmclr;   /* ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR */
    ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR_t  romcode_stickyset_coldclr;   /* ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR */
    volatile uint32_t                           _pad_0x78_0x100[34];         /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_SYSMGR_ROM. */
typedef volatile struct ALT_SYSMGR_ROM_s  ALT_SYSMGR_ROM_t;
/* The struct declaration for the raw register contents of register group ALT_SYSMGR_ROM. */
struct ALT_SYSMGR_ROM_raw_s
{
    volatile uint32_t  romhw_ctrl;                  /* ALT_SYSMGR_ROM_ROMHW_CTL */
    volatile uint32_t  romcode_ctrl;                /* ALT_SYSMGR_ROM_ROMCODE_CTL */
    volatile uint32_t  romcode_qspi_reset_command;  /* ALT_SYSMGR_ROM_ROMCODE_QSPI_RST_CMD */
    volatile uint32_t  romcode_initswstate;         /* ALT_SYSMGR_ROM_ROMCODE_INITSWSTATE */
    volatile uint32_t  romcode_initswlastld;        /* ALT_SYSMGR_ROM_ROMCODE_INITSWLASTLD */
    uint32_t           _pad_0x14_0x17;              /* *UNDEFINED* */
    volatile uint32_t  warmram_enable;              /* ALT_SYSMGR_ROM_WARMRAM_EN */
    volatile uint32_t  warmram_datastart;           /* ALT_SYSMGR_ROM_WARMRAM_DATASTART */
    volatile uint32_t  warmram_length;              /* ALT_SYSMGR_ROM_WARMRAM_LEN */
    volatile uint32_t  warmram_execution;           /* ALT_SYSMGR_ROM_WARMRAM_EXECUTION */
    volatile uint32_t  warmram_crc;                 /* ALT_SYSMGR_ROM_WARMRAM_CRC */
    uint32_t           _pad_0x2c_0x2f;              /* *UNDEFINED* */
    volatile uint32_t  isw_handoff[8];              /* ALT_SYSMGR_ROM_ISW_HANDOFF */
    volatile uint32_t  romcode_bootromswstate[8];   /* ALT_SYSMGR_ROM_ROMCODE_BOOTROMSWSTATE */
    volatile uint32_t  romcode_stickyset_warmclr;   /* ALT_SYSMGR_ROM_ROMCODE_STICKYSET_WARMCLR */
    volatile uint32_t  romcode_stickyset_coldclr;   /* ALT_SYSMGR_ROM_ROMCODE_STICKYSET_COLDCLR */
    uint32_t           _pad_0x78_0x100[34];         /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_SYSMGR_ROM. */
typedef volatile struct ALT_SYSMGR_ROM_raw_s  ALT_SYSMGR_ROM_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_SYSMGR_H__ */

