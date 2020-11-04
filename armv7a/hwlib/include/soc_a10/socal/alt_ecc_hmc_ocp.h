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

/* Altera - ALT_ECC_HMC_OCP */

#ifndef __ALT_SOCAL_ECC_HMC_OCP_H__
#define __ALT_SOCAL_ECC_HMC_OCP_H__

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
 * Component : ALT_ECC_HMC_OCP
 * 
 */
/*
 * Register : IP_REV_ID - IP_REV_ID
 * 
 * IDO Register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                    
 * :--------|:-------|:------|:--------------------------------
 *  [15:0]  | RW     | 0x0   | ALT_ECC_HMC_OCP_IP_REV_ID_SIREV
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                    
 * 
 */
/*
 * Field : SIREV
 * 
 * IP Rev #These bits indicate the silicon revision number
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_IP_REV_ID_SIREV register field. */
#define ALT_ECC_HMC_OCP_IP_REV_ID_SIREV_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_IP_REV_ID_SIREV register field. */
#define ALT_ECC_HMC_OCP_IP_REV_ID_SIREV_MSB        15
/* The width in bits of the ALT_ECC_HMC_OCP_IP_REV_ID_SIREV register field. */
#define ALT_ECC_HMC_OCP_IP_REV_ID_SIREV_WIDTH      16
/* The mask used to set the ALT_ECC_HMC_OCP_IP_REV_ID_SIREV register field value. */
#define ALT_ECC_HMC_OCP_IP_REV_ID_SIREV_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_ECC_HMC_OCP_IP_REV_ID_SIREV register field value. */
#define ALT_ECC_HMC_OCP_IP_REV_ID_SIREV_CLR_MSK    0xffff0000
/* The reset value of the ALT_ECC_HMC_OCP_IP_REV_ID_SIREV register field. */
#define ALT_ECC_HMC_OCP_IP_REV_ID_SIREV_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_IP_REV_ID_SIREV field value from a register. */
#define ALT_ECC_HMC_OCP_IP_REV_ID_SIREV_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_IP_REV_ID_SIREV register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_IP_REV_ID_SIREV_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_IP_REV_ID.
 */
