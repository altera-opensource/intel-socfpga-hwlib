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

/* Altera - ALT_SYSMGR_CORE */

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
 * Component : Core Registers - SYSMGR_CORE
 * Core Registers
 * 
 * System Manager core registers
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
 *  [31:16] | R      | 0x2   | Silicon ID      
 * 
 */
/*
 * Field : Silicon Revision - rev
 * 
 * Silicon revision number.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description
 * :--------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_SILICONID1_REV_E_REV1 | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_SILICONID1_REV
 * 
 */
#define ALT_SYSMGR_CORE_SILICONID1_REV_E_REV1   0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_SILICONID1_REV register field. */
#define ALT_SYSMGR_CORE_SILICONID1_REV_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_SILICONID1_REV register field. */
#define ALT_SYSMGR_CORE_SILICONID1_REV_MSB        15
/* The width in bits of the ALT_SYSMGR_CORE_SILICONID1_REV register field. */
#define ALT_SYSMGR_CORE_SILICONID1_REV_WIDTH      16
/* The mask used to set the ALT_SYSMGR_CORE_SILICONID1_REV register field value. */
#define ALT_SYSMGR_CORE_SILICONID1_REV_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_SYSMGR_CORE_SILICONID1_REV register field value. */
#define ALT_SYSMGR_CORE_SILICONID1_REV_CLR_MSK    0xffff0000
/* The reset value of the ALT_SYSMGR_CORE_SILICONID1_REV register field. */
#define ALT_SYSMGR_CORE_SILICONID1_REV_RESET      0x1
/* Extracts the ALT_SYSMGR_CORE_SILICONID1_REV field value from a register. */
#define ALT_SYSMGR_CORE_SILICONID1_REV_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_SYSMGR_CORE_SILICONID1_REV register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_SILICONID1_REV_SET(value) (((value) << 0) & 0x0000ffff)

/*
 * Field : Silicon ID - id
 * 
 * Silicon ID
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                          | Value | Description
 * :----------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_SILICONID1_ID_E_HPS_STRATIX10 | 0x2   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_SILICONID1_ID
 * 
 */
#define ALT_SYSMGR_CORE_SILICONID1_ID_E_HPS_STRATIX10   0x2

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_SILICONID1_ID register field. */
#define ALT_SYSMGR_CORE_SILICONID1_ID_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_SILICONID1_ID register field. */
#define ALT_SYSMGR_CORE_SILICONID1_ID_MSB        31
/* The width in bits of the ALT_SYSMGR_CORE_SILICONID1_ID register field. */
#define ALT_SYSMGR_CORE_SILICONID1_ID_WIDTH      16
/* The mask used to set the ALT_SYSMGR_CORE_SILICONID1_ID register field value. */
#define ALT_SYSMGR_CORE_SILICONID1_ID_SET_MSK    0xffff0000
/* The mask used to clear the ALT_SYSMGR_CORE_SILICONID1_ID register field value. */
#define ALT_SYSMGR_CORE_SILICONID1_ID_CLR_MSK    0x0000ffff
/* The reset value of the ALT_SYSMGR_CORE_SILICONID1_ID register field. */
#define ALT_SYSMGR_CORE_SILICONID1_ID_RESET      0x2
/* Extracts the ALT_SYSMGR_CORE_SILICONID1_ID field value from a register. */
#define ALT_SYSMGR_CORE_SILICONID1_ID_GET(value) (((value) & 0xffff0000) >> 16)
/* Produces a ALT_SYSMGR_CORE_SILICONID1_ID register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_SILICONID1_ID_SET(value) (((value) << 16) & 0xffff0000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_SILICONID1.
 */