struct ALT_ECC_HMC_OCP_IP_REV_ID_s
{
    uint32_t  SIREV : 16;  /* ALT_ECC_HMC_OCP_IP_REV_ID_SIREV */
    uint32_t        : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_IP_REV_ID. */
typedef volatile struct ALT_ECC_HMC_OCP_IP_REV_ID_s  ALT_ECC_HMC_OCP_IP_REV_ID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_IP_REV_ID register. */
#define ALT_ECC_HMC_OCP_IP_REV_ID_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_IP_REV_ID register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_IP_REV_ID_OFST        0x0

/*
 * Register : DDRIOCTRL
 * 
 * DDR IO Control Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                     
 * :-------|:-------|:------|:---------------------------------
 *  [1:0]  | RW     | 0x0   | ALT_ECC_HMC_OCP_DDRIOCTL_IO_SIZE
 *  [31:2] | ???    | 0x0   | *UNDEFINED*                     
 * 
 */
/*
 * Field : IO_SIZE
 * 
 * External Configuration of DDR IO size.
 * 
 * These bits are configured at start to indicate the external DDR IO size.
 * 
 * 2b00 = DDR IO x16. default value after reset
 * 
 * 2b01 = DDR IO x32
 * 
 * 2b10 = DDR IO x64
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_DDRIOCTL_IO_SIZE register field. */
#define ALT_ECC_HMC_OCP_DDRIOCTL_IO_SIZE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_DDRIOCTL_IO_SIZE register field. */
#define ALT_ECC_HMC_OCP_DDRIOCTL_IO_SIZE_MSB        1
/* The width in bits of the ALT_ECC_HMC_OCP_DDRIOCTL_IO_SIZE register field. */
#define ALT_ECC_HMC_OCP_DDRIOCTL_IO_SIZE_WIDTH      2
/* The mask used to set the ALT_ECC_HMC_OCP_DDRIOCTL_IO_SIZE register field value. */
#define ALT_ECC_HMC_OCP_DDRIOCTL_IO_SIZE_SET_MSK    0x00000003
/* The mask used to clear the ALT_ECC_HMC_OCP_DDRIOCTL_IO_SIZE register field value. */
#define ALT_ECC_HMC_OCP_DDRIOCTL_IO_SIZE_CLR_MSK    0xfffffffc
/* The reset value of the ALT_ECC_HMC_OCP_DDRIOCTL_IO_SIZE register field. */
#define ALT_ECC_HMC_OCP_DDRIOCTL_IO_SIZE_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_DDRIOCTL_IO_SIZE field value from a register. */
#define ALT_ECC_HMC_OCP_DDRIOCTL_IO_SIZE_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_ECC_HMC_OCP_DDRIOCTL_IO_SIZE register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_DDRIOCTL_IO_SIZE_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_DDRIOCTL.
 */
struct ALT_ECC_HMC_OCP_DDRIOCTL_s
{
    uint32_t  IO_SIZE :  2;  /* ALT_ECC_HMC_OCP_DDRIOCTL_IO_SIZE */
    uint32_t          : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_DDRIOCTL. */
typedef volatile struct ALT_ECC_HMC_OCP_DDRIOCTL_s  ALT_ECC_HMC_OCP_DDRIOCTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_DDRIOCTL register. */
#define ALT_ECC_HMC_OCP_DDRIOCTL_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_DDRIOCTL register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_DDRIOCTL_OFST        0x8

/*
 * Register : DDRCALSTAT
 * 
 * DDR Calibration Register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                   
 * :-------|:-------|:------|:-------------------------------
 *  [0]    | RW     | 0x0   | ALT_ECC_HMC_OCP_DDRCALSTAT_CAL
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                   
 * 
 */
/*
 * Field : CAL
 * 
 * DDR calibration status.
 * 
 * Indicates the DDR calibration status.
 * 
 * 1'b0: When set to 0, calibration is either on going, hasn't started or failed.
 * 
 * 1'b1: When set to 1, calibration has succeeded.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_DDRCALSTAT_CAL register field. */
#define ALT_ECC_HMC_OCP_DDRCALSTAT_CAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_DDRCALSTAT_CAL register field. */
#define ALT_ECC_HMC_OCP_DDRCALSTAT_CAL_MSB        0
/* The width in bits of the ALT_ECC_HMC_OCP_DDRCALSTAT_CAL register field. */
#define ALT_ECC_HMC_OCP_DDRCALSTAT_CAL_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_DDRCALSTAT_CAL register field value. */
#define ALT_ECC_HMC_OCP_DDRCALSTAT_CAL_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_HMC_OCP_DDRCALSTAT_CAL register field value. */
#define ALT_ECC_HMC_OCP_DDRCALSTAT_CAL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_HMC_OCP_DDRCALSTAT_CAL register field. */
#define ALT_ECC_HMC_OCP_DDRCALSTAT_CAL_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_DDRCALSTAT_CAL field value from a register. */
#define ALT_ECC_HMC_OCP_DDRCALSTAT_CAL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_HMC_OCP_DDRCALSTAT_CAL register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_DDRCALSTAT_CAL_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_DDRCALSTAT.
 */
struct ALT_ECC_HMC_OCP_DDRCALSTAT_s
{
    uint32_t  CAL :  1;  /* ALT_ECC_HMC_OCP_DDRCALSTAT_CAL */
    uint32_t      : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_DDRCALSTAT. */
typedef volatile struct ALT_ECC_HMC_OCP_DDRCALSTAT_s  ALT_ECC_HMC_OCP_DDRCALSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_DDRCALSTAT register. */
#define ALT_ECC_HMC_OCP_DDRCALSTAT_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_DDRCALSTAT register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_DDRCALSTAT_OFST        0xc

/*
 * Register : MPR_0BEAT1
 * 
 * MPR register [31:0] for first beat
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_MPR_0BEAT1_MPR0
 * 
 */
/*
 * Field : MPR0
 * 
 * MPR reg[31:0] for first beat
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_MPR_0BEAT1_MPR0 register field. */
#define ALT_ECC_HMC_OCP_MPR_0BEAT1_MPR0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_MPR_0BEAT1_MPR0 register field. */
#define ALT_ECC_HMC_OCP_MPR_0BEAT1_MPR0_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_MPR_0BEAT1_MPR0 register field. */
#define ALT_ECC_HMC_OCP_MPR_0BEAT1_MPR0_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_MPR_0BEAT1_MPR0 register field value. */
#define ALT_ECC_HMC_OCP_MPR_0BEAT1_MPR0_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_MPR_0BEAT1_MPR0 register field value. */
#define ALT_ECC_HMC_OCP_MPR_0BEAT1_MPR0_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_MPR_0BEAT1_MPR0 register field. */
#define ALT_ECC_HMC_OCP_MPR_0BEAT1_MPR0_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_MPR_0BEAT1_MPR0 field value from a register. */
#define ALT_ECC_HMC_OCP_MPR_0BEAT1_MPR0_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_MPR_0BEAT1_MPR0 register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_MPR_0BEAT1_MPR0_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_MPR_0BEAT1.
 */
struct ALT_ECC_HMC_OCP_MPR_0BEAT1_s
{
    uint32_t  MPR0 : 32;  /* ALT_ECC_HMC_OCP_MPR_0BEAT1_MPR0 */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_MPR_0BEAT1. */
typedef volatile struct ALT_ECC_HMC_OCP_MPR_0BEAT1_s  ALT_ECC_HMC_OCP_MPR_0BEAT1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_MPR_0BEAT1 register. */
#define ALT_ECC_HMC_OCP_MPR_0BEAT1_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_MPR_0BEAT1 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_MPR_0BEAT1_OFST        0x10

/*
 * Register : MPR_1BEAT1
 * 
 * MPR register [63:32] for first beat
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                     
 * :-------|:-------|:------|:---------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_MPR_1BEAT1_MPR32
 * 
 */
/*
 * Field : MPR32
 * 
 * MPR reg[63:32] for first beat
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_MPR_1BEAT1_MPR32 register field. */
#define ALT_ECC_HMC_OCP_MPR_1BEAT1_MPR32_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_MPR_1BEAT1_MPR32 register field. */
#define ALT_ECC_HMC_OCP_MPR_1BEAT1_MPR32_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_MPR_1BEAT1_MPR32 register field. */
#define ALT_ECC_HMC_OCP_MPR_1BEAT1_MPR32_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_MPR_1BEAT1_MPR32 register field value. */
#define ALT_ECC_HMC_OCP_MPR_1BEAT1_MPR32_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_MPR_1BEAT1_MPR32 register field value. */
#define ALT_ECC_HMC_OCP_MPR_1BEAT1_MPR32_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_MPR_1BEAT1_MPR32 register field. */
#define ALT_ECC_HMC_OCP_MPR_1BEAT1_MPR32_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_MPR_1BEAT1_MPR32 field value from a register. */
#define ALT_ECC_HMC_OCP_MPR_1BEAT1_MPR32_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_MPR_1BEAT1_MPR32 register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_MPR_1BEAT1_MPR32_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_MPR_1BEAT1.
 */
struct ALT_ECC_HMC_OCP_MPR_1BEAT1_s
{
    uint32_t  MPR32 : 32;  /* ALT_ECC_HMC_OCP_MPR_1BEAT1_MPR32 */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_MPR_1BEAT1. */
typedef volatile struct ALT_ECC_HMC_OCP_MPR_1BEAT1_s  ALT_ECC_HMC_OCP_MPR_1BEAT1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_MPR_1BEAT1 register. */
#define ALT_ECC_HMC_OCP_MPR_1BEAT1_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_MPR_1BEAT1 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_MPR_1BEAT1_OFST        0x14

/*
 * Register : MPR_2BEAT1
 * 
 * MPR register [95:64] for first beat
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                     
 * :-------|:-------|:------|:---------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_MPR_2BEAT1_MPR64
 * 
 */
/*
 * Field : MPR64
 * 
 * MPR reg[95:64] for first beat
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_MPR_2BEAT1_MPR64 register field. */
#define ALT_ECC_HMC_OCP_MPR_2BEAT1_MPR64_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_MPR_2BEAT1_MPR64 register field. */
#define ALT_ECC_HMC_OCP_MPR_2BEAT1_MPR64_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_MPR_2BEAT1_MPR64 register field. */
#define ALT_ECC_HMC_OCP_MPR_2BEAT1_MPR64_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_MPR_2BEAT1_MPR64 register field value. */
#define ALT_ECC_HMC_OCP_MPR_2BEAT1_MPR64_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_MPR_2BEAT1_MPR64 register field value. */
#define ALT_ECC_HMC_OCP_MPR_2BEAT1_MPR64_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_MPR_2BEAT1_MPR64 register field. */
#define ALT_ECC_HMC_OCP_MPR_2BEAT1_MPR64_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_MPR_2BEAT1_MPR64 field value from a register. */
#define ALT_ECC_HMC_OCP_MPR_2BEAT1_MPR64_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_MPR_2BEAT1_MPR64 register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_MPR_2BEAT1_MPR64_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_MPR_2BEAT1.
 */
struct ALT_ECC_HMC_OCP_MPR_2BEAT1_s
{
    uint32_t  MPR64 : 32;  /* ALT_ECC_HMC_OCP_MPR_2BEAT1_MPR64 */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_MPR_2BEAT1. */
typedef volatile struct ALT_ECC_HMC_OCP_MPR_2BEAT1_s  ALT_ECC_HMC_OCP_MPR_2BEAT1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_MPR_2BEAT1 register. */
#define ALT_ECC_HMC_OCP_MPR_2BEAT1_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_MPR_2BEAT1 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_MPR_2BEAT1_OFST        0x18

/*
 * Register : MPR_3BEAT1
 * 
 * MPR register [127:96] for first beat
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                     
 * :-------|:-------|:------|:---------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_MPR_3BEAT1_MPR96
 * 
 */
/*
 * Field : MPR96
 * 
 * MPR reg[127:96] for first beat
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_MPR_3BEAT1_MPR96 register field. */
#define ALT_ECC_HMC_OCP_MPR_3BEAT1_MPR96_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_MPR_3BEAT1_MPR96 register field. */
#define ALT_ECC_HMC_OCP_MPR_3BEAT1_MPR96_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_MPR_3BEAT1_MPR96 register field. */
#define ALT_ECC_HMC_OCP_MPR_3BEAT1_MPR96_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_MPR_3BEAT1_MPR96 register field value. */
#define ALT_ECC_HMC_OCP_MPR_3BEAT1_MPR96_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_MPR_3BEAT1_MPR96 register field value. */
#define ALT_ECC_HMC_OCP_MPR_3BEAT1_MPR96_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_MPR_3BEAT1_MPR96 register field. */
#define ALT_ECC_HMC_OCP_MPR_3BEAT1_MPR96_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_MPR_3BEAT1_MPR96 field value from a register. */
#define ALT_ECC_HMC_OCP_MPR_3BEAT1_MPR96_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_MPR_3BEAT1_MPR96 register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_MPR_3BEAT1_MPR96_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_MPR_3BEAT1.
 */
struct ALT_ECC_HMC_OCP_MPR_3BEAT1_s
{
    uint32_t  MPR96 : 32;  /* ALT_ECC_HMC_OCP_MPR_3BEAT1_MPR96 */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_MPR_3BEAT1. */
typedef volatile struct ALT_ECC_HMC_OCP_MPR_3BEAT1_s  ALT_ECC_HMC_OCP_MPR_3BEAT1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_MPR_3BEAT1 register. */
#define ALT_ECC_HMC_OCP_MPR_3BEAT1_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_MPR_3BEAT1 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_MPR_3BEAT1_OFST        0x1c

/*
 * Register : MPR_4BEAT1
 * 
 * MPR register [159:128] for first beat
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                      
 * :-------|:-------|:------|:----------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_MPR_4BEAT1_MPR128
 * 
 */
/*
 * Field : MPR128
 * 
 * MPR reg[159:128] for first beat
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_MPR_4BEAT1_MPR128 register field. */
#define ALT_ECC_HMC_OCP_MPR_4BEAT1_MPR128_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_MPR_4BEAT1_MPR128 register field. */
#define ALT_ECC_HMC_OCP_MPR_4BEAT1_MPR128_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_MPR_4BEAT1_MPR128 register field. */
#define ALT_ECC_HMC_OCP_MPR_4BEAT1_MPR128_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_MPR_4BEAT1_MPR128 register field value. */
#define ALT_ECC_HMC_OCP_MPR_4BEAT1_MPR128_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_MPR_4BEAT1_MPR128 register field value. */
#define ALT_ECC_HMC_OCP_MPR_4BEAT1_MPR128_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_MPR_4BEAT1_MPR128 register field. */
#define ALT_ECC_HMC_OCP_MPR_4BEAT1_MPR128_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_MPR_4BEAT1_MPR128 field value from a register. */
#define ALT_ECC_HMC_OCP_MPR_4BEAT1_MPR128_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_MPR_4BEAT1_MPR128 register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_MPR_4BEAT1_MPR128_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_MPR_4BEAT1.
 */
struct ALT_ECC_HMC_OCP_MPR_4BEAT1_s
{
    uint32_t  MPR128 : 32;  /* ALT_ECC_HMC_OCP_MPR_4BEAT1_MPR128 */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_MPR_4BEAT1. */
typedef volatile struct ALT_ECC_HMC_OCP_MPR_4BEAT1_s  ALT_ECC_HMC_OCP_MPR_4BEAT1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_MPR_4BEAT1 register. */
#define ALT_ECC_HMC_OCP_MPR_4BEAT1_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_MPR_4BEAT1 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_MPR_4BEAT1_OFST        0x20

/*
 * Register : MPR_5BEAT1
 * 
 * MPR register [191:160] for first beat
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                      
 * :-------|:-------|:------|:----------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_MPR_5BEAT1_MPR160
 * 
 */
/*
 * Field : MPR160
 * 
 * MPR reg[191:160] for first beat
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_MPR_5BEAT1_MPR160 register field. */
#define ALT_ECC_HMC_OCP_MPR_5BEAT1_MPR160_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_MPR_5BEAT1_MPR160 register field. */
#define ALT_ECC_HMC_OCP_MPR_5BEAT1_MPR160_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_MPR_5BEAT1_MPR160 register field. */
#define ALT_ECC_HMC_OCP_MPR_5BEAT1_MPR160_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_MPR_5BEAT1_MPR160 register field value. */
#define ALT_ECC_HMC_OCP_MPR_5BEAT1_MPR160_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_MPR_5BEAT1_MPR160 register field value. */
#define ALT_ECC_HMC_OCP_MPR_5BEAT1_MPR160_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_MPR_5BEAT1_MPR160 register field. */
#define ALT_ECC_HMC_OCP_MPR_5BEAT1_MPR160_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_MPR_5BEAT1_MPR160 field value from a register. */
#define ALT_ECC_HMC_OCP_MPR_5BEAT1_MPR160_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_MPR_5BEAT1_MPR160 register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_MPR_5BEAT1_MPR160_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_MPR_5BEAT1.
 */
struct ALT_ECC_HMC_OCP_MPR_5BEAT1_s
{
    uint32_t  MPR160 : 32;  /* ALT_ECC_HMC_OCP_MPR_5BEAT1_MPR160 */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_MPR_5BEAT1. */
typedef volatile struct ALT_ECC_HMC_OCP_MPR_5BEAT1_s  ALT_ECC_HMC_OCP_MPR_5BEAT1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_MPR_5BEAT1 register. */
#define ALT_ECC_HMC_OCP_MPR_5BEAT1_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_MPR_5BEAT1 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_MPR_5BEAT1_OFST        0x24

/*
 * Register : MPR_6BEAT1
 * 
 * MPR register [223:192] for first beat
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                      
 * :-------|:-------|:------|:----------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_MPR_6BEAT1_MPR192
 * 
 */
/*
 * Field : MPR192
 * 
 * MPR reg[223:192] for first beat
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_MPR_6BEAT1_MPR192 register field. */
#define ALT_ECC_HMC_OCP_MPR_6BEAT1_MPR192_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_MPR_6BEAT1_MPR192 register field. */
#define ALT_ECC_HMC_OCP_MPR_6BEAT1_MPR192_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_MPR_6BEAT1_MPR192 register field. */
#define ALT_ECC_HMC_OCP_MPR_6BEAT1_MPR192_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_MPR_6BEAT1_MPR192 register field value. */
#define ALT_ECC_HMC_OCP_MPR_6BEAT1_MPR192_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_MPR_6BEAT1_MPR192 register field value. */
#define ALT_ECC_HMC_OCP_MPR_6BEAT1_MPR192_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_MPR_6BEAT1_MPR192 register field. */
#define ALT_ECC_HMC_OCP_MPR_6BEAT1_MPR192_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_MPR_6BEAT1_MPR192 field value from a register. */
#define ALT_ECC_HMC_OCP_MPR_6BEAT1_MPR192_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_MPR_6BEAT1_MPR192 register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_MPR_6BEAT1_MPR192_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_MPR_6BEAT1.
 */
struct ALT_ECC_HMC_OCP_MPR_6BEAT1_s
{
    uint32_t  MPR192 : 32;  /* ALT_ECC_HMC_OCP_MPR_6BEAT1_MPR192 */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_MPR_6BEAT1. */
typedef volatile struct ALT_ECC_HMC_OCP_MPR_6BEAT1_s  ALT_ECC_HMC_OCP_MPR_6BEAT1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_MPR_6BEAT1 register. */
#define ALT_ECC_HMC_OCP_MPR_6BEAT1_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_MPR_6BEAT1 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_MPR_6BEAT1_OFST        0x28

/*
 * Register : MPR_7BEAT1
 * 
 * MPR register [255:224] for first beat
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                      
 * :-------|:-------|:------|:----------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_MPR_7BEAT1_MPR224
 * 
 */
/*
 * Field : MPR224
 * 
 * MPR reg[255:224] for first beat
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_MPR_7BEAT1_MPR224 register field. */
#define ALT_ECC_HMC_OCP_MPR_7BEAT1_MPR224_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_MPR_7BEAT1_MPR224 register field. */
#define ALT_ECC_HMC_OCP_MPR_7BEAT1_MPR224_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_MPR_7BEAT1_MPR224 register field. */
#define ALT_ECC_HMC_OCP_MPR_7BEAT1_MPR224_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_MPR_7BEAT1_MPR224 register field value. */
#define ALT_ECC_HMC_OCP_MPR_7BEAT1_MPR224_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_MPR_7BEAT1_MPR224 register field value. */
#define ALT_ECC_HMC_OCP_MPR_7BEAT1_MPR224_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_MPR_7BEAT1_MPR224 register field. */
#define ALT_ECC_HMC_OCP_MPR_7BEAT1_MPR224_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_MPR_7BEAT1_MPR224 field value from a register. */
#define ALT_ECC_HMC_OCP_MPR_7BEAT1_MPR224_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_MPR_7BEAT1_MPR224 register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_MPR_7BEAT1_MPR224_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_MPR_7BEAT1.
 */
struct ALT_ECC_HMC_OCP_MPR_7BEAT1_s
{
    uint32_t  MPR224 : 32;  /* ALT_ECC_HMC_OCP_MPR_7BEAT1_MPR224 */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_MPR_7BEAT1. */
typedef volatile struct ALT_ECC_HMC_OCP_MPR_7BEAT1_s  ALT_ECC_HMC_OCP_MPR_7BEAT1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_MPR_7BEAT1 register. */
#define ALT_ECC_HMC_OCP_MPR_7BEAT1_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_MPR_7BEAT1 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_MPR_7BEAT1_OFST        0x2c

/*
 * Register : MPR_8BEAT1
 * 
 * MPR register [287:256] for first beat
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                      
 * :-------|:-------|:------|:----------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_MPR_8BEAT1_MPR256
 * 
 */
/*
 * Field : MPR256
 * 
 * MPR reg[287:256] for first beat
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_MPR_8BEAT1_MPR256 register field. */
#define ALT_ECC_HMC_OCP_MPR_8BEAT1_MPR256_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_MPR_8BEAT1_MPR256 register field. */
#define ALT_ECC_HMC_OCP_MPR_8BEAT1_MPR256_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_MPR_8BEAT1_MPR256 register field. */
#define ALT_ECC_HMC_OCP_MPR_8BEAT1_MPR256_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_MPR_8BEAT1_MPR256 register field value. */
#define ALT_ECC_HMC_OCP_MPR_8BEAT1_MPR256_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_MPR_8BEAT1_MPR256 register field value. */
#define ALT_ECC_HMC_OCP_MPR_8BEAT1_MPR256_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_MPR_8BEAT1_MPR256 register field. */
#define ALT_ECC_HMC_OCP_MPR_8BEAT1_MPR256_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_MPR_8BEAT1_MPR256 field value from a register. */
#define ALT_ECC_HMC_OCP_MPR_8BEAT1_MPR256_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_MPR_8BEAT1_MPR256 register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_MPR_8BEAT1_MPR256_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_MPR_8BEAT1.
 */
struct ALT_ECC_HMC_OCP_MPR_8BEAT1_s
{
    uint32_t  MPR256 : 32;  /* ALT_ECC_HMC_OCP_MPR_8BEAT1_MPR256 */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_MPR_8BEAT1. */
typedef volatile struct ALT_ECC_HMC_OCP_MPR_8BEAT1_s  ALT_ECC_HMC_OCP_MPR_8BEAT1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_MPR_8BEAT1 register. */
#define ALT_ECC_HMC_OCP_MPR_8BEAT1_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_MPR_8BEAT1 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_MPR_8BEAT1_OFST        0x30

/*
 * Register : MPR_0BEAT2
 * 
 * MPR register [31:0] for second beat
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_MPR_0BEAT2_MPR0
 * 
 */
/*
 * Field : MPR0
 * 
 * MPR reg[31:0] for second beat
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_MPR_0BEAT2_MPR0 register field. */
#define ALT_ECC_HMC_OCP_MPR_0BEAT2_MPR0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_MPR_0BEAT2_MPR0 register field. */
#define ALT_ECC_HMC_OCP_MPR_0BEAT2_MPR0_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_MPR_0BEAT2_MPR0 register field. */
#define ALT_ECC_HMC_OCP_MPR_0BEAT2_MPR0_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_MPR_0BEAT2_MPR0 register field value. */
#define ALT_ECC_HMC_OCP_MPR_0BEAT2_MPR0_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_MPR_0BEAT2_MPR0 register field value. */
#define ALT_ECC_HMC_OCP_MPR_0BEAT2_MPR0_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_MPR_0BEAT2_MPR0 register field. */
#define ALT_ECC_HMC_OCP_MPR_0BEAT2_MPR0_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_MPR_0BEAT2_MPR0 field value from a register. */
#define ALT_ECC_HMC_OCP_MPR_0BEAT2_MPR0_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_MPR_0BEAT2_MPR0 register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_MPR_0BEAT2_MPR0_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_MPR_0BEAT2.
 */
struct ALT_ECC_HMC_OCP_MPR_0BEAT2_s
{
    uint32_t  MPR0 : 32;  /* ALT_ECC_HMC_OCP_MPR_0BEAT2_MPR0 */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_MPR_0BEAT2. */
typedef volatile struct ALT_ECC_HMC_OCP_MPR_0BEAT2_s  ALT_ECC_HMC_OCP_MPR_0BEAT2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_MPR_0BEAT2 register. */
#define ALT_ECC_HMC_OCP_MPR_0BEAT2_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_MPR_0BEAT2 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_MPR_0BEAT2_OFST        0x34

/*
 * Register : MPR_1BEAT2
 * 
 * MPR register [63:32] for second beat
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                     
 * :-------|:-------|:------|:---------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_MPR_1BEAT2_MPR32
 * 
 */
/*
 * Field : MPR32
 * 
 * MPR reg[63:32] for second beat
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_MPR_1BEAT2_MPR32 register field. */
#define ALT_ECC_HMC_OCP_MPR_1BEAT2_MPR32_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_MPR_1BEAT2_MPR32 register field. */
#define ALT_ECC_HMC_OCP_MPR_1BEAT2_MPR32_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_MPR_1BEAT2_MPR32 register field. */
#define ALT_ECC_HMC_OCP_MPR_1BEAT2_MPR32_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_MPR_1BEAT2_MPR32 register field value. */
#define ALT_ECC_HMC_OCP_MPR_1BEAT2_MPR32_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_MPR_1BEAT2_MPR32 register field value. */
#define ALT_ECC_HMC_OCP_MPR_1BEAT2_MPR32_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_MPR_1BEAT2_MPR32 register field. */
#define ALT_ECC_HMC_OCP_MPR_1BEAT2_MPR32_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_MPR_1BEAT2_MPR32 field value from a register. */
#define ALT_ECC_HMC_OCP_MPR_1BEAT2_MPR32_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_MPR_1BEAT2_MPR32 register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_MPR_1BEAT2_MPR32_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_MPR_1BEAT2.
 */
struct ALT_ECC_HMC_OCP_MPR_1BEAT2_s
{
    uint32_t  MPR32 : 32;  /* ALT_ECC_HMC_OCP_MPR_1BEAT2_MPR32 */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_MPR_1BEAT2. */
typedef volatile struct ALT_ECC_HMC_OCP_MPR_1BEAT2_s  ALT_ECC_HMC_OCP_MPR_1BEAT2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_MPR_1BEAT2 register. */
#define ALT_ECC_HMC_OCP_MPR_1BEAT2_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_MPR_1BEAT2 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_MPR_1BEAT2_OFST        0x38

/*
 * Register : MPR_2BEAT2
 * 
 * MPR register [95:64] for second beat
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                     
 * :-------|:-------|:------|:---------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_MPR_2BEAT2_MPR64
 * 
 */
/*
 * Field : MPR64
 * 
 * MPR reg[95:64] for second beat
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_MPR_2BEAT2_MPR64 register field. */
#define ALT_ECC_HMC_OCP_MPR_2BEAT2_MPR64_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_MPR_2BEAT2_MPR64 register field. */
#define ALT_ECC_HMC_OCP_MPR_2BEAT2_MPR64_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_MPR_2BEAT2_MPR64 register field. */
#define ALT_ECC_HMC_OCP_MPR_2BEAT2_MPR64_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_MPR_2BEAT2_MPR64 register field value. */
#define ALT_ECC_HMC_OCP_MPR_2BEAT2_MPR64_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_MPR_2BEAT2_MPR64 register field value. */
#define ALT_ECC_HMC_OCP_MPR_2BEAT2_MPR64_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_MPR_2BEAT2_MPR64 register field. */
#define ALT_ECC_HMC_OCP_MPR_2BEAT2_MPR64_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_MPR_2BEAT2_MPR64 field value from a register. */
#define ALT_ECC_HMC_OCP_MPR_2BEAT2_MPR64_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_MPR_2BEAT2_MPR64 register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_MPR_2BEAT2_MPR64_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_MPR_2BEAT2.
 */
struct ALT_ECC_HMC_OCP_MPR_2BEAT2_s
{
    uint32_t  MPR64 : 32;  /* ALT_ECC_HMC_OCP_MPR_2BEAT2_MPR64 */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_MPR_2BEAT2. */
typedef volatile struct ALT_ECC_HMC_OCP_MPR_2BEAT2_s  ALT_ECC_HMC_OCP_MPR_2BEAT2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_MPR_2BEAT2 register. */
#define ALT_ECC_HMC_OCP_MPR_2BEAT2_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_MPR_2BEAT2 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_MPR_2BEAT2_OFST        0x3c

/*
 * Register : MPR_3BEAT2
 * 
 * MPR register [127:96] for second beat
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                     
 * :-------|:-------|:------|:---------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_MPR_3BEAT2_MPR96
 * 
 */
/*
 * Field : MPR96
 * 
 * MPR reg[127:96] for second beat
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_MPR_3BEAT2_MPR96 register field. */
#define ALT_ECC_HMC_OCP_MPR_3BEAT2_MPR96_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_MPR_3BEAT2_MPR96 register field. */
#define ALT_ECC_HMC_OCP_MPR_3BEAT2_MPR96_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_MPR_3BEAT2_MPR96 register field. */
#define ALT_ECC_HMC_OCP_MPR_3BEAT2_MPR96_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_MPR_3BEAT2_MPR96 register field value. */
#define ALT_ECC_HMC_OCP_MPR_3BEAT2_MPR96_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_MPR_3BEAT2_MPR96 register field value. */
#define ALT_ECC_HMC_OCP_MPR_3BEAT2_MPR96_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_MPR_3BEAT2_MPR96 register field. */
#define ALT_ECC_HMC_OCP_MPR_3BEAT2_MPR96_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_MPR_3BEAT2_MPR96 field value from a register. */
#define ALT_ECC_HMC_OCP_MPR_3BEAT2_MPR96_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_MPR_3BEAT2_MPR96 register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_MPR_3BEAT2_MPR96_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_MPR_3BEAT2.
 */
struct ALT_ECC_HMC_OCP_MPR_3BEAT2_s
{
    uint32_t  MPR96 : 32;  /* ALT_ECC_HMC_OCP_MPR_3BEAT2_MPR96 */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_MPR_3BEAT2. */
typedef volatile struct ALT_ECC_HMC_OCP_MPR_3BEAT2_s  ALT_ECC_HMC_OCP_MPR_3BEAT2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_MPR_3BEAT2 register. */
#define ALT_ECC_HMC_OCP_MPR_3BEAT2_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_MPR_3BEAT2 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_MPR_3BEAT2_OFST        0x40

/*
 * Register : MPR_4BEAT2
 * 
 * MPR register [159:128] for second beat
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                      
 * :-------|:-------|:------|:----------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_MPR_4BEAT2_MPR128
 * 
 */
/*
 * Field : MPR128
 * 
 * MPR reg[159:128] for second beat
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_MPR_4BEAT2_MPR128 register field. */
#define ALT_ECC_HMC_OCP_MPR_4BEAT2_MPR128_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_MPR_4BEAT2_MPR128 register field. */
#define ALT_ECC_HMC_OCP_MPR_4BEAT2_MPR128_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_MPR_4BEAT2_MPR128 register field. */
#define ALT_ECC_HMC_OCP_MPR_4BEAT2_MPR128_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_MPR_4BEAT2_MPR128 register field value. */
#define ALT_ECC_HMC_OCP_MPR_4BEAT2_MPR128_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_MPR_4BEAT2_MPR128 register field value. */
#define ALT_ECC_HMC_OCP_MPR_4BEAT2_MPR128_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_MPR_4BEAT2_MPR128 register field. */
#define ALT_ECC_HMC_OCP_MPR_4BEAT2_MPR128_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_MPR_4BEAT2_MPR128 field value from a register. */
#define ALT_ECC_HMC_OCP_MPR_4BEAT2_MPR128_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_MPR_4BEAT2_MPR128 register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_MPR_4BEAT2_MPR128_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_MPR_4BEAT2.
 */
struct ALT_ECC_HMC_OCP_MPR_4BEAT2_s
{
    uint32_t  MPR128 : 32;  /* ALT_ECC_HMC_OCP_MPR_4BEAT2_MPR128 */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_MPR_4BEAT2. */
typedef volatile struct ALT_ECC_HMC_OCP_MPR_4BEAT2_s  ALT_ECC_HMC_OCP_MPR_4BEAT2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_MPR_4BEAT2 register. */
#define ALT_ECC_HMC_OCP_MPR_4BEAT2_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_MPR_4BEAT2 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_MPR_4BEAT2_OFST        0x44

/*
 * Register : MPR_5BEAT2
 * 
 * MPR register [191:160] for second beat
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                      
 * :-------|:-------|:------|:----------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_MPR_5BEAT2_MPR160
 * 
 */
/*
 * Field : MPR160
 * 
 * MPR reg[191:160] for second beat
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_MPR_5BEAT2_MPR160 register field. */
#define ALT_ECC_HMC_OCP_MPR_5BEAT2_MPR160_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_MPR_5BEAT2_MPR160 register field. */
#define ALT_ECC_HMC_OCP_MPR_5BEAT2_MPR160_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_MPR_5BEAT2_MPR160 register field. */
#define ALT_ECC_HMC_OCP_MPR_5BEAT2_MPR160_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_MPR_5BEAT2_MPR160 register field value. */
#define ALT_ECC_HMC_OCP_MPR_5BEAT2_MPR160_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_MPR_5BEAT2_MPR160 register field value. */
#define ALT_ECC_HMC_OCP_MPR_5BEAT2_MPR160_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_MPR_5BEAT2_MPR160 register field. */
#define ALT_ECC_HMC_OCP_MPR_5BEAT2_MPR160_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_MPR_5BEAT2_MPR160 field value from a register. */
#define ALT_ECC_HMC_OCP_MPR_5BEAT2_MPR160_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_MPR_5BEAT2_MPR160 register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_MPR_5BEAT2_MPR160_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_MPR_5BEAT2.
 */
struct ALT_ECC_HMC_OCP_MPR_5BEAT2_s
{
    uint32_t  MPR160 : 32;  /* ALT_ECC_HMC_OCP_MPR_5BEAT2_MPR160 */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_MPR_5BEAT2. */
typedef volatile struct ALT_ECC_HMC_OCP_MPR_5BEAT2_s  ALT_ECC_HMC_OCP_MPR_5BEAT2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_MPR_5BEAT2 register. */
#define ALT_ECC_HMC_OCP_MPR_5BEAT2_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_MPR_5BEAT2 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_MPR_5BEAT2_OFST        0x48

/*
 * Register : MPR_6BEAT2
 * 
 * MPR register [223:192] for second beat
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                      
 * :-------|:-------|:------|:----------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_MPR_6BEAT2_MPR192
 * 
 */
/*
 * Field : MPR192
 * 
 * MPR reg[223:192] for second beat
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_MPR_6BEAT2_MPR192 register field. */
#define ALT_ECC_HMC_OCP_MPR_6BEAT2_MPR192_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_MPR_6BEAT2_MPR192 register field. */
#define ALT_ECC_HMC_OCP_MPR_6BEAT2_MPR192_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_MPR_6BEAT2_MPR192 register field. */
#define ALT_ECC_HMC_OCP_MPR_6BEAT2_MPR192_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_MPR_6BEAT2_MPR192 register field value. */
#define ALT_ECC_HMC_OCP_MPR_6BEAT2_MPR192_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_MPR_6BEAT2_MPR192 register field value. */
#define ALT_ECC_HMC_OCP_MPR_6BEAT2_MPR192_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_MPR_6BEAT2_MPR192 register field. */
#define ALT_ECC_HMC_OCP_MPR_6BEAT2_MPR192_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_MPR_6BEAT2_MPR192 field value from a register. */
#define ALT_ECC_HMC_OCP_MPR_6BEAT2_MPR192_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_MPR_6BEAT2_MPR192 register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_MPR_6BEAT2_MPR192_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_MPR_6BEAT2.
 */
struct ALT_ECC_HMC_OCP_MPR_6BEAT2_s
{
    uint32_t  MPR192 : 32;  /* ALT_ECC_HMC_OCP_MPR_6BEAT2_MPR192 */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_MPR_6BEAT2. */
typedef volatile struct ALT_ECC_HMC_OCP_MPR_6BEAT2_s  ALT_ECC_HMC_OCP_MPR_6BEAT2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_MPR_6BEAT2 register. */
#define ALT_ECC_HMC_OCP_MPR_6BEAT2_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_MPR_6BEAT2 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_MPR_6BEAT2_OFST        0x4c

/*
 * Register : MPR_7BEAT2
 * 
 * MPR register [255:224] for second beat
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                      
 * :-------|:-------|:------|:----------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_MPR_7BEAT2_MPR224
 * 
 */
/*
 * Field : MPR224
 * 
 * MPR reg[255:224] for second beat
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_MPR_7BEAT2_MPR224 register field. */
#define ALT_ECC_HMC_OCP_MPR_7BEAT2_MPR224_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_MPR_7BEAT2_MPR224 register field. */
#define ALT_ECC_HMC_OCP_MPR_7BEAT2_MPR224_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_MPR_7BEAT2_MPR224 register field. */
#define ALT_ECC_HMC_OCP_MPR_7BEAT2_MPR224_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_MPR_7BEAT2_MPR224 register field value. */
#define ALT_ECC_HMC_OCP_MPR_7BEAT2_MPR224_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_MPR_7BEAT2_MPR224 register field value. */
#define ALT_ECC_HMC_OCP_MPR_7BEAT2_MPR224_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_MPR_7BEAT2_MPR224 register field. */
#define ALT_ECC_HMC_OCP_MPR_7BEAT2_MPR224_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_MPR_7BEAT2_MPR224 field value from a register. */
#define ALT_ECC_HMC_OCP_MPR_7BEAT2_MPR224_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_MPR_7BEAT2_MPR224 register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_MPR_7BEAT2_MPR224_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_MPR_7BEAT2.
 */
struct ALT_ECC_HMC_OCP_MPR_7BEAT2_s
{
    uint32_t  MPR224 : 32;  /* ALT_ECC_HMC_OCP_MPR_7BEAT2_MPR224 */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_MPR_7BEAT2. */
typedef volatile struct ALT_ECC_HMC_OCP_MPR_7BEAT2_s  ALT_ECC_HMC_OCP_MPR_7BEAT2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_MPR_7BEAT2 register. */
#define ALT_ECC_HMC_OCP_MPR_7BEAT2_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_MPR_7BEAT2 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_MPR_7BEAT2_OFST        0x50

/*
 * Register : MPR_8BEAT2
 * 
 * MPR register [287:256] for second beat
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                      
 * :-------|:-------|:------|:----------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_MPR_8BEAT2_MPR256
 * 
 */
/*
 * Field : MPR256
 * 
 * MPR reg[287:256] for second beat
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_MPR_8BEAT2_MPR256 register field. */
#define ALT_ECC_HMC_OCP_MPR_8BEAT2_MPR256_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_MPR_8BEAT2_MPR256 register field. */
#define ALT_ECC_HMC_OCP_MPR_8BEAT2_MPR256_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_MPR_8BEAT2_MPR256 register field. */
#define ALT_ECC_HMC_OCP_MPR_8BEAT2_MPR256_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_MPR_8BEAT2_MPR256 register field value. */
#define ALT_ECC_HMC_OCP_MPR_8BEAT2_MPR256_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_MPR_8BEAT2_MPR256 register field value. */
#define ALT_ECC_HMC_OCP_MPR_8BEAT2_MPR256_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_MPR_8BEAT2_MPR256 register field. */
#define ALT_ECC_HMC_OCP_MPR_8BEAT2_MPR256_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_MPR_8BEAT2_MPR256 field value from a register. */
#define ALT_ECC_HMC_OCP_MPR_8BEAT2_MPR256_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_MPR_8BEAT2_MPR256 register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_MPR_8BEAT2_MPR256_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_MPR_8BEAT2.
 */
struct ALT_ECC_HMC_OCP_MPR_8BEAT2_s
{
    uint32_t  MPR256 : 32;  /* ALT_ECC_HMC_OCP_MPR_8BEAT2_MPR256 */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_MPR_8BEAT2. */
typedef volatile struct ALT_ECC_HMC_OCP_MPR_8BEAT2_s  ALT_ECC_HMC_OCP_MPR_8BEAT2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_MPR_8BEAT2 register. */
#define ALT_ECC_HMC_OCP_MPR_8BEAT2_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_MPR_8BEAT2 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_MPR_8BEAT2_OFST        0x54

/*
 * Register : AUTO_PRECHARGE
 * 
 * auto-precharge bit
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [0]    | RW     | 0x0   | ALT_ECC_HMC_OCP_AUTO_PRECHARGE_CTL
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                       
 * 
 */
/*
 * Field : CTRL
 * 
 * Control bit to drive auto-precharge bit on command interface to HMC
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_AUTO_PRECHARGE_CTL register field. */
#define ALT_ECC_HMC_OCP_AUTO_PRECHARGE_CTL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_AUTO_PRECHARGE_CTL register field. */
#define ALT_ECC_HMC_OCP_AUTO_PRECHARGE_CTL_MSB        0
/* The width in bits of the ALT_ECC_HMC_OCP_AUTO_PRECHARGE_CTL register field. */
#define ALT_ECC_HMC_OCP_AUTO_PRECHARGE_CTL_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_AUTO_PRECHARGE_CTL register field value. */
#define ALT_ECC_HMC_OCP_AUTO_PRECHARGE_CTL_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_HMC_OCP_AUTO_PRECHARGE_CTL register field value. */
#define ALT_ECC_HMC_OCP_AUTO_PRECHARGE_CTL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_HMC_OCP_AUTO_PRECHARGE_CTL register field. */
#define ALT_ECC_HMC_OCP_AUTO_PRECHARGE_CTL_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_AUTO_PRECHARGE_CTL field value from a register. */
#define ALT_ECC_HMC_OCP_AUTO_PRECHARGE_CTL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_HMC_OCP_AUTO_PRECHARGE_CTL register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_AUTO_PRECHARGE_CTL_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_AUTO_PRECHARGE.
 */
struct ALT_ECC_HMC_OCP_AUTO_PRECHARGE_s
{
    uint32_t  CTRL :  1;  /* ALT_ECC_HMC_OCP_AUTO_PRECHARGE_CTL */
    uint32_t       : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_AUTO_PRECHARGE. */
typedef volatile struct ALT_ECC_HMC_OCP_AUTO_PRECHARGE_s  ALT_ECC_HMC_OCP_AUTO_PRECHARGE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_AUTO_PRECHARGE register. */
#define ALT_ECC_HMC_OCP_AUTO_PRECHARGE_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_AUTO_PRECHARGE register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_AUTO_PRECHARGE_OFST        0x60

/*
 * Register : ECCCTRL1
 * 
 * ECC control 1.
 * 
 * This bit is used to set the initialize the memory and ecc to a known value
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                           
 * :--------|:-------|:------|:---------------------------------------
 *  [0]     | RW     | 0x0   | ALT_ECC_HMC_OCP_ECCCTL1_ECC_EN        
 *  [7:1]   | ???    | 0x0   | *UNDEFINED*                           
 *  [8]     | RW     | 0x0   | ALT_ECC_HMC_OCP_ECCCTL1_CNT_RST       
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*                           
 *  [16]    | RW     | 0x0   | ALT_ECC_HMC_OCP_ECCCTL1_AUTOWB_CNT_RST
 *  [31:17] | ???    | 0x0   | *UNDEFINED*                           
 * 
 */
/*
 * Field : ECC_EN
 * 
 * Enable for the ECC detection and correction logic.
 * 
 * 1'b0:ECC block is disabled. Default value after reset.
 * 
 * 1'b1: ECC block is enabled. Every RAM access will verify the data and generate
 * any necessary error requests.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECCCTL1_ECC_EN register field. */
#define ALT_ECC_HMC_OCP_ECCCTL1_ECC_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECCCTL1_ECC_EN register field. */
#define ALT_ECC_HMC_OCP_ECCCTL1_ECC_EN_MSB        0
/* The width in bits of the ALT_ECC_HMC_OCP_ECCCTL1_ECC_EN register field. */
#define ALT_ECC_HMC_OCP_ECCCTL1_ECC_EN_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ECCCTL1_ECC_EN register field value. */
#define ALT_ECC_HMC_OCP_ECCCTL1_ECC_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_HMC_OCP_ECCCTL1_ECC_EN register field value. */
#define ALT_ECC_HMC_OCP_ECCCTL1_ECC_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_HMC_OCP_ECCCTL1_ECC_EN register field. */
#define ALT_ECC_HMC_OCP_ECCCTL1_ECC_EN_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECCCTL1_ECC_EN field value from a register. */
#define ALT_ECC_HMC_OCP_ECCCTL1_ECC_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_HMC_OCP_ECCCTL1_ECC_EN register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECCCTL1_ECC_EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : CNT_RST
 * 
 * Reset of internal counter.
 * 
 * 1'b0: No effect on internal counter. Dafault value after reset
 * 
 * 1'b1: Reset the internal counter to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECCCTL1_CNT_RST register field. */
#define ALT_ECC_HMC_OCP_ECCCTL1_CNT_RST_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECCCTL1_CNT_RST register field. */
#define ALT_ECC_HMC_OCP_ECCCTL1_CNT_RST_MSB        8
/* The width in bits of the ALT_ECC_HMC_OCP_ECCCTL1_CNT_RST register field. */
#define ALT_ECC_HMC_OCP_ECCCTL1_CNT_RST_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ECCCTL1_CNT_RST register field value. */
#define ALT_ECC_HMC_OCP_ECCCTL1_CNT_RST_SET_MSK    0x00000100
/* The mask used to clear the ALT_ECC_HMC_OCP_ECCCTL1_CNT_RST register field value. */
#define ALT_ECC_HMC_OCP_ECCCTL1_CNT_RST_CLR_MSK    0xfffffeff
/* The reset value of the ALT_ECC_HMC_OCP_ECCCTL1_CNT_RST register field. */
#define ALT_ECC_HMC_OCP_ECCCTL1_CNT_RST_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECCCTL1_CNT_RST field value from a register. */
#define ALT_ECC_HMC_OCP_ECCCTL1_CNT_RST_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_ECC_HMC_OCP_ECCCTL1_CNT_RST register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECCCTL1_CNT_RST_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : AUTOWB_CNT_RST
 * 
 * Reset the autoWB internal counter to zero.
 * 
 * 1'b0 : No effect on autoWB internal counter. Default value after reset
 * 
 * 1'b1 :  Reset the autoWB internal counter to zero
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECCCTL1_AUTOWB_CNT_RST register field. */
#define ALT_ECC_HMC_OCP_ECCCTL1_AUTOWB_CNT_RST_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECCCTL1_AUTOWB_CNT_RST register field. */
#define ALT_ECC_HMC_OCP_ECCCTL1_AUTOWB_CNT_RST_MSB        16
/* The width in bits of the ALT_ECC_HMC_OCP_ECCCTL1_AUTOWB_CNT_RST register field. */
#define ALT_ECC_HMC_OCP_ECCCTL1_AUTOWB_CNT_RST_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ECCCTL1_AUTOWB_CNT_RST register field value. */
#define ALT_ECC_HMC_OCP_ECCCTL1_AUTOWB_CNT_RST_SET_MSK    0x00010000
/* The mask used to clear the ALT_ECC_HMC_OCP_ECCCTL1_AUTOWB_CNT_RST register field value. */
#define ALT_ECC_HMC_OCP_ECCCTL1_AUTOWB_CNT_RST_CLR_MSK    0xfffeffff
/* The reset value of the ALT_ECC_HMC_OCP_ECCCTL1_AUTOWB_CNT_RST register field. */
#define ALT_ECC_HMC_OCP_ECCCTL1_AUTOWB_CNT_RST_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECCCTL1_AUTOWB_CNT_RST field value from a register. */
#define ALT_ECC_HMC_OCP_ECCCTL1_AUTOWB_CNT_RST_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_ECC_HMC_OCP_ECCCTL1_AUTOWB_CNT_RST register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECCCTL1_AUTOWB_CNT_RST_SET(value) (((value) << 16) & 0x00010000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_ECCCTL1.
 */
struct ALT_ECC_HMC_OCP_ECCCTL1_s
{
    uint32_t  ECC_EN         :  1;  /* ALT_ECC_HMC_OCP_ECCCTL1_ECC_EN */
    uint32_t                 :  7;  /* *UNDEFINED* */
    uint32_t  CNT_RST        :  1;  /* ALT_ECC_HMC_OCP_ECCCTL1_CNT_RST */
    uint32_t                 :  7;  /* *UNDEFINED* */
    uint32_t  AUTOWB_CNT_RST :  1;  /* ALT_ECC_HMC_OCP_ECCCTL1_AUTOWB_CNT_RST */
    uint32_t                 : 15;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_ECCCTL1. */
typedef volatile struct ALT_ECC_HMC_OCP_ECCCTL1_s  ALT_ECC_HMC_OCP_ECCCTL1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_ECCCTL1 register. */
#define ALT_ECC_HMC_OCP_ECCCTL1_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_ECCCTL1 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_ECCCTL1_OFST        0x100

/*
 * Register : ECCCTRL2
 * 
 * ECC control 2.
 * 
 * This bit is used to set the initialize the memory and ecc to a known value
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                           
 * :--------|:-------|:------|:---------------------------------------
 *  [0]     | RW     | 0x0   | ALT_ECC_HMC_OCP_ECCCTL2_AUTOWB_EN     
 *  [7:1]   | ???    | 0x0   | *UNDEFINED*                           
 *  [8]     | RW     | 0x0   | ALT_ECC_HMC_OCP_ECCCTL2_RMW_EN        
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*                           
 *  [16]    | RW     | 0x0   | ALT_ECC_HMC_OCP_ECCCTL2_OVRW_RB_ECC_EN
 *  [31:17] | ???    | 0x0   | *UNDEFINED*                           
 * 
 */
/*
 * Field : AUTOWB_EN
 * 
 * Enable auto write back correction feature.
 * 
 * When serr is detected on outgoing reads, HMC adaptor schedules the corrected
 * data and ECC to the written to the DDR memory. This bit enables auto correction
 * of DDR memory.
 * 
 * 1'b0: disable auto WB drop correction. Default value after reset.
 * 
 * 1'b1: enable auto WB drop correction.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECCCTL2_AUTOWB_EN register field. */
#define ALT_ECC_HMC_OCP_ECCCTL2_AUTOWB_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECCCTL2_AUTOWB_EN register field. */
#define ALT_ECC_HMC_OCP_ECCCTL2_AUTOWB_EN_MSB        0
/* The width in bits of the ALT_ECC_HMC_OCP_ECCCTL2_AUTOWB_EN register field. */
#define ALT_ECC_HMC_OCP_ECCCTL2_AUTOWB_EN_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ECCCTL2_AUTOWB_EN register field value. */
#define ALT_ECC_HMC_OCP_ECCCTL2_AUTOWB_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_HMC_OCP_ECCCTL2_AUTOWB_EN register field value. */
#define ALT_ECC_HMC_OCP_ECCCTL2_AUTOWB_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_HMC_OCP_ECCCTL2_AUTOWB_EN register field. */
#define ALT_ECC_HMC_OCP_ECCCTL2_AUTOWB_EN_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECCCTL2_AUTOWB_EN field value from a register. */
#define ALT_ECC_HMC_OCP_ECCCTL2_AUTOWB_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_HMC_OCP_ECCCTL2_AUTOWB_EN register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECCCTL2_AUTOWB_EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RMW_EN
 * 
 * Enable read modify write logic.
 * 
 * When ECC is enabled and sub word accesses require correct ECC to be calculated,
 * this bit should be enabled. RMW_EN bit should be disabled when ECC_EN is
 * disabled.
 * 
 * 1'b0: disable RMW logic. Default value after reset.
 * 
 * 1'b1: enable RMW logic.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECCCTL2_RMW_EN register field. */
#define ALT_ECC_HMC_OCP_ECCCTL2_RMW_EN_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECCCTL2_RMW_EN register field. */
#define ALT_ECC_HMC_OCP_ECCCTL2_RMW_EN_MSB        8
/* The width in bits of the ALT_ECC_HMC_OCP_ECCCTL2_RMW_EN register field. */
#define ALT_ECC_HMC_OCP_ECCCTL2_RMW_EN_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ECCCTL2_RMW_EN register field value. */
#define ALT_ECC_HMC_OCP_ECCCTL2_RMW_EN_SET_MSK    0x00000100
/* The mask used to clear the ALT_ECC_HMC_OCP_ECCCTL2_RMW_EN register field value. */
#define ALT_ECC_HMC_OCP_ECCCTL2_RMW_EN_CLR_MSK    0xfffffeff
/* The reset value of the ALT_ECC_HMC_OCP_ECCCTL2_RMW_EN register field. */
#define ALT_ECC_HMC_OCP_ECCCTL2_RMW_EN_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECCCTL2_RMW_EN field value from a register. */
#define ALT_ECC_HMC_OCP_ECCCTL2_RMW_EN_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_ECC_HMC_OCP_ECCCTL2_RMW_EN register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECCCTL2_RMW_EN_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : OVRW_RB_ECC_EN
 * 
 * Overwrite the read-back ecc code during RMW process if DBE is detected.
 * 
 * 1'b0: write the read-back ECC from RMW process if derr is detected. Default
 * value after reset.
 * 
 * 1'b1: write of 1 will overwrite the ECC overwrite feature.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECCCTL2_OVRW_RB_ECC_EN register field. */
#define ALT_ECC_HMC_OCP_ECCCTL2_OVRW_RB_ECC_EN_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECCCTL2_OVRW_RB_ECC_EN register field. */
#define ALT_ECC_HMC_OCP_ECCCTL2_OVRW_RB_ECC_EN_MSB        16
/* The width in bits of the ALT_ECC_HMC_OCP_ECCCTL2_OVRW_RB_ECC_EN register field. */
#define ALT_ECC_HMC_OCP_ECCCTL2_OVRW_RB_ECC_EN_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ECCCTL2_OVRW_RB_ECC_EN register field value. */
#define ALT_ECC_HMC_OCP_ECCCTL2_OVRW_RB_ECC_EN_SET_MSK    0x00010000
/* The mask used to clear the ALT_ECC_HMC_OCP_ECCCTL2_OVRW_RB_ECC_EN register field value. */
#define ALT_ECC_HMC_OCP_ECCCTL2_OVRW_RB_ECC_EN_CLR_MSK    0xfffeffff
/* The reset value of the ALT_ECC_HMC_OCP_ECCCTL2_OVRW_RB_ECC_EN register field. */
#define ALT_ECC_HMC_OCP_ECCCTL2_OVRW_RB_ECC_EN_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECCCTL2_OVRW_RB_ECC_EN field value from a register. */
#define ALT_ECC_HMC_OCP_ECCCTL2_OVRW_RB_ECC_EN_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_ECC_HMC_OCP_ECCCTL2_OVRW_RB_ECC_EN register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECCCTL2_OVRW_RB_ECC_EN_SET(value) (((value) << 16) & 0x00010000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_ECCCTL2.
 */
struct ALT_ECC_HMC_OCP_ECCCTL2_s
{
    uint32_t  AUTOWB_EN      :  1;  /* ALT_ECC_HMC_OCP_ECCCTL2_AUTOWB_EN */
    uint32_t                 :  7;  /* *UNDEFINED* */
    uint32_t  RMW_EN         :  1;  /* ALT_ECC_HMC_OCP_ECCCTL2_RMW_EN */
    uint32_t                 :  7;  /* *UNDEFINED* */
    uint32_t  OVRW_RB_ECC_EN :  1;  /* ALT_ECC_HMC_OCP_ECCCTL2_OVRW_RB_ECC_EN */
    uint32_t                 : 15;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_ECCCTL2. */
typedef volatile struct ALT_ECC_HMC_OCP_ECCCTL2_s  ALT_ECC_HMC_OCP_ECCCTL2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_ECCCTL2 register. */
#define ALT_ECC_HMC_OCP_ECCCTL2_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_ECCCTL2 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_ECCCTL2_OFST        0x104

/*
 * Register : ERRINTEN
 * 
 * Error Interrupt enable
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [0]    | RW     | 0x0   | ALT_ECC_HMC_OCP_ERRINTEN_SERRINTEN 
 *  [1]    | RW     | 0x0   | ALT_ECC_HMC_OCP_ERRINTEN_DERRINTEN 
 *  [2]    | RW     | 0x0   | ALT_ECC_HMC_OCP_ERRINTEN_HMI_INTREN
 *  [31:3] | ???    | 0x0   | *UNDEFINED*                        
 * 
 */
/*
 * Field : SERRINTEN
 * 
 * This bit is used to enable the single bit error to system manager. It enables
 * the interrupt modes (sbe request,compare match)
 * 
 * 1'b0: SBE interrupt generation logic is disabled.
 * 
 * 1'b1: SBE interrupt generation logic is enabled,
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ERRINTEN_SERRINTEN register field. */
#define ALT_ECC_HMC_OCP_ERRINTEN_SERRINTEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ERRINTEN_SERRINTEN register field. */
#define ALT_ECC_HMC_OCP_ERRINTEN_SERRINTEN_MSB        0
/* The width in bits of the ALT_ECC_HMC_OCP_ERRINTEN_SERRINTEN register field. */
#define ALT_ECC_HMC_OCP_ERRINTEN_SERRINTEN_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ERRINTEN_SERRINTEN register field value. */
#define ALT_ECC_HMC_OCP_ERRINTEN_SERRINTEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_HMC_OCP_ERRINTEN_SERRINTEN register field value. */
#define ALT_ECC_HMC_OCP_ERRINTEN_SERRINTEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_HMC_OCP_ERRINTEN_SERRINTEN register field. */
#define ALT_ECC_HMC_OCP_ERRINTEN_SERRINTEN_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ERRINTEN_SERRINTEN field value from a register. */
#define ALT_ECC_HMC_OCP_ERRINTEN_SERRINTEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_HMC_OCP_ERRINTEN_SERRINTEN register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ERRINTEN_SERRINTEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : DERRINTEN
 * 
 * This bit is used to enable the double bit error interrupt to system
 * 
 * manager.When dbe error occurs, bus error is always generated with the
 * transaction.DERR interrupt (derr_req)will be generated when this bit is enabled.
 * 
 * 1'b0: DBE interrupt generation logic is disabled.
 * 
 * 1'b1: DBE interrupt generation logic is enabled,
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ERRINTEN_DERRINTEN register field. */
#define ALT_ECC_HMC_OCP_ERRINTEN_DERRINTEN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ERRINTEN_DERRINTEN register field. */
#define ALT_ECC_HMC_OCP_ERRINTEN_DERRINTEN_MSB        1
/* The width in bits of the ALT_ECC_HMC_OCP_ERRINTEN_DERRINTEN register field. */
#define ALT_ECC_HMC_OCP_ERRINTEN_DERRINTEN_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ERRINTEN_DERRINTEN register field value. */
#define ALT_ECC_HMC_OCP_ERRINTEN_DERRINTEN_SET_MSK    0x00000002
/* The mask used to clear the ALT_ECC_HMC_OCP_ERRINTEN_DERRINTEN register field value. */
#define ALT_ECC_HMC_OCP_ERRINTEN_DERRINTEN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_ECC_HMC_OCP_ERRINTEN_DERRINTEN register field. */
#define ALT_ECC_HMC_OCP_ERRINTEN_DERRINTEN_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ERRINTEN_DERRINTEN field value from a register. */
#define ALT_ECC_HMC_OCP_ERRINTEN_DERRINTEN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_ECC_HMC_OCP_ERRINTEN_DERRINTEN register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ERRINTEN_DERRINTEN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : HMI_INTREN
 * 
 * Enables GP HMI interrupt.
 * 
 * This bit is used to enable the general purpose HMI interrupt error interrupt to
 * system manager. When this bit is enabled along with autoWB_drop_en, it compares
 * the internal counter with autoWB_drop_cntreg value. If the value is greater than
 * or equal to, then the interrupt will be asserted..
 * 
 * 1'b0: hmi interrupt generation logic is disabled.
 * 
 * 1'b1: hmi interrupt generation logic is enabled.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ERRINTEN_HMI_INTREN register field. */
#define ALT_ECC_HMC_OCP_ERRINTEN_HMI_INTREN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ERRINTEN_HMI_INTREN register field. */
#define ALT_ECC_HMC_OCP_ERRINTEN_HMI_INTREN_MSB        2
/* The width in bits of the ALT_ECC_HMC_OCP_ERRINTEN_HMI_INTREN register field. */
#define ALT_ECC_HMC_OCP_ERRINTEN_HMI_INTREN_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ERRINTEN_HMI_INTREN register field value. */
#define ALT_ECC_HMC_OCP_ERRINTEN_HMI_INTREN_SET_MSK    0x00000004
/* The mask used to clear the ALT_ECC_HMC_OCP_ERRINTEN_HMI_INTREN register field value. */
#define ALT_ECC_HMC_OCP_ERRINTEN_HMI_INTREN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_ECC_HMC_OCP_ERRINTEN_HMI_INTREN register field. */
#define ALT_ECC_HMC_OCP_ERRINTEN_HMI_INTREN_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ERRINTEN_HMI_INTREN field value from a register. */
#define ALT_ECC_HMC_OCP_ERRINTEN_HMI_INTREN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_ECC_HMC_OCP_ERRINTEN_HMI_INTREN register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ERRINTEN_HMI_INTREN_SET(value) (((value) << 2) & 0x00000004)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_ERRINTEN.
 */
struct ALT_ECC_HMC_OCP_ERRINTEN_s
{
    uint32_t  SERRINTEN  :  1;  /* ALT_ECC_HMC_OCP_ERRINTEN_SERRINTEN */
    uint32_t  DERRINTEN  :  1;  /* ALT_ECC_HMC_OCP_ERRINTEN_DERRINTEN */
    uint32_t  HMI_INTREN :  1;  /* ALT_ECC_HMC_OCP_ERRINTEN_HMI_INTREN */
    uint32_t             : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_ERRINTEN. */
typedef volatile struct ALT_ECC_HMC_OCP_ERRINTEN_s  ALT_ECC_HMC_OCP_ERRINTEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_ERRINTEN register. */
#define ALT_ECC_HMC_OCP_ERRINTEN_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_ERRINTEN register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_ERRINTEN_OFST        0x110

/*
 * Register : ERRINTENS
 * 
 * Error Interrupt set
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [0]    | RW     | 0x0   | ALT_ECC_HMC_OCP_ERRINTENS_SERRINTS 
 *  [1]    | RW     | 0x0   | ALT_ECC_HMC_OCP_ERRINTENS_DERRINTS 
 *  [2]    | RW     | 0x0   | ALT_ECC_HMC_OCP_ERRINTENS_HMI_INTRS
 *  [31:3] | ???    | 0x0   | *UNDEFINED*                        
 * 
 */
/*
 * Field : SERRINTS
 * 
 * This bit is used to set the single-bit error interrupt bit.
 * 
 * Reads reflect SERRINTEN.
 * 
 * 1'b0: writing of zero has no effect
 * 
 * 1'b1: writing one, this bit will set SERRINTEN bit to 1.
 * 
 * This is performing a bitwise writing, not implemented as a FF.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ERRINTENS_SERRINTS register field. */
#define ALT_ECC_HMC_OCP_ERRINTENS_SERRINTS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ERRINTENS_SERRINTS register field. */
#define ALT_ECC_HMC_OCP_ERRINTENS_SERRINTS_MSB        0
/* The width in bits of the ALT_ECC_HMC_OCP_ERRINTENS_SERRINTS register field. */
#define ALT_ECC_HMC_OCP_ERRINTENS_SERRINTS_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ERRINTENS_SERRINTS register field value. */
#define ALT_ECC_HMC_OCP_ERRINTENS_SERRINTS_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_HMC_OCP_ERRINTENS_SERRINTS register field value. */
#define ALT_ECC_HMC_OCP_ERRINTENS_SERRINTS_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_HMC_OCP_ERRINTENS_SERRINTS register field. */
#define ALT_ECC_HMC_OCP_ERRINTENS_SERRINTS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ERRINTENS_SERRINTS field value from a register. */
#define ALT_ECC_HMC_OCP_ERRINTENS_SERRINTS_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_HMC_OCP_ERRINTENS_SERRINTS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ERRINTENS_SERRINTS_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : DERRINTS
 * 
 * This bit is used to set the double-bit error interrupt bit.
 * 
 * Reads reflect DERRINTEN.
 * 
 * 1'b0: writing of zero has no effect
 * 
 * 1'b1: writing one, DERRINTEN bit to 1.
 * 
 * This is performing a bitwise writing, not implemented as a FF.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ERRINTENS_DERRINTS register field. */
#define ALT_ECC_HMC_OCP_ERRINTENS_DERRINTS_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ERRINTENS_DERRINTS register field. */
#define ALT_ECC_HMC_OCP_ERRINTENS_DERRINTS_MSB        1
/* The width in bits of the ALT_ECC_HMC_OCP_ERRINTENS_DERRINTS register field. */
#define ALT_ECC_HMC_OCP_ERRINTENS_DERRINTS_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ERRINTENS_DERRINTS register field value. */
#define ALT_ECC_HMC_OCP_ERRINTENS_DERRINTS_SET_MSK    0x00000002
/* The mask used to clear the ALT_ECC_HMC_OCP_ERRINTENS_DERRINTS register field value. */
#define ALT_ECC_HMC_OCP_ERRINTENS_DERRINTS_CLR_MSK    0xfffffffd
/* The reset value of the ALT_ECC_HMC_OCP_ERRINTENS_DERRINTS register field. */
#define ALT_ECC_HMC_OCP_ERRINTENS_DERRINTS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ERRINTENS_DERRINTS field value from a register. */
#define ALT_ECC_HMC_OCP_ERRINTENS_DERRINTS_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_ECC_HMC_OCP_ERRINTENS_DERRINTS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ERRINTENS_DERRINTS_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : HMI_INTRS
 * 
 * This bit is used to set the general purposes HMI interrupt error.
 * 
 * 1'b0: writing of zero has no effect
 * 
 * 1'b1: writing one, HMI_INTREN bit to 1.
 * 
 * This is performing a bitwise writing, not implemented as a FF.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ERRINTENS_HMI_INTRS register field. */
#define ALT_ECC_HMC_OCP_ERRINTENS_HMI_INTRS_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ERRINTENS_HMI_INTRS register field. */
#define ALT_ECC_HMC_OCP_ERRINTENS_HMI_INTRS_MSB        2
/* The width in bits of the ALT_ECC_HMC_OCP_ERRINTENS_HMI_INTRS register field. */
#define ALT_ECC_HMC_OCP_ERRINTENS_HMI_INTRS_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ERRINTENS_HMI_INTRS register field value. */
#define ALT_ECC_HMC_OCP_ERRINTENS_HMI_INTRS_SET_MSK    0x00000004
/* The mask used to clear the ALT_ECC_HMC_OCP_ERRINTENS_HMI_INTRS register field value. */
#define ALT_ECC_HMC_OCP_ERRINTENS_HMI_INTRS_CLR_MSK    0xfffffffb
/* The reset value of the ALT_ECC_HMC_OCP_ERRINTENS_HMI_INTRS register field. */
#define ALT_ECC_HMC_OCP_ERRINTENS_HMI_INTRS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ERRINTENS_HMI_INTRS field value from a register. */
#define ALT_ECC_HMC_OCP_ERRINTENS_HMI_INTRS_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_ECC_HMC_OCP_ERRINTENS_HMI_INTRS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ERRINTENS_HMI_INTRS_SET(value) (((value) << 2) & 0x00000004)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_ERRINTENS.
 */
struct ALT_ECC_HMC_OCP_ERRINTENS_s
{
    uint32_t  SERRINTS  :  1;  /* ALT_ECC_HMC_OCP_ERRINTENS_SERRINTS */
    uint32_t  DERRINTS  :  1;  /* ALT_ECC_HMC_OCP_ERRINTENS_DERRINTS */
    uint32_t  HMI_INTRS :  1;  /* ALT_ECC_HMC_OCP_ERRINTENS_HMI_INTRS */
    uint32_t            : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_ERRINTENS. */
typedef volatile struct ALT_ECC_HMC_OCP_ERRINTENS_s  ALT_ECC_HMC_OCP_ERRINTENS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_ERRINTENS register. */
#define ALT_ECC_HMC_OCP_ERRINTENS_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_ERRINTENS register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_ERRINTENS_OFST        0x114

/*
 * Register : ERRINTENR
 * 
 * Error Interrupt reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [0]    | RW     | 0x0   | ALT_ECC_HMC_OCP_ERRINTENR_SERRINTR 
 *  [1]    | RW     | 0x0   | ALT_ECC_HMC_OCP_ERRINTENR_DERRINTR 
 *  [2]    | RW     | 0x0   | ALT_ECC_HMC_OCP_ERRINTENR_HMI_INTRR
 *  [31:3] | ???    | 0x0   | *UNDEFINED*                        
 * 
 */
/*
 * Field : SERRINTR
 * 
 * This bit is used to reset the single-bit error interrupt bit.
 * 
 * Reads reflect SERRINTEN.
 * 
 * 1'b0: Writing of zero has no effect.
 * 
 * 1'b1: By writing one, this bit will reset SERRINTEN bit to 0.
 * 
 * This is performing a bitwise writing of this feature.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ERRINTENR_SERRINTR register field. */
#define ALT_ECC_HMC_OCP_ERRINTENR_SERRINTR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ERRINTENR_SERRINTR register field. */
#define ALT_ECC_HMC_OCP_ERRINTENR_SERRINTR_MSB        0
/* The width in bits of the ALT_ECC_HMC_OCP_ERRINTENR_SERRINTR register field. */
#define ALT_ECC_HMC_OCP_ERRINTENR_SERRINTR_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ERRINTENR_SERRINTR register field value. */
#define ALT_ECC_HMC_OCP_ERRINTENR_SERRINTR_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_HMC_OCP_ERRINTENR_SERRINTR register field value. */
#define ALT_ECC_HMC_OCP_ERRINTENR_SERRINTR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_HMC_OCP_ERRINTENR_SERRINTR register field. */
#define ALT_ECC_HMC_OCP_ERRINTENR_SERRINTR_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ERRINTENR_SERRINTR field value from a register. */
#define ALT_ECC_HMC_OCP_ERRINTENR_SERRINTR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_HMC_OCP_ERRINTENR_SERRINTR register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ERRINTENR_SERRINTR_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : DERRINTR
 * 
 * This bit is used to reset the double-bit error interrupt bit.
 * 
 * Reads reflect DERRINTEN.
 * 
 * 1'b0: Writing of zero has no effect.
 * 
 * 1'b1: By writing one, this bit will reset DERRINTEN bit to 0.
 * 
 * This is performing a bitwise writing of this feature.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ERRINTENR_DERRINTR register field. */
#define ALT_ECC_HMC_OCP_ERRINTENR_DERRINTR_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ERRINTENR_DERRINTR register field. */
#define ALT_ECC_HMC_OCP_ERRINTENR_DERRINTR_MSB        1
/* The width in bits of the ALT_ECC_HMC_OCP_ERRINTENR_DERRINTR register field. */
#define ALT_ECC_HMC_OCP_ERRINTENR_DERRINTR_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ERRINTENR_DERRINTR register field value. */
#define ALT_ECC_HMC_OCP_ERRINTENR_DERRINTR_SET_MSK    0x00000002
/* The mask used to clear the ALT_ECC_HMC_OCP_ERRINTENR_DERRINTR register field value. */
#define ALT_ECC_HMC_OCP_ERRINTENR_DERRINTR_CLR_MSK    0xfffffffd
/* The reset value of the ALT_ECC_HMC_OCP_ERRINTENR_DERRINTR register field. */
#define ALT_ECC_HMC_OCP_ERRINTENR_DERRINTR_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ERRINTENR_DERRINTR field value from a register. */
#define ALT_ECC_HMC_OCP_ERRINTENR_DERRINTR_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_ECC_HMC_OCP_ERRINTENR_DERRINTR register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ERRINTENR_DERRINTR_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : HMI_INTRR
 * 
 * This bit is used to reset the general purpose HMI interrupt error interrupt to
 * system manager
 * 
 * 1'b0: Writing of zero has no effect.
 * 
 * 1'b1: By writing one, this bit will reset HMI_INTREN bit to 0.
 * 
 * This is performing a bitwise writing of this feature.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ERRINTENR_HMI_INTRR register field. */
#define ALT_ECC_HMC_OCP_ERRINTENR_HMI_INTRR_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ERRINTENR_HMI_INTRR register field. */
#define ALT_ECC_HMC_OCP_ERRINTENR_HMI_INTRR_MSB        2
/* The width in bits of the ALT_ECC_HMC_OCP_ERRINTENR_HMI_INTRR register field. */
#define ALT_ECC_HMC_OCP_ERRINTENR_HMI_INTRR_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ERRINTENR_HMI_INTRR register field value. */
#define ALT_ECC_HMC_OCP_ERRINTENR_HMI_INTRR_SET_MSK    0x00000004
/* The mask used to clear the ALT_ECC_HMC_OCP_ERRINTENR_HMI_INTRR register field value. */
#define ALT_ECC_HMC_OCP_ERRINTENR_HMI_INTRR_CLR_MSK    0xfffffffb
/* The reset value of the ALT_ECC_HMC_OCP_ERRINTENR_HMI_INTRR register field. */
#define ALT_ECC_HMC_OCP_ERRINTENR_HMI_INTRR_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ERRINTENR_HMI_INTRR field value from a register. */
#define ALT_ECC_HMC_OCP_ERRINTENR_HMI_INTRR_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_ECC_HMC_OCP_ERRINTENR_HMI_INTRR register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ERRINTENR_HMI_INTRR_SET(value) (((value) << 2) & 0x00000004)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_ERRINTENR.
 */
struct ALT_ECC_HMC_OCP_ERRINTENR_s
{
    uint32_t  SERRINTR  :  1;  /* ALT_ECC_HMC_OCP_ERRINTENR_SERRINTR */
    uint32_t  DERRINTR  :  1;  /* ALT_ECC_HMC_OCP_ERRINTENR_DERRINTR */
    uint32_t  HMI_INTRR :  1;  /* ALT_ECC_HMC_OCP_ERRINTENR_HMI_INTRR */
    uint32_t            : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_ERRINTENR. */
typedef volatile struct ALT_ECC_HMC_OCP_ERRINTENR_s  ALT_ECC_HMC_OCP_ERRINTENR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_ERRINTENR register. */
#define ALT_ECC_HMC_OCP_ERRINTENR_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_ERRINTENR register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_ERRINTENR_OFST        0x118

/*
 * Register : INTMODE
 * 
 * Interrupt mode
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                             
 * :--------|:-------|:------|:-----------------------------------------
 *  [0]     | RW     | 0x0   | ALT_ECC_HMC_OCP_INTMOD_INTMOD           
 *  [7:1]   | ???    | 0x0   | *UNDEFINED*                             
 *  [8]     | RW     | 0x0   | ALT_ECC_HMC_OCP_INTMOD_EXT_ADDRPARITY_EN
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*                             
 *  [16]    | RW     | 0x0   | ALT_ECC_HMC_OCP_INTMOD_INTONCMP         
 *  [23:17] | ???    | 0x0   | *UNDEFINED*                             
 *  [24]    | RW     | 0x0   | ALT_ECC_HMC_OCP_INTMOD_AFICAL_EN        
 *  [31:25] | ???    | 0x0   | *UNDEFINED*                             
 * 
 */
/*
 * Field : INTMODE
 * 
 * Interrupt mode for single-bit error.This is disabled when SERRINTEN is disabled.
 * 
 * 1'b0: interrupt disbaled
 * 
 * 1'b1: generate interrupt on every SERR
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_INTMOD_INTMOD register field. */
#define ALT_ECC_HMC_OCP_INTMOD_INTMOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_INTMOD_INTMOD register field. */
#define ALT_ECC_HMC_OCP_INTMOD_INTMOD_MSB        0
/* The width in bits of the ALT_ECC_HMC_OCP_INTMOD_INTMOD register field. */
#define ALT_ECC_HMC_OCP_INTMOD_INTMOD_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_INTMOD_INTMOD register field value. */
#define ALT_ECC_HMC_OCP_INTMOD_INTMOD_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_HMC_OCP_INTMOD_INTMOD register field value. */
#define ALT_ECC_HMC_OCP_INTMOD_INTMOD_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_HMC_OCP_INTMOD_INTMOD register field. */
#define ALT_ECC_HMC_OCP_INTMOD_INTMOD_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_INTMOD_INTMOD field value from a register. */
#define ALT_ECC_HMC_OCP_INTMOD_INTMOD_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_HMC_OCP_INTMOD_INTMOD register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_INTMOD_INTMOD_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : EXT_ADDRPARITY_EN
 * 
 * Enable address parity for DDR4 memories.
 * 
 * This bit is used to enable the interrupt that generate externally when address
 * parity is detected. when enabled, this will be generating derr_req signal
 * 
 * 1'b0: disable address parity on DERR interrupt
 * 
 * 1'b1: enable address parity on DERR interrupt
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_INTMOD_EXT_ADDRPARITY_EN register field. */
#define ALT_ECC_HMC_OCP_INTMOD_EXT_ADDRPARITY_EN_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_INTMOD_EXT_ADDRPARITY_EN register field. */
#define ALT_ECC_HMC_OCP_INTMOD_EXT_ADDRPARITY_EN_MSB        8
/* The width in bits of the ALT_ECC_HMC_OCP_INTMOD_EXT_ADDRPARITY_EN register field. */
#define ALT_ECC_HMC_OCP_INTMOD_EXT_ADDRPARITY_EN_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_INTMOD_EXT_ADDRPARITY_EN register field value. */
#define ALT_ECC_HMC_OCP_INTMOD_EXT_ADDRPARITY_EN_SET_MSK    0x00000100
/* The mask used to clear the ALT_ECC_HMC_OCP_INTMOD_EXT_ADDRPARITY_EN register field value. */
#define ALT_ECC_HMC_OCP_INTMOD_EXT_ADDRPARITY_EN_CLR_MSK    0xfffffeff
/* The reset value of the ALT_ECC_HMC_OCP_INTMOD_EXT_ADDRPARITY_EN register field. */
#define ALT_ECC_HMC_OCP_INTMOD_EXT_ADDRPARITY_EN_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_INTMOD_EXT_ADDRPARITY_EN field value from a register. */
#define ALT_ECC_HMC_OCP_INTMOD_EXT_ADDRPARITY_EN_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_ECC_HMC_OCP_INTMOD_EXT_ADDRPARITY_EN register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_INTMOD_EXT_ADDRPARITY_EN_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : INTONCMP
 * 
 * Enable interrupt on compare match.
 * 
 * This bit is used to enable interrupt when the internal counter and SERRCNTA
 * value matches. serr_req signal will be asserted on a match.
 * 
 * 1'b0: SERR interrupt on compare match is disabled
 * 
 * 1'b1: SERR interrupt on compare match is enabled
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_INTMOD_INTONCMP register field. */
#define ALT_ECC_HMC_OCP_INTMOD_INTONCMP_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_INTMOD_INTONCMP register field. */
#define ALT_ECC_HMC_OCP_INTMOD_INTONCMP_MSB        16
/* The width in bits of the ALT_ECC_HMC_OCP_INTMOD_INTONCMP register field. */
#define ALT_ECC_HMC_OCP_INTMOD_INTONCMP_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_INTMOD_INTONCMP register field value. */
#define ALT_ECC_HMC_OCP_INTMOD_INTONCMP_SET_MSK    0x00010000
/* The mask used to clear the ALT_ECC_HMC_OCP_INTMOD_INTONCMP register field value. */
#define ALT_ECC_HMC_OCP_INTMOD_INTONCMP_CLR_MSK    0xfffeffff
/* The reset value of the ALT_ECC_HMC_OCP_INTMOD_INTONCMP register field. */
#define ALT_ECC_HMC_OCP_INTMOD_INTONCMP_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_INTMOD_INTONCMP field value from a register. */
#define ALT_ECC_HMC_OCP_INTMOD_INTONCMP_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_ECC_HMC_OCP_INTMOD_INTONCMP register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_INTMOD_INTONCMP_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : AFICAL_EN
 * 
 * Enable interrupt of AFI Cal success.
 * 
 * This bit is used to enable interrupt of AFI Cal success. hmi_intr signal will be
 * asserted on a match.
 * 
 * 1'b0: HMI interrupts on compare match is disabled.
 * 
 * 1'b1: HMI interrupts on compare matched is enabled.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_INTMOD_AFICAL_EN register field. */
#define ALT_ECC_HMC_OCP_INTMOD_AFICAL_EN_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_INTMOD_AFICAL_EN register field. */
#define ALT_ECC_HMC_OCP_INTMOD_AFICAL_EN_MSB        24
/* The width in bits of the ALT_ECC_HMC_OCP_INTMOD_AFICAL_EN register field. */
#define ALT_ECC_HMC_OCP_INTMOD_AFICAL_EN_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_INTMOD_AFICAL_EN register field value. */
#define ALT_ECC_HMC_OCP_INTMOD_AFICAL_EN_SET_MSK    0x01000000
/* The mask used to clear the ALT_ECC_HMC_OCP_INTMOD_AFICAL_EN register field value. */
#define ALT_ECC_HMC_OCP_INTMOD_AFICAL_EN_CLR_MSK    0xfeffffff
/* The reset value of the ALT_ECC_HMC_OCP_INTMOD_AFICAL_EN register field. */
#define ALT_ECC_HMC_OCP_INTMOD_AFICAL_EN_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_INTMOD_AFICAL_EN field value from a register. */
#define ALT_ECC_HMC_OCP_INTMOD_AFICAL_EN_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_ECC_HMC_OCP_INTMOD_AFICAL_EN register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_INTMOD_AFICAL_EN_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_INTMOD.
 */
struct ALT_ECC_HMC_OCP_INTMOD_s
{
    uint32_t  INTMODE           :  1;  /* ALT_ECC_HMC_OCP_INTMOD_INTMOD */
    uint32_t                    :  7;  /* *UNDEFINED* */
    uint32_t  EXT_ADDRPARITY_EN :  1;  /* ALT_ECC_HMC_OCP_INTMOD_EXT_ADDRPARITY_EN */
    uint32_t                    :  7;  /* *UNDEFINED* */
    uint32_t  INTONCMP          :  1;  /* ALT_ECC_HMC_OCP_INTMOD_INTONCMP */
    uint32_t                    :  7;  /* *UNDEFINED* */
    uint32_t  AFICAL_EN         :  1;  /* ALT_ECC_HMC_OCP_INTMOD_AFICAL_EN */
    uint32_t                    :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_INTMOD. */
typedef volatile struct ALT_ECC_HMC_OCP_INTMOD_s  ALT_ECC_HMC_OCP_INTMOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_INTMOD register. */
#define ALT_ECC_HMC_OCP_INTMOD_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_INTMOD register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_INTMOD_OFST        0x11c

/*
 * Register : INTSTAT
 * 
 * Interrupt status
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                       
 * :--------|:-------|:------|:-----------------------------------
 *  [0]     | RW     | 0x0   | ALT_ECC_HMC_OCP_INTSTAT_SERRPENA  
 *  [1]     | RW     | 0x0   | ALT_ECC_HMC_OCP_INTSTAT_DERRPENA  
 *  [2]     | RW     | 0x0   | ALT_ECC_HMC_OCP_INTSTAT_HMI_PENA  
 *  [15:3]  | ???    | 0x0   | *UNDEFINED*                       
 *  [16]    | RW     | 0x0   | ALT_ECC_HMC_OCP_INTSTAT_ADDRMTCFLG
 *  [17]    | RW     | 0x0   | ALT_ECC_HMC_OCP_INTSTAT_ADDRPARFLG
 *  [18]    | RW     | 0x0   | ALT_ECC_HMC_OCP_INTSTAT_DERRBUSFLG
 *  [31:19] | ???    | 0x0   | *UNDEFINED*                       
 * 
 */
/*
 * Field : SERRPENA
 * 
 * Single-bit error pending
 * 
 * This bit is used to clear the pending SBE.
 * 
 * 1'b0: No effect.
 * 
 * 1'b1: indicates SBE is pending. Write of one will clear the pending. This will
 * de-assert the serr_req signal.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_INTSTAT_SERRPENA register field. */
#define ALT_ECC_HMC_OCP_INTSTAT_SERRPENA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_INTSTAT_SERRPENA register field. */
#define ALT_ECC_HMC_OCP_INTSTAT_SERRPENA_MSB        0
/* The width in bits of the ALT_ECC_HMC_OCP_INTSTAT_SERRPENA register field. */
#define ALT_ECC_HMC_OCP_INTSTAT_SERRPENA_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_INTSTAT_SERRPENA register field value. */
#define ALT_ECC_HMC_OCP_INTSTAT_SERRPENA_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_HMC_OCP_INTSTAT_SERRPENA register field value. */
#define ALT_ECC_HMC_OCP_INTSTAT_SERRPENA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_HMC_OCP_INTSTAT_SERRPENA register field. */
#define ALT_ECC_HMC_OCP_INTSTAT_SERRPENA_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_INTSTAT_SERRPENA field value from a register. */
#define ALT_ECC_HMC_OCP_INTSTAT_SERRPENA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_HMC_OCP_INTSTAT_SERRPENA register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_INTSTAT_SERRPENA_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : DERRPENA
 * 
 * Double bit error pending
 * 
 * This bit is used to clear the pending DBE.
 * 
 * 1'b0: No effect.
 * 
 * 1'b1: indicates DBE is pending. Write of one will clear the pending DBE. This
 * will de-assert the derr_req signal.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_INTSTAT_DERRPENA register field. */
#define ALT_ECC_HMC_OCP_INTSTAT_DERRPENA_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_INTSTAT_DERRPENA register field. */
#define ALT_ECC_HMC_OCP_INTSTAT_DERRPENA_MSB        1
/* The width in bits of the ALT_ECC_HMC_OCP_INTSTAT_DERRPENA register field. */
#define ALT_ECC_HMC_OCP_INTSTAT_DERRPENA_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_INTSTAT_DERRPENA register field value. */
#define ALT_ECC_HMC_OCP_INTSTAT_DERRPENA_SET_MSK    0x00000002
/* The mask used to clear the ALT_ECC_HMC_OCP_INTSTAT_DERRPENA register field value. */
#define ALT_ECC_HMC_OCP_INTSTAT_DERRPENA_CLR_MSK    0xfffffffd
/* The reset value of the ALT_ECC_HMC_OCP_INTSTAT_DERRPENA register field. */
#define ALT_ECC_HMC_OCP_INTSTAT_DERRPENA_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_INTSTAT_DERRPENA field value from a register. */
#define ALT_ECC_HMC_OCP_INTSTAT_DERRPENA_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_ECC_HMC_OCP_INTSTAT_DERRPENA register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_INTSTAT_DERRPENA_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : HMI_PENA
 * 
 * HMI interrupt pending
 * 
 * This bit is used to clear the pending hmi interrupt bit.
 * 
 * 1'b0: No effect
 * 
 * 1'b1: indicates hmi interrupt is pending. Write of one will clear the pending
 * interrupt. This will de-assert the hmi_intr signal.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_INTSTAT_HMI_PENA register field. */
#define ALT_ECC_HMC_OCP_INTSTAT_HMI_PENA_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_INTSTAT_HMI_PENA register field. */
#define ALT_ECC_HMC_OCP_INTSTAT_HMI_PENA_MSB        2
/* The width in bits of the ALT_ECC_HMC_OCP_INTSTAT_HMI_PENA register field. */
#define ALT_ECC_HMC_OCP_INTSTAT_HMI_PENA_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_INTSTAT_HMI_PENA register field value. */
#define ALT_ECC_HMC_OCP_INTSTAT_HMI_PENA_SET_MSK    0x00000004
/* The mask used to clear the ALT_ECC_HMC_OCP_INTSTAT_HMI_PENA register field value. */
#define ALT_ECC_HMC_OCP_INTSTAT_HMI_PENA_CLR_MSK    0xfffffffb
/* The reset value of the ALT_ECC_HMC_OCP_INTSTAT_HMI_PENA register field. */
#define ALT_ECC_HMC_OCP_INTSTAT_HMI_PENA_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_INTSTAT_HMI_PENA field value from a register. */
#define ALT_ECC_HMC_OCP_INTSTAT_HMI_PENA_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_ECC_HMC_OCP_INTSTAT_HMI_PENA register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_INTSTAT_HMI_PENA_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : ADDRMTCFLG
 * 
 * Address mismatch error flag.
 * 
 * This bit is used to flag the last transaction was flagged with address mismatch
 * error.
 * 
 * 1'b0: No effect.
 * 
 * 1'b1: indicates address mismatch error has occured. This will drive the bus to
 * respond the read with bus error. Write of one will clears this register address
 * mismatch error.
 * 
 * Bus error occurs as part of the transaction but this indicates the SW the cause
 * of the error. This should occur once per transaction.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_INTSTAT_ADDRMTCFLG register field. */
#define ALT_ECC_HMC_OCP_INTSTAT_ADDRMTCFLG_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_INTSTAT_ADDRMTCFLG register field. */
#define ALT_ECC_HMC_OCP_INTSTAT_ADDRMTCFLG_MSB        16
/* The width in bits of the ALT_ECC_HMC_OCP_INTSTAT_ADDRMTCFLG register field. */
#define ALT_ECC_HMC_OCP_INTSTAT_ADDRMTCFLG_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_INTSTAT_ADDRMTCFLG register field value. */
#define ALT_ECC_HMC_OCP_INTSTAT_ADDRMTCFLG_SET_MSK    0x00010000
/* The mask used to clear the ALT_ECC_HMC_OCP_INTSTAT_ADDRMTCFLG register field value. */
#define ALT_ECC_HMC_OCP_INTSTAT_ADDRMTCFLG_CLR_MSK    0xfffeffff
/* The reset value of the ALT_ECC_HMC_OCP_INTSTAT_ADDRMTCFLG register field. */
#define ALT_ECC_HMC_OCP_INTSTAT_ADDRMTCFLG_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_INTSTAT_ADDRMTCFLG field value from a register. */
#define ALT_ECC_HMC_OCP_INTSTAT_ADDRMTCFLG_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_ECC_HMC_OCP_INTSTAT_ADDRMTCFLG register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_INTSTAT_ADDRMTCFLG_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : ADDRPARFLG
 * 
 * External address parity flag for DDR4 memory.
 * 
 * This bit is used to flag external address parity flag which is driven with
 * derr_req port.
 * 
 * 1'b0: No Effect.
 * 
 * 1'b1: Read of one indicates double-bit interrupt has occurred.   Write of one
 * will clear this register last address parity flag.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_INTSTAT_ADDRPARFLG register field. */
#define ALT_ECC_HMC_OCP_INTSTAT_ADDRPARFLG_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_INTSTAT_ADDRPARFLG register field. */
#define ALT_ECC_HMC_OCP_INTSTAT_ADDRPARFLG_MSB        17
/* The width in bits of the ALT_ECC_HMC_OCP_INTSTAT_ADDRPARFLG register field. */
#define ALT_ECC_HMC_OCP_INTSTAT_ADDRPARFLG_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_INTSTAT_ADDRPARFLG register field value. */
#define ALT_ECC_HMC_OCP_INTSTAT_ADDRPARFLG_SET_MSK    0x00020000
/* The mask used to clear the ALT_ECC_HMC_OCP_INTSTAT_ADDRPARFLG register field value. */
#define ALT_ECC_HMC_OCP_INTSTAT_ADDRPARFLG_CLR_MSK    0xfffdffff
/* The reset value of the ALT_ECC_HMC_OCP_INTSTAT_ADDRPARFLG register field. */
#define ALT_ECC_HMC_OCP_INTSTAT_ADDRPARFLG_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_INTSTAT_ADDRPARFLG field value from a register. */
#define ALT_ECC_HMC_OCP_INTSTAT_ADDRPARFLG_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_ECC_HMC_OCP_INTSTAT_ADDRPARFLG register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_INTSTAT_ADDRPARFLG_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : DERRBUSFLG
 * 
 * This bit is used to flag the last transaction was flagged with double-bit error.
 * 
 * 1'b0: no effect.
 * 
 * 1'b1: indicates double-bit error has occured. This will drive the bus to respond
 * the read with bus error. Write of one will clear this register double-but bus
 * error.
 * 
 * Bus error occurs as part of the transaction but this indicates the SW the cause
 * of the error. This should only occur once per transaction
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_INTSTAT_DERRBUSFLG register field. */
#define ALT_ECC_HMC_OCP_INTSTAT_DERRBUSFLG_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_INTSTAT_DERRBUSFLG register field. */
#define ALT_ECC_HMC_OCP_INTSTAT_DERRBUSFLG_MSB        18
/* The width in bits of the ALT_ECC_HMC_OCP_INTSTAT_DERRBUSFLG register field. */
#define ALT_ECC_HMC_OCP_INTSTAT_DERRBUSFLG_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_INTSTAT_DERRBUSFLG register field value. */
#define ALT_ECC_HMC_OCP_INTSTAT_DERRBUSFLG_SET_MSK    0x00040000
/* The mask used to clear the ALT_ECC_HMC_OCP_INTSTAT_DERRBUSFLG register field value. */
#define ALT_ECC_HMC_OCP_INTSTAT_DERRBUSFLG_CLR_MSK    0xfffbffff
/* The reset value of the ALT_ECC_HMC_OCP_INTSTAT_DERRBUSFLG register field. */
#define ALT_ECC_HMC_OCP_INTSTAT_DERRBUSFLG_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_INTSTAT_DERRBUSFLG field value from a register. */
#define ALT_ECC_HMC_OCP_INTSTAT_DERRBUSFLG_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_ECC_HMC_OCP_INTSTAT_DERRBUSFLG register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_INTSTAT_DERRBUSFLG_SET(value) (((value) << 18) & 0x00040000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_INTSTAT.
 */
struct ALT_ECC_HMC_OCP_INTSTAT_s
{
    uint32_t  SERRPENA   :  1;  /* ALT_ECC_HMC_OCP_INTSTAT_SERRPENA */
    uint32_t  DERRPENA   :  1;  /* ALT_ECC_HMC_OCP_INTSTAT_DERRPENA */
    uint32_t  HMI_PENA   :  1;  /* ALT_ECC_HMC_OCP_INTSTAT_HMI_PENA */
    uint32_t             : 13;  /* *UNDEFINED* */
    uint32_t  ADDRMTCFLG :  1;  /* ALT_ECC_HMC_OCP_INTSTAT_ADDRMTCFLG */
    uint32_t  ADDRPARFLG :  1;  /* ALT_ECC_HMC_OCP_INTSTAT_ADDRPARFLG */
    uint32_t  DERRBUSFLG :  1;  /* ALT_ECC_HMC_OCP_INTSTAT_DERRBUSFLG */
    uint32_t             : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_INTSTAT. */
typedef volatile struct ALT_ECC_HMC_OCP_INTSTAT_s  ALT_ECC_HMC_OCP_INTSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_INTSTAT register. */
#define ALT_ECC_HMC_OCP_INTSTAT_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_INTSTAT register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_INTSTAT_OFST        0x120

/*
 * Register : DIAGINTTEST
 * 
 * Enable diagnostic errors
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                         
 * :--------|:-------|:------|:-------------------------------------
 *  [0]     | RW     | 0x0   | ALT_ECC_HMC_OCP_DIAGINTTEST_TSERRA  
 *  [7:1]   | ???    | 0x0   | *UNDEFINED*                         
 *  [8]     | RW     | 0x0   | ALT_ECC_HMC_OCP_DIAGINTTEST_TDERRA  
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*                         
 *  [16]    | RW     | 0x0   | ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRMTC
 *  [23:17] | ???    | 0x0   | *UNDEFINED*                         
 *  [24]    | RW     | 0x0   | ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRPAR
 *  [31:25] | ???    | 0x0   | *UNDEFINED*                         
 * 
 */
/*
 * Field : TSERRA
 * 
 * This bit is used to test a single-bit error.
 * 
 * 1'b0: Write of zero has no effect.
 * 
 * 1'b1: When this bit is set to 1,  serr_req signal is generated to the system
 * manager when the ECC decoder detects a single-bit error. By writing to this bit,
 * SERRPENA bit will be pending. Write of one to SERRPENA will clear this bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_DIAGINTTEST_TSERRA register field. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TSERRA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_DIAGINTTEST_TSERRA register field. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TSERRA_MSB        0
/* The width in bits of the ALT_ECC_HMC_OCP_DIAGINTTEST_TSERRA register field. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TSERRA_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_DIAGINTTEST_TSERRA register field value. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TSERRA_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_HMC_OCP_DIAGINTTEST_TSERRA register field value. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TSERRA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_HMC_OCP_DIAGINTTEST_TSERRA register field. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TSERRA_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_DIAGINTTEST_TSERRA field value from a register. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TSERRA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_HMC_OCP_DIAGINTTEST_TSERRA register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TSERRA_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : TDERRA
 * 
 * Diagnostic enable of Double-bit error.
 * 
 * This bit is used to test double-bit error.
 * 
 * 1'b0: Write of zero has no effect.
 * 
 * 1'b1: When this bit is set to 1,  derr_req signal is generated to the system
 * manager when the ECC decoder detects a double-bit error. By writing to this bit,
 * DERRBUSFLG bit will be pending. Write of one to DERRBUSFLG will clear this bit.
 * SW needs to explicitly write to DERRPENA to clear it.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_DIAGINTTEST_TDERRA register field. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TDERRA_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_DIAGINTTEST_TDERRA register field. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TDERRA_MSB        8
/* The width in bits of the ALT_ECC_HMC_OCP_DIAGINTTEST_TDERRA register field. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TDERRA_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_DIAGINTTEST_TDERRA register field value. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TDERRA_SET_MSK    0x00000100
/* The mask used to clear the ALT_ECC_HMC_OCP_DIAGINTTEST_TDERRA register field value. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TDERRA_CLR_MSK    0xfffffeff
/* The reset value of the ALT_ECC_HMC_OCP_DIAGINTTEST_TDERRA register field. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TDERRA_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_DIAGINTTEST_TDERRA field value from a register. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TDERRA_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_ECC_HMC_OCP_DIAGINTTEST_TDERRA register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TDERRA_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : TADDRMTC
 * 
 * Diagnostic enable of Address mismatch error.
 * 
 * This bit is used to flag that the last transaction was flagged with address
 * mismatch error.
 * 
 * 1'b0: Disables generating address match bus error as part of the transaction.
 * 
 * 1'b1: When this bit is set to 1, derr_req signal is generated to the system
 * manager when the ECC decoder detects a ecc address mismatch. By writing to this
 * bit, ADDRMTCFLG bit will be pending. Write of one to ADDRMTCFLG will clear this
 * bit. SW needs to explicitly write to DERRPENA to clear it.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRMTC register field. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRMTC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRMTC register field. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRMTC_MSB        16
/* The width in bits of the ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRMTC register field. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRMTC_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRMTC register field value. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRMTC_SET_MSK    0x00010000
/* The mask used to clear the ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRMTC register field value. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRMTC_CLR_MSK    0xfffeffff
/* The reset value of the ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRMTC register field. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRMTC_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRMTC field value from a register. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRMTC_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRMTC register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRMTC_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : TADDRPAR
 * 
 * Diagnostic of address parity of DDR4.
 * 
 * This bit is used to test the address parity error path.
 * 
 * 1'b0: Disables generating address match bus error as part of the transaction.
 * 
 * 1'b1: When this bit is set to 1, derr_req signal is generated to the system
 * manager when the ECC decoder detects an ecc address parity error. By writing to
 * this bit, ADDRPARFLG bit will be pending. Write of one to ADDRPARFLG will clear
 * this bit. SW needs to explicitly write to DERRPENA to clear it.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRPAR register field. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRPAR_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRPAR register field. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRPAR_MSB        24
/* The width in bits of the ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRPAR register field. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRPAR_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRPAR register field value. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRPAR_SET_MSK    0x01000000
/* The mask used to clear the ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRPAR register field value. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRPAR_CLR_MSK    0xfeffffff
/* The reset value of the ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRPAR register field. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRPAR_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRPAR field value from a register. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRPAR_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRPAR register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRPAR_SET(value) (((value) << 24) & 0x01000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_DIAGINTTEST.
 */
struct ALT_ECC_HMC_OCP_DIAGINTTEST_s
{
    uint32_t  TSERRA   :  1;  /* ALT_ECC_HMC_OCP_DIAGINTTEST_TSERRA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  TDERRA   :  1;  /* ALT_ECC_HMC_OCP_DIAGINTTEST_TDERRA */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  TADDRMTC :  1;  /* ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRMTC */
    uint32_t           :  7;  /* *UNDEFINED* */
    uint32_t  TADDRPAR :  1;  /* ALT_ECC_HMC_OCP_DIAGINTTEST_TADDRPAR */
    uint32_t           :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_DIAGINTTEST. */
typedef volatile struct ALT_ECC_HMC_OCP_DIAGINTTEST_s  ALT_ECC_HMC_OCP_DIAGINTTEST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_DIAGINTTEST register. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_DIAGINTTEST register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_DIAGINTTEST_OFST        0x124

/*
 * Register : MODSTAT
 * 
 * Counter feature status flag
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                            
 * :-------|:-------|:------|:----------------------------------------
 *  [0]    | RW     | 0x0   | ALT_ECC_HMC_OCP_MODSTAT_CMPFLGA        
 *  [7:1]  | ???    | 0x0   | *UNDEFINED*                            
 *  [8]    | RW     | 0x0   | ALT_ECC_HMC_OCP_MODSTAT_AUTOWB_DROP_FLG
 *  [31:9] | ???    | 0x0   | *UNDEFINED*                            
 * 
 */
/*
 * Field : CMPFLGA
 * 
 * Counter Match occurred flag.
 * 
 * This bit indicates that the internal counter and SERRCNT value matched.
 * 
 * 1'b0: read indicates match check of SERR interrupt on compare match is disabled.
 * 
 * 1'b1: read indicates compare has matched.  Write of one will clear the pending
 * compare match. This will not de-assert the serr_req signal - software needs to
 * write to serrpen bit to clear the interrupt.
 * 
 * When the match occurs, additional errors will not increment count until the
 * compare status flag is cleared. If the software does not change the SERRCNT
 * register prior to clearing this flag or reset the internal counter, next
 * increment of internal counter could set this flag again in the next cycle.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_MODSTAT_CMPFLGA register field. */
#define ALT_ECC_HMC_OCP_MODSTAT_CMPFLGA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_MODSTAT_CMPFLGA register field. */
#define ALT_ECC_HMC_OCP_MODSTAT_CMPFLGA_MSB        0
/* The width in bits of the ALT_ECC_HMC_OCP_MODSTAT_CMPFLGA register field. */
#define ALT_ECC_HMC_OCP_MODSTAT_CMPFLGA_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_MODSTAT_CMPFLGA register field value. */
#define ALT_ECC_HMC_OCP_MODSTAT_CMPFLGA_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_HMC_OCP_MODSTAT_CMPFLGA register field value. */
#define ALT_ECC_HMC_OCP_MODSTAT_CMPFLGA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_HMC_OCP_MODSTAT_CMPFLGA register field. */
#define ALT_ECC_HMC_OCP_MODSTAT_CMPFLGA_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_MODSTAT_CMPFLGA field value from a register. */
#define ALT_ECC_HMC_OCP_MODSTAT_CMPFLGA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_HMC_OCP_MODSTAT_CMPFLGA register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_MODSTAT_CMPFLGA_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : AUTOWB_DROP_FLG
 * 
 * Auto writeback counter match flag.
 * 
 * This bit indicates that the internal autoWB counter and autoWB_drop_cnt value
 * matched.
 * 
 * 1'b0: read indicates match check of hmi_intr interrupt on compare match is
 * disabled.
 * 
 * 1'b1: read indicates compare has matched.  Write of one will clear the pending
 * compare match. This will not de-assert the hmi_intr signal - software needs to
 * write to hmi_intrpen bit to clear the interrupt.
 * 
 * When the match occurs, additional errors will not increment count until the
 * compare status flag is cleared. If the software does not change the
 * autoWB_drop_cnt register prior to clearing this flag or reset the autoWB
 * counter, next increment of internal autoWB counter could set this flag in the
 * next cycle.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_MODSTAT_AUTOWB_DROP_FLG register field. */
#define ALT_ECC_HMC_OCP_MODSTAT_AUTOWB_DROP_FLG_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_MODSTAT_AUTOWB_DROP_FLG register field. */
#define ALT_ECC_HMC_OCP_MODSTAT_AUTOWB_DROP_FLG_MSB        8
/* The width in bits of the ALT_ECC_HMC_OCP_MODSTAT_AUTOWB_DROP_FLG register field. */
#define ALT_ECC_HMC_OCP_MODSTAT_AUTOWB_DROP_FLG_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_MODSTAT_AUTOWB_DROP_FLG register field value. */
#define ALT_ECC_HMC_OCP_MODSTAT_AUTOWB_DROP_FLG_SET_MSK    0x00000100
/* The mask used to clear the ALT_ECC_HMC_OCP_MODSTAT_AUTOWB_DROP_FLG register field value. */
#define ALT_ECC_HMC_OCP_MODSTAT_AUTOWB_DROP_FLG_CLR_MSK    0xfffffeff
/* The reset value of the ALT_ECC_HMC_OCP_MODSTAT_AUTOWB_DROP_FLG register field. */
#define ALT_ECC_HMC_OCP_MODSTAT_AUTOWB_DROP_FLG_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_MODSTAT_AUTOWB_DROP_FLG field value from a register. */
#define ALT_ECC_HMC_OCP_MODSTAT_AUTOWB_DROP_FLG_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_ECC_HMC_OCP_MODSTAT_AUTOWB_DROP_FLG register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_MODSTAT_AUTOWB_DROP_FLG_SET(value) (((value) << 8) & 0x00000100)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_MODSTAT.
 */
struct ALT_ECC_HMC_OCP_MODSTAT_s
{
    uint32_t  CMPFLGA         :  1;  /* ALT_ECC_HMC_OCP_MODSTAT_CMPFLGA */
    uint32_t                  :  7;  /* *UNDEFINED* */
    uint32_t  AUTOWB_DROP_FLG :  1;  /* ALT_ECC_HMC_OCP_MODSTAT_AUTOWB_DROP_FLG */
    uint32_t                  : 23;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_MODSTAT. */
typedef volatile struct ALT_ECC_HMC_OCP_MODSTAT_s  ALT_ECC_HMC_OCP_MODSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_MODSTAT register. */
#define ALT_ECC_HMC_OCP_MODSTAT_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_MODSTAT register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_MODSTAT_OFST        0x128

/*
 * Register : DERRADDRA
 * 
 * Double-bit error address
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_DERRADDRA_DADDR
 * 
 */
/*
 * Field : DADDRESS
 * 
 * Recent DBE address.
 * 
 * This register shows the address of the current double-bit error. RAM size will
 * determine the maximum number of address bits.
 * 
 * This address is logged when a new derr_req or bus error is generated to the
 * system. This is gated by the ecc_en enable bit and derrinten bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_DERRADDRA_DADDR register field. */
#define ALT_ECC_HMC_OCP_DERRADDRA_DADDR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_DERRADDRA_DADDR register field. */
#define ALT_ECC_HMC_OCP_DERRADDRA_DADDR_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_DERRADDRA_DADDR register field. */
#define ALT_ECC_HMC_OCP_DERRADDRA_DADDR_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_DERRADDRA_DADDR register field value. */
#define ALT_ECC_HMC_OCP_DERRADDRA_DADDR_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_DERRADDRA_DADDR register field value. */
#define ALT_ECC_HMC_OCP_DERRADDRA_DADDR_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_DERRADDRA_DADDR register field. */
#define ALT_ECC_HMC_OCP_DERRADDRA_DADDR_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_DERRADDRA_DADDR field value from a register. */
#define ALT_ECC_HMC_OCP_DERRADDRA_DADDR_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_DERRADDRA_DADDR register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_DERRADDRA_DADDR_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_DERRADDRA.
 */
struct ALT_ECC_HMC_OCP_DERRADDRA_s
{
    uint32_t  DADDRESS : 32;  /* ALT_ECC_HMC_OCP_DERRADDRA_DADDR */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_DERRADDRA. */
typedef volatile struct ALT_ECC_HMC_OCP_DERRADDRA_s  ALT_ECC_HMC_OCP_DERRADDRA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_DERRADDRA register. */
#define ALT_ECC_HMC_OCP_DERRADDRA_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_DERRADDRA register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_DERRADDRA_OFST        0x12c

/*
 * Register : SERRADDRA
 * 
 * Single-bit error address
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_SERRADDRA_SADDR
 * 
 */
/*
 * Field : SADDRESS
 * 
 * Recent single-bit error address.
 * 
 * This register shows the address of the current single-bit error. This address is
 * logged when a new serr_req is generated to the system. This is gated by the
 * single-bit error interrupt enable and ecc_en.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_SERRADDRA_SADDR register field. */
#define ALT_ECC_HMC_OCP_SERRADDRA_SADDR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_SERRADDRA_SADDR register field. */
#define ALT_ECC_HMC_OCP_SERRADDRA_SADDR_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_SERRADDRA_SADDR register field. */
#define ALT_ECC_HMC_OCP_SERRADDRA_SADDR_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_SERRADDRA_SADDR register field value. */
#define ALT_ECC_HMC_OCP_SERRADDRA_SADDR_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_SERRADDRA_SADDR register field value. */
#define ALT_ECC_HMC_OCP_SERRADDRA_SADDR_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_SERRADDRA_SADDR register field. */
#define ALT_ECC_HMC_OCP_SERRADDRA_SADDR_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_SERRADDRA_SADDR field value from a register. */
#define ALT_ECC_HMC_OCP_SERRADDRA_SADDR_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_SERRADDRA_SADDR register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_SERRADDRA_SADDR_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_SERRADDRA.
 */
struct ALT_ECC_HMC_OCP_SERRADDRA_s
{
    uint32_t  SADDRESS : 32;  /* ALT_ECC_HMC_OCP_SERRADDRA_SADDR */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_SERRADDRA. */
typedef volatile struct ALT_ECC_HMC_OCP_SERRADDRA_s  ALT_ECC_HMC_OCP_SERRADDRA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_SERRADDRA register. */
#define ALT_ECC_HMC_OCP_SERRADDRA_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_SERRADDRA register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_SERRADDRA_OFST        0x130

/*
 * Register : AUTOWB_CORRADDR
 * 
 * This register shows the address of the current autoWB correction SBE.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                            
 * :-------|:-------|:------|:----------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_AUTOWB_CORRADDR_SWBADDR
 * 
 */
/*
 * Field : SWBADDRESS
 * 
 * recent autoWB correction address.
 * 
 * This register shows the address of the current autoWB correction single-bit
 * error. This address is logged when a new serr_req is generated to the system.
 * This is gated by the single-bit error interrupt enable and ecc_en.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_AUTOWB_CORRADDR_SWBADDR register field. */
#define ALT_ECC_HMC_OCP_AUTOWB_CORRADDR_SWBADDR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_AUTOWB_CORRADDR_SWBADDR register field. */
#define ALT_ECC_HMC_OCP_AUTOWB_CORRADDR_SWBADDR_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_AUTOWB_CORRADDR_SWBADDR register field. */
#define ALT_ECC_HMC_OCP_AUTOWB_CORRADDR_SWBADDR_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_AUTOWB_CORRADDR_SWBADDR register field value. */
#define ALT_ECC_HMC_OCP_AUTOWB_CORRADDR_SWBADDR_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_AUTOWB_CORRADDR_SWBADDR register field value. */
#define ALT_ECC_HMC_OCP_AUTOWB_CORRADDR_SWBADDR_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_AUTOWB_CORRADDR_SWBADDR register field. */
#define ALT_ECC_HMC_OCP_AUTOWB_CORRADDR_SWBADDR_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_AUTOWB_CORRADDR_SWBADDR field value from a register. */
#define ALT_ECC_HMC_OCP_AUTOWB_CORRADDR_SWBADDR_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_AUTOWB_CORRADDR_SWBADDR register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_AUTOWB_CORRADDR_SWBADDR_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_AUTOWB_CORRADDR.
 */
struct ALT_ECC_HMC_OCP_AUTOWB_CORRADDR_s
{
    uint32_t  SWBADDRESS : 32;  /* ALT_ECC_HMC_OCP_AUTOWB_CORRADDR_SWBADDR */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_AUTOWB_CORRADDR. */
typedef volatile struct ALT_ECC_HMC_OCP_AUTOWB_CORRADDR_s  ALT_ECC_HMC_OCP_AUTOWB_CORRADDR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_AUTOWB_CORRADDR register. */
#define ALT_ECC_HMC_OCP_AUTOWB_CORRADDR_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_AUTOWB_CORRADDR register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_AUTOWB_CORRADDR_OFST        0x138

/*
 * Register : SERRCNTREG
 * 
 * Maximum counter value for single-bit error interrupt
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                       
 * :-------|:-------|:------|:-----------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_SERRCNTREG_SERRCNT
 * 
 */
/*
 * Field : SERRCNT
 * 
 * Compare value for the internal single-bit errors.
 * 
 * This register sets the value to compare with the internal counter. Software
 * should write to this register before enabling the interrupt on compare.
 * 
 * 0x0: If the serrcnt bits are not modified before enabling the intoncmp, internal
 * counter=0 and serrcnt=0, serr compare interrupt will not occur. Default after
 * reset.
 * 
 * Nonzero: if internal counter == serrcnt == nonzero will create a serr compare
 * interrupt.
 * 
 * When the compare matches, autoWB_drop_cmpflga will be set.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_SERRCNTREG_SERRCNT register field. */
#define ALT_ECC_HMC_OCP_SERRCNTREG_SERRCNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_SERRCNTREG_SERRCNT register field. */
#define ALT_ECC_HMC_OCP_SERRCNTREG_SERRCNT_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_SERRCNTREG_SERRCNT register field. */
#define ALT_ECC_HMC_OCP_SERRCNTREG_SERRCNT_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_SERRCNTREG_SERRCNT register field value. */
#define ALT_ECC_HMC_OCP_SERRCNTREG_SERRCNT_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_SERRCNTREG_SERRCNT register field value. */
#define ALT_ECC_HMC_OCP_SERRCNTREG_SERRCNT_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_SERRCNTREG_SERRCNT register field. */
#define ALT_ECC_HMC_OCP_SERRCNTREG_SERRCNT_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_SERRCNTREG_SERRCNT field value from a register. */
#define ALT_ECC_HMC_OCP_SERRCNTREG_SERRCNT_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_SERRCNTREG_SERRCNT register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_SERRCNTREG_SERRCNT_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_SERRCNTREG.
 */
struct ALT_ECC_HMC_OCP_SERRCNTREG_s
{
    uint32_t  SERRCNT : 32;  /* ALT_ECC_HMC_OCP_SERRCNTREG_SERRCNT */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_SERRCNTREG. */
typedef volatile struct ALT_ECC_HMC_OCP_SERRCNTREG_s  ALT_ECC_HMC_OCP_SERRCNTREG_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_SERRCNTREG register. */
#define ALT_ECC_HMC_OCP_SERRCNTREG_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_SERRCNTREG register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_SERRCNTREG_OFST        0x13c

/*
 * Register : AUTOWB_DROP_CNTREG
 * 
 * Maximum counter value for AUTOWB correction interrupt
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                           
 * :-------|:-------|:------|:---------------------------------------
 *  [31:0] | RW     | 0x1   | ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG_CNT
 * 
 */
/*
 * Field : CNT
 * 
 * Compare value for the internal autoWB correction count.
 * 
 * This register sets the value to compare with the autoWB internal counter.
 * Software should write to this register before enabling the interrupt on compare.
 * 
 * 0x1: If the autoWB_drop_cntreg bits are not modified before enabling the
 * hmi_intr, autoWB internal counter=0 and autoWB_dop_cnt =1, serr compare
 * interrupt will not occur. Default after reset.
 * 
 * Nonzero: if autoWB internal counter == autoWB_drop_cnt  == nonzero will create a
 * serr compare interrupt.
 * 
 * When the compare matches, autoWB_drop_flg will be set.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG_CNT register field. */
#define ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG_CNT register field. */
#define ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG_CNT_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG_CNT register field. */
#define ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG_CNT_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG_CNT register field value. */
#define ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG_CNT_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG_CNT register field value. */
#define ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG_CNT_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG_CNT register field. */
#define ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG_CNT_RESET      0x1
/* Extracts the ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG_CNT field value from a register. */
#define ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG_CNT_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG_CNT register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG_CNT_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG.
 */
struct ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG_s
{
    uint32_t  CNT : 32;  /* ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG_CNT */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG. */
typedef volatile struct ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG_s  ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG register. */
#define ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG_RESET       0x00000001
/* The byte offset of the ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG_OFST        0x140

/*
 * Register : ECC_REG2WRECCDATABUS
 * 
 * ECC from register associated to data which will be written to the RAM
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                 
 * :--------|:-------|:------|:---------------------------------------------
 *  [7:0]   | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC0BUS
 *  [15:8]  | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC1BUS
 *  [23:16] | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC2BUS
 *  [31:24] | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC3BUS
 * 
 */
/*
 * Field : ECC0BUS
 * 
 * ECC from register associated to data [63:0] which will be written to the RAM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC0BUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC0BUS_MSB        7
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC0BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC0BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC0BUS_SET_MSK    0x000000ff
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC0BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC0BUS_CLR_MSK    0xffffff00
/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC0BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC0BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC0BUS_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC0BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC0BUS_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : ECC1BUS
 * 
 * ECC from register associated to data [127:64] which will be written to the RAM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC1BUS_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC1BUS_MSB        15
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC1BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC1BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC1BUS_SET_MSK    0x0000ff00
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC1BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC1BUS_CLR_MSK    0xffff00ff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC1BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC1BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC1BUS_GET(value) (((value) & 0x0000ff00) >> 8)
/* Produces a ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC1BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC1BUS_SET(value) (((value) << 8) & 0x0000ff00)

/*
 * Field : ECC2BUS
 * 
 * ECC from register associated to data [191:128] which will be written to the RAM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC2BUS_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC2BUS_MSB        23
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC2BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC2BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC2BUS_SET_MSK    0x00ff0000
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC2BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC2BUS_CLR_MSK    0xff00ffff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC2BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC2BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC2BUS_GET(value) (((value) & 0x00ff0000) >> 16)
/* Produces a ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC2BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC2BUS_SET(value) (((value) << 16) & 0x00ff0000)

/*
 * Field : ECC3BUS
 * 
 * ECC from register associated to data [255:192] which will be written to the RAM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC3BUS_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC3BUS_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC3BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC3BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC3BUS_SET_MSK    0xff000000
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC3BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC3BUS_CLR_MSK    0x00ffffff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC3BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC3BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC3BUS_GET(value) (((value) & 0xff000000) >> 24)
/* Produces a ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC3BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC3BUS_SET(value) (((value) << 24) & 0xff000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS.
 */
struct ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_s
{
    uint32_t  ECC0BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC0BUS */
    uint32_t  ECC1BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC1BUS */
    uint32_t  ECC2BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC2BUS */
    uint32_t  ECC3BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_ECC3BUS */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS. */
typedef volatile struct ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_s  ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS register. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_OFST        0x144

/*
 * Register : ECC_RDECCDATA2REGBUS
 * 
 * ECC of data from RAM will be written to register
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                 
 * :--------|:-------|:------|:---------------------------------------------
 *  [7:0]   | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC0BUS
 *  [15:8]  | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC1BUS
 *  [23:16] | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC2BUS
 *  [31:24] | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC3BUS
 * 
 */
/*
 * Field : ECC0BUS
 * 
 * ECC of data [63:0] from RAM which will be written to register.
 * 
 * Based on the DDR IO width, unimplemented bytes of this register will read as
 * zero.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC0BUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC0BUS_MSB        7
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC0BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC0BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC0BUS_SET_MSK    0x000000ff
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC0BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC0BUS_CLR_MSK    0xffffff00
/* The reset value of the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC0BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC0BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC0BUS_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC0BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC0BUS_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : ECC1BUS
 * 
 * ECC of data [127:64] from RAM which will be written to register.
 * 
 * Based on the DDR IO width, unimplemented bytes of this register will read as
 * zero.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC1BUS_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC1BUS_MSB        15
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC1BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC1BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC1BUS_SET_MSK    0x0000ff00
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC1BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC1BUS_CLR_MSK    0xffff00ff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC1BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC1BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC1BUS_GET(value) (((value) & 0x0000ff00) >> 8)
/* Produces a ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC1BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC1BUS_SET(value) (((value) << 8) & 0x0000ff00)

/*
 * Field : ECC2BUS
 * 
 * ECC of data [191:128] from RAM which will be written to register.
 * 
 * Based on the DDR IO width, unimplemented bytes of this register will read as
 * zero.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC2BUS_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC2BUS_MSB        23
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC2BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC2BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC2BUS_SET_MSK    0x00ff0000
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC2BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC2BUS_CLR_MSK    0xff00ffff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC2BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC2BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC2BUS_GET(value) (((value) & 0x00ff0000) >> 16)
/* Produces a ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC2BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC2BUS_SET(value) (((value) << 16) & 0x00ff0000)

/*
 * Field : ECC3BUS
 * 
 * ECC of data [255:192] from RAM which will be written to register.
 * 
 * Based on the DDR IO width, unimplemented bytes of this register will read as
 * zero.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC3BUS_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC3BUS_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC3BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC3BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC3BUS_SET_MSK    0xff000000
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC3BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC3BUS_CLR_MSK    0x00ffffff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC3BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC3BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC3BUS_GET(value) (((value) & 0xff000000) >> 24)
/* Produces a ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC3BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC3BUS_SET(value) (((value) << 24) & 0xff000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS.
 */
struct ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_s
{
    uint32_t  ECC0BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC0BUS */
    uint32_t  ECC1BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC1BUS */
    uint32_t  ECC2BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC2BUS */
    uint32_t  ECC3BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_ECC3BUS */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS. */
typedef volatile struct ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_s  ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS register. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_OFST        0x148

/*
 * Register : ECC_REG2RDECCDATABUS
 * 
 * ECC from register associated to RD data which will be written to hmc ecc
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                 
 * :--------|:-------|:------|:---------------------------------------------
 *  [7:0]   | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC0BUS
 *  [15:8]  | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC1BUS
 *  [23:16] | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC2BUS
 *  [31:24] | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC3BUS
 * 
 */
/*
 * Field : ECC0BUS
 * 
 * ECC from register associated to RD data [63:0] which will be written to hmc ecc.
 * 
 * Based on the DDR IO width, unimplemented bytes of this register will read as
 * zero.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC0BUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC0BUS_MSB        7
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC0BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC0BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC0BUS_SET_MSK    0x000000ff
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC0BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC0BUS_CLR_MSK    0xffffff00
/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC0BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC0BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC0BUS_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC0BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC0BUS_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : ECC1BUS
 * 
 * ECC from register associated to RD data [127:64] which will be written to hmc
 * ecc.
 * 
 * Based on the DDR IO width, unimplemented bytes of this register will read as
 * zero.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC1BUS_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC1BUS_MSB        15
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC1BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC1BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC1BUS_SET_MSK    0x0000ff00
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC1BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC1BUS_CLR_MSK    0xffff00ff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC1BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC1BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC1BUS_GET(value) (((value) & 0x0000ff00) >> 8)
/* Produces a ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC1BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC1BUS_SET(value) (((value) << 8) & 0x0000ff00)

/*
 * Field : ECC2BUS
 * 
 * ECC from register associated to RD data [191:128] which will be written to hmc
 * ecc.
 * 
 * Based on the DDR IO width, unimplemented bytes of this register will read as
 * zero.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC2BUS_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC2BUS_MSB        23
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC2BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC2BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC2BUS_SET_MSK    0x00ff0000
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC2BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC2BUS_CLR_MSK    0xff00ffff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC2BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC2BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC2BUS_GET(value) (((value) & 0x00ff0000) >> 16)
/* Produces a ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC2BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC2BUS_SET(value) (((value) << 16) & 0x00ff0000)

/*
 * Field : ECC3BUS
 * 
 * ECC from register associated to RD data [255:192] which will be written to hmc
 * ecc.
 * 
 * Based on the DDR IO width, unimplemented bytes of this register will read as
 * zero.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC3BUS_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC3BUS_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC3BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC3BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC3BUS_SET_MSK    0xff000000
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC3BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC3BUS_CLR_MSK    0x00ffffff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC3BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC3BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC3BUS_GET(value) (((value) & 0xff000000) >> 24)
/* Produces a ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC3BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC3BUS_SET(value) (((value) << 24) & 0xff000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS.
 */
struct ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_s
{
    uint32_t  ECC0BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC0BUS */
    uint32_t  ECC1BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC1BUS */
    uint32_t  ECC2BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC2BUS */
    uint32_t  ECC3BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_ECC3BUS */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS. */
typedef volatile struct ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_s  ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_OFST        0x14c

/*
 * Register : ECC_DIAGON
 * 
 * Enable diagnostics access
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                         
 * :--------|:-------|:------|:-------------------------------------
 *  [0]     | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_DIAGON_WRDIAGON 
 *  [1]     | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_DIAGON_RDDIAGON 
 *  [15:2]  | ???    | 0x0   | *UNDEFINED*                         
 *  [16]    | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_DIAGON_ECCDIAGON
 *  [31:17] | ???    | 0x0   | *UNDEFINED*                         
 * 
 */
/*
 * Field : WRDIAGON
 * 
 * Write diagnostics mux enabled.
 * 
 * This overrides the encoder output with the register data ecc.
 * 
 * 1'b0: Write diagnostics path via the ecc_reg2wdatabus is disabled.
 * 
 * 1'b1: Write diagnostics path via the ecc_reg2wdatabus is enabled.
 * 
 * Both Rddiagon and Wrdiagon bits can be enabled.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_DIAGON_WRDIAGON register field. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_WRDIAGON_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_DIAGON_WRDIAGON register field. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_WRDIAGON_MSB        0
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_DIAGON_WRDIAGON register field. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_WRDIAGON_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_DIAGON_WRDIAGON register field value. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_WRDIAGON_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_DIAGON_WRDIAGON register field value. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_WRDIAGON_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_HMC_OCP_ECC_DIAGON_WRDIAGON register field. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_WRDIAGON_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_DIAGON_WRDIAGON field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_WRDIAGON_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_HMC_OCP_ECC_DIAGON_WRDIAGON register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_WRDIAGON_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : RDDIAGON
 * 
 * Read diagnostics mux enabled.
 * 
 * This overrides the data entering the ECC decoder.
 * 
 * 1'b0: Read diagnostics path via the ecc_rdata2regbus or ecc_reg2rdatabus is
 * disabled.
 * 
 * 1'b1: Read diagnostics path via the ecc_rdata2regbus or ecc_reg2rdatabus is
 * enabled.
 * 
 * Both Rddiagon and Wrdiagon bits can be enabled.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_DIAGON_RDDIAGON register field. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_RDDIAGON_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_DIAGON_RDDIAGON register field. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_RDDIAGON_MSB        1
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_DIAGON_RDDIAGON register field. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_RDDIAGON_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_DIAGON_RDDIAGON register field value. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_RDDIAGON_SET_MSK    0x00000002
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_DIAGON_RDDIAGON register field value. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_RDDIAGON_CLR_MSK    0xfffffffd
/* The reset value of the ALT_ECC_HMC_OCP_ECC_DIAGON_RDDIAGON register field. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_RDDIAGON_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_DIAGON_RDDIAGON field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_RDDIAGON_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_ECC_HMC_OCP_ECC_DIAGON_RDDIAGON register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_RDDIAGON_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : ECCDIAGON
 * 
 * ECC diagnostics mode.
 * 
 * 1'b0: ECC diagnostics logic is disabled. ECC encoder bypass is disabled.
 * 
 * 1'b1: ECC diagnostics logic is enabled. Direction of ECC data from the register
 * to data bus or data bus to ecc register is determined by ECC_rddiagon or
 * ECC_wrdiagon.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_DIAGON_ECCDIAGON register field. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_ECCDIAGON_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_DIAGON_ECCDIAGON register field. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_ECCDIAGON_MSB        16
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_DIAGON_ECCDIAGON register field. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_ECCDIAGON_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_DIAGON_ECCDIAGON register field value. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_ECCDIAGON_SET_MSK    0x00010000
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_DIAGON_ECCDIAGON register field value. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_ECCDIAGON_CLR_MSK    0xfffeffff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_DIAGON_ECCDIAGON register field. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_ECCDIAGON_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_DIAGON_ECCDIAGON field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_ECCDIAGON_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_ECC_HMC_OCP_ECC_DIAGON_ECCDIAGON register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_ECCDIAGON_SET(value) (((value) << 16) & 0x00010000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_ECC_DIAGON.
 */
struct ALT_ECC_HMC_OCP_ECC_DIAGON_s
{
    uint32_t  WRDIAGON  :  1;  /* ALT_ECC_HMC_OCP_ECC_DIAGON_WRDIAGON */
    uint32_t  RDDIAGON  :  1;  /* ALT_ECC_HMC_OCP_ECC_DIAGON_RDDIAGON */
    uint32_t            : 14;  /* *UNDEFINED* */
    uint32_t  ECCDIAGON :  1;  /* ALT_ECC_HMC_OCP_ECC_DIAGON_ECCDIAGON */
    uint32_t            : 15;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_ECC_DIAGON. */
typedef volatile struct ALT_ECC_HMC_OCP_ECC_DIAGON_s  ALT_ECC_HMC_OCP_ECC_DIAGON_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_ECC_DIAGON register. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_ECC_DIAGON register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_ECC_DIAGON_OFST        0x150

/*
 * Register : ECC_DECSTAT
 * 
 * Diagnostic decoder status
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                            
 * :--------|:-------|:------|:----------------------------------------
 *  [0]     | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0SERRFLG
 *  [1]     | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1SERRFLG
 *  [2]     | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2SERRFLG
 *  [3]     | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3SERRFLG
 *  [4]     | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0ADDRFLG
 *  [5]     | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1ADDRFLG
 *  [6]     | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2ADDRFLG
 *  [7]     | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3ADDRFLG
 *  [8]     | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0DERRFLG
 *  [9]     | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1DERRFLG
 *  [10]    | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2DERRFLG
 *  [11]    | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3DERRFLG
 *  [31:12] | ???    | 0x0   | *UNDEFINED*                            
 * 
 */
/*
 * Field : DEC0SERRFLG
 * 
 * indicates decoder for data [63:0] has detected SBE.
 * 
 * 1'b0: No error has been captured with this flag.
 * 
 * 1'b1: Decoder 0 detected a single bit error. This flag will be set by the
 * hardware and it will be cleared by the writing 1. This flag will be set till SW
 * clears. Additional errors will not change the state of this bit. Error flag is
 * set on the first beat of erred data.
 * 
 * This won't be reset by the ecc_en bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0SERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0SERRFLG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0SERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0SERRFLG_MSB        0
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0SERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0SERRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0SERRFLG register field value. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0SERRFLG_SET_MSK    0x00000001
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0SERRFLG register field value. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0SERRFLG_CLR_MSK    0xfffffffe
/* The reset value of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0SERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0SERRFLG_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0SERRFLG field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0SERRFLG_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0SERRFLG register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0SERRFLG_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : DEC1SERRFLG
 * 
 * indicates decoder for data [127:64] has detected SBE.
 * 
 * 1'b0: No error has been captured with this flag.
 * 
 * 1'b1: Decoder 0 detected a single bit error. This flag will be set by the
 * hardware and it will be cleared by the writing 1. This flag will be set till SW
 * clears. Additional errors will not change the state of this bit. Error flag is
 * set on the first beat of erred data.
 * 
 * This won't be reset by the ecc_en bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1SERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1SERRFLG_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1SERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1SERRFLG_MSB        1
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1SERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1SERRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1SERRFLG register field value. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1SERRFLG_SET_MSK    0x00000002
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1SERRFLG register field value. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1SERRFLG_CLR_MSK    0xfffffffd
/* The reset value of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1SERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1SERRFLG_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1SERRFLG field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1SERRFLG_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1SERRFLG register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1SERRFLG_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : DEC2SERRFLG
 * 
 * indicates decoder for data [191:128] has detected SBE.
 * 
 * 1'b0: No error has been captured with this flag.
 * 
 * 1'b1: Decoder 0 detected a single bit error. This flag will be set by the
 * hardware and it will be cleared by the writing 1. This flag will be set till SW
 * clears. Additional errors will not change the state of this bit.Error flag is
 * set on the first beat of erred data.
 * 
 * This won't be reset by the ecc_en bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2SERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2SERRFLG_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2SERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2SERRFLG_MSB        2
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2SERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2SERRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2SERRFLG register field value. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2SERRFLG_SET_MSK    0x00000004
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2SERRFLG register field value. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2SERRFLG_CLR_MSK    0xfffffffb
/* The reset value of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2SERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2SERRFLG_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2SERRFLG field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2SERRFLG_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2SERRFLG register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2SERRFLG_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : DEC3SERRFLG
 * 
 * indicates decoder for data [255:192] has detected SBE.
 * 
 * 1'b0: No error has been captured with this flag.
 * 
 * 1'b1: Decoder 0 detected a single bit error. This flag will be set by the
 * hardware and it will be cleared by the writing 1. This flag will be set till SW
 * clears. Additional errors will not change the state of this bit.Error flag is
 * set on the first beat of erred data.
 * 
 * This won't be reset by the ecc_en bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3SERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3SERRFLG_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3SERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3SERRFLG_MSB        3
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3SERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3SERRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3SERRFLG register field value. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3SERRFLG_SET_MSK    0x00000008
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3SERRFLG register field value. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3SERRFLG_CLR_MSK    0xfffffff7
/* The reset value of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3SERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3SERRFLG_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3SERRFLG field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3SERRFLG_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3SERRFLG register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3SERRFLG_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : DEC0ADDRFLG
 * 
 * indicates decoder for data [63:0] has detected address error.
 * 
 * 1'b0: No error has been captured with this flag.
 * 
 * 1'b1: Decoder 0 detected an address mismatch error. This flag will be set by the
 * hardware and it will be cleared by the writing 1. This flag will be set till SW
 * clears.Additional errors will not change the state of this bit.Error flag is set
 * on the first beat of erred data.
 * 
 * This won't be reset by the ecc_en bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0ADDRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0ADDRFLG_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0ADDRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0ADDRFLG_MSB        4
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0ADDRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0ADDRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0ADDRFLG register field value. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0ADDRFLG_SET_MSK    0x00000010
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0ADDRFLG register field value. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0ADDRFLG_CLR_MSK    0xffffffef
/* The reset value of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0ADDRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0ADDRFLG_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0ADDRFLG field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0ADDRFLG_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0ADDRFLG register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0ADDRFLG_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : DEC1ADDRFLG
 * 
 * indicates decoder for data [127:64] has detected address error.
 * 
 * 1'b0: No error has been captured with this flag.
 * 
 * 1'b1: Decoder 0 detected an address mismatch error. This flag will be set by the
 * hardware and it will be cleared by the writing 1. This flag will be set till SW
 * clears.Additional errors will not change the state of this bit.Error flag is set
 * on the first beat of erred data.
 * 
 * This won't be reset by the ecc_en bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1ADDRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1ADDRFLG_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1ADDRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1ADDRFLG_MSB        5
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1ADDRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1ADDRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1ADDRFLG register field value. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1ADDRFLG_SET_MSK    0x00000020
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1ADDRFLG register field value. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1ADDRFLG_CLR_MSK    0xffffffdf
/* The reset value of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1ADDRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1ADDRFLG_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1ADDRFLG field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1ADDRFLG_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1ADDRFLG register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1ADDRFLG_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : DEC2ADDRFLG
 * 
 * indicates decoder for data [191:128] has detected address error.
 * 
 * 1'b0: No error has been captured with this flag.
 * 
 * 1'b1: Decoder 0 detected an address mismatch error. This flag will be set by the
 * hardware and it will be cleared by the writing 1. This flag will be set till SW
 * clears.Additional errors will not change the state of this bit.Error flag is set
 * on the first beat of erred data.
 * 
 * This won't be reset by the ecc_en bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2ADDRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2ADDRFLG_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2ADDRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2ADDRFLG_MSB        6
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2ADDRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2ADDRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2ADDRFLG register field value. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2ADDRFLG_SET_MSK    0x00000040
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2ADDRFLG register field value. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2ADDRFLG_CLR_MSK    0xffffffbf
/* The reset value of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2ADDRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2ADDRFLG_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2ADDRFLG field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2ADDRFLG_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2ADDRFLG register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2ADDRFLG_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : DEC3ADDRFLG
 * 
 * indicates decoder for data [255:192] has detected address error.
 * 
 * 1'b0: No error has been captured with this flag.
 * 
 * 1'b1: Decoder 0 detected an address mismatch error. This flag will be set by the
 * hardware and it will be cleared by the writing 1. This flag will be set till SW
 * clears.Additional errors will not change the state of this bit.Error flag is set
 * on the first beat of erred data.
 * 
 * This won't be reset by the ecc_en bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3ADDRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3ADDRFLG_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3ADDRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3ADDRFLG_MSB        7
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3ADDRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3ADDRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3ADDRFLG register field value. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3ADDRFLG_SET_MSK    0x00000080
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3ADDRFLG register field value. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3ADDRFLG_CLR_MSK    0xffffff7f
/* The reset value of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3ADDRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3ADDRFLG_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3ADDRFLG field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3ADDRFLG_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3ADDRFLG register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3ADDRFLG_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : DEC0DERRFLG
 * 
 * indicates decoder for data [63:0] has detected DBE.
 * 
 * 1'b0: No error has been captured with this flag.
 * 
 * 1'b1: Decoder 0 detected a double-bit error. This flag will be set by the
 * hardware and it will be cleared by the writing 1. This flag will be set till SW
 * clears. Additional errors will not change the state of this bit. Error flag is
 * set on the first beat of erred data.
 * 
 * This won't be reset by the ecc_en bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0DERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0DERRFLG_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0DERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0DERRFLG_MSB        8
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0DERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0DERRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0DERRFLG register field value. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0DERRFLG_SET_MSK    0x00000100
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0DERRFLG register field value. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0DERRFLG_CLR_MSK    0xfffffeff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0DERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0DERRFLG_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0DERRFLG field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0DERRFLG_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0DERRFLG register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0DERRFLG_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : DEC1DERRFLG
 * 
 * indicates decoder for data [127:64] has detected DBE.
 * 
 * 1'b0: No error has been captured with this flag.
 * 
 * 1'b1: Decoder 0 detected a double-bit error. This flag will be set by the
 * hardware and it will be cleared by the writing 1. This flag will be set till SW
 * clears. Additional errors will not change the state of this bit.Error flag is
 * set on the first beat of erred data.
 * 
 * This won't be reset by the ecc_en bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1DERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1DERRFLG_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1DERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1DERRFLG_MSB        9
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1DERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1DERRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1DERRFLG register field value. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1DERRFLG_SET_MSK    0x00000200
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1DERRFLG register field value. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1DERRFLG_CLR_MSK    0xfffffdff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1DERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1DERRFLG_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1DERRFLG field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1DERRFLG_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1DERRFLG register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1DERRFLG_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : DEC2DERRFLG
 * 
 * indicates decoder for data [191:128] has detected DBE.
 * 
 * 1'b0: No error has been captured with this flag.
 * 
 * 1'b1: Decoder 0 detected a double-bit error. This flag will be set by the
 * hardware and it will be cleared by the writing 1. This flag will be set till SW
 * clears. Additional errors will not change the state of this bit.Error flag is
 * set on the first beat of erred data.
 * 
 * This won't be reset by the ecc_en bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2DERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2DERRFLG_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2DERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2DERRFLG_MSB        10
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2DERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2DERRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2DERRFLG register field value. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2DERRFLG_SET_MSK    0x00000400
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2DERRFLG register field value. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2DERRFLG_CLR_MSK    0xfffffbff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2DERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2DERRFLG_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2DERRFLG field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2DERRFLG_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2DERRFLG register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2DERRFLG_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : DEC3DERRFLG
 * 
 * indicates decoder for data [255:192] has detected DBE.
 * 
 * 1'b0: No error has been captured with this flag.
 * 
 * 1'b1: Decoder 0 detected a double-bit error. This flag will be set by the
 * hardware and it will be cleared by the writing 1. This flag will be set till SW
 * clears. Additional errors will not change the state of this bit. Error flag is
 * set on the first beat of erred data.
 * 
 * This won't be reset by the ecc_en bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3DERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3DERRFLG_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3DERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3DERRFLG_MSB        11
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3DERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3DERRFLG_WIDTH      1
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3DERRFLG register field value. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3DERRFLG_SET_MSK    0x00000800
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3DERRFLG register field value. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3DERRFLG_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3DERRFLG register field. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3DERRFLG_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3DERRFLG field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3DERRFLG_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3DERRFLG register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3DERRFLG_SET(value) (((value) << 11) & 0x00000800)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_ECC_DECSTAT.
 */
struct ALT_ECC_HMC_OCP_ECC_DECSTAT_s
{
    uint32_t  DEC0SERRFLG :  1;  /* ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0SERRFLG */
    uint32_t  DEC1SERRFLG :  1;  /* ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1SERRFLG */
    uint32_t  DEC2SERRFLG :  1;  /* ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2SERRFLG */
    uint32_t  DEC3SERRFLG :  1;  /* ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3SERRFLG */
    uint32_t  DEC0ADDRFLG :  1;  /* ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0ADDRFLG */
    uint32_t  DEC1ADDRFLG :  1;  /* ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1ADDRFLG */
    uint32_t  DEC2ADDRFLG :  1;  /* ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2ADDRFLG */
    uint32_t  DEC3ADDRFLG :  1;  /* ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3ADDRFLG */
    uint32_t  DEC0DERRFLG :  1;  /* ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC0DERRFLG */
    uint32_t  DEC1DERRFLG :  1;  /* ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC1DERRFLG */
    uint32_t  DEC2DERRFLG :  1;  /* ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC2DERRFLG */
    uint32_t  DEC3DERRFLG :  1;  /* ALT_ECC_HMC_OCP_ECC_DECSTAT_DEC3DERRFLG */
    uint32_t              : 20;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_ECC_DECSTAT. */
typedef volatile struct ALT_ECC_HMC_OCP_ECC_DECSTAT_s  ALT_ECC_HMC_OCP_ECC_DECSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_ECC_DECSTAT register. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_ECC_DECSTAT register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_ECC_DECSTAT_OFST        0x154

/*
 * Register : ECC_ERRGENADDR_0
 * 
 * Error address register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                          
 * :-------|:-------|:------|:--------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0_ADDR
 * 
 */
/*
 * Field : ADDR
 * 
 * For decoder 0.
 * 
 * Address generated with SER or address mismatch logic. Address will be driven by
 * the ECC decoder on every read latched by the RAM independent of ECCDiagon is on.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0_ADDR register field. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0_ADDR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0_ADDR register field. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0_ADDR_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0_ADDR register field. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0_ADDR_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0_ADDR register field value. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0_ADDR_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0_ADDR register field value. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0_ADDR_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0_ADDR register field. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0_ADDR_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0_ADDR field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0_ADDR_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0_ADDR register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0_ADDR_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0.
 */
struct ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0_s
{
    uint32_t  ADDR : 32;  /* ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0_ADDR */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0. */
typedef volatile struct ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0_s  ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0 register. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0_OFST        0x160

/*
 * Register : ECC_ERRGENADDR_1
 * 
 * Error address register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                          
 * :-------|:-------|:------|:--------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1_ADDR
 * 
 */
/*
 * Field : ADDR
 * 
 * For decoder 1.
 * 
 * Address generated with SER or address mismatch logic. Address will be driven by
 * the ECC decoder on every read latched by the RAM independent of ECCDiagon is on.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1_ADDR register field. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1_ADDR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1_ADDR register field. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1_ADDR_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1_ADDR register field. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1_ADDR_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1_ADDR register field value. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1_ADDR_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1_ADDR register field value. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1_ADDR_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1_ADDR register field. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1_ADDR_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1_ADDR field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1_ADDR_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1_ADDR register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1_ADDR_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1.
 */
struct ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1_s
{
    uint32_t  ADDR : 32;  /* ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1_ADDR */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1. */
typedef volatile struct ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1_s  ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1 register. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1_OFST        0x164

/*
 * Register : ECC_ERRGENADDR_2
 * 
 * Error address register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                          
 * :-------|:-------|:------|:--------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2_ADDR
 * 
 */
/*
 * Field : ADDR
 * 
 * For decoder 2.
 * 
 * Address generated with SER or address mismatch logic. Address will be driven by
 * the ECC decoder on every read latched by the RAM independent of ECCDiagon is on.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2_ADDR register field. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2_ADDR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2_ADDR register field. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2_ADDR_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2_ADDR register field. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2_ADDR_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2_ADDR register field value. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2_ADDR_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2_ADDR register field value. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2_ADDR_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2_ADDR register field. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2_ADDR_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2_ADDR field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2_ADDR_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2_ADDR register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2_ADDR_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2.
 */
struct ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2_s
{
    uint32_t  ADDR : 32;  /* ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2_ADDR */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2. */
typedef volatile struct ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2_s  ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2 register. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2_OFST        0x168

/*
 * Register : ECC_ERRGENADDR_3
 * 
 * Error address register
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                          
 * :-------|:-------|:------|:--------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3_ADDR
 * 
 */
/*
 * Field : ADDR
 * 
 * For decoder 3.
 * 
 * Address generated with SER or address mismatch logic. Address will be driven by
 * the ECC decoder on every read latched by the RAM independent of ECCDiagon is on.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3_ADDR register field. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3_ADDR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3_ADDR register field. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3_ADDR_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3_ADDR register field. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3_ADDR_WIDTH      32
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3_ADDR register field value. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3_ADDR_SET_MSK    0xffffffff
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3_ADDR register field value. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3_ADDR_CLR_MSK    0x00000000
/* The reset value of the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3_ADDR register field. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3_ADDR_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3_ADDR field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3_ADDR_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3_ADDR register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3_ADDR_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3.
 */
struct ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3_s
{
    uint32_t  ADDR : 32;  /* ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3_ADDR */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3. */
typedef volatile struct ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3_s  ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3 register. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3_OFST        0x16c

/*
 * Register : ECC_REG2RDDATABUS_BEAT0
 * 
 * ECC Reg2Rddatabus_beat0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                    
 * :--------|:-------|:------|:------------------------------------------------
 *  [7:0]   | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC0BUS
 *  [15:8]  | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC1BUS
 *  [23:16] | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC2BUS
 *  [31:24] | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC3BUS
 * 
 */
/*
 * Field : ECC0BUS
 * 
 * Data ECC from the register will be written to the RAM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC0BUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC0BUS_MSB        7
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC0BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC0BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC0BUS_SET_MSK    0x000000ff
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC0BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC0BUS_CLR_MSK    0xffffff00
/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC0BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC0BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC0BUS_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC0BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC0BUS_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : ECC1BUS
 * 
 * Data ECC from the register will be written to the RAM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC1BUS_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC1BUS_MSB        15
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC1BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC1BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC1BUS_SET_MSK    0x0000ff00
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC1BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC1BUS_CLR_MSK    0xffff00ff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC1BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC1BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC1BUS_GET(value) (((value) & 0x0000ff00) >> 8)
/* Produces a ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC1BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC1BUS_SET(value) (((value) << 8) & 0x0000ff00)

/*
 * Field : ECC2BUS
 * 
 * Data ECC from the register will be written to the RAM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC2BUS_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC2BUS_MSB        23
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC2BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC2BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC2BUS_SET_MSK    0x00ff0000
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC2BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC2BUS_CLR_MSK    0xff00ffff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC2BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC2BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC2BUS_GET(value) (((value) & 0x00ff0000) >> 16)
/* Produces a ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC2BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC2BUS_SET(value) (((value) << 16) & 0x00ff0000)

/*
 * Field : ECC3BUS
 * 
 * Data ECC from the register will be written to the RAM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC3BUS_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC3BUS_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC3BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC3BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC3BUS_SET_MSK    0xff000000
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC3BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC3BUS_CLR_MSK    0x00ffffff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC3BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC3BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC3BUS_GET(value) (((value) & 0xff000000) >> 24)
/* Produces a ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC3BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC3BUS_SET(value) (((value) << 24) & 0xff000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0.
 */
struct ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_s
{
    uint32_t  ECC0BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC0BUS */
    uint32_t  ECC1BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC1BUS */
    uint32_t  ECC2BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC2BUS */
    uint32_t  ECC3BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_ECC3BUS */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0. */
typedef volatile struct ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_s  ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0 register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_OFST        0x170

/*
 * Register : ECC_REG2RDDATABUS_BEAT1
 * 
 * ECC Reg2Rddatabus_beat1
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                    
 * :--------|:-------|:------|:------------------------------------------------
 *  [7:0]   | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC0BUS
 *  [15:8]  | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC1BUS
 *  [23:16] | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC2BUS
 *  [31:24] | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC3BUS
 * 
 */
/*
 * Field : ECC0BUS
 * 
 * Data ECC from the register will be written to the RAM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC0BUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC0BUS_MSB        7
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC0BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC0BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC0BUS_SET_MSK    0x000000ff
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC0BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC0BUS_CLR_MSK    0xffffff00
/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC0BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC0BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC0BUS_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC0BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC0BUS_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : ECC1BUS
 * 
 * Data ECC from the register will be written to the RAM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC1BUS_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC1BUS_MSB        15
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC1BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC1BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC1BUS_SET_MSK    0x0000ff00
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC1BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC1BUS_CLR_MSK    0xffff00ff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC1BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC1BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC1BUS_GET(value) (((value) & 0x0000ff00) >> 8)
/* Produces a ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC1BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC1BUS_SET(value) (((value) << 8) & 0x0000ff00)

/*
 * Field : ECC2BUS
 * 
 * Data ECC from the register will be written to the RAM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC2BUS_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC2BUS_MSB        23
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC2BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC2BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC2BUS_SET_MSK    0x00ff0000
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC2BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC2BUS_CLR_MSK    0xff00ffff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC2BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC2BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC2BUS_GET(value) (((value) & 0x00ff0000) >> 16)
/* Produces a ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC2BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC2BUS_SET(value) (((value) << 16) & 0x00ff0000)

/*
 * Field : ECC3BUS
 * 
 * Data ECC from the register will be written to the RAM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC3BUS_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC3BUS_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC3BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC3BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC3BUS_SET_MSK    0xff000000
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC3BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC3BUS_CLR_MSK    0x00ffffff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC3BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC3BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC3BUS_GET(value) (((value) & 0xff000000) >> 24)
/* Produces a ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC3BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC3BUS_SET(value) (((value) << 24) & 0xff000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1.
 */
struct ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_s
{
    uint32_t  ECC0BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC0BUS */
    uint32_t  ECC1BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC1BUS */
    uint32_t  ECC2BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC2BUS */
    uint32_t  ECC3BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_ECC3BUS */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1. */
typedef volatile struct ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_s  ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1 register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_OFST        0x174

/*
 * Register : ECC_REG2RDDATABUS_BEAT2
 * 
 * ECC Reg2Rddatabus_beat2
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                    
 * :--------|:-------|:------|:------------------------------------------------
 *  [7:0]   | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC0BUS
 *  [15:8]  | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC1BUS
 *  [23:16] | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC2BUS
 *  [31:24] | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC3BUS
 * 
 */
/*
 * Field : ECC0BUS
 * 
 * Data ECC from the register will be written to the RAM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC0BUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC0BUS_MSB        7
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC0BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC0BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC0BUS_SET_MSK    0x000000ff
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC0BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC0BUS_CLR_MSK    0xffffff00
/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC0BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC0BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC0BUS_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC0BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC0BUS_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : ECC1BUS
 * 
 * Data ECC from the register will be written to the RAM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC1BUS_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC1BUS_MSB        15
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC1BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC1BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC1BUS_SET_MSK    0x0000ff00
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC1BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC1BUS_CLR_MSK    0xffff00ff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC1BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC1BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC1BUS_GET(value) (((value) & 0x0000ff00) >> 8)
/* Produces a ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC1BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC1BUS_SET(value) (((value) << 8) & 0x0000ff00)

/*
 * Field : ECC2BUS
 * 
 * Data ECC from the register will be written to the RAM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC2BUS_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC2BUS_MSB        23
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC2BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC2BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC2BUS_SET_MSK    0x00ff0000
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC2BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC2BUS_CLR_MSK    0xff00ffff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC2BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC2BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC2BUS_GET(value) (((value) & 0x00ff0000) >> 16)
/* Produces a ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC2BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC2BUS_SET(value) (((value) << 16) & 0x00ff0000)

/*
 * Field : ECC3BUS
 * 
 * Data ECC from the register will be written to the RAM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC3BUS_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC3BUS_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC3BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC3BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC3BUS_SET_MSK    0xff000000
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC3BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC3BUS_CLR_MSK    0x00ffffff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC3BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC3BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC3BUS_GET(value) (((value) & 0xff000000) >> 24)
/* Produces a ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC3BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC3BUS_SET(value) (((value) << 24) & 0xff000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2.
 */
struct ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_s
{
    uint32_t  ECC0BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC0BUS */
    uint32_t  ECC1BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC1BUS */
    uint32_t  ECC2BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC2BUS */
    uint32_t  ECC3BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_ECC3BUS */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2. */
typedef volatile struct ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_s  ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2 register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_OFST        0x178

/*
 * Register : ECC_REG2RDDATABUS_BEAT3
 * 
 * ECC Reg2Rddatabus_beat3
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                    
 * :--------|:-------|:------|:------------------------------------------------
 *  [7:0]   | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC0BUS
 *  [15:8]  | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC1BUS
 *  [23:16] | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC2BUS
 *  [31:24] | RW     | 0x0   | ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC3BUS
 * 
 */
/*
 * Field : ECC0BUS
 * 
 * Data ECC from the register will be written to the RAM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC0BUS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC0BUS_MSB        7
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC0BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC0BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC0BUS_SET_MSK    0x000000ff
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC0BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC0BUS_CLR_MSK    0xffffff00
/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC0BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC0BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC0BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC0BUS_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC0BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC0BUS_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : ECC1BUS
 * 
 * Data ECC from the register will be written to the RAM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC1BUS_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC1BUS_MSB        15
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC1BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC1BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC1BUS_SET_MSK    0x0000ff00
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC1BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC1BUS_CLR_MSK    0xffff00ff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC1BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC1BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC1BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC1BUS_GET(value) (((value) & 0x0000ff00) >> 8)
/* Produces a ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC1BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC1BUS_SET(value) (((value) << 8) & 0x0000ff00)

/*
 * Field : ECC2BUS
 * 
 * Data ECC from the register will be written to the RAM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC2BUS_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC2BUS_MSB        23
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC2BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC2BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC2BUS_SET_MSK    0x00ff0000
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC2BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC2BUS_CLR_MSK    0xff00ffff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC2BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC2BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC2BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC2BUS_GET(value) (((value) & 0x00ff0000) >> 16)
/* Produces a ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC2BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC2BUS_SET(value) (((value) << 16) & 0x00ff0000)

/*
 * Field : ECC3BUS
 * 
 * Data ECC from the register will be written to the RAM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC3BUS_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC3BUS_MSB        31
/* The width in bits of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC3BUS_WIDTH      8
/* The mask used to set the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC3BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC3BUS_SET_MSK    0xff000000
/* The mask used to clear the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC3BUS register field value. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC3BUS_CLR_MSK    0x00ffffff
/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC3BUS register field. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC3BUS_RESET      0x0
/* Extracts the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC3BUS field value from a register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC3BUS_GET(value) (((value) & 0xff000000) >> 24)
/* Produces a ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC3BUS register field value suitable for setting the register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC3BUS_SET(value) (((value) << 24) & 0xff000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3.
 */
struct ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_s
{
    uint32_t  ECC0BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC0BUS */
    uint32_t  ECC1BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC1BUS */
    uint32_t  ECC2BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC2BUS */
    uint32_t  ECC3BUS :  8;  /* ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_ECC3BUS */
};

/* The typedef declaration for register ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3. */
typedef volatile struct ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_s  ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3 register. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_RESET       0x00000000
/* The byte offset of the ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3 register from the beginning of the component. */
#define ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_OFST        0x17c

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_ECC_HMC_OCP.
 */
struct ALT_ECC_HMC_OCP_s
{
    ALT_ECC_HMC_OCP_IP_REV_ID_t                IP_REV_ID;                /* ALT_ECC_HMC_OCP_IP_REV_ID */
    volatile uint32_t                          _pad_0x4_0x7;             /* *UNDEFINED* */
    ALT_ECC_HMC_OCP_DDRIOCTL_t                 DDRIOCTRL;                /* ALT_ECC_HMC_OCP_DDRIOCTL */
    ALT_ECC_HMC_OCP_DDRCALSTAT_t               DDRCALSTAT;               /* ALT_ECC_HMC_OCP_DDRCALSTAT */
    ALT_ECC_HMC_OCP_MPR_0BEAT1_t               MPR_0BEAT1;               /* ALT_ECC_HMC_OCP_MPR_0BEAT1 */
    ALT_ECC_HMC_OCP_MPR_1BEAT1_t               MPR_1BEAT1;               /* ALT_ECC_HMC_OCP_MPR_1BEAT1 */
    ALT_ECC_HMC_OCP_MPR_2BEAT1_t               MPR_2BEAT1;               /* ALT_ECC_HMC_OCP_MPR_2BEAT1 */
    ALT_ECC_HMC_OCP_MPR_3BEAT1_t               MPR_3BEAT1;               /* ALT_ECC_HMC_OCP_MPR_3BEAT1 */
    ALT_ECC_HMC_OCP_MPR_4BEAT1_t               MPR_4BEAT1;               /* ALT_ECC_HMC_OCP_MPR_4BEAT1 */
    ALT_ECC_HMC_OCP_MPR_5BEAT1_t               MPR_5BEAT1;               /* ALT_ECC_HMC_OCP_MPR_5BEAT1 */
    ALT_ECC_HMC_OCP_MPR_6BEAT1_t               MPR_6BEAT1;               /* ALT_ECC_HMC_OCP_MPR_6BEAT1 */
    ALT_ECC_HMC_OCP_MPR_7BEAT1_t               MPR_7BEAT1;               /* ALT_ECC_HMC_OCP_MPR_7BEAT1 */
    ALT_ECC_HMC_OCP_MPR_8BEAT1_t               MPR_8BEAT1;               /* ALT_ECC_HMC_OCP_MPR_8BEAT1 */
    ALT_ECC_HMC_OCP_MPR_0BEAT2_t               MPR_0BEAT2;               /* ALT_ECC_HMC_OCP_MPR_0BEAT2 */
    ALT_ECC_HMC_OCP_MPR_1BEAT2_t               MPR_1BEAT2;               /* ALT_ECC_HMC_OCP_MPR_1BEAT2 */
    ALT_ECC_HMC_OCP_MPR_2BEAT2_t               MPR_2BEAT2;               /* ALT_ECC_HMC_OCP_MPR_2BEAT2 */
    ALT_ECC_HMC_OCP_MPR_3BEAT2_t               MPR_3BEAT2;               /* ALT_ECC_HMC_OCP_MPR_3BEAT2 */
    ALT_ECC_HMC_OCP_MPR_4BEAT2_t               MPR_4BEAT2;               /* ALT_ECC_HMC_OCP_MPR_4BEAT2 */
    ALT_ECC_HMC_OCP_MPR_5BEAT2_t               MPR_5BEAT2;               /* ALT_ECC_HMC_OCP_MPR_5BEAT2 */
    ALT_ECC_HMC_OCP_MPR_6BEAT2_t               MPR_6BEAT2;               /* ALT_ECC_HMC_OCP_MPR_6BEAT2 */
    ALT_ECC_HMC_OCP_MPR_7BEAT2_t               MPR_7BEAT2;               /* ALT_ECC_HMC_OCP_MPR_7BEAT2 */
    ALT_ECC_HMC_OCP_MPR_8BEAT2_t               MPR_8BEAT2;               /* ALT_ECC_HMC_OCP_MPR_8BEAT2 */
    volatile uint32_t                          _pad_0x58_0x5f[2];        /* *UNDEFINED* */
    ALT_ECC_HMC_OCP_AUTO_PRECHARGE_t           AUTO_PRECHARGE;           /* ALT_ECC_HMC_OCP_AUTO_PRECHARGE */
    volatile uint32_t                          _pad_0x64_0xff[39];       /* *UNDEFINED* */
    ALT_ECC_HMC_OCP_ECCCTL1_t                  ECCCTRL1;                 /* ALT_ECC_HMC_OCP_ECCCTL1 */
    ALT_ECC_HMC_OCP_ECCCTL2_t                  ECCCTRL2;                 /* ALT_ECC_HMC_OCP_ECCCTL2 */
    volatile uint32_t                          _pad_0x108_0x10f[2];      /* *UNDEFINED* */
    ALT_ECC_HMC_OCP_ERRINTEN_t                 ERRINTEN;                 /* ALT_ECC_HMC_OCP_ERRINTEN */
    ALT_ECC_HMC_OCP_ERRINTENS_t                ERRINTENS;                /* ALT_ECC_HMC_OCP_ERRINTENS */
    ALT_ECC_HMC_OCP_ERRINTENR_t                ERRINTENR;                /* ALT_ECC_HMC_OCP_ERRINTENR */
    ALT_ECC_HMC_OCP_INTMOD_t                   INTMODE;                  /* ALT_ECC_HMC_OCP_INTMOD */
    ALT_ECC_HMC_OCP_INTSTAT_t                  INTSTAT;                  /* ALT_ECC_HMC_OCP_INTSTAT */
    ALT_ECC_HMC_OCP_DIAGINTTEST_t              DIAGINTTEST;              /* ALT_ECC_HMC_OCP_DIAGINTTEST */
    ALT_ECC_HMC_OCP_MODSTAT_t                  MODSTAT;                  /* ALT_ECC_HMC_OCP_MODSTAT */
    ALT_ECC_HMC_OCP_DERRADDRA_t                DERRADDRA;                /* ALT_ECC_HMC_OCP_DERRADDRA */
    ALT_ECC_HMC_OCP_SERRADDRA_t                SERRADDRA;                /* ALT_ECC_HMC_OCP_SERRADDRA */
    volatile uint32_t                          _pad_0x134_0x137;         /* *UNDEFINED* */
    ALT_ECC_HMC_OCP_AUTOWB_CORRADDR_t          AUTOWB_CORRADDR;          /* ALT_ECC_HMC_OCP_AUTOWB_CORRADDR */
    ALT_ECC_HMC_OCP_SERRCNTREG_t               SERRCNTREG;               /* ALT_ECC_HMC_OCP_SERRCNTREG */
    ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG_t       AUTOWB_DROP_CNTREG;       /* ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG */
    ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS_t     ECC_REG2WRECCDATABUS;     /* ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS */
    ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS_t     ECC_RDECCDATA2REGBUS;     /* ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS */
    ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS_t     ECC_REG2RDECCDATABUS;     /* ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS */
    ALT_ECC_HMC_OCP_ECC_DIAGON_t               ECC_DIAGON;               /* ALT_ECC_HMC_OCP_ECC_DIAGON */
    ALT_ECC_HMC_OCP_ECC_DECSTAT_t              ECC_DECSTAT;              /* ALT_ECC_HMC_OCP_ECC_DECSTAT */
    volatile uint32_t                          _pad_0x158_0x15f[2];      /* *UNDEFINED* */
    ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0_t         ECC_ERRGENADDR_0;         /* ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0 */
    ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1_t         ECC_ERRGENADDR_1;         /* ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1 */
    ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2_t         ECC_ERRGENADDR_2;         /* ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2 */
    ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3_t         ECC_ERRGENADDR_3;         /* ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3 */
    ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0_t  ECC_REG2RDDATABUS_BEAT0;  /* ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0 */
    ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1_t  ECC_REG2RDDATABUS_BEAT1;  /* ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1 */
    ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2_t  ECC_REG2RDDATABUS_BEAT2;  /* ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2 */
    ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3_t  ECC_REG2RDDATABUS_BEAT3;  /* ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3 */
    volatile uint32_t                          _pad_0x180_0x500[224];    /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_ECC_HMC_OCP. */
typedef volatile struct ALT_ECC_HMC_OCP_s  ALT_ECC_HMC_OCP_t;
/* The struct declaration for the raw register contents of register group ALT_ECC_HMC_OCP. */
struct ALT_ECC_HMC_OCP_raw_s
{
    volatile uint32_t  IP_REV_ID;                /* ALT_ECC_HMC_OCP_IP_REV_ID */
    uint32_t           _pad_0x4_0x7;             /* *UNDEFINED* */
    volatile uint32_t  DDRIOCTRL;                /* ALT_ECC_HMC_OCP_DDRIOCTL */
    volatile uint32_t  DDRCALSTAT;               /* ALT_ECC_HMC_OCP_DDRCALSTAT */
    volatile uint32_t  MPR_0BEAT1;               /* ALT_ECC_HMC_OCP_MPR_0BEAT1 */
    volatile uint32_t  MPR_1BEAT1;               /* ALT_ECC_HMC_OCP_MPR_1BEAT1 */
    volatile uint32_t  MPR_2BEAT1;               /* ALT_ECC_HMC_OCP_MPR_2BEAT1 */
    volatile uint32_t  MPR_3BEAT1;               /* ALT_ECC_HMC_OCP_MPR_3BEAT1 */
    volatile uint32_t  MPR_4BEAT1;               /* ALT_ECC_HMC_OCP_MPR_4BEAT1 */
    volatile uint32_t  MPR_5BEAT1;               /* ALT_ECC_HMC_OCP_MPR_5BEAT1 */
    volatile uint32_t  MPR_6BEAT1;               /* ALT_ECC_HMC_OCP_MPR_6BEAT1 */
    volatile uint32_t  MPR_7BEAT1;               /* ALT_ECC_HMC_OCP_MPR_7BEAT1 */
    volatile uint32_t  MPR_8BEAT1;               /* ALT_ECC_HMC_OCP_MPR_8BEAT1 */
    volatile uint32_t  MPR_0BEAT2;               /* ALT_ECC_HMC_OCP_MPR_0BEAT2 */
    volatile uint32_t  MPR_1BEAT2;               /* ALT_ECC_HMC_OCP_MPR_1BEAT2 */
    volatile uint32_t  MPR_2BEAT2;               /* ALT_ECC_HMC_OCP_MPR_2BEAT2 */
    volatile uint32_t  MPR_3BEAT2;               /* ALT_ECC_HMC_OCP_MPR_3BEAT2 */
    volatile uint32_t  MPR_4BEAT2;               /* ALT_ECC_HMC_OCP_MPR_4BEAT2 */
    volatile uint32_t  MPR_5BEAT2;               /* ALT_ECC_HMC_OCP_MPR_5BEAT2 */
    volatile uint32_t  MPR_6BEAT2;               /* ALT_ECC_HMC_OCP_MPR_6BEAT2 */
    volatile uint32_t  MPR_7BEAT2;               /* ALT_ECC_HMC_OCP_MPR_7BEAT2 */
    volatile uint32_t  MPR_8BEAT2;               /* ALT_ECC_HMC_OCP_MPR_8BEAT2 */
    uint32_t           _pad_0x58_0x5f[2];        /* *UNDEFINED* */
    volatile uint32_t  AUTO_PRECHARGE;           /* ALT_ECC_HMC_OCP_AUTO_PRECHARGE */
    uint32_t           _pad_0x64_0xff[39];       /* *UNDEFINED* */
    volatile uint32_t  ECCCTRL1;                 /* ALT_ECC_HMC_OCP_ECCCTL1 */
    volatile uint32_t  ECCCTRL2;                 /* ALT_ECC_HMC_OCP_ECCCTL2 */
    uint32_t           _pad_0x108_0x10f[2];      /* *UNDEFINED* */
    volatile uint32_t  ERRINTEN;                 /* ALT_ECC_HMC_OCP_ERRINTEN */
    volatile uint32_t  ERRINTENS;                /* ALT_ECC_HMC_OCP_ERRINTENS */
    volatile uint32_t  ERRINTENR;                /* ALT_ECC_HMC_OCP_ERRINTENR */
    volatile uint32_t  INTMODE;                  /* ALT_ECC_HMC_OCP_INTMOD */
    volatile uint32_t  INTSTAT;                  /* ALT_ECC_HMC_OCP_INTSTAT */
    volatile uint32_t  DIAGINTTEST;              /* ALT_ECC_HMC_OCP_DIAGINTTEST */
    volatile uint32_t  MODSTAT;                  /* ALT_ECC_HMC_OCP_MODSTAT */
    volatile uint32_t  DERRADDRA;                /* ALT_ECC_HMC_OCP_DERRADDRA */
    volatile uint32_t  SERRADDRA;                /* ALT_ECC_HMC_OCP_SERRADDRA */
    uint32_t           _pad_0x134_0x137;         /* *UNDEFINED* */
    volatile uint32_t  AUTOWB_CORRADDR;          /* ALT_ECC_HMC_OCP_AUTOWB_CORRADDR */
    volatile uint32_t  SERRCNTREG;               /* ALT_ECC_HMC_OCP_SERRCNTREG */
    volatile uint32_t  AUTOWB_DROP_CNTREG;       /* ALT_ECC_HMC_OCP_AUTOWB_DROP_CNTREG */
    volatile uint32_t  ECC_REG2WRECCDATABUS;     /* ALT_ECC_HMC_OCP_ECC_REG2WRECCDATABUS */
    volatile uint32_t  ECC_RDECCDATA2REGBUS;     /* ALT_ECC_HMC_OCP_ECC_RDECCDATA2REGBUS */
    volatile uint32_t  ECC_REG2RDECCDATABUS;     /* ALT_ECC_HMC_OCP_ECC_REG2RDECCDATABUS */
    volatile uint32_t  ECC_DIAGON;               /* ALT_ECC_HMC_OCP_ECC_DIAGON */
    volatile uint32_t  ECC_DECSTAT;              /* ALT_ECC_HMC_OCP_ECC_DECSTAT */
    uint32_t           _pad_0x158_0x15f[2];      /* *UNDEFINED* */
    volatile uint32_t  ECC_ERRGENADDR_0;         /* ALT_ECC_HMC_OCP_ECC_ERRGENADDR_0 */
    volatile uint32_t  ECC_ERRGENADDR_1;         /* ALT_ECC_HMC_OCP_ECC_ERRGENADDR_1 */
    volatile uint32_t  ECC_ERRGENADDR_2;         /* ALT_ECC_HMC_OCP_ECC_ERRGENADDR_2 */
    volatile uint32_t  ECC_ERRGENADDR_3;         /* ALT_ECC_HMC_OCP_ECC_ERRGENADDR_3 */
    volatile uint32_t  ECC_REG2RDDATABUS_BEAT0;  /* ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT0 */
    volatile uint32_t  ECC_REG2RDDATABUS_BEAT1;  /* ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT1 */
    volatile uint32_t  ECC_REG2RDDATABUS_BEAT2;  /* ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT2 */
    volatile uint32_t  ECC_REG2RDDATABUS_BEAT3;  /* ALT_ECC_HMC_OCP_ECC_REG2RDDATABUS_BEAT3 */
    uint32_t           _pad_0x180_0x500[224];    /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_ECC_HMC_OCP. */
typedef volatile struct ALT_ECC_HMC_OCP_raw_s  ALT_ECC_HMC_OCP_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_ECC_HMC_OCP_H__ */