struct ALT_SYSMGR_CORE_SILICONID1_s
{
    const volatile uint32_t  rev : 16;  /* Silicon Revision */
    const volatile uint32_t  id  : 16;  /* Silicon ID */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_SILICONID1. */
typedef struct ALT_SYSMGR_CORE_SILICONID1_s  ALT_SYSMGR_CORE_SILICONID1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_SILICONID1 register. */
#define ALT_SYSMGR_CORE_SILICONID1_RESET       0x00020001
/* The byte offset of the ALT_SYSMGR_CORE_SILICONID1 register from the beginning of the component. */
#define ALT_SYSMGR_CORE_SILICONID1_OFST        0x0

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
 *  [3:0]  | R      | 0x0   | Reserved   
 *  [31:4] | R      | 0x0   | Reserved   
 * 
 */
/*
 * Field : Reserved - device_revision
 * 
 * SDM writes the device revision value from fuses to HPS secure manager.
 * 
 * Secure manager drives this value to system manager.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_SILICONID2_DEVICE_REVISION register field. */
#define ALT_SYSMGR_CORE_SILICONID2_DEVICE_REVISION_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_SILICONID2_DEVICE_REVISION register field. */
#define ALT_SYSMGR_CORE_SILICONID2_DEVICE_REVISION_MSB        3
/* The width in bits of the ALT_SYSMGR_CORE_SILICONID2_DEVICE_REVISION register field. */
#define ALT_SYSMGR_CORE_SILICONID2_DEVICE_REVISION_WIDTH      4
/* The mask used to set the ALT_SYSMGR_CORE_SILICONID2_DEVICE_REVISION register field value. */
#define ALT_SYSMGR_CORE_SILICONID2_DEVICE_REVISION_SET_MSK    0x0000000f
/* The mask used to clear the ALT_SYSMGR_CORE_SILICONID2_DEVICE_REVISION register field value. */
#define ALT_SYSMGR_CORE_SILICONID2_DEVICE_REVISION_CLR_MSK    0xfffffff0
/* The reset value of the ALT_SYSMGR_CORE_SILICONID2_DEVICE_REVISION register field. */
#define ALT_SYSMGR_CORE_SILICONID2_DEVICE_REVISION_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_SILICONID2_DEVICE_REVISION field value from a register. */
#define ALT_SYSMGR_CORE_SILICONID2_DEVICE_REVISION_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_SYSMGR_CORE_SILICONID2_DEVICE_REVISION register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_SILICONID2_DEVICE_REVISION_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Reserved - rsv
 * 
 * Reserved for future use.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_SILICONID2_RSV register field. */
#define ALT_SYSMGR_CORE_SILICONID2_RSV_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_SILICONID2_RSV register field. */
#define ALT_SYSMGR_CORE_SILICONID2_RSV_MSB        31
/* The width in bits of the ALT_SYSMGR_CORE_SILICONID2_RSV register field. */
#define ALT_SYSMGR_CORE_SILICONID2_RSV_WIDTH      28
/* The mask used to set the ALT_SYSMGR_CORE_SILICONID2_RSV register field value. */
#define ALT_SYSMGR_CORE_SILICONID2_RSV_SET_MSK    0xfffffff0
/* The mask used to clear the ALT_SYSMGR_CORE_SILICONID2_RSV register field value. */
#define ALT_SYSMGR_CORE_SILICONID2_RSV_CLR_MSK    0x0000000f
/* The reset value of the ALT_SYSMGR_CORE_SILICONID2_RSV register field. */
#define ALT_SYSMGR_CORE_SILICONID2_RSV_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_SILICONID2_RSV field value from a register. */
#define ALT_SYSMGR_CORE_SILICONID2_RSV_GET(value) (((value) & 0xfffffff0) >> 4)
/* Produces a ALT_SYSMGR_CORE_SILICONID2_RSV register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_SILICONID2_RSV_SET(value) (((value) << 4) & 0xfffffff0)

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
 * The struct declaration for register ALT_SYSMGR_CORE_SILICONID2.
 */
struct ALT_SYSMGR_CORE_SILICONID2_s
{
    const volatile uint32_t  device_revision :  4;  /* Reserved */
    const volatile uint32_t  rsv             : 28;  /* Reserved */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_SILICONID2. */
typedef struct ALT_SYSMGR_CORE_SILICONID2_s  ALT_SYSMGR_CORE_SILICONID2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_SILICONID2 register. */
#define ALT_SYSMGR_CORE_SILICONID2_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_SILICONID2 register from the beginning of the component. */
#define ALT_SYSMGR_CORE_SILICONID2_OFST        0x4

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
 *  Bits    | Access | Reset | Description
 * :--------|:-------|:------|:------------
 *  [3:0]   | RW     | 0x8   | Debug Mode 
 *  [7:4]   | ???    | 0x0   | *UNDEFINED*
 *  [11:8]  | RW     | 0x8   | Debug Mode 
 *  [15:12] | ???    | 0x0   | *UNDEFINED*
 *  [19:16] | RW     | 0x8   | Debug Mode 
 *  [23:20] | ???    | 0x0   | *UNDEFINED*
 *  [27:24] | RW     | 0x8   | Debug Mode 
 *  [31:28] | ???    | 0x0   | *UNDEFINED*
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
 *  Enum                                                    | Value | Description
 * :--------------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_WDDBG_MODE_0_E_MODE_0_DONT_PAUSE        | 0x0   |            
 *  ALT_SYSMGR_CORE_WDDBG_MODE_0_E_MODE_0_PAUSE_FOR_CPU0    | 0x1   |            
 *  ALT_SYSMGR_CORE_WDDBG_MODE_0_E_MODE_0_PAUSE_FOR_CPU1    | 0x2   |            
 *  ALT_SYSMGR_CORE_WDDBG_MODE_0_E_MODE_0_PAUSE_FOR_CPU2    | 0x4   |            
 *  ALT_SYSMGR_CORE_WDDBG_MODE_0_E_MODE_0_PAUSE_FOR_CPU3    | 0x8   |            
 *  ALT_SYSMGR_CORE_WDDBG_MODE_0_E_MODE_0_PAUSE_FOR_ANY_CPU | 0xf   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_WDDBG_MODE_0
 * 
 */
#define ALT_SYSMGR_CORE_WDDBG_MODE_0_E_MODE_0_DONT_PAUSE        0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_WDDBG_MODE_0
 * 
 */
#define ALT_SYSMGR_CORE_WDDBG_MODE_0_E_MODE_0_PAUSE_FOR_CPU0    0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_WDDBG_MODE_0
 * 
 */
#define ALT_SYSMGR_CORE_WDDBG_MODE_0_E_MODE_0_PAUSE_FOR_CPU1    0x2
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_WDDBG_MODE_0
 * 
 */
#define ALT_SYSMGR_CORE_WDDBG_MODE_0_E_MODE_0_PAUSE_FOR_CPU2    0x4
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_WDDBG_MODE_0
 * 
 */
#define ALT_SYSMGR_CORE_WDDBG_MODE_0_E_MODE_0_PAUSE_FOR_CPU3    0x8
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_WDDBG_MODE_0
 * 
 */
#define ALT_SYSMGR_CORE_WDDBG_MODE_0_E_MODE_0_PAUSE_FOR_ANY_CPU 0xf

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_WDDBG_MODE_0 register field. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_WDDBG_MODE_0 register field. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_0_MSB        3
/* The width in bits of the ALT_SYSMGR_CORE_WDDBG_MODE_0 register field. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_0_WIDTH      4
/* The mask used to set the ALT_SYSMGR_CORE_WDDBG_MODE_0 register field value. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_0_SET_MSK    0x0000000f
/* The mask used to clear the ALT_SYSMGR_CORE_WDDBG_MODE_0 register field value. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_0_CLR_MSK    0xfffffff0
/* The reset value of the ALT_SYSMGR_CORE_WDDBG_MODE_0 register field. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_0_RESET      0x8
/* Extracts the ALT_SYSMGR_CORE_WDDBG_MODE_0 field value from a register. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_0_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_SYSMGR_CORE_WDDBG_MODE_0 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_0_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Debug Mode - mode_1
 * 
 * Controls behavior of L4 watchdog when CPUs in debug mode. Field array index
 * matches L4 watchdog index.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                    | Value | Description
 * :--------------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_WDDBG_MODE_1_E_MODE_1_DONT_PAUSE        | 0x0   |            
 *  ALT_SYSMGR_CORE_WDDBG_MODE_1_E_MODE_1_PAUSE_FOR_CPU0    | 0x1   |            
 *  ALT_SYSMGR_CORE_WDDBG_MODE_1_E_MODE_1_PAUSE_FOR_CPU1    | 0x2   |            
 *  ALT_SYSMGR_CORE_WDDBG_MODE_1_E_MODE_1_PAUSE_FOR_CPU2    | 0x4   |            
 *  ALT_SYSMGR_CORE_WDDBG_MODE_1_E_MODE_1_PAUSE_FOR_CPU3    | 0x8   |            
 *  ALT_SYSMGR_CORE_WDDBG_MODE_1_E_MODE_1_PAUSE_FOR_ANY_CPU | 0xf   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_WDDBG_MODE_1
 * 
 */
#define ALT_SYSMGR_CORE_WDDBG_MODE_1_E_MODE_1_DONT_PAUSE        0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_WDDBG_MODE_1
 * 
 */
#define ALT_SYSMGR_CORE_WDDBG_MODE_1_E_MODE_1_PAUSE_FOR_CPU0    0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_WDDBG_MODE_1
 * 
 */
#define ALT_SYSMGR_CORE_WDDBG_MODE_1_E_MODE_1_PAUSE_FOR_CPU1    0x2
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_WDDBG_MODE_1
 * 
 */
#define ALT_SYSMGR_CORE_WDDBG_MODE_1_E_MODE_1_PAUSE_FOR_CPU2    0x4
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_WDDBG_MODE_1
 * 
 */
#define ALT_SYSMGR_CORE_WDDBG_MODE_1_E_MODE_1_PAUSE_FOR_CPU3    0x8
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_WDDBG_MODE_1
 * 
 */
#define ALT_SYSMGR_CORE_WDDBG_MODE_1_E_MODE_1_PAUSE_FOR_ANY_CPU 0xf

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_WDDBG_MODE_1 register field. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_1_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_WDDBG_MODE_1 register field. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_1_MSB        11
/* The width in bits of the ALT_SYSMGR_CORE_WDDBG_MODE_1 register field. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_1_WIDTH      4
/* The mask used to set the ALT_SYSMGR_CORE_WDDBG_MODE_1 register field value. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_1_SET_MSK    0x00000f00
/* The mask used to clear the ALT_SYSMGR_CORE_WDDBG_MODE_1 register field value. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_1_CLR_MSK    0xfffff0ff
/* The reset value of the ALT_SYSMGR_CORE_WDDBG_MODE_1 register field. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_1_RESET      0x8
/* Extracts the ALT_SYSMGR_CORE_WDDBG_MODE_1 field value from a register. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_1_GET(value) (((value) & 0x00000f00) >> 8)
/* Produces a ALT_SYSMGR_CORE_WDDBG_MODE_1 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_1_SET(value) (((value) << 8) & 0x00000f00)

/*
 * Field : Debug Mode - mode_2
 * 
 * Controls behavior of L4 watchdog when CPUs in debug mode. Field array index
 * matches L4 watchdog index.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                    | Value | Description
 * :--------------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_WDDBG_MODE_2_E_MODE_2_DONT_PAUSE        | 0x0   |            
 *  ALT_SYSMGR_CORE_WDDBG_MODE_2_E_MODE_2_PAUSE_FOR_CPU0    | 0x1   |            
 *  ALT_SYSMGR_CORE_WDDBG_MODE_2_E_MODE_2_PAUSE_FOR_CPU1    | 0x2   |            
 *  ALT_SYSMGR_CORE_WDDBG_MODE_2_E_MODE_2_PAUSE_FOR_CPU2    | 0x4   |            
 *  ALT_SYSMGR_CORE_WDDBG_MODE_2_E_MODE_2_PAUSE_FOR_CPU3    | 0x8   |            
 *  ALT_SYSMGR_CORE_WDDBG_MODE_2_E_MODE_2_PAUSE_FOR_ANY_CPU | 0xf   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_WDDBG_MODE_2
 * 
 */
#define ALT_SYSMGR_CORE_WDDBG_MODE_2_E_MODE_2_DONT_PAUSE        0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_WDDBG_MODE_2
 * 
 */
#define ALT_SYSMGR_CORE_WDDBG_MODE_2_E_MODE_2_PAUSE_FOR_CPU0    0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_WDDBG_MODE_2
 * 
 */
#define ALT_SYSMGR_CORE_WDDBG_MODE_2_E_MODE_2_PAUSE_FOR_CPU1    0x2
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_WDDBG_MODE_2
 * 
 */
#define ALT_SYSMGR_CORE_WDDBG_MODE_2_E_MODE_2_PAUSE_FOR_CPU2    0x4
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_WDDBG_MODE_2
 * 
 */
#define ALT_SYSMGR_CORE_WDDBG_MODE_2_E_MODE_2_PAUSE_FOR_CPU3    0x8
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_WDDBG_MODE_2
 * 
 */
#define ALT_SYSMGR_CORE_WDDBG_MODE_2_E_MODE_2_PAUSE_FOR_ANY_CPU 0xf

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_WDDBG_MODE_2 register field. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_2_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_WDDBG_MODE_2 register field. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_2_MSB        19
/* The width in bits of the ALT_SYSMGR_CORE_WDDBG_MODE_2 register field. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_2_WIDTH      4
/* The mask used to set the ALT_SYSMGR_CORE_WDDBG_MODE_2 register field value. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_2_SET_MSK    0x000f0000
/* The mask used to clear the ALT_SYSMGR_CORE_WDDBG_MODE_2 register field value. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_2_CLR_MSK    0xfff0ffff
/* The reset value of the ALT_SYSMGR_CORE_WDDBG_MODE_2 register field. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_2_RESET      0x8
/* Extracts the ALT_SYSMGR_CORE_WDDBG_MODE_2 field value from a register. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_2_GET(value) (((value) & 0x000f0000) >> 16)
/* Produces a ALT_SYSMGR_CORE_WDDBG_MODE_2 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_2_SET(value) (((value) << 16) & 0x000f0000)

/*
 * Field : Debug Mode - mode_3
 * 
 * Controls behavior of L4 watchdog when CPUs in debug mode. Field array index
 * matches L4 watchdog index.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                    | Value | Description
 * :--------------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_WDDBG_MODE_3_E_MODE_3_DONT_PAUSE        | 0x0   |            
 *  ALT_SYSMGR_CORE_WDDBG_MODE_3_E_MODE_3_PAUSE_FOR_CPU0    | 0x1   |            
 *  ALT_SYSMGR_CORE_WDDBG_MODE_3_E_MODE_3_PAUSE_FOR_CPU1    | 0x2   |            
 *  ALT_SYSMGR_CORE_WDDBG_MODE_3_E_MODE_3_PAUSE_FOR_CPU2    | 0x4   |            
 *  ALT_SYSMGR_CORE_WDDBG_MODE_3_E_MODE_3_PAUSE_FOR_CPU3    | 0x8   |            
 *  ALT_SYSMGR_CORE_WDDBG_MODE_3_E_MODE_3_PAUSE_FOR_ANY_CPU | 0xf   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_WDDBG_MODE_3
 * 
 */
#define ALT_SYSMGR_CORE_WDDBG_MODE_3_E_MODE_3_DONT_PAUSE        0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_WDDBG_MODE_3
 * 
 */
#define ALT_SYSMGR_CORE_WDDBG_MODE_3_E_MODE_3_PAUSE_FOR_CPU0    0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_WDDBG_MODE_3
 * 
 */
#define ALT_SYSMGR_CORE_WDDBG_MODE_3_E_MODE_3_PAUSE_FOR_CPU1    0x2
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_WDDBG_MODE_3
 * 
 */
#define ALT_SYSMGR_CORE_WDDBG_MODE_3_E_MODE_3_PAUSE_FOR_CPU2    0x4
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_WDDBG_MODE_3
 * 
 */
#define ALT_SYSMGR_CORE_WDDBG_MODE_3_E_MODE_3_PAUSE_FOR_CPU3    0x8
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_WDDBG_MODE_3
 * 
 */
#define ALT_SYSMGR_CORE_WDDBG_MODE_3_E_MODE_3_PAUSE_FOR_ANY_CPU 0xf

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_WDDBG_MODE_3 register field. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_3_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_WDDBG_MODE_3 register field. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_3_MSB        27
/* The width in bits of the ALT_SYSMGR_CORE_WDDBG_MODE_3 register field. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_3_WIDTH      4
/* The mask used to set the ALT_SYSMGR_CORE_WDDBG_MODE_3 register field value. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_3_SET_MSK    0x0f000000
/* The mask used to clear the ALT_SYSMGR_CORE_WDDBG_MODE_3 register field value. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_3_CLR_MSK    0xf0ffffff
/* The reset value of the ALT_SYSMGR_CORE_WDDBG_MODE_3 register field. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_3_RESET      0x8
/* Extracts the ALT_SYSMGR_CORE_WDDBG_MODE_3 field value from a register. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_3_GET(value) (((value) & 0x0f000000) >> 24)
/* Produces a ALT_SYSMGR_CORE_WDDBG_MODE_3 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_WDDBG_MODE_3_SET(value) (((value) << 24) & 0x0f000000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_WDDBG.
 */
struct ALT_SYSMGR_CORE_WDDBG_s
{
    volatile uint32_t  mode_0 :  4;  /* Debug Mode */
    uint32_t                  :  4;  /* *UNDEFINED* */
    volatile uint32_t  mode_1 :  4;  /* Debug Mode */
    uint32_t                  :  4;  /* *UNDEFINED* */
    volatile uint32_t  mode_2 :  4;  /* Debug Mode */
    uint32_t                  :  4;  /* *UNDEFINED* */
    volatile uint32_t  mode_3 :  4;  /* Debug Mode */
    uint32_t                  :  4;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_WDDBG. */
typedef struct ALT_SYSMGR_CORE_WDDBG_s  ALT_SYSMGR_CORE_WDDBG_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_WDDBG register. */
#define ALT_SYSMGR_CORE_WDDBG_RESET       0x08080808
/* The byte offset of the ALT_SYSMGR_CORE_WDDBG register from the beginning of the component. */
#define ALT_SYSMGR_CORE_WDDBG_OFST        0x8

/*
 * Register : mpu_status
 * 
 * This is MPU control register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                         
 * :-------|:-------|:------|:-------------------------------------
 *  [0]    | R      | 0x0   | ALT_SYSMGR_CORE_MPU_STATUS_UNCORRERR
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                         
 * 
 */
/*
 * Field : uncorrerr
 * 
 * MPU sends 1 bit of ECC error signal(mpu_interrir_irq) to system manager. System
 * manager synchronizes this
 * 
 * signal, detects the assertion and then logs it mpu_status_uncorrerr register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_MPU_STATUS_UNCORRERR register field. */
#define ALT_SYSMGR_CORE_MPU_STATUS_UNCORRERR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_MPU_STATUS_UNCORRERR register field. */
#define ALT_SYSMGR_CORE_MPU_STATUS_UNCORRERR_MSB        0
/* The width in bits of the ALT_SYSMGR_CORE_MPU_STATUS_UNCORRERR register field. */
#define ALT_SYSMGR_CORE_MPU_STATUS_UNCORRERR_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_MPU_STATUS_UNCORRERR register field value. */
#define ALT_SYSMGR_CORE_MPU_STATUS_UNCORRERR_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_CORE_MPU_STATUS_UNCORRERR register field value. */
#define ALT_SYSMGR_CORE_MPU_STATUS_UNCORRERR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_CORE_MPU_STATUS_UNCORRERR register field. */
#define ALT_SYSMGR_CORE_MPU_STATUS_UNCORRERR_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_MPU_STATUS_UNCORRERR field value from a register. */
#define ALT_SYSMGR_CORE_MPU_STATUS_UNCORRERR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_CORE_MPU_STATUS_UNCORRERR register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_MPU_STATUS_UNCORRERR_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_SYSMGR_CORE_MPU_STATUS.
 */
struct ALT_SYSMGR_CORE_MPU_STATUS_s
{
    const volatile uint32_t  uncorrerr :  1;  /* ALT_SYSMGR_CORE_MPU_STATUS_UNCORRERR */
    uint32_t                           : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_MPU_STATUS. */
typedef struct ALT_SYSMGR_CORE_MPU_STATUS_s  ALT_SYSMGR_CORE_MPU_STATUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_MPU_STATUS register. */
#define ALT_SYSMGR_CORE_MPU_STATUS_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_MPU_STATUS register from the beginning of the component. */
#define ALT_SYSMGR_CORE_MPU_STATUS_OFST        0x10

/*
 * Register : mpu_ace
 * 
 * This is MPU control register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                  
 * :--------|:-------|:------|:------------------------------
 *  [3:0]   | RW     | 0x2   | ALT_SYSMGR_CORE_MPU_ACE_AWQOS
 *  [7:4]   | ???    | 0x0   | *UNDEFINED*                  
 *  [12:8]  | RW     | 0x2   | ALT_SYSMGR_CORE_MPU_ACE_ARQOS
 *  [31:13] | ???    | 0x0   | *UNDEFINED*                  
 * 
 */
/*
 * Field : awqos
 * 
 * Sets the Priority of all write transactions originating from the MPU ACE socket.
 * Priority is used by interconnects and memory scheduler on the HPS. Defaults to
 * the highest priority (>=2)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description
 * :-------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_MPU_ACE_AWQOS_E_LOW  | 0x0   |            
 *  ALT_SYSMGR_CORE_MPU_ACE_AWQOS_E_MED  | 0x1   |            
 *  ALT_SYSMGR_CORE_MPU_ACE_AWQOS_E_HIGH | 0x2   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_MPU_ACE_AWQOS
 * 
 */
#define ALT_SYSMGR_CORE_MPU_ACE_AWQOS_E_LOW     0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_MPU_ACE_AWQOS
 * 
 */
#define ALT_SYSMGR_CORE_MPU_ACE_AWQOS_E_MED     0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_MPU_ACE_AWQOS
 * 
 */
#define ALT_SYSMGR_CORE_MPU_ACE_AWQOS_E_HIGH    0x2

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_MPU_ACE_AWQOS register field. */
#define ALT_SYSMGR_CORE_MPU_ACE_AWQOS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_MPU_ACE_AWQOS register field. */
#define ALT_SYSMGR_CORE_MPU_ACE_AWQOS_MSB        3
/* The width in bits of the ALT_SYSMGR_CORE_MPU_ACE_AWQOS register field. */
#define ALT_SYSMGR_CORE_MPU_ACE_AWQOS_WIDTH      4
/* The mask used to set the ALT_SYSMGR_CORE_MPU_ACE_AWQOS register field value. */
#define ALT_SYSMGR_CORE_MPU_ACE_AWQOS_SET_MSK    0x0000000f
/* The mask used to clear the ALT_SYSMGR_CORE_MPU_ACE_AWQOS register field value. */
#define ALT_SYSMGR_CORE_MPU_ACE_AWQOS_CLR_MSK    0xfffffff0
/* The reset value of the ALT_SYSMGR_CORE_MPU_ACE_AWQOS register field. */
#define ALT_SYSMGR_CORE_MPU_ACE_AWQOS_RESET      0x2
/* Extracts the ALT_SYSMGR_CORE_MPU_ACE_AWQOS field value from a register. */
#define ALT_SYSMGR_CORE_MPU_ACE_AWQOS_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_SYSMGR_CORE_MPU_ACE_AWQOS register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_MPU_ACE_AWQOS_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : arqos
 * 
 * Sets the Priority of all write transactions originating from the MPU ACE socket.
 * Priority is used by interconnects and memory scheduler on the HPS. Defaults to
 * the highest priority (>=2)
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description
 * :-------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_MPU_ACE_ARQOS_E_LOW  | 0x0   |            
 *  ALT_SYSMGR_CORE_MPU_ACE_ARQOS_E_MED  | 0x1   |            
 *  ALT_SYSMGR_CORE_MPU_ACE_ARQOS_E_HIGH | 0x2   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_MPU_ACE_ARQOS
 * 
 */
#define ALT_SYSMGR_CORE_MPU_ACE_ARQOS_E_LOW     0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_MPU_ACE_ARQOS
 * 
 */
#define ALT_SYSMGR_CORE_MPU_ACE_ARQOS_E_MED     0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_MPU_ACE_ARQOS
 * 
 */
#define ALT_SYSMGR_CORE_MPU_ACE_ARQOS_E_HIGH    0x2

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_MPU_ACE_ARQOS register field. */
#define ALT_SYSMGR_CORE_MPU_ACE_ARQOS_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_MPU_ACE_ARQOS register field. */
#define ALT_SYSMGR_CORE_MPU_ACE_ARQOS_MSB        12
/* The width in bits of the ALT_SYSMGR_CORE_MPU_ACE_ARQOS register field. */
#define ALT_SYSMGR_CORE_MPU_ACE_ARQOS_WIDTH      5
/* The mask used to set the ALT_SYSMGR_CORE_MPU_ACE_ARQOS register field value. */
#define ALT_SYSMGR_CORE_MPU_ACE_ARQOS_SET_MSK    0x00001f00
/* The mask used to clear the ALT_SYSMGR_CORE_MPU_ACE_ARQOS register field value. */
#define ALT_SYSMGR_CORE_MPU_ACE_ARQOS_CLR_MSK    0xffffe0ff
/* The reset value of the ALT_SYSMGR_CORE_MPU_ACE_ARQOS register field. */
#define ALT_SYSMGR_CORE_MPU_ACE_ARQOS_RESET      0x2
/* Extracts the ALT_SYSMGR_CORE_MPU_ACE_ARQOS field value from a register. */
#define ALT_SYSMGR_CORE_MPU_ACE_ARQOS_GET(value) (((value) & 0x00001f00) >> 8)
/* Produces a ALT_SYSMGR_CORE_MPU_ACE_ARQOS register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_MPU_ACE_ARQOS_SET(value) (((value) << 8) & 0x00001f00)

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
 * The struct declaration for register ALT_SYSMGR_CORE_MPU_ACE.
 */
struct ALT_SYSMGR_CORE_MPU_ACE_s
{
    volatile uint32_t  awqos :  4;  /* ALT_SYSMGR_CORE_MPU_ACE_AWQOS */
    uint32_t                 :  4;  /* *UNDEFINED* */
    volatile uint32_t  arqos :  5;  /* ALT_SYSMGR_CORE_MPU_ACE_ARQOS */
    uint32_t                 : 19;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_MPU_ACE. */
typedef struct ALT_SYSMGR_CORE_MPU_ACE_s  ALT_SYSMGR_CORE_MPU_ACE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_MPU_ACE register. */
#define ALT_SYSMGR_CORE_MPU_ACE_RESET       0x00000202
/* The byte offset of the ALT_SYSMGR_CORE_MPU_ACE register from the beginning of the component. */
#define ALT_SYSMGR_CORE_MPU_ACE_OFST        0x14

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
 * :--------|:-------|:------|:------------------------
 *  [0]     | RW     | 0x0   | Channel Select I2C     
 *  [3:1]   | ???    | 0x0   | *UNDEFINED*            
 *  [4]     | RW     | 0x0   | Channel Select I2C     
 *  [15:5]  | ???    | 0x0   | *UNDEFINED*            
 *  [16]    | RW     | 0x0   | Manager Thread Security
 *  [23:17] | ???    | 0x0   | *UNDEFINED*            
 *  [31:24] | RW     | 0x0   | IRQ Security           
 * 
 */
/*
 * Field : Channel Select I2C - chansel_0
 * 
 * Channel 0 selects between FPGA and I2C4_EMAC_TX
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_DMA_CHANSEL_0_E_FPGA    | 0x0   |            
 *  ALT_SYSMGR_CORE_DMA_CHANSEL_0_E_I2C4_TX | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_DMA_CHANSEL_0
 * 
 */
#define ALT_SYSMGR_CORE_DMA_CHANSEL_0_E_FPGA    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_DMA_CHANSEL_0
 * 
 */
#define ALT_SYSMGR_CORE_DMA_CHANSEL_0_E_I2C4_TX 0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_DMA_CHANSEL_0 register field. */
#define ALT_SYSMGR_CORE_DMA_CHANSEL_0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_DMA_CHANSEL_0 register field. */
#define ALT_SYSMGR_CORE_DMA_CHANSEL_0_MSB        0
/* The width in bits of the ALT_SYSMGR_CORE_DMA_CHANSEL_0 register field. */
#define ALT_SYSMGR_CORE_DMA_CHANSEL_0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_DMA_CHANSEL_0 register field value. */
#define ALT_SYSMGR_CORE_DMA_CHANSEL_0_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_CORE_DMA_CHANSEL_0 register field value. */
#define ALT_SYSMGR_CORE_DMA_CHANSEL_0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_CORE_DMA_CHANSEL_0 register field. */
#define ALT_SYSMGR_CORE_DMA_CHANSEL_0_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_DMA_CHANSEL_0 field value from a register. */
#define ALT_SYSMGR_CORE_DMA_CHANSEL_0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_CORE_DMA_CHANSEL_0 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_DMA_CHANSEL_0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Channel Select I2C - chansel_1
 * 
 * Channel 1 selects between FPGA and I2C4_EMAC_RX
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_DMA_CHANSEL_1_E_FPGA    | 0x0   |            
 *  ALT_SYSMGR_CORE_DMA_CHANSEL_1_E_I2C4_RX | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_DMA_CHANSEL_1
 * 
 */
#define ALT_SYSMGR_CORE_DMA_CHANSEL_1_E_FPGA    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_DMA_CHANSEL_1
 * 
 */
#define ALT_SYSMGR_CORE_DMA_CHANSEL_1_E_I2C4_RX 0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_DMA_CHANSEL_1 register field. */
#define ALT_SYSMGR_CORE_DMA_CHANSEL_1_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_DMA_CHANSEL_1 register field. */
#define ALT_SYSMGR_CORE_DMA_CHANSEL_1_MSB        4
/* The width in bits of the ALT_SYSMGR_CORE_DMA_CHANSEL_1 register field. */
#define ALT_SYSMGR_CORE_DMA_CHANSEL_1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_DMA_CHANSEL_1 register field value. */
#define ALT_SYSMGR_CORE_DMA_CHANSEL_1_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_CORE_DMA_CHANSEL_1 register field value. */
#define ALT_SYSMGR_CORE_DMA_CHANSEL_1_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_CORE_DMA_CHANSEL_1 register field. */
#define ALT_SYSMGR_CORE_DMA_CHANSEL_1_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_DMA_CHANSEL_1 field value from a register. */
#define ALT_SYSMGR_CORE_DMA_CHANSEL_1_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_CORE_DMA_CHANSEL_1 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_DMA_CHANSEL_1_SET(value) (((value) << 4) & 0x00000010)

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
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_DMA_MGR_NS register field. */
#define ALT_SYSMGR_CORE_DMA_MGR_NS_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_DMA_MGR_NS register field. */
#define ALT_SYSMGR_CORE_DMA_MGR_NS_MSB        16
/* The width in bits of the ALT_SYSMGR_CORE_DMA_MGR_NS register field. */
#define ALT_SYSMGR_CORE_DMA_MGR_NS_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_DMA_MGR_NS register field value. */
#define ALT_SYSMGR_CORE_DMA_MGR_NS_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_CORE_DMA_MGR_NS register field value. */
#define ALT_SYSMGR_CORE_DMA_MGR_NS_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_CORE_DMA_MGR_NS register field. */
#define ALT_SYSMGR_CORE_DMA_MGR_NS_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_DMA_MGR_NS field value from a register. */
#define ALT_SYSMGR_CORE_DMA_MGR_NS_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_CORE_DMA_MGR_NS register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_DMA_MGR_NS_SET(value) (((value) << 16) & 0x00010000)

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
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_DMA_IRQ_NS register field. */
#define ALT_SYSMGR_CORE_DMA_IRQ_NS_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_DMA_IRQ_NS register field. */
#define ALT_SYSMGR_CORE_DMA_IRQ_NS_MSB        31
/* The width in bits of the ALT_SYSMGR_CORE_DMA_IRQ_NS register field. */
#define ALT_SYSMGR_CORE_DMA_IRQ_NS_WIDTH      8
/* The mask used to set the ALT_SYSMGR_CORE_DMA_IRQ_NS register field value. */
#define ALT_SYSMGR_CORE_DMA_IRQ_NS_SET_MSK    0xff000000
/* The mask used to clear the ALT_SYSMGR_CORE_DMA_IRQ_NS register field value. */
#define ALT_SYSMGR_CORE_DMA_IRQ_NS_CLR_MSK    0x00ffffff
/* The reset value of the ALT_SYSMGR_CORE_DMA_IRQ_NS register field. */
#define ALT_SYSMGR_CORE_DMA_IRQ_NS_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_DMA_IRQ_NS field value from a register. */
#define ALT_SYSMGR_CORE_DMA_IRQ_NS_GET(value) (((value) & 0xff000000) >> 24)
/* Produces a ALT_SYSMGR_CORE_DMA_IRQ_NS register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_DMA_IRQ_NS_SET(value) (((value) << 24) & 0xff000000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_DMA.
 */
struct ALT_SYSMGR_CORE_DMA_s
{
    volatile uint32_t  chansel_0 :  1;  /* Channel Select I2C */
    uint32_t                     :  3;  /* *UNDEFINED* */
    volatile uint32_t  chansel_1 :  1;  /* Channel Select I2C */
    uint32_t                     : 11;  /* *UNDEFINED* */
    volatile uint32_t  mgr_ns    :  1;  /* Manager Thread Security */
    uint32_t                     :  7;  /* *UNDEFINED* */
    volatile uint32_t  irq_ns    :  8;  /* IRQ Security */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_DMA. */
typedef struct ALT_SYSMGR_CORE_DMA_s  ALT_SYSMGR_CORE_DMA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_DMA register. */
#define ALT_SYSMGR_CORE_DMA_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_DMA register from the beginning of the component. */
#define ALT_SYSMGR_CORE_DMA_OFST        0x20

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
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_DMA_PERIPH_NS register field. */
#define ALT_SYSMGR_CORE_DMA_PERIPH_NS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_DMA_PERIPH_NS register field. */
#define ALT_SYSMGR_CORE_DMA_PERIPH_NS_MSB        31
/* The width in bits of the ALT_SYSMGR_CORE_DMA_PERIPH_NS register field. */
#define ALT_SYSMGR_CORE_DMA_PERIPH_NS_WIDTH      32
/* The mask used to set the ALT_SYSMGR_CORE_DMA_PERIPH_NS register field value. */
#define ALT_SYSMGR_CORE_DMA_PERIPH_NS_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_CORE_DMA_PERIPH_NS register field value. */
#define ALT_SYSMGR_CORE_DMA_PERIPH_NS_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_CORE_DMA_PERIPH_NS register field. */
#define ALT_SYSMGR_CORE_DMA_PERIPH_NS_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_DMA_PERIPH_NS field value from a register. */
#define ALT_SYSMGR_CORE_DMA_PERIPH_NS_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_CORE_DMA_PERIPH_NS register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_DMA_PERIPH_NS_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SYSMGR_CORE_DMA_PERIPH.
 */
struct ALT_SYSMGR_CORE_DMA_PERIPH_s
{
    volatile uint32_t  ns : 32;  /* Peripheral Non-Secure */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_DMA_PERIPH. */
typedef struct ALT_SYSMGR_CORE_DMA_PERIPH_s  ALT_SYSMGR_CORE_DMA_PERIPH_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_DMA_PERIPH register. */
#define ALT_SYSMGR_CORE_DMA_PERIPH_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_DMA_PERIPH register from the beginning of the component. */
#define ALT_SYSMGR_CORE_DMA_PERIPH_OFST        0x24

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
 *  Enum                                      | Value | Description
 * :------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_SDMMC_DRVSEL_E_DEGREES0   | 0x0   |            
 *  ALT_SYSMGR_CORE_SDMMC_DRVSEL_E_DEGREES45  | 0x1   |            
 *  ALT_SYSMGR_CORE_SDMMC_DRVSEL_E_DEGREES90  | 0x2   |            
 *  ALT_SYSMGR_CORE_SDMMC_DRVSEL_E_DEGREES135 | 0x3   |            
 *  ALT_SYSMGR_CORE_SDMMC_DRVSEL_E_DEGREES180 | 0x4   |            
 *  ALT_SYSMGR_CORE_SDMMC_DRVSEL_E_DEGREES225 | 0x5   |            
 *  ALT_SYSMGR_CORE_SDMMC_DRVSEL_E_DEGREES270 | 0x6   |            
 *  ALT_SYSMGR_CORE_SDMMC_DRVSEL_E_DEGREES315 | 0x7   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_SDMMC_DRVSEL
 * 
 */
#define ALT_SYSMGR_CORE_SDMMC_DRVSEL_E_DEGREES0     0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_SDMMC_DRVSEL
 * 
 */
#define ALT_SYSMGR_CORE_SDMMC_DRVSEL_E_DEGREES45    0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_SDMMC_DRVSEL
 * 
 */
#define ALT_SYSMGR_CORE_SDMMC_DRVSEL_E_DEGREES90    0x2
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_SDMMC_DRVSEL
 * 
 */
#define ALT_SYSMGR_CORE_SDMMC_DRVSEL_E_DEGREES135   0x3
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_SDMMC_DRVSEL
 * 
 */
#define ALT_SYSMGR_CORE_SDMMC_DRVSEL_E_DEGREES180   0x4
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_SDMMC_DRVSEL
 * 
 */
#define ALT_SYSMGR_CORE_SDMMC_DRVSEL_E_DEGREES225   0x5
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_SDMMC_DRVSEL
 * 
 */
#define ALT_SYSMGR_CORE_SDMMC_DRVSEL_E_DEGREES270   0x6
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_SDMMC_DRVSEL
 * 
 */
#define ALT_SYSMGR_CORE_SDMMC_DRVSEL_E_DEGREES315   0x7

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_SDMMC_DRVSEL register field. */
#define ALT_SYSMGR_CORE_SDMMC_DRVSEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_SDMMC_DRVSEL register field. */
#define ALT_SYSMGR_CORE_SDMMC_DRVSEL_MSB        2
/* The width in bits of the ALT_SYSMGR_CORE_SDMMC_DRVSEL register field. */
#define ALT_SYSMGR_CORE_SDMMC_DRVSEL_WIDTH      3
/* The mask used to set the ALT_SYSMGR_CORE_SDMMC_DRVSEL register field value. */
#define ALT_SYSMGR_CORE_SDMMC_DRVSEL_SET_MSK    0x00000007
/* The mask used to clear the ALT_SYSMGR_CORE_SDMMC_DRVSEL register field value. */
#define ALT_SYSMGR_CORE_SDMMC_DRVSEL_CLR_MSK    0xfffffff8
/* The reset value of the ALT_SYSMGR_CORE_SDMMC_DRVSEL register field. */
#define ALT_SYSMGR_CORE_SDMMC_DRVSEL_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_SDMMC_DRVSEL field value from a register. */
#define ALT_SYSMGR_CORE_SDMMC_DRVSEL_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_SYSMGR_CORE_SDMMC_DRVSEL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_SDMMC_DRVSEL_SET(value) (((value) << 0) & 0x00000007)

/*
 * Field : Sample Clock Phase Shift Select - smplsel
 * 
 * Select which phase shift of the clock for cclk_in_sample.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description
 * :-------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_SDMMC_SMPLSEL_E_DEGREES0   | 0x0   |            
 *  ALT_SYSMGR_CORE_SDMMC_SMPLSEL_E_DEGREES45  | 0x1   |            
 *  ALT_SYSMGR_CORE_SDMMC_SMPLSEL_E_DEGREES90  | 0x2   |            
 *  ALT_SYSMGR_CORE_SDMMC_SMPLSEL_E_DEGREES135 | 0x3   |            
 *  ALT_SYSMGR_CORE_SDMMC_SMPLSEL_E_DEGREES180 | 0x4   |            
 *  ALT_SYSMGR_CORE_SDMMC_SMPLSEL_E_DEGREES225 | 0x5   |            
 *  ALT_SYSMGR_CORE_SDMMC_SMPLSEL_E_DEGREES270 | 0x6   |            
 *  ALT_SYSMGR_CORE_SDMMC_SMPLSEL_E_DEGREES315 | 0x7   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_SDMMC_SMPLSEL
 * 
 */
#define ALT_SYSMGR_CORE_SDMMC_SMPLSEL_E_DEGREES0    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_SDMMC_SMPLSEL
 * 
 */
#define ALT_SYSMGR_CORE_SDMMC_SMPLSEL_E_DEGREES45   0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_SDMMC_SMPLSEL
 * 
 */
#define ALT_SYSMGR_CORE_SDMMC_SMPLSEL_E_DEGREES90   0x2
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_SDMMC_SMPLSEL
 * 
 */
#define ALT_SYSMGR_CORE_SDMMC_SMPLSEL_E_DEGREES135  0x3
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_SDMMC_SMPLSEL
 * 
 */
#define ALT_SYSMGR_CORE_SDMMC_SMPLSEL_E_DEGREES180  0x4
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_SDMMC_SMPLSEL
 * 
 */
#define ALT_SYSMGR_CORE_SDMMC_SMPLSEL_E_DEGREES225  0x5
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_SDMMC_SMPLSEL
 * 
 */
#define ALT_SYSMGR_CORE_SDMMC_SMPLSEL_E_DEGREES270  0x6
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_SDMMC_SMPLSEL
 * 
 */
#define ALT_SYSMGR_CORE_SDMMC_SMPLSEL_E_DEGREES315  0x7

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_SDMMC_SMPLSEL register field. */
#define ALT_SYSMGR_CORE_SDMMC_SMPLSEL_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_SDMMC_SMPLSEL register field. */
#define ALT_SYSMGR_CORE_SDMMC_SMPLSEL_MSB        6
/* The width in bits of the ALT_SYSMGR_CORE_SDMMC_SMPLSEL register field. */
#define ALT_SYSMGR_CORE_SDMMC_SMPLSEL_WIDTH      3
/* The mask used to set the ALT_SYSMGR_CORE_SDMMC_SMPLSEL register field value. */
#define ALT_SYSMGR_CORE_SDMMC_SMPLSEL_SET_MSK    0x00000070
/* The mask used to clear the ALT_SYSMGR_CORE_SDMMC_SMPLSEL register field value. */
#define ALT_SYSMGR_CORE_SDMMC_SMPLSEL_CLR_MSK    0xffffff8f
/* The reset value of the ALT_SYSMGR_CORE_SDMMC_SMPLSEL register field. */
#define ALT_SYSMGR_CORE_SDMMC_SMPLSEL_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_SDMMC_SMPLSEL field value from a register. */
#define ALT_SYSMGR_CORE_SDMMC_SMPLSEL_GET(value) (((value) & 0x00000070) >> 4)
/* Produces a ALT_SYSMGR_CORE_SDMMC_SMPLSEL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_SDMMC_SMPLSEL_SET(value) (((value) << 4) & 0x00000070)

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
 * The struct declaration for register ALT_SYSMGR_CORE_SDMMC.
 */
struct ALT_SYSMGR_CORE_SDMMC_s
{
    volatile uint32_t  drvsel  :  3;  /* Drive Clock Phase Shift Select */
    uint32_t                   :  1;  /* *UNDEFINED* */
    volatile uint32_t  smplsel :  3;  /* Sample Clock Phase Shift Select */
    uint32_t                   : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_SDMMC. */
typedef struct ALT_SYSMGR_CORE_SDMMC_s  ALT_SYSMGR_CORE_SDMMC_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_SDMMC register. */
#define ALT_SYSMGR_CORE_SDMMC_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_SDMMC register from the beginning of the component. */
#define ALT_SYSMGR_CORE_SDMMC_OFST        0x28

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
 *  Bits    | Access | Reset | Description                         
 * :--------|:-------|:------|:-------------------------------------
 *  [3:0]   | RW     | 0x1   | ALT_SYSMGR_CORE_SDMMC_L3MASTER_HPROT
 *  [5:4]   | RW     | 0x0   | Global Interface                    
 *  [7:6]   | ???    | 0x0   | *UNDEFINED*                         
 *  [9:8]   | RW     | 0x3   | Global Interface                    
 *  [15:10] | ???    | 0x0   | *UNDEFINED*                         
 *  [25:16] | RW     | 0x0   | Global Interface                    
 *  [31:26] | ???    | 0x0   | *UNDEFINED*                         
 * 
 */
/*
 * Field : hprot
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
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HPROT register field. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HPROT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HPROT register field. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HPROT_MSB        3
/* The width in bits of the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HPROT register field. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HPROT_WIDTH      4
/* The mask used to set the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HPROT register field value. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HPROT_SET_MSK    0x0000000f
/* The mask used to clear the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HPROT register field value. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HPROT_CLR_MSK    0xfffffff0
/* The reset value of the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HPROT register field. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HPROT_RESET      0x1
/* Extracts the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HPROT field value from a register. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HPROT_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_SYSMGR_CORE_SDMMC_L3MASTER_HPROT register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HPROT_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Global Interface - hauser0_1
 * 
 * bit[1] secure bit[0] allocate
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER0_1 register field. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER0_1_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER0_1 register field. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER0_1_MSB        5
/* The width in bits of the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER0_1 register field. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER0_1_WIDTH      2
/* The mask used to set the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER0_1 register field value. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER0_1_SET_MSK    0x00000030
/* The mask used to clear the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER0_1 register field value. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER0_1_CLR_MSK    0xffffffcf
/* The reset value of the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER0_1 register field. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER0_1_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER0_1 field value from a register. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER0_1_GET(value) (((value) & 0x00000030) >> 4)
/* Produces a ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER0_1 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER0_1_SET(value) (((value) << 4) & 0x00000030)

/*
 * Field : Global Interface - hauser7_6
 * 
 * bit[7:6] domai
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER7_6 register field. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER7_6_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER7_6 register field. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER7_6_MSB        9
/* The width in bits of the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER7_6 register field. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER7_6_WIDTH      2
/* The mask used to set the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER7_6 register field value. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER7_6_SET_MSK    0x00000300
/* The mask used to clear the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER7_6 register field value. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER7_6_CLR_MSK    0xfffffcff
/* The reset value of the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER7_6 register field. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER7_6_RESET      0x3
/* Extracts the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER7_6 field value from a register. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER7_6_GET(value) (((value) & 0x00000300) >> 8)
/* Produces a ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER7_6 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER7_6_SET(value) (((value) << 8) & 0x00000300)

/*
 * Field : Global Interface - hauser22_13
 * 
 * bit[22:13] xsid
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER22_13 register field. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER22_13_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER22_13 register field. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER22_13_MSB        25
/* The width in bits of the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER22_13 register field. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER22_13_WIDTH      10
/* The mask used to set the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER22_13 register field value. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER22_13_SET_MSK    0x03ff0000
/* The mask used to clear the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER22_13 register field value. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER22_13_CLR_MSK    0xfc00ffff
/* The reset value of the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER22_13 register field. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER22_13_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER22_13 field value from a register. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER22_13_GET(value) (((value) & 0x03ff0000) >> 16)
/* Produces a ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER22_13 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_HAUSER22_13_SET(value) (((value) << 16) & 0x03ff0000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_SDMMC_L3MASTER.
 */
struct ALT_SYSMGR_CORE_SDMMC_L3MASTER_s
{
    volatile uint32_t  hprot       :  4;  /* ALT_SYSMGR_CORE_SDMMC_L3MASTER_HPROT */
    volatile uint32_t  hauser0_1   :  2;  /* Global Interface */
    uint32_t                       :  2;  /* *UNDEFINED* */
    volatile uint32_t  hauser7_6   :  2;  /* Global Interface */
    uint32_t                       :  6;  /* *UNDEFINED* */
    volatile uint32_t  hauser22_13 : 10;  /* Global Interface */
    uint32_t                       :  6;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_SDMMC_L3MASTER. */
typedef struct ALT_SYSMGR_CORE_SDMMC_L3MASTER_s  ALT_SYSMGR_CORE_SDMMC_L3MASTER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_SDMMC_L3MASTER register. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_RESET       0x00000301
/* The byte offset of the ALT_SYSMGR_CORE_SDMMC_L3MASTER register from the beginning of the component. */
#define ALT_SYSMGR_CORE_SDMMC_L3MASTER_OFST        0x2c

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
 * :--------|:-------|:------|:-------------------------------------------
 *  [0]     | RW     | 0x0   | Bootstrap Inhibit Initialization          
 *  [7:1]   | ???    | 0x0   | *UNDEFINED*                               
 *  [8]     | RW     | 0x0   | Bootstrap Inhibit Load Block 0 Page 0     
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*                               
 *  [16]    | RW     | 0x0   | Bootstrap Two Row Address Cycles          
 *  [23:17] | ???    | 0x0   | *UNDEFINED*                               
 *  [24]    | RW     | 0x0   | Bootstrap 512 Byte Device                 
 *  [27:25] | ???    | 0x0   | *UNDEFINED*                               
 *  [28]    | RW     | 0x0   | ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_X16
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
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOINIT register field. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOINIT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOINIT register field. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOINIT_MSB        0
/* The width in bits of the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOINIT register field. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOINIT_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOINIT register field value. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOINIT_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOINIT register field value. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOINIT_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOINIT register field. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOINIT_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOINIT field value from a register. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOINIT_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOINIT register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOINIT_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Bootstrap Inhibit Load Block 0 Page 0 - noloadb0p0
 * 
 * If 1, inhibits NAND Flash Controller from loading page 0 of block 0 of the NAND
 * device as part of the initialization procedure.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOLOADB0P0 register field. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOLOADB0P0_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOLOADB0P0 register field. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOLOADB0P0_MSB        8
/* The width in bits of the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOLOADB0P0 register field. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOLOADB0P0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOLOADB0P0 register field value. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOLOADB0P0_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOLOADB0P0 register field value. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOLOADB0P0_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOLOADB0P0 register field. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOLOADB0P0_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOLOADB0P0 field value from a register. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOLOADB0P0_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOLOADB0P0 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_NOLOADB0P0_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : Bootstrap Two Row Address Cycles - tworowaddr
 * 
 * If 1, NAND device requires only 2 row address cycles instead of the normal 3 row
 * address cycles.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_TWOROWADDR register field. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_TWOROWADDR_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_TWOROWADDR register field. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_TWOROWADDR_MSB        16
/* The width in bits of the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_TWOROWADDR register field. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_TWOROWADDR_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_TWOROWADDR register field value. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_TWOROWADDR_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_TWOROWADDR register field value. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_TWOROWADDR_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_TWOROWADDR register field. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_TWOROWADDR_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_TWOROWADDR field value from a register. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_TWOROWADDR_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_CORE_NAND_BOOTSTRAP_TWOROWADDR register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_TWOROWADDR_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : Bootstrap 512 Byte Device - page512
 * 
 * If 1, NAND device has a 512 byte page size.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512 register field. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512 register field. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_MSB        24
/* The width in bits of the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512 register field. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512 register field value. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_SET_MSK    0x01000000
/* The mask used to clear the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512 register field value. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_CLR_MSK    0xfeffffff
/* The reset value of the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512 register field. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512 field value from a register. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_SET(value) (((value) << 24) & 0x01000000)

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
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_X16 register field. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_X16_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_X16 register field. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_X16_MSB        28
/* The width in bits of the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_X16 register field. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_X16_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_X16 register field value. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_X16_SET_MSK    0x10000000
/* The mask used to clear the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_X16 register field value. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_X16_CLR_MSK    0xefffffff
/* The reset value of the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_X16 register field. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_X16_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_X16 field value from a register. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_X16_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_X16 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_X16_SET(value) (((value) << 28) & 0x10000000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_NAND_BOOTSTRAP.
 */
struct ALT_SYSMGR_CORE_NAND_BOOTSTRAP_s
{
    volatile uint32_t  noinit      :  1;  /* Bootstrap Inhibit Initialization */
    uint32_t                       :  7;  /* *UNDEFINED* */
    volatile uint32_t  noloadb0p0  :  1;  /* Bootstrap Inhibit Load Block 0 Page 0 */
    uint32_t                       :  7;  /* *UNDEFINED* */
    volatile uint32_t  tworowaddr  :  1;  /* Bootstrap Two Row Address Cycles */
    uint32_t                       :  7;  /* *UNDEFINED* */
    volatile uint32_t  page512     :  1;  /* Bootstrap 512 Byte Device */
    uint32_t                       :  3;  /* *UNDEFINED* */
    volatile uint32_t  page512_x16 :  1;  /* ALT_SYSMGR_CORE_NAND_BOOTSTRAP_PAGE512_X16 */
    uint32_t                       :  3;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_NAND_BOOTSTRAP. */
typedef struct ALT_SYSMGR_CORE_NAND_BOOTSTRAP_s  ALT_SYSMGR_CORE_NAND_BOOTSTRAP_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_NAND_BOOTSTRAP register. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_NAND_BOOTSTRAP register from the beginning of the component. */
#define ALT_SYSMGR_CORE_NAND_BOOTSTRAP_OFST        0x30

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
 *  Bits    | Access | Reset | Description                           
 * :--------|:-------|:------|:---------------------------------------
 *  [3:0]   | RW     | 0x0   | NAND ARCACHE                          
 *  [7:4]   | RW     | 0x0   | NAND AWCACHE                          
 *  [9:8]   | RW     | 0x3   | ALT_SYSMGR_CORE_NAND_L3MASTER_AWDOMAIN
 *  [11:10] | ???    | 0x0   | *UNDEFINED*                           
 *  [13:12] | RW     | 0x3   | ALT_SYSMGR_CORE_NAND_L3MASTER_ARDOMAIN
 *  [15:14] | ???    | 0x0   | *UNDEFINED*                           
 *  [18:16] | RW     | 0x0   | ALT_SYSMGR_CORE_NAND_L3MASTER_AWPROT  
 *  [19]    | ???    | 0x0   | *UNDEFINED*                           
 *  [22:20] | RW     | 0x0   | ALT_SYSMGR_CORE_NAND_L3MASTER_ARPROT  
 *  [31:23] | ???    | 0x0   | *UNDEFINED*                           
 * 
 */
/*
 * Field : NAND ARCACHE - arcache_0
 * 
 * Specifies the value of the module ARCACHE signal.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                           | Value | Description
 * :---------------------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_NONCACHE_NONBUFF     | 0x0   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_BUFF                 | 0x1   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_CACHE_NONALLOC       | 0x2   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_CACHE_BUFF_NONALLOC  | 0x3   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_RESERVED1            | 0x4   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_RESERVED2            | 0x5   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_CACHE_WRTHRU_RDALLOC | 0x6   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_CACHE_WRBACK_RDALLOC | 0x7   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_RESERVED3            | 0x8   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_RESERVED4            | 0x9   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_CACHE_WRTHRU_WRALLOC | 0xa   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_CACHE_WRBACK_WRALLOC | 0xb   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_RESERVED5            | 0xc   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_RESERVED6            | 0xd   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_CACHE_WRTHRU_ALLOC   | 0xe   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_CACHE_WRBACK_ALLOC   | 0xf   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_NONCACHE_NONBUFF      0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_BUFF                  0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_CACHE_NONALLOC        0x2
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_CACHE_BUFF_NONALLOC   0x3
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_RESERVED1             0x4
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_RESERVED2             0x5
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_CACHE_WRTHRU_RDALLOC  0x6
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_CACHE_WRBACK_RDALLOC  0x7
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_RESERVED3             0x8
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_RESERVED4             0x9
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_CACHE_WRTHRU_WRALLOC  0xa
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_CACHE_WRBACK_WRALLOC  0xb
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_RESERVED5             0xc
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_RESERVED6             0xd
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_CACHE_WRTHRU_ALLOC    0xe
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_E_CACHE_WRBACK_ALLOC    0xf

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0 register field. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0 register field. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_MSB        3
/* The width in bits of the ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0 register field. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_WIDTH      4
/* The mask used to set the ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0 register field value. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_SET_MSK    0x0000000f
/* The mask used to clear the ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0 register field value. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_CLR_MSK    0xfffffff0
/* The reset value of the ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0 register field. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0 field value from a register. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARCACHE_0_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : NAND AWCACHE - awcache_0
 * 
 * Specifies the value of the module AWCACHE signal.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                           | Value | Description
 * :---------------------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_NONCACHE_NONBUFF     | 0x0   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_BUFF                 | 0x1   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_CACHE_NONALLOC       | 0x2   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_CACHE_BUFF_NONALLOC  | 0x3   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_RESERVED1            | 0x4   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_RESERVED2            | 0x5   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_CACHE_WRTHRU_RDALLOC | 0x6   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_CACHE_WRBACK_RDALLOC | 0x7   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_RESERVED3            | 0x8   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_RESERVED4            | 0x9   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_CACHE_WRTHRU_WRALLOC | 0xa   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_CACHE_WRBACK_WRALLOC | 0xb   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_RESERVED5            | 0xc   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_RESERVED6            | 0xd   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_CACHE_WRTHRU_ALLOC   | 0xe   |            
 *  ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_CACHE_WRBACK_ALLOC   | 0xf   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_NONCACHE_NONBUFF      0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_BUFF                  0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_CACHE_NONALLOC        0x2
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_CACHE_BUFF_NONALLOC   0x3
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_RESERVED1             0x4
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_RESERVED2             0x5
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_CACHE_WRTHRU_RDALLOC  0x6
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_CACHE_WRBACK_RDALLOC  0x7
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_RESERVED3             0x8
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_RESERVED4             0x9
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_CACHE_WRTHRU_WRALLOC  0xa
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_CACHE_WRBACK_WRALLOC  0xb
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_RESERVED5             0xc
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_RESERVED6             0xd
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_CACHE_WRTHRU_ALLOC    0xe
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0
 * 
 */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_E_CACHE_WRBACK_ALLOC    0xf

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0 register field. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0 register field. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_MSB        7
/* The width in bits of the ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0 register field. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_WIDTH      4
/* The mask used to set the ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0 register field value. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_SET_MSK    0x000000f0
/* The mask used to clear the ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0 register field value. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_CLR_MSK    0xffffff0f
/* The reset value of the ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0 register field. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0 field value from a register. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_GET(value) (((value) & 0x000000f0) >> 4)
/* Produces a ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWCACHE_0_SET(value) (((value) << 4) & 0x000000f0)

/*
 * Field : awdomain
 * 
 * aw domain register
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NAND_L3MASTER_AWDOMAIN register field. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWDOMAIN_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NAND_L3MASTER_AWDOMAIN register field. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWDOMAIN_MSB        9
/* The width in bits of the ALT_SYSMGR_CORE_NAND_L3MASTER_AWDOMAIN register field. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWDOMAIN_WIDTH      2
/* The mask used to set the ALT_SYSMGR_CORE_NAND_L3MASTER_AWDOMAIN register field value. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWDOMAIN_SET_MSK    0x00000300
/* The mask used to clear the ALT_SYSMGR_CORE_NAND_L3MASTER_AWDOMAIN register field value. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWDOMAIN_CLR_MSK    0xfffffcff
/* The reset value of the ALT_SYSMGR_CORE_NAND_L3MASTER_AWDOMAIN register field. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWDOMAIN_RESET      0x3
/* Extracts the ALT_SYSMGR_CORE_NAND_L3MASTER_AWDOMAIN field value from a register. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWDOMAIN_GET(value) (((value) & 0x00000300) >> 8)
/* Produces a ALT_SYSMGR_CORE_NAND_L3MASTER_AWDOMAIN register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWDOMAIN_SET(value) (((value) << 8) & 0x00000300)

/*
 * Field : ardomain
 * 
 * ar domain register
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NAND_L3MASTER_ARDOMAIN register field. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARDOMAIN_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NAND_L3MASTER_ARDOMAIN register field. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARDOMAIN_MSB        13
/* The width in bits of the ALT_SYSMGR_CORE_NAND_L3MASTER_ARDOMAIN register field. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARDOMAIN_WIDTH      2
/* The mask used to set the ALT_SYSMGR_CORE_NAND_L3MASTER_ARDOMAIN register field value. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARDOMAIN_SET_MSK    0x00003000
/* The mask used to clear the ALT_SYSMGR_CORE_NAND_L3MASTER_ARDOMAIN register field value. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARDOMAIN_CLR_MSK    0xffffcfff
/* The reset value of the ALT_SYSMGR_CORE_NAND_L3MASTER_ARDOMAIN register field. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARDOMAIN_RESET      0x3
/* Extracts the ALT_SYSMGR_CORE_NAND_L3MASTER_ARDOMAIN field value from a register. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARDOMAIN_GET(value) (((value) & 0x00003000) >> 12)
/* Produces a ALT_SYSMGR_CORE_NAND_L3MASTER_ARDOMAIN register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARDOMAIN_SET(value) (((value) << 12) & 0x00003000)

/*
 * Field : awprot
 * 
 * aw prot register
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NAND_L3MASTER_AWPROT register field. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWPROT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NAND_L3MASTER_AWPROT register field. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWPROT_MSB        18
/* The width in bits of the ALT_SYSMGR_CORE_NAND_L3MASTER_AWPROT register field. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWPROT_WIDTH      3
/* The mask used to set the ALT_SYSMGR_CORE_NAND_L3MASTER_AWPROT register field value. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWPROT_SET_MSK    0x00070000
/* The mask used to clear the ALT_SYSMGR_CORE_NAND_L3MASTER_AWPROT register field value. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWPROT_CLR_MSK    0xfff8ffff
/* The reset value of the ALT_SYSMGR_CORE_NAND_L3MASTER_AWPROT register field. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWPROT_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_NAND_L3MASTER_AWPROT field value from a register. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWPROT_GET(value) (((value) & 0x00070000) >> 16)
/* Produces a ALT_SYSMGR_CORE_NAND_L3MASTER_AWPROT register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_AWPROT_SET(value) (((value) << 16) & 0x00070000)

/*
 * Field : arprot
 * 
 * ar prot register
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NAND_L3MASTER_ARPROT register field. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARPROT_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NAND_L3MASTER_ARPROT register field. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARPROT_MSB        22
/* The width in bits of the ALT_SYSMGR_CORE_NAND_L3MASTER_ARPROT register field. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARPROT_WIDTH      3
/* The mask used to set the ALT_SYSMGR_CORE_NAND_L3MASTER_ARPROT register field value. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARPROT_SET_MSK    0x00700000
/* The mask used to clear the ALT_SYSMGR_CORE_NAND_L3MASTER_ARPROT register field value. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARPROT_CLR_MSK    0xff8fffff
/* The reset value of the ALT_SYSMGR_CORE_NAND_L3MASTER_ARPROT register field. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARPROT_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_NAND_L3MASTER_ARPROT field value from a register. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARPROT_GET(value) (((value) & 0x00700000) >> 20)
/* Produces a ALT_SYSMGR_CORE_NAND_L3MASTER_ARPROT register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_ARPROT_SET(value) (((value) << 20) & 0x00700000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_NAND_L3MASTER.
 */
struct ALT_SYSMGR_CORE_NAND_L3MASTER_s
{
    volatile uint32_t  arcache_0 :  4;  /* NAND ARCACHE */
    volatile uint32_t  awcache_0 :  4;  /* NAND AWCACHE */
    volatile uint32_t  awdomain  :  2;  /* ALT_SYSMGR_CORE_NAND_L3MASTER_AWDOMAIN */
    uint32_t                     :  2;  /* *UNDEFINED* */
    volatile uint32_t  ardomain  :  2;  /* ALT_SYSMGR_CORE_NAND_L3MASTER_ARDOMAIN */
    uint32_t                     :  2;  /* *UNDEFINED* */
    volatile uint32_t  awprot    :  3;  /* ALT_SYSMGR_CORE_NAND_L3MASTER_AWPROT */
    uint32_t                     :  1;  /* *UNDEFINED* */
    volatile uint32_t  arprot    :  3;  /* ALT_SYSMGR_CORE_NAND_L3MASTER_ARPROT */
    uint32_t                     :  9;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_NAND_L3MASTER. */
typedef struct ALT_SYSMGR_CORE_NAND_L3MASTER_s  ALT_SYSMGR_CORE_NAND_L3MASTER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_NAND_L3MASTER register. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_RESET       0x00003300
/* The byte offset of the ALT_SYSMGR_CORE_NAND_L3MASTER register from the beginning of the component. */
#define ALT_SYSMGR_CORE_NAND_L3MASTER_OFST        0x34

/*
 * Register : USB L3 Master HPROT AHB-Lite Register - usb0_l3master
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
 *  Bits    | Access | Reset | Description                              
 * :--------|:-------|:------|:------------------------------------------
 *  [3:0]   | RW     | 0x1   | ALT_SYSMGR_CORE_USB0_L3MASTER_HPROT      
 *  [7:4]   | ???    | 0x0   | *UNDEFINED*                              
 *  [8]     | RW     | 0x0   | ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_0   
 *  [9]     | RW     | 0x0   | ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_1   
 *  [11:10] | ???    | 0x0   | *UNDEFINED*                              
 *  [13:12] | RW     | 0x3   | ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER7_6  
 *  [15:14] | ???    | 0x0   | *UNDEFINED*                              
 *  [25:16] | RW     | 0x0   | ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER22_13
 *  [31:26] | ???    | 0x0   | *UNDEFINED*                              
 * 
 */
/*
 * Field : hprot
 * 
 * HPROT[0]: Opcode/Data
 * 
 * HPROT[1]: User/Privilege
 * 
 * HPROT[2]: Non-Bufferable/Bufferable
 * 
 * HPROT[3]: Non-Cacheable/Cacheable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_USB0_L3MASTER_HPROT register field. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HPROT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_USB0_L3MASTER_HPROT register field. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HPROT_MSB        3
/* The width in bits of the ALT_SYSMGR_CORE_USB0_L3MASTER_HPROT register field. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HPROT_WIDTH      4
/* The mask used to set the ALT_SYSMGR_CORE_USB0_L3MASTER_HPROT register field value. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HPROT_SET_MSK    0x0000000f
/* The mask used to clear the ALT_SYSMGR_CORE_USB0_L3MASTER_HPROT register field value. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HPROT_CLR_MSK    0xfffffff0
/* The reset value of the ALT_SYSMGR_CORE_USB0_L3MASTER_HPROT register field. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HPROT_RESET      0x1
/* Extracts the ALT_SYSMGR_CORE_USB0_L3MASTER_HPROT field value from a register. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HPROT_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_SYSMGR_CORE_USB0_L3MASTER_HPROT register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HPROT_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : hauser_0
 * 
 * hauser[0] allocate
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_0 register field. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_0_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_0 register field. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_0_MSB        8
/* The width in bits of the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_0 register field. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_0 register field value. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_0_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_0 register field value. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_0_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_0 register field. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_0_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_0 field value from a register. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_0_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_0 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_0_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : hauser_1
 * 
 * hauser[1] secure
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_1 register field. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_1_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_1 register field. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_1_MSB        9
/* The width in bits of the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_1 register field. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_1 register field value. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_1_SET_MSK    0x00000200
/* The mask used to clear the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_1 register field value. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_1_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_1 register field. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_1_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_1 field value from a register. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_1_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_1 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_1_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : hauser7_6
 * 
 * hauser[7:6]
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER7_6 register field. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER7_6_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER7_6 register field. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER7_6_MSB        13
/* The width in bits of the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER7_6 register field. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER7_6_WIDTH      2
/* The mask used to set the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER7_6 register field value. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER7_6_SET_MSK    0x00003000
/* The mask used to clear the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER7_6 register field value. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER7_6_CLR_MSK    0xffffcfff
/* The reset value of the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER7_6 register field. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER7_6_RESET      0x3
/* Extracts the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER7_6 field value from a register. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER7_6_GET(value) (((value) & 0x00003000) >> 12)
/* Produces a ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER7_6 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER7_6_SET(value) (((value) << 12) & 0x00003000)

/*
 * Field : hauser22_13
 * 
 * hauser[22:13]
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER22_13 register field. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER22_13_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER22_13 register field. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER22_13_MSB        25
/* The width in bits of the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER22_13 register field. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER22_13_WIDTH      10
/* The mask used to set the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER22_13 register field value. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER22_13_SET_MSK    0x03ff0000
/* The mask used to clear the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER22_13 register field value. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER22_13_CLR_MSK    0xfc00ffff
/* The reset value of the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER22_13 register field. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER22_13_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER22_13 field value from a register. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER22_13_GET(value) (((value) & 0x03ff0000) >> 16)
/* Produces a ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER22_13 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER22_13_SET(value) (((value) << 16) & 0x03ff0000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_USB0_L3MASTER.
 */
struct ALT_SYSMGR_CORE_USB0_L3MASTER_s
{
    volatile uint32_t  hprot       :  4;  /* ALT_SYSMGR_CORE_USB0_L3MASTER_HPROT */
    uint32_t                       :  4;  /* *UNDEFINED* */
    volatile uint32_t  hauser_0    :  1;  /* ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_0 */
    volatile uint32_t  hauser_1    :  1;  /* ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER_1 */
    uint32_t                       :  2;  /* *UNDEFINED* */
    volatile uint32_t  hauser7_6   :  2;  /* ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER7_6 */
    uint32_t                       :  2;  /* *UNDEFINED* */
    volatile uint32_t  hauser22_13 : 10;  /* ALT_SYSMGR_CORE_USB0_L3MASTER_HAUSER22_13 */
    uint32_t                       :  6;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_USB0_L3MASTER. */
typedef struct ALT_SYSMGR_CORE_USB0_L3MASTER_s  ALT_SYSMGR_CORE_USB0_L3MASTER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_USB0_L3MASTER register. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_RESET       0x00003001
/* The byte offset of the ALT_SYSMGR_CORE_USB0_L3MASTER register from the beginning of the component. */
#define ALT_SYSMGR_CORE_USB0_L3MASTER_OFST        0x38

/*
 * Register : USB L3 Master HPROT AHB-Lite Register - usb1_l3master
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
 *  Bits    | Access | Reset | Description                              
 * :--------|:-------|:------|:------------------------------------------
 *  [3:0]   | RW     | 0x1   | ALT_SYSMGR_CORE_USB1_L3MASTER_HPROT      
 *  [7:4]   | ???    | 0x0   | *UNDEFINED*                              
 *  [8]     | RW     | 0x0   | ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_0   
 *  [9]     | RW     | 0x0   | ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_1   
 *  [11:10] | ???    | 0x0   | *UNDEFINED*                              
 *  [13:12] | RW     | 0x3   | ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER7_6  
 *  [15:14] | ???    | 0x0   | *UNDEFINED*                              
 *  [25:16] | RW     | 0x0   | ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER22_13
 *  [31:26] | ???    | 0x0   | *UNDEFINED*                              
 * 
 */
/*
 * Field : hprot
 * 
 * HPROT[0]: Opcode/Data
 * 
 * HPROT[1]: User/Privilege
 * 
 * HPROT[2]: Non-Bufferable/Bufferable
 * 
 * HPROT[3]: Non-Cacheable/Cacheable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_USB1_L3MASTER_HPROT register field. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HPROT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_USB1_L3MASTER_HPROT register field. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HPROT_MSB        3
/* The width in bits of the ALT_SYSMGR_CORE_USB1_L3MASTER_HPROT register field. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HPROT_WIDTH      4
/* The mask used to set the ALT_SYSMGR_CORE_USB1_L3MASTER_HPROT register field value. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HPROT_SET_MSK    0x0000000f
/* The mask used to clear the ALT_SYSMGR_CORE_USB1_L3MASTER_HPROT register field value. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HPROT_CLR_MSK    0xfffffff0
/* The reset value of the ALT_SYSMGR_CORE_USB1_L3MASTER_HPROT register field. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HPROT_RESET      0x1
/* Extracts the ALT_SYSMGR_CORE_USB1_L3MASTER_HPROT field value from a register. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HPROT_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_SYSMGR_CORE_USB1_L3MASTER_HPROT register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HPROT_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : hauser_0
 * 
 * hauser[0] allocate
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_0 register field. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_0_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_0 register field. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_0_MSB        8
/* The width in bits of the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_0 register field. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_0 register field value. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_0_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_0 register field value. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_0_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_0 register field. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_0_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_0 field value from a register. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_0_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_0 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_0_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : hauser_1
 * 
 * hauser[1] secure
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_1 register field. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_1_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_1 register field. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_1_MSB        9
/* The width in bits of the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_1 register field. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_1 register field value. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_1_SET_MSK    0x00000200
/* The mask used to clear the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_1 register field value. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_1_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_1 register field. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_1_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_1 field value from a register. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_1_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_1 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_1_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : hauser7_6
 * 
 * hauser[7:6] domain
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER7_6 register field. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER7_6_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER7_6 register field. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER7_6_MSB        13
/* The width in bits of the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER7_6 register field. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER7_6_WIDTH      2
/* The mask used to set the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER7_6 register field value. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER7_6_SET_MSK    0x00003000
/* The mask used to clear the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER7_6 register field value. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER7_6_CLR_MSK    0xffffcfff
/* The reset value of the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER7_6 register field. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER7_6_RESET      0x3
/* Extracts the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER7_6 field value from a register. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER7_6_GET(value) (((value) & 0x00003000) >> 12)
/* Produces a ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER7_6 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER7_6_SET(value) (((value) << 12) & 0x00003000)

/*
 * Field : hauser22_13
 * 
 * hauser[22:13] sid
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER22_13 register field. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER22_13_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER22_13 register field. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER22_13_MSB        25
/* The width in bits of the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER22_13 register field. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER22_13_WIDTH      10
/* The mask used to set the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER22_13 register field value. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER22_13_SET_MSK    0x03ff0000
/* The mask used to clear the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER22_13 register field value. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER22_13_CLR_MSK    0xfc00ffff
/* The reset value of the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER22_13 register field. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER22_13_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER22_13 field value from a register. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER22_13_GET(value) (((value) & 0x03ff0000) >> 16)
/* Produces a ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER22_13 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER22_13_SET(value) (((value) << 16) & 0x03ff0000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_USB1_L3MASTER.
 */
struct ALT_SYSMGR_CORE_USB1_L3MASTER_s
{
    volatile uint32_t  hprot       :  4;  /* ALT_SYSMGR_CORE_USB1_L3MASTER_HPROT */
    uint32_t                       :  4;  /* *UNDEFINED* */
    volatile uint32_t  hauser_0    :  1;  /* ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_0 */
    volatile uint32_t  hauser_1    :  1;  /* ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER_1 */
    uint32_t                       :  2;  /* *UNDEFINED* */
    volatile uint32_t  hauser7_6   :  2;  /* ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER7_6 */
    uint32_t                       :  2;  /* *UNDEFINED* */
    volatile uint32_t  hauser22_13 : 10;  /* ALT_SYSMGR_CORE_USB1_L3MASTER_HAUSER22_13 */
    uint32_t                       :  6;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_USB1_L3MASTER. */
typedef struct ALT_SYSMGR_CORE_USB1_L3MASTER_s  ALT_SYSMGR_CORE_USB1_L3MASTER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_USB1_L3MASTER register. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_RESET       0x00003001
/* The byte offset of the ALT_SYSMGR_CORE_USB1_L3MASTER register from the beginning of the component. */
#define ALT_SYSMGR_CORE_USB1_L3MASTER_OFST        0x3c

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
 *  Enum                                                      | Value | Description
 * :----------------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC_GLOBAL_PTP_CLK_SEL_E_EMAC_PTP_CLK    | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC_GLOBAL_PTP_CLK_SEL_E_F2S_PTP_REF_CLK | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC_GLOBAL_PTP_CLK_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC_GLOBAL_PTP_CLK_SEL_E_EMAC_PTP_CLK      0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC_GLOBAL_PTP_CLK_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC_GLOBAL_PTP_CLK_SEL_E_F2S_PTP_REF_CLK   0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC_GLOBAL_PTP_CLK_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC_GLOBAL_PTP_CLK_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC_GLOBAL_PTP_CLK_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC_GLOBAL_PTP_CLK_SEL_MSB        0
/* The width in bits of the ALT_SYSMGR_CORE_EMAC_GLOBAL_PTP_CLK_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC_GLOBAL_PTP_CLK_SEL_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_EMAC_GLOBAL_PTP_CLK_SEL register field value. */
#define ALT_SYSMGR_CORE_EMAC_GLOBAL_PTP_CLK_SEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC_GLOBAL_PTP_CLK_SEL register field value. */
#define ALT_SYSMGR_CORE_EMAC_GLOBAL_PTP_CLK_SEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_CORE_EMAC_GLOBAL_PTP_CLK_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC_GLOBAL_PTP_CLK_SEL_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC_GLOBAL_PTP_CLK_SEL field value from a register. */
#define ALT_SYSMGR_CORE_EMAC_GLOBAL_PTP_CLK_SEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_CORE_EMAC_GLOBAL_PTP_CLK_SEL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC_GLOBAL_PTP_CLK_SEL_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_SYSMGR_CORE_EMAC_GLOBAL.
 */
struct ALT_SYSMGR_CORE_EMAC_GLOBAL_s
{
    volatile uint32_t  ptp_clk_sel :  1;  /* PTP Clock Select */
    uint32_t                       : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_EMAC_GLOBAL. */
typedef struct ALT_SYSMGR_CORE_EMAC_GLOBAL_s  ALT_SYSMGR_CORE_EMAC_GLOBAL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_EMAC_GLOBAL register. */
#define ALT_SYSMGR_CORE_EMAC_GLOBAL_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_EMAC_GLOBAL register from the beginning of the component. */
#define ALT_SYSMGR_CORE_EMAC_GLOBAL_OFST        0x40

/*
 * Register : Control Register - emac0
 * 
 * Registers used by the EMAC. All fields are reset by a cold or warm reset.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                              
 * :--------|:-------|:------|:------------------------------------------
 *  [1:0]   | RW     | 0x3   | ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL       
 *  [7:2]   | ???    | 0x0   | *UNDEFINED*                              
 *  [8]     | RW     | 0x0   | ALT_SYSMGR_CORE_EMAC0_PTP_REF_SEL        
 *  [11:9]  | ???    | 0x0   | *UNDEFINED*                              
 *  [12]    | RW     | 0x0   | ALT_SYSMGR_CORE_EMAC0_APP_CLK_SEL        
 *  [15:13] | ???    | 0x0   | *UNDEFINED*                              
 *  [19:16] | RW     | 0x0   | ALT_SYSMGR_CORE_EMAC0_ARCACHE            
 *  [23:20] | RW     | 0x0   | ALT_SYSMGR_CORE_EMAC0_AWCACHE            
 *  [26:24] | RW     | 0x2   | ALT_SYSMGR_CORE_EMAC0_ARPROT             
 *  [29:27] | RW     | 0x2   | ALT_SYSMGR_CORE_EMAC0_AWPROT             
 *  [30]    | RW     | 0x0   | ALT_SYSMGR_CORE_EMAC0_SBD_DATA_ENDIANNESS
 *  [31]    | RW     | 0x0   | ALT_SYSMGR_CORE_EMAC0_AXI_DISABLE        
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
 *  Enum                                          | Value | Description
 * :----------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL_E_GMII_MII | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL_E_RGMII    | 0x1   |            
 *  ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL_E_RMII     | 0x2   |            
 *  ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL_E_RESET    | 0x3   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL_E_GMII_MII   0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL_E_RGMII      0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL_E_RMII       0x2
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL_E_RESET      0x3

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL_MSB        1
/* The width in bits of the ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL_WIDTH      2
/* The mask used to set the ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL register field value. */
#define ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL_SET_MSK    0x00000003
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL register field value. */
#define ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL_CLR_MSK    0xfffffffc
/* The reset value of the ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL_RESET      0x3
/* Extracts the ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL field value from a register. */
#define ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL_SET(value) (((value) << 0) & 0x00000003)

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
 *  Enum                                         | Value | Description
 * :---------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC0_PTP_REF_SEL_E_INTERNAL | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC0_PTP_REF_SEL_E_EXTERNAL | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_PTP_REF_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_PTP_REF_SEL_E_INTERNAL    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_PTP_REF_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_PTP_REF_SEL_E_EXTERNAL    0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC0_PTP_REF_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC0_PTP_REF_SEL_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC0_PTP_REF_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC0_PTP_REF_SEL_MSB        8
/* The width in bits of the ALT_SYSMGR_CORE_EMAC0_PTP_REF_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC0_PTP_REF_SEL_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_EMAC0_PTP_REF_SEL register field value. */
#define ALT_SYSMGR_CORE_EMAC0_PTP_REF_SEL_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC0_PTP_REF_SEL register field value. */
#define ALT_SYSMGR_CORE_EMAC0_PTP_REF_SEL_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_CORE_EMAC0_PTP_REF_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC0_PTP_REF_SEL_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC0_PTP_REF_SEL field value from a register. */
#define ALT_SYSMGR_CORE_EMAC0_PTP_REF_SEL_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_CORE_EMAC0_PTP_REF_SEL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC0_PTP_REF_SEL_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : app_clk_sel
 * 
 * Selects the source of the Application clock for the datapath to either l4_mp_clk
 * for normal Baum operation or to f2s_ap_clk if the switch interface is enabled to
 * the FPGA fabric.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                           | Value | Description
 * :-----------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC0_APP_CLK_SEL_E_L4_MP_CLK  | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC0_APP_CLK_SEL_E_F2S_AP_CLK | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_APP_CLK_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_APP_CLK_SEL_E_L4_MP_CLK   0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_APP_CLK_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_APP_CLK_SEL_E_F2S_AP_CLK  0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC0_APP_CLK_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC0_APP_CLK_SEL_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC0_APP_CLK_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC0_APP_CLK_SEL_MSB        12
/* The width in bits of the ALT_SYSMGR_CORE_EMAC0_APP_CLK_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC0_APP_CLK_SEL_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_EMAC0_APP_CLK_SEL register field value. */
#define ALT_SYSMGR_CORE_EMAC0_APP_CLK_SEL_SET_MSK    0x00001000
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC0_APP_CLK_SEL register field value. */
#define ALT_SYSMGR_CORE_EMAC0_APP_CLK_SEL_CLR_MSK    0xffffefff
/* The reset value of the ALT_SYSMGR_CORE_EMAC0_APP_CLK_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC0_APP_CLK_SEL_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC0_APP_CLK_SEL field value from a register. */
#define ALT_SYSMGR_CORE_EMAC0_APP_CLK_SEL_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SYSMGR_CORE_EMAC0_APP_CLK_SEL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC0_APP_CLK_SEL_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : arcache
 * 
 * Specifies the values of the 2 EMAC ARCACHE signals.
 * 
 * The field array index corresponds to the EMAC index.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                 | Value | Description
 * :-----------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_NONCACHE_NONBUFF     | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_BUFF                 | 0x1   |            
 *  ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_CACHE_NONALLOC       | 0x2   |            
 *  ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_CACHE_BUFF_NONALLOC  | 0x3   |            
 *  ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_RESERVED1            | 0x4   |            
 *  ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_RESERVED2            | 0x5   |            
 *  ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_CACHE_WRTHRU_RDALLOC | 0x6   |            
 *  ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_CACHE_WRBACK_RDALLOC | 0x7   |            
 *  ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_RESERVED3            | 0x8   |            
 *  ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_RESERVED4            | 0x9   |            
 *  ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_CACHE_WRTHRU_WRALLOC | 0xa   |            
 *  ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_CACHE_WRBACK_WRALLOC | 0xb   |            
 *  ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_RESERVED5            | 0xc   |            
 *  ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_RESERVED6            | 0xd   |            
 *  ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_CACHE_WRTHRU_ALLOC   | 0xe   |            
 *  ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_CACHE_WRBACK_ALLOC   | 0xf   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_NONCACHE_NONBUFF        0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_BUFF                    0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_CACHE_NONALLOC          0x2
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_CACHE_BUFF_NONALLOC     0x3
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_RESERVED1               0x4
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_RESERVED2               0x5
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_CACHE_WRTHRU_RDALLOC    0x6
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_CACHE_WRBACK_RDALLOC    0x7
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_RESERVED3               0x8
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_RESERVED4               0x9
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_CACHE_WRTHRU_WRALLOC    0xa
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_CACHE_WRBACK_WRALLOC    0xb
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_RESERVED5               0xc
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_RESERVED6               0xd
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_CACHE_WRTHRU_ALLOC      0xe
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_ARCACHE_E_CACHE_WRBACK_ALLOC      0xf

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC0_ARCACHE register field. */
#define ALT_SYSMGR_CORE_EMAC0_ARCACHE_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC0_ARCACHE register field. */
#define ALT_SYSMGR_CORE_EMAC0_ARCACHE_MSB        19
/* The width in bits of the ALT_SYSMGR_CORE_EMAC0_ARCACHE register field. */
#define ALT_SYSMGR_CORE_EMAC0_ARCACHE_WIDTH      4
/* The mask used to set the ALT_SYSMGR_CORE_EMAC0_ARCACHE register field value. */
#define ALT_SYSMGR_CORE_EMAC0_ARCACHE_SET_MSK    0x000f0000
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC0_ARCACHE register field value. */
#define ALT_SYSMGR_CORE_EMAC0_ARCACHE_CLR_MSK    0xfff0ffff
/* The reset value of the ALT_SYSMGR_CORE_EMAC0_ARCACHE register field. */
#define ALT_SYSMGR_CORE_EMAC0_ARCACHE_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC0_ARCACHE field value from a register. */
#define ALT_SYSMGR_CORE_EMAC0_ARCACHE_GET(value) (((value) & 0x000f0000) >> 16)
/* Produces a ALT_SYSMGR_CORE_EMAC0_ARCACHE register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC0_ARCACHE_SET(value) (((value) << 16) & 0x000f0000)

/*
 * Field : awcache
 * 
 * Specifies the values of the 2 EMAC AWCACHE signals.
 * 
 * The field array index corresponds to the EMAC index.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                 | Value | Description
 * :-----------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_NONCACHE_NONBUFF     | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_BUFF                 | 0x1   |            
 *  ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_CACHE_NONALLOC       | 0x2   |            
 *  ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_CACHE_BUFF_NONALLOC  | 0x3   |            
 *  ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_RESERVED1            | 0x4   |            
 *  ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_RESERVED2            | 0x5   |            
 *  ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_CACHE_WRTHRU_RDALLOC | 0x6   |            
 *  ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_CACHE_WRBACK_RDALLOC | 0x7   |            
 *  ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_RESERVED3            | 0x8   |            
 *  ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_RESERVED4            | 0x9   |            
 *  ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_CACHE_WRTHRU_WRALLOC | 0xa   |            
 *  ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_CACHE_WRBACK_WRALLOC | 0xb   |            
 *  ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_RESERVED5            | 0xc   |            
 *  ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_RESERVED6            | 0xd   |            
 *  ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_CACHE_WRTHRU_ALLOC   | 0xe   |            
 *  ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_CACHE_WRBACK_ALLOC   | 0xf   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_NONCACHE_NONBUFF        0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_BUFF                    0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_CACHE_NONALLOC          0x2
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_CACHE_BUFF_NONALLOC     0x3
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_RESERVED1               0x4
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_RESERVED2               0x5
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_CACHE_WRTHRU_RDALLOC    0x6
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_CACHE_WRBACK_RDALLOC    0x7
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_RESERVED3               0x8
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_RESERVED4               0x9
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_CACHE_WRTHRU_WRALLOC    0xa
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_CACHE_WRBACK_WRALLOC    0xb
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_RESERVED5               0xc
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_RESERVED6               0xd
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_CACHE_WRTHRU_ALLOC      0xe
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_AWCACHE_E_CACHE_WRBACK_ALLOC      0xf

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC0_AWCACHE register field. */
#define ALT_SYSMGR_CORE_EMAC0_AWCACHE_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC0_AWCACHE register field. */
#define ALT_SYSMGR_CORE_EMAC0_AWCACHE_MSB        23
/* The width in bits of the ALT_SYSMGR_CORE_EMAC0_AWCACHE register field. */
#define ALT_SYSMGR_CORE_EMAC0_AWCACHE_WIDTH      4
/* The mask used to set the ALT_SYSMGR_CORE_EMAC0_AWCACHE register field value. */
#define ALT_SYSMGR_CORE_EMAC0_AWCACHE_SET_MSK    0x00f00000
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC0_AWCACHE register field value. */
#define ALT_SYSMGR_CORE_EMAC0_AWCACHE_CLR_MSK    0xff0fffff
/* The reset value of the ALT_SYSMGR_CORE_EMAC0_AWCACHE register field. */
#define ALT_SYSMGR_CORE_EMAC0_AWCACHE_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC0_AWCACHE field value from a register. */
#define ALT_SYSMGR_CORE_EMAC0_AWCACHE_GET(value) (((value) & 0x00f00000) >> 20)
/* Produces a ALT_SYSMGR_CORE_EMAC0_AWCACHE register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC0_AWCACHE_SET(value) (((value) << 20) & 0x00f00000)

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
 *  Enum                                                | Value | Description
 * :----------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC0_ARPROT_E_SECURE_NORMAL        | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC0_ARPROT_E_SECURE_PRIVILEGED    | 0x1   |            
 *  ALT_SYSMGR_CORE_EMAC0_ARPROT_E_NONSECURE_NORMAL     | 0x2   |            
 *  ALT_SYSMGR_CORE_EMAC0_ARPROT_E_NONSECURE_PRIVILEGED | 0x3   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_ARPROT
 * 
 * Secure Normal(non-privileged) access
 */
#define ALT_SYSMGR_CORE_EMAC0_ARPROT_E_SECURE_NORMAL        0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_ARPROT
 * 
 * Secure Privileged access
 */
#define ALT_SYSMGR_CORE_EMAC0_ARPROT_E_SECURE_PRIVILEGED    0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_ARPROT
 * 
 * Non-Secure Normal(non-privileged) access
 */
#define ALT_SYSMGR_CORE_EMAC0_ARPROT_E_NONSECURE_NORMAL     0x2
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_ARPROT
 * 
 * Non-Secure Privileged access
 */
#define ALT_SYSMGR_CORE_EMAC0_ARPROT_E_NONSECURE_PRIVILEGED 0x3

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC0_ARPROT register field. */
#define ALT_SYSMGR_CORE_EMAC0_ARPROT_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC0_ARPROT register field. */
#define ALT_SYSMGR_CORE_EMAC0_ARPROT_MSB        26
/* The width in bits of the ALT_SYSMGR_CORE_EMAC0_ARPROT register field. */
#define ALT_SYSMGR_CORE_EMAC0_ARPROT_WIDTH      3
/* The mask used to set the ALT_SYSMGR_CORE_EMAC0_ARPROT register field value. */
#define ALT_SYSMGR_CORE_EMAC0_ARPROT_SET_MSK    0x07000000
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC0_ARPROT register field value. */
#define ALT_SYSMGR_CORE_EMAC0_ARPROT_CLR_MSK    0xf8ffffff
/* The reset value of the ALT_SYSMGR_CORE_EMAC0_ARPROT register field. */
#define ALT_SYSMGR_CORE_EMAC0_ARPROT_RESET      0x2
/* Extracts the ALT_SYSMGR_CORE_EMAC0_ARPROT field value from a register. */
#define ALT_SYSMGR_CORE_EMAC0_ARPROT_GET(value) (((value) & 0x07000000) >> 24)
/* Produces a ALT_SYSMGR_CORE_EMAC0_ARPROT register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC0_ARPROT_SET(value) (((value) << 24) & 0x07000000)

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
 *  Enum                                                | Value | Description
 * :----------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC0_AWPROT_E_SECURE_NORMAL        | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC0_AWPROT_E_SECURE_PRIVILEGED    | 0x1   |            
 *  ALT_SYSMGR_CORE_EMAC0_AWPROT_E_NONSECURE_NORMAL     | 0x2   |            
 *  ALT_SYSMGR_CORE_EMAC0_AWPROT_E_NONSECURE_PRIVILEGED | 0x3   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_AWPROT
 * 
 * Secure Normal(non-privileged) access
 */
#define ALT_SYSMGR_CORE_EMAC0_AWPROT_E_SECURE_NORMAL        0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_AWPROT
 * 
 * Secure Privileged access
 */
#define ALT_SYSMGR_CORE_EMAC0_AWPROT_E_SECURE_PRIVILEGED    0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_AWPROT
 * 
 * Non-Secure Normal(non-privileged) access
 */
#define ALT_SYSMGR_CORE_EMAC0_AWPROT_E_NONSECURE_NORMAL     0x2
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_AWPROT
 * 
 * Non-Secure Privileged access
 */
#define ALT_SYSMGR_CORE_EMAC0_AWPROT_E_NONSECURE_PRIVILEGED 0x3

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC0_AWPROT register field. */
#define ALT_SYSMGR_CORE_EMAC0_AWPROT_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC0_AWPROT register field. */
#define ALT_SYSMGR_CORE_EMAC0_AWPROT_MSB        29
/* The width in bits of the ALT_SYSMGR_CORE_EMAC0_AWPROT register field. */
#define ALT_SYSMGR_CORE_EMAC0_AWPROT_WIDTH      3
/* The mask used to set the ALT_SYSMGR_CORE_EMAC0_AWPROT register field value. */
#define ALT_SYSMGR_CORE_EMAC0_AWPROT_SET_MSK    0x38000000
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC0_AWPROT register field value. */
#define ALT_SYSMGR_CORE_EMAC0_AWPROT_CLR_MSK    0xc7ffffff
/* The reset value of the ALT_SYSMGR_CORE_EMAC0_AWPROT register field. */
#define ALT_SYSMGR_CORE_EMAC0_AWPROT_RESET      0x2
/* Extracts the ALT_SYSMGR_CORE_EMAC0_AWPROT field value from a register. */
#define ALT_SYSMGR_CORE_EMAC0_AWPROT_GET(value) (((value) & 0x38000000) >> 27)
/* Produces a ALT_SYSMGR_CORE_EMAC0_AWPROT register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC0_AWPROT_SET(value) (((value) << 27) & 0x38000000)

/*
 * Field : sbd_data_endianness
 * 
 * Specifies the endianness of the EMAC DMA transfers.
 * 
 * The field array index corresponds to the EMAC index.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                      | Value | Description
 * :----------------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC0_SBD_DATA_ENDIANNESS_E_LITTLE_ENDIAN | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC0_SBD_DATA_ENDIANNESS_E_BIG_ENDIAN    | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_SBD_DATA_ENDIANNESS
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_SBD_DATA_ENDIANNESS_E_LITTLE_ENDIAN   0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC0_SBD_DATA_ENDIANNESS
 * 
 */
#define ALT_SYSMGR_CORE_EMAC0_SBD_DATA_ENDIANNESS_E_BIG_ENDIAN      0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC0_SBD_DATA_ENDIANNESS register field. */
#define ALT_SYSMGR_CORE_EMAC0_SBD_DATA_ENDIANNESS_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC0_SBD_DATA_ENDIANNESS register field. */
#define ALT_SYSMGR_CORE_EMAC0_SBD_DATA_ENDIANNESS_MSB        30
/* The width in bits of the ALT_SYSMGR_CORE_EMAC0_SBD_DATA_ENDIANNESS register field. */
#define ALT_SYSMGR_CORE_EMAC0_SBD_DATA_ENDIANNESS_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_EMAC0_SBD_DATA_ENDIANNESS register field value. */
#define ALT_SYSMGR_CORE_EMAC0_SBD_DATA_ENDIANNESS_SET_MSK    0x40000000
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC0_SBD_DATA_ENDIANNESS register field value. */
#define ALT_SYSMGR_CORE_EMAC0_SBD_DATA_ENDIANNESS_CLR_MSK    0xbfffffff
/* The reset value of the ALT_SYSMGR_CORE_EMAC0_SBD_DATA_ENDIANNESS register field. */
#define ALT_SYSMGR_CORE_EMAC0_SBD_DATA_ENDIANNESS_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC0_SBD_DATA_ENDIANNESS field value from a register. */
#define ALT_SYSMGR_CORE_EMAC0_SBD_DATA_ENDIANNESS_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_SYSMGR_CORE_EMAC0_SBD_DATA_ENDIANNESS register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC0_SBD_DATA_ENDIANNESS_SET(value) (((value) << 30) & 0x40000000)

/*
 * Field : axi_disable
 * 
 * AXI Disable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC0_AXI_DISABLE register field. */
#define ALT_SYSMGR_CORE_EMAC0_AXI_DISABLE_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC0_AXI_DISABLE register field. */
#define ALT_SYSMGR_CORE_EMAC0_AXI_DISABLE_MSB        31
/* The width in bits of the ALT_SYSMGR_CORE_EMAC0_AXI_DISABLE register field. */
#define ALT_SYSMGR_CORE_EMAC0_AXI_DISABLE_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_EMAC0_AXI_DISABLE register field value. */
#define ALT_SYSMGR_CORE_EMAC0_AXI_DISABLE_SET_MSK    0x80000000
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC0_AXI_DISABLE register field value. */
#define ALT_SYSMGR_CORE_EMAC0_AXI_DISABLE_CLR_MSK    0x7fffffff
/* The reset value of the ALT_SYSMGR_CORE_EMAC0_AXI_DISABLE register field. */
#define ALT_SYSMGR_CORE_EMAC0_AXI_DISABLE_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC0_AXI_DISABLE field value from a register. */
#define ALT_SYSMGR_CORE_EMAC0_AXI_DISABLE_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_SYSMGR_CORE_EMAC0_AXI_DISABLE register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC0_AXI_DISABLE_SET(value) (((value) << 31) & 0x80000000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_EMAC0.
 */
struct ALT_SYSMGR_CORE_EMAC0_s
{
    volatile uint32_t  phy_intf_sel        :  2;  /* ALT_SYSMGR_CORE_EMAC0_PHY_INTF_SEL */
    uint32_t                               :  6;  /* *UNDEFINED* */
    volatile uint32_t  ptp_ref_sel         :  1;  /* ALT_SYSMGR_CORE_EMAC0_PTP_REF_SEL */
    uint32_t                               :  3;  /* *UNDEFINED* */
    volatile uint32_t  app_clk_sel         :  1;  /* ALT_SYSMGR_CORE_EMAC0_APP_CLK_SEL */
    uint32_t                               :  3;  /* *UNDEFINED* */
    volatile uint32_t  arcache             :  4;  /* ALT_SYSMGR_CORE_EMAC0_ARCACHE */
    volatile uint32_t  awcache             :  4;  /* ALT_SYSMGR_CORE_EMAC0_AWCACHE */
    volatile uint32_t  arprot              :  3;  /* ALT_SYSMGR_CORE_EMAC0_ARPROT */
    volatile uint32_t  awprot              :  3;  /* ALT_SYSMGR_CORE_EMAC0_AWPROT */
    volatile uint32_t  sbd_data_endianness :  1;  /* ALT_SYSMGR_CORE_EMAC0_SBD_DATA_ENDIANNESS */
    volatile uint32_t  axi_disable         :  1;  /* ALT_SYSMGR_CORE_EMAC0_AXI_DISABLE */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_EMAC0. */
typedef struct ALT_SYSMGR_CORE_EMAC0_s  ALT_SYSMGR_CORE_EMAC0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_EMAC0 register. */
#define ALT_SYSMGR_CORE_EMAC0_RESET       0x12000003
/* The byte offset of the ALT_SYSMGR_CORE_EMAC0 register from the beginning of the component. */
#define ALT_SYSMGR_CORE_EMAC0_OFST        0x44

/*
 * Register : Control Register - emac1
 * 
 * Registers used by the EMAC. All fields are reset by a cold or warm reset.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                              
 * :--------|:-------|:------|:------------------------------------------
 *  [1:0]   | RW     | 0x3   | ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL       
 *  [7:2]   | ???    | 0x0   | *UNDEFINED*                              
 *  [8]     | RW     | 0x0   | ALT_SYSMGR_CORE_EMAC1_PTP_REF_SEL        
 *  [11:9]  | ???    | 0x0   | *UNDEFINED*                              
 *  [12]    | RW     | 0x0   | ALT_SYSMGR_CORE_EMAC1_APP_CLK_SEL        
 *  [15:13] | ???    | 0x0   | *UNDEFINED*                              
 *  [19:16] | RW     | 0x0   | ALT_SYSMGR_CORE_EMAC1_ARCACHE            
 *  [23:20] | RW     | 0x0   | ALT_SYSMGR_CORE_EMAC1_AWCACHE            
 *  [26:24] | RW     | 0x2   | ALT_SYSMGR_CORE_EMAC1_ARPROT             
 *  [29:27] | RW     | 0x2   | ALT_SYSMGR_CORE_EMAC1_AWPROT             
 *  [30]    | RW     | 0x0   | ALT_SYSMGR_CORE_EMAC1_SBD_DATA_ENDIANNESS
 *  [31]    | RW     | 0x0   | ALT_SYSMGR_CORE_EMAC1_AXI_DISABLE        
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
 *  Enum                                          | Value | Description
 * :----------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL_E_GMII_MII | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL_E_RGMII    | 0x1   |            
 *  ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL_E_RMII     | 0x2   |            
 *  ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL_E_RESET    | 0x3   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL_E_GMII_MII   0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL_E_RGMII      0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL_E_RMII       0x2
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL_E_RESET      0x3

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL_MSB        1
/* The width in bits of the ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL_WIDTH      2
/* The mask used to set the ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL register field value. */
#define ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL_SET_MSK    0x00000003
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL register field value. */
#define ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL_CLR_MSK    0xfffffffc
/* The reset value of the ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL_RESET      0x3
/* Extracts the ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL field value from a register. */
#define ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL_SET(value) (((value) << 0) & 0x00000003)

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
 *  Enum                                         | Value | Description
 * :---------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC1_PTP_REF_SEL_E_INTERNAL | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC1_PTP_REF_SEL_E_EXTERNAL | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_PTP_REF_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_PTP_REF_SEL_E_INTERNAL    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_PTP_REF_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_PTP_REF_SEL_E_EXTERNAL    0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC1_PTP_REF_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC1_PTP_REF_SEL_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC1_PTP_REF_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC1_PTP_REF_SEL_MSB        8
/* The width in bits of the ALT_SYSMGR_CORE_EMAC1_PTP_REF_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC1_PTP_REF_SEL_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_EMAC1_PTP_REF_SEL register field value. */
#define ALT_SYSMGR_CORE_EMAC1_PTP_REF_SEL_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC1_PTP_REF_SEL register field value. */
#define ALT_SYSMGR_CORE_EMAC1_PTP_REF_SEL_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_CORE_EMAC1_PTP_REF_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC1_PTP_REF_SEL_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC1_PTP_REF_SEL field value from a register. */
#define ALT_SYSMGR_CORE_EMAC1_PTP_REF_SEL_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_CORE_EMAC1_PTP_REF_SEL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC1_PTP_REF_SEL_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : app_clk_sel
 * 
 * Selects the source of the Application clock for the datapath to either l4_mp_clk
 * for normal Baum operation or to f2s_ap_clk if the switch interface is enabled to
 * the FPGA fabric.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                           | Value | Description
 * :-----------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC1_APP_CLK_SEL_E_L4_MP_CLK  | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC1_APP_CLK_SEL_E_F2S_AP_CLK | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_APP_CLK_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_APP_CLK_SEL_E_L4_MP_CLK   0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_APP_CLK_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_APP_CLK_SEL_E_F2S_AP_CLK  0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC1_APP_CLK_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC1_APP_CLK_SEL_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC1_APP_CLK_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC1_APP_CLK_SEL_MSB        12
/* The width in bits of the ALT_SYSMGR_CORE_EMAC1_APP_CLK_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC1_APP_CLK_SEL_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_EMAC1_APP_CLK_SEL register field value. */
#define ALT_SYSMGR_CORE_EMAC1_APP_CLK_SEL_SET_MSK    0x00001000
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC1_APP_CLK_SEL register field value. */
#define ALT_SYSMGR_CORE_EMAC1_APP_CLK_SEL_CLR_MSK    0xffffefff
/* The reset value of the ALT_SYSMGR_CORE_EMAC1_APP_CLK_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC1_APP_CLK_SEL_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC1_APP_CLK_SEL field value from a register. */
#define ALT_SYSMGR_CORE_EMAC1_APP_CLK_SEL_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SYSMGR_CORE_EMAC1_APP_CLK_SEL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC1_APP_CLK_SEL_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : arcache
 * 
 * Specifies the values of the 2 EMAC ARCACHE signals.
 * 
 * The field array index corresponds to the EMAC index.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                 | Value | Description
 * :-----------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_F2S_AP_CLK           | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_BUFF                 | 0x1   |            
 *  ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_CACHE_NONALLOC       | 0x2   |            
 *  ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_CACHE_BUFF_NONALLOC  | 0x3   |            
 *  ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_RESERVED1            | 0x4   |            
 *  ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_RESERVED2            | 0x5   |            
 *  ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_CACHE_WRTHRU_RDALLOC | 0x6   |            
 *  ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_CACHE_WRBACK_RDALLOC | 0x7   |            
 *  ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_RESERVED3            | 0x8   |            
 *  ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_RESERVED4            | 0x9   |            
 *  ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_CACHE_WRTHRU_WRALLOC | 0xa   |            
 *  ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_CACHE_WRBACK_WRALLOC | 0xb   |            
 *  ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_RESERVED5            | 0xc   |            
 *  ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_RESERVED6            | 0xd   |            
 *  ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_CACHE_WRTHRU_ALLOC   | 0xe   |            
 *  ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_CACHE_WRBACK_ALLOC   | 0xf   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_F2S_AP_CLK              0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_BUFF                    0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_CACHE_NONALLOC          0x2
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_CACHE_BUFF_NONALLOC     0x3
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_RESERVED1               0x4
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_RESERVED2               0x5
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_CACHE_WRTHRU_RDALLOC    0x6
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_CACHE_WRBACK_RDALLOC    0x7
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_RESERVED3               0x8
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_RESERVED4               0x9
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_CACHE_WRTHRU_WRALLOC    0xa
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_CACHE_WRBACK_WRALLOC    0xb
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_RESERVED5               0xc
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_RESERVED6               0xd
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_CACHE_WRTHRU_ALLOC      0xe
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_ARCACHE_E_CACHE_WRBACK_ALLOC      0xf

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC1_ARCACHE register field. */
#define ALT_SYSMGR_CORE_EMAC1_ARCACHE_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC1_ARCACHE register field. */
#define ALT_SYSMGR_CORE_EMAC1_ARCACHE_MSB        19
/* The width in bits of the ALT_SYSMGR_CORE_EMAC1_ARCACHE register field. */
#define ALT_SYSMGR_CORE_EMAC1_ARCACHE_WIDTH      4
/* The mask used to set the ALT_SYSMGR_CORE_EMAC1_ARCACHE register field value. */
#define ALT_SYSMGR_CORE_EMAC1_ARCACHE_SET_MSK    0x000f0000
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC1_ARCACHE register field value. */
#define ALT_SYSMGR_CORE_EMAC1_ARCACHE_CLR_MSK    0xfff0ffff
/* The reset value of the ALT_SYSMGR_CORE_EMAC1_ARCACHE register field. */
#define ALT_SYSMGR_CORE_EMAC1_ARCACHE_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC1_ARCACHE field value from a register. */
#define ALT_SYSMGR_CORE_EMAC1_ARCACHE_GET(value) (((value) & 0x000f0000) >> 16)
/* Produces a ALT_SYSMGR_CORE_EMAC1_ARCACHE register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC1_ARCACHE_SET(value) (((value) << 16) & 0x000f0000)

/*
 * Field : awcache
 * 
 * Specifies the values of the 2 EMAC AWCACHE signals.
 * 
 * The field array index corresponds to the EMAC index.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                 | Value | Description
 * :-----------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_NONCACHE_NONBUFF     | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_BUFF                 | 0x1   |            
 *  ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_CACHE_NONALLOC       | 0x2   |            
 *  ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_CACHE_BUFF_NONALLOC  | 0x3   |            
 *  ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_RESERVED1            | 0x4   |            
 *  ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_RESERVED2            | 0x5   |            
 *  ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_CACHE_WRTHRU_RDALLOC | 0x6   |            
 *  ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_CACHE_WRBACK_RDALLOC | 0x7   |            
 *  ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_RESERVED3            | 0x8   |            
 *  ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_RESERVED4            | 0x9   |            
 *  ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_CACHE_WRTHRU_WRALLOC | 0xa   |            
 *  ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_CACHE_WRBACK_WRALLOC | 0xb   |            
 *  ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_RESERVED5            | 0xc   |            
 *  ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_RESERVED6            | 0xd   |            
 *  ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_CACHE_WRTHRU_ALLOC   | 0xe   |            
 *  ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_CACHE_WRBACK_ALLOC   | 0xf   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_NONCACHE_NONBUFF        0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_BUFF                    0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_CACHE_NONALLOC          0x2
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_CACHE_BUFF_NONALLOC     0x3
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_RESERVED1               0x4
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_RESERVED2               0x5
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_CACHE_WRTHRU_RDALLOC    0x6
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_CACHE_WRBACK_RDALLOC    0x7
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_RESERVED3               0x8
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_RESERVED4               0x9
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_CACHE_WRTHRU_WRALLOC    0xa
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_CACHE_WRBACK_WRALLOC    0xb
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_RESERVED5               0xc
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_RESERVED6               0xd
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_CACHE_WRTHRU_ALLOC      0xe
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_AWCACHE_E_CACHE_WRBACK_ALLOC      0xf

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC1_AWCACHE register field. */
#define ALT_SYSMGR_CORE_EMAC1_AWCACHE_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC1_AWCACHE register field. */
#define ALT_SYSMGR_CORE_EMAC1_AWCACHE_MSB        23
/* The width in bits of the ALT_SYSMGR_CORE_EMAC1_AWCACHE register field. */
#define ALT_SYSMGR_CORE_EMAC1_AWCACHE_WIDTH      4
/* The mask used to set the ALT_SYSMGR_CORE_EMAC1_AWCACHE register field value. */
#define ALT_SYSMGR_CORE_EMAC1_AWCACHE_SET_MSK    0x00f00000
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC1_AWCACHE register field value. */
#define ALT_SYSMGR_CORE_EMAC1_AWCACHE_CLR_MSK    0xff0fffff
/* The reset value of the ALT_SYSMGR_CORE_EMAC1_AWCACHE register field. */
#define ALT_SYSMGR_CORE_EMAC1_AWCACHE_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC1_AWCACHE field value from a register. */
#define ALT_SYSMGR_CORE_EMAC1_AWCACHE_GET(value) (((value) & 0x00f00000) >> 20)
/* Produces a ALT_SYSMGR_CORE_EMAC1_AWCACHE register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC1_AWCACHE_SET(value) (((value) << 20) & 0x00f00000)

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
 *  Enum                                                | Value | Description
 * :----------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC1_ARPROT_E_SECURE_NORMAL        | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC1_ARPROT_E_SECURE_PRIVILEGED    | 0x1   |            
 *  ALT_SYSMGR_CORE_EMAC1_ARPROT_E_NONSECURE_NORMAL     | 0x2   |            
 *  ALT_SYSMGR_CORE_EMAC1_ARPROT_E_NONSECURE_PRIVILEGED | 0x3   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_ARPROT
 * 
 * Secure Normal(non-privileged) access
 */
#define ALT_SYSMGR_CORE_EMAC1_ARPROT_E_SECURE_NORMAL        0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_ARPROT
 * 
 * Secure Privileged access
 */
#define ALT_SYSMGR_CORE_EMAC1_ARPROT_E_SECURE_PRIVILEGED    0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_ARPROT
 * 
 * Non-Secure Normal(non-privileged) access
 */
#define ALT_SYSMGR_CORE_EMAC1_ARPROT_E_NONSECURE_NORMAL     0x2
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_ARPROT
 * 
 * Non-Secure Privileged access
 */
#define ALT_SYSMGR_CORE_EMAC1_ARPROT_E_NONSECURE_PRIVILEGED 0x3

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC1_ARPROT register field. */
#define ALT_SYSMGR_CORE_EMAC1_ARPROT_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC1_ARPROT register field. */
#define ALT_SYSMGR_CORE_EMAC1_ARPROT_MSB        26
/* The width in bits of the ALT_SYSMGR_CORE_EMAC1_ARPROT register field. */
#define ALT_SYSMGR_CORE_EMAC1_ARPROT_WIDTH      3
/* The mask used to set the ALT_SYSMGR_CORE_EMAC1_ARPROT register field value. */
#define ALT_SYSMGR_CORE_EMAC1_ARPROT_SET_MSK    0x07000000
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC1_ARPROT register field value. */
#define ALT_SYSMGR_CORE_EMAC1_ARPROT_CLR_MSK    0xf8ffffff
/* The reset value of the ALT_SYSMGR_CORE_EMAC1_ARPROT register field. */
#define ALT_SYSMGR_CORE_EMAC1_ARPROT_RESET      0x2
/* Extracts the ALT_SYSMGR_CORE_EMAC1_ARPROT field value from a register. */
#define ALT_SYSMGR_CORE_EMAC1_ARPROT_GET(value) (((value) & 0x07000000) >> 24)
/* Produces a ALT_SYSMGR_CORE_EMAC1_ARPROT register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC1_ARPROT_SET(value) (((value) << 24) & 0x07000000)

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
 *  Enum                                                | Value | Description
 * :----------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC1_AWPROT_E_SECURE_NORMAL        | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC1_AWPROT_E_SECURE_PRIVILEGED    | 0x1   |            
 *  ALT_SYSMGR_CORE_EMAC1_AWPROT_E_NONSECURE_NORMAL     | 0x2   |            
 *  ALT_SYSMGR_CORE_EMAC1_AWPROT_E_NONSECURE_PRIVILEGED | 0x3   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_AWPROT
 * 
 * Secure Normal(non-privileged) access
 */
#define ALT_SYSMGR_CORE_EMAC1_AWPROT_E_SECURE_NORMAL        0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_AWPROT
 * 
 * Secure Privileged access
 */
#define ALT_SYSMGR_CORE_EMAC1_AWPROT_E_SECURE_PRIVILEGED    0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_AWPROT
 * 
 * Non-Secure Normal(non-privileged) access
 */
#define ALT_SYSMGR_CORE_EMAC1_AWPROT_E_NONSECURE_NORMAL     0x2
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_AWPROT
 * 
 * Non-Secure Privileged access
 */
#define ALT_SYSMGR_CORE_EMAC1_AWPROT_E_NONSECURE_PRIVILEGED 0x3

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC1_AWPROT register field. */
#define ALT_SYSMGR_CORE_EMAC1_AWPROT_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC1_AWPROT register field. */
#define ALT_SYSMGR_CORE_EMAC1_AWPROT_MSB        29
/* The width in bits of the ALT_SYSMGR_CORE_EMAC1_AWPROT register field. */
#define ALT_SYSMGR_CORE_EMAC1_AWPROT_WIDTH      3
/* The mask used to set the ALT_SYSMGR_CORE_EMAC1_AWPROT register field value. */
#define ALT_SYSMGR_CORE_EMAC1_AWPROT_SET_MSK    0x38000000
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC1_AWPROT register field value. */
#define ALT_SYSMGR_CORE_EMAC1_AWPROT_CLR_MSK    0xc7ffffff
/* The reset value of the ALT_SYSMGR_CORE_EMAC1_AWPROT register field. */
#define ALT_SYSMGR_CORE_EMAC1_AWPROT_RESET      0x2
/* Extracts the ALT_SYSMGR_CORE_EMAC1_AWPROT field value from a register. */
#define ALT_SYSMGR_CORE_EMAC1_AWPROT_GET(value) (((value) & 0x38000000) >> 27)
/* Produces a ALT_SYSMGR_CORE_EMAC1_AWPROT register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC1_AWPROT_SET(value) (((value) << 27) & 0x38000000)

/*
 * Field : sbd_data_endianness
 * 
 * Specifies the endianness of the EMAC DMA transfers.
 * 
 * The field array index corresponds to the EMAC index.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                      | Value | Description
 * :----------------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC1_SBD_DATA_ENDIANNESS_E_LITTLE_ENDIAN | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC1_SBD_DATA_ENDIANNESS_E_BIG_ENDIAN    | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_SBD_DATA_ENDIANNESS
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_SBD_DATA_ENDIANNESS_E_LITTLE_ENDIAN   0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC1_SBD_DATA_ENDIANNESS
 * 
 */
#define ALT_SYSMGR_CORE_EMAC1_SBD_DATA_ENDIANNESS_E_BIG_ENDIAN      0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC1_SBD_DATA_ENDIANNESS register field. */
#define ALT_SYSMGR_CORE_EMAC1_SBD_DATA_ENDIANNESS_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC1_SBD_DATA_ENDIANNESS register field. */
#define ALT_SYSMGR_CORE_EMAC1_SBD_DATA_ENDIANNESS_MSB        30
/* The width in bits of the ALT_SYSMGR_CORE_EMAC1_SBD_DATA_ENDIANNESS register field. */
#define ALT_SYSMGR_CORE_EMAC1_SBD_DATA_ENDIANNESS_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_EMAC1_SBD_DATA_ENDIANNESS register field value. */
#define ALT_SYSMGR_CORE_EMAC1_SBD_DATA_ENDIANNESS_SET_MSK    0x40000000
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC1_SBD_DATA_ENDIANNESS register field value. */
#define ALT_SYSMGR_CORE_EMAC1_SBD_DATA_ENDIANNESS_CLR_MSK    0xbfffffff
/* The reset value of the ALT_SYSMGR_CORE_EMAC1_SBD_DATA_ENDIANNESS register field. */
#define ALT_SYSMGR_CORE_EMAC1_SBD_DATA_ENDIANNESS_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC1_SBD_DATA_ENDIANNESS field value from a register. */
#define ALT_SYSMGR_CORE_EMAC1_SBD_DATA_ENDIANNESS_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_SYSMGR_CORE_EMAC1_SBD_DATA_ENDIANNESS register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC1_SBD_DATA_ENDIANNESS_SET(value) (((value) << 30) & 0x40000000)

/*
 * Field : axi_disable
 * 
 * AXI Disable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC1_AXI_DISABLE register field. */
#define ALT_SYSMGR_CORE_EMAC1_AXI_DISABLE_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC1_AXI_DISABLE register field. */
#define ALT_SYSMGR_CORE_EMAC1_AXI_DISABLE_MSB        31
/* The width in bits of the ALT_SYSMGR_CORE_EMAC1_AXI_DISABLE register field. */
#define ALT_SYSMGR_CORE_EMAC1_AXI_DISABLE_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_EMAC1_AXI_DISABLE register field value. */
#define ALT_SYSMGR_CORE_EMAC1_AXI_DISABLE_SET_MSK    0x80000000
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC1_AXI_DISABLE register field value. */
#define ALT_SYSMGR_CORE_EMAC1_AXI_DISABLE_CLR_MSK    0x7fffffff
/* The reset value of the ALT_SYSMGR_CORE_EMAC1_AXI_DISABLE register field. */
#define ALT_SYSMGR_CORE_EMAC1_AXI_DISABLE_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC1_AXI_DISABLE field value from a register. */
#define ALT_SYSMGR_CORE_EMAC1_AXI_DISABLE_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_SYSMGR_CORE_EMAC1_AXI_DISABLE register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC1_AXI_DISABLE_SET(value) (((value) << 31) & 0x80000000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_EMAC1.
 */
struct ALT_SYSMGR_CORE_EMAC1_s
{
    volatile uint32_t  phy_intf_sel        :  2;  /* ALT_SYSMGR_CORE_EMAC1_PHY_INTF_SEL */
    uint32_t                               :  6;  /* *UNDEFINED* */
    volatile uint32_t  ptp_ref_sel         :  1;  /* ALT_SYSMGR_CORE_EMAC1_PTP_REF_SEL */
    uint32_t                               :  3;  /* *UNDEFINED* */
    volatile uint32_t  app_clk_sel         :  1;  /* ALT_SYSMGR_CORE_EMAC1_APP_CLK_SEL */
    uint32_t                               :  3;  /* *UNDEFINED* */
    volatile uint32_t  arcache             :  4;  /* ALT_SYSMGR_CORE_EMAC1_ARCACHE */
    volatile uint32_t  awcache             :  4;  /* ALT_SYSMGR_CORE_EMAC1_AWCACHE */
    volatile uint32_t  arprot              :  3;  /* ALT_SYSMGR_CORE_EMAC1_ARPROT */
    volatile uint32_t  awprot              :  3;  /* ALT_SYSMGR_CORE_EMAC1_AWPROT */
    volatile uint32_t  sbd_data_endianness :  1;  /* ALT_SYSMGR_CORE_EMAC1_SBD_DATA_ENDIANNESS */
    volatile uint32_t  axi_disable         :  1;  /* ALT_SYSMGR_CORE_EMAC1_AXI_DISABLE */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_EMAC1. */
typedef struct ALT_SYSMGR_CORE_EMAC1_s  ALT_SYSMGR_CORE_EMAC1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_EMAC1 register. */
#define ALT_SYSMGR_CORE_EMAC1_RESET       0x12000003
/* The byte offset of the ALT_SYSMGR_CORE_EMAC1 register from the beginning of the component. */
#define ALT_SYSMGR_CORE_EMAC1_OFST        0x48

/*
 * Register : Control Register - emac2
 * 
 * Registers used by the EMAC. All fields are reset by a cold or warm reset.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                              
 * :--------|:-------|:------|:------------------------------------------
 *  [1:0]   | RW     | 0x3   | ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL       
 *  [7:2]   | ???    | 0x0   | *UNDEFINED*                              
 *  [8]     | RW     | 0x0   | ALT_SYSMGR_CORE_EMAC2_PTP_REF_SEL        
 *  [11:9]  | ???    | 0x0   | *UNDEFINED*                              
 *  [12]    | RW     | 0x0   | ALT_SYSMGR_CORE_EMAC2_APP_CLK_SEL        
 *  [15:13] | ???    | 0x0   | *UNDEFINED*                              
 *  [19:16] | RW     | 0x0   | ALT_SYSMGR_CORE_EMAC2_ARCACHE            
 *  [23:20] | RW     | 0x0   | ALT_SYSMGR_CORE_EMAC2_AWCACHE            
 *  [26:24] | RW     | 0x2   | ALT_SYSMGR_CORE_EMAC2_ARPROT             
 *  [29:27] | RW     | 0x2   | ALT_SYSMGR_CORE_EMAC2_AWPROT             
 *  [30]    | RW     | 0x0   | ALT_SYSMGR_CORE_EMAC2_SBD_DATA_ENDIANNESS
 *  [31]    | RW     | 0x0   | ALT_SYSMGR_CORE_EMAC2_AXI_DISABLE        
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
 *  Enum                                          | Value | Description
 * :----------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL_E_GMII_MII | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL_E_RGMII    | 0x1   |            
 *  ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL_E_RMII     | 0x2   |            
 *  ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL_E_RESET    | 0x3   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL_E_GMII_MII   0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL_E_RGMII      0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL_E_RMII       0x2
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL_E_RESET      0x3

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL_MSB        1
/* The width in bits of the ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL_WIDTH      2
/* The mask used to set the ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL register field value. */
#define ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL_SET_MSK    0x00000003
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL register field value. */
#define ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL_CLR_MSK    0xfffffffc
/* The reset value of the ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL_RESET      0x3
/* Extracts the ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL field value from a register. */
#define ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL_SET(value) (((value) << 0) & 0x00000003)

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
 *  Enum                                         | Value | Description
 * :---------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC2_PTP_REF_SEL_E_INTERNAL | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC2_PTP_REF_SEL_E_EXTERNAL | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_PTP_REF_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_PTP_REF_SEL_E_INTERNAL    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_PTP_REF_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_PTP_REF_SEL_E_EXTERNAL    0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC2_PTP_REF_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC2_PTP_REF_SEL_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC2_PTP_REF_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC2_PTP_REF_SEL_MSB        8
/* The width in bits of the ALT_SYSMGR_CORE_EMAC2_PTP_REF_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC2_PTP_REF_SEL_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_EMAC2_PTP_REF_SEL register field value. */
#define ALT_SYSMGR_CORE_EMAC2_PTP_REF_SEL_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC2_PTP_REF_SEL register field value. */
#define ALT_SYSMGR_CORE_EMAC2_PTP_REF_SEL_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_CORE_EMAC2_PTP_REF_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC2_PTP_REF_SEL_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC2_PTP_REF_SEL field value from a register. */
#define ALT_SYSMGR_CORE_EMAC2_PTP_REF_SEL_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_CORE_EMAC2_PTP_REF_SEL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC2_PTP_REF_SEL_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : app_clk_sel
 * 
 * Selects the source of the Application clock for the datapath to either l4_mp_clk
 * for normal Baum operation or to f2s_ap_clk if the switch interface is enabled to
 * the FPGA fabric.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                           | Value | Description
 * :-----------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC2_APP_CLK_SEL_E_L4_MP_CLK  | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC2_APP_CLK_SEL_E_F2S_AP_CLK | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_APP_CLK_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_APP_CLK_SEL_E_L4_MP_CLK   0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_APP_CLK_SEL
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_APP_CLK_SEL_E_F2S_AP_CLK  0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC2_APP_CLK_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC2_APP_CLK_SEL_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC2_APP_CLK_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC2_APP_CLK_SEL_MSB        12
/* The width in bits of the ALT_SYSMGR_CORE_EMAC2_APP_CLK_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC2_APP_CLK_SEL_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_EMAC2_APP_CLK_SEL register field value. */
#define ALT_SYSMGR_CORE_EMAC2_APP_CLK_SEL_SET_MSK    0x00001000
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC2_APP_CLK_SEL register field value. */
#define ALT_SYSMGR_CORE_EMAC2_APP_CLK_SEL_CLR_MSK    0xffffefff
/* The reset value of the ALT_SYSMGR_CORE_EMAC2_APP_CLK_SEL register field. */
#define ALT_SYSMGR_CORE_EMAC2_APP_CLK_SEL_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC2_APP_CLK_SEL field value from a register. */
#define ALT_SYSMGR_CORE_EMAC2_APP_CLK_SEL_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SYSMGR_CORE_EMAC2_APP_CLK_SEL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC2_APP_CLK_SEL_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : arcache
 * 
 * Specifies the values of the 2 EMAC ARCACHE signals.
 * 
 * The field array index corresponds to the EMAC index.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                 | Value | Description
 * :-----------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_NONCACHE_NONBUFF     | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_BUFF                 | 0x1   |            
 *  ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_CACHE_NONALLOC       | 0x2   |            
 *  ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_CACHE_BUFF_NONALLOC  | 0x3   |            
 *  ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_RESERVED1            | 0x4   |            
 *  ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_RESERVED2            | 0x5   |            
 *  ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_CACHE_WRTHRU_RDALLOC | 0x6   |            
 *  ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_CACHE_WRBACK_RDALLOC | 0x7   |            
 *  ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_RESERVED3            | 0x8   |            
 *  ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_RESERVED4            | 0x9   |            
 *  ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_CACHE_WRTHRU_WRALLOC | 0xa   |            
 *  ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_CACHE_WRBACK_WRALLOC | 0xb   |            
 *  ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_RESERVED5            | 0xc   |            
 *  ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_RESERVED6            | 0xd   |            
 *  ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_CACHE_WRTHRU_ALLOC   | 0xe   |            
 *  ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_CACHE_WRBACK_ALLOC   | 0xf   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_NONCACHE_NONBUFF        0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_BUFF                    0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_CACHE_NONALLOC          0x2
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_CACHE_BUFF_NONALLOC     0x3
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_RESERVED1               0x4
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_RESERVED2               0x5
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_CACHE_WRTHRU_RDALLOC    0x6
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_CACHE_WRBACK_RDALLOC    0x7
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_RESERVED3               0x8
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_RESERVED4               0x9
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_CACHE_WRTHRU_WRALLOC    0xa
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_CACHE_WRBACK_WRALLOC    0xb
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_RESERVED5               0xc
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_RESERVED6               0xd
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_CACHE_WRTHRU_ALLOC      0xe
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_ARCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_ARCACHE_E_CACHE_WRBACK_ALLOC      0xf

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC2_ARCACHE register field. */
#define ALT_SYSMGR_CORE_EMAC2_ARCACHE_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC2_ARCACHE register field. */
#define ALT_SYSMGR_CORE_EMAC2_ARCACHE_MSB        19
/* The width in bits of the ALT_SYSMGR_CORE_EMAC2_ARCACHE register field. */
#define ALT_SYSMGR_CORE_EMAC2_ARCACHE_WIDTH      4
/* The mask used to set the ALT_SYSMGR_CORE_EMAC2_ARCACHE register field value. */
#define ALT_SYSMGR_CORE_EMAC2_ARCACHE_SET_MSK    0x000f0000
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC2_ARCACHE register field value. */
#define ALT_SYSMGR_CORE_EMAC2_ARCACHE_CLR_MSK    0xfff0ffff
/* The reset value of the ALT_SYSMGR_CORE_EMAC2_ARCACHE register field. */
#define ALT_SYSMGR_CORE_EMAC2_ARCACHE_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC2_ARCACHE field value from a register. */
#define ALT_SYSMGR_CORE_EMAC2_ARCACHE_GET(value) (((value) & 0x000f0000) >> 16)
/* Produces a ALT_SYSMGR_CORE_EMAC2_ARCACHE register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC2_ARCACHE_SET(value) (((value) << 16) & 0x000f0000)

/*
 * Field : awcache
 * 
 * Specifies the values of the 2 EMAC AWCACHE signals.
 * 
 * The field array index corresponds to the EMAC index.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                 | Value | Description
 * :-----------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_NONCACHE_NONBUFF     | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_BUFF                 | 0x1   |            
 *  ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_CACHE_NONALLOC       | 0x2   |            
 *  ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_CACHE_BUFF_NONALLOC  | 0x3   |            
 *  ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_RESERVED1            | 0x4   |            
 *  ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_RESERVED2            | 0x5   |            
 *  ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_CACHE_WRTHRU_RDALLOC | 0x6   |            
 *  ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_CACHE_WRBACK_RDALLOC | 0x7   |            
 *  ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_RESERVED3            | 0x8   |            
 *  ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_RESERVED4            | 0x9   |            
 *  ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_CACHE_WRTHRU_WRALLOC | 0xa   |            
 *  ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_CACHE_WRBACK_WRALLOC | 0xb   |            
 *  ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_RESERVED5            | 0xc   |            
 *  ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_RESERVED6            | 0xd   |            
 *  ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_CACHE_WRTHRU_ALLOC   | 0xe   |            
 *  ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_CACHE_WRBACK_ALLOC   | 0xf   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_NONCACHE_NONBUFF        0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_BUFF                    0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_CACHE_NONALLOC          0x2
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_CACHE_BUFF_NONALLOC     0x3
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_RESERVED1               0x4
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_RESERVED2               0x5
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_CACHE_WRTHRU_RDALLOC    0x6
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_CACHE_WRBACK_RDALLOC    0x7
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_RESERVED3               0x8
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_RESERVED4               0x9
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_CACHE_WRTHRU_WRALLOC    0xa
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_CACHE_WRBACK_WRALLOC    0xb
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_RESERVED5               0xc
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_RESERVED6               0xd
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_CACHE_WRTHRU_ALLOC      0xe
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_AWCACHE
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_AWCACHE_E_CACHE_WRBACK_ALLOC      0xf

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC2_AWCACHE register field. */
#define ALT_SYSMGR_CORE_EMAC2_AWCACHE_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC2_AWCACHE register field. */
#define ALT_SYSMGR_CORE_EMAC2_AWCACHE_MSB        23
/* The width in bits of the ALT_SYSMGR_CORE_EMAC2_AWCACHE register field. */
#define ALT_SYSMGR_CORE_EMAC2_AWCACHE_WIDTH      4
/* The mask used to set the ALT_SYSMGR_CORE_EMAC2_AWCACHE register field value. */
#define ALT_SYSMGR_CORE_EMAC2_AWCACHE_SET_MSK    0x00f00000
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC2_AWCACHE register field value. */
#define ALT_SYSMGR_CORE_EMAC2_AWCACHE_CLR_MSK    0xff0fffff
/* The reset value of the ALT_SYSMGR_CORE_EMAC2_AWCACHE register field. */
#define ALT_SYSMGR_CORE_EMAC2_AWCACHE_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC2_AWCACHE field value from a register. */
#define ALT_SYSMGR_CORE_EMAC2_AWCACHE_GET(value) (((value) & 0x00f00000) >> 20)
/* Produces a ALT_SYSMGR_CORE_EMAC2_AWCACHE register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC2_AWCACHE_SET(value) (((value) << 20) & 0x00f00000)

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
 *  Enum                                                | Value | Description
 * :----------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC2_ARPROT_E_SECURE_NORMAL        | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC2_ARPROT_E_SECURE_PRIVILEGED    | 0x1   |            
 *  ALT_SYSMGR_CORE_EMAC2_ARPROT_E_NONSECURE_NORMAL     | 0x2   |            
 *  ALT_SYSMGR_CORE_EMAC2_ARPROT_E_NONSECURE_PRIVILEGED | 0x3   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_ARPROT
 * 
 * Secure Normal(non-privileged) access
 */
#define ALT_SYSMGR_CORE_EMAC2_ARPROT_E_SECURE_NORMAL        0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_ARPROT
 * 
 * Secure Privileged access
 */
#define ALT_SYSMGR_CORE_EMAC2_ARPROT_E_SECURE_PRIVILEGED    0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_ARPROT
 * 
 * Non-Secure Normal(non-privileged) access
 */
#define ALT_SYSMGR_CORE_EMAC2_ARPROT_E_NONSECURE_NORMAL     0x2
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_ARPROT
 * 
 * Non-Secure Privileged access
 */
#define ALT_SYSMGR_CORE_EMAC2_ARPROT_E_NONSECURE_PRIVILEGED 0x3

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC2_ARPROT register field. */
#define ALT_SYSMGR_CORE_EMAC2_ARPROT_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC2_ARPROT register field. */
#define ALT_SYSMGR_CORE_EMAC2_ARPROT_MSB        26
/* The width in bits of the ALT_SYSMGR_CORE_EMAC2_ARPROT register field. */
#define ALT_SYSMGR_CORE_EMAC2_ARPROT_WIDTH      3
/* The mask used to set the ALT_SYSMGR_CORE_EMAC2_ARPROT register field value. */
#define ALT_SYSMGR_CORE_EMAC2_ARPROT_SET_MSK    0x07000000
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC2_ARPROT register field value. */
#define ALT_SYSMGR_CORE_EMAC2_ARPROT_CLR_MSK    0xf8ffffff
/* The reset value of the ALT_SYSMGR_CORE_EMAC2_ARPROT register field. */
#define ALT_SYSMGR_CORE_EMAC2_ARPROT_RESET      0x2
/* Extracts the ALT_SYSMGR_CORE_EMAC2_ARPROT field value from a register. */
#define ALT_SYSMGR_CORE_EMAC2_ARPROT_GET(value) (((value) & 0x07000000) >> 24)
/* Produces a ALT_SYSMGR_CORE_EMAC2_ARPROT register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC2_ARPROT_SET(value) (((value) << 24) & 0x07000000)

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
 *  Enum                                                | Value | Description
 * :----------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC2_AWPROT_E_SECURE_NORMAL        | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC2_AWPROT_E_SECURE_PRIVILEGED    | 0x1   |            
 *  ALT_SYSMGR_CORE_EMAC2_AWPROT_E_NONSECURE_NORMAL     | 0x2   |            
 *  ALT_SYSMGR_CORE_EMAC2_AWPROT_E_NONSECURE_PRIVILEGED | 0x3   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_AWPROT
 * 
 * Secure Normal(non-privileged) access
 */
#define ALT_SYSMGR_CORE_EMAC2_AWPROT_E_SECURE_NORMAL        0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_AWPROT
 * 
 * Secure Privileged access
 */
#define ALT_SYSMGR_CORE_EMAC2_AWPROT_E_SECURE_PRIVILEGED    0x1
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_AWPROT
 * 
 * Non-Secure Normal(non-privileged) access
 */
#define ALT_SYSMGR_CORE_EMAC2_AWPROT_E_NONSECURE_NORMAL     0x2
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_AWPROT
 * 
 * Non-Secure Privileged access
 */
#define ALT_SYSMGR_CORE_EMAC2_AWPROT_E_NONSECURE_PRIVILEGED 0x3

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC2_AWPROT register field. */
#define ALT_SYSMGR_CORE_EMAC2_AWPROT_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC2_AWPROT register field. */
#define ALT_SYSMGR_CORE_EMAC2_AWPROT_MSB        29
/* The width in bits of the ALT_SYSMGR_CORE_EMAC2_AWPROT register field. */
#define ALT_SYSMGR_CORE_EMAC2_AWPROT_WIDTH      3
/* The mask used to set the ALT_SYSMGR_CORE_EMAC2_AWPROT register field value. */
#define ALT_SYSMGR_CORE_EMAC2_AWPROT_SET_MSK    0x38000000
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC2_AWPROT register field value. */
#define ALT_SYSMGR_CORE_EMAC2_AWPROT_CLR_MSK    0xc7ffffff
/* The reset value of the ALT_SYSMGR_CORE_EMAC2_AWPROT register field. */
#define ALT_SYSMGR_CORE_EMAC2_AWPROT_RESET      0x2
/* Extracts the ALT_SYSMGR_CORE_EMAC2_AWPROT field value from a register. */
#define ALT_SYSMGR_CORE_EMAC2_AWPROT_GET(value) (((value) & 0x38000000) >> 27)
/* Produces a ALT_SYSMGR_CORE_EMAC2_AWPROT register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC2_AWPROT_SET(value) (((value) << 27) & 0x38000000)

/*
 * Field : sbd_data_endianness
 * 
 * Specifies the endianness of the EMAC DMA transfers.
 * 
 * The field array index corresponds to the EMAC index.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                      | Value | Description
 * :----------------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_EMAC2_SBD_DATA_ENDIANNESS_E_LITTLE_ENDIAN | 0x0   |            
 *  ALT_SYSMGR_CORE_EMAC2_SBD_DATA_ENDIANNESS_E_BIG_ENDIAN    | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_SBD_DATA_ENDIANNESS
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_SBD_DATA_ENDIANNESS_E_LITTLE_ENDIAN   0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_EMAC2_SBD_DATA_ENDIANNESS
 * 
 */
#define ALT_SYSMGR_CORE_EMAC2_SBD_DATA_ENDIANNESS_E_BIG_ENDIAN      0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC2_SBD_DATA_ENDIANNESS register field. */
#define ALT_SYSMGR_CORE_EMAC2_SBD_DATA_ENDIANNESS_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC2_SBD_DATA_ENDIANNESS register field. */
#define ALT_SYSMGR_CORE_EMAC2_SBD_DATA_ENDIANNESS_MSB        30
/* The width in bits of the ALT_SYSMGR_CORE_EMAC2_SBD_DATA_ENDIANNESS register field. */
#define ALT_SYSMGR_CORE_EMAC2_SBD_DATA_ENDIANNESS_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_EMAC2_SBD_DATA_ENDIANNESS register field value. */
#define ALT_SYSMGR_CORE_EMAC2_SBD_DATA_ENDIANNESS_SET_MSK    0x40000000
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC2_SBD_DATA_ENDIANNESS register field value. */
#define ALT_SYSMGR_CORE_EMAC2_SBD_DATA_ENDIANNESS_CLR_MSK    0xbfffffff
/* The reset value of the ALT_SYSMGR_CORE_EMAC2_SBD_DATA_ENDIANNESS register field. */
#define ALT_SYSMGR_CORE_EMAC2_SBD_DATA_ENDIANNESS_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC2_SBD_DATA_ENDIANNESS field value from a register. */
#define ALT_SYSMGR_CORE_EMAC2_SBD_DATA_ENDIANNESS_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_SYSMGR_CORE_EMAC2_SBD_DATA_ENDIANNESS register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC2_SBD_DATA_ENDIANNESS_SET(value) (((value) << 30) & 0x40000000)

/*
 * Field : axi_disable
 * 
 * AXI Disable
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC2_AXI_DISABLE register field. */
#define ALT_SYSMGR_CORE_EMAC2_AXI_DISABLE_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC2_AXI_DISABLE register field. */
#define ALT_SYSMGR_CORE_EMAC2_AXI_DISABLE_MSB        31
/* The width in bits of the ALT_SYSMGR_CORE_EMAC2_AXI_DISABLE register field. */
#define ALT_SYSMGR_CORE_EMAC2_AXI_DISABLE_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_EMAC2_AXI_DISABLE register field value. */
#define ALT_SYSMGR_CORE_EMAC2_AXI_DISABLE_SET_MSK    0x80000000
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC2_AXI_DISABLE register field value. */
#define ALT_SYSMGR_CORE_EMAC2_AXI_DISABLE_CLR_MSK    0x7fffffff
/* The reset value of the ALT_SYSMGR_CORE_EMAC2_AXI_DISABLE register field. */
#define ALT_SYSMGR_CORE_EMAC2_AXI_DISABLE_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC2_AXI_DISABLE field value from a register. */
#define ALT_SYSMGR_CORE_EMAC2_AXI_DISABLE_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_SYSMGR_CORE_EMAC2_AXI_DISABLE register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC2_AXI_DISABLE_SET(value) (((value) << 31) & 0x80000000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_EMAC2.
 */
struct ALT_SYSMGR_CORE_EMAC2_s
{
    volatile uint32_t  phy_intf_sel        :  2;  /* ALT_SYSMGR_CORE_EMAC2_PHY_INTF_SEL */
    uint32_t                               :  6;  /* *UNDEFINED* */
    volatile uint32_t  ptp_ref_sel         :  1;  /* ALT_SYSMGR_CORE_EMAC2_PTP_REF_SEL */
    uint32_t                               :  3;  /* *UNDEFINED* */
    volatile uint32_t  app_clk_sel         :  1;  /* ALT_SYSMGR_CORE_EMAC2_APP_CLK_SEL */
    uint32_t                               :  3;  /* *UNDEFINED* */
    volatile uint32_t  arcache             :  4;  /* ALT_SYSMGR_CORE_EMAC2_ARCACHE */
    volatile uint32_t  awcache             :  4;  /* ALT_SYSMGR_CORE_EMAC2_AWCACHE */
    volatile uint32_t  arprot              :  3;  /* ALT_SYSMGR_CORE_EMAC2_ARPROT */
    volatile uint32_t  awprot              :  3;  /* ALT_SYSMGR_CORE_EMAC2_AWPROT */
    volatile uint32_t  sbd_data_endianness :  1;  /* ALT_SYSMGR_CORE_EMAC2_SBD_DATA_ENDIANNESS */
    volatile uint32_t  axi_disable         :  1;  /* ALT_SYSMGR_CORE_EMAC2_AXI_DISABLE */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_EMAC2. */
typedef struct ALT_SYSMGR_CORE_EMAC2_s  ALT_SYSMGR_CORE_EMAC2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_EMAC2 register. */
#define ALT_SYSMGR_CORE_EMAC2_RESET       0x12000003
/* The byte offset of the ALT_SYSMGR_CORE_EMAC2 register from the beginning of the component. */
#define ALT_SYSMGR_CORE_EMAC2_OFST        0x4c

/*
 * Register : emac0_ace
 * 
 * The EMAC0 ACE-lite control register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                       
 * :--------|:-------|:------|:-----------------------------------
 *  [1:0]   | RW     | 0x3   | ALT_SYSMGR_CORE_EMAC0_ACE_ARDOMAIN
 *  [3:2]   | ???    | 0x0   | *UNDEFINED*                       
 *  [5:4]   | RW     | 0x3   | ALT_SYSMGR_CORE_EMAC0_ACE_AWDOMAIN
 *  [7:6]   | ???    | 0x0   | *UNDEFINED*                       
 *  [17:8]  | RW     | 0x0   | ALT_SYSMGR_CORE_EMAC0_ACE_ARSID   
 *  [19:18] | ???    | 0x0   | *UNDEFINED*                       
 *  [29:20] | RW     | 0x0   | ALT_SYSMGR_CORE_EMAC0_ACE_AWSID   
 *  [31:30] | ???    | 0x0   | *UNDEFINED*                       
 * 
 */
/*
 * Field : ardomain
 * 
 * ar domain
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC0_ACE_ARDOMAIN register field. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_ARDOMAIN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC0_ACE_ARDOMAIN register field. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_ARDOMAIN_MSB        1
/* The width in bits of the ALT_SYSMGR_CORE_EMAC0_ACE_ARDOMAIN register field. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_ARDOMAIN_WIDTH      2
/* The mask used to set the ALT_SYSMGR_CORE_EMAC0_ACE_ARDOMAIN register field value. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_ARDOMAIN_SET_MSK    0x00000003
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC0_ACE_ARDOMAIN register field value. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_ARDOMAIN_CLR_MSK    0xfffffffc
/* The reset value of the ALT_SYSMGR_CORE_EMAC0_ACE_ARDOMAIN register field. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_ARDOMAIN_RESET      0x3
/* Extracts the ALT_SYSMGR_CORE_EMAC0_ACE_ARDOMAIN field value from a register. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_ARDOMAIN_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_SYSMGR_CORE_EMAC0_ACE_ARDOMAIN register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_ARDOMAIN_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : awdomain
 * 
 * aw domain
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC0_ACE_AWDOMAIN register field. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_AWDOMAIN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC0_ACE_AWDOMAIN register field. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_AWDOMAIN_MSB        5
/* The width in bits of the ALT_SYSMGR_CORE_EMAC0_ACE_AWDOMAIN register field. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_AWDOMAIN_WIDTH      2
/* The mask used to set the ALT_SYSMGR_CORE_EMAC0_ACE_AWDOMAIN register field value. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_AWDOMAIN_SET_MSK    0x00000030
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC0_ACE_AWDOMAIN register field value. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_AWDOMAIN_CLR_MSK    0xffffffcf
/* The reset value of the ALT_SYSMGR_CORE_EMAC0_ACE_AWDOMAIN register field. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_AWDOMAIN_RESET      0x3
/* Extracts the ALT_SYSMGR_CORE_EMAC0_ACE_AWDOMAIN field value from a register. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_AWDOMAIN_GET(value) (((value) & 0x00000030) >> 4)
/* Produces a ALT_SYSMGR_CORE_EMAC0_ACE_AWDOMAIN register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_AWDOMAIN_SET(value) (((value) << 4) & 0x00000030)

/*
 * Field : arsid
 * 
 * arsid
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC0_ACE_ARSID register field. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_ARSID_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC0_ACE_ARSID register field. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_ARSID_MSB        17
/* The width in bits of the ALT_SYSMGR_CORE_EMAC0_ACE_ARSID register field. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_ARSID_WIDTH      10
/* The mask used to set the ALT_SYSMGR_CORE_EMAC0_ACE_ARSID register field value. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_ARSID_SET_MSK    0x0003ff00
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC0_ACE_ARSID register field value. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_ARSID_CLR_MSK    0xfffc00ff
/* The reset value of the ALT_SYSMGR_CORE_EMAC0_ACE_ARSID register field. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_ARSID_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC0_ACE_ARSID field value from a register. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_ARSID_GET(value) (((value) & 0x0003ff00) >> 8)
/* Produces a ALT_SYSMGR_CORE_EMAC0_ACE_ARSID register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_ARSID_SET(value) (((value) << 8) & 0x0003ff00)

/*
 * Field : awsid
 * 
 * awsid
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC0_ACE_AWSID register field. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_AWSID_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC0_ACE_AWSID register field. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_AWSID_MSB        29
/* The width in bits of the ALT_SYSMGR_CORE_EMAC0_ACE_AWSID register field. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_AWSID_WIDTH      10
/* The mask used to set the ALT_SYSMGR_CORE_EMAC0_ACE_AWSID register field value. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_AWSID_SET_MSK    0x3ff00000
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC0_ACE_AWSID register field value. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_AWSID_CLR_MSK    0xc00fffff
/* The reset value of the ALT_SYSMGR_CORE_EMAC0_ACE_AWSID register field. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_AWSID_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC0_ACE_AWSID field value from a register. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_AWSID_GET(value) (((value) & 0x3ff00000) >> 20)
/* Produces a ALT_SYSMGR_CORE_EMAC0_ACE_AWSID register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_AWSID_SET(value) (((value) << 20) & 0x3ff00000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_EMAC0_ACE.
 */
struct ALT_SYSMGR_CORE_EMAC0_ACE_s
{
    volatile uint32_t  ardomain :  2;  /* ALT_SYSMGR_CORE_EMAC0_ACE_ARDOMAIN */
    uint32_t                    :  2;  /* *UNDEFINED* */
    volatile uint32_t  awdomain :  2;  /* ALT_SYSMGR_CORE_EMAC0_ACE_AWDOMAIN */
    uint32_t                    :  2;  /* *UNDEFINED* */
    volatile uint32_t  arsid    : 10;  /* ALT_SYSMGR_CORE_EMAC0_ACE_ARSID */
    uint32_t                    :  2;  /* *UNDEFINED* */
    volatile uint32_t  awsid    : 10;  /* ALT_SYSMGR_CORE_EMAC0_ACE_AWSID */
    uint32_t                    :  2;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_EMAC0_ACE. */
typedef struct ALT_SYSMGR_CORE_EMAC0_ACE_s  ALT_SYSMGR_CORE_EMAC0_ACE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_EMAC0_ACE register. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_RESET       0x00000033
/* The byte offset of the ALT_SYSMGR_CORE_EMAC0_ACE register from the beginning of the component. */
#define ALT_SYSMGR_CORE_EMAC0_ACE_OFST        0x50

/*
 * Register : emac1_ace
 * 
 * The EMAC1 ACE-lite control register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                       
 * :--------|:-------|:------|:-----------------------------------
 *  [1:0]   | RW     | 0x3   | ALT_SYSMGR_CORE_EMAC1_ACE_ARDOMAIN
 *  [3:2]   | ???    | 0x0   | *UNDEFINED*                       
 *  [5:4]   | RW     | 0x3   | ALT_SYSMGR_CORE_EMAC1_ACE_AWDOMAIN
 *  [7:6]   | ???    | 0x0   | *UNDEFINED*                       
 *  [17:8]  | RW     | 0x0   | ALT_SYSMGR_CORE_EMAC1_ACE_ARSID   
 *  [19:18] | ???    | 0x0   | *UNDEFINED*                       
 *  [29:20] | RW     | 0x0   | ALT_SYSMGR_CORE_EMAC1_ACE_AWSID   
 *  [31:30] | ???    | 0x0   | *UNDEFINED*                       
 * 
 */
/*
 * Field : ardomain
 * 
 * ar domain register
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC1_ACE_ARDOMAIN register field. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_ARDOMAIN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC1_ACE_ARDOMAIN register field. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_ARDOMAIN_MSB        1
/* The width in bits of the ALT_SYSMGR_CORE_EMAC1_ACE_ARDOMAIN register field. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_ARDOMAIN_WIDTH      2
/* The mask used to set the ALT_SYSMGR_CORE_EMAC1_ACE_ARDOMAIN register field value. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_ARDOMAIN_SET_MSK    0x00000003
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC1_ACE_ARDOMAIN register field value. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_ARDOMAIN_CLR_MSK    0xfffffffc
/* The reset value of the ALT_SYSMGR_CORE_EMAC1_ACE_ARDOMAIN register field. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_ARDOMAIN_RESET      0x3
/* Extracts the ALT_SYSMGR_CORE_EMAC1_ACE_ARDOMAIN field value from a register. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_ARDOMAIN_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_SYSMGR_CORE_EMAC1_ACE_ARDOMAIN register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_ARDOMAIN_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : awdomain
 * 
 * aw domain register
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC1_ACE_AWDOMAIN register field. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_AWDOMAIN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC1_ACE_AWDOMAIN register field. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_AWDOMAIN_MSB        5
/* The width in bits of the ALT_SYSMGR_CORE_EMAC1_ACE_AWDOMAIN register field. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_AWDOMAIN_WIDTH      2
/* The mask used to set the ALT_SYSMGR_CORE_EMAC1_ACE_AWDOMAIN register field value. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_AWDOMAIN_SET_MSK    0x00000030
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC1_ACE_AWDOMAIN register field value. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_AWDOMAIN_CLR_MSK    0xffffffcf
/* The reset value of the ALT_SYSMGR_CORE_EMAC1_ACE_AWDOMAIN register field. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_AWDOMAIN_RESET      0x3
/* Extracts the ALT_SYSMGR_CORE_EMAC1_ACE_AWDOMAIN field value from a register. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_AWDOMAIN_GET(value) (((value) & 0x00000030) >> 4)
/* Produces a ALT_SYSMGR_CORE_EMAC1_ACE_AWDOMAIN register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_AWDOMAIN_SET(value) (((value) << 4) & 0x00000030)

/*
 * Field : arsid
 * 
 * arsid register
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC1_ACE_ARSID register field. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_ARSID_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC1_ACE_ARSID register field. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_ARSID_MSB        17
/* The width in bits of the ALT_SYSMGR_CORE_EMAC1_ACE_ARSID register field. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_ARSID_WIDTH      10
/* The mask used to set the ALT_SYSMGR_CORE_EMAC1_ACE_ARSID register field value. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_ARSID_SET_MSK    0x0003ff00
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC1_ACE_ARSID register field value. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_ARSID_CLR_MSK    0xfffc00ff
/* The reset value of the ALT_SYSMGR_CORE_EMAC1_ACE_ARSID register field. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_ARSID_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC1_ACE_ARSID field value from a register. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_ARSID_GET(value) (((value) & 0x0003ff00) >> 8)
/* Produces a ALT_SYSMGR_CORE_EMAC1_ACE_ARSID register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_ARSID_SET(value) (((value) << 8) & 0x0003ff00)

/*
 * Field : awsid
 * 
 * awsid register
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC1_ACE_AWSID register field. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_AWSID_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC1_ACE_AWSID register field. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_AWSID_MSB        29
/* The width in bits of the ALT_SYSMGR_CORE_EMAC1_ACE_AWSID register field. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_AWSID_WIDTH      10
/* The mask used to set the ALT_SYSMGR_CORE_EMAC1_ACE_AWSID register field value. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_AWSID_SET_MSK    0x3ff00000
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC1_ACE_AWSID register field value. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_AWSID_CLR_MSK    0xc00fffff
/* The reset value of the ALT_SYSMGR_CORE_EMAC1_ACE_AWSID register field. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_AWSID_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC1_ACE_AWSID field value from a register. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_AWSID_GET(value) (((value) & 0x3ff00000) >> 20)
/* Produces a ALT_SYSMGR_CORE_EMAC1_ACE_AWSID register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_AWSID_SET(value) (((value) << 20) & 0x3ff00000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_EMAC1_ACE.
 */
struct ALT_SYSMGR_CORE_EMAC1_ACE_s
{
    volatile uint32_t  ardomain :  2;  /* ALT_SYSMGR_CORE_EMAC1_ACE_ARDOMAIN */
    uint32_t                    :  2;  /* *UNDEFINED* */
    volatile uint32_t  awdomain :  2;  /* ALT_SYSMGR_CORE_EMAC1_ACE_AWDOMAIN */
    uint32_t                    :  2;  /* *UNDEFINED* */
    volatile uint32_t  arsid    : 10;  /* ALT_SYSMGR_CORE_EMAC1_ACE_ARSID */
    uint32_t                    :  2;  /* *UNDEFINED* */
    volatile uint32_t  awsid    : 10;  /* ALT_SYSMGR_CORE_EMAC1_ACE_AWSID */
    uint32_t                    :  2;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_EMAC1_ACE. */
typedef struct ALT_SYSMGR_CORE_EMAC1_ACE_s  ALT_SYSMGR_CORE_EMAC1_ACE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_EMAC1_ACE register. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_RESET       0x00000033
/* The byte offset of the ALT_SYSMGR_CORE_EMAC1_ACE register from the beginning of the component. */
#define ALT_SYSMGR_CORE_EMAC1_ACE_OFST        0x54

/*
 * Register : emac2_ace
 * 
 * The EMAC2 ACE-lite control register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                       
 * :--------|:-------|:------|:-----------------------------------
 *  [1:0]   | RW     | 0x3   | ALT_SYSMGR_CORE_EMAC2_ACE_ARDOMAIN
 *  [3:2]   | ???    | 0x0   | *UNDEFINED*                       
 *  [5:4]   | RW     | 0x3   | ALT_SYSMGR_CORE_EMAC2_ACE_AWDOMAIN
 *  [7:6]   | ???    | 0x0   | *UNDEFINED*                       
 *  [17:8]  | RW     | 0x0   | ALT_SYSMGR_CORE_EMAC2_ACE_ARSID   
 *  [19:18] | ???    | 0x0   | *UNDEFINED*                       
 *  [29:20] | RW     | 0x0   | ALT_SYSMGR_CORE_EMAC2_ACE_AWSID   
 *  [31:30] | ???    | 0x0   | *UNDEFINED*                       
 * 
 */
/*
 * Field : ardomain
 * 
 * ar domain register
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC2_ACE_ARDOMAIN register field. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_ARDOMAIN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC2_ACE_ARDOMAIN register field. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_ARDOMAIN_MSB        1
/* The width in bits of the ALT_SYSMGR_CORE_EMAC2_ACE_ARDOMAIN register field. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_ARDOMAIN_WIDTH      2
/* The mask used to set the ALT_SYSMGR_CORE_EMAC2_ACE_ARDOMAIN register field value. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_ARDOMAIN_SET_MSK    0x00000003
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC2_ACE_ARDOMAIN register field value. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_ARDOMAIN_CLR_MSK    0xfffffffc
/* The reset value of the ALT_SYSMGR_CORE_EMAC2_ACE_ARDOMAIN register field. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_ARDOMAIN_RESET      0x3
/* Extracts the ALT_SYSMGR_CORE_EMAC2_ACE_ARDOMAIN field value from a register. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_ARDOMAIN_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_SYSMGR_CORE_EMAC2_ACE_ARDOMAIN register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_ARDOMAIN_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : awdomain
 * 
 * aw domain register
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC2_ACE_AWDOMAIN register field. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_AWDOMAIN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC2_ACE_AWDOMAIN register field. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_AWDOMAIN_MSB        5
/* The width in bits of the ALT_SYSMGR_CORE_EMAC2_ACE_AWDOMAIN register field. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_AWDOMAIN_WIDTH      2
/* The mask used to set the ALT_SYSMGR_CORE_EMAC2_ACE_AWDOMAIN register field value. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_AWDOMAIN_SET_MSK    0x00000030
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC2_ACE_AWDOMAIN register field value. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_AWDOMAIN_CLR_MSK    0xffffffcf
/* The reset value of the ALT_SYSMGR_CORE_EMAC2_ACE_AWDOMAIN register field. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_AWDOMAIN_RESET      0x3
/* Extracts the ALT_SYSMGR_CORE_EMAC2_ACE_AWDOMAIN field value from a register. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_AWDOMAIN_GET(value) (((value) & 0x00000030) >> 4)
/* Produces a ALT_SYSMGR_CORE_EMAC2_ACE_AWDOMAIN register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_AWDOMAIN_SET(value) (((value) << 4) & 0x00000030)

/*
 * Field : arsid
 * 
 * arsid register
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC2_ACE_ARSID register field. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_ARSID_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC2_ACE_ARSID register field. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_ARSID_MSB        17
/* The width in bits of the ALT_SYSMGR_CORE_EMAC2_ACE_ARSID register field. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_ARSID_WIDTH      10
/* The mask used to set the ALT_SYSMGR_CORE_EMAC2_ACE_ARSID register field value. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_ARSID_SET_MSK    0x0003ff00
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC2_ACE_ARSID register field value. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_ARSID_CLR_MSK    0xfffc00ff
/* The reset value of the ALT_SYSMGR_CORE_EMAC2_ACE_ARSID register field. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_ARSID_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC2_ACE_ARSID field value from a register. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_ARSID_GET(value) (((value) & 0x0003ff00) >> 8)
/* Produces a ALT_SYSMGR_CORE_EMAC2_ACE_ARSID register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_ARSID_SET(value) (((value) << 8) & 0x0003ff00)

/*
 * Field : awsid
 * 
 * awsid register
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_EMAC2_ACE_AWSID register field. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_AWSID_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_EMAC2_ACE_AWSID register field. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_AWSID_MSB        29
/* The width in bits of the ALT_SYSMGR_CORE_EMAC2_ACE_AWSID register field. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_AWSID_WIDTH      10
/* The mask used to set the ALT_SYSMGR_CORE_EMAC2_ACE_AWSID register field value. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_AWSID_SET_MSK    0x3ff00000
/* The mask used to clear the ALT_SYSMGR_CORE_EMAC2_ACE_AWSID register field value. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_AWSID_CLR_MSK    0xc00fffff
/* The reset value of the ALT_SYSMGR_CORE_EMAC2_ACE_AWSID register field. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_AWSID_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_EMAC2_ACE_AWSID field value from a register. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_AWSID_GET(value) (((value) & 0x3ff00000) >> 20)
/* Produces a ALT_SYSMGR_CORE_EMAC2_ACE_AWSID register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_AWSID_SET(value) (((value) << 20) & 0x3ff00000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_EMAC2_ACE.
 */
struct ALT_SYSMGR_CORE_EMAC2_ACE_s
{
    volatile uint32_t  ardomain :  2;  /* ALT_SYSMGR_CORE_EMAC2_ACE_ARDOMAIN */
    uint32_t                    :  2;  /* *UNDEFINED* */
    volatile uint32_t  awdomain :  2;  /* ALT_SYSMGR_CORE_EMAC2_ACE_AWDOMAIN */
    uint32_t                    :  2;  /* *UNDEFINED* */
    volatile uint32_t  arsid    : 10;  /* ALT_SYSMGR_CORE_EMAC2_ACE_ARSID */
    uint32_t                    :  2;  /* *UNDEFINED* */
    volatile uint32_t  awsid    : 10;  /* ALT_SYSMGR_CORE_EMAC2_ACE_AWSID */
    uint32_t                    :  2;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_EMAC2_ACE. */
typedef struct ALT_SYSMGR_CORE_EMAC2_ACE_s  ALT_SYSMGR_CORE_EMAC2_ACE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_EMAC2_ACE register. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_RESET       0x00000033
/* The byte offset of the ALT_SYSMGR_CORE_EMAC2_ACE register from the beginning of the component. */
#define ALT_SYSMGR_CORE_EMAC2_ACE_OFST        0x58

/*
 * Register : nand_axuser
 * 
 * The NAND ACE-lite contrl a(w/r)user register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                       
 * :--------|:-------|:------|:-----------------------------------
 *  [9:0]   | RW     | 0x0   | ALT_SYSMGR_CORE_NAND_AXUSER_AWUSER
 *  [15:10] | ???    | 0x0   | *UNDEFINED*                       
 *  [25:16] | RW     | 0x0   | ALT_SYSMGR_CORE_NAND_AXUSER_ARUSER
 *  [31:26] | ???    | 0x0   | *UNDEFINED*                       
 * 
 */
/*
 * Field : awuser
 * 
 * ar user register sid
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NAND_AXUSER_AWUSER register field. */
#define ALT_SYSMGR_CORE_NAND_AXUSER_AWUSER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NAND_AXUSER_AWUSER register field. */
#define ALT_SYSMGR_CORE_NAND_AXUSER_AWUSER_MSB        9
/* The width in bits of the ALT_SYSMGR_CORE_NAND_AXUSER_AWUSER register field. */
#define ALT_SYSMGR_CORE_NAND_AXUSER_AWUSER_WIDTH      10
/* The mask used to set the ALT_SYSMGR_CORE_NAND_AXUSER_AWUSER register field value. */
#define ALT_SYSMGR_CORE_NAND_AXUSER_AWUSER_SET_MSK    0x000003ff
/* The mask used to clear the ALT_SYSMGR_CORE_NAND_AXUSER_AWUSER register field value. */
#define ALT_SYSMGR_CORE_NAND_AXUSER_AWUSER_CLR_MSK    0xfffffc00
/* The reset value of the ALT_SYSMGR_CORE_NAND_AXUSER_AWUSER register field. */
#define ALT_SYSMGR_CORE_NAND_AXUSER_AWUSER_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_NAND_AXUSER_AWUSER field value from a register. */
#define ALT_SYSMGR_CORE_NAND_AXUSER_AWUSER_GET(value) (((value) & 0x000003ff) >> 0)
/* Produces a ALT_SYSMGR_CORE_NAND_AXUSER_AWUSER register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NAND_AXUSER_AWUSER_SET(value) (((value) << 0) & 0x000003ff)

/*
 * Field : aruser
 * 
 * aw user register sid
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NAND_AXUSER_ARUSER register field. */
#define ALT_SYSMGR_CORE_NAND_AXUSER_ARUSER_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NAND_AXUSER_ARUSER register field. */
#define ALT_SYSMGR_CORE_NAND_AXUSER_ARUSER_MSB        25
/* The width in bits of the ALT_SYSMGR_CORE_NAND_AXUSER_ARUSER register field. */
#define ALT_SYSMGR_CORE_NAND_AXUSER_ARUSER_WIDTH      10
/* The mask used to set the ALT_SYSMGR_CORE_NAND_AXUSER_ARUSER register field value. */
#define ALT_SYSMGR_CORE_NAND_AXUSER_ARUSER_SET_MSK    0x03ff0000
/* The mask used to clear the ALT_SYSMGR_CORE_NAND_AXUSER_ARUSER register field value. */
#define ALT_SYSMGR_CORE_NAND_AXUSER_ARUSER_CLR_MSK    0xfc00ffff
/* The reset value of the ALT_SYSMGR_CORE_NAND_AXUSER_ARUSER register field. */
#define ALT_SYSMGR_CORE_NAND_AXUSER_ARUSER_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_NAND_AXUSER_ARUSER field value from a register. */
#define ALT_SYSMGR_CORE_NAND_AXUSER_ARUSER_GET(value) (((value) & 0x03ff0000) >> 16)
/* Produces a ALT_SYSMGR_CORE_NAND_AXUSER_ARUSER register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NAND_AXUSER_ARUSER_SET(value) (((value) << 16) & 0x03ff0000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_NAND_AXUSER.
 */
struct ALT_SYSMGR_CORE_NAND_AXUSER_s
{
    volatile uint32_t  awuser : 10;  /* ALT_SYSMGR_CORE_NAND_AXUSER_AWUSER */
    uint32_t                  :  6;  /* *UNDEFINED* */
    volatile uint32_t  aruser : 10;  /* ALT_SYSMGR_CORE_NAND_AXUSER_ARUSER */
    uint32_t                  :  6;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_NAND_AXUSER. */
typedef struct ALT_SYSMGR_CORE_NAND_AXUSER_s  ALT_SYSMGR_CORE_NAND_AXUSER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_NAND_AXUSER register. */
#define ALT_SYSMGR_CORE_NAND_AXUSER_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_NAND_AXUSER register from the beginning of the component. */
#define ALT_SYSMGR_CORE_NAND_AXUSER_OFST        0x5c

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
 *  [0]     | RW     | 0x0   | Trace Interface              
 *  [3:1]   | ???    | 0x0   | *UNDEFINED*                  
 *  [4]     | RW     | 0x1   | Trace Interface              
 *  [7:5]   | ???    | 0x0   | *UNDEFINED*                  
 *  [8]     | RW     | 0x1   | Debug APB Interface          
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*                  
 *  [16]    | RW     | 0x1   | STM Event Interface          
 *  [23:17] | ???    | 0x0   | *UNDEFINED*                  
 *  [24]    | RW     | 0x1   | Cross Trigger Interface (CTI)
 *  [31:25] | ???    | 0x0   | *UNDEFINED*                  
 * 
 */
/*
 * Field : Trace Interface - tracein
 * 
 * Gates the isolator of TPIU
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                            | Value | Description
 * :------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN_E_DISABLE | 0x0   |            
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN_E_ENABLE  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN_E_DISABLE 0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN_E_ENABLE  0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN_MSB        0
/* The width in bits of the ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN field value from a register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Trace Interface - traceout
 * 
 * Gates the isolator of CoreSight
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description
 * :-------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT_E_DISABLE | 0x0   |            
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT_E_ENABLE  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT_E_DISABLE    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT_E_ENABLE     0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT_MSB        4
/* The width in bits of the ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT_RESET      0x1
/* Extracts the ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT field value from a register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : Debug APB Interface - dbgapb
 * 
 * Used to disable the debug APB interface. This interface allows the HPS debug
 * logic to communicate with debug APB slaves in the FPGA fabric.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                           | Value | Description
 * :-----------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB_E_DISABLE | 0x0   |            
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB_E_ENABLE  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB_E_DISABLE  0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB_E_ENABLE   0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB_MSB        8
/* The width in bits of the ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB_RESET      0x1
/* Extracts the ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB field value from a register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : STM Event Interface - stmevent
 * 
 * Used to disable the STM event interface. This interface allows logic in the FPGA
 * fabric to trigger events to the STM debug module in the HPS.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description
 * :-------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT_E_DISABLE | 0x0   |            
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT_E_ENABLE  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT_E_DISABLE    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT_E_ENABLE     0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT_MSB        16
/* The width in bits of the ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT_RESET      0x1
/* Extracts the ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT field value from a register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : Cross Trigger Interface (CTI) - ctmtrigger
 * 
 * Used to disable the FPGA Fabric from sending triggers to HPS debug logic.  Note
 * that this doesn't prevent the HPS debug logic from sending triggers to the FPGA
 * Fabric.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                               | Value | Description
 * :---------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER_E_DISABLE | 0x0   |            
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER_E_ENABLE  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER_E_DISABLE  0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER_E_ENABLE   0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER_MSB        24
/* The width in bits of the ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER_SET_MSK    0x01000000
/* The mask used to clear the ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER_CLR_MSK    0xfeffffff
/* The reset value of the ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER_RESET      0x1
/* Extracts the ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER field value from a register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_FPGAINTF_EN_1.
 */
struct ALT_SYSMGR_CORE_FPGAINTF_EN_1_s
{
    volatile uint32_t  tracein    :  1;  /* Trace Interface */
    uint32_t                      :  3;  /* *UNDEFINED* */
    volatile uint32_t  traceout   :  1;  /* Trace Interface */
    uint32_t                      :  3;  /* *UNDEFINED* */
    volatile uint32_t  dbgapb     :  1;  /* Debug APB Interface */
    uint32_t                      :  7;  /* *UNDEFINED* */
    volatile uint32_t  stmevent   :  1;  /* STM Event Interface */
    uint32_t                      :  7;  /* *UNDEFINED* */
    volatile uint32_t  ctmtrigger :  1;  /* Cross Trigger Interface (CTI) */
    uint32_t                      :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_FPGAINTF_EN_1. */
typedef struct ALT_SYSMGR_CORE_FPGAINTF_EN_1_s  ALT_SYSMGR_CORE_FPGAINTF_EN_1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_FPGAINTF_EN_1 register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_RESET       0x01010110
/* The byte offset of the ALT_SYSMGR_CORE_FPGAINTF_EN_1 register from the beginning of the component. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_1_OFST        0x68

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
 *  Enum                                         | Value | Description
 * :---------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND_E_DISABLE | 0x0   |            
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND_E_ENABLE  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND_E_DISABLE    0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND_E_ENABLE     0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND_MSB        4
/* The width in bits of the ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND field value from a register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : SD/MMC Controller Module - sdmmc
 * 
 * Used to disable signals from the FPGA fabric to the SD/MMC controller module
 * that could potentially interfere with its normal operation.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                          | Value | Description
 * :----------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC_E_DISABLE | 0x0   |            
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC_E_ENABLE  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC_E_DISABLE   0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC_E_ENABLE    0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC_MSB        8
/* The width in bits of the ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC field value from a register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC_SET(value) (((value) << 8) & 0x00000100)

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
 *  Enum                                           | Value | Description
 * :-----------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0_E_DISABLE | 0x0   |            
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0_E_ENABLE  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0_E_DISABLE  0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0_E_ENABLE   0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0 register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0 register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0_MSB        16
/* The width in bits of the ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0 register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0 register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0 register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0 register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0 field value from a register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0_SET(value) (((value) << 16) & 0x00010000)

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
 *  Enum                                           | Value | Description
 * :-----------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1_E_DISABLE | 0x0   |            
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1_E_ENABLE  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1_E_DISABLE  0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1_E_ENABLE   0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1 register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1 register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1_MSB        24
/* The width in bits of the ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1 register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1 register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1_SET_MSK    0x01000000
/* The mask used to clear the ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1 register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1_CLR_MSK    0xfeffffff
/* The reset value of the ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1 register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1 field value from a register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1_SET(value) (((value) << 24) & 0x01000000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_FPGAINTF_EN_2.
 */
struct ALT_SYSMGR_CORE_FPGAINTF_EN_2_s
{
    uint32_t                  :  4;  /* *UNDEFINED* */
    volatile uint32_t  nand   :  1;  /* NAND Flash Controller Module */
    uint32_t                  :  3;  /* *UNDEFINED* */
    volatile uint32_t  sdmmc  :  1;  /* SD/MMC Controller Module */
    uint32_t                  :  7;  /* *UNDEFINED* */
    volatile uint32_t  spim_0 :  1;  /* SPI Master Module */
    uint32_t                  :  7;  /* *UNDEFINED* */
    volatile uint32_t  spim_1 :  1;  /* SPI Master Module */
    uint32_t                  :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_FPGAINTF_EN_2. */
typedef struct ALT_SYSMGR_CORE_FPGAINTF_EN_2_s  ALT_SYSMGR_CORE_FPGAINTF_EN_2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_FPGAINTF_EN_2 register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_FPGAINTF_EN_2 register from the beginning of the component. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_2_OFST        0x6c

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
 *  Enum                                           | Value | Description
 * :-----------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_E_DISABLE | 0x0   |            
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_E_ENABLE  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_E_DISABLE  0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_E_ENABLE   0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0 register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0 register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_MSB        0
/* The width in bits of the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0 register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0 register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0 register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0 register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0 field value from a register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : EMAC Module - emac_0_switch
 * 
 * EMAC FPGA interface switch Enable
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                  | Value | Description
 * :------------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH_E_DISABLE | 0x0   |            
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH_E_ENABLE  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH_E_DISABLE   0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH_E_ENABLE    0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH_MSB        4
/* The width in bits of the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH field value from a register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH_SET(value) (((value) << 4) & 0x00000010)

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
 *  Enum                                           | Value | Description
 * :-----------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_E_DISABLE | 0x0   |            
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_E_ENABLE  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_E_DISABLE  0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_E_ENABLE   0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1 register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1 register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_MSB        8
/* The width in bits of the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1 register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1 register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1 register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1 register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1 field value from a register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : EMAC Module - emac_1_switch
 * 
 * EMAC FPGA interface switch Enable
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                  | Value | Description
 * :------------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH_E_DISABLE | 0x0   |            
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH_E_ENABLE  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH_E_DISABLE   0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH_E_ENABLE    0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH_MSB        12
/* The width in bits of the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH_SET_MSK    0x00001000
/* The mask used to clear the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH_CLR_MSK    0xffffefff
/* The reset value of the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH field value from a register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH_SET(value) (((value) << 12) & 0x00001000)

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
 *  Enum                                           | Value | Description
 * :-----------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_E_DISABLE | 0x0   |            
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_E_ENABLE  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_E_DISABLE  0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_E_ENABLE   0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2 register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2 register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_MSB        16
/* The width in bits of the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2 register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2 register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2 register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2 register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2 field value from a register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : EMAC Module - emac_2_switch
 * 
 * EMAC FPGA interface switch Enable
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                                  | Value | Description
 * :------------------------------------------------------|:------|:------------
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH_E_DISABLE | 0x0   |            
 *  ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH_E_ENABLE  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH_E_DISABLE   0x0
/*
 * Enumerated value for register field ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH
 * 
 */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH_E_ENABLE    0x1

/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH_MSB        20
/* The width in bits of the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH_SET_MSK    0x00100000
/* The mask used to clear the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH register field value. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH_CLR_MSK    0xffefffff
/* The reset value of the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH register field. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH field value from a register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH_SET(value) (((value) << 20) & 0x00100000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_FPGAINTF_EN_3.
 */
struct ALT_SYSMGR_CORE_FPGAINTF_EN_3_s
{
    volatile uint32_t  emac_0        :  1;  /* EMAC Module */
    uint32_t                         :  3;  /* *UNDEFINED* */
    volatile uint32_t  emac_0_switch :  1;  /* EMAC Module */
    uint32_t                         :  3;  /* *UNDEFINED* */
    volatile uint32_t  emac_1        :  1;  /* EMAC Module */
    uint32_t                         :  3;  /* *UNDEFINED* */
    volatile uint32_t  emac_1_switch :  1;  /* EMAC Module */
    uint32_t                         :  3;  /* *UNDEFINED* */
    volatile uint32_t  emac_2        :  1;  /* EMAC Module */
    uint32_t                         :  3;  /* *UNDEFINED* */
    volatile uint32_t  emac_2_switch :  1;  /* EMAC Module */
    uint32_t                         : 11;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_FPGAINTF_EN_3. */
typedef struct ALT_SYSMGR_CORE_FPGAINTF_EN_3_s  ALT_SYSMGR_CORE_FPGAINTF_EN_3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_FPGAINTF_EN_3 register. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_FPGAINTF_EN_3 register from the beginning of the component. */
#define ALT_SYSMGR_CORE_FPGAINTF_EN_3_OFST        0x70

/*
 * Register : dma_l3master
 * 
 * Register for ACE-lite control - dma_l3master
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                          
 * :--------|:-------|:------|:--------------------------------------
 *  [9:0]   | RW     | 0x0   | ALT_SYSMGR_CORE_DMA_L3MASTER_AWUSER  
 *  [11:10] | ???    | 0x0   | *UNDEFINED*                          
 *  [13:12] | RW     | 0x3   | ALT_SYSMGR_CORE_DMA_L3MASTER_AWDOMAIN
 *  [15:14] | RW     | 0x3   | ALT_SYSMGR_CORE_DMA_L3MASTER_ARDOMAIN
 *  [25:16] | RW     | 0x0   | ALT_SYSMGR_CORE_DMA_L3MASTER_ARUSER  
 *  [31:26] | ???    | 0x0   | *UNDEFINED*                          
 * 
 */
/*
 * Field : awuser
 * 
 * aw sid register
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_DMA_L3MASTER_AWUSER register field. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_AWUSER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_DMA_L3MASTER_AWUSER register field. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_AWUSER_MSB        9
/* The width in bits of the ALT_SYSMGR_CORE_DMA_L3MASTER_AWUSER register field. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_AWUSER_WIDTH      10
/* The mask used to set the ALT_SYSMGR_CORE_DMA_L3MASTER_AWUSER register field value. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_AWUSER_SET_MSK    0x000003ff
/* The mask used to clear the ALT_SYSMGR_CORE_DMA_L3MASTER_AWUSER register field value. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_AWUSER_CLR_MSK    0xfffffc00
/* The reset value of the ALT_SYSMGR_CORE_DMA_L3MASTER_AWUSER register field. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_AWUSER_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_DMA_L3MASTER_AWUSER field value from a register. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_AWUSER_GET(value) (((value) & 0x000003ff) >> 0)
/* Produces a ALT_SYSMGR_CORE_DMA_L3MASTER_AWUSER register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_AWUSER_SET(value) (((value) << 0) & 0x000003ff)

/*
 * Field : awdomain
 * 
 * aw domain register
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_DMA_L3MASTER_AWDOMAIN register field. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_AWDOMAIN_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_DMA_L3MASTER_AWDOMAIN register field. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_AWDOMAIN_MSB        13
/* The width in bits of the ALT_SYSMGR_CORE_DMA_L3MASTER_AWDOMAIN register field. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_AWDOMAIN_WIDTH      2
/* The mask used to set the ALT_SYSMGR_CORE_DMA_L3MASTER_AWDOMAIN register field value. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_AWDOMAIN_SET_MSK    0x00003000
/* The mask used to clear the ALT_SYSMGR_CORE_DMA_L3MASTER_AWDOMAIN register field value. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_AWDOMAIN_CLR_MSK    0xffffcfff
/* The reset value of the ALT_SYSMGR_CORE_DMA_L3MASTER_AWDOMAIN register field. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_AWDOMAIN_RESET      0x3
/* Extracts the ALT_SYSMGR_CORE_DMA_L3MASTER_AWDOMAIN field value from a register. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_AWDOMAIN_GET(value) (((value) & 0x00003000) >> 12)
/* Produces a ALT_SYSMGR_CORE_DMA_L3MASTER_AWDOMAIN register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_AWDOMAIN_SET(value) (((value) << 12) & 0x00003000)

/*
 * Field : ardomain
 * 
 * ar domain regisger
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_DMA_L3MASTER_ARDOMAIN register field. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_ARDOMAIN_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_DMA_L3MASTER_ARDOMAIN register field. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_ARDOMAIN_MSB        15
/* The width in bits of the ALT_SYSMGR_CORE_DMA_L3MASTER_ARDOMAIN register field. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_ARDOMAIN_WIDTH      2
/* The mask used to set the ALT_SYSMGR_CORE_DMA_L3MASTER_ARDOMAIN register field value. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_ARDOMAIN_SET_MSK    0x0000c000
/* The mask used to clear the ALT_SYSMGR_CORE_DMA_L3MASTER_ARDOMAIN register field value. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_ARDOMAIN_CLR_MSK    0xffff3fff
/* The reset value of the ALT_SYSMGR_CORE_DMA_L3MASTER_ARDOMAIN register field. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_ARDOMAIN_RESET      0x3
/* Extracts the ALT_SYSMGR_CORE_DMA_L3MASTER_ARDOMAIN field value from a register. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_ARDOMAIN_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_SYSMGR_CORE_DMA_L3MASTER_ARDOMAIN register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_ARDOMAIN_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : aruser
 * 
 * ar sid register
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_DMA_L3MASTER_ARUSER register field. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_ARUSER_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_DMA_L3MASTER_ARUSER register field. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_ARUSER_MSB        25
/* The width in bits of the ALT_SYSMGR_CORE_DMA_L3MASTER_ARUSER register field. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_ARUSER_WIDTH      10
/* The mask used to set the ALT_SYSMGR_CORE_DMA_L3MASTER_ARUSER register field value. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_ARUSER_SET_MSK    0x03ff0000
/* The mask used to clear the ALT_SYSMGR_CORE_DMA_L3MASTER_ARUSER register field value. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_ARUSER_CLR_MSK    0xfc00ffff
/* The reset value of the ALT_SYSMGR_CORE_DMA_L3MASTER_ARUSER register field. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_ARUSER_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_DMA_L3MASTER_ARUSER field value from a register. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_ARUSER_GET(value) (((value) & 0x03ff0000) >> 16)
/* Produces a ALT_SYSMGR_CORE_DMA_L3MASTER_ARUSER register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_ARUSER_SET(value) (((value) << 16) & 0x03ff0000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_DMA_L3MASTER.
 */
struct ALT_SYSMGR_CORE_DMA_L3MASTER_s
{
    volatile uint32_t  awuser   : 10;  /* ALT_SYSMGR_CORE_DMA_L3MASTER_AWUSER */
    uint32_t                    :  2;  /* *UNDEFINED* */
    volatile uint32_t  awdomain :  2;  /* ALT_SYSMGR_CORE_DMA_L3MASTER_AWDOMAIN */
    volatile uint32_t  ardomain :  2;  /* ALT_SYSMGR_CORE_DMA_L3MASTER_ARDOMAIN */
    volatile uint32_t  aruser   : 10;  /* ALT_SYSMGR_CORE_DMA_L3MASTER_ARUSER */
    uint32_t                    :  6;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_DMA_L3MASTER. */
typedef struct ALT_SYSMGR_CORE_DMA_L3MASTER_s  ALT_SYSMGR_CORE_DMA_L3MASTER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_DMA_L3MASTER register. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_RESET       0x0000f000
/* The byte offset of the ALT_SYSMGR_CORE_DMA_L3MASTER register from the beginning of the component. */
#define ALT_SYSMGR_CORE_DMA_L3MASTER_OFST        0x74

/*
 * Register : etr_l3master
 * 
 * Register for ACE-lite control - etr_l3master
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                          
 * :--------|:-------|:------|:--------------------------------------
 *  [9:0]   | RW     | 0x0   | ALT_SYSMGR_CORE_ETR_L3MASTER_AWUSER  
 *  [11:10] | ???    | 0x0   | *UNDEFINED*                          
 *  [13:12] | RW     | 0x3   | ALT_SYSMGR_CORE_ETR_L3MASTER_AWDOMAIN
 *  [15:14] | RW     | 0x3   | ALT_SYSMGR_CORE_ETR_L3MASTER_ARDOMAIN
 *  [25:16] | RW     | 0x0   | ALT_SYSMGR_CORE_ETR_L3MASTER_ARUSER  
 *  [31:26] | ???    | 0x0   | *UNDEFINED*                          
 * 
 */
/*
 * Field : awuser
 * 
 * aw sid register
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ETR_L3MASTER_AWUSER register field. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_AWUSER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ETR_L3MASTER_AWUSER register field. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_AWUSER_MSB        9
/* The width in bits of the ALT_SYSMGR_CORE_ETR_L3MASTER_AWUSER register field. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_AWUSER_WIDTH      10
/* The mask used to set the ALT_SYSMGR_CORE_ETR_L3MASTER_AWUSER register field value. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_AWUSER_SET_MSK    0x000003ff
/* The mask used to clear the ALT_SYSMGR_CORE_ETR_L3MASTER_AWUSER register field value. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_AWUSER_CLR_MSK    0xfffffc00
/* The reset value of the ALT_SYSMGR_CORE_ETR_L3MASTER_AWUSER register field. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_AWUSER_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ETR_L3MASTER_AWUSER field value from a register. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_AWUSER_GET(value) (((value) & 0x000003ff) >> 0)
/* Produces a ALT_SYSMGR_CORE_ETR_L3MASTER_AWUSER register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_AWUSER_SET(value) (((value) << 0) & 0x000003ff)

/*
 * Field : awdomain
 * 
 * aw domain register
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ETR_L3MASTER_AWDOMAIN register field. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_AWDOMAIN_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ETR_L3MASTER_AWDOMAIN register field. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_AWDOMAIN_MSB        13
/* The width in bits of the ALT_SYSMGR_CORE_ETR_L3MASTER_AWDOMAIN register field. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_AWDOMAIN_WIDTH      2
/* The mask used to set the ALT_SYSMGR_CORE_ETR_L3MASTER_AWDOMAIN register field value. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_AWDOMAIN_SET_MSK    0x00003000
/* The mask used to clear the ALT_SYSMGR_CORE_ETR_L3MASTER_AWDOMAIN register field value. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_AWDOMAIN_CLR_MSK    0xffffcfff
/* The reset value of the ALT_SYSMGR_CORE_ETR_L3MASTER_AWDOMAIN register field. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_AWDOMAIN_RESET      0x3
/* Extracts the ALT_SYSMGR_CORE_ETR_L3MASTER_AWDOMAIN field value from a register. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_AWDOMAIN_GET(value) (((value) & 0x00003000) >> 12)
/* Produces a ALT_SYSMGR_CORE_ETR_L3MASTER_AWDOMAIN register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_AWDOMAIN_SET(value) (((value) << 12) & 0x00003000)

/*
 * Field : ardomain
 * 
 * ar domain regisger
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ETR_L3MASTER_ARDOMAIN register field. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_ARDOMAIN_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ETR_L3MASTER_ARDOMAIN register field. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_ARDOMAIN_MSB        15
/* The width in bits of the ALT_SYSMGR_CORE_ETR_L3MASTER_ARDOMAIN register field. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_ARDOMAIN_WIDTH      2
/* The mask used to set the ALT_SYSMGR_CORE_ETR_L3MASTER_ARDOMAIN register field value. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_ARDOMAIN_SET_MSK    0x0000c000
/* The mask used to clear the ALT_SYSMGR_CORE_ETR_L3MASTER_ARDOMAIN register field value. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_ARDOMAIN_CLR_MSK    0xffff3fff
/* The reset value of the ALT_SYSMGR_CORE_ETR_L3MASTER_ARDOMAIN register field. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_ARDOMAIN_RESET      0x3
/* Extracts the ALT_SYSMGR_CORE_ETR_L3MASTER_ARDOMAIN field value from a register. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_ARDOMAIN_GET(value) (((value) & 0x0000c000) >> 14)
/* Produces a ALT_SYSMGR_CORE_ETR_L3MASTER_ARDOMAIN register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_ARDOMAIN_SET(value) (((value) << 14) & 0x0000c000)

/*
 * Field : aruser
 * 
 * ar sid register
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ETR_L3MASTER_ARUSER register field. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_ARUSER_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ETR_L3MASTER_ARUSER register field. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_ARUSER_MSB        25
/* The width in bits of the ALT_SYSMGR_CORE_ETR_L3MASTER_ARUSER register field. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_ARUSER_WIDTH      10
/* The mask used to set the ALT_SYSMGR_CORE_ETR_L3MASTER_ARUSER register field value. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_ARUSER_SET_MSK    0x03ff0000
/* The mask used to clear the ALT_SYSMGR_CORE_ETR_L3MASTER_ARUSER register field value. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_ARUSER_CLR_MSK    0xfc00ffff
/* The reset value of the ALT_SYSMGR_CORE_ETR_L3MASTER_ARUSER register field. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_ARUSER_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ETR_L3MASTER_ARUSER field value from a register. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_ARUSER_GET(value) (((value) & 0x03ff0000) >> 16)
/* Produces a ALT_SYSMGR_CORE_ETR_L3MASTER_ARUSER register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_ARUSER_SET(value) (((value) << 16) & 0x03ff0000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_ETR_L3MASTER.
 */
struct ALT_SYSMGR_CORE_ETR_L3MASTER_s
{
    volatile uint32_t  awuser   : 10;  /* ALT_SYSMGR_CORE_ETR_L3MASTER_AWUSER */
    uint32_t                    :  2;  /* *UNDEFINED* */
    volatile uint32_t  awdomain :  2;  /* ALT_SYSMGR_CORE_ETR_L3MASTER_AWDOMAIN */
    volatile uint32_t  ardomain :  2;  /* ALT_SYSMGR_CORE_ETR_L3MASTER_ARDOMAIN */
    volatile uint32_t  aruser   : 10;  /* ALT_SYSMGR_CORE_ETR_L3MASTER_ARUSER */
    uint32_t                    :  6;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_ETR_L3MASTER. */
typedef struct ALT_SYSMGR_CORE_ETR_L3MASTER_s  ALT_SYSMGR_CORE_ETR_L3MASTER_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_ETR_L3MASTER register. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_RESET       0x0000f000
/* The byte offset of the ALT_SYSMGR_CORE_ETR_L3MASTER register from the beginning of the component. */
#define ALT_SYSMGR_CORE_ETR_L3MASTER_OFST        0x78

/*
 * Register : sec_ctrl_slt
 * 
 * This is the clock selection register. The APS oscillator selection is read only
 * register. This value is driven from secure manager FS.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                     
 * :-------|:-------|:------|:---------------------------------
 *  [0]    | R      | 0x1   | ALT_SYSMGR_CORE_SEC_CTRL_SLT_VAL
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                     
 * 
 */
/*
 * Field : val
 * 
 * 1 bit register to read the value secure clock selection: secure internal
 * oscillator and eosc1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_SEC_CTRL_SLT_VAL register field. */
#define ALT_SYSMGR_CORE_SEC_CTRL_SLT_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_SEC_CTRL_SLT_VAL register field. */
#define ALT_SYSMGR_CORE_SEC_CTRL_SLT_VAL_MSB        0
/* The width in bits of the ALT_SYSMGR_CORE_SEC_CTRL_SLT_VAL register field. */
#define ALT_SYSMGR_CORE_SEC_CTRL_SLT_VAL_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_SEC_CTRL_SLT_VAL register field value. */
#define ALT_SYSMGR_CORE_SEC_CTRL_SLT_VAL_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_CORE_SEC_CTRL_SLT_VAL register field value. */
#define ALT_SYSMGR_CORE_SEC_CTRL_SLT_VAL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_CORE_SEC_CTRL_SLT_VAL register field. */
#define ALT_SYSMGR_CORE_SEC_CTRL_SLT_VAL_RESET      0x1
/* Extracts the ALT_SYSMGR_CORE_SEC_CTRL_SLT_VAL field value from a register. */
#define ALT_SYSMGR_CORE_SEC_CTRL_SLT_VAL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_CORE_SEC_CTRL_SLT_VAL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_SEC_CTRL_SLT_VAL_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_SYSMGR_CORE_SEC_CTRL_SLT.
 */
struct ALT_SYSMGR_CORE_SEC_CTRL_SLT_s
{
    const volatile uint32_t  val :  1;  /* ALT_SYSMGR_CORE_SEC_CTRL_SLT_VAL */
    uint32_t                     : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_SEC_CTRL_SLT. */
typedef struct ALT_SYSMGR_CORE_SEC_CTRL_SLT_s  ALT_SYSMGR_CORE_SEC_CTRL_SLT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_SEC_CTRL_SLT register. */
#define ALT_SYSMGR_CORE_SEC_CTRL_SLT_RESET       0x00000001
/* The byte offset of the ALT_SYSMGR_CORE_SEC_CTRL_SLT register from the beginning of the component. */
#define ALT_SYSMGR_CORE_SEC_CTRL_SLT_OFST        0x80

/*
 * Register : osc_trim
 * 
 * This is the osc_trim register to show internal oscillator
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                 
 * :-------|:-------|:------|:-----------------------------
 *  [7:0]  | R      | 0x0   | ALT_SYSMGR_CORE_OSC_TRIM_VAL
 *  [31:8] | ???    | 0x0   | *UNDEFINED*                 
 * 
 */
/*
 * Field : val
 * 
 * RO 8 bit register that shows trim of internal oscillator
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_OSC_TRIM_VAL register field. */
#define ALT_SYSMGR_CORE_OSC_TRIM_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_OSC_TRIM_VAL register field. */
#define ALT_SYSMGR_CORE_OSC_TRIM_VAL_MSB        7
/* The width in bits of the ALT_SYSMGR_CORE_OSC_TRIM_VAL register field. */
#define ALT_SYSMGR_CORE_OSC_TRIM_VAL_WIDTH      8
/* The mask used to set the ALT_SYSMGR_CORE_OSC_TRIM_VAL register field value. */
#define ALT_SYSMGR_CORE_OSC_TRIM_VAL_SET_MSK    0x000000ff
/* The mask used to clear the ALT_SYSMGR_CORE_OSC_TRIM_VAL register field value. */
#define ALT_SYSMGR_CORE_OSC_TRIM_VAL_CLR_MSK    0xffffff00
/* The reset value of the ALT_SYSMGR_CORE_OSC_TRIM_VAL register field. */
#define ALT_SYSMGR_CORE_OSC_TRIM_VAL_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_OSC_TRIM_VAL field value from a register. */
#define ALT_SYSMGR_CORE_OSC_TRIM_VAL_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_SYSMGR_CORE_OSC_TRIM_VAL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_OSC_TRIM_VAL_SET(value) (((value) << 0) & 0x000000ff)

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
 * The struct declaration for register ALT_SYSMGR_CORE_OSC_TRIM.
 */
struct ALT_SYSMGR_CORE_OSC_TRIM_s
{
    const volatile uint32_t  val :  8;  /* ALT_SYSMGR_CORE_OSC_TRIM_VAL */
    uint32_t                     : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_OSC_TRIM. */
typedef struct ALT_SYSMGR_CORE_OSC_TRIM_s  ALT_SYSMGR_CORE_OSC_TRIM_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_OSC_TRIM register. */
#define ALT_SYSMGR_CORE_OSC_TRIM_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_OSC_TRIM register from the beginning of the component. */
#define ALT_SYSMGR_CORE_OSC_TRIM_OFST        0x84

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
 * :--------|:-------|:------|:-------------------------------------------
 *  [0]     | ???    | 0x0   | *UNDEFINED*                               
 *  [1]     | RW     | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_OCRAM   
 *  [2]     | RW     | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB0    
 *  [3]     | RW     | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB1    
 *  [4]     | RW     | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_RX
 *  [5]     | RW     | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_TX
 *  [6]     | RW     | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_RX
 *  [7]     | RW     | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_TX
 *  [8]     | RW     | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_RX
 *  [9]     | RW     | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_TX
 *  [10]    | RW     | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DMA     
 *  [11]    | RW     | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_BUF
 *  [12]    | RW     | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_WR 
 *  [13]    | RW     | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_RD 
 *  [14]    | RW     | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCA  
 *  [15]    | RW     | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCB  
 *  [16]    | RW     | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR0    
 *  [17]    | RW     | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR1    
 *  [31:18] | ???    | 0x0   | *UNDEFINED*                               
 * 
 */
/*
 * Field : ocram
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_OCRAM register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_OCRAM_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_OCRAM register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_OCRAM_MSB        1
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_OCRAM register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_OCRAM_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_OCRAM register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_OCRAM_SET_MSK    0x00000002
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_OCRAM register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_OCRAM_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_OCRAM register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_OCRAM_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_OCRAM field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_OCRAM_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_OCRAM register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_OCRAM_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : usb0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB0_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB0_MSB        2
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB0 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB0_SET_MSK    0x00000004
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB0 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB0_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB0_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB0 field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB0_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB0 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB0_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : usb1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB1_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB1_MSB        3
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB1 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB1_SET_MSK    0x00000008
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB1 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB1_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB1_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB1 field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB1_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB1 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB1_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : emac0_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_RX_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_RX_MSB        4
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_RX_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_RX_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_RX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_RX_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_RX_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : emac0_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_TX_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_TX_MSB        5
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_TX_SET_MSK    0x00000020
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_TX_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_TX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_TX_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_TX_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : emac1_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_RX_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_RX_MSB        6
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_RX_SET_MSK    0x00000040
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_RX_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_RX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_RX_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_RX_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : emac1_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_TX_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_TX_MSB        7
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_TX_SET_MSK    0x00000080
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_TX_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_TX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_TX_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_TX_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : emac2_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_RX_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_RX_MSB        8
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_RX_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_RX_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_RX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_RX_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_RX_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : emac2_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_TX_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_TX_MSB        9
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_TX_SET_MSK    0x00000200
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_TX_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_TX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_TX_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_TX_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : dma
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DMA register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DMA_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DMA register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DMA_MSB        10
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DMA register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DMA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DMA register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DMA_SET_MSK    0x00000400
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DMA register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DMA_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DMA register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DMA_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DMA field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DMA_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DMA register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DMA_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : nand_buf
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_BUF register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_BUF_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_BUF register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_BUF_MSB        11
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_BUF register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_BUF_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_BUF register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_BUF_SET_MSK    0x00000800
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_BUF register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_BUF_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_BUF register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_BUF_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_BUF field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_BUF_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_BUF register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_BUF_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : nand_wr
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_WR register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_WR_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_WR register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_WR_MSB        12
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_WR register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_WR_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_WR register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_WR_SET_MSK    0x00001000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_WR register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_WR_CLR_MSK    0xffffefff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_WR register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_WR_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_WR field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_WR_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_WR register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_WR_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : nand_rd
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_RD register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_RD_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_RD register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_RD_MSB        13
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_RD register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_RD_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_RD register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_RD_SET_MSK    0x00002000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_RD register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_RD_CLR_MSK    0xffffdfff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_RD register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_RD_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_RD field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_RD_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_RD register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_RD_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : sdmmca
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCA register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCA_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCA register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCA_MSB        14
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCA register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCA register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCA_SET_MSK    0x00004000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCA register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCA_CLR_MSK    0xffffbfff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCA register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCA_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCA field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCA_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCA register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCA_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : sdmmcb
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCB register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCB_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCB register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCB_MSB        15
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCB register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCB_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCB register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCB_SET_MSK    0x00008000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCB register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCB_CLR_MSK    0xffff7fff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCB register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCB_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCB field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCB_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCB register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCB_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : ddr0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR0_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR0_MSB        16
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR0 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR0_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR0 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR0_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR0_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR0 field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR0_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR0 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR0_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ddr1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR1_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR1_MSB        17
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR1 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR1_SET_MSK    0x00020000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR1 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR1_CLR_MSK    0xfffdffff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR1_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR1 field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR1_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR1 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR1_SET(value) (((value) << 17) & 0x00020000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_ECC_INTMASK_VALUE.
 */
struct ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_s
{
    uint32_t                    :  1;  /* *UNDEFINED* */
    volatile uint32_t  ocram    :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_OCRAM */
    volatile uint32_t  usb0     :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB0 */
    volatile uint32_t  usb1     :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_USB1 */
    volatile uint32_t  emac0_rx :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_RX */
    volatile uint32_t  emac0_tx :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC0_TX */
    volatile uint32_t  emac1_rx :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_RX */
    volatile uint32_t  emac1_tx :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC1_TX */
    volatile uint32_t  emac2_rx :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_RX */
    volatile uint32_t  emac2_tx :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_EMAC2_TX */
    volatile uint32_t  dma      :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DMA */
    volatile uint32_t  nand_buf :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_BUF */
    volatile uint32_t  nand_wr  :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_WR */
    volatile uint32_t  nand_rd  :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_NAND_RD */
    volatile uint32_t  sdmmca   :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCA */
    volatile uint32_t  sdmmcb   :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_SDMMCB */
    volatile uint32_t  ddr0     :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR0 */
    volatile uint32_t  ddr1     :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_DDR1 */
    uint32_t                    : 14;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_ECC_INTMASK_VALUE. */
typedef struct ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_s  ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_ECC_INTMASK_VALUE register from the beginning of the component. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_OFST        0x90

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
 * :--------|:-------|:------|:-----------------------------------------
 *  [0]     | ???    | 0x0   | *UNDEFINED*                             
 *  [1]     | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_SET_OCRAM   
 *  [2]     | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB0    
 *  [3]     | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB1    
 *  [4]     | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_RX
 *  [5]     | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_TX
 *  [6]     | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_RX
 *  [7]     | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_TX
 *  [8]     | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_RX
 *  [9]     | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_TX
 *  [10]    | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_SET_DMA     
 *  [11]    | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_BUF
 *  [12]    | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_WR 
 *  [13]    | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_RD 
 *  [14]    | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCA  
 *  [15]    | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCB  
 *  [16]    | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR0    
 *  [17]    | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR1    
 *  [31:18] | ???    | 0x0   | *UNDEFINED*                             
 * 
 */
/*
 * Field : ocram
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_OCRAM register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_OCRAM_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_OCRAM register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_OCRAM_MSB        1
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_OCRAM register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_OCRAM_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_SET_OCRAM register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_OCRAM_SET_MSK    0x00000002
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_SET_OCRAM register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_OCRAM_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_OCRAM register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_OCRAM_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_SET_OCRAM field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_OCRAM_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_SET_OCRAM register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_OCRAM_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : usb0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB0_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB0_MSB        2
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB0 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB0_SET_MSK    0x00000004
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB0 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB0_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB0_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB0 field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB0_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB0 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB0_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : usb1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB1_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB1_MSB        3
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB1 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB1_SET_MSK    0x00000008
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB1 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB1_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB1_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB1 field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB1_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB1 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB1_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : emac0_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_RX_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_RX_MSB        4
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_RX_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_RX_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_RX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_RX_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_RX_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : emac0_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_TX_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_TX_MSB        5
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_TX_SET_MSK    0x00000020
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_TX_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_TX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_TX_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_TX_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : emac1_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_RX_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_RX_MSB        6
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_RX_SET_MSK    0x00000040
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_RX_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_RX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_RX_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_RX_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : emac1_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_TX_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_TX_MSB        7
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_TX_SET_MSK    0x00000080
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_TX_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_TX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_TX_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_TX_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : emac2_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_RX_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_RX_MSB        8
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_RX_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_RX_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_RX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_RX_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_RX_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : emac2_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_TX_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_TX_MSB        9
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_TX_SET_MSK    0x00000200
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_TX_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_TX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_TX_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_TX_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : dma
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_DMA register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_DMA_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_DMA register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_DMA_MSB        10
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_DMA register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_DMA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_SET_DMA register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_DMA_SET_MSK    0x00000400
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_SET_DMA register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_DMA_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_DMA register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_DMA_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_SET_DMA field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_DMA_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_SET_DMA register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_DMA_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : nand_buf
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_BUF register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_BUF_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_BUF register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_BUF_MSB        11
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_BUF register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_BUF_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_BUF register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_BUF_SET_MSK    0x00000800
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_BUF register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_BUF_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_BUF register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_BUF_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_BUF field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_BUF_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_BUF register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_BUF_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : nand_wr
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_WR register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_WR_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_WR register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_WR_MSB        12
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_WR register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_WR_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_WR register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_WR_SET_MSK    0x00001000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_WR register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_WR_CLR_MSK    0xffffefff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_WR register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_WR_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_WR field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_WR_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_WR register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_WR_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : nand_rd
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_RD register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_RD_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_RD register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_RD_MSB        13
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_RD register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_RD_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_RD register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_RD_SET_MSK    0x00002000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_RD register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_RD_CLR_MSK    0xffffdfff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_RD register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_RD_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_RD field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_RD_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_RD register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_RD_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : sdmmca
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCA register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCA_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCA register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCA_MSB        14
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCA register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCA register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCA_SET_MSK    0x00004000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCA register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCA_CLR_MSK    0xffffbfff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCA register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCA_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCA field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCA_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCA register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCA_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : sdmmcb
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCB register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCB_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCB register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCB_MSB        15
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCB register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCB_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCB register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCB_SET_MSK    0x00008000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCB register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCB_CLR_MSK    0xffff7fff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCB register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCB_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCB field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCB_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCB register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCB_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : ddr0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR0_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR0_MSB        16
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR0 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR0_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR0 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR0_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR0_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR0 field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR0_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR0 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR0_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ddr1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR1_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR1_MSB        17
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR1 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR1_SET_MSK    0x00020000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR1 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR1_CLR_MSK    0xfffdffff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR1_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR1 field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR1_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR1 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR1_SET(value) (((value) << 17) & 0x00020000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_ECC_INTMASK_SET.
 */
struct ALT_SYSMGR_CORE_ECC_INTMASK_SET_s
{
    uint32_t                    :  1;  /* *UNDEFINED* */
    volatile uint32_t  ocram    :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_SET_OCRAM */
    volatile uint32_t  usb0     :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB0 */
    volatile uint32_t  usb1     :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_SET_USB1 */
    volatile uint32_t  emac0_rx :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_RX */
    volatile uint32_t  emac0_tx :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC0_TX */
    volatile uint32_t  emac1_rx :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_RX */
    volatile uint32_t  emac1_tx :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC1_TX */
    volatile uint32_t  emac2_rx :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_RX */
    volatile uint32_t  emac2_tx :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_SET_EMAC2_TX */
    volatile uint32_t  dma      :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_SET_DMA */
    volatile uint32_t  nand_buf :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_BUF */
    volatile uint32_t  nand_wr  :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_WR */
    volatile uint32_t  nand_rd  :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_SET_NAND_RD */
    volatile uint32_t  sdmmca   :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCA */
    volatile uint32_t  sdmmcb   :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_SET_SDMMCB */
    volatile uint32_t  ddr0     :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR0 */
    volatile uint32_t  ddr1     :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_SET_DDR1 */
    uint32_t                    : 14;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_ECC_INTMASK_SET. */
typedef struct ALT_SYSMGR_CORE_ECC_INTMASK_SET_s  ALT_SYSMGR_CORE_ECC_INTMASK_SET_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_SET register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_ECC_INTMASK_SET register from the beginning of the component. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_SET_OFST        0x94

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
 * :--------|:-------|:------|:-----------------------------------------
 *  [0]     | ???    | 0x0   | *UNDEFINED*                             
 *  [1]     | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_CLR_OCRAM   
 *  [2]     | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB0    
 *  [3]     | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB1    
 *  [4]     | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_RX
 *  [5]     | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_TX
 *  [6]     | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_RX
 *  [7]     | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_TX
 *  [8]     | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_RX
 *  [9]     | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_TX
 *  [10]    | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DMA     
 *  [11]    | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_BUF
 *  [12]    | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_WR 
 *  [13]    | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_RD 
 *  [14]    | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCA  
 *  [15]    | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCB  
 *  [16]    | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR0    
 *  [17]    | W      | 0x0   | ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR1    
 *  [31:18] | ???    | 0x0   | *UNDEFINED*                             
 * 
 */
/*
 * Field : ocram
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_OCRAM register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_OCRAM_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_OCRAM register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_OCRAM_MSB        1
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_OCRAM register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_OCRAM_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_OCRAM register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_OCRAM_SET_MSK    0x00000002
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_OCRAM register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_OCRAM_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_OCRAM register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_OCRAM_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_OCRAM field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_OCRAM_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_CLR_OCRAM register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_OCRAM_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : usb0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB0_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB0_MSB        2
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB0 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB0_SET_MSK    0x00000004
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB0 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB0_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB0_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB0 field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB0_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB0 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB0_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : usb1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB1_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB1_MSB        3
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB1 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB1_SET_MSK    0x00000008
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB1 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB1_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB1_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB1 field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB1_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB1 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB1_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : emac0_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_RX_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_RX_MSB        4
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_RX_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_RX_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_RX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_RX_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_RX_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : emac0_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_TX_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_TX_MSB        5
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_TX_SET_MSK    0x00000020
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_TX_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_TX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_TX_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_TX_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : emac1_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_RX_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_RX_MSB        6
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_RX_SET_MSK    0x00000040
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_RX_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_RX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_RX_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_RX_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : emac1_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_TX_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_TX_MSB        7
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_TX_SET_MSK    0x00000080
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_TX_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_TX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_TX_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_TX_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : emac2_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_RX_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_RX_MSB        8
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_RX_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_RX_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_RX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_RX_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_RX_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : emac2_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_TX_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_TX_MSB        9
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_TX_SET_MSK    0x00000200
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_TX_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_TX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_TX_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_TX_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : dma
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DMA register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DMA_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DMA register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DMA_MSB        10
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DMA register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DMA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DMA register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DMA_SET_MSK    0x00000400
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DMA register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DMA_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DMA register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DMA_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DMA field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DMA_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DMA register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DMA_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : nand_buf
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_BUF register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_BUF_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_BUF register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_BUF_MSB        11
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_BUF register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_BUF_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_BUF register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_BUF_SET_MSK    0x00000800
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_BUF register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_BUF_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_BUF register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_BUF_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_BUF field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_BUF_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_BUF register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_BUF_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : nand_wr
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_WR register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_WR_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_WR register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_WR_MSB        12
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_WR register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_WR_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_WR register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_WR_SET_MSK    0x00001000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_WR register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_WR_CLR_MSK    0xffffefff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_WR register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_WR_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_WR field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_WR_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_WR register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_WR_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : nand_rd
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_RD register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_RD_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_RD register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_RD_MSB        13
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_RD register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_RD_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_RD register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_RD_SET_MSK    0x00002000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_RD register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_RD_CLR_MSK    0xffffdfff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_RD register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_RD_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_RD field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_RD_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_RD register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_RD_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : sdmmca
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCA register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCA_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCA register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCA_MSB        14
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCA register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCA register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCA_SET_MSK    0x00004000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCA register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCA_CLR_MSK    0xffffbfff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCA register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCA_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCA field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCA_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCA register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCA_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : sdmmcb
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCB register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCB_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCB register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCB_MSB        15
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCB register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCB_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCB register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCB_SET_MSK    0x00008000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCB register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCB_CLR_MSK    0xffff7fff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCB register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCB_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCB field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCB_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCB register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCB_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : ddr0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR0_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR0_MSB        16
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR0 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR0_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR0 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR0_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR0_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR0 field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR0_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR0 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR0_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ddr1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR1_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR1_MSB        17
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR1 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR1_SET_MSK    0x00020000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR1 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR1_CLR_MSK    0xfffdffff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR1_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR1 field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR1_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR1 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR1_SET(value) (((value) << 17) & 0x00020000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_ECC_INTMASK_CLR.
 */
struct ALT_SYSMGR_CORE_ECC_INTMASK_CLR_s
{
    uint32_t                    :  1;  /* *UNDEFINED* */
    volatile uint32_t  ocram    :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_CLR_OCRAM */
    volatile uint32_t  usb0     :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB0 */
    volatile uint32_t  usb1     :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_CLR_USB1 */
    volatile uint32_t  emac0_rx :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_RX */
    volatile uint32_t  emac0_tx :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC0_TX */
    volatile uint32_t  emac1_rx :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_RX */
    volatile uint32_t  emac1_tx :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC1_TX */
    volatile uint32_t  emac2_rx :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_RX */
    volatile uint32_t  emac2_tx :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_CLR_EMAC2_TX */
    volatile uint32_t  dma      :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DMA */
    volatile uint32_t  nand_buf :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_BUF */
    volatile uint32_t  nand_wr  :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_WR */
    volatile uint32_t  nand_rd  :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_CLR_NAND_RD */
    volatile uint32_t  sdmmca   :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCA */
    volatile uint32_t  sdmmcb   :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_CLR_SDMMCB */
    volatile uint32_t  ddr0     :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR0 */
    volatile uint32_t  ddr1     :  1;  /* ALT_SYSMGR_CORE_ECC_INTMASK_CLR_DDR1 */
    uint32_t                    : 14;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_ECC_INTMASK_CLR. */
typedef struct ALT_SYSMGR_CORE_ECC_INTMASK_CLR_s  ALT_SYSMGR_CORE_ECC_INTMASK_CLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR register. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_ECC_INTMASK_CLR register from the beginning of the component. */
#define ALT_SYSMGR_CORE_ECC_INTMASK_CLR_OFST        0x98

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
 * :--------|:-------|:------|:--------------------------------------------
 *  [0]     | ???    | 0x0   | *UNDEFINED*                                
 *  [1]     | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_OCRAM   
 *  [2]     | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB0    
 *  [3]     | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB1    
 *  [4]     | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_RX
 *  [5]     | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_TX
 *  [6]     | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_RX
 *  [7]     | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_TX
 *  [8]     | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_RX
 *  [9]     | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_TX
 *  [10]    | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DMA     
 *  [11]    | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_BUF
 *  [12]    | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_WR 
 *  [13]    | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_RD 
 *  [14]    | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCA  
 *  [15]    | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCB  
 *  [16]    | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR0    
 *  [17]    | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR1    
 *  [31:18] | ???    | 0x0   | *UNDEFINED*                                
 * 
 */
/*
 * Field : ocram
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_OCRAM register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_OCRAM_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_OCRAM register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_OCRAM_MSB        1
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_OCRAM register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_OCRAM_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_OCRAM register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_OCRAM_SET_MSK    0x00000002
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_OCRAM register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_OCRAM_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_OCRAM register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_OCRAM_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_OCRAM field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_OCRAM_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_OCRAM register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_OCRAM_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : usb0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB0_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB0_MSB        2
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB0 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB0_SET_MSK    0x00000004
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB0 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB0_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB0_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB0 field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB0_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB0 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB0_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : usb1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB1_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB1_MSB        3
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB1 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB1_SET_MSK    0x00000008
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB1 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB1_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB1_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB1 field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB1_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB1 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB1_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : emac0_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_RX_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_RX_MSB        4
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_RX_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_RX_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_RX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_RX_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_RX_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : emac0_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_TX_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_TX_MSB        5
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_TX_SET_MSK    0x00000020
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_TX_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_TX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_TX_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_TX_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : emac1_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_RX_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_RX_MSB        6
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_RX_SET_MSK    0x00000040
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_RX_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_RX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_RX_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_RX_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : emac1_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_TX_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_TX_MSB        7
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_TX_SET_MSK    0x00000080
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_TX_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_TX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_TX_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_TX_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : emac2_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_RX_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_RX_MSB        8
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_RX_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_RX_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_RX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_RX_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_RX_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : emac2_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_TX_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_TX_MSB        9
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_TX_SET_MSK    0x00000200
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_TX_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_TX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_TX_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_TX_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : dma
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DMA register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DMA_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DMA register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DMA_MSB        10
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DMA register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DMA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DMA register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DMA_SET_MSK    0x00000400
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DMA register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DMA_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DMA register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DMA_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DMA field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DMA_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DMA register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DMA_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : nand_buf
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_BUF register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_BUF_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_BUF register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_BUF_MSB        11
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_BUF register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_BUF_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_BUF register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_BUF_SET_MSK    0x00000800
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_BUF register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_BUF_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_BUF register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_BUF_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_BUF field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_BUF_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_BUF register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_BUF_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : nand_wr
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_WR register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_WR_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_WR register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_WR_MSB        12
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_WR register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_WR_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_WR register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_WR_SET_MSK    0x00001000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_WR register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_WR_CLR_MSK    0xffffefff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_WR register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_WR_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_WR field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_WR_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_WR register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_WR_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : nand_rd
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_RD register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_RD_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_RD register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_RD_MSB        13
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_RD register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_RD_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_RD register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_RD_SET_MSK    0x00002000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_RD register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_RD_CLR_MSK    0xffffdfff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_RD register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_RD_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_RD field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_RD_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_RD register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_RD_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : sdmmca
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCA register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCA_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCA register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCA_MSB        14
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCA register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCA register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCA_SET_MSK    0x00004000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCA register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCA_CLR_MSK    0xffffbfff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCA register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCA_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCA field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCA_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCA register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCA_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : sdmmcb
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCB register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCB_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCB register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCB_MSB        15
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCB register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCB_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCB register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCB_SET_MSK    0x00008000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCB register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCB_CLR_MSK    0xffff7fff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCB register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCB_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCB field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCB_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCB register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCB_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : ddr0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR0_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR0_MSB        16
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR0 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR0_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR0 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR0_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR0_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR0 field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR0_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR0 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR0_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ddr1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR1_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR1_MSB        17
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR1 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR1_SET_MSK    0x00020000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR1 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR1_CLR_MSK    0xfffdffff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR1_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR1 field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR1_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR1 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR1_SET(value) (((value) << 17) & 0x00020000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR.
 */
struct ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_s
{
    uint32_t                          :  1;  /* *UNDEFINED* */
    const volatile uint32_t  ocram    :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_OCRAM */
    const volatile uint32_t  usb0     :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB0 */
    const volatile uint32_t  usb1     :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_USB1 */
    const volatile uint32_t  emac0_rx :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_RX */
    const volatile uint32_t  emac0_tx :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC0_TX */
    const volatile uint32_t  emac1_rx :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_RX */
    const volatile uint32_t  emac1_tx :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC1_TX */
    const volatile uint32_t  emac2_rx :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_RX */
    const volatile uint32_t  emac2_tx :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_EMAC2_TX */
    const volatile uint32_t  dma      :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DMA */
    const volatile uint32_t  nand_buf :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_BUF */
    const volatile uint32_t  nand_wr  :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_WR */
    const volatile uint32_t  nand_rd  :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_NAND_RD */
    const volatile uint32_t  sdmmca   :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCA */
    const volatile uint32_t  sdmmcb   :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_SDMMCB */
    const volatile uint32_t  ddr0     :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR0 */
    const volatile uint32_t  ddr1     :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_DDR1 */
    uint32_t                          : 14;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR. */
typedef struct ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_s  ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR register from the beginning of the component. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_OFST        0x9c

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
 * :--------|:-------|:------|:--------------------------------------------
 *  [0]     | ???    | 0x0   | *UNDEFINED*                                
 *  [1]     | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_OCRAM   
 *  [2]     | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB0    
 *  [3]     | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB1    
 *  [4]     | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_RX
 *  [5]     | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_TX
 *  [6]     | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_RX
 *  [7]     | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_TX
 *  [8]     | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_RX
 *  [9]     | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_TX
 *  [10]    | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DMA     
 *  [11]    | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_BUF
 *  [12]    | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_WR 
 *  [13]    | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_RD 
 *  [14]    | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCA  
 *  [15]    | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCB  
 *  [16]    | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR0    
 *  [17]    | R      | 0x0   | ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR1    
 *  [31:18] | ???    | 0x0   | *UNDEFINED*                                
 * 
 */
/*
 * Field : ocram
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_OCRAM register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_OCRAM_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_OCRAM register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_OCRAM_MSB        1
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_OCRAM register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_OCRAM_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_OCRAM register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_OCRAM_SET_MSK    0x00000002
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_OCRAM register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_OCRAM_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_OCRAM register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_OCRAM_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_OCRAM field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_OCRAM_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_OCRAM register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_OCRAM_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : usb0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB0_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB0_MSB        2
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB0 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB0_SET_MSK    0x00000004
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB0 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB0_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB0_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB0 field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB0_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB0 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB0_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : usb1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB1_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB1_MSB        3
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB1 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB1_SET_MSK    0x00000008
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB1 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB1_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB1_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB1 field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB1_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB1 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB1_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : emac0_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_RX_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_RX_MSB        4
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_RX_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_RX_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_RX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_RX_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_RX_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : emac0_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_TX_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_TX_MSB        5
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_TX_SET_MSK    0x00000020
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_TX_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_TX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_TX_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_TX_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : emac1_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_RX_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_RX_MSB        6
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_RX_SET_MSK    0x00000040
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_RX_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_RX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_RX_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_RX_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : emac1_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_TX_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_TX_MSB        7
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_TX_SET_MSK    0x00000080
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_TX_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_TX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_TX_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_TX_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : emac2_rx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_RX_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_RX_MSB        8
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_RX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_RX_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_RX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_RX_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_RX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_RX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_RX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_RX_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_RX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_RX_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : emac2_tx
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_TX_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_TX_MSB        9
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_TX_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_TX_SET_MSK    0x00000200
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_TX register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_TX_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_TX register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_TX_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_TX field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_TX_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_TX register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_TX_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : dma
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DMA register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DMA_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DMA register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DMA_MSB        10
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DMA register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DMA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DMA register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DMA_SET_MSK    0x00000400
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DMA register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DMA_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DMA register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DMA_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DMA field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DMA_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DMA register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DMA_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : nand_buf
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_BUF register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_BUF_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_BUF register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_BUF_MSB        11
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_BUF register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_BUF_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_BUF register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_BUF_SET_MSK    0x00000800
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_BUF register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_BUF_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_BUF register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_BUF_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_BUF field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_BUF_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_BUF register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_BUF_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : nand_wr
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_WR register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_WR_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_WR register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_WR_MSB        12
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_WR register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_WR_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_WR register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_WR_SET_MSK    0x00001000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_WR register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_WR_CLR_MSK    0xffffefff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_WR register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_WR_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_WR field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_WR_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_WR register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_WR_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : nand_rd
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_RD register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_RD_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_RD register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_RD_MSB        13
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_RD register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_RD_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_RD register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_RD_SET_MSK    0x00002000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_RD register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_RD_CLR_MSK    0xffffdfff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_RD register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_RD_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_RD field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_RD_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_RD register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_RD_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : sdmmca
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCA register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCA_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCA register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCA_MSB        14
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCA register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCA register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCA_SET_MSK    0x00004000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCA register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCA_CLR_MSK    0xffffbfff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCA register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCA_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCA field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCA_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCA register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCA_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : sdmmcb
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCB register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCB_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCB register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCB_MSB        15
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCB register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCB_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCB register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCB_SET_MSK    0x00008000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCB register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCB_CLR_MSK    0xffff7fff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCB register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCB_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCB field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCB_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCB register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCB_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : ddr0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR0_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR0_MSB        16
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR0 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR0_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR0 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR0_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR0 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR0_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR0 field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR0_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR0 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR0_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ddr1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR1_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR1_MSB        17
/* The width in bits of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR1 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR1_SET_MSK    0x00020000
/* The mask used to clear the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR1 register field value. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR1_CLR_MSK    0xfffdffff
/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR1 register field. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR1_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR1 field value from a register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR1_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR1 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR1_SET(value) (((value) << 17) & 0x00020000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR.
 */
struct ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_s
{
    uint32_t                          :  1;  /* *UNDEFINED* */
    const volatile uint32_t  ocram    :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_OCRAM */
    const volatile uint32_t  usb0     :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB0 */
    const volatile uint32_t  usb1     :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_USB1 */
    const volatile uint32_t  emac0_rx :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_RX */
    const volatile uint32_t  emac0_tx :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC0_TX */
    const volatile uint32_t  emac1_rx :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_RX */
    const volatile uint32_t  emac1_tx :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC1_TX */
    const volatile uint32_t  emac2_rx :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_RX */
    const volatile uint32_t  emac2_tx :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_EMAC2_TX */
    const volatile uint32_t  dma      :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DMA */
    const volatile uint32_t  nand_buf :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_BUF */
    const volatile uint32_t  nand_wr  :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_WR */
    const volatile uint32_t  nand_rd  :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_NAND_RD */
    const volatile uint32_t  sdmmca   :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCA */
    const volatile uint32_t  sdmmcb   :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_SDMMCB */
    const volatile uint32_t  ddr0     :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR0 */
    const volatile uint32_t  ddr1     :  1;  /* ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_DDR1 */
    uint32_t                          : 14;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR. */
typedef struct ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_s  ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR register. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR register from the beginning of the component. */
#define ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_OFST        0xa0

/*
 * Register : noc_addr_remap
 * 
 * The noc_addr_repmap register to view the HPS memory map (specifically on-chip
 * RAM)
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                              
 * :-------|:-------|:------|:------------------------------------------
 *  [0]    | RW     | 0x0   | ALT_SYSMGR_CORE_NOC_ADDR_REMAP_SDM2HPS_BE
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                              
 * 
 */
/*
 * Field : sdm2hps_be
 * 
 * 0: lowest 1 MB of SDM2HPS_BE memory view decodes to on-chip RAM. The rest is
 * DRAM.
 * 
 * 1: lowest 1 MB of SDM2HPS_BE memory view decodes to DRAM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NOC_ADDR_REMAP_SDM2HPS_BE register field. */
#define ALT_SYSMGR_CORE_NOC_ADDR_REMAP_SDM2HPS_BE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NOC_ADDR_REMAP_SDM2HPS_BE register field. */
#define ALT_SYSMGR_CORE_NOC_ADDR_REMAP_SDM2HPS_BE_MSB        0
/* The width in bits of the ALT_SYSMGR_CORE_NOC_ADDR_REMAP_SDM2HPS_BE register field. */
#define ALT_SYSMGR_CORE_NOC_ADDR_REMAP_SDM2HPS_BE_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_NOC_ADDR_REMAP_SDM2HPS_BE register field value. */
#define ALT_SYSMGR_CORE_NOC_ADDR_REMAP_SDM2HPS_BE_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_CORE_NOC_ADDR_REMAP_SDM2HPS_BE register field value. */
#define ALT_SYSMGR_CORE_NOC_ADDR_REMAP_SDM2HPS_BE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_CORE_NOC_ADDR_REMAP_SDM2HPS_BE register field. */
#define ALT_SYSMGR_CORE_NOC_ADDR_REMAP_SDM2HPS_BE_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_NOC_ADDR_REMAP_SDM2HPS_BE field value from a register. */
#define ALT_SYSMGR_CORE_NOC_ADDR_REMAP_SDM2HPS_BE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_CORE_NOC_ADDR_REMAP_SDM2HPS_BE register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NOC_ADDR_REMAP_SDM2HPS_BE_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_SYSMGR_CORE_NOC_ADDR_REMAP.
 */
struct ALT_SYSMGR_CORE_NOC_ADDR_REMAP_s
{
    volatile uint32_t  sdm2hps_be :  1;  /* ALT_SYSMGR_CORE_NOC_ADDR_REMAP_SDM2HPS_BE */
    uint32_t                      : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_NOC_ADDR_REMAP. */
typedef struct ALT_SYSMGR_CORE_NOC_ADDR_REMAP_s  ALT_SYSMGR_CORE_NOC_ADDR_REMAP_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_NOC_ADDR_REMAP register. */
#define ALT_SYSMGR_CORE_NOC_ADDR_REMAP_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_NOC_ADDR_REMAP register from the beginning of the component. */
#define ALT_SYSMGR_CORE_NOC_ADDR_REMAP_OFST        0xb0

/*
 * Register : hmc_clk
 * 
 * HMC Clock and IO Lock status indicator
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                          
 * :--------|:-------|:--------|:--------------------------------------
 *  [0]     | R      | Unknown | ALT_SYSMGR_CORE_HMC_CLK_STATUS       
 *  [7:1]   | ???    | Unknown | *UNDEFINED*                          
 *  [8]     | R      | Unknown | ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_A
 *  [9]     | R      | Unknown | ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_B
 *  [10]    | R      | Unknown | ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_C
 *  [15:11] | ???    | Unknown | *UNDEFINED*                          
 *  [16]    | R      | Unknown | ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_A
 *  [17]    | R      | Unknown | ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_B
 *  [18]    | R      | Unknown | ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_C
 *  [31:19] | ???    | Unknown | *UNDEFINED*                          
 * 
 */
/*
 * Field : status
 * 
 * HMC clock status: HMC clock not running = 0; HMC clock running = 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_HMC_CLK_STATUS register field. */
#define ALT_SYSMGR_CORE_HMC_CLK_STATUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_HMC_CLK_STATUS register field. */
#define ALT_SYSMGR_CORE_HMC_CLK_STATUS_MSB        0
/* The width in bits of the ALT_SYSMGR_CORE_HMC_CLK_STATUS register field. */
#define ALT_SYSMGR_CORE_HMC_CLK_STATUS_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_HMC_CLK_STATUS register field value. */
#define ALT_SYSMGR_CORE_HMC_CLK_STATUS_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_CORE_HMC_CLK_STATUS register field value. */
#define ALT_SYSMGR_CORE_HMC_CLK_STATUS_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_CORE_HMC_CLK_STATUS register field is UNKNOWN. */
#define ALT_SYSMGR_CORE_HMC_CLK_STATUS_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_HMC_CLK_STATUS field value from a register. */
#define ALT_SYSMGR_CORE_HMC_CLK_STATUS_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_CORE_HMC_CLK_STATUS register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_HMC_CLK_STATUS_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : io_pll_lock_a
 * 
 * PLL Lock A status
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_A register field. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_A_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_A register field. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_A_MSB        8
/* The width in bits of the ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_A register field. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_A_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_A register field value. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_A_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_A register field value. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_A_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_A register field is UNKNOWN. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_A_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_A field value from a register. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_A_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_A register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_A_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : io_pll_lock_b
 * 
 * PLL Lock B status
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_B register field. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_B_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_B register field. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_B_MSB        9
/* The width in bits of the ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_B register field. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_B_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_B register field value. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_B_SET_MSK    0x00000200
/* The mask used to clear the ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_B register field value. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_B_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_B register field is UNKNOWN. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_B_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_B field value from a register. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_B_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_B register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_B_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : io_pll_lock_c
 * 
 * PLL Lock C status
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_C register field. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_C_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_C register field. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_C_MSB        10
/* The width in bits of the ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_C register field. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_C_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_C register field value. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_C_SET_MSK    0x00000400
/* The mask used to clear the ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_C register field value. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_C_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_C register field is UNKNOWN. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_C_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_C field value from a register. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_C_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_C register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_C_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : io_cpa_lock_a
 * 
 * CPA Lock A status
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_A register field. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_A_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_A register field. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_A_MSB        16
/* The width in bits of the ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_A register field. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_A_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_A register field value. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_A_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_A register field value. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_A_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_A register field is UNKNOWN. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_A_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_A field value from a register. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_A_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_A register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_A_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : io_cpa_lock_b
 * 
 * CPA Lock B status
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_B register field. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_B_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_B register field. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_B_MSB        17
/* The width in bits of the ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_B register field. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_B_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_B register field value. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_B_SET_MSK    0x00020000
/* The mask used to clear the ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_B register field value. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_B_CLR_MSK    0xfffdffff
/* The reset value of the ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_B register field is UNKNOWN. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_B_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_B field value from a register. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_B_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_B register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_B_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : io_cpa_lock_c
 * 
 * CPA Lock C status
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_C register field. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_C_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_C register field. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_C_MSB        18
/* The width in bits of the ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_C register field. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_C_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_C register field value. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_C_SET_MSK    0x00040000
/* The mask used to clear the ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_C register field value. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_C_CLR_MSK    0xfffbffff
/* The reset value of the ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_C register field is UNKNOWN. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_C_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_C field value from a register. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_C_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_C register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_C_SET(value) (((value) << 18) & 0x00040000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_HMC_CLK.
 */
struct ALT_SYSMGR_CORE_HMC_CLK_s
{
    const volatile uint32_t  status        :  1;  /* ALT_SYSMGR_CORE_HMC_CLK_STATUS */
    uint32_t                               :  7;  /* *UNDEFINED* */
    const volatile uint32_t  io_pll_lock_a :  1;  /* ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_A */
    const volatile uint32_t  io_pll_lock_b :  1;  /* ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_B */
    const volatile uint32_t  io_pll_lock_c :  1;  /* ALT_SYSMGR_CORE_HMC_CLK_IO_PLL_LOCK_C */
    uint32_t                               :  5;  /* *UNDEFINED* */
    const volatile uint32_t  io_cpa_lock_a :  1;  /* ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_A */
    const volatile uint32_t  io_cpa_lock_b :  1;  /* ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_B */
    const volatile uint32_t  io_cpa_lock_c :  1;  /* ALT_SYSMGR_CORE_HMC_CLK_IO_CPA_LOCK_C */
    uint32_t                               : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_HMC_CLK. */
typedef struct ALT_SYSMGR_CORE_HMC_CLK_s  ALT_SYSMGR_CORE_HMC_CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_HMC_CLK register. */
#define ALT_SYSMGR_CORE_HMC_CLK_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_HMC_CLK register from the beginning of the component. */
#define ALT_SYSMGR_CORE_HMC_CLK_OFST        0xb4

/*
 * Register : io_pa_ctrl
 * 
 * HMC clock status indicator
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                               
 * :-------|:-------|:------|:-------------------------------------------
 *  [0]    | RW     | 0x1   | ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_A
 *  [1]    | RW     | 0x1   | ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_B
 *  [2]    | RW     | 0x1   | ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_C
 *  [31:3] | ???    | 0x0   | *UNDEFINED*                               
 * 
 */
/*
 * Field : io_pa_reset_n_a
 * 
 * This will allow HPS software to control when it wants to start receiving the
 * IO48 clock.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_A register field. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_A_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_A register field. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_A_MSB        0
/* The width in bits of the ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_A register field. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_A_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_A register field value. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_A_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_A register field value. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_A_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_A register field. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_A_RESET      0x1
/* Extracts the ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_A field value from a register. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_A_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_A register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_A_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : io_pa_reset_n_b
 * 
 * This will allow HPS software to control when it wants to start receiving the
 * IO48 clock.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_B register field. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_B_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_B register field. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_B_MSB        1
/* The width in bits of the ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_B register field. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_B_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_B register field value. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_B_SET_MSK    0x00000002
/* The mask used to clear the ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_B register field value. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_B_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_B register field. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_B_RESET      0x1
/* Extracts the ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_B field value from a register. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_B_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_B register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_B_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : io_pa_reset_n_c
 * 
 * This will allow HPS software to control when it wants to start receiving the
 * IO48 clock.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_C register field. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_C_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_C register field. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_C_MSB        2
/* The width in bits of the ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_C register field. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_C_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_C register field value. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_C_SET_MSK    0x00000004
/* The mask used to clear the ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_C register field value. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_C_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_C register field. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_C_RESET      0x1
/* Extracts the ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_C field value from a register. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_C_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_C register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_C_SET(value) (((value) << 2) & 0x00000004)

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
 * The struct declaration for register ALT_SYSMGR_CORE_IO_PA_CTRL.
 */
struct ALT_SYSMGR_CORE_IO_PA_CTRL_s
{
    volatile uint32_t  io_pa_reset_n_a :  1;  /* ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_A */
    volatile uint32_t  io_pa_reset_n_b :  1;  /* ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_B */
    volatile uint32_t  io_pa_reset_n_c :  1;  /* ALT_SYSMGR_CORE_IO_PA_CTRL_IO_PA_RESET_N_C */
    uint32_t                           : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_IO_PA_CTRL. */
typedef struct ALT_SYSMGR_CORE_IO_PA_CTRL_s  ALT_SYSMGR_CORE_IO_PA_CTRL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_IO_PA_CTRL register. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_RESET       0x00000007
/* The byte offset of the ALT_SYSMGR_CORE_IO_PA_CTRL register from the beginning of the component. */
#define ALT_SYSMGR_CORE_IO_PA_CTRL_OFST        0xb8

/*
 * Register : noc_timeout
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                   
 * :-------|:-------|:------|:-------------------------------
 *  [0]    | RW     | 0x0   | ALT_SYSMGR_CORE_NOC_TIMEOUT_EN
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
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NOC_TIMEOUT_EN register field. */
#define ALT_SYSMGR_CORE_NOC_TIMEOUT_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NOC_TIMEOUT_EN register field. */
#define ALT_SYSMGR_CORE_NOC_TIMEOUT_EN_MSB        0
/* The width in bits of the ALT_SYSMGR_CORE_NOC_TIMEOUT_EN register field. */
#define ALT_SYSMGR_CORE_NOC_TIMEOUT_EN_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_NOC_TIMEOUT_EN register field value. */
#define ALT_SYSMGR_CORE_NOC_TIMEOUT_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_CORE_NOC_TIMEOUT_EN register field value. */
#define ALT_SYSMGR_CORE_NOC_TIMEOUT_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_CORE_NOC_TIMEOUT_EN register field. */
#define ALT_SYSMGR_CORE_NOC_TIMEOUT_EN_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_NOC_TIMEOUT_EN field value from a register. */
#define ALT_SYSMGR_CORE_NOC_TIMEOUT_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_CORE_NOC_TIMEOUT_EN register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NOC_TIMEOUT_EN_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_SYSMGR_CORE_NOC_TIMEOUT.
 */
struct ALT_SYSMGR_CORE_NOC_TIMEOUT_s
{
    volatile uint32_t  en :  1;  /* ALT_SYSMGR_CORE_NOC_TIMEOUT_EN */
    uint32_t              : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_NOC_TIMEOUT. */
typedef struct ALT_SYSMGR_CORE_NOC_TIMEOUT_s  ALT_SYSMGR_CORE_NOC_TIMEOUT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_NOC_TIMEOUT register. */
#define ALT_SYSMGR_CORE_NOC_TIMEOUT_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_NOC_TIMEOUT register from the beginning of the component. */
#define ALT_SYSMGR_CORE_NOC_TIMEOUT_OFST        0xc0

/*
 * Register : noc_idlereq_set
 * 
 * Set IDLE request to each NOC master.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                               
 * :-------|:-------|:------|:-------------------------------------------
 *  [0]    | W      | 0x0   | ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_SOC2FPGA  
 *  [3:1]  | ???    | 0x0   | *UNDEFINED*                               
 *  [4]    | W      | 0x0   | ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_LWSOC2FPGA
 *  [31:5] | ???    | 0x0   | *UNDEFINED*                               
 * 
 */
/*
 * Field : soc2fpga
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_SOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_SOC2FPGA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_SOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_SOC2FPGA_MSB        0
/* The width in bits of the ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_SOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_SOC2FPGA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_SOC2FPGA register field value. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_SOC2FPGA_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_SOC2FPGA register field value. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_SOC2FPGA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_SOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_SOC2FPGA_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_SOC2FPGA field value from a register. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_SOC2FPGA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_SOC2FPGA register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_SOC2FPGA_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : lwsoc2fpga
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_LWSOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_LWSOC2FPGA_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_LWSOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_LWSOC2FPGA_MSB        4
/* The width in bits of the ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_LWSOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_LWSOC2FPGA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_LWSOC2FPGA register field value. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_LWSOC2FPGA_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_LWSOC2FPGA register field value. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_LWSOC2FPGA_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_LWSOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_LWSOC2FPGA_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_LWSOC2FPGA field value from a register. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_LWSOC2FPGA_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_LWSOC2FPGA register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_LWSOC2FPGA_SET(value) (((value) << 4) & 0x00000010)

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
 * The struct declaration for register ALT_SYSMGR_CORE_NOC_IDLEREQ_SET.
 */
struct ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_s
{
    volatile uint32_t  soc2fpga   :  1;  /* ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_SOC2FPGA */
    uint32_t                      :  3;  /* *UNDEFINED* */
    volatile uint32_t  lwsoc2fpga :  1;  /* ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_LWSOC2FPGA */
    uint32_t                      : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_NOC_IDLEREQ_SET. */
typedef struct ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_s  ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_NOC_IDLEREQ_SET register. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_NOC_IDLEREQ_SET register from the beginning of the component. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_OFST        0xc4

/*
 * Register : noc_idlereq_clr
 * 
 * Clear IDLE request to each NOC master.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                               
 * :-------|:-------|:------|:-------------------------------------------
 *  [0]    | W      | 0x0   | ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_SOC2FPGA  
 *  [3:1]  | ???    | 0x0   | *UNDEFINED*                               
 *  [4]    | W      | 0x0   | ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_LWSOC2FPGA
 *  [31:5] | ???    | 0x0   | *UNDEFINED*                               
 * 
 */
/*
 * Field : soc2fpga
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_SOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_SOC2FPGA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_SOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_SOC2FPGA_MSB        0
/* The width in bits of the ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_SOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_SOC2FPGA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_SOC2FPGA register field value. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_SOC2FPGA_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_SOC2FPGA register field value. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_SOC2FPGA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_SOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_SOC2FPGA_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_SOC2FPGA field value from a register. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_SOC2FPGA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_SOC2FPGA register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_SOC2FPGA_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : lwsoc2fpga
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_LWSOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_LWSOC2FPGA_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_LWSOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_LWSOC2FPGA_MSB        4
/* The width in bits of the ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_LWSOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_LWSOC2FPGA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_LWSOC2FPGA register field value. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_LWSOC2FPGA_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_LWSOC2FPGA register field value. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_LWSOC2FPGA_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_LWSOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_LWSOC2FPGA_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_LWSOC2FPGA field value from a register. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_LWSOC2FPGA_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_LWSOC2FPGA register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_LWSOC2FPGA_SET(value) (((value) << 4) & 0x00000010)

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
 * The struct declaration for register ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR.
 */
struct ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_s
{
    volatile uint32_t  soc2fpga   :  1;  /* ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_SOC2FPGA */
    uint32_t                      :  3;  /* *UNDEFINED* */
    volatile uint32_t  lwsoc2fpga :  1;  /* ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_LWSOC2FPGA */
    uint32_t                      : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR. */
typedef struct ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_s  ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR register. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR register from the beginning of the component. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_OFST        0xc8

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
 *  Bits   | Access | Reset | Description                                 
 * :-------|:-------|:------|:---------------------------------------------
 *  [0]    | W      | 0x0   | ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_SOC2FPGA  
 *  [3:1]  | ???    | 0x0   | *UNDEFINED*                                 
 *  [4]    | W      | 0x0   | ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_LWSOC2FPGA
 *  [31:5] | ???    | 0x0   | *UNDEFINED*                                 
 * 
 */
/*
 * Field : soc2fpga
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_SOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_SOC2FPGA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_SOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_SOC2FPGA_MSB        0
/* The width in bits of the ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_SOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_SOC2FPGA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_SOC2FPGA register field value. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_SOC2FPGA_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_SOC2FPGA register field value. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_SOC2FPGA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_SOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_SOC2FPGA_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_SOC2FPGA field value from a register. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_SOC2FPGA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_SOC2FPGA register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_SOC2FPGA_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : lwsoc2fpga
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_LWSOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_LWSOC2FPGA_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_LWSOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_LWSOC2FPGA_MSB        4
/* The width in bits of the ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_LWSOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_LWSOC2FPGA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_LWSOC2FPGA register field value. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_LWSOC2FPGA_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_LWSOC2FPGA register field value. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_LWSOC2FPGA_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_LWSOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_LWSOC2FPGA_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_LWSOC2FPGA field value from a register. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_LWSOC2FPGA_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_LWSOC2FPGA register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_LWSOC2FPGA_SET(value) (((value) << 4) & 0x00000010)

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
 * The struct declaration for register ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE.
 */
struct ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_s
{
    volatile uint32_t  soc2fpga   :  1;  /* ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_SOC2FPGA */
    uint32_t                      :  3;  /* *UNDEFINED* */
    volatile uint32_t  lwsoc2fpga :  1;  /* ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_LWSOC2FPGA */
    uint32_t                      : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE. */
typedef struct ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_s  ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE register. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE register from the beginning of the component. */
#define ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_OFST        0xcc

/*
 * Register : noc_idleack
 * 
 * Idle acknowledge value from NOC Masters. This is asserted (value 1 in the field)
 * in response to the IDLE requests asserted by software.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [0]    | R      | 0x1   | ALT_SYSMGR_CORE_NOC_IDLEACK_SOC2FPGA  
 *  [3:1]  | ???    | 0x0   | *UNDEFINED*                           
 *  [4]    | R      | 0x1   | ALT_SYSMGR_CORE_NOC_IDLEACK_LWSOC2FPGA
 *  [31:5] | ???    | 0x0   | *UNDEFINED*                           
 * 
 */
/*
 * Field : soc2fpga
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NOC_IDLEACK_SOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEACK_SOC2FPGA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NOC_IDLEACK_SOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEACK_SOC2FPGA_MSB        0
/* The width in bits of the ALT_SYSMGR_CORE_NOC_IDLEACK_SOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEACK_SOC2FPGA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_NOC_IDLEACK_SOC2FPGA register field value. */
#define ALT_SYSMGR_CORE_NOC_IDLEACK_SOC2FPGA_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_CORE_NOC_IDLEACK_SOC2FPGA register field value. */
#define ALT_SYSMGR_CORE_NOC_IDLEACK_SOC2FPGA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_CORE_NOC_IDLEACK_SOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEACK_SOC2FPGA_RESET      0x1
/* Extracts the ALT_SYSMGR_CORE_NOC_IDLEACK_SOC2FPGA field value from a register. */
#define ALT_SYSMGR_CORE_NOC_IDLEACK_SOC2FPGA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_CORE_NOC_IDLEACK_SOC2FPGA register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NOC_IDLEACK_SOC2FPGA_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : lwsoc2fpga
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NOC_IDLEACK_LWSOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEACK_LWSOC2FPGA_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NOC_IDLEACK_LWSOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEACK_LWSOC2FPGA_MSB        4
/* The width in bits of the ALT_SYSMGR_CORE_NOC_IDLEACK_LWSOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEACK_LWSOC2FPGA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_NOC_IDLEACK_LWSOC2FPGA register field value. */
#define ALT_SYSMGR_CORE_NOC_IDLEACK_LWSOC2FPGA_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_CORE_NOC_IDLEACK_LWSOC2FPGA register field value. */
#define ALT_SYSMGR_CORE_NOC_IDLEACK_LWSOC2FPGA_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_CORE_NOC_IDLEACK_LWSOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLEACK_LWSOC2FPGA_RESET      0x1
/* Extracts the ALT_SYSMGR_CORE_NOC_IDLEACK_LWSOC2FPGA field value from a register. */
#define ALT_SYSMGR_CORE_NOC_IDLEACK_LWSOC2FPGA_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_CORE_NOC_IDLEACK_LWSOC2FPGA register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NOC_IDLEACK_LWSOC2FPGA_SET(value) (((value) << 4) & 0x00000010)

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
 * The struct declaration for register ALT_SYSMGR_CORE_NOC_IDLEACK.
 */
struct ALT_SYSMGR_CORE_NOC_IDLEACK_s
{
    const volatile uint32_t  soc2fpga   :  1;  /* ALT_SYSMGR_CORE_NOC_IDLEACK_SOC2FPGA */
    uint32_t                            :  3;  /* *UNDEFINED* */
    const volatile uint32_t  lwsoc2fpga :  1;  /* ALT_SYSMGR_CORE_NOC_IDLEACK_LWSOC2FPGA */
    uint32_t                            : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_NOC_IDLEACK. */
typedef struct ALT_SYSMGR_CORE_NOC_IDLEACK_s  ALT_SYSMGR_CORE_NOC_IDLEACK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_NOC_IDLEACK register. */
#define ALT_SYSMGR_CORE_NOC_IDLEACK_RESET       0x00000011
/* The byte offset of the ALT_SYSMGR_CORE_NOC_IDLEACK register from the beginning of the component. */
#define ALT_SYSMGR_CORE_NOC_IDLEACK_OFST        0xd0

/*
 * Register : noc_idlestatus
 * 
 * Status of IDLE from the NOC masters. A 1 in the field means the specific master
 * is idle.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                              
 * :-------|:-------|:------|:------------------------------------------
 *  [0]    | R      | 0x1   | ALT_SYSMGR_CORE_NOC_IDLESTATUS_SOC2FPGA  
 *  [3:1]  | ???    | 0x0   | *UNDEFINED*                              
 *  [4]    | R      | 0x1   | ALT_SYSMGR_CORE_NOC_IDLESTATUS_LWSOC2FPGA
 *  [31:5] | ???    | 0x0   | *UNDEFINED*                              
 * 
 */
/*
 * Field : soc2fpga
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NOC_IDLESTATUS_SOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLESTATUS_SOC2FPGA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NOC_IDLESTATUS_SOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLESTATUS_SOC2FPGA_MSB        0
/* The width in bits of the ALT_SYSMGR_CORE_NOC_IDLESTATUS_SOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLESTATUS_SOC2FPGA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_NOC_IDLESTATUS_SOC2FPGA register field value. */
#define ALT_SYSMGR_CORE_NOC_IDLESTATUS_SOC2FPGA_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_CORE_NOC_IDLESTATUS_SOC2FPGA register field value. */
#define ALT_SYSMGR_CORE_NOC_IDLESTATUS_SOC2FPGA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_CORE_NOC_IDLESTATUS_SOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLESTATUS_SOC2FPGA_RESET      0x1
/* Extracts the ALT_SYSMGR_CORE_NOC_IDLESTATUS_SOC2FPGA field value from a register. */
#define ALT_SYSMGR_CORE_NOC_IDLESTATUS_SOC2FPGA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_CORE_NOC_IDLESTATUS_SOC2FPGA register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NOC_IDLESTATUS_SOC2FPGA_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : lwsoc2fpga
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_NOC_IDLESTATUS_LWSOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLESTATUS_LWSOC2FPGA_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_NOC_IDLESTATUS_LWSOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLESTATUS_LWSOC2FPGA_MSB        4
/* The width in bits of the ALT_SYSMGR_CORE_NOC_IDLESTATUS_LWSOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLESTATUS_LWSOC2FPGA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_NOC_IDLESTATUS_LWSOC2FPGA register field value. */
#define ALT_SYSMGR_CORE_NOC_IDLESTATUS_LWSOC2FPGA_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_CORE_NOC_IDLESTATUS_LWSOC2FPGA register field value. */
#define ALT_SYSMGR_CORE_NOC_IDLESTATUS_LWSOC2FPGA_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_CORE_NOC_IDLESTATUS_LWSOC2FPGA register field. */
#define ALT_SYSMGR_CORE_NOC_IDLESTATUS_LWSOC2FPGA_RESET      0x1
/* Extracts the ALT_SYSMGR_CORE_NOC_IDLESTATUS_LWSOC2FPGA field value from a register. */
#define ALT_SYSMGR_CORE_NOC_IDLESTATUS_LWSOC2FPGA_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_CORE_NOC_IDLESTATUS_LWSOC2FPGA register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_NOC_IDLESTATUS_LWSOC2FPGA_SET(value) (((value) << 4) & 0x00000010)

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
 * The struct declaration for register ALT_SYSMGR_CORE_NOC_IDLESTATUS.
 */
struct ALT_SYSMGR_CORE_NOC_IDLESTATUS_s
{
    const volatile uint32_t  soc2fpga   :  1;  /* ALT_SYSMGR_CORE_NOC_IDLESTATUS_SOC2FPGA */
    uint32_t                            :  3;  /* *UNDEFINED* */
    const volatile uint32_t  lwsoc2fpga :  1;  /* ALT_SYSMGR_CORE_NOC_IDLESTATUS_LWSOC2FPGA */
    uint32_t                            : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_NOC_IDLESTATUS. */
typedef struct ALT_SYSMGR_CORE_NOC_IDLESTATUS_s  ALT_SYSMGR_CORE_NOC_IDLESTATUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_NOC_IDLESTATUS register. */
#define ALT_SYSMGR_CORE_NOC_IDLESTATUS_RESET       0x00000011
/* The byte offset of the ALT_SYSMGR_CORE_NOC_IDLESTATUS register from the beginning of the component. */
#define ALT_SYSMGR_CORE_NOC_IDLESTATUS_OFST        0xd4

/*
 * Register : fpga2soc_ctrl
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                               
 * :-------|:-------|:------|:-------------------------------------------
 *  [0]    | RW     | 0x1   | ALT_SYSMGR_CORE_FPGA2SOC_CTRL_ALLOW_SECURE
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                               
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
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_FPGA2SOC_CTRL_ALLOW_SECURE register field. */
#define ALT_SYSMGR_CORE_FPGA2SOC_CTRL_ALLOW_SECURE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_FPGA2SOC_CTRL_ALLOW_SECURE register field. */
#define ALT_SYSMGR_CORE_FPGA2SOC_CTRL_ALLOW_SECURE_MSB        0
/* The width in bits of the ALT_SYSMGR_CORE_FPGA2SOC_CTRL_ALLOW_SECURE register field. */
#define ALT_SYSMGR_CORE_FPGA2SOC_CTRL_ALLOW_SECURE_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_FPGA2SOC_CTRL_ALLOW_SECURE register field value. */
#define ALT_SYSMGR_CORE_FPGA2SOC_CTRL_ALLOW_SECURE_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_CORE_FPGA2SOC_CTRL_ALLOW_SECURE register field value. */
#define ALT_SYSMGR_CORE_FPGA2SOC_CTRL_ALLOW_SECURE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_CORE_FPGA2SOC_CTRL_ALLOW_SECURE register field. */
#define ALT_SYSMGR_CORE_FPGA2SOC_CTRL_ALLOW_SECURE_RESET      0x1
/* Extracts the ALT_SYSMGR_CORE_FPGA2SOC_CTRL_ALLOW_SECURE field value from a register. */
#define ALT_SYSMGR_CORE_FPGA2SOC_CTRL_ALLOW_SECURE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_CORE_FPGA2SOC_CTRL_ALLOW_SECURE register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_FPGA2SOC_CTRL_ALLOW_SECURE_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_SYSMGR_CORE_FPGA2SOC_CTRL.
 */
struct ALT_SYSMGR_CORE_FPGA2SOC_CTRL_s
{
    volatile uint32_t  allow_secure :  1;  /* ALT_SYSMGR_CORE_FPGA2SOC_CTRL_ALLOW_SECURE */
    uint32_t                        : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_FPGA2SOC_CTRL. */
typedef struct ALT_SYSMGR_CORE_FPGA2SOC_CTRL_s  ALT_SYSMGR_CORE_FPGA2SOC_CTRL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_FPGA2SOC_CTRL register. */
#define ALT_SYSMGR_CORE_FPGA2SOC_CTRL_RESET       0x00000001
/* The byte offset of the ALT_SYSMGR_CORE_FPGA2SOC_CTRL register from the beginning of the component. */
#define ALT_SYSMGR_CORE_FPGA2SOC_CTRL_OFST        0xd8

/*
 * Register : fpga_config
 * 
 * FPGA configuration read only register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                               
 * :-------|:-------|:------|:-------------------------------------------
 *  [0]    | R      | 0x0   | ALT_SYSMGR_CORE_FPGA_CONFIG_FPGA_COMPLETE 
 *  [1]    | R      | 0x0   | ALT_SYSMGR_CORE_FPGA_CONFIG_EARLY_USERMODE
 *  [31:2] | ???    | 0x0   | *UNDEFINED*                               
 * 
 */
/*
 * Field : fpga_complete
 * 
 * FGPA configuration complete
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_FPGA_CONFIG_FPGA_COMPLETE register field. */
#define ALT_SYSMGR_CORE_FPGA_CONFIG_FPGA_COMPLETE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_FPGA_CONFIG_FPGA_COMPLETE register field. */
#define ALT_SYSMGR_CORE_FPGA_CONFIG_FPGA_COMPLETE_MSB        0
/* The width in bits of the ALT_SYSMGR_CORE_FPGA_CONFIG_FPGA_COMPLETE register field. */
#define ALT_SYSMGR_CORE_FPGA_CONFIG_FPGA_COMPLETE_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_FPGA_CONFIG_FPGA_COMPLETE register field value. */
#define ALT_SYSMGR_CORE_FPGA_CONFIG_FPGA_COMPLETE_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_CORE_FPGA_CONFIG_FPGA_COMPLETE register field value. */
#define ALT_SYSMGR_CORE_FPGA_CONFIG_FPGA_COMPLETE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_CORE_FPGA_CONFIG_FPGA_COMPLETE register field. */
#define ALT_SYSMGR_CORE_FPGA_CONFIG_FPGA_COMPLETE_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_FPGA_CONFIG_FPGA_COMPLETE field value from a register. */
#define ALT_SYSMGR_CORE_FPGA_CONFIG_FPGA_COMPLETE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_CORE_FPGA_CONFIG_FPGA_COMPLETE register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_FPGA_CONFIG_FPGA_COMPLETE_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : early_usermode
 * 
 * FGPA configuration complete
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_FPGA_CONFIG_EARLY_USERMODE register field. */
#define ALT_SYSMGR_CORE_FPGA_CONFIG_EARLY_USERMODE_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_FPGA_CONFIG_EARLY_USERMODE register field. */
#define ALT_SYSMGR_CORE_FPGA_CONFIG_EARLY_USERMODE_MSB        1
/* The width in bits of the ALT_SYSMGR_CORE_FPGA_CONFIG_EARLY_USERMODE register field. */
#define ALT_SYSMGR_CORE_FPGA_CONFIG_EARLY_USERMODE_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_FPGA_CONFIG_EARLY_USERMODE register field value. */
#define ALT_SYSMGR_CORE_FPGA_CONFIG_EARLY_USERMODE_SET_MSK    0x00000002
/* The mask used to clear the ALT_SYSMGR_CORE_FPGA_CONFIG_EARLY_USERMODE register field value. */
#define ALT_SYSMGR_CORE_FPGA_CONFIG_EARLY_USERMODE_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SYSMGR_CORE_FPGA_CONFIG_EARLY_USERMODE register field. */
#define ALT_SYSMGR_CORE_FPGA_CONFIG_EARLY_USERMODE_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_FPGA_CONFIG_EARLY_USERMODE field value from a register. */
#define ALT_SYSMGR_CORE_FPGA_CONFIG_EARLY_USERMODE_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SYSMGR_CORE_FPGA_CONFIG_EARLY_USERMODE register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_FPGA_CONFIG_EARLY_USERMODE_SET(value) (((value) << 1) & 0x00000002)

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
 * The struct declaration for register ALT_SYSMGR_CORE_FPGA_CONFIG.
 */
struct ALT_SYSMGR_CORE_FPGA_CONFIG_s
{
    const volatile uint32_t  fpga_complete  :  1;  /* ALT_SYSMGR_CORE_FPGA_CONFIG_FPGA_COMPLETE */
    const volatile uint32_t  early_usermode :  1;  /* ALT_SYSMGR_CORE_FPGA_CONFIG_EARLY_USERMODE */
    uint32_t                                : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_FPGA_CONFIG. */
typedef struct ALT_SYSMGR_CORE_FPGA_CONFIG_s  ALT_SYSMGR_CORE_FPGA_CONFIG_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_FPGA_CONFIG register. */
#define ALT_SYSMGR_CORE_FPGA_CONFIG_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_FPGA_CONFIG register from the beginning of the component. */
#define ALT_SYSMGR_CORE_FPGA_CONFIG_OFST        0xdc

/*
 * Register : iocsrclk_gate
 * 
 * IO Clock control
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                        
 * :--------|:-------|:------|:------------------------------------
 *  [0]     | RW     | 0x0   | ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEA
 *  [7:1]   | ???    | 0x0   | *UNDEFINED*                        
 *  [8]     | RW     | 0x0   | ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEB
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*                        
 *  [16]    | RW     | 0x0   | ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEC
 *  [31:17] | ???    | 0x0   | *UNDEFINED*                        
 * 
 */
/*
 * Field : tilea
 * 
 * Tile A clock control
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEA register field. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEA register field. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEA_MSB        0
/* The width in bits of the ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEA register field. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEA_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEA register field value. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEA_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEA register field value. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEA register field. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEA_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEA field value from a register. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEA register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEA_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : tileb
 * 
 * Tile B clock control
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEB register field. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEB_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEB register field. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEB_MSB        8
/* The width in bits of the ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEB register field. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEB_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEB register field value. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEB_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEB register field value. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEB_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEB register field. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEB_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEB field value from a register. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEB_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEB register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEB_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : tilec
 * 
 * Tile C clock control
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEC register field. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEC register field. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEC_MSB        16
/* The width in bits of the ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEC register field. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEC_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEC register field value. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEC_SET_MSK    0x00010000
/* The mask used to clear the ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEC register field value. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEC register field. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEC_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEC field value from a register. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEC register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEC_SET(value) (((value) << 16) & 0x00010000)

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
 * The struct declaration for register ALT_SYSMGR_CORE_IOCSRCLK_GATE.
 */
struct ALT_SYSMGR_CORE_IOCSRCLK_GATE_s
{
    volatile uint32_t  tilea :  1;  /* ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEA */
    uint32_t                 :  7;  /* *UNDEFINED* */
    volatile uint32_t  tileb :  1;  /* ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEB */
    uint32_t                 :  7;  /* *UNDEFINED* */
    volatile uint32_t  tilec :  1;  /* ALT_SYSMGR_CORE_IOCSRCLK_GATE_TILEC */
    uint32_t                 : 15;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_IOCSRCLK_GATE. */
typedef struct ALT_SYSMGR_CORE_IOCSRCLK_GATE_s  ALT_SYSMGR_CORE_IOCSRCLK_GATE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_IOCSRCLK_GATE register. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_IOCSRCLK_GATE register from the beginning of the component. */
#define ALT_SYSMGR_CORE_IOCSRCLK_GATE_OFST        0xe0

/*
 * Register : gpo
 * 
 * Provides a low-latency, low-performance, and simple way to drive general-purpose
 * signals to the FPGA fabric
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description            
 * :-------|:-------|:------|:------------------------
 *  [31:0] | RW     | 0x0   | ALT_SYSMGR_CORE_GPO_VAL
 * 
 */
/*
 * Field : val
 * 
 * Drives s2f_gp[31:0] with specified value. When read, returns the current value
 * being driven to the FPGA fabric
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_GPO_VAL register field. */
#define ALT_SYSMGR_CORE_GPO_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_GPO_VAL register field. */
#define ALT_SYSMGR_CORE_GPO_VAL_MSB        31
/* The width in bits of the ALT_SYSMGR_CORE_GPO_VAL register field. */
#define ALT_SYSMGR_CORE_GPO_VAL_WIDTH      32
/* The mask used to set the ALT_SYSMGR_CORE_GPO_VAL register field value. */
#define ALT_SYSMGR_CORE_GPO_VAL_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_CORE_GPO_VAL register field value. */
#define ALT_SYSMGR_CORE_GPO_VAL_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_CORE_GPO_VAL register field. */
#define ALT_SYSMGR_CORE_GPO_VAL_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_GPO_VAL field value from a register. */
#define ALT_SYSMGR_CORE_GPO_VAL_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_CORE_GPO_VAL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_GPO_VAL_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SYSMGR_CORE_GPO.
 */
struct ALT_SYSMGR_CORE_GPO_s
{
    volatile uint32_t  val : 32;  /* ALT_SYSMGR_CORE_GPO_VAL */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_GPO. */
typedef struct ALT_SYSMGR_CORE_GPO_s  ALT_SYSMGR_CORE_GPO_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_GPO register. */
#define ALT_SYSMGR_CORE_GPO_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_GPO register from the beginning of the component. */
#define ALT_SYSMGR_CORE_GPO_OFST        0xe4

/*
 * Register : gpi
 * 
 * Provides a low-latency, low-performance, and simple way to read general-purpose
 * signals driven from the FPGA fabric.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description            
 * :-------|:-------|:------|:------------------------
 *  [31:0] | R      | 0x0   | ALT_SYSMGR_CORE_GPI_VAL
 * 
 */
/*
 * Field : val
 * 
 * The value being driven from the FPGA fabric on f2s_gp[31:0]. If the FPGA is not
 * in User Mode, the value of this field is undefined.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_GPI_VAL register field. */
#define ALT_SYSMGR_CORE_GPI_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_GPI_VAL register field. */
#define ALT_SYSMGR_CORE_GPI_VAL_MSB        31
/* The width in bits of the ALT_SYSMGR_CORE_GPI_VAL register field. */
#define ALT_SYSMGR_CORE_GPI_VAL_WIDTH      32
/* The mask used to set the ALT_SYSMGR_CORE_GPI_VAL register field value. */
#define ALT_SYSMGR_CORE_GPI_VAL_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_CORE_GPI_VAL register field value. */
#define ALT_SYSMGR_CORE_GPI_VAL_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_CORE_GPI_VAL register field. */
#define ALT_SYSMGR_CORE_GPI_VAL_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_GPI_VAL field value from a register. */
#define ALT_SYSMGR_CORE_GPI_VAL_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_CORE_GPI_VAL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_GPI_VAL_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SYSMGR_CORE_GPI.
 */
struct ALT_SYSMGR_CORE_GPI_s
{
    const volatile uint32_t  val : 32;  /* ALT_SYSMGR_CORE_GPI_VAL */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_GPI. */
typedef struct ALT_SYSMGR_CORE_GPI_s  ALT_SYSMGR_CORE_GPI_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_GPI register. */
#define ALT_SYSMGR_CORE_GPI_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_GPI register from the beginning of the component. */
#define ALT_SYSMGR_CORE_GPI_OFST        0xe8

/*
 * Register : mpu
 * 
 * Provides a low-latency, low-performance, and simple way to read general-purpose
 * signals driven from the FPGA fabric.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [0]    | RW     | 0x0   | ALT_SYSMGR_CORE_MPU_MPU_CFGSDISABLE
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                        
 * 
 */
/*
 * Field : mpu_cfgsdisable
 * 
 * CFGSDISABLE is typically de-asserted (0) from reset until Secure software has
 * configured the GIC-400 and then subsequently asserted permanently to provide
 * extra security.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_MPU_MPU_CFGSDISABLE register field. */
#define ALT_SYSMGR_CORE_MPU_MPU_CFGSDISABLE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_MPU_MPU_CFGSDISABLE register field. */
#define ALT_SYSMGR_CORE_MPU_MPU_CFGSDISABLE_MSB        0
/* The width in bits of the ALT_SYSMGR_CORE_MPU_MPU_CFGSDISABLE register field. */
#define ALT_SYSMGR_CORE_MPU_MPU_CFGSDISABLE_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_MPU_MPU_CFGSDISABLE register field value. */
#define ALT_SYSMGR_CORE_MPU_MPU_CFGSDISABLE_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_CORE_MPU_MPU_CFGSDISABLE register field value. */
#define ALT_SYSMGR_CORE_MPU_MPU_CFGSDISABLE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_CORE_MPU_MPU_CFGSDISABLE register field. */
#define ALT_SYSMGR_CORE_MPU_MPU_CFGSDISABLE_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_MPU_MPU_CFGSDISABLE field value from a register. */
#define ALT_SYSMGR_CORE_MPU_MPU_CFGSDISABLE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_CORE_MPU_MPU_CFGSDISABLE register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_MPU_MPU_CFGSDISABLE_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_SYSMGR_CORE_MPU.
 */
struct ALT_SYSMGR_CORE_MPU_s
{
    volatile uint32_t  mpu_cfgsdisable :  1;  /* ALT_SYSMGR_CORE_MPU_MPU_CFGSDISABLE */
    uint32_t                           : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_MPU. */
typedef struct ALT_SYSMGR_CORE_MPU_s  ALT_SYSMGR_CORE_MPU_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_MPU register. */
#define ALT_SYSMGR_CORE_MPU_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_MPU register from the beginning of the component. */
#define ALT_SYSMGR_CORE_MPU_OFST        0xf0

/*
 * Register : sdm_hps_spare
 * 
 * SDM to HPS spare signals are mapped to a system manager register. PSI side band
 * signals will set these bits and HPS SW will clear this register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                         
 * :--------|:-------|:------|:-------------------------------------
 *  [0]     | RW     | 0x0   | ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_0 
 *  [1]     | RW     | 0x0   | ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_1 
 *  [2]     | RW     | 0x0   | ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_2 
 *  [3]     | RW     | 0x0   | ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_3 
 *  [4]     | RW     | 0x0   | ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_4 
 *  [5]     | RW     | 0x0   | ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_5 
 *  [6]     | RW     | 0x0   | ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_6 
 *  [7]     | RW     | 0x0   | ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_7 
 *  [8]     | RW     | 0x0   | ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_8 
 *  [9]     | RW     | 0x0   | ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_9 
 *  [10]    | RW     | 0x0   | ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_10
 *  [11]    | RW     | 0x0   | ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_11
 *  [31:12] | ???    | 0x0   | *UNDEFINED*                         
 * 
 */
/*
 * Field : bit_0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_0 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_0 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_0_MSB        0
/* The width in bits of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_0 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_0_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_0 register field value. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_0_SET_MSK    0x00000001
/* The mask used to clear the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_0 register field value. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_0 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_0_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_0 field value from a register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_0 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : bit_1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_1 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_1_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_1 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_1_MSB        1
/* The width in bits of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_1 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_1_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_1 register field value. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_1_SET_MSK    0x00000002
/* The mask used to clear the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_1 register field value. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_1_CLR_MSK    0xfffffffd
/* The reset value of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_1 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_1_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_1 field value from a register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_1_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_1 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_1_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : bit_2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_2 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_2_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_2 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_2_MSB        2
/* The width in bits of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_2 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_2_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_2 register field value. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_2_SET_MSK    0x00000004
/* The mask used to clear the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_2 register field value. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_2_CLR_MSK    0xfffffffb
/* The reset value of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_2 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_2_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_2 field value from a register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_2_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_2 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_2_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : bit_3
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_3 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_3_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_3 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_3_MSB        3
/* The width in bits of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_3 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_3_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_3 register field value. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_3_SET_MSK    0x00000008
/* The mask used to clear the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_3 register field value. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_3_CLR_MSK    0xfffffff7
/* The reset value of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_3 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_3_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_3 field value from a register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_3_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_3 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_3_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : bit_4
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_4 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_4_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_4 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_4_MSB        4
/* The width in bits of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_4 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_4_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_4 register field value. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_4_SET_MSK    0x00000010
/* The mask used to clear the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_4 register field value. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_4_CLR_MSK    0xffffffef
/* The reset value of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_4 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_4_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_4 field value from a register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_4_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_4 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_4_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : bit_5
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_5 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_5_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_5 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_5_MSB        5
/* The width in bits of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_5 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_5_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_5 register field value. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_5_SET_MSK    0x00000020
/* The mask used to clear the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_5 register field value. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_5_CLR_MSK    0xffffffdf
/* The reset value of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_5 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_5_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_5 field value from a register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_5_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_5 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_5_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : bit_6
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_6 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_6_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_6 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_6_MSB        6
/* The width in bits of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_6 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_6_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_6 register field value. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_6_SET_MSK    0x00000040
/* The mask used to clear the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_6 register field value. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_6_CLR_MSK    0xffffffbf
/* The reset value of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_6 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_6_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_6 field value from a register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_6_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_6 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_6_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : bit_7
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_7 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_7_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_7 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_7_MSB        7
/* The width in bits of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_7 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_7_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_7 register field value. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_7_SET_MSK    0x00000080
/* The mask used to clear the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_7 register field value. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_7_CLR_MSK    0xffffff7f
/* The reset value of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_7 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_7_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_7 field value from a register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_7_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_7 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_7_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : bit_8
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_8 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_8_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_8 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_8_MSB        8
/* The width in bits of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_8 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_8_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_8 register field value. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_8_SET_MSK    0x00000100
/* The mask used to clear the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_8 register field value. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_8_CLR_MSK    0xfffffeff
/* The reset value of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_8 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_8_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_8 field value from a register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_8_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_8 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_8_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : bit_9
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_9 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_9_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_9 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_9_MSB        9
/* The width in bits of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_9 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_9_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_9 register field value. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_9_SET_MSK    0x00000200
/* The mask used to clear the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_9 register field value. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_9_CLR_MSK    0xfffffdff
/* The reset value of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_9 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_9_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_9 field value from a register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_9_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_9 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_9_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : bit_10
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_10 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_10_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_10 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_10_MSB        10
/* The width in bits of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_10 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_10_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_10 register field value. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_10_SET_MSK    0x00000400
/* The mask used to clear the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_10 register field value. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_10_CLR_MSK    0xfffffbff
/* The reset value of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_10 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_10_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_10 field value from a register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_10_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_10 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_10_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : bit_11
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_11 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_11_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_11 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_11_MSB        11
/* The width in bits of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_11 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_11_WIDTH      1
/* The mask used to set the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_11 register field value. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_11_SET_MSK    0x00000800
/* The mask used to clear the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_11 register field value. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_11_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_11 register field. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_11_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_11 field value from a register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_11_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_11 register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_11_SET(value) (((value) << 11) & 0x00000800)

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
 * The struct declaration for register ALT_SYSMGR_CORE_SDM_HPS_SPARE.
 */
struct ALT_SYSMGR_CORE_SDM_HPS_SPARE_s
{
    volatile uint32_t  bit_0  :  1;  /* ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_0 */
    volatile uint32_t  bit_1  :  1;  /* ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_1 */
    volatile uint32_t  bit_2  :  1;  /* ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_2 */
    volatile uint32_t  bit_3  :  1;  /* ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_3 */
    volatile uint32_t  bit_4  :  1;  /* ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_4 */
    volatile uint32_t  bit_5  :  1;  /* ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_5 */
    volatile uint32_t  bit_6  :  1;  /* ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_6 */
    volatile uint32_t  bit_7  :  1;  /* ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_7 */
    volatile uint32_t  bit_8  :  1;  /* ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_8 */
    volatile uint32_t  bit_9  :  1;  /* ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_9 */
    volatile uint32_t  bit_10 :  1;  /* ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_10 */
    volatile uint32_t  bit_11 :  1;  /* ALT_SYSMGR_CORE_SDM_HPS_SPARE_BIT_11 */
    uint32_t                  : 20;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_SDM_HPS_SPARE. */
typedef struct ALT_SYSMGR_CORE_SDM_HPS_SPARE_s  ALT_SYSMGR_CORE_SDM_HPS_SPARE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_SDM_HPS_SPARE register. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_SDM_HPS_SPARE register from the beginning of the component. */
#define ALT_SYSMGR_CORE_SDM_HPS_SPARE_OFST        0xf4

/*
 * Register : hps_sdm_spare
 * 
 * HPS to SDM spare signals are mapped to a system manager register.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                      
 * :--------|:-------|:------|:----------------------------------
 *  [18:0]  | RW     | 0x0   | ALT_SYSMGR_CORE_HPS_SDM_SPARE_VAL
 *  [31:19] | ???    | 0x0   | *UNDEFINED*                      
 * 
 */
/*
 * Field : val
 * 
 * write to this register will drive the value PSI spare ports.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_HPS_SDM_SPARE_VAL register field. */
#define ALT_SYSMGR_CORE_HPS_SDM_SPARE_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_HPS_SDM_SPARE_VAL register field. */
#define ALT_SYSMGR_CORE_HPS_SDM_SPARE_VAL_MSB        18
/* The width in bits of the ALT_SYSMGR_CORE_HPS_SDM_SPARE_VAL register field. */
#define ALT_SYSMGR_CORE_HPS_SDM_SPARE_VAL_WIDTH      19
/* The mask used to set the ALT_SYSMGR_CORE_HPS_SDM_SPARE_VAL register field value. */
#define ALT_SYSMGR_CORE_HPS_SDM_SPARE_VAL_SET_MSK    0x0007ffff
/* The mask used to clear the ALT_SYSMGR_CORE_HPS_SDM_SPARE_VAL register field value. */
#define ALT_SYSMGR_CORE_HPS_SDM_SPARE_VAL_CLR_MSK    0xfff80000
/* The reset value of the ALT_SYSMGR_CORE_HPS_SDM_SPARE_VAL register field. */
#define ALT_SYSMGR_CORE_HPS_SDM_SPARE_VAL_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_HPS_SDM_SPARE_VAL field value from a register. */
#define ALT_SYSMGR_CORE_HPS_SDM_SPARE_VAL_GET(value) (((value) & 0x0007ffff) >> 0)
/* Produces a ALT_SYSMGR_CORE_HPS_SDM_SPARE_VAL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_HPS_SDM_SPARE_VAL_SET(value) (((value) << 0) & 0x0007ffff)

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
 * The struct declaration for register ALT_SYSMGR_CORE_HPS_SDM_SPARE.
 */
struct ALT_SYSMGR_CORE_HPS_SDM_SPARE_s
{
    volatile uint32_t  val : 19;  /* ALT_SYSMGR_CORE_HPS_SDM_SPARE_VAL */
    uint32_t               : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_HPS_SDM_SPARE. */
typedef struct ALT_SYSMGR_CORE_HPS_SDM_SPARE_s  ALT_SYSMGR_CORE_HPS_SDM_SPARE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_HPS_SDM_SPARE register. */
#define ALT_SYSMGR_CORE_HPS_SDM_SPARE_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_HPS_SDM_SPARE register from the beginning of the component. */
#define ALT_SYSMGR_CORE_HPS_SDM_SPARE_OFST        0xf8

/*
 * Register : boot_scratch_cold0
 * 
 * Boot scratch register 0
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0_VAL
 * 
 */
/*
 * Field : val
 * 
 * the scratch register value
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0_VAL_MSB        31
/* The width in bits of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0_VAL_WIDTH      32
/* The mask used to set the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0_VAL register field value. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0_VAL_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0_VAL register field value. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0_VAL_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0_VAL_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0_VAL field value from a register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0_VAL_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0_VAL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0_VAL_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0.
 */
struct ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0_s
{
    volatile uint32_t  val : 32;  /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0_VAL */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0. */
typedef struct ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0_s  ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0 register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0 register from the beginning of the component. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0_OFST        0x200

/*
 * Register : boot_scratch_cold1
 * 
 * Boot scratch register 1
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1_VAL
 * 
 */
/*
 * Field : val
 * 
 * the scratch register value
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1_VAL_MSB        31
/* The width in bits of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1_VAL_WIDTH      32
/* The mask used to set the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1_VAL register field value. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1_VAL_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1_VAL register field value. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1_VAL_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1_VAL_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1_VAL field value from a register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1_VAL_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1_VAL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1_VAL_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1.
 */
struct ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1_s
{
    volatile uint32_t  val : 32;  /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1_VAL */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1. */
typedef struct ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1_s  ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1 register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1 register from the beginning of the component. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1_OFST        0x204

/*
 * Register : boot_scratch_cold2
 * 
 * Boot scratch register 2
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2_VAL
 * 
 */
/*
 * Field : val
 * 
 * the scratch register value
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2_VAL_MSB        31
/* The width in bits of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2_VAL_WIDTH      32
/* The mask used to set the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2_VAL register field value. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2_VAL_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2_VAL register field value. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2_VAL_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2_VAL_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2_VAL field value from a register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2_VAL_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2_VAL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2_VAL_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2.
 */
struct ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2_s
{
    volatile uint32_t  val : 32;  /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2_VAL */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2. */
typedef struct ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2_s  ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2 register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2 register from the beginning of the component. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2_OFST        0x208

/*
 * Register : boot_scratch_cold3
 * 
 * Boot scratch register 3
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3_VAL
 * 
 */
/*
 * Field : val
 * 
 * the scratch register value
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3_VAL_MSB        31
/* The width in bits of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3_VAL_WIDTH      32
/* The mask used to set the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3_VAL register field value. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3_VAL_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3_VAL register field value. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3_VAL_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3_VAL_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3_VAL field value from a register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3_VAL_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3_VAL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3_VAL_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3.
 */
struct ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3_s
{
    volatile uint32_t  val : 32;  /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3_VAL */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3. */
typedef struct ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3_s  ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3 register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3 register from the beginning of the component. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3_OFST        0x20c

/*
 * Register : boot_scratch_cold4
 * 
 * Boot scratch register 4
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4_VAL
 * 
 */
/*
 * Field : val
 * 
 * the scratch register value
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4_VAL_MSB        31
/* The width in bits of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4_VAL_WIDTH      32
/* The mask used to set the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4_VAL register field value. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4_VAL_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4_VAL register field value. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4_VAL_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4_VAL_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4_VAL field value from a register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4_VAL_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4_VAL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4_VAL_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4.
 */
struct ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4_s
{
    volatile uint32_t  val : 32;  /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4_VAL */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4. */
typedef struct ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4_s  ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4 register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4 register from the beginning of the component. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4_OFST        0x210

/*
 * Register : boot_scratch_cold5
 * 
 * Boot scratch register 5
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5_VAL
 * 
 */
/*
 * Field : val
 * 
 * the scratch register value
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5_VAL_MSB        31
/* The width in bits of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5_VAL_WIDTH      32
/* The mask used to set the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5_VAL register field value. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5_VAL_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5_VAL register field value. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5_VAL_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5_VAL_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5_VAL field value from a register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5_VAL_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5_VAL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5_VAL_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5.
 */
struct ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5_s
{
    volatile uint32_t  val : 32;  /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5_VAL */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5. */
typedef struct ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5_s  ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5 register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5 register from the beginning of the component. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5_OFST        0x214

/*
 * Register : boot_scratch_cold6
 * 
 * Boot scratch register 6
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6_VAL
 * 
 */
/*
 * Field : val
 * 
 * the scratch register value
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6_VAL_MSB        31
/* The width in bits of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6_VAL_WIDTH      32
/* The mask used to set the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6_VAL register field value. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6_VAL_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6_VAL register field value. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6_VAL_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6_VAL_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6_VAL field value from a register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6_VAL_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6_VAL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6_VAL_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6.
 */
struct ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6_s
{
    volatile uint32_t  val : 32;  /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6_VAL */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6. */
typedef struct ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6_s  ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6 register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6 register from the beginning of the component. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6_OFST        0x218

/*
 * Register : boot_scratch_cold7
 * 
 * Boot scratch register 7
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7_VAL
 * 
 */
/*
 * Field : val
 * 
 * the scratch register value
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7_VAL_MSB        31
/* The width in bits of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7_VAL_WIDTH      32
/* The mask used to set the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7_VAL register field value. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7_VAL_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7_VAL register field value. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7_VAL_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7_VAL_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7_VAL field value from a register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7_VAL_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7_VAL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7_VAL_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7.
 */
struct ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7_s
{
    volatile uint32_t  val : 32;  /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7_VAL */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7. */
typedef struct ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7_s  ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7 register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7 register from the beginning of the component. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7_OFST        0x21c

/*
 * Register : boot_scratch_cold8
 * 
 * Boot scratch register 8
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8_VAL
 * 
 */
/*
 * Field : val
 * 
 * the scratch register value
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8_VAL_MSB        31
/* The width in bits of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8_VAL_WIDTH      32
/* The mask used to set the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8_VAL register field value. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8_VAL_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8_VAL register field value. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8_VAL_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8_VAL_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8_VAL field value from a register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8_VAL_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8_VAL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8_VAL_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8.
 */
struct ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8_s
{
    volatile uint32_t  val : 32;  /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8_VAL */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8. */
typedef struct ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8_s  ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8 register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8 register from the beginning of the component. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8_OFST        0x220

/*
 * Register : boot_scratch_cold9
 * 
 * Boot scratch register 9
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9_VAL
 * 
 */
/*
 * Field : val
 * 
 * the scratch register value
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9_VAL_MSB        31
/* The width in bits of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9_VAL_WIDTH      32
/* The mask used to set the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9_VAL register field value. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9_VAL_SET_MSK    0xffffffff
/* The mask used to clear the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9_VAL register field value. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9_VAL_CLR_MSK    0x00000000
/* The reset value of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9_VAL register field. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9_VAL_RESET      0x0
/* Extracts the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9_VAL field value from a register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9_VAL_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9_VAL register field value suitable for setting the register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9_VAL_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9.
 */
struct ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9_s
{
    volatile uint32_t  val : 32;  /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9_VAL */
};

/* The typedef declaration for register ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9. */
typedef struct ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9_s  ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9 register. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9_RESET       0x00000000
/* The byte offset of the ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9 register from the beginning of the component. */
#define ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9_OFST        0x224

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
 * The struct declaration for register group ALT_SYSMGR_CORE.
 */
struct ALT_SYSMGR_CORE_s
{
    volatile ALT_SYSMGR_CORE_SILICONID1_t          siliconid1;             /* ALT_SYSMGR_CORE_SILICONID1 */
    volatile ALT_SYSMGR_CORE_SILICONID2_t          siliconid2;             /* ALT_SYSMGR_CORE_SILICONID2 */
    volatile ALT_SYSMGR_CORE_WDDBG_t               wddbg;                  /* ALT_SYSMGR_CORE_WDDBG */
    volatile uint32_t                              _pad_0xc_0xf;           /* *UNDEFINED* */
    volatile ALT_SYSMGR_CORE_MPU_STATUS_t          mpu_status;             /* ALT_SYSMGR_CORE_MPU_STATUS */
    volatile ALT_SYSMGR_CORE_MPU_ACE_t             mpu_ace;                /* ALT_SYSMGR_CORE_MPU_ACE */
    volatile uint32_t                              _pad_0x18_0x1f[2];      /* *UNDEFINED* */
    volatile ALT_SYSMGR_CORE_DMA_t                 dma;                    /* ALT_SYSMGR_CORE_DMA */
    volatile ALT_SYSMGR_CORE_DMA_PERIPH_t          dma_periph;             /* ALT_SYSMGR_CORE_DMA_PERIPH */
    volatile ALT_SYSMGR_CORE_SDMMC_t               sdmmc;                  /* ALT_SYSMGR_CORE_SDMMC */
    volatile ALT_SYSMGR_CORE_SDMMC_L3MASTER_t      sdmmc_l3master;         /* ALT_SYSMGR_CORE_SDMMC_L3MASTER */
    volatile ALT_SYSMGR_CORE_NAND_BOOTSTRAP_t      nand_bootstrap;         /* ALT_SYSMGR_CORE_NAND_BOOTSTRAP */
    volatile ALT_SYSMGR_CORE_NAND_L3MASTER_t       nand_l3master;          /* ALT_SYSMGR_CORE_NAND_L3MASTER */
    volatile ALT_SYSMGR_CORE_USB0_L3MASTER_t       usb0_l3master;          /* ALT_SYSMGR_CORE_USB0_L3MASTER */
    volatile ALT_SYSMGR_CORE_USB1_L3MASTER_t       usb1_l3master;          /* ALT_SYSMGR_CORE_USB1_L3MASTER */
    volatile ALT_SYSMGR_CORE_EMAC_GLOBAL_t         emac_global;            /* ALT_SYSMGR_CORE_EMAC_GLOBAL */
    volatile ALT_SYSMGR_CORE_EMAC0_t               emac0;                  /* ALT_SYSMGR_CORE_EMAC0 */
    volatile ALT_SYSMGR_CORE_EMAC1_t               emac1;                  /* ALT_SYSMGR_CORE_EMAC1 */
    volatile ALT_SYSMGR_CORE_EMAC2_t               emac2;                  /* ALT_SYSMGR_CORE_EMAC2 */
    volatile ALT_SYSMGR_CORE_EMAC0_ACE_t           emac0_ace;              /* ALT_SYSMGR_CORE_EMAC0_ACE */
    volatile ALT_SYSMGR_CORE_EMAC1_ACE_t           emac1_ace;              /* ALT_SYSMGR_CORE_EMAC1_ACE */
    volatile ALT_SYSMGR_CORE_EMAC2_ACE_t           emac2_ace;              /* ALT_SYSMGR_CORE_EMAC2_ACE */
    volatile ALT_SYSMGR_CORE_NAND_AXUSER_t         nand_axuser;            /* ALT_SYSMGR_CORE_NAND_AXUSER */
    volatile uint32_t                              _pad_0x60_0x67[2];      /* *UNDEFINED* */
    volatile ALT_SYSMGR_CORE_FPGAINTF_EN_1_t       fpgaintf_en_1;          /* ALT_SYSMGR_CORE_FPGAINTF_EN_1 */
    volatile ALT_SYSMGR_CORE_FPGAINTF_EN_2_t       fpgaintf_en_2;          /* ALT_SYSMGR_CORE_FPGAINTF_EN_2 */
    volatile ALT_SYSMGR_CORE_FPGAINTF_EN_3_t       fpgaintf_en_3;          /* ALT_SYSMGR_CORE_FPGAINTF_EN_3 */
    volatile ALT_SYSMGR_CORE_DMA_L3MASTER_t        dma_l3master;           /* ALT_SYSMGR_CORE_DMA_L3MASTER */
    volatile ALT_SYSMGR_CORE_ETR_L3MASTER_t        etr_l3master;           /* ALT_SYSMGR_CORE_ETR_L3MASTER */
    volatile uint32_t                              _pad_0x7c_0x7f;         /* *UNDEFINED* */
    volatile ALT_SYSMGR_CORE_SEC_CTRL_SLT_t        sec_ctrl_slt;           /* ALT_SYSMGR_CORE_SEC_CTRL_SLT */
    volatile ALT_SYSMGR_CORE_OSC_TRIM_t            osc_trim;               /* ALT_SYSMGR_CORE_OSC_TRIM */
    volatile uint32_t                              _pad_0x88_0x8f[2];      /* *UNDEFINED* */
    volatile ALT_SYSMGR_CORE_ECC_INTMASK_VALUE_t   ecc_intmask_value;      /* ALT_SYSMGR_CORE_ECC_INTMASK_VALUE */
    volatile ALT_SYSMGR_CORE_ECC_INTMASK_SET_t     ecc_intmask_set;        /* ALT_SYSMGR_CORE_ECC_INTMASK_SET */
    volatile ALT_SYSMGR_CORE_ECC_INTMASK_CLR_t     ecc_intmask_clr;        /* ALT_SYSMGR_CORE_ECC_INTMASK_CLR */
    volatile ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR_t  ecc_intstatus_serr;     /* ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR */
    volatile ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR_t  ecc_intstatus_derr;     /* ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR */
    volatile uint32_t                              _pad_0xa4_0xaf[3];      /* *UNDEFINED* */
    volatile ALT_SYSMGR_CORE_NOC_ADDR_REMAP_t      noc_addr_remap;         /* ALT_SYSMGR_CORE_NOC_ADDR_REMAP */
    volatile ALT_SYSMGR_CORE_HMC_CLK_t             hmc_clk;                /* ALT_SYSMGR_CORE_HMC_CLK */
    volatile ALT_SYSMGR_CORE_IO_PA_CTRL_t          io_pa_ctrl;             /* ALT_SYSMGR_CORE_IO_PA_CTRL */
    volatile uint32_t                              _pad_0xbc_0xbf;         /* *UNDEFINED* */
    volatile ALT_SYSMGR_CORE_NOC_TIMEOUT_t         noc_timeout;            /* ALT_SYSMGR_CORE_NOC_TIMEOUT */
    volatile ALT_SYSMGR_CORE_NOC_IDLEREQ_SET_t     noc_idlereq_set;        /* ALT_SYSMGR_CORE_NOC_IDLEREQ_SET */
    volatile ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR_t     noc_idlereq_clr;        /* ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR */
    volatile ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE_t   noc_idlereq_value;      /* ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE */
    volatile ALT_SYSMGR_CORE_NOC_IDLEACK_t         noc_idleack;            /* ALT_SYSMGR_CORE_NOC_IDLEACK */
    volatile ALT_SYSMGR_CORE_NOC_IDLESTATUS_t      noc_idlestatus;         /* ALT_SYSMGR_CORE_NOC_IDLESTATUS */
    volatile ALT_SYSMGR_CORE_FPGA2SOC_CTRL_t       fpga2soc_ctrl;          /* ALT_SYSMGR_CORE_FPGA2SOC_CTRL */
    volatile ALT_SYSMGR_CORE_FPGA_CONFIG_t         fpga_config;            /* ALT_SYSMGR_CORE_FPGA_CONFIG */
    volatile ALT_SYSMGR_CORE_IOCSRCLK_GATE_t       iocsrclk_gate;          /* ALT_SYSMGR_CORE_IOCSRCLK_GATE */
    volatile ALT_SYSMGR_CORE_GPO_t                 gpo;                    /* ALT_SYSMGR_CORE_GPO */
    volatile ALT_SYSMGR_CORE_GPI_t                 gpi;                    /* ALT_SYSMGR_CORE_GPI */
    volatile uint32_t                              _pad_0xec_0xef;         /* *UNDEFINED* */
    volatile ALT_SYSMGR_CORE_MPU_t                 mpu;                    /* ALT_SYSMGR_CORE_MPU */
    volatile ALT_SYSMGR_CORE_SDM_HPS_SPARE_t       sdm_hps_spare;          /* ALT_SYSMGR_CORE_SDM_HPS_SPARE */
    volatile ALT_SYSMGR_CORE_HPS_SDM_SPARE_t       hps_sdm_spare;          /* ALT_SYSMGR_CORE_HPS_SDM_SPARE */
    volatile uint32_t                              _pad_0xfc_0x1ff[65];    /* *UNDEFINED* */
    volatile ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0_t  boot_scratch_cold0;     /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0 */
    volatile ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1_t  boot_scratch_cold1;     /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1 */
    volatile ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2_t  boot_scratch_cold2;     /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2 */
    volatile ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3_t  boot_scratch_cold3;     /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3 */
    volatile ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4_t  boot_scratch_cold4;     /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4 */
    volatile ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5_t  boot_scratch_cold5;     /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5 */
    volatile ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6_t  boot_scratch_cold6;     /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6 */
    volatile ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7_t  boot_scratch_cold7;     /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7 */
    volatile ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8_t  boot_scratch_cold8;     /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8 */
    volatile ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9_t  boot_scratch_cold9;     /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9 */
    volatile uint32_t                              _pad_0x228_0x500[182];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_SYSMGR_CORE. */
typedef struct ALT_SYSMGR_CORE_s  ALT_SYSMGR_CORE_t;
/* The struct declaration for the raw register contents of register group ALT_SYSMGR_CORE. */
struct ALT_SYSMGR_CORE_raw_s
{
    volatile uint32_t  siliconid1;             /* ALT_SYSMGR_CORE_SILICONID1 */
    volatile uint32_t  siliconid2;             /* ALT_SYSMGR_CORE_SILICONID2 */
    volatile uint32_t  wddbg;                  /* ALT_SYSMGR_CORE_WDDBG */
    volatile uint32_t  _pad_0xc_0xf;           /* *UNDEFINED* */
    volatile uint32_t  mpu_status;             /* ALT_SYSMGR_CORE_MPU_STATUS */
    volatile uint32_t  mpu_ace;                /* ALT_SYSMGR_CORE_MPU_ACE */
    volatile uint32_t  _pad_0x18_0x1f[2];      /* *UNDEFINED* */
    volatile uint32_t  dma;                    /* ALT_SYSMGR_CORE_DMA */
    volatile uint32_t  dma_periph;             /* ALT_SYSMGR_CORE_DMA_PERIPH */
    volatile uint32_t  sdmmc;                  /* ALT_SYSMGR_CORE_SDMMC */
    volatile uint32_t  sdmmc_l3master;         /* ALT_SYSMGR_CORE_SDMMC_L3MASTER */
    volatile uint32_t  nand_bootstrap;         /* ALT_SYSMGR_CORE_NAND_BOOTSTRAP */
    volatile uint32_t  nand_l3master;          /* ALT_SYSMGR_CORE_NAND_L3MASTER */
    volatile uint32_t  usb0_l3master;          /* ALT_SYSMGR_CORE_USB0_L3MASTER */
    volatile uint32_t  usb1_l3master;          /* ALT_SYSMGR_CORE_USB1_L3MASTER */
    volatile uint32_t  emac_global;            /* ALT_SYSMGR_CORE_EMAC_GLOBAL */
    volatile uint32_t  emac0;                  /* ALT_SYSMGR_CORE_EMAC0 */
    volatile uint32_t  emac1;                  /* ALT_SYSMGR_CORE_EMAC1 */
    volatile uint32_t  emac2;                  /* ALT_SYSMGR_CORE_EMAC2 */
    volatile uint32_t  emac0_ace;              /* ALT_SYSMGR_CORE_EMAC0_ACE */
    volatile uint32_t  emac1_ace;              /* ALT_SYSMGR_CORE_EMAC1_ACE */
    volatile uint32_t  emac2_ace;              /* ALT_SYSMGR_CORE_EMAC2_ACE */
    volatile uint32_t  nand_axuser;            /* ALT_SYSMGR_CORE_NAND_AXUSER */
    volatile uint32_t  _pad_0x60_0x67[2];      /* *UNDEFINED* */
    volatile uint32_t  fpgaintf_en_1;          /* ALT_SYSMGR_CORE_FPGAINTF_EN_1 */
    volatile uint32_t  fpgaintf_en_2;          /* ALT_SYSMGR_CORE_FPGAINTF_EN_2 */
    volatile uint32_t  fpgaintf_en_3;          /* ALT_SYSMGR_CORE_FPGAINTF_EN_3 */
    volatile uint32_t  dma_l3master;           /* ALT_SYSMGR_CORE_DMA_L3MASTER */
    volatile uint32_t  etr_l3master;           /* ALT_SYSMGR_CORE_ETR_L3MASTER */
    volatile uint32_t  _pad_0x7c_0x7f;         /* *UNDEFINED* */
    volatile uint32_t  sec_ctrl_slt;           /* ALT_SYSMGR_CORE_SEC_CTRL_SLT */
    volatile uint32_t  osc_trim;               /* ALT_SYSMGR_CORE_OSC_TRIM */
    volatile uint32_t  _pad_0x88_0x8f[2];      /* *UNDEFINED* */
    volatile uint32_t  ecc_intmask_value;      /* ALT_SYSMGR_CORE_ECC_INTMASK_VALUE */
    volatile uint32_t  ecc_intmask_set;        /* ALT_SYSMGR_CORE_ECC_INTMASK_SET */
    volatile uint32_t  ecc_intmask_clr;        /* ALT_SYSMGR_CORE_ECC_INTMASK_CLR */
    volatile uint32_t  ecc_intstatus_serr;     /* ALT_SYSMGR_CORE_ECC_INTSTATUS_SERR */
    volatile uint32_t  ecc_intstatus_derr;     /* ALT_SYSMGR_CORE_ECC_INTSTATUS_DERR */
    volatile uint32_t  _pad_0xa4_0xaf[3];      /* *UNDEFINED* */
    volatile uint32_t  noc_addr_remap;         /* ALT_SYSMGR_CORE_NOC_ADDR_REMAP */
    volatile uint32_t  hmc_clk;                /* ALT_SYSMGR_CORE_HMC_CLK */
    volatile uint32_t  io_pa_ctrl;             /* ALT_SYSMGR_CORE_IO_PA_CTRL */
    volatile uint32_t  _pad_0xbc_0xbf;         /* *UNDEFINED* */
    volatile uint32_t  noc_timeout;            /* ALT_SYSMGR_CORE_NOC_TIMEOUT */
    volatile uint32_t  noc_idlereq_set;        /* ALT_SYSMGR_CORE_NOC_IDLEREQ_SET */
    volatile uint32_t  noc_idlereq_clr;        /* ALT_SYSMGR_CORE_NOC_IDLEREQ_CLR */
    volatile uint32_t  noc_idlereq_value;      /* ALT_SYSMGR_CORE_NOC_IDLEREQ_VALUE */
    volatile uint32_t  noc_idleack;            /* ALT_SYSMGR_CORE_NOC_IDLEACK */
    volatile uint32_t  noc_idlestatus;         /* ALT_SYSMGR_CORE_NOC_IDLESTATUS */
    volatile uint32_t  fpga2soc_ctrl;          /* ALT_SYSMGR_CORE_FPGA2SOC_CTRL */
    volatile uint32_t  fpga_config;            /* ALT_SYSMGR_CORE_FPGA_CONFIG */
    volatile uint32_t  iocsrclk_gate;          /* ALT_SYSMGR_CORE_IOCSRCLK_GATE */
    volatile uint32_t  gpo;                    /* ALT_SYSMGR_CORE_GPO */
    volatile uint32_t  gpi;                    /* ALT_SYSMGR_CORE_GPI */
    volatile uint32_t  _pad_0xec_0xef;         /* *UNDEFINED* */
    volatile uint32_t  mpu;                    /* ALT_SYSMGR_CORE_MPU */
    volatile uint32_t  sdm_hps_spare;          /* ALT_SYSMGR_CORE_SDM_HPS_SPARE */
    volatile uint32_t  hps_sdm_spare;          /* ALT_SYSMGR_CORE_HPS_SDM_SPARE */
    volatile uint32_t  _pad_0xfc_0x1ff[65];    /* *UNDEFINED* */
    volatile uint32_t  boot_scratch_cold0;     /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD0 */
    volatile uint32_t  boot_scratch_cold1;     /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD1 */
    volatile uint32_t  boot_scratch_cold2;     /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD2 */
    volatile uint32_t  boot_scratch_cold3;     /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD3 */
    volatile uint32_t  boot_scratch_cold4;     /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD4 */
    volatile uint32_t  boot_scratch_cold5;     /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD5 */
    volatile uint32_t  boot_scratch_cold6;     /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD6 */
    volatile uint32_t  boot_scratch_cold7;     /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD7 */
    volatile uint32_t  boot_scratch_cold8;     /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD8 */
    volatile uint32_t  boot_scratch_cold9;     /* ALT_SYSMGR_CORE_BOOT_SCRATCH_COLD9 */
    volatile uint32_t  _pad_0x228_0x500[182];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_SYSMGR_CORE. */
typedef struct ALT_SYSMGR_CORE_raw_s  ALT_SYSMGR_CORE_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_SYSMGR_H__ */

