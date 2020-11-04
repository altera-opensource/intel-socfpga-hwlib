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

/* Altera - ALT_RSTMGR */

#ifndef __ALT_SOCAL_RSTMGR_H__
#define __ALT_SOCAL_RSTMGR_H__

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
 * Component : Reset Manager Module - RSTMGR
 * Reset Manager Module
 * 
 * Registers in the Reset Manager module
 * 
 */
/*
 * Register : Reset Status Register - stat
 * 
 * The "stat" register contains bits that indicate the reset source. A field is 1
 * if its associated reset requester caused the reset.
 * 
 * Software clears bits by writing them with a value of 1. Writes to bits with a
 * value of 0 are ignored.
 * 
 * After a cold reset is complete, all bits are reset to their reset value, except
 * the sdmcoldrst, debugrst, csdaprst and sdmporlastrst bits. sdmcoldrst, debugrst,
 * csdaprst and sdmporlastrst are reset to their reset value on POR.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description       
 * :--------|:-------|:------|:-------------------
 *  [0]     | RW     | 0x0   | SDM Cold Reset    
 *  [1]     | RW     | 0x0   | SDM Warm Reset    
 *  [2]     | RW     | 0x1   | SDM Last POR Reset
 *  [7:3]   | ???    | 0x0   | *UNDEFINED*       
 *  [8]     | RW     | 0x0   | mpu0rst           
 *  [9]     | RW     | 0x0   | mpu1rst           
 *  [10]    | RW     | 0x0   | mpu2rst           
 *  [11]    | RW     | 0x0   | mpu3rst           
 *  [15:12] | ???    | 0x0   | *UNDEFINED*       
 *  [16]    | RW     | 0x0   | l4wd0rst          
 *  [17]    | RW     | 0x0   | l4wd1rst          
 *  [18]    | RW     | 0x0   | l4wd2rst          
 *  [19]    | RW     | 0x0   | l4wd3rst          
 *  [23:20] | ???    | 0x0   | *UNDEFINED*       
 *  [24]    | RW     | 0x0   | debugrst          
 *  [25]    | RW     | 0x0   | csdaprst          
 *  [31:26] | ???    | 0x0   | *UNDEFINED*       
 * 
 */
/*
 * Field : SDM Cold Reset - sdmcoldrst
 * 
 * SDM triggered cold reset. This bit is reset to its reset value on POR, not on
 * warm or cold reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_SDMCOLDRST register field. */
#define ALT_RSTMGR_STAT_SDMCOLDRST_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_SDMCOLDRST register field. */
#define ALT_RSTMGR_STAT_SDMCOLDRST_MSB        0
/* The width in bits of the ALT_RSTMGR_STAT_SDMCOLDRST register field. */
#define ALT_RSTMGR_STAT_SDMCOLDRST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_SDMCOLDRST register field value. */
#define ALT_RSTMGR_STAT_SDMCOLDRST_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_STAT_SDMCOLDRST register field value. */
#define ALT_RSTMGR_STAT_SDMCOLDRST_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_STAT_SDMCOLDRST register field. */
#define ALT_RSTMGR_STAT_SDMCOLDRST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_SDMCOLDRST field value from a register. */
#define ALT_RSTMGR_STAT_SDMCOLDRST_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_STAT_SDMCOLDRST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_SDMCOLDRST_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : SDM Warm Reset - sdmwarmrst
 * 
 * SDM triggered warm reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_SDMWARMRST register field. */
#define ALT_RSTMGR_STAT_SDMWARMRST_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_SDMWARMRST register field. */
#define ALT_RSTMGR_STAT_SDMWARMRST_MSB        1
/* The width in bits of the ALT_RSTMGR_STAT_SDMWARMRST register field. */
#define ALT_RSTMGR_STAT_SDMWARMRST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_SDMWARMRST register field value. */
#define ALT_RSTMGR_STAT_SDMWARMRST_SET_MSK    0x00000002
/* The mask used to clear the ALT_RSTMGR_STAT_SDMWARMRST register field value. */
#define ALT_RSTMGR_STAT_SDMWARMRST_CLR_MSK    0xfffffffd
/* The reset value of the ALT_RSTMGR_STAT_SDMWARMRST register field. */
#define ALT_RSTMGR_STAT_SDMWARMRST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_SDMWARMRST field value from a register. */
#define ALT_RSTMGR_STAT_SDMWARMRST_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_RSTMGR_STAT_SDMWARMRST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_SDMWARMRST_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : SDM Last POR Reset - sdmlastporrst
 * 
 * SDM triggered last por reset. This bit is reset to its reset value on POR, not
 * on warm or cold reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_SDMLASTPORRST register field. */
#define ALT_RSTMGR_STAT_SDMLASTPORRST_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_SDMLASTPORRST register field. */
#define ALT_RSTMGR_STAT_SDMLASTPORRST_MSB        2
/* The width in bits of the ALT_RSTMGR_STAT_SDMLASTPORRST register field. */
#define ALT_RSTMGR_STAT_SDMLASTPORRST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_SDMLASTPORRST register field value. */
#define ALT_RSTMGR_STAT_SDMLASTPORRST_SET_MSK    0x00000004
/* The mask used to clear the ALT_RSTMGR_STAT_SDMLASTPORRST register field value. */
#define ALT_RSTMGR_STAT_SDMLASTPORRST_CLR_MSK    0xfffffffb
/* The reset value of the ALT_RSTMGR_STAT_SDMLASTPORRST register field. */
#define ALT_RSTMGR_STAT_SDMLASTPORRST_RESET      0x1
/* Extracts the ALT_RSTMGR_STAT_SDMLASTPORRST field value from a register. */
#define ALT_RSTMGR_STAT_SDMLASTPORRST_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_RSTMGR_STAT_SDMLASTPORRST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_SDMLASTPORRST_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : mpu0rst - mpu0rst
 * 
 * MPU0 triggered a hardware sequenced warm reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_MPU0RST register field. */
#define ALT_RSTMGR_STAT_MPU0RST_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_MPU0RST register field. */
#define ALT_RSTMGR_STAT_MPU0RST_MSB        8
/* The width in bits of the ALT_RSTMGR_STAT_MPU0RST register field. */
#define ALT_RSTMGR_STAT_MPU0RST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_MPU0RST register field value. */
#define ALT_RSTMGR_STAT_MPU0RST_SET_MSK    0x00000100
/* The mask used to clear the ALT_RSTMGR_STAT_MPU0RST register field value. */
#define ALT_RSTMGR_STAT_MPU0RST_CLR_MSK    0xfffffeff
/* The reset value of the ALT_RSTMGR_STAT_MPU0RST register field. */
#define ALT_RSTMGR_STAT_MPU0RST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_MPU0RST field value from a register. */
#define ALT_RSTMGR_STAT_MPU0RST_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_RSTMGR_STAT_MPU0RST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_MPU0RST_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : mpu1rst - mpu1rst
 * 
 * MPU1 triggered a hardware sequenced warm reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_MPU1RST register field. */
#define ALT_RSTMGR_STAT_MPU1RST_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_MPU1RST register field. */
#define ALT_RSTMGR_STAT_MPU1RST_MSB        9
/* The width in bits of the ALT_RSTMGR_STAT_MPU1RST register field. */
#define ALT_RSTMGR_STAT_MPU1RST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_MPU1RST register field value. */
#define ALT_RSTMGR_STAT_MPU1RST_SET_MSK    0x00000200
/* The mask used to clear the ALT_RSTMGR_STAT_MPU1RST register field value. */
#define ALT_RSTMGR_STAT_MPU1RST_CLR_MSK    0xfffffdff
/* The reset value of the ALT_RSTMGR_STAT_MPU1RST register field. */
#define ALT_RSTMGR_STAT_MPU1RST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_MPU1RST field value from a register. */
#define ALT_RSTMGR_STAT_MPU1RST_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_RSTMGR_STAT_MPU1RST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_MPU1RST_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : mpu2rst - mpu2rst
 * 
 * MPU2 triggered a hardware sequenced warm reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_MPU2RST register field. */
#define ALT_RSTMGR_STAT_MPU2RST_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_MPU2RST register field. */
#define ALT_RSTMGR_STAT_MPU2RST_MSB        10
/* The width in bits of the ALT_RSTMGR_STAT_MPU2RST register field. */
#define ALT_RSTMGR_STAT_MPU2RST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_MPU2RST register field value. */
#define ALT_RSTMGR_STAT_MPU2RST_SET_MSK    0x00000400
/* The mask used to clear the ALT_RSTMGR_STAT_MPU2RST register field value. */
#define ALT_RSTMGR_STAT_MPU2RST_CLR_MSK    0xfffffbff
/* The reset value of the ALT_RSTMGR_STAT_MPU2RST register field. */
#define ALT_RSTMGR_STAT_MPU2RST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_MPU2RST field value from a register. */
#define ALT_RSTMGR_STAT_MPU2RST_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_RSTMGR_STAT_MPU2RST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_MPU2RST_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : mpu3rst - mpu3rst
 * 
 * MPU3 triggered a hardware sequenced warm reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_MPU3RST register field. */
#define ALT_RSTMGR_STAT_MPU3RST_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_MPU3RST register field. */
#define ALT_RSTMGR_STAT_MPU3RST_MSB        11
/* The width in bits of the ALT_RSTMGR_STAT_MPU3RST register field. */
#define ALT_RSTMGR_STAT_MPU3RST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_MPU3RST register field value. */
#define ALT_RSTMGR_STAT_MPU3RST_SET_MSK    0x00000800
/* The mask used to clear the ALT_RSTMGR_STAT_MPU3RST register field value. */
#define ALT_RSTMGR_STAT_MPU3RST_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_RSTMGR_STAT_MPU3RST register field. */
#define ALT_RSTMGR_STAT_MPU3RST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_MPU3RST field value from a register. */
#define ALT_RSTMGR_STAT_MPU3RST_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_RSTMGR_STAT_MPU3RST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_MPU3RST_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : l4wd0rst - l4wd0rst
 * 
 * L4 Watchdog0 triggered a hardware sequenced warm reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_L4WD0RST register field. */
#define ALT_RSTMGR_STAT_L4WD0RST_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_L4WD0RST register field. */
#define ALT_RSTMGR_STAT_L4WD0RST_MSB        16
/* The width in bits of the ALT_RSTMGR_STAT_L4WD0RST register field. */
#define ALT_RSTMGR_STAT_L4WD0RST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_L4WD0RST register field value. */
#define ALT_RSTMGR_STAT_L4WD0RST_SET_MSK    0x00010000
/* The mask used to clear the ALT_RSTMGR_STAT_L4WD0RST register field value. */
#define ALT_RSTMGR_STAT_L4WD0RST_CLR_MSK    0xfffeffff
/* The reset value of the ALT_RSTMGR_STAT_L4WD0RST register field. */
#define ALT_RSTMGR_STAT_L4WD0RST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_L4WD0RST field value from a register. */
#define ALT_RSTMGR_STAT_L4WD0RST_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_RSTMGR_STAT_L4WD0RST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_L4WD0RST_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : l4wd1rst - l4wd1rst
 * 
 * L4 Watchdog1 triggered a hardware sequenced warm reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_L4WD1RST register field. */
#define ALT_RSTMGR_STAT_L4WD1RST_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_L4WD1RST register field. */
#define ALT_RSTMGR_STAT_L4WD1RST_MSB        17
/* The width in bits of the ALT_RSTMGR_STAT_L4WD1RST register field. */
#define ALT_RSTMGR_STAT_L4WD1RST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_L4WD1RST register field value. */
#define ALT_RSTMGR_STAT_L4WD1RST_SET_MSK    0x00020000
/* The mask used to clear the ALT_RSTMGR_STAT_L4WD1RST register field value. */
#define ALT_RSTMGR_STAT_L4WD1RST_CLR_MSK    0xfffdffff
/* The reset value of the ALT_RSTMGR_STAT_L4WD1RST register field. */
#define ALT_RSTMGR_STAT_L4WD1RST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_L4WD1RST field value from a register. */
#define ALT_RSTMGR_STAT_L4WD1RST_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_RSTMGR_STAT_L4WD1RST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_L4WD1RST_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : l4wd2rst - l4wd2rst
 * 
 * L4 Watchdog2 triggered a hardware sequenced warm reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_L4WD2RST register field. */
#define ALT_RSTMGR_STAT_L4WD2RST_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_L4WD2RST register field. */
#define ALT_RSTMGR_STAT_L4WD2RST_MSB        18
/* The width in bits of the ALT_RSTMGR_STAT_L4WD2RST register field. */
#define ALT_RSTMGR_STAT_L4WD2RST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_L4WD2RST register field value. */
#define ALT_RSTMGR_STAT_L4WD2RST_SET_MSK    0x00040000
/* The mask used to clear the ALT_RSTMGR_STAT_L4WD2RST register field value. */
#define ALT_RSTMGR_STAT_L4WD2RST_CLR_MSK    0xfffbffff
/* The reset value of the ALT_RSTMGR_STAT_L4WD2RST register field. */
#define ALT_RSTMGR_STAT_L4WD2RST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_L4WD2RST field value from a register. */
#define ALT_RSTMGR_STAT_L4WD2RST_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_RSTMGR_STAT_L4WD2RST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_L4WD2RST_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : l4wd3rst - l4wd3rst
 * 
 * L4 Watchdog3 triggered a hardware sequenced warm reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_L4WD3RST register field. */
#define ALT_RSTMGR_STAT_L4WD3RST_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_L4WD3RST register field. */
#define ALT_RSTMGR_STAT_L4WD3RST_MSB        19
/* The width in bits of the ALT_RSTMGR_STAT_L4WD3RST register field. */
#define ALT_RSTMGR_STAT_L4WD3RST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_L4WD3RST register field value. */
#define ALT_RSTMGR_STAT_L4WD3RST_SET_MSK    0x00080000
/* The mask used to clear the ALT_RSTMGR_STAT_L4WD3RST register field value. */
#define ALT_RSTMGR_STAT_L4WD3RST_CLR_MSK    0xfff7ffff
/* The reset value of the ALT_RSTMGR_STAT_L4WD3RST register field. */
#define ALT_RSTMGR_STAT_L4WD3RST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_L4WD3RST field value from a register. */
#define ALT_RSTMGR_STAT_L4WD3RST_GET(value) (((value) & 0x00080000) >> 19)
/* Produces a ALT_RSTMGR_STAT_L4WD3RST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_L4WD3RST_SET(value) (((value) << 19) & 0x00080000)

/*
 * Field : debugrst - debugrst
 * 
 * "debugrst" indicates if the debug reset has been asserted. This bit is reset to
 * its reset value on POR, not on warm or cold reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_DEBUGRST register field. */
#define ALT_RSTMGR_STAT_DEBUGRST_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_DEBUGRST register field. */
#define ALT_RSTMGR_STAT_DEBUGRST_MSB        24
/* The width in bits of the ALT_RSTMGR_STAT_DEBUGRST register field. */
#define ALT_RSTMGR_STAT_DEBUGRST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_DEBUGRST register field value. */
#define ALT_RSTMGR_STAT_DEBUGRST_SET_MSK    0x01000000
/* The mask used to clear the ALT_RSTMGR_STAT_DEBUGRST register field value. */
#define ALT_RSTMGR_STAT_DEBUGRST_CLR_MSK    0xfeffffff
/* The reset value of the ALT_RSTMGR_STAT_DEBUGRST register field. */
#define ALT_RSTMGR_STAT_DEBUGRST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_DEBUGRST field value from a register. */
#define ALT_RSTMGR_STAT_DEBUGRST_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_RSTMGR_STAT_DEBUGRST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_DEBUGRST_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : csdaprst - csdaprst
 * 
 * This bit indicates that CS DAP block has been reset. This bit is reset to its
 * reset value on POR, not on warm or cold reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_CSDAPRST register field. */
#define ALT_RSTMGR_STAT_CSDAPRST_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_CSDAPRST register field. */
#define ALT_RSTMGR_STAT_CSDAPRST_MSB        25
/* The width in bits of the ALT_RSTMGR_STAT_CSDAPRST register field. */
#define ALT_RSTMGR_STAT_CSDAPRST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_CSDAPRST register field value. */
#define ALT_RSTMGR_STAT_CSDAPRST_SET_MSK    0x02000000
/* The mask used to clear the ALT_RSTMGR_STAT_CSDAPRST register field value. */
#define ALT_RSTMGR_STAT_CSDAPRST_CLR_MSK    0xfdffffff
/* The reset value of the ALT_RSTMGR_STAT_CSDAPRST register field. */
#define ALT_RSTMGR_STAT_CSDAPRST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_CSDAPRST field value from a register. */
#define ALT_RSTMGR_STAT_CSDAPRST_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_RSTMGR_STAT_CSDAPRST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_CSDAPRST_SET(value) (((value) << 25) & 0x02000000)

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
 * The struct declaration for register ALT_RSTMGR_STAT.
 */
struct ALT_RSTMGR_STAT_s
{
    volatile uint32_t  sdmcoldrst    :  1;  /* SDM Cold Reset */
    volatile uint32_t  sdmwarmrst    :  1;  /* SDM Warm Reset */
    volatile uint32_t  sdmlastporrst :  1;  /* SDM Last POR Reset */
    uint32_t                         :  5;  /* *UNDEFINED* */
    volatile uint32_t  mpu0rst       :  1;  /* mpu0rst */
    volatile uint32_t  mpu1rst       :  1;  /* mpu1rst */
    volatile uint32_t  mpu2rst       :  1;  /* mpu2rst */
    volatile uint32_t  mpu3rst       :  1;  /* mpu3rst */
    uint32_t                         :  4;  /* *UNDEFINED* */
    volatile uint32_t  l4wd0rst      :  1;  /* l4wd0rst */
    volatile uint32_t  l4wd1rst      :  1;  /* l4wd1rst */
    volatile uint32_t  l4wd2rst      :  1;  /* l4wd2rst */
    volatile uint32_t  l4wd3rst      :  1;  /* l4wd3rst */
    uint32_t                         :  4;  /* *UNDEFINED* */
    volatile uint32_t  debugrst      :  1;  /* debugrst */
    volatile uint32_t  csdaprst      :  1;  /* csdaprst */
    uint32_t                         :  6;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_STAT. */
typedef struct ALT_RSTMGR_STAT_s  ALT_RSTMGR_STAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_STAT register. */
#define ALT_RSTMGR_STAT_RESET       0x00000004
/* The byte offset of the ALT_RSTMGR_STAT register from the beginning of the component. */
#define ALT_RSTMGR_STAT_OFST        0x0

/*
 * Register : MPU Reset Status - mpurststat
 * 
 * The "mpurststat" register contains bits which indicate SDM that  a CPU and/or
 * Core reset has been asserted by MPU Software which is triggered by writing to
 * the "mpumodrst" register and cpupor* fields of "coldmodrst" register.
 * 
 * Hardware writes 1 to the respective bits to indicate which cpu or core has been
 * reset. Software clears bits by writing 1.
 * 
 * All the fields are cleared by cold reset.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                      
 * :--------|:-------|:------|:----------------------------------
 *  [0]     | RW     | 0x0   | ALT_RSTMGR_MPURSTSTAT_CPUPOR0_IRQ
 *  [1]     | RW     | 0x0   | ALT_RSTMGR_MPURSTSTAT_CPUPOR1_IRQ
 *  [2]     | RW     | 0x0   | ALT_RSTMGR_MPURSTSTAT_CPUPOR2_IRQ
 *  [3]     | RW     | 0x0   | ALT_RSTMGR_MPURSTSTAT_CPUPOR3_IRQ
 *  [7:4]   | ???    | 0x0   | *UNDEFINED*                      
 *  [8]     | RW     | 0x0   | ALT_RSTMGR_MPURSTSTAT_CORE0_IRQ  
 *  [9]     | RW     | 0x0   | ALT_RSTMGR_MPURSTSTAT_CORE1_IRQ  
 *  [10]    | RW     | 0x0   | ALT_RSTMGR_MPURSTSTAT_CORE2_IRQ  
 *  [11]    | RW     | 0x0   | ALT_RSTMGR_MPURSTSTAT_CORE3_IRQ  
 *  [31:12] | ???    | 0x0   | *UNDEFINED*                      
 * 
 */
/*
 * Field : cpupor0_irq
 * 
 * This bit indicates SDM that MPU software has asserted reset to CPU0 by writing
 * to the 'cpupor0' bit of register "coldmodrst".
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MPURSTSTAT_CPUPOR0_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR0_IRQ_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MPURSTSTAT_CPUPOR0_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR0_IRQ_MSB        0
/* The width in bits of the ALT_RSTMGR_MPURSTSTAT_CPUPOR0_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR0_IRQ_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MPURSTSTAT_CPUPOR0_IRQ register field value. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR0_IRQ_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_MPURSTSTAT_CPUPOR0_IRQ register field value. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR0_IRQ_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_MPURSTSTAT_CPUPOR0_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR0_IRQ_RESET      0x0
/* Extracts the ALT_RSTMGR_MPURSTSTAT_CPUPOR0_IRQ field value from a register. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR0_IRQ_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_MPURSTSTAT_CPUPOR0_IRQ register field value suitable for setting the register. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR0_IRQ_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : cpupor1_irq
 * 
 * This bit indicates SDM that MPU software has asserted reset to CPU1 by writing
 * to the 'cpupor1' bit of register "coldmodrst".
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MPURSTSTAT_CPUPOR1_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR1_IRQ_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MPURSTSTAT_CPUPOR1_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR1_IRQ_MSB        1
/* The width in bits of the ALT_RSTMGR_MPURSTSTAT_CPUPOR1_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR1_IRQ_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MPURSTSTAT_CPUPOR1_IRQ register field value. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR1_IRQ_SET_MSK    0x00000002
/* The mask used to clear the ALT_RSTMGR_MPURSTSTAT_CPUPOR1_IRQ register field value. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR1_IRQ_CLR_MSK    0xfffffffd
/* The reset value of the ALT_RSTMGR_MPURSTSTAT_CPUPOR1_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR1_IRQ_RESET      0x0
/* Extracts the ALT_RSTMGR_MPURSTSTAT_CPUPOR1_IRQ field value from a register. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR1_IRQ_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_RSTMGR_MPURSTSTAT_CPUPOR1_IRQ register field value suitable for setting the register. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR1_IRQ_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : cpupor2_irq
 * 
 * This bit indicates SDM that MPU software has asserted reset to CPU2 by writing
 * to the 'cpupor2' bit of register "coldmodrst".
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MPURSTSTAT_CPUPOR2_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR2_IRQ_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MPURSTSTAT_CPUPOR2_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR2_IRQ_MSB        2
/* The width in bits of the ALT_RSTMGR_MPURSTSTAT_CPUPOR2_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR2_IRQ_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MPURSTSTAT_CPUPOR2_IRQ register field value. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR2_IRQ_SET_MSK    0x00000004
/* The mask used to clear the ALT_RSTMGR_MPURSTSTAT_CPUPOR2_IRQ register field value. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR2_IRQ_CLR_MSK    0xfffffffb
/* The reset value of the ALT_RSTMGR_MPURSTSTAT_CPUPOR2_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR2_IRQ_RESET      0x0
/* Extracts the ALT_RSTMGR_MPURSTSTAT_CPUPOR2_IRQ field value from a register. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR2_IRQ_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_RSTMGR_MPURSTSTAT_CPUPOR2_IRQ register field value suitable for setting the register. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR2_IRQ_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : cpupor3_irq
 * 
 * This bit indicates SDM that MPU software has asserted reset to CPU3 by writing
 * to the 'cpupor3' bit of register "coldmodrst".
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MPURSTSTAT_CPUPOR3_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR3_IRQ_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MPURSTSTAT_CPUPOR3_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR3_IRQ_MSB        3
/* The width in bits of the ALT_RSTMGR_MPURSTSTAT_CPUPOR3_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR3_IRQ_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MPURSTSTAT_CPUPOR3_IRQ register field value. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR3_IRQ_SET_MSK    0x00000008
/* The mask used to clear the ALT_RSTMGR_MPURSTSTAT_CPUPOR3_IRQ register field value. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR3_IRQ_CLR_MSK    0xfffffff7
/* The reset value of the ALT_RSTMGR_MPURSTSTAT_CPUPOR3_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR3_IRQ_RESET      0x0
/* Extracts the ALT_RSTMGR_MPURSTSTAT_CPUPOR3_IRQ field value from a register. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR3_IRQ_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_RSTMGR_MPURSTSTAT_CPUPOR3_IRQ register field value suitable for setting the register. */
#define ALT_RSTMGR_MPURSTSTAT_CPUPOR3_IRQ_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : core0_irq
 * 
 * This bit indicates SDM that MPU software has asserted reset to core0 by writing
 * to "mpumodrst" register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MPURSTSTAT_CORE0_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CORE0_IRQ_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MPURSTSTAT_CORE0_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CORE0_IRQ_MSB        8
/* The width in bits of the ALT_RSTMGR_MPURSTSTAT_CORE0_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CORE0_IRQ_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MPURSTSTAT_CORE0_IRQ register field value. */
#define ALT_RSTMGR_MPURSTSTAT_CORE0_IRQ_SET_MSK    0x00000100
/* The mask used to clear the ALT_RSTMGR_MPURSTSTAT_CORE0_IRQ register field value. */
#define ALT_RSTMGR_MPURSTSTAT_CORE0_IRQ_CLR_MSK    0xfffffeff
/* The reset value of the ALT_RSTMGR_MPURSTSTAT_CORE0_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CORE0_IRQ_RESET      0x0
/* Extracts the ALT_RSTMGR_MPURSTSTAT_CORE0_IRQ field value from a register. */
#define ALT_RSTMGR_MPURSTSTAT_CORE0_IRQ_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_RSTMGR_MPURSTSTAT_CORE0_IRQ register field value suitable for setting the register. */
#define ALT_RSTMGR_MPURSTSTAT_CORE0_IRQ_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : core1_irq
 * 
 * This bit indicates SDM that MPU software has asserted reset to core1 by writing
 * to "mpumodrst" register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MPURSTSTAT_CORE1_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CORE1_IRQ_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MPURSTSTAT_CORE1_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CORE1_IRQ_MSB        9
/* The width in bits of the ALT_RSTMGR_MPURSTSTAT_CORE1_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CORE1_IRQ_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MPURSTSTAT_CORE1_IRQ register field value. */
#define ALT_RSTMGR_MPURSTSTAT_CORE1_IRQ_SET_MSK    0x00000200
/* The mask used to clear the ALT_RSTMGR_MPURSTSTAT_CORE1_IRQ register field value. */
#define ALT_RSTMGR_MPURSTSTAT_CORE1_IRQ_CLR_MSK    0xfffffdff
/* The reset value of the ALT_RSTMGR_MPURSTSTAT_CORE1_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CORE1_IRQ_RESET      0x0
/* Extracts the ALT_RSTMGR_MPURSTSTAT_CORE1_IRQ field value from a register. */
#define ALT_RSTMGR_MPURSTSTAT_CORE1_IRQ_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_RSTMGR_MPURSTSTAT_CORE1_IRQ register field value suitable for setting the register. */
#define ALT_RSTMGR_MPURSTSTAT_CORE1_IRQ_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : core2_irq
 * 
 * This bit indicates SDM that MPU software has asserted reset to core2 by writing
 * to "mpumodrst" register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MPURSTSTAT_CORE2_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CORE2_IRQ_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MPURSTSTAT_CORE2_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CORE2_IRQ_MSB        10
/* The width in bits of the ALT_RSTMGR_MPURSTSTAT_CORE2_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CORE2_IRQ_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MPURSTSTAT_CORE2_IRQ register field value. */
#define ALT_RSTMGR_MPURSTSTAT_CORE2_IRQ_SET_MSK    0x00000400
/* The mask used to clear the ALT_RSTMGR_MPURSTSTAT_CORE2_IRQ register field value. */
#define ALT_RSTMGR_MPURSTSTAT_CORE2_IRQ_CLR_MSK    0xfffffbff
/* The reset value of the ALT_RSTMGR_MPURSTSTAT_CORE2_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CORE2_IRQ_RESET      0x0
/* Extracts the ALT_RSTMGR_MPURSTSTAT_CORE2_IRQ field value from a register. */
#define ALT_RSTMGR_MPURSTSTAT_CORE2_IRQ_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_RSTMGR_MPURSTSTAT_CORE2_IRQ register field value suitable for setting the register. */
#define ALT_RSTMGR_MPURSTSTAT_CORE2_IRQ_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : core3_irq
 * 
 * This bit indicates SDM that MPU software has asserted reset to core3 by writing
 * to "mpumodrst" register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MPURSTSTAT_CORE3_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CORE3_IRQ_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MPURSTSTAT_CORE3_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CORE3_IRQ_MSB        11
/* The width in bits of the ALT_RSTMGR_MPURSTSTAT_CORE3_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CORE3_IRQ_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MPURSTSTAT_CORE3_IRQ register field value. */
#define ALT_RSTMGR_MPURSTSTAT_CORE3_IRQ_SET_MSK    0x00000800
/* The mask used to clear the ALT_RSTMGR_MPURSTSTAT_CORE3_IRQ register field value. */
#define ALT_RSTMGR_MPURSTSTAT_CORE3_IRQ_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_RSTMGR_MPURSTSTAT_CORE3_IRQ register field. */
#define ALT_RSTMGR_MPURSTSTAT_CORE3_IRQ_RESET      0x0
/* Extracts the ALT_RSTMGR_MPURSTSTAT_CORE3_IRQ field value from a register. */
#define ALT_RSTMGR_MPURSTSTAT_CORE3_IRQ_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_RSTMGR_MPURSTSTAT_CORE3_IRQ register field value suitable for setting the register. */
#define ALT_RSTMGR_MPURSTSTAT_CORE3_IRQ_SET(value) (((value) << 11) & 0x00000800)

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
 * The struct declaration for register ALT_RSTMGR_MPURSTSTAT.
 */
struct ALT_RSTMGR_MPURSTSTAT_s
{
    volatile uint32_t  cpupor0_irq :  1;  /* ALT_RSTMGR_MPURSTSTAT_CPUPOR0_IRQ */
    volatile uint32_t  cpupor1_irq :  1;  /* ALT_RSTMGR_MPURSTSTAT_CPUPOR1_IRQ */
    volatile uint32_t  cpupor2_irq :  1;  /* ALT_RSTMGR_MPURSTSTAT_CPUPOR2_IRQ */
    volatile uint32_t  cpupor3_irq :  1;  /* ALT_RSTMGR_MPURSTSTAT_CPUPOR3_IRQ */
    uint32_t                       :  4;  /* *UNDEFINED* */
    volatile uint32_t  core0_irq   :  1;  /* ALT_RSTMGR_MPURSTSTAT_CORE0_IRQ */
    volatile uint32_t  core1_irq   :  1;  /* ALT_RSTMGR_MPURSTSTAT_CORE1_IRQ */
    volatile uint32_t  core2_irq   :  1;  /* ALT_RSTMGR_MPURSTSTAT_CORE2_IRQ */
    volatile uint32_t  core3_irq   :  1;  /* ALT_RSTMGR_MPURSTSTAT_CORE3_IRQ */
    uint32_t                       : 20;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_MPURSTSTAT. */
typedef struct ALT_RSTMGR_MPURSTSTAT_s  ALT_RSTMGR_MPURSTSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_MPURSTSTAT register. */
#define ALT_RSTMGR_MPURSTSTAT_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_MPURSTSTAT register from the beginning of the component. */
#define ALT_RSTMGR_MPURSTSTAT_OFST        0x4

/*
 * Register : Timeout Status Register - miscstat
 * 
 * The "miscstat" register contains bits that indicate the timeout event. For
 * timeout events, a field is 1 if its associated timeout occured as part of a
 * hardware sequenced warm/debug reset.
 * 
 * After a cold reset is complete, all bits are reset to their reset value. A warm
 * reset does not clear any of the bits in the "miscstat" register. These bits must
 * be cleared by software writing 1 to the "miscstat" register.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description               
 * :--------|:-------|:------|:---------------------------
 *  [0]     | RW     | 0x0   | SDRAM Self-Refresh Timeout
 *  [1]     | ???    | 0x0   | *UNDEFINED*               
 *  [2]     | RW     | 0x0   | FPGA Handshake Timeout    
 *  [3]     | RW     | 0x0   | ETR Stall Timeout         
 *  [7:4]   | ???    | 0x0   | *UNDEFINED*               
 *  [8]     | RW     | 0x0   | L2 Flush Handshake Timeout
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*               
 *  [16]    | RW     | 0x0   | L3 NOC Handshake Timeout  
 *  [31:17] | ???    | 0x0   | *UNDEFINED*               
 * 
 */
/*
 * Field : SDRAM Self-Refresh Timeout - sdrselfreftimeout
 * 
 * A 1 indicates that Reset Manager's handshake request to the SDRAM Controller
 * Subsystem timed out and the Reset Manager had to proceed with the warm/watchdog
 * reset anyway.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MISCSTAT_SDRSELFREFTIMEOUT register field. */
#define ALT_RSTMGR_MISCSTAT_SDRSELFREFTIMEOUT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MISCSTAT_SDRSELFREFTIMEOUT register field. */
#define ALT_RSTMGR_MISCSTAT_SDRSELFREFTIMEOUT_MSB        0
/* The width in bits of the ALT_RSTMGR_MISCSTAT_SDRSELFREFTIMEOUT register field. */
#define ALT_RSTMGR_MISCSTAT_SDRSELFREFTIMEOUT_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MISCSTAT_SDRSELFREFTIMEOUT register field value. */
#define ALT_RSTMGR_MISCSTAT_SDRSELFREFTIMEOUT_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_MISCSTAT_SDRSELFREFTIMEOUT register field value. */
#define ALT_RSTMGR_MISCSTAT_SDRSELFREFTIMEOUT_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_MISCSTAT_SDRSELFREFTIMEOUT register field. */
#define ALT_RSTMGR_MISCSTAT_SDRSELFREFTIMEOUT_RESET      0x0
/* Extracts the ALT_RSTMGR_MISCSTAT_SDRSELFREFTIMEOUT field value from a register. */
#define ALT_RSTMGR_MISCSTAT_SDRSELFREFTIMEOUT_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_MISCSTAT_SDRSELFREFTIMEOUT register field value suitable for setting the register. */
#define ALT_RSTMGR_MISCSTAT_SDRSELFREFTIMEOUT_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : FPGA Handshake Timeout - fpgahstimeout
 * 
 * A 1 indicates that Reset Manager's handshake request to FPGA before starting a
 * hardware sequenced warm/watchdog reset timed-out and the Reset Manager had to
 * proceed with the warm/watchdog reset anyway.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MISCSTAT_FPGAHSTIMEOUT register field. */
#define ALT_RSTMGR_MISCSTAT_FPGAHSTIMEOUT_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MISCSTAT_FPGAHSTIMEOUT register field. */
#define ALT_RSTMGR_MISCSTAT_FPGAHSTIMEOUT_MSB        2
/* The width in bits of the ALT_RSTMGR_MISCSTAT_FPGAHSTIMEOUT register field. */
#define ALT_RSTMGR_MISCSTAT_FPGAHSTIMEOUT_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MISCSTAT_FPGAHSTIMEOUT register field value. */
#define ALT_RSTMGR_MISCSTAT_FPGAHSTIMEOUT_SET_MSK    0x00000004
/* The mask used to clear the ALT_RSTMGR_MISCSTAT_FPGAHSTIMEOUT register field value. */
#define ALT_RSTMGR_MISCSTAT_FPGAHSTIMEOUT_CLR_MSK    0xfffffffb
/* The reset value of the ALT_RSTMGR_MISCSTAT_FPGAHSTIMEOUT register field. */
#define ALT_RSTMGR_MISCSTAT_FPGAHSTIMEOUT_RESET      0x0
/* Extracts the ALT_RSTMGR_MISCSTAT_FPGAHSTIMEOUT field value from a register. */
#define ALT_RSTMGR_MISCSTAT_FPGAHSTIMEOUT_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_RSTMGR_MISCSTAT_FPGAHSTIMEOUT register field value suitable for setting the register. */
#define ALT_RSTMGR_MISCSTAT_FPGAHSTIMEOUT_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : ETR Stall Timeout - etrstalltimeout
 * 
 * A 1 indicates that Reset Manager's request to the ETR (Embedded Trace Router) to
 * stall its AXI master port before starting a hardware sequenced warm/watchdog
 * reset timed-out and the Reset Manager had to proceed with the warm/watchdog
 * reset anyway.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MISCSTAT_ETRSTALLTIMEOUT register field. */
#define ALT_RSTMGR_MISCSTAT_ETRSTALLTIMEOUT_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MISCSTAT_ETRSTALLTIMEOUT register field. */
#define ALT_RSTMGR_MISCSTAT_ETRSTALLTIMEOUT_MSB        3
/* The width in bits of the ALT_RSTMGR_MISCSTAT_ETRSTALLTIMEOUT register field. */
#define ALT_RSTMGR_MISCSTAT_ETRSTALLTIMEOUT_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MISCSTAT_ETRSTALLTIMEOUT register field value. */
#define ALT_RSTMGR_MISCSTAT_ETRSTALLTIMEOUT_SET_MSK    0x00000008
/* The mask used to clear the ALT_RSTMGR_MISCSTAT_ETRSTALLTIMEOUT register field value. */
#define ALT_RSTMGR_MISCSTAT_ETRSTALLTIMEOUT_CLR_MSK    0xfffffff7
/* The reset value of the ALT_RSTMGR_MISCSTAT_ETRSTALLTIMEOUT register field. */
#define ALT_RSTMGR_MISCSTAT_ETRSTALLTIMEOUT_RESET      0x0
/* Extracts the ALT_RSTMGR_MISCSTAT_ETRSTALLTIMEOUT field value from a register. */
#define ALT_RSTMGR_MISCSTAT_ETRSTALLTIMEOUT_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_RSTMGR_MISCSTAT_ETRSTALLTIMEOUT register field value suitable for setting the register. */
#define ALT_RSTMGR_MISCSTAT_ETRSTALLTIMEOUT_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : L2 Flush Handshake Timeout - mpul2flushtimeout
 * 
 * A 1 indicates that Reset Manager's handshake request to L2 Flush timed-out and
 * the Reset Manager had to proceed with reset anyway.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MISCSTAT_MPUL2FLUSHTIMEOUT register field. */
#define ALT_RSTMGR_MISCSTAT_MPUL2FLUSHTIMEOUT_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MISCSTAT_MPUL2FLUSHTIMEOUT register field. */
#define ALT_RSTMGR_MISCSTAT_MPUL2FLUSHTIMEOUT_MSB        8
/* The width in bits of the ALT_RSTMGR_MISCSTAT_MPUL2FLUSHTIMEOUT register field. */
#define ALT_RSTMGR_MISCSTAT_MPUL2FLUSHTIMEOUT_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MISCSTAT_MPUL2FLUSHTIMEOUT register field value. */
#define ALT_RSTMGR_MISCSTAT_MPUL2FLUSHTIMEOUT_SET_MSK    0x00000100
/* The mask used to clear the ALT_RSTMGR_MISCSTAT_MPUL2FLUSHTIMEOUT register field value. */
#define ALT_RSTMGR_MISCSTAT_MPUL2FLUSHTIMEOUT_CLR_MSK    0xfffffeff
/* The reset value of the ALT_RSTMGR_MISCSTAT_MPUL2FLUSHTIMEOUT register field. */
#define ALT_RSTMGR_MISCSTAT_MPUL2FLUSHTIMEOUT_RESET      0x0
/* Extracts the ALT_RSTMGR_MISCSTAT_MPUL2FLUSHTIMEOUT field value from a register. */
#define ALT_RSTMGR_MISCSTAT_MPUL2FLUSHTIMEOUT_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_RSTMGR_MISCSTAT_MPUL2FLUSHTIMEOUT register field value suitable for setting the register. */
#define ALT_RSTMGR_MISCSTAT_MPUL2FLUSHTIMEOUT_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : L3 NOC Handshake Timeout - l3nocdbgtimeout
 * 
 * A 1 indicates that Reset Manager's request to the NOC before starting a hardware
 * sequenced warm/watchdog reset timed-out and the Reset Manager had to proceed
 * with the warm/watchdog reset anyway. Reset Manager performs this handshake with
 * NOC when NOC is getting reset but debug logic does not get reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MISCSTAT_L3NOCDBGTIMEOUT register field. */
#define ALT_RSTMGR_MISCSTAT_L3NOCDBGTIMEOUT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MISCSTAT_L3NOCDBGTIMEOUT register field. */
#define ALT_RSTMGR_MISCSTAT_L3NOCDBGTIMEOUT_MSB        16
/* The width in bits of the ALT_RSTMGR_MISCSTAT_L3NOCDBGTIMEOUT register field. */
#define ALT_RSTMGR_MISCSTAT_L3NOCDBGTIMEOUT_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MISCSTAT_L3NOCDBGTIMEOUT register field value. */
#define ALT_RSTMGR_MISCSTAT_L3NOCDBGTIMEOUT_SET_MSK    0x00010000
/* The mask used to clear the ALT_RSTMGR_MISCSTAT_L3NOCDBGTIMEOUT register field value. */
#define ALT_RSTMGR_MISCSTAT_L3NOCDBGTIMEOUT_CLR_MSK    0xfffeffff
/* The reset value of the ALT_RSTMGR_MISCSTAT_L3NOCDBGTIMEOUT register field. */
#define ALT_RSTMGR_MISCSTAT_L3NOCDBGTIMEOUT_RESET      0x0
/* Extracts the ALT_RSTMGR_MISCSTAT_L3NOCDBGTIMEOUT field value from a register. */
#define ALT_RSTMGR_MISCSTAT_L3NOCDBGTIMEOUT_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_RSTMGR_MISCSTAT_L3NOCDBGTIMEOUT register field value suitable for setting the register. */
#define ALT_RSTMGR_MISCSTAT_L3NOCDBGTIMEOUT_SET(value) (((value) << 16) & 0x00010000)

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
 * The struct declaration for register ALT_RSTMGR_MISCSTAT.
 */
struct ALT_RSTMGR_MISCSTAT_s
{
    volatile uint32_t  sdrselfreftimeout :  1;  /* SDRAM Self-Refresh Timeout */
    uint32_t                             :  1;  /* *UNDEFINED* */
    volatile uint32_t  fpgahstimeout     :  1;  /* FPGA Handshake Timeout */
    volatile uint32_t  etrstalltimeout   :  1;  /* ETR Stall Timeout */
    uint32_t                             :  4;  /* *UNDEFINED* */
    volatile uint32_t  mpul2flushtimeout :  1;  /* L2 Flush Handshake Timeout */
    uint32_t                             :  7;  /* *UNDEFINED* */
    volatile uint32_t  l3nocdbgtimeout   :  1;  /* L3 NOC Handshake Timeout */
    uint32_t                             : 15;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_MISCSTAT. */
typedef struct ALT_RSTMGR_MISCSTAT_s  ALT_RSTMGR_MISCSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_MISCSTAT register. */
#define ALT_RSTMGR_MISCSTAT_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_MISCSTAT register from the beginning of the component. */
#define ALT_RSTMGR_MISCSTAT_OFST        0x8

/*
 * Register : Handshake Enable - hdsken
 * 
 * This register allows software to control whether or not to perform a handshake
 * with certain peripherals before issuing a reset. These bits are cleared on a
 * cold reset. If these bits are not set, writing to the "hdskreq" register to
 * request a software-triggered handshake will not perform the handshake.
 * 
 * If the peripheral is being held in reset, then the handshake will be skipped,
 * regardless of whether the handshake enable bit is set or not.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                 
 * :--------|:-------|:------|:---------------------------------------------
 *  [0]     | RW     | 0x0   | SDRAM Self-Refresh Enable                   
 *  [1]     | ???    | 0x0   | *UNDEFINED*                                 
 *  [2]     | RW     | 0x0   | FPGA Handshake Enable                       
 *  [3]     | RW     | 0x0   | ETR (Embedded Trace Router) Handshake Enable
 *  [7:4]   | ???    | 0x0   | *UNDEFINED*                                 
 *  [8]     | RW     | 0x0   | L2 Flush Enable                             
 *  [15:9]  | ???    | 0x0   | *UNDEFINED*                                 
 *  [16]    | RW     | 0x0   | ALT_RSTMGR_HDSKEN_L3NOC_DBG                 
 *  [17]    | RW     | 0x0   | ALT_RSTMGR_HDSKEN_DEBUG_L3NOC               
 *  [31:18] | ???    | 0x0   | *UNDEFINED*                                 
 * 
 */
/*
 * Field : SDRAM Self-Refresh Enable - sdrselfrefen
 * 
 * This field controls whether to perform handshake with the SDRAM memory interface
 * before issuing a reset. If set to 1, the Reset Manager makes a request to the
 * SDRAM memory interface before issuing a reset. If set to 0, the handshake is not
 * performed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HDSKEN_SDRSELFREFEN register field. */
#define ALT_RSTMGR_HDSKEN_SDRSELFREFEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HDSKEN_SDRSELFREFEN register field. */
#define ALT_RSTMGR_HDSKEN_SDRSELFREFEN_MSB        0
/* The width in bits of the ALT_RSTMGR_HDSKEN_SDRSELFREFEN register field. */
#define ALT_RSTMGR_HDSKEN_SDRSELFREFEN_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HDSKEN_SDRSELFREFEN register field value. */
#define ALT_RSTMGR_HDSKEN_SDRSELFREFEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_HDSKEN_SDRSELFREFEN register field value. */
#define ALT_RSTMGR_HDSKEN_SDRSELFREFEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_HDSKEN_SDRSELFREFEN register field. */
#define ALT_RSTMGR_HDSKEN_SDRSELFREFEN_RESET      0x0
/* Extracts the ALT_RSTMGR_HDSKEN_SDRSELFREFEN field value from a register. */
#define ALT_RSTMGR_HDSKEN_SDRSELFREFEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_HDSKEN_SDRSELFREFEN register field value suitable for setting the register. */
#define ALT_RSTMGR_HDSKEN_SDRSELFREFEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : FPGA Handshake Enable - fpgahsen
 * 
 * This field controls whether to perform handshake with FPGA before issuing a
 * reset. If set to 1, the Reset Manager makes a request to the FPGA before issuing
 * a reset. If set to 0, the handshake is not performed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HDSKEN_FPGAHSEN register field. */
#define ALT_RSTMGR_HDSKEN_FPGAHSEN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HDSKEN_FPGAHSEN register field. */
#define ALT_RSTMGR_HDSKEN_FPGAHSEN_MSB        2
/* The width in bits of the ALT_RSTMGR_HDSKEN_FPGAHSEN register field. */
#define ALT_RSTMGR_HDSKEN_FPGAHSEN_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HDSKEN_FPGAHSEN register field value. */
#define ALT_RSTMGR_HDSKEN_FPGAHSEN_SET_MSK    0x00000004
/* The mask used to clear the ALT_RSTMGR_HDSKEN_FPGAHSEN register field value. */
#define ALT_RSTMGR_HDSKEN_FPGAHSEN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_RSTMGR_HDSKEN_FPGAHSEN register field. */
#define ALT_RSTMGR_HDSKEN_FPGAHSEN_RESET      0x0
/* Extracts the ALT_RSTMGR_HDSKEN_FPGAHSEN field value from a register. */
#define ALT_RSTMGR_HDSKEN_FPGAHSEN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_RSTMGR_HDSKEN_FPGAHSEN register field value suitable for setting the register. */
#define ALT_RSTMGR_HDSKEN_FPGAHSEN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : ETR (Embedded Trace Router) Handshake Enable - etrstallen
 * 
 * Software writes this field 1 to request to the ETR that it stalls its AXI master
 * to the L3 Interconnect.
 * 
 * This field controls whether the hardware should perform a handhshake with the
 * ETR before issuing a reset. If set to 1, the Reset Manager handshakes with the
 * ETR.  If set to 0, the handshake is not performed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HDSKEN_ETRSTALLEN register field. */
#define ALT_RSTMGR_HDSKEN_ETRSTALLEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HDSKEN_ETRSTALLEN register field. */
#define ALT_RSTMGR_HDSKEN_ETRSTALLEN_MSB        3
/* The width in bits of the ALT_RSTMGR_HDSKEN_ETRSTALLEN register field. */
#define ALT_RSTMGR_HDSKEN_ETRSTALLEN_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HDSKEN_ETRSTALLEN register field value. */
#define ALT_RSTMGR_HDSKEN_ETRSTALLEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_RSTMGR_HDSKEN_ETRSTALLEN register field value. */
#define ALT_RSTMGR_HDSKEN_ETRSTALLEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_RSTMGR_HDSKEN_ETRSTALLEN register field. */
#define ALT_RSTMGR_HDSKEN_ETRSTALLEN_RESET      0x0
/* Extracts the ALT_RSTMGR_HDSKEN_ETRSTALLEN field value from a register. */
#define ALT_RSTMGR_HDSKEN_ETRSTALLEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_RSTMGR_HDSKEN_ETRSTALLEN register field value suitable for setting the register. */
#define ALT_RSTMGR_HDSKEN_ETRSTALLEN_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : L2 Flush Enable - l2flushen
 * 
 * This field controls whether the L2 cache should be flushed before the L2 cache
 * is reset by a watchdog reset or a software-requested L2 cache reset.
 * 
 * If bit to 1, the Reset Manager makes a request to the MPU to perform L2 flush
 * before performing ETR/HMC/FPGA handshakes. If bit to 0, the L2 Flush is not
 * performed. L2 Flush is not performed as a part of warm reset sequence.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HDSKEN_L2FLUSHEN register field. */
#define ALT_RSTMGR_HDSKEN_L2FLUSHEN_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HDSKEN_L2FLUSHEN register field. */
#define ALT_RSTMGR_HDSKEN_L2FLUSHEN_MSB        8
/* The width in bits of the ALT_RSTMGR_HDSKEN_L2FLUSHEN register field. */
#define ALT_RSTMGR_HDSKEN_L2FLUSHEN_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HDSKEN_L2FLUSHEN register field value. */
#define ALT_RSTMGR_HDSKEN_L2FLUSHEN_SET_MSK    0x00000100
/* The mask used to clear the ALT_RSTMGR_HDSKEN_L2FLUSHEN register field value. */
#define ALT_RSTMGR_HDSKEN_L2FLUSHEN_CLR_MSK    0xfffffeff
/* The reset value of the ALT_RSTMGR_HDSKEN_L2FLUSHEN register field. */
#define ALT_RSTMGR_HDSKEN_L2FLUSHEN_RESET      0x0
/* Extracts the ALT_RSTMGR_HDSKEN_L2FLUSHEN field value from a register. */
#define ALT_RSTMGR_HDSKEN_L2FLUSHEN_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_RSTMGR_HDSKEN_L2FLUSHEN register field value suitable for setting the register. */
#define ALT_RSTMGR_HDSKEN_L2FLUSHEN_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : l3noc_dbg
 * 
 * This field controls whether to perform handshake with L3 NOC before issuing a
 * reset. If set to 1, the Reset Manager makes a request to the L3 NOC before
 * issuing a reset. If set to 0, the handshake is not performed.
 * 
 * This handshake is performed when NOC is getting reset but debug and dap are not
 * getting reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HDSKEN_L3NOC_DBG register field. */
#define ALT_RSTMGR_HDSKEN_L3NOC_DBG_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HDSKEN_L3NOC_DBG register field. */
#define ALT_RSTMGR_HDSKEN_L3NOC_DBG_MSB        16
/* The width in bits of the ALT_RSTMGR_HDSKEN_L3NOC_DBG register field. */
#define ALT_RSTMGR_HDSKEN_L3NOC_DBG_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HDSKEN_L3NOC_DBG register field value. */
#define ALT_RSTMGR_HDSKEN_L3NOC_DBG_SET_MSK    0x00010000
/* The mask used to clear the ALT_RSTMGR_HDSKEN_L3NOC_DBG register field value. */
#define ALT_RSTMGR_HDSKEN_L3NOC_DBG_CLR_MSK    0xfffeffff
/* The reset value of the ALT_RSTMGR_HDSKEN_L3NOC_DBG register field. */
#define ALT_RSTMGR_HDSKEN_L3NOC_DBG_RESET      0x0
/* Extracts the ALT_RSTMGR_HDSKEN_L3NOC_DBG field value from a register. */
#define ALT_RSTMGR_HDSKEN_L3NOC_DBG_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_RSTMGR_HDSKEN_L3NOC_DBG register field value suitable for setting the register. */
#define ALT_RSTMGR_HDSKEN_L3NOC_DBG_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : debug_l3noc
 * 
 * This field controls whether to perform handshake with L3 NOC before asserting
 * the csdap_rst or/and dbg_rst. If set to 1, the Reset Manager makes a request to
 * the L3 NOC before issuing a reset. If set to 0, the handshake is not performed.
 * 
 * This handshake is performed when CS DAP or/and DBG is getting reset but NOC is
 * not getting reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HDSKEN_DEBUG_L3NOC register field. */
#define ALT_RSTMGR_HDSKEN_DEBUG_L3NOC_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HDSKEN_DEBUG_L3NOC register field. */
#define ALT_RSTMGR_HDSKEN_DEBUG_L3NOC_MSB        17
/* The width in bits of the ALT_RSTMGR_HDSKEN_DEBUG_L3NOC register field. */
#define ALT_RSTMGR_HDSKEN_DEBUG_L3NOC_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HDSKEN_DEBUG_L3NOC register field value. */
#define ALT_RSTMGR_HDSKEN_DEBUG_L3NOC_SET_MSK    0x00020000
/* The mask used to clear the ALT_RSTMGR_HDSKEN_DEBUG_L3NOC register field value. */
#define ALT_RSTMGR_HDSKEN_DEBUG_L3NOC_CLR_MSK    0xfffdffff
/* The reset value of the ALT_RSTMGR_HDSKEN_DEBUG_L3NOC register field. */
#define ALT_RSTMGR_HDSKEN_DEBUG_L3NOC_RESET      0x0
/* Extracts the ALT_RSTMGR_HDSKEN_DEBUG_L3NOC field value from a register. */
#define ALT_RSTMGR_HDSKEN_DEBUG_L3NOC_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_RSTMGR_HDSKEN_DEBUG_L3NOC register field value suitable for setting the register. */
#define ALT_RSTMGR_HDSKEN_DEBUG_L3NOC_SET(value) (((value) << 17) & 0x00020000)

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
 * The struct declaration for register ALT_RSTMGR_HDSKEN.
 */
struct ALT_RSTMGR_HDSKEN_s
{
    volatile uint32_t  sdrselfrefen :  1;  /* SDRAM Self-Refresh Enable */
    uint32_t                        :  1;  /* *UNDEFINED* */
    volatile uint32_t  fpgahsen     :  1;  /* FPGA Handshake Enable */
    volatile uint32_t  etrstallen   :  1;  /* ETR (Embedded Trace Router) Handshake Enable */
    uint32_t                        :  4;  /* *UNDEFINED* */
    volatile uint32_t  l2flushen    :  1;  /* L2 Flush Enable */
    uint32_t                        :  7;  /* *UNDEFINED* */
    volatile uint32_t  l3noc_dbg    :  1;  /* ALT_RSTMGR_HDSKEN_L3NOC_DBG */
    volatile uint32_t  debug_l3noc  :  1;  /* ALT_RSTMGR_HDSKEN_DEBUG_L3NOC */
    uint32_t                        : 14;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_HDSKEN. */
typedef struct ALT_RSTMGR_HDSKEN_s  ALT_RSTMGR_HDSKEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_HDSKEN register. */
#define ALT_RSTMGR_HDSKEN_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_HDSKEN register from the beginning of the component. */
#define ALT_RSTMGR_HDSKEN_OFST        0x10

/*
 * Register : Handshake Request Register - hdskreq
 * 
 * This register includes fields for software to initiate the handshake with
 * certain peripherals. Software must clear the request bit except for
 * "debug_l3noc_req" once it sees the corresponding acknowledge bit has been set in
 * the hdskack register. "debug_l3noc_req" is cleared by hardware once the
 * corresponding dbg_rst or csdap_rst is/are asserted. Software should implement
 * its own timeout.
 * 
 * Fields are reset by a cold reset. It is recommended that software should clear
 * this bit on every warm reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                              
 * :-------|:-------|:------|:------------------------------------------
 *  [0]    | RW     | 0x0   | SDRAM Self-Refresh Request               
 *  [1]    | ???    | 0x0   | *UNDEFINED*                              
 *  [2]    | RW     | 0x0   | FPGA Handshake Request                   
 *  [3]    | RW     | 0x0   | ETR (Embedded Trace Router) Stall Request
 *  [4]    | RW     | 0x0   | ALT_RSTMGR_HDSKREQ_L3NOC_DBG_REQ         
 *  [5]    | RW     | 0x0   | ALT_RSTMGR_HDSKREQ_DEBUG_L3NOC_REQ       
 *  [31:6] | ???    | 0x0   | *UNDEFINED*                              
 * 
 */
/*
 * Field : SDRAM Self-Refresh Request - sdrselfrefreq
 * 
 * Software writes this field 1 to request that the SDRAM Controller Subsystem to
 * stop accepting any new transactions and allows all outstanding transactions to
 * drain.
 * 
 * Software waits for the SDRSELFREFACK to be 1 and then writes this field to 0.
 * Note that it is possible for the SDRAM Controller Subsystem to never assert
 * SDRSELFREFACK so software should timeout if SDRSELFREFACK is never asserted.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HDSKREQ_SDRSELFREFREQ register field. */
#define ALT_RSTMGR_HDSKREQ_SDRSELFREFREQ_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HDSKREQ_SDRSELFREFREQ register field. */
#define ALT_RSTMGR_HDSKREQ_SDRSELFREFREQ_MSB        0
/* The width in bits of the ALT_RSTMGR_HDSKREQ_SDRSELFREFREQ register field. */
#define ALT_RSTMGR_HDSKREQ_SDRSELFREFREQ_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HDSKREQ_SDRSELFREFREQ register field value. */
#define ALT_RSTMGR_HDSKREQ_SDRSELFREFREQ_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_HDSKREQ_SDRSELFREFREQ register field value. */
#define ALT_RSTMGR_HDSKREQ_SDRSELFREFREQ_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_HDSKREQ_SDRSELFREFREQ register field. */
#define ALT_RSTMGR_HDSKREQ_SDRSELFREFREQ_RESET      0x0
/* Extracts the ALT_RSTMGR_HDSKREQ_SDRSELFREFREQ field value from a register. */
#define ALT_RSTMGR_HDSKREQ_SDRSELFREFREQ_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_HDSKREQ_SDRSELFREFREQ register field value suitable for setting the register. */
#define ALT_RSTMGR_HDSKREQ_SDRSELFREFREQ_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : FPGA Handshake Request - fpgahsreq
 * 
 * Software writes this field 1 to initiate a handshake request to FPGA. Software
 * waits for the FPGAHSACK to be active and then writes this field to 0. Note that
 * it is possible for the FPGA to never assert FPGAHSACK so software should timeout
 * in this case.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HDSKREQ_FPGAHSREQ register field. */
#define ALT_RSTMGR_HDSKREQ_FPGAHSREQ_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HDSKREQ_FPGAHSREQ register field. */
#define ALT_RSTMGR_HDSKREQ_FPGAHSREQ_MSB        2
/* The width in bits of the ALT_RSTMGR_HDSKREQ_FPGAHSREQ register field. */
#define ALT_RSTMGR_HDSKREQ_FPGAHSREQ_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HDSKREQ_FPGAHSREQ register field value. */
#define ALT_RSTMGR_HDSKREQ_FPGAHSREQ_SET_MSK    0x00000004
/* The mask used to clear the ALT_RSTMGR_HDSKREQ_FPGAHSREQ register field value. */
#define ALT_RSTMGR_HDSKREQ_FPGAHSREQ_CLR_MSK    0xfffffffb
/* The reset value of the ALT_RSTMGR_HDSKREQ_FPGAHSREQ register field. */
#define ALT_RSTMGR_HDSKREQ_FPGAHSREQ_RESET      0x0
/* Extracts the ALT_RSTMGR_HDSKREQ_FPGAHSREQ field value from a register. */
#define ALT_RSTMGR_HDSKREQ_FPGAHSREQ_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_RSTMGR_HDSKREQ_FPGAHSREQ register field value suitable for setting the register. */
#define ALT_RSTMGR_HDSKREQ_FPGAHSREQ_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : ETR (Embedded Trace Router) Stall Request - etrstallreq
 * 
 * Software sets bit field to 1 to ask the ETR to that stall its AXI master to the
 * L3 Interconnect.
 * 
 * Software waits for the ETRSTALLACK to be 1 and then writes this field to 0. Note
 * that it is possible for the ETR to never assert ETRSTALLACK so software should
 * timeout if ETRSTALLACK is never asserted.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HDSKREQ_ETRSTALLREQ register field. */
#define ALT_RSTMGR_HDSKREQ_ETRSTALLREQ_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HDSKREQ_ETRSTALLREQ register field. */
#define ALT_RSTMGR_HDSKREQ_ETRSTALLREQ_MSB        3
/* The width in bits of the ALT_RSTMGR_HDSKREQ_ETRSTALLREQ register field. */
#define ALT_RSTMGR_HDSKREQ_ETRSTALLREQ_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HDSKREQ_ETRSTALLREQ register field value. */
#define ALT_RSTMGR_HDSKREQ_ETRSTALLREQ_SET_MSK    0x00000008
/* The mask used to clear the ALT_RSTMGR_HDSKREQ_ETRSTALLREQ register field value. */
#define ALT_RSTMGR_HDSKREQ_ETRSTALLREQ_CLR_MSK    0xfffffff7
/* The reset value of the ALT_RSTMGR_HDSKREQ_ETRSTALLREQ register field. */
#define ALT_RSTMGR_HDSKREQ_ETRSTALLREQ_RESET      0x0
/* Extracts the ALT_RSTMGR_HDSKREQ_ETRSTALLREQ field value from a register. */
#define ALT_RSTMGR_HDSKREQ_ETRSTALLREQ_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_RSTMGR_HDSKREQ_ETRSTALLREQ register field value suitable for setting the register. */
#define ALT_RSTMGR_HDSKREQ_ETRSTALLREQ_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : l3noc_dbg_req
 * 
 * Software writes this field 1 to initiate a handshake request to L3 NOC. This
 * handshake is done to stop L3NOC accept any new transactions and allow all
 * outstanding transactions to drain. Software waits for the L3NOC_DBG_ACK to be
 * active and then writes this field to 0. Note that it is possible for the L3NOC
 * to never assert L3NOC_DBG_ACK so software should timeout in this case.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HDSKREQ_L3NOC_DBG_REQ register field. */
#define ALT_RSTMGR_HDSKREQ_L3NOC_DBG_REQ_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HDSKREQ_L3NOC_DBG_REQ register field. */
#define ALT_RSTMGR_HDSKREQ_L3NOC_DBG_REQ_MSB        4
/* The width in bits of the ALT_RSTMGR_HDSKREQ_L3NOC_DBG_REQ register field. */
#define ALT_RSTMGR_HDSKREQ_L3NOC_DBG_REQ_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HDSKREQ_L3NOC_DBG_REQ register field value. */
#define ALT_RSTMGR_HDSKREQ_L3NOC_DBG_REQ_SET_MSK    0x00000010
/* The mask used to clear the ALT_RSTMGR_HDSKREQ_L3NOC_DBG_REQ register field value. */
#define ALT_RSTMGR_HDSKREQ_L3NOC_DBG_REQ_CLR_MSK    0xffffffef
/* The reset value of the ALT_RSTMGR_HDSKREQ_L3NOC_DBG_REQ register field. */
#define ALT_RSTMGR_HDSKREQ_L3NOC_DBG_REQ_RESET      0x0
/* Extracts the ALT_RSTMGR_HDSKREQ_L3NOC_DBG_REQ field value from a register. */
#define ALT_RSTMGR_HDSKREQ_L3NOC_DBG_REQ_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_RSTMGR_HDSKREQ_L3NOC_DBG_REQ register field value suitable for setting the register. */
#define ALT_RSTMGR_HDSKREQ_L3NOC_DBG_REQ_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : debug_l3noc_req
 * 
 * Software writes this field 1 to initiate a handshake request to L3 NOC. This
 * handshake is done to stop L3NOC accept any new transactions and allow all
 * outstanding transactions to drain.
 * 
 * Hardware clears the request bit when dbg_rst or csdap_rst or both are asserted
 * by SW by writing to the dbgmodrst register. Note that it is possible for the
 * L3NOC to never assert DEBUG_L3NOC_ACK so software should timeout in this case.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HDSKREQ_DEBUG_L3NOC_REQ register field. */
#define ALT_RSTMGR_HDSKREQ_DEBUG_L3NOC_REQ_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HDSKREQ_DEBUG_L3NOC_REQ register field. */
#define ALT_RSTMGR_HDSKREQ_DEBUG_L3NOC_REQ_MSB        5
/* The width in bits of the ALT_RSTMGR_HDSKREQ_DEBUG_L3NOC_REQ register field. */
#define ALT_RSTMGR_HDSKREQ_DEBUG_L3NOC_REQ_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HDSKREQ_DEBUG_L3NOC_REQ register field value. */
#define ALT_RSTMGR_HDSKREQ_DEBUG_L3NOC_REQ_SET_MSK    0x00000020
/* The mask used to clear the ALT_RSTMGR_HDSKREQ_DEBUG_L3NOC_REQ register field value. */
#define ALT_RSTMGR_HDSKREQ_DEBUG_L3NOC_REQ_CLR_MSK    0xffffffdf
/* The reset value of the ALT_RSTMGR_HDSKREQ_DEBUG_L3NOC_REQ register field. */
#define ALT_RSTMGR_HDSKREQ_DEBUG_L3NOC_REQ_RESET      0x0
/* Extracts the ALT_RSTMGR_HDSKREQ_DEBUG_L3NOC_REQ field value from a register. */
#define ALT_RSTMGR_HDSKREQ_DEBUG_L3NOC_REQ_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_RSTMGR_HDSKREQ_DEBUG_L3NOC_REQ register field value suitable for setting the register. */
#define ALT_RSTMGR_HDSKREQ_DEBUG_L3NOC_REQ_SET(value) (((value) << 5) & 0x00000020)

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
 * The struct declaration for register ALT_RSTMGR_HDSKREQ.
 */
struct ALT_RSTMGR_HDSKREQ_s
{
    volatile uint32_t  sdrselfrefreq   :  1;  /* SDRAM Self-Refresh Request */
    uint32_t                           :  1;  /* *UNDEFINED* */
    volatile uint32_t  fpgahsreq       :  1;  /* FPGA Handshake Request */
    volatile uint32_t  etrstallreq     :  1;  /* ETR (Embedded Trace Router) Stall Request */
    volatile uint32_t  l3noc_dbg_req   :  1;  /* ALT_RSTMGR_HDSKREQ_L3NOC_DBG_REQ */
    volatile uint32_t  debug_l3noc_req :  1;  /* ALT_RSTMGR_HDSKREQ_DEBUG_L3NOC_REQ */
    uint32_t                           : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_HDSKREQ. */
typedef struct ALT_RSTMGR_HDSKREQ_s  ALT_RSTMGR_HDSKREQ_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_HDSKREQ register. */
#define ALT_RSTMGR_HDSKREQ_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_HDSKREQ register from the beginning of the component. */
#define ALT_RSTMGR_HDSKREQ_OFST        0x14

/*
 * Register : Handshake Acknowledge Register - hdskack
 * 
 * This register includes fields for software to detect the completion of the
 * handshake with certain peripherals. Once the peripheral has completed the
 * handshake, it will set the appropriate bit in this register. Once software has
 * detected that the acknowledge bit is set, it must clear the corresponding
 * request bit in the HDSREQ register.
 * 
 * Software writes 1 to the corresponding bits to clear them.
 * 
 * Fields are reset by a cold reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                  
 * :-------|:-------|:------|:----------------------------------------------
 *  [0]    | RW     | 0x0   | SDRAM Self-Refresh Acknowledge               
 *  [1]    | ???    | 0x0   | *UNDEFINED*                                  
 *  [2]    | RW     | 0x0   | FPGA Handshake Acknowledge                   
 *  [3]    | RW     | 0x0   | ETR (Embedded Trace Router) Stall Acknowledge
 *  [4]    | RW     | 0x0   | ALT_RSTMGR_HDSKACK_L3NOC_DBG_ACK             
 *  [5]    | RW     | 0x0   | ALT_RSTMGR_HDSKACK_DEBUG_L3NOC_ACK           
 *  [31:6] | ???    | 0x0   | *UNDEFINED*                                  
 * 
 */
/*
 * Field : SDRAM Self-Refresh Acknowledge - sdrselfreqack
 * 
 * This is the acknowledge that SDRAM handshake acknowledge has been received by
 * Reset Manager. A 1 indicates that the SDRAM Controller Subsystem has
 * acknowledged the handshake request.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HDSKACK_SDRSELFREQACK register field. */
#define ALT_RSTMGR_HDSKACK_SDRSELFREQACK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HDSKACK_SDRSELFREQACK register field. */
#define ALT_RSTMGR_HDSKACK_SDRSELFREQACK_MSB        0
/* The width in bits of the ALT_RSTMGR_HDSKACK_SDRSELFREQACK register field. */
#define ALT_RSTMGR_HDSKACK_SDRSELFREQACK_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HDSKACK_SDRSELFREQACK register field value. */
#define ALT_RSTMGR_HDSKACK_SDRSELFREQACK_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_HDSKACK_SDRSELFREQACK register field value. */
#define ALT_RSTMGR_HDSKACK_SDRSELFREQACK_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_HDSKACK_SDRSELFREQACK register field. */
#define ALT_RSTMGR_HDSKACK_SDRSELFREQACK_RESET      0x0
/* Extracts the ALT_RSTMGR_HDSKACK_SDRSELFREQACK field value from a register. */
#define ALT_RSTMGR_HDSKACK_SDRSELFREQACK_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_HDSKACK_SDRSELFREQACK register field value suitable for setting the register. */
#define ALT_RSTMGR_HDSKACK_SDRSELFREQACK_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : FPGA Handshake Acknowledge - fpgahsack
 * 
 * This is the acknowledge that the FPGA handshake acknowledge has been received by
 * Reset Manager. A 1 indicates that the FPGA has acknowledged the handshake
 * request.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HDSKACK_FPGAHSACK register field. */
#define ALT_RSTMGR_HDSKACK_FPGAHSACK_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HDSKACK_FPGAHSACK register field. */
#define ALT_RSTMGR_HDSKACK_FPGAHSACK_MSB        2
/* The width in bits of the ALT_RSTMGR_HDSKACK_FPGAHSACK register field. */
#define ALT_RSTMGR_HDSKACK_FPGAHSACK_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HDSKACK_FPGAHSACK register field value. */
#define ALT_RSTMGR_HDSKACK_FPGAHSACK_SET_MSK    0x00000004
/* The mask used to clear the ALT_RSTMGR_HDSKACK_FPGAHSACK register field value. */
#define ALT_RSTMGR_HDSKACK_FPGAHSACK_CLR_MSK    0xfffffffb
/* The reset value of the ALT_RSTMGR_HDSKACK_FPGAHSACK register field. */
#define ALT_RSTMGR_HDSKACK_FPGAHSACK_RESET      0x0
/* Extracts the ALT_RSTMGR_HDSKACK_FPGAHSACK field value from a register. */
#define ALT_RSTMGR_HDSKACK_FPGAHSACK_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_RSTMGR_HDSKACK_FPGAHSACK register field value suitable for setting the register. */
#define ALT_RSTMGR_HDSKACK_FPGAHSACK_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : ETR (Embedded Trace Router) Stall Acknowledge - etrstallack
 * 
 * This is the acknowlege for a ETR AXI master stall initiated as a part of the ETR
 * handshake.  A 1 indicates that the ETR has stalled its AXI master.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HDSKACK_ETRSTALLACK register field. */
#define ALT_RSTMGR_HDSKACK_ETRSTALLACK_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HDSKACK_ETRSTALLACK register field. */
#define ALT_RSTMGR_HDSKACK_ETRSTALLACK_MSB        3
/* The width in bits of the ALT_RSTMGR_HDSKACK_ETRSTALLACK register field. */
#define ALT_RSTMGR_HDSKACK_ETRSTALLACK_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HDSKACK_ETRSTALLACK register field value. */
#define ALT_RSTMGR_HDSKACK_ETRSTALLACK_SET_MSK    0x00000008
/* The mask used to clear the ALT_RSTMGR_HDSKACK_ETRSTALLACK register field value. */
#define ALT_RSTMGR_HDSKACK_ETRSTALLACK_CLR_MSK    0xfffffff7
/* The reset value of the ALT_RSTMGR_HDSKACK_ETRSTALLACK register field. */
#define ALT_RSTMGR_HDSKACK_ETRSTALLACK_RESET      0x0
/* Extracts the ALT_RSTMGR_HDSKACK_ETRSTALLACK field value from a register. */
#define ALT_RSTMGR_HDSKACK_ETRSTALLACK_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_RSTMGR_HDSKACK_ETRSTALLACK register field value suitable for setting the register. */
#define ALT_RSTMGR_HDSKACK_ETRSTALLACK_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : l3noc_dbg_ack
 * 
 * This field indicates that L3NOC handshake acknowledge has been received by Reset
 * Manager. A 1 indicates that the L3NOC has acknowledged the handshake request.
 * 
 * The handshake is initiated with L3NOC as a part of warm/watchdog reset assertion
 * sequence or  handshake request initiated by the L3NOC_DBG_REQ field. This
 * handshake is done to stop L3NOC from accepting any new transactions and allow
 * all outstanding transactions to drain.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HDSKACK_L3NOC_DBG_ACK register field. */
#define ALT_RSTMGR_HDSKACK_L3NOC_DBG_ACK_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HDSKACK_L3NOC_DBG_ACK register field. */
#define ALT_RSTMGR_HDSKACK_L3NOC_DBG_ACK_MSB        4
/* The width in bits of the ALT_RSTMGR_HDSKACK_L3NOC_DBG_ACK register field. */
#define ALT_RSTMGR_HDSKACK_L3NOC_DBG_ACK_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HDSKACK_L3NOC_DBG_ACK register field value. */
#define ALT_RSTMGR_HDSKACK_L3NOC_DBG_ACK_SET_MSK    0x00000010
/* The mask used to clear the ALT_RSTMGR_HDSKACK_L3NOC_DBG_ACK register field value. */
#define ALT_RSTMGR_HDSKACK_L3NOC_DBG_ACK_CLR_MSK    0xffffffef
/* The reset value of the ALT_RSTMGR_HDSKACK_L3NOC_DBG_ACK register field. */
#define ALT_RSTMGR_HDSKACK_L3NOC_DBG_ACK_RESET      0x0
/* Extracts the ALT_RSTMGR_HDSKACK_L3NOC_DBG_ACK field value from a register. */
#define ALT_RSTMGR_HDSKACK_L3NOC_DBG_ACK_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_RSTMGR_HDSKACK_L3NOC_DBG_ACK register field value suitable for setting the register. */
#define ALT_RSTMGR_HDSKACK_L3NOC_DBG_ACK_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : debug_l3noc_ack
 * 
 * This field indicates that L3NOC handshake acknowledge has been received by Reset
 * Manager. A 1 indicates that the L3NOC has acknowledged the handshake request.
 * 
 * The handshake is initiated with L3NOC as a part of handshake request initiated
 * by the DEBUG_L3NOC_REQ field. This handshake is done to stop L3NOC from
 * accepting any new transactions and allow all outstanding transactions to drain.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HDSKACK_DEBUG_L3NOC_ACK register field. */
#define ALT_RSTMGR_HDSKACK_DEBUG_L3NOC_ACK_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HDSKACK_DEBUG_L3NOC_ACK register field. */
#define ALT_RSTMGR_HDSKACK_DEBUG_L3NOC_ACK_MSB        5
/* The width in bits of the ALT_RSTMGR_HDSKACK_DEBUG_L3NOC_ACK register field. */
#define ALT_RSTMGR_HDSKACK_DEBUG_L3NOC_ACK_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HDSKACK_DEBUG_L3NOC_ACK register field value. */
#define ALT_RSTMGR_HDSKACK_DEBUG_L3NOC_ACK_SET_MSK    0x00000020
/* The mask used to clear the ALT_RSTMGR_HDSKACK_DEBUG_L3NOC_ACK register field value. */
#define ALT_RSTMGR_HDSKACK_DEBUG_L3NOC_ACK_CLR_MSK    0xffffffdf
/* The reset value of the ALT_RSTMGR_HDSKACK_DEBUG_L3NOC_ACK register field. */
#define ALT_RSTMGR_HDSKACK_DEBUG_L3NOC_ACK_RESET      0x0
/* Extracts the ALT_RSTMGR_HDSKACK_DEBUG_L3NOC_ACK field value from a register. */
#define ALT_RSTMGR_HDSKACK_DEBUG_L3NOC_ACK_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_RSTMGR_HDSKACK_DEBUG_L3NOC_ACK register field value suitable for setting the register. */
#define ALT_RSTMGR_HDSKACK_DEBUG_L3NOC_ACK_SET(value) (((value) << 5) & 0x00000020)

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
 * The struct declaration for register ALT_RSTMGR_HDSKACK.
 */
struct ALT_RSTMGR_HDSKACK_s
{
    volatile uint32_t  sdrselfreqack   :  1;  /* SDRAM Self-Refresh Acknowledge */
    uint32_t                           :  1;  /* *UNDEFINED* */
    volatile uint32_t  fpgahsack       :  1;  /* FPGA Handshake Acknowledge */
    volatile uint32_t  etrstallack     :  1;  /* ETR (Embedded Trace Router) Stall Acknowledge */
    volatile uint32_t  l3noc_dbg_ack   :  1;  /* ALT_RSTMGR_HDSKACK_L3NOC_DBG_ACK */
    volatile uint32_t  debug_l3noc_ack :  1;  /* ALT_RSTMGR_HDSKACK_DEBUG_L3NOC_ACK */
    uint32_t                           : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_HDSKACK. */
typedef struct ALT_RSTMGR_HDSKACK_s  ALT_RSTMGR_HDSKACK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_HDSKACK register. */
#define ALT_RSTMGR_HDSKACK_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_HDSKACK register from the beginning of the component. */
#define ALT_RSTMGR_HDSKACK_OFST        0x18

/*
 * Register : ETR Stall Status Register - hdskstall
 * 
 * This register keeps the ETR stalled after a warm/watchdog reset occurs. If the
 * ETR handshake is enabled in the bit field ETRSTALLEN of HDSKEN register, then
 * the hardware will perform a handshake with the ETR before asserting a warm or
 * watchdog reset. When the reset is complete, the hardware will keep the request
 * signal to the ETR asserted to continue to stall it until software clears the
 * HSDKSTALL register bit.
 * 
 * Field is reset by a cold reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                  
 * :-------|:-------|:------|:----------------------------------------------
 *  [0]    | RW     | 0x0   | ETR (Embedded Trace Router) Stall After Reset
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                                  
 * 
 */
/*
 * Field : ETR (Embedded Trace Router) Stall After Reset - etrstallwarmrst
 * 
 * If ETRSTALLEN bit field is 1 and Reset manager generates the handshake request
 * to ETR, hardware sets this bit to 1 to indicate that the stall of the ETR AXI
 * master. Hardware leaves the ETR stalled after a warm or watchdog reset until
 * software clears this field by writing it with 1. Software must only clear this
 * field when it is ready to have the ETR AXI master start making AXI requests to
 * write trace data.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HDSKSTALL_ETRSTALLWARMRST register field. */
#define ALT_RSTMGR_HDSKSTALL_ETRSTALLWARMRST_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HDSKSTALL_ETRSTALLWARMRST register field. */
#define ALT_RSTMGR_HDSKSTALL_ETRSTALLWARMRST_MSB        0
/* The width in bits of the ALT_RSTMGR_HDSKSTALL_ETRSTALLWARMRST register field. */
#define ALT_RSTMGR_HDSKSTALL_ETRSTALLWARMRST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HDSKSTALL_ETRSTALLWARMRST register field value. */
#define ALT_RSTMGR_HDSKSTALL_ETRSTALLWARMRST_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_HDSKSTALL_ETRSTALLWARMRST register field value. */
#define ALT_RSTMGR_HDSKSTALL_ETRSTALLWARMRST_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_HDSKSTALL_ETRSTALLWARMRST register field. */
#define ALT_RSTMGR_HDSKSTALL_ETRSTALLWARMRST_RESET      0x0
/* Extracts the ALT_RSTMGR_HDSKSTALL_ETRSTALLWARMRST field value from a register. */
#define ALT_RSTMGR_HDSKSTALL_ETRSTALLWARMRST_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_HDSKSTALL_ETRSTALLWARMRST register field value suitable for setting the register. */
#define ALT_RSTMGR_HDSKSTALL_ETRSTALLWARMRST_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_RSTMGR_HDSKSTALL.
 */
struct ALT_RSTMGR_HDSKSTALL_s
{
    volatile uint32_t  etrstallwarmrst :  1;  /* ETR (Embedded Trace Router) Stall After Reset */
    uint32_t                           : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_HDSKSTALL. */
typedef struct ALT_RSTMGR_HDSKSTALL_s  ALT_RSTMGR_HDSKSTALL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_HDSKSTALL register. */
#define ALT_RSTMGR_HDSKSTALL_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_HDSKSTALL register from the beginning of the component. */
#define ALT_RSTMGR_HDSKSTALL_OFST        0x1c

/*
 * Register : MPU Module Reset Register - mpumodrst
 * 
 * The MPUMODRST register is used by software to trigger module resets (individual
 * module reset signals). Writing 1 to any of these fields will cause the CPU core
 * reset signal to be asserted if that CPU is in WFI mode. The Reset Manager
 * hardware will bring the module back out of reset after the appropriate amount of
 * time.
 * 
 * All fields are reset by a cold or a warm reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description 
 * :-------|:-------|:------|:-------------
 *  [0]    | RW     | 0x0   | Resets CORE0
 *  [1]    | RW     | 0x0   | Resets CORE1
 *  [2]    | RW     | 0x0   | Resets CORE2
 *  [3]    | RW     | 0x0   | Resets CORE3
 *  [31:4] | ???    | 0x0   | *UNDEFINED* 
 * 
 */
/*
 * Field : Resets CORE0 - core0
 * 
 * Resets ncorereset port of CPU0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MPUMODRST_CORE0 register field. */
#define ALT_RSTMGR_MPUMODRST_CORE0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MPUMODRST_CORE0 register field. */
#define ALT_RSTMGR_MPUMODRST_CORE0_MSB        0
/* The width in bits of the ALT_RSTMGR_MPUMODRST_CORE0 register field. */
#define ALT_RSTMGR_MPUMODRST_CORE0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MPUMODRST_CORE0 register field value. */
#define ALT_RSTMGR_MPUMODRST_CORE0_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_MPUMODRST_CORE0 register field value. */
#define ALT_RSTMGR_MPUMODRST_CORE0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_MPUMODRST_CORE0 register field. */
#define ALT_RSTMGR_MPUMODRST_CORE0_RESET      0x0
/* Extracts the ALT_RSTMGR_MPUMODRST_CORE0 field value from a register. */
#define ALT_RSTMGR_MPUMODRST_CORE0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_MPUMODRST_CORE0 register field value suitable for setting the register. */
#define ALT_RSTMGR_MPUMODRST_CORE0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Resets CORE1 - core1
 * 
 * Resets ncorereset port of CPU1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MPUMODRST_CORE1 register field. */
#define ALT_RSTMGR_MPUMODRST_CORE1_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MPUMODRST_CORE1 register field. */
#define ALT_RSTMGR_MPUMODRST_CORE1_MSB        1
/* The width in bits of the ALT_RSTMGR_MPUMODRST_CORE1 register field. */
#define ALT_RSTMGR_MPUMODRST_CORE1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MPUMODRST_CORE1 register field value. */
#define ALT_RSTMGR_MPUMODRST_CORE1_SET_MSK    0x00000002
/* The mask used to clear the ALT_RSTMGR_MPUMODRST_CORE1 register field value. */
#define ALT_RSTMGR_MPUMODRST_CORE1_CLR_MSK    0xfffffffd
/* The reset value of the ALT_RSTMGR_MPUMODRST_CORE1 register field. */
#define ALT_RSTMGR_MPUMODRST_CORE1_RESET      0x0
/* Extracts the ALT_RSTMGR_MPUMODRST_CORE1 field value from a register. */
#define ALT_RSTMGR_MPUMODRST_CORE1_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_RSTMGR_MPUMODRST_CORE1 register field value suitable for setting the register. */
#define ALT_RSTMGR_MPUMODRST_CORE1_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : Resets CORE2 - core2
 * 
 * Resets ncorereset port of CPU2.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MPUMODRST_CORE2 register field. */
#define ALT_RSTMGR_MPUMODRST_CORE2_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MPUMODRST_CORE2 register field. */
#define ALT_RSTMGR_MPUMODRST_CORE2_MSB        2
/* The width in bits of the ALT_RSTMGR_MPUMODRST_CORE2 register field. */
#define ALT_RSTMGR_MPUMODRST_CORE2_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MPUMODRST_CORE2 register field value. */
#define ALT_RSTMGR_MPUMODRST_CORE2_SET_MSK    0x00000004
/* The mask used to clear the ALT_RSTMGR_MPUMODRST_CORE2 register field value. */
#define ALT_RSTMGR_MPUMODRST_CORE2_CLR_MSK    0xfffffffb
/* The reset value of the ALT_RSTMGR_MPUMODRST_CORE2 register field. */
#define ALT_RSTMGR_MPUMODRST_CORE2_RESET      0x0
/* Extracts the ALT_RSTMGR_MPUMODRST_CORE2 field value from a register. */
#define ALT_RSTMGR_MPUMODRST_CORE2_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_RSTMGR_MPUMODRST_CORE2 register field value suitable for setting the register. */
#define ALT_RSTMGR_MPUMODRST_CORE2_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : Resets CORE3 - core3
 * 
 * Resets ncorereset port of CPU3.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MPUMODRST_CORE3 register field. */
#define ALT_RSTMGR_MPUMODRST_CORE3_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MPUMODRST_CORE3 register field. */
#define ALT_RSTMGR_MPUMODRST_CORE3_MSB        3
/* The width in bits of the ALT_RSTMGR_MPUMODRST_CORE3 register field. */
#define ALT_RSTMGR_MPUMODRST_CORE3_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MPUMODRST_CORE3 register field value. */
#define ALT_RSTMGR_MPUMODRST_CORE3_SET_MSK    0x00000008
/* The mask used to clear the ALT_RSTMGR_MPUMODRST_CORE3 register field value. */
#define ALT_RSTMGR_MPUMODRST_CORE3_CLR_MSK    0xfffffff7
/* The reset value of the ALT_RSTMGR_MPUMODRST_CORE3 register field. */
#define ALT_RSTMGR_MPUMODRST_CORE3_RESET      0x0
/* Extracts the ALT_RSTMGR_MPUMODRST_CORE3 field value from a register. */
#define ALT_RSTMGR_MPUMODRST_CORE3_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_RSTMGR_MPUMODRST_CORE3 register field value suitable for setting the register. */
#define ALT_RSTMGR_MPUMODRST_CORE3_SET(value) (((value) << 3) & 0x00000008)

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
 * The struct declaration for register ALT_RSTMGR_MPUMODRST.
 */
struct ALT_RSTMGR_MPUMODRST_s
{
    volatile uint32_t  core0 :  1;  /* Resets CORE0 */
    volatile uint32_t  core1 :  1;  /* Resets CORE1 */
    volatile uint32_t  core2 :  1;  /* Resets CORE2 */
    volatile uint32_t  core3 :  1;  /* Resets CORE3 */
    uint32_t                 : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_MPUMODRST. */
typedef struct ALT_RSTMGR_MPUMODRST_s  ALT_RSTMGR_MPUMODRST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_MPUMODRST register. */
#define ALT_RSTMGR_MPUMODRST_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_MPUMODRST register from the beginning of the component. */
#define ALT_RSTMGR_MPUMODRST_OFST        0x20

/*
 * Register : Peripheral 0 Module Reset Register - per0modrst
 * 
 * The PER0MODRST register is used by software to control module resets for
 * Peripheral Group and Fast Peripheral Group.  Software explicitly asserts and de-
 * asserts module reset signals by writing bits in the appropriate *MODRST
 * register. It is up to software to ensure module reset signals are asserted for
 * the appropriate length of time and are de-asserted in the correct order. It is
 * also up to software to not assert a module reset signal that would prevent
 * software from de-asserting the module reset signal.
 * 
 * Software writes a bit to 1 to assert the module reset signal and to 0 to de-
 * assert the module reset signal.
 * 
 * All fields are reset by a cold reset. All fields are also reset by a warm reset.
 * 
 * The reset value of all fields is 1. This holds the corresponding module in reset
 * until software is ready to release the module from reset by writing 0 to its
 * field.
 * 
 * Register Layout
 * 
 *  Bits | Access | Reset | Description   
 * :-----|:-------|:------|:---------------
 *  [0]  | RW     | 0x1   | EMAC0         
 *  [1]  | RW     | 0x1   | EMAC1         
 *  [2]  | RW     | 0x1   | EMAC2         
 *  [3]  | RW     | 0x1   | USB0          
 *  [4]  | RW     | 0x1   | USB1          
 *  [5]  | RW     | 0x1   | NAND Flash    
 *  [6]  | ???    | 0x1   | *UNDEFINED*   
 *  [7]  | RW     | 0x1   | SD/MMC        
 *  [8]  | RW     | 0x1   | EMAC0OCP      
 *  [9]  | RW     | 0x1   | EMAC1OCP      
 *  [10] | RW     | 0x1   | EMAC2OCP      
 *  [11] | RW     | 0x1   | USB0OCP       
 *  [12] | RW     | 0x1   | USB1OCP       
 *  [13] | RW     | 0x1   | NANDOCP       
 *  [14] | ???    | 0x1   | *UNDEFINED*   
 *  [15] | RW     | 0x1   | SDMMCOCP      
 *  [16] | RW     | 0x1   | DMA Controller
 *  [17] | RW     | 0x1   | SPIM0         
 *  [18] | RW     | 0x1   | SPIM1         
 *  [19] | RW     | 0x1   | SPIS0         
 *  [20] | RW     | 0x1   | SPIS1         
 *  [21] | RW     | 0x1   | DMAOCP        
 *  [22] | RW     | 0x1   | EMAC PTP      
 *  [23] | ???    | 0x1   | *UNDEFINED*   
 *  [24] | RW     | 0x1   | FPGA DMA0     
 *  [25] | RW     | 0x1   | FPGA DMA1     
 *  [26] | RW     | 0x1   | FPGA DMA2     
 *  [27] | RW     | 0x1   | FPGA DMA3     
 *  [28] | RW     | 0x1   | FPGA DMA4     
 *  [29] | RW     | 0x1   | FPGA DMA5     
 *  [30] | RW     | 0x1   | FPGA DMA6     
 *  [31] | RW     | 0x1   | FPGA DMA7     
 * 
 */
/*
 * Field : EMAC0 - emac0
 * 
 * Resets EMAC0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_EMAC0 register field. */
#define ALT_RSTMGR_PER0MODRST_EMAC0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_EMAC0 register field. */
#define ALT_RSTMGR_PER0MODRST_EMAC0_MSB        0
/* The width in bits of the ALT_RSTMGR_PER0MODRST_EMAC0 register field. */
#define ALT_RSTMGR_PER0MODRST_EMAC0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_EMAC0 register field value. */
#define ALT_RSTMGR_PER0MODRST_EMAC0_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_EMAC0 register field value. */
#define ALT_RSTMGR_PER0MODRST_EMAC0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_PER0MODRST_EMAC0 register field. */
#define ALT_RSTMGR_PER0MODRST_EMAC0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_EMAC0 field value from a register. */
#define ALT_RSTMGR_PER0MODRST_EMAC0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_PER0MODRST_EMAC0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_EMAC0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : EMAC1 - emac1
 * 
 * Resets EMAC1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_EMAC1 register field. */
#define ALT_RSTMGR_PER0MODRST_EMAC1_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_EMAC1 register field. */
#define ALT_RSTMGR_PER0MODRST_EMAC1_MSB        1
/* The width in bits of the ALT_RSTMGR_PER0MODRST_EMAC1 register field. */
#define ALT_RSTMGR_PER0MODRST_EMAC1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_EMAC1 register field value. */
#define ALT_RSTMGR_PER0MODRST_EMAC1_SET_MSK    0x00000002
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_EMAC1 register field value. */
#define ALT_RSTMGR_PER0MODRST_EMAC1_CLR_MSK    0xfffffffd
/* The reset value of the ALT_RSTMGR_PER0MODRST_EMAC1 register field. */
#define ALT_RSTMGR_PER0MODRST_EMAC1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_EMAC1 field value from a register. */
#define ALT_RSTMGR_PER0MODRST_EMAC1_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_RSTMGR_PER0MODRST_EMAC1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_EMAC1_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : EMAC2 - emac2
 * 
 * Resets EMAC2.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_EMAC2 register field. */
#define ALT_RSTMGR_PER0MODRST_EMAC2_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_EMAC2 register field. */
#define ALT_RSTMGR_PER0MODRST_EMAC2_MSB        2
/* The width in bits of the ALT_RSTMGR_PER0MODRST_EMAC2 register field. */
#define ALT_RSTMGR_PER0MODRST_EMAC2_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_EMAC2 register field value. */
#define ALT_RSTMGR_PER0MODRST_EMAC2_SET_MSK    0x00000004
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_EMAC2 register field value. */
#define ALT_RSTMGR_PER0MODRST_EMAC2_CLR_MSK    0xfffffffb
/* The reset value of the ALT_RSTMGR_PER0MODRST_EMAC2 register field. */
#define ALT_RSTMGR_PER0MODRST_EMAC2_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_EMAC2 field value from a register. */
#define ALT_RSTMGR_PER0MODRST_EMAC2_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_RSTMGR_PER0MODRST_EMAC2 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_EMAC2_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : USB0 - usb0
 * 
 * Resets USB0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_USB0 register field. */
#define ALT_RSTMGR_PER0MODRST_USB0_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_USB0 register field. */
#define ALT_RSTMGR_PER0MODRST_USB0_MSB        3
/* The width in bits of the ALT_RSTMGR_PER0MODRST_USB0 register field. */
#define ALT_RSTMGR_PER0MODRST_USB0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_USB0 register field value. */
#define ALT_RSTMGR_PER0MODRST_USB0_SET_MSK    0x00000008
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_USB0 register field value. */
#define ALT_RSTMGR_PER0MODRST_USB0_CLR_MSK    0xfffffff7
/* The reset value of the ALT_RSTMGR_PER0MODRST_USB0 register field. */
#define ALT_RSTMGR_PER0MODRST_USB0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_USB0 field value from a register. */
#define ALT_RSTMGR_PER0MODRST_USB0_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_RSTMGR_PER0MODRST_USB0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_USB0_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : USB1 - usb1
 * 
 * Resets USB1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_USB1 register field. */
#define ALT_RSTMGR_PER0MODRST_USB1_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_USB1 register field. */
#define ALT_RSTMGR_PER0MODRST_USB1_MSB        4
/* The width in bits of the ALT_RSTMGR_PER0MODRST_USB1 register field. */
#define ALT_RSTMGR_PER0MODRST_USB1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_USB1 register field value. */
#define ALT_RSTMGR_PER0MODRST_USB1_SET_MSK    0x00000010
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_USB1 register field value. */
#define ALT_RSTMGR_PER0MODRST_USB1_CLR_MSK    0xffffffef
/* The reset value of the ALT_RSTMGR_PER0MODRST_USB1 register field. */
#define ALT_RSTMGR_PER0MODRST_USB1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_USB1 field value from a register. */
#define ALT_RSTMGR_PER0MODRST_USB1_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_RSTMGR_PER0MODRST_USB1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_USB1_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : NAND Flash - nand
 * 
 * Resets NAND flash controller.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_NAND register field. */
#define ALT_RSTMGR_PER0MODRST_NAND_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_NAND register field. */
#define ALT_RSTMGR_PER0MODRST_NAND_MSB        5
/* The width in bits of the ALT_RSTMGR_PER0MODRST_NAND register field. */
#define ALT_RSTMGR_PER0MODRST_NAND_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_NAND register field value. */
#define ALT_RSTMGR_PER0MODRST_NAND_SET_MSK    0x00000020
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_NAND register field value. */
#define ALT_RSTMGR_PER0MODRST_NAND_CLR_MSK    0xffffffdf
/* The reset value of the ALT_RSTMGR_PER0MODRST_NAND register field. */
#define ALT_RSTMGR_PER0MODRST_NAND_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_NAND field value from a register. */
#define ALT_RSTMGR_PER0MODRST_NAND_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_RSTMGR_PER0MODRST_NAND register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_NAND_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : SD/MMC - sdmmc
 * 
 * Resets SD/MMC controller.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_SDMMC register field. */
#define ALT_RSTMGR_PER0MODRST_SDMMC_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_SDMMC register field. */
#define ALT_RSTMGR_PER0MODRST_SDMMC_MSB        7
/* The width in bits of the ALT_RSTMGR_PER0MODRST_SDMMC register field. */
#define ALT_RSTMGR_PER0MODRST_SDMMC_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_SDMMC register field value. */
#define ALT_RSTMGR_PER0MODRST_SDMMC_SET_MSK    0x00000080
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_SDMMC register field value. */
#define ALT_RSTMGR_PER0MODRST_SDMMC_CLR_MSK    0xffffff7f
/* The reset value of the ALT_RSTMGR_PER0MODRST_SDMMC register field. */
#define ALT_RSTMGR_PER0MODRST_SDMMC_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_SDMMC field value from a register. */
#define ALT_RSTMGR_PER0MODRST_SDMMC_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_RSTMGR_PER0MODRST_SDMMC register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_SDMMC_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : EMAC0OCP - emac0ocp
 * 
 * Resets EMAC0 ECC OCP DIagnostics modules.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_EMAC0OCP register field. */
#define ALT_RSTMGR_PER0MODRST_EMAC0OCP_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_EMAC0OCP register field. */
#define ALT_RSTMGR_PER0MODRST_EMAC0OCP_MSB        8
/* The width in bits of the ALT_RSTMGR_PER0MODRST_EMAC0OCP register field. */
#define ALT_RSTMGR_PER0MODRST_EMAC0OCP_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_EMAC0OCP register field value. */
#define ALT_RSTMGR_PER0MODRST_EMAC0OCP_SET_MSK    0x00000100
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_EMAC0OCP register field value. */
#define ALT_RSTMGR_PER0MODRST_EMAC0OCP_CLR_MSK    0xfffffeff
/* The reset value of the ALT_RSTMGR_PER0MODRST_EMAC0OCP register field. */
#define ALT_RSTMGR_PER0MODRST_EMAC0OCP_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_EMAC0OCP field value from a register. */
#define ALT_RSTMGR_PER0MODRST_EMAC0OCP_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_RSTMGR_PER0MODRST_EMAC0OCP register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_EMAC0OCP_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : EMAC1OCP - emac1ocp
 * 
 * Resets EMAC1 ECC OCP DIagnostics modules.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_EMAC1OCP register field. */
#define ALT_RSTMGR_PER0MODRST_EMAC1OCP_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_EMAC1OCP register field. */
#define ALT_RSTMGR_PER0MODRST_EMAC1OCP_MSB        9
/* The width in bits of the ALT_RSTMGR_PER0MODRST_EMAC1OCP register field. */
#define ALT_RSTMGR_PER0MODRST_EMAC1OCP_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_EMAC1OCP register field value. */
#define ALT_RSTMGR_PER0MODRST_EMAC1OCP_SET_MSK    0x00000200
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_EMAC1OCP register field value. */
#define ALT_RSTMGR_PER0MODRST_EMAC1OCP_CLR_MSK    0xfffffdff
/* The reset value of the ALT_RSTMGR_PER0MODRST_EMAC1OCP register field. */
#define ALT_RSTMGR_PER0MODRST_EMAC1OCP_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_EMAC1OCP field value from a register. */
#define ALT_RSTMGR_PER0MODRST_EMAC1OCP_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_RSTMGR_PER0MODRST_EMAC1OCP register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_EMAC1OCP_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : EMAC2OCP - emac2ocp
 * 
 * Resets EMAC0 ECC OCP DIagnostics modules.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_EMAC2OCP register field. */
#define ALT_RSTMGR_PER0MODRST_EMAC2OCP_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_EMAC2OCP register field. */
#define ALT_RSTMGR_PER0MODRST_EMAC2OCP_MSB        10
/* The width in bits of the ALT_RSTMGR_PER0MODRST_EMAC2OCP register field. */
#define ALT_RSTMGR_PER0MODRST_EMAC2OCP_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_EMAC2OCP register field value. */
#define ALT_RSTMGR_PER0MODRST_EMAC2OCP_SET_MSK    0x00000400
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_EMAC2OCP register field value. */
#define ALT_RSTMGR_PER0MODRST_EMAC2OCP_CLR_MSK    0xfffffbff
/* The reset value of the ALT_RSTMGR_PER0MODRST_EMAC2OCP register field. */
#define ALT_RSTMGR_PER0MODRST_EMAC2OCP_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_EMAC2OCP field value from a register. */
#define ALT_RSTMGR_PER0MODRST_EMAC2OCP_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_RSTMGR_PER0MODRST_EMAC2OCP register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_EMAC2OCP_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : USB0OCP - usb0ocp
 * 
 * Resets USB0 ECC OCP DIagnostics modules.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_USB0OCP register field. */
#define ALT_RSTMGR_PER0MODRST_USB0OCP_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_USB0OCP register field. */
#define ALT_RSTMGR_PER0MODRST_USB0OCP_MSB        11
/* The width in bits of the ALT_RSTMGR_PER0MODRST_USB0OCP register field. */
#define ALT_RSTMGR_PER0MODRST_USB0OCP_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_USB0OCP register field value. */
#define ALT_RSTMGR_PER0MODRST_USB0OCP_SET_MSK    0x00000800
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_USB0OCP register field value. */
#define ALT_RSTMGR_PER0MODRST_USB0OCP_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_RSTMGR_PER0MODRST_USB0OCP register field. */
#define ALT_RSTMGR_PER0MODRST_USB0OCP_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_USB0OCP field value from a register. */
#define ALT_RSTMGR_PER0MODRST_USB0OCP_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_RSTMGR_PER0MODRST_USB0OCP register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_USB0OCP_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : USB1OCP - usb1ocp
 * 
 * Resets USB1 ECC OCP DIagnostics modules.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_USB1OCP register field. */
#define ALT_RSTMGR_PER0MODRST_USB1OCP_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_USB1OCP register field. */
#define ALT_RSTMGR_PER0MODRST_USB1OCP_MSB        12
/* The width in bits of the ALT_RSTMGR_PER0MODRST_USB1OCP register field. */
#define ALT_RSTMGR_PER0MODRST_USB1OCP_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_USB1OCP register field value. */
#define ALT_RSTMGR_PER0MODRST_USB1OCP_SET_MSK    0x00001000
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_USB1OCP register field value. */
#define ALT_RSTMGR_PER0MODRST_USB1OCP_CLR_MSK    0xffffefff
/* The reset value of the ALT_RSTMGR_PER0MODRST_USB1OCP register field. */
#define ALT_RSTMGR_PER0MODRST_USB1OCP_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_USB1OCP field value from a register. */
#define ALT_RSTMGR_PER0MODRST_USB1OCP_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_RSTMGR_PER0MODRST_USB1OCP register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_USB1OCP_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : NANDOCP - nandocp
 * 
 * Resets NAND ECC OCP DIagnostics modules.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_NANDOCP register field. */
#define ALT_RSTMGR_PER0MODRST_NANDOCP_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_NANDOCP register field. */
#define ALT_RSTMGR_PER0MODRST_NANDOCP_MSB        13
/* The width in bits of the ALT_RSTMGR_PER0MODRST_NANDOCP register field. */
#define ALT_RSTMGR_PER0MODRST_NANDOCP_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_NANDOCP register field value. */
#define ALT_RSTMGR_PER0MODRST_NANDOCP_SET_MSK    0x00002000
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_NANDOCP register field value. */
#define ALT_RSTMGR_PER0MODRST_NANDOCP_CLR_MSK    0xffffdfff
/* The reset value of the ALT_RSTMGR_PER0MODRST_NANDOCP register field. */
#define ALT_RSTMGR_PER0MODRST_NANDOCP_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_NANDOCP field value from a register. */
#define ALT_RSTMGR_PER0MODRST_NANDOCP_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_RSTMGR_PER0MODRST_NANDOCP register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_NANDOCP_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : SDMMCOCP - sdmmcocp
 * 
 * Resets SDMMC ECC OCP DIagnostics modules.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_SDMMCOCP register field. */
#define ALT_RSTMGR_PER0MODRST_SDMMCOCP_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_SDMMCOCP register field. */
#define ALT_RSTMGR_PER0MODRST_SDMMCOCP_MSB        15
/* The width in bits of the ALT_RSTMGR_PER0MODRST_SDMMCOCP register field. */
#define ALT_RSTMGR_PER0MODRST_SDMMCOCP_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_SDMMCOCP register field value. */
#define ALT_RSTMGR_PER0MODRST_SDMMCOCP_SET_MSK    0x00008000
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_SDMMCOCP register field value. */
#define ALT_RSTMGR_PER0MODRST_SDMMCOCP_CLR_MSK    0xffff7fff
/* The reset value of the ALT_RSTMGR_PER0MODRST_SDMMCOCP register field. */
#define ALT_RSTMGR_PER0MODRST_SDMMCOCP_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_SDMMCOCP field value from a register. */
#define ALT_RSTMGR_PER0MODRST_SDMMCOCP_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_RSTMGR_PER0MODRST_SDMMCOCP register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_SDMMCOCP_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : DMA Controller - dma
 * 
 * Resets DMA controller.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_DMA register field. */
#define ALT_RSTMGR_PER0MODRST_DMA_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_DMA register field. */
#define ALT_RSTMGR_PER0MODRST_DMA_MSB        16
/* The width in bits of the ALT_RSTMGR_PER0MODRST_DMA register field. */
#define ALT_RSTMGR_PER0MODRST_DMA_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_DMA register field value. */
#define ALT_RSTMGR_PER0MODRST_DMA_SET_MSK    0x00010000
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_DMA register field value. */
#define ALT_RSTMGR_PER0MODRST_DMA_CLR_MSK    0xfffeffff
/* The reset value of the ALT_RSTMGR_PER0MODRST_DMA register field. */
#define ALT_RSTMGR_PER0MODRST_DMA_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_DMA field value from a register. */
#define ALT_RSTMGR_PER0MODRST_DMA_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_RSTMGR_PER0MODRST_DMA register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_DMA_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : SPIM0 - spim0
 * 
 * Resets SPIM0 controller.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_SPIM0 register field. */
#define ALT_RSTMGR_PER0MODRST_SPIM0_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_SPIM0 register field. */
#define ALT_RSTMGR_PER0MODRST_SPIM0_MSB        17
/* The width in bits of the ALT_RSTMGR_PER0MODRST_SPIM0 register field. */
#define ALT_RSTMGR_PER0MODRST_SPIM0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_SPIM0 register field value. */
#define ALT_RSTMGR_PER0MODRST_SPIM0_SET_MSK    0x00020000
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_SPIM0 register field value. */
#define ALT_RSTMGR_PER0MODRST_SPIM0_CLR_MSK    0xfffdffff
/* The reset value of the ALT_RSTMGR_PER0MODRST_SPIM0 register field. */
#define ALT_RSTMGR_PER0MODRST_SPIM0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_SPIM0 field value from a register. */
#define ALT_RSTMGR_PER0MODRST_SPIM0_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_RSTMGR_PER0MODRST_SPIM0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_SPIM0_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : SPIM1 - spim1
 * 
 * Resets SPIM1 controller.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_SPIM1 register field. */
#define ALT_RSTMGR_PER0MODRST_SPIM1_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_SPIM1 register field. */
#define ALT_RSTMGR_PER0MODRST_SPIM1_MSB        18
/* The width in bits of the ALT_RSTMGR_PER0MODRST_SPIM1 register field. */
#define ALT_RSTMGR_PER0MODRST_SPIM1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_SPIM1 register field value. */
#define ALT_RSTMGR_PER0MODRST_SPIM1_SET_MSK    0x00040000
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_SPIM1 register field value. */
#define ALT_RSTMGR_PER0MODRST_SPIM1_CLR_MSK    0xfffbffff
/* The reset value of the ALT_RSTMGR_PER0MODRST_SPIM1 register field. */
#define ALT_RSTMGR_PER0MODRST_SPIM1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_SPIM1 field value from a register. */
#define ALT_RSTMGR_PER0MODRST_SPIM1_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_RSTMGR_PER0MODRST_SPIM1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_SPIM1_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : SPIS0 - spis0
 * 
 * Resets SPIS0 controller.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_SPIS0 register field. */
#define ALT_RSTMGR_PER0MODRST_SPIS0_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_SPIS0 register field. */
#define ALT_RSTMGR_PER0MODRST_SPIS0_MSB        19
/* The width in bits of the ALT_RSTMGR_PER0MODRST_SPIS0 register field. */
#define ALT_RSTMGR_PER0MODRST_SPIS0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_SPIS0 register field value. */
#define ALT_RSTMGR_PER0MODRST_SPIS0_SET_MSK    0x00080000
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_SPIS0 register field value. */
#define ALT_RSTMGR_PER0MODRST_SPIS0_CLR_MSK    0xfff7ffff
/* The reset value of the ALT_RSTMGR_PER0MODRST_SPIS0 register field. */
#define ALT_RSTMGR_PER0MODRST_SPIS0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_SPIS0 field value from a register. */
#define ALT_RSTMGR_PER0MODRST_SPIS0_GET(value) (((value) & 0x00080000) >> 19)
/* Produces a ALT_RSTMGR_PER0MODRST_SPIS0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_SPIS0_SET(value) (((value) << 19) & 0x00080000)

/*
 * Field : SPIS1 - spis1
 * 
 * Resets SPIS1 controller.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_SPIS1 register field. */
#define ALT_RSTMGR_PER0MODRST_SPIS1_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_SPIS1 register field. */
#define ALT_RSTMGR_PER0MODRST_SPIS1_MSB        20
/* The width in bits of the ALT_RSTMGR_PER0MODRST_SPIS1 register field. */
#define ALT_RSTMGR_PER0MODRST_SPIS1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_SPIS1 register field value. */
#define ALT_RSTMGR_PER0MODRST_SPIS1_SET_MSK    0x00100000
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_SPIS1 register field value. */
#define ALT_RSTMGR_PER0MODRST_SPIS1_CLR_MSK    0xffefffff
/* The reset value of the ALT_RSTMGR_PER0MODRST_SPIS1 register field. */
#define ALT_RSTMGR_PER0MODRST_SPIS1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_SPIS1 field value from a register. */
#define ALT_RSTMGR_PER0MODRST_SPIS1_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_RSTMGR_PER0MODRST_SPIS1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_SPIS1_SET(value) (((value) << 20) & 0x00100000)

/*
 * Field : DMAOCP - dmaocp
 * 
 * Resets DMA Controller ECC OCP DIagnostics modules.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_DMAOCP register field. */
#define ALT_RSTMGR_PER0MODRST_DMAOCP_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_DMAOCP register field. */
#define ALT_RSTMGR_PER0MODRST_DMAOCP_MSB        21
/* The width in bits of the ALT_RSTMGR_PER0MODRST_DMAOCP register field. */
#define ALT_RSTMGR_PER0MODRST_DMAOCP_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_DMAOCP register field value. */
#define ALT_RSTMGR_PER0MODRST_DMAOCP_SET_MSK    0x00200000
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_DMAOCP register field value. */
#define ALT_RSTMGR_PER0MODRST_DMAOCP_CLR_MSK    0xffdfffff
/* The reset value of the ALT_RSTMGR_PER0MODRST_DMAOCP register field. */
#define ALT_RSTMGR_PER0MODRST_DMAOCP_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_DMAOCP field value from a register. */
#define ALT_RSTMGR_PER0MODRST_DMAOCP_GET(value) (((value) & 0x00200000) >> 21)
/* Produces a ALT_RSTMGR_PER0MODRST_DMAOCP register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_DMAOCP_SET(value) (((value) << 21) & 0x00200000)

/*
 * Field : EMAC PTP - emacptp
 * 
 * Resets EMAC PTP.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_EMACPTP register field. */
#define ALT_RSTMGR_PER0MODRST_EMACPTP_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_EMACPTP register field. */
#define ALT_RSTMGR_PER0MODRST_EMACPTP_MSB        22
/* The width in bits of the ALT_RSTMGR_PER0MODRST_EMACPTP register field. */
#define ALT_RSTMGR_PER0MODRST_EMACPTP_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_EMACPTP register field value. */
#define ALT_RSTMGR_PER0MODRST_EMACPTP_SET_MSK    0x00400000
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_EMACPTP register field value. */
#define ALT_RSTMGR_PER0MODRST_EMACPTP_CLR_MSK    0xffbfffff
/* The reset value of the ALT_RSTMGR_PER0MODRST_EMACPTP register field. */
#define ALT_RSTMGR_PER0MODRST_EMACPTP_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_EMACPTP field value from a register. */
#define ALT_RSTMGR_PER0MODRST_EMACPTP_GET(value) (((value) & 0x00400000) >> 22)
/* Produces a ALT_RSTMGR_PER0MODRST_EMACPTP register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_EMACPTP_SET(value) (((value) << 22) & 0x00400000)

/*
 * Field : FPGA DMA0 - dmaif0
 * 
 * Resets DMA channel 0 interface adapter between FPGA Fabric and HPS DMA
 * Controller.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_DMAIF0 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF0_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_DMAIF0 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF0_MSB        24
/* The width in bits of the ALT_RSTMGR_PER0MODRST_DMAIF0 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_DMAIF0 register field value. */
#define ALT_RSTMGR_PER0MODRST_DMAIF0_SET_MSK    0x01000000
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_DMAIF0 register field value. */
#define ALT_RSTMGR_PER0MODRST_DMAIF0_CLR_MSK    0xfeffffff
/* The reset value of the ALT_RSTMGR_PER0MODRST_DMAIF0 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_DMAIF0 field value from a register. */
#define ALT_RSTMGR_PER0MODRST_DMAIF0_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_RSTMGR_PER0MODRST_DMAIF0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_DMAIF0_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : FPGA DMA1 - dmaif1
 * 
 * Resets DMA channel 1 interface adapter between FPGA Fabric and HPS DMA
 * Controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_DMAIF1 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF1_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_DMAIF1 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF1_MSB        25
/* The width in bits of the ALT_RSTMGR_PER0MODRST_DMAIF1 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_DMAIF1 register field value. */
#define ALT_RSTMGR_PER0MODRST_DMAIF1_SET_MSK    0x02000000
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_DMAIF1 register field value. */
#define ALT_RSTMGR_PER0MODRST_DMAIF1_CLR_MSK    0xfdffffff
/* The reset value of the ALT_RSTMGR_PER0MODRST_DMAIF1 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_DMAIF1 field value from a register. */
#define ALT_RSTMGR_PER0MODRST_DMAIF1_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_RSTMGR_PER0MODRST_DMAIF1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_DMAIF1_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : FPGA DMA2 - dmaif2
 * 
 * Resets DMA channel 2 interface adapter between FPGA Fabric and HPS DMA
 * Controller.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_DMAIF2 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF2_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_DMAIF2 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF2_MSB        26
/* The width in bits of the ALT_RSTMGR_PER0MODRST_DMAIF2 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF2_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_DMAIF2 register field value. */
#define ALT_RSTMGR_PER0MODRST_DMAIF2_SET_MSK    0x04000000
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_DMAIF2 register field value. */
#define ALT_RSTMGR_PER0MODRST_DMAIF2_CLR_MSK    0xfbffffff
/* The reset value of the ALT_RSTMGR_PER0MODRST_DMAIF2 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF2_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_DMAIF2 field value from a register. */
#define ALT_RSTMGR_PER0MODRST_DMAIF2_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_RSTMGR_PER0MODRST_DMAIF2 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_DMAIF2_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : FPGA DMA3 - dmaif3
 * 
 * Resets DMA channel 3 interface adapter between FPGA Fabric and HPS DMA
 * Controller.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_DMAIF3 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF3_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_DMAIF3 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF3_MSB        27
/* The width in bits of the ALT_RSTMGR_PER0MODRST_DMAIF3 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF3_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_DMAIF3 register field value. */
#define ALT_RSTMGR_PER0MODRST_DMAIF3_SET_MSK    0x08000000
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_DMAIF3 register field value. */
#define ALT_RSTMGR_PER0MODRST_DMAIF3_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_RSTMGR_PER0MODRST_DMAIF3 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF3_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_DMAIF3 field value from a register. */
#define ALT_RSTMGR_PER0MODRST_DMAIF3_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_RSTMGR_PER0MODRST_DMAIF3 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_DMAIF3_SET(value) (((value) << 27) & 0x08000000)

/*
 * Field : FPGA DMA4 - dmaif4
 * 
 * Resets DMA channel 4 interface adapter between FPGA Fabric and HPS DMA
 * Controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_DMAIF4 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF4_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_DMAIF4 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF4_MSB        28
/* The width in bits of the ALT_RSTMGR_PER0MODRST_DMAIF4 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF4_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_DMAIF4 register field value. */
#define ALT_RSTMGR_PER0MODRST_DMAIF4_SET_MSK    0x10000000
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_DMAIF4 register field value. */
#define ALT_RSTMGR_PER0MODRST_DMAIF4_CLR_MSK    0xefffffff
/* The reset value of the ALT_RSTMGR_PER0MODRST_DMAIF4 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF4_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_DMAIF4 field value from a register. */
#define ALT_RSTMGR_PER0MODRST_DMAIF4_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_RSTMGR_PER0MODRST_DMAIF4 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_DMAIF4_SET(value) (((value) << 28) & 0x10000000)

/*
 * Field : FPGA DMA5 - dmaif5
 * 
 * Resets DMA channel 5 interface adapter between FPGA Fabric and HPS DMA
 * Controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_DMAIF5 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF5_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_DMAIF5 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF5_MSB        29
/* The width in bits of the ALT_RSTMGR_PER0MODRST_DMAIF5 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF5_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_DMAIF5 register field value. */
#define ALT_RSTMGR_PER0MODRST_DMAIF5_SET_MSK    0x20000000
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_DMAIF5 register field value. */
#define ALT_RSTMGR_PER0MODRST_DMAIF5_CLR_MSK    0xdfffffff
/* The reset value of the ALT_RSTMGR_PER0MODRST_DMAIF5 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF5_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_DMAIF5 field value from a register. */
#define ALT_RSTMGR_PER0MODRST_DMAIF5_GET(value) (((value) & 0x20000000) >> 29)
/* Produces a ALT_RSTMGR_PER0MODRST_DMAIF5 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_DMAIF5_SET(value) (((value) << 29) & 0x20000000)

/*
 * Field : FPGA DMA6 - dmaif6
 * 
 * Resets DMA channel 6 interface adapter between FPGA Fabric and HPS DMA
 * Controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_DMAIF6 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF6_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_DMAIF6 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF6_MSB        30
/* The width in bits of the ALT_RSTMGR_PER0MODRST_DMAIF6 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF6_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_DMAIF6 register field value. */
#define ALT_RSTMGR_PER0MODRST_DMAIF6_SET_MSK    0x40000000
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_DMAIF6 register field value. */
#define ALT_RSTMGR_PER0MODRST_DMAIF6_CLR_MSK    0xbfffffff
/* The reset value of the ALT_RSTMGR_PER0MODRST_DMAIF6 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF6_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_DMAIF6 field value from a register. */
#define ALT_RSTMGR_PER0MODRST_DMAIF6_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_RSTMGR_PER0MODRST_DMAIF6 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_DMAIF6_SET(value) (((value) << 30) & 0x40000000)

/*
 * Field : FPGA DMA7 - dmaif7
 * 
 * Resets DMA channel 7 interface adapter between FPGA Fabric and HPS DMA
 * Controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_DMAIF7 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF7_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_DMAIF7 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF7_MSB        31
/* The width in bits of the ALT_RSTMGR_PER0MODRST_DMAIF7 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF7_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_DMAIF7 register field value. */
#define ALT_RSTMGR_PER0MODRST_DMAIF7_SET_MSK    0x80000000
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_DMAIF7 register field value. */
#define ALT_RSTMGR_PER0MODRST_DMAIF7_CLR_MSK    0x7fffffff
/* The reset value of the ALT_RSTMGR_PER0MODRST_DMAIF7 register field. */
#define ALT_RSTMGR_PER0MODRST_DMAIF7_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_DMAIF7 field value from a register. */
#define ALT_RSTMGR_PER0MODRST_DMAIF7_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_RSTMGR_PER0MODRST_DMAIF7 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_DMAIF7_SET(value) (((value) << 31) & 0x80000000)

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
 * The struct declaration for register ALT_RSTMGR_PER0MODRST.
 */
struct ALT_RSTMGR_PER0MODRST_s
{
    volatile uint32_t  emac0    :  1;  /* EMAC0 */
    volatile uint32_t  emac1    :  1;  /* EMAC1 */
    volatile uint32_t  emac2    :  1;  /* EMAC2 */
    volatile uint32_t  usb0     :  1;  /* USB0 */
    volatile uint32_t  usb1     :  1;  /* USB1 */
    volatile uint32_t  nand     :  1;  /* NAND Flash */
    uint32_t                    :  1;  /* *UNDEFINED* */
    volatile uint32_t  sdmmc    :  1;  /* SD/MMC */
    volatile uint32_t  emac0ocp :  1;  /* EMAC0OCP */
    volatile uint32_t  emac1ocp :  1;  /* EMAC1OCP */
    volatile uint32_t  emac2ocp :  1;  /* EMAC2OCP */
    volatile uint32_t  usb0ocp  :  1;  /* USB0OCP */
    volatile uint32_t  usb1ocp  :  1;  /* USB1OCP */
    volatile uint32_t  nandocp  :  1;  /* NANDOCP */
    uint32_t                    :  1;  /* *UNDEFINED* */
    volatile uint32_t  sdmmcocp :  1;  /* SDMMCOCP */
    volatile uint32_t  dma      :  1;  /* DMA Controller */
    volatile uint32_t  spim0    :  1;  /* SPIM0 */
    volatile uint32_t  spim1    :  1;  /* SPIM1 */
    volatile uint32_t  spis0    :  1;  /* SPIS0 */
    volatile uint32_t  spis1    :  1;  /* SPIS1 */
    volatile uint32_t  dmaocp   :  1;  /* DMAOCP */
    volatile uint32_t  emacptp  :  1;  /* EMAC PTP */
    uint32_t                    :  1;  /* *UNDEFINED* */
    volatile uint32_t  dmaif0   :  1;  /* FPGA DMA0 */
    volatile uint32_t  dmaif1   :  1;  /* FPGA DMA1 */
    volatile uint32_t  dmaif2   :  1;  /* FPGA DMA2 */
    volatile uint32_t  dmaif3   :  1;  /* FPGA DMA3 */
    volatile uint32_t  dmaif4   :  1;  /* FPGA DMA4 */
    volatile uint32_t  dmaif5   :  1;  /* FPGA DMA5 */
    volatile uint32_t  dmaif6   :  1;  /* FPGA DMA6 */
    volatile uint32_t  dmaif7   :  1;  /* FPGA DMA7 */
};

/* The typedef declaration for register ALT_RSTMGR_PER0MODRST. */
typedef struct ALT_RSTMGR_PER0MODRST_s  ALT_RSTMGR_PER0MODRST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_PER0MODRST register. */
#define ALT_RSTMGR_PER0MODRST_RESET       0xffffffff
/* The byte offset of the ALT_RSTMGR_PER0MODRST register from the beginning of the component. */
#define ALT_RSTMGR_PER0MODRST_OFST        0x24

/*
 * Register : Peripheral Module Reset Register - per1modrst
 * 
 * The PER1MODRST register is used by software to trigger module resets for Slow
 * Peripheral Group. Software explicitly asserts and de-asserts module reset
 * signals by writing bits in the appropriate *MODRST register. It is up to
 * software to ensure module reset signals are asserted for the appropriaThe
 * PER1MODRST register is used by software to control module resets for Slow
 * Peripheral Group. Software explicitly asserts and de-asserts module reset
 * signals by writing bits in the appropriate *MODRST register. It is up to
 * software to ensure module reset signals are asserted for the appropriate length
 * of time and are de-asserted in the correct order. It is also up to software to
 * not assert a module reset signal that would prevent software from de-asserting
 * the module reset signal.
 * 
 * Software writes a bit to 1 to assert the module reset signal and to 0 to de-
 * assert the module reset signal.
 * 
 * All fields are reset by a cold reset. All fields are also reset by a warm reset.
 * 
 * The reset value of all fields is 1. This holds the corresponding module in reset
 * until software is ready to release the module from reset by writing 0 to its
 * field.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description 
 * :--------|:-------|:------|:-------------
 *  [0]     | RW     | 0x1   | Watch Dog0  
 *  [1]     | RW     | 0x1   | Watch Dog1  
 *  [2]     | RW     | 0x1   | Watch Dog2  
 *  [3]     | RW     | 0x1   | Watch Dog3  
 *  [4]     | RW     | 0x1   | l4systimer0 
 *  [5]     | RW     | 0x1   | l4sys_timer1
 *  [6]     | RW     | 0x1   | SP Timer 0  
 *  [7]     | RW     | 0x1   | SP Timer 1  
 *  [8]     | RW     | 0x1   | I2C0        
 *  [9]     | RW     | 0x1   | I2C1        
 *  [10]    | RW     | 0x1   | I2C2        
 *  [11]    | RW     | 0x1   | I2C3        
 *  [12]    | RW     | 0x1   | I2C4        
 *  [15:13] | ???    | 0x7   | *UNDEFINED* 
 *  [16]    | RW     | 0x1   | UART0       
 *  [17]    | RW     | 0x1   | UART1       
 *  [23:18] | ???    | 0x3f  | *UNDEFINED* 
 *  [24]    | RW     | 0x1   | GPIO0       
 *  [25]    | RW     | 0x1   | GPIO1       
 *  [31:26] | ???    | 0x3f  | *UNDEFINED* 
 * 
 */
/*
 * Field : Watch Dog0 - watchdog0
 * 
 * Resets Watchdog 0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1MODRST_WATCHDOG0 register field. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1MODRST_WATCHDOG0 register field. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG0_MSB        0
/* The width in bits of the ALT_RSTMGR_PER1MODRST_WATCHDOG0 register field. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1MODRST_WATCHDOG0 register field value. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG0_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_PER1MODRST_WATCHDOG0 register field value. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_PER1MODRST_WATCHDOG0 register field. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1MODRST_WATCHDOG0 field value from a register. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_PER1MODRST_WATCHDOG0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Watch Dog1 - watchdog1
 * 
 * Resets Watchdog 1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1MODRST_WATCHDOG1 register field. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG1_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1MODRST_WATCHDOG1 register field. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG1_MSB        1
/* The width in bits of the ALT_RSTMGR_PER1MODRST_WATCHDOG1 register field. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1MODRST_WATCHDOG1 register field value. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG1_SET_MSK    0x00000002
/* The mask used to clear the ALT_RSTMGR_PER1MODRST_WATCHDOG1 register field value. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG1_CLR_MSK    0xfffffffd
/* The reset value of the ALT_RSTMGR_PER1MODRST_WATCHDOG1 register field. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1MODRST_WATCHDOG1 field value from a register. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG1_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_RSTMGR_PER1MODRST_WATCHDOG1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG1_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : Watch Dog2 - watchdog2
 * 
 * Resets Watchdog 2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1MODRST_WATCHDOG2 register field. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG2_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1MODRST_WATCHDOG2 register field. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG2_MSB        2
/* The width in bits of the ALT_RSTMGR_PER1MODRST_WATCHDOG2 register field. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG2_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1MODRST_WATCHDOG2 register field value. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG2_SET_MSK    0x00000004
/* The mask used to clear the ALT_RSTMGR_PER1MODRST_WATCHDOG2 register field value. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG2_CLR_MSK    0xfffffffb
/* The reset value of the ALT_RSTMGR_PER1MODRST_WATCHDOG2 register field. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG2_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1MODRST_WATCHDOG2 field value from a register. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG2_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_RSTMGR_PER1MODRST_WATCHDOG2 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG2_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : Watch Dog3 - watchdog3
 * 
 * Resets Watchdog 3
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1MODRST_WATCHDOG3 register field. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG3_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1MODRST_WATCHDOG3 register field. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG3_MSB        3
/* The width in bits of the ALT_RSTMGR_PER1MODRST_WATCHDOG3 register field. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG3_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1MODRST_WATCHDOG3 register field value. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG3_SET_MSK    0x00000008
/* The mask used to clear the ALT_RSTMGR_PER1MODRST_WATCHDOG3 register field value. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG3_CLR_MSK    0xfffffff7
/* The reset value of the ALT_RSTMGR_PER1MODRST_WATCHDOG3 register field. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG3_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1MODRST_WATCHDOG3 field value from a register. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG3_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_RSTMGR_PER1MODRST_WATCHDOG3 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1MODRST_WATCHDOG3_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : l4systimer0 - l4systimer0
 * 
 * Resets l4sys_timer0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1MODRST_L4SYSTIMER0 register field. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTIMER0_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1MODRST_L4SYSTIMER0 register field. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTIMER0_MSB        4
/* The width in bits of the ALT_RSTMGR_PER1MODRST_L4SYSTIMER0 register field. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTIMER0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1MODRST_L4SYSTIMER0 register field value. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTIMER0_SET_MSK    0x00000010
/* The mask used to clear the ALT_RSTMGR_PER1MODRST_L4SYSTIMER0 register field value. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTIMER0_CLR_MSK    0xffffffef
/* The reset value of the ALT_RSTMGR_PER1MODRST_L4SYSTIMER0 register field. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTIMER0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1MODRST_L4SYSTIMER0 field value from a register. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTIMER0_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_RSTMGR_PER1MODRST_L4SYSTIMER0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTIMER0_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : l4sys_timer1 - l4systimer1
 * 
 * Resets l4sys_timer1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1MODRST_L4SYSTIMER1 register field. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTIMER1_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1MODRST_L4SYSTIMER1 register field. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTIMER1_MSB        5
/* The width in bits of the ALT_RSTMGR_PER1MODRST_L4SYSTIMER1 register field. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTIMER1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1MODRST_L4SYSTIMER1 register field value. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTIMER1_SET_MSK    0x00000020
/* The mask used to clear the ALT_RSTMGR_PER1MODRST_L4SYSTIMER1 register field value. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTIMER1_CLR_MSK    0xffffffdf
/* The reset value of the ALT_RSTMGR_PER1MODRST_L4SYSTIMER1 register field. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTIMER1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1MODRST_L4SYSTIMER1 field value from a register. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTIMER1_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_RSTMGR_PER1MODRST_L4SYSTIMER1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTIMER1_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : SP Timer 0 - sptimer0
 * 
 * Resets SP timer 0 connected to L4
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1MODRST_SPTIMER0 register field. */
#define ALT_RSTMGR_PER1MODRST_SPTIMER0_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1MODRST_SPTIMER0 register field. */
#define ALT_RSTMGR_PER1MODRST_SPTIMER0_MSB        6
/* The width in bits of the ALT_RSTMGR_PER1MODRST_SPTIMER0 register field. */
#define ALT_RSTMGR_PER1MODRST_SPTIMER0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1MODRST_SPTIMER0 register field value. */
#define ALT_RSTMGR_PER1MODRST_SPTIMER0_SET_MSK    0x00000040
/* The mask used to clear the ALT_RSTMGR_PER1MODRST_SPTIMER0 register field value. */
#define ALT_RSTMGR_PER1MODRST_SPTIMER0_CLR_MSK    0xffffffbf
/* The reset value of the ALT_RSTMGR_PER1MODRST_SPTIMER0 register field. */
#define ALT_RSTMGR_PER1MODRST_SPTIMER0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1MODRST_SPTIMER0 field value from a register. */
#define ALT_RSTMGR_PER1MODRST_SPTIMER0_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_RSTMGR_PER1MODRST_SPTIMER0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1MODRST_SPTIMER0_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : SP Timer 1 - sptimer1
 * 
 * Resets SP timer 1 connected to L4
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1MODRST_SPTIMER1 register field. */
#define ALT_RSTMGR_PER1MODRST_SPTIMER1_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1MODRST_SPTIMER1 register field. */
#define ALT_RSTMGR_PER1MODRST_SPTIMER1_MSB        7
/* The width in bits of the ALT_RSTMGR_PER1MODRST_SPTIMER1 register field. */
#define ALT_RSTMGR_PER1MODRST_SPTIMER1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1MODRST_SPTIMER1 register field value. */
#define ALT_RSTMGR_PER1MODRST_SPTIMER1_SET_MSK    0x00000080
/* The mask used to clear the ALT_RSTMGR_PER1MODRST_SPTIMER1 register field value. */
#define ALT_RSTMGR_PER1MODRST_SPTIMER1_CLR_MSK    0xffffff7f
/* The reset value of the ALT_RSTMGR_PER1MODRST_SPTIMER1 register field. */
#define ALT_RSTMGR_PER1MODRST_SPTIMER1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1MODRST_SPTIMER1 field value from a register. */
#define ALT_RSTMGR_PER1MODRST_SPTIMER1_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_RSTMGR_PER1MODRST_SPTIMER1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1MODRST_SPTIMER1_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : I2C0 - i2c0
 * 
 * Resets I2C0 controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1MODRST_I2C0 register field. */
#define ALT_RSTMGR_PER1MODRST_I2C0_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1MODRST_I2C0 register field. */
#define ALT_RSTMGR_PER1MODRST_I2C0_MSB        8
/* The width in bits of the ALT_RSTMGR_PER1MODRST_I2C0 register field. */
#define ALT_RSTMGR_PER1MODRST_I2C0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1MODRST_I2C0 register field value. */
#define ALT_RSTMGR_PER1MODRST_I2C0_SET_MSK    0x00000100
/* The mask used to clear the ALT_RSTMGR_PER1MODRST_I2C0 register field value. */
#define ALT_RSTMGR_PER1MODRST_I2C0_CLR_MSK    0xfffffeff
/* The reset value of the ALT_RSTMGR_PER1MODRST_I2C0 register field. */
#define ALT_RSTMGR_PER1MODRST_I2C0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1MODRST_I2C0 field value from a register. */
#define ALT_RSTMGR_PER1MODRST_I2C0_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_RSTMGR_PER1MODRST_I2C0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1MODRST_I2C0_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : I2C1 - i2c1
 * 
 * Resets I2C1 controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1MODRST_I2C1 register field. */
#define ALT_RSTMGR_PER1MODRST_I2C1_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1MODRST_I2C1 register field. */
#define ALT_RSTMGR_PER1MODRST_I2C1_MSB        9
/* The width in bits of the ALT_RSTMGR_PER1MODRST_I2C1 register field. */
#define ALT_RSTMGR_PER1MODRST_I2C1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1MODRST_I2C1 register field value. */
#define ALT_RSTMGR_PER1MODRST_I2C1_SET_MSK    0x00000200
/* The mask used to clear the ALT_RSTMGR_PER1MODRST_I2C1 register field value. */
#define ALT_RSTMGR_PER1MODRST_I2C1_CLR_MSK    0xfffffdff
/* The reset value of the ALT_RSTMGR_PER1MODRST_I2C1 register field. */
#define ALT_RSTMGR_PER1MODRST_I2C1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1MODRST_I2C1 field value from a register. */
#define ALT_RSTMGR_PER1MODRST_I2C1_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_RSTMGR_PER1MODRST_I2C1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1MODRST_I2C1_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : I2C2 - i2c2
 * 
 * Resets I2C2 controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1MODRST_I2C2 register field. */
#define ALT_RSTMGR_PER1MODRST_I2C2_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1MODRST_I2C2 register field. */
#define ALT_RSTMGR_PER1MODRST_I2C2_MSB        10
/* The width in bits of the ALT_RSTMGR_PER1MODRST_I2C2 register field. */
#define ALT_RSTMGR_PER1MODRST_I2C2_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1MODRST_I2C2 register field value. */
#define ALT_RSTMGR_PER1MODRST_I2C2_SET_MSK    0x00000400
/* The mask used to clear the ALT_RSTMGR_PER1MODRST_I2C2 register field value. */
#define ALT_RSTMGR_PER1MODRST_I2C2_CLR_MSK    0xfffffbff
/* The reset value of the ALT_RSTMGR_PER1MODRST_I2C2 register field. */
#define ALT_RSTMGR_PER1MODRST_I2C2_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1MODRST_I2C2 field value from a register. */
#define ALT_RSTMGR_PER1MODRST_I2C2_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_RSTMGR_PER1MODRST_I2C2 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1MODRST_I2C2_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : I2C3 - i2c3
 * 
 * Resets I2C3 controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1MODRST_I2C3 register field. */
#define ALT_RSTMGR_PER1MODRST_I2C3_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1MODRST_I2C3 register field. */
#define ALT_RSTMGR_PER1MODRST_I2C3_MSB        11
/* The width in bits of the ALT_RSTMGR_PER1MODRST_I2C3 register field. */
#define ALT_RSTMGR_PER1MODRST_I2C3_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1MODRST_I2C3 register field value. */
#define ALT_RSTMGR_PER1MODRST_I2C3_SET_MSK    0x00000800
/* The mask used to clear the ALT_RSTMGR_PER1MODRST_I2C3 register field value. */
#define ALT_RSTMGR_PER1MODRST_I2C3_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_RSTMGR_PER1MODRST_I2C3 register field. */
#define ALT_RSTMGR_PER1MODRST_I2C3_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1MODRST_I2C3 field value from a register. */
#define ALT_RSTMGR_PER1MODRST_I2C3_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_RSTMGR_PER1MODRST_I2C3 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1MODRST_I2C3_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : I2C4 - i2c4
 * 
 * Resets I2C4 controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1MODRST_I2C4 register field. */
#define ALT_RSTMGR_PER1MODRST_I2C4_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1MODRST_I2C4 register field. */
#define ALT_RSTMGR_PER1MODRST_I2C4_MSB        12
/* The width in bits of the ALT_RSTMGR_PER1MODRST_I2C4 register field. */
#define ALT_RSTMGR_PER1MODRST_I2C4_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1MODRST_I2C4 register field value. */
#define ALT_RSTMGR_PER1MODRST_I2C4_SET_MSK    0x00001000
/* The mask used to clear the ALT_RSTMGR_PER1MODRST_I2C4 register field value. */
#define ALT_RSTMGR_PER1MODRST_I2C4_CLR_MSK    0xffffefff
/* The reset value of the ALT_RSTMGR_PER1MODRST_I2C4 register field. */
#define ALT_RSTMGR_PER1MODRST_I2C4_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1MODRST_I2C4 field value from a register. */
#define ALT_RSTMGR_PER1MODRST_I2C4_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_RSTMGR_PER1MODRST_I2C4 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1MODRST_I2C4_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : UART0 - uart0
 * 
 * Resets UART0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1MODRST_UART0 register field. */
#define ALT_RSTMGR_PER1MODRST_UART0_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1MODRST_UART0 register field. */
#define ALT_RSTMGR_PER1MODRST_UART0_MSB        16
/* The width in bits of the ALT_RSTMGR_PER1MODRST_UART0 register field. */
#define ALT_RSTMGR_PER1MODRST_UART0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1MODRST_UART0 register field value. */
#define ALT_RSTMGR_PER1MODRST_UART0_SET_MSK    0x00010000
/* The mask used to clear the ALT_RSTMGR_PER1MODRST_UART0 register field value. */
#define ALT_RSTMGR_PER1MODRST_UART0_CLR_MSK    0xfffeffff
/* The reset value of the ALT_RSTMGR_PER1MODRST_UART0 register field. */
#define ALT_RSTMGR_PER1MODRST_UART0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1MODRST_UART0 field value from a register. */
#define ALT_RSTMGR_PER1MODRST_UART0_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_RSTMGR_PER1MODRST_UART0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1MODRST_UART0_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : UART1 - uart1
 * 
 * Resets UART1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1MODRST_UART1 register field. */
#define ALT_RSTMGR_PER1MODRST_UART1_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1MODRST_UART1 register field. */
#define ALT_RSTMGR_PER1MODRST_UART1_MSB        17
/* The width in bits of the ALT_RSTMGR_PER1MODRST_UART1 register field. */
#define ALT_RSTMGR_PER1MODRST_UART1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1MODRST_UART1 register field value. */
#define ALT_RSTMGR_PER1MODRST_UART1_SET_MSK    0x00020000
/* The mask used to clear the ALT_RSTMGR_PER1MODRST_UART1 register field value. */
#define ALT_RSTMGR_PER1MODRST_UART1_CLR_MSK    0xfffdffff
/* The reset value of the ALT_RSTMGR_PER1MODRST_UART1 register field. */
#define ALT_RSTMGR_PER1MODRST_UART1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1MODRST_UART1 field value from a register. */
#define ALT_RSTMGR_PER1MODRST_UART1_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_RSTMGR_PER1MODRST_UART1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1MODRST_UART1_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : GPIO0 - gpio0
 * 
 * Resets GPIO0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1MODRST_GPIO0 register field. */
#define ALT_RSTMGR_PER1MODRST_GPIO0_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1MODRST_GPIO0 register field. */
#define ALT_RSTMGR_PER1MODRST_GPIO0_MSB        24
/* The width in bits of the ALT_RSTMGR_PER1MODRST_GPIO0 register field. */
#define ALT_RSTMGR_PER1MODRST_GPIO0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1MODRST_GPIO0 register field value. */
#define ALT_RSTMGR_PER1MODRST_GPIO0_SET_MSK    0x01000000
/* The mask used to clear the ALT_RSTMGR_PER1MODRST_GPIO0 register field value. */
#define ALT_RSTMGR_PER1MODRST_GPIO0_CLR_MSK    0xfeffffff
/* The reset value of the ALT_RSTMGR_PER1MODRST_GPIO0 register field. */
#define ALT_RSTMGR_PER1MODRST_GPIO0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1MODRST_GPIO0 field value from a register. */
#define ALT_RSTMGR_PER1MODRST_GPIO0_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_RSTMGR_PER1MODRST_GPIO0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1MODRST_GPIO0_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : GPIO1 - gpio1
 * 
 * Resets GPIO1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1MODRST_GPIO1 register field. */
#define ALT_RSTMGR_PER1MODRST_GPIO1_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1MODRST_GPIO1 register field. */
#define ALT_RSTMGR_PER1MODRST_GPIO1_MSB        25
/* The width in bits of the ALT_RSTMGR_PER1MODRST_GPIO1 register field. */
#define ALT_RSTMGR_PER1MODRST_GPIO1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1MODRST_GPIO1 register field value. */
#define ALT_RSTMGR_PER1MODRST_GPIO1_SET_MSK    0x02000000
/* The mask used to clear the ALT_RSTMGR_PER1MODRST_GPIO1 register field value. */
#define ALT_RSTMGR_PER1MODRST_GPIO1_CLR_MSK    0xfdffffff
/* The reset value of the ALT_RSTMGR_PER1MODRST_GPIO1 register field. */
#define ALT_RSTMGR_PER1MODRST_GPIO1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1MODRST_GPIO1 field value from a register. */
#define ALT_RSTMGR_PER1MODRST_GPIO1_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_RSTMGR_PER1MODRST_GPIO1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1MODRST_GPIO1_SET(value) (((value) << 25) & 0x02000000)

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
 * The struct declaration for register ALT_RSTMGR_PER1MODRST.
 */
struct ALT_RSTMGR_PER1MODRST_s
{
    volatile uint32_t  watchdog0   :  1;  /* Watch Dog0 */
    volatile uint32_t  watchdog1   :  1;  /* Watch Dog1 */
    volatile uint32_t  watchdog2   :  1;  /* Watch Dog2 */
    volatile uint32_t  watchdog3   :  1;  /* Watch Dog3 */
    volatile uint32_t  l4systimer0 :  1;  /* l4systimer0 */
    volatile uint32_t  l4systimer1 :  1;  /* l4sys_timer1 */
    volatile uint32_t  sptimer0    :  1;  /* SP Timer 0 */
    volatile uint32_t  sptimer1    :  1;  /* SP Timer 1 */
    volatile uint32_t  i2c0        :  1;  /* I2C0 */
    volatile uint32_t  i2c1        :  1;  /* I2C1 */
    volatile uint32_t  i2c2        :  1;  /* I2C2 */
    volatile uint32_t  i2c3        :  1;  /* I2C3 */
    volatile uint32_t  i2c4        :  1;  /* I2C4 */
    uint32_t                       :  3;  /* *UNDEFINED* */
    volatile uint32_t  uart0       :  1;  /* UART0 */
    volatile uint32_t  uart1       :  1;  /* UART1 */
    uint32_t                       :  6;  /* *UNDEFINED* */
    volatile uint32_t  gpio0       :  1;  /* GPIO0 */
    volatile uint32_t  gpio1       :  1;  /* GPIO1 */
    uint32_t                       :  6;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_PER1MODRST. */
typedef struct ALT_RSTMGR_PER1MODRST_s  ALT_RSTMGR_PER1MODRST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_PER1MODRST register. */
#define ALT_RSTMGR_PER1MODRST_RESET       0xffffffff
/* The byte offset of the ALT_RSTMGR_PER1MODRST register from the beginning of the component. */
#define ALT_RSTMGR_PER1MODRST_OFST        0x28

/*
 * Register : Bridge Reset Register - brgmodrst
 * 
 * The BRGMODRST register is used by software to control the bridge module resets.
 * Software explicitly asserts and de-asserts module reset signals by writing bits
 * in the appropriate *MODRST register. It is up to software to ensure module reset
 * signals are asserted for the appropriate length of time and are de-asserted in
 * the correct order. It is also up to software to not assert a module reset signal
 * that would prevent software from de-asserting the module reset signal.
 * 
 * Software writes a bit to 1 to assert the module reset signal and to 0 to de-
 * assert the module reset signal.
 * 
 * All fields are reset by a cold reset. All fields are also reset by a warm reset
 * if not masked by the corresponding BRGWARMMASK field.
 * 
 * The reset value of all fields is 1. This holds the corresponding module in reset
 * until software is ready to release the module from reset by writing 0 to its
 * field.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset     | Description         
 * :-------|:-------|:----------|:---------------------
 *  [0]    | RW     | 0x1       | SOC2FPGA Bridge     
 *  [1]    | RW     | 0x1       | LWHPS2FPGA Bridge   
 *  [2]    | RW     | 0x1       | FPGA2SOC Bridge     
 *  [3]    | RW     | 0x1       | F2S SDRAM0 Bridge   
 *  [4]    | RW     | 0x1       | F2S SDRAM1 Bridge   
 *  [5]    | RW     | 0x1       | F2S SDRAM2 Bridge   
 *  [6]    | RW     | 0x1       | Resets DDR Scheduler
 *  [31:7] | ???    | 0x1ffffff | *UNDEFINED*         
 * 
 */
/*
 * Field : SOC2FPGA Bridge - soc2fpga
 * 
 * Resets SOC2FPGA Bridge.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_BRGMODRST_SOC2FPGA register field. */
#define ALT_RSTMGR_BRGMODRST_SOC2FPGA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_BRGMODRST_SOC2FPGA register field. */
#define ALT_RSTMGR_BRGMODRST_SOC2FPGA_MSB        0
/* The width in bits of the ALT_RSTMGR_BRGMODRST_SOC2FPGA register field. */
#define ALT_RSTMGR_BRGMODRST_SOC2FPGA_WIDTH      1
/* The mask used to set the ALT_RSTMGR_BRGMODRST_SOC2FPGA register field value. */
#define ALT_RSTMGR_BRGMODRST_SOC2FPGA_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_BRGMODRST_SOC2FPGA register field value. */
#define ALT_RSTMGR_BRGMODRST_SOC2FPGA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_BRGMODRST_SOC2FPGA register field. */
#define ALT_RSTMGR_BRGMODRST_SOC2FPGA_RESET      0x1
/* Extracts the ALT_RSTMGR_BRGMODRST_SOC2FPGA field value from a register. */
#define ALT_RSTMGR_BRGMODRST_SOC2FPGA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_BRGMODRST_SOC2FPGA register field value suitable for setting the register. */
#define ALT_RSTMGR_BRGMODRST_SOC2FPGA_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : LWHPS2FPGA Bridge - lwhps2fpga
 * 
 * Resets LWHPS2FPGA Bridge.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_BRGMODRST_LWHPS2FPGA register field. */
#define ALT_RSTMGR_BRGMODRST_LWHPS2FPGA_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_BRGMODRST_LWHPS2FPGA register field. */
#define ALT_RSTMGR_BRGMODRST_LWHPS2FPGA_MSB        1
/* The width in bits of the ALT_RSTMGR_BRGMODRST_LWHPS2FPGA register field. */
#define ALT_RSTMGR_BRGMODRST_LWHPS2FPGA_WIDTH      1
/* The mask used to set the ALT_RSTMGR_BRGMODRST_LWHPS2FPGA register field value. */
#define ALT_RSTMGR_BRGMODRST_LWHPS2FPGA_SET_MSK    0x00000002
/* The mask used to clear the ALT_RSTMGR_BRGMODRST_LWHPS2FPGA register field value. */
#define ALT_RSTMGR_BRGMODRST_LWHPS2FPGA_CLR_MSK    0xfffffffd
/* The reset value of the ALT_RSTMGR_BRGMODRST_LWHPS2FPGA register field. */
#define ALT_RSTMGR_BRGMODRST_LWHPS2FPGA_RESET      0x1
/* Extracts the ALT_RSTMGR_BRGMODRST_LWHPS2FPGA field value from a register. */
#define ALT_RSTMGR_BRGMODRST_LWHPS2FPGA_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_RSTMGR_BRGMODRST_LWHPS2FPGA register field value suitable for setting the register. */
#define ALT_RSTMGR_BRGMODRST_LWHPS2FPGA_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : FPGA2SOC Bridge - fpga2soc
 * 
 * Resets FPGA2SOC Bridge.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_BRGMODRST_FPGA2SOC register field. */
#define ALT_RSTMGR_BRGMODRST_FPGA2SOC_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_BRGMODRST_FPGA2SOC register field. */
#define ALT_RSTMGR_BRGMODRST_FPGA2SOC_MSB        2
/* The width in bits of the ALT_RSTMGR_BRGMODRST_FPGA2SOC register field. */
#define ALT_RSTMGR_BRGMODRST_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_RSTMGR_BRGMODRST_FPGA2SOC register field value. */
#define ALT_RSTMGR_BRGMODRST_FPGA2SOC_SET_MSK    0x00000004
/* The mask used to clear the ALT_RSTMGR_BRGMODRST_FPGA2SOC register field value. */
#define ALT_RSTMGR_BRGMODRST_FPGA2SOC_CLR_MSK    0xfffffffb
/* The reset value of the ALT_RSTMGR_BRGMODRST_FPGA2SOC register field. */
#define ALT_RSTMGR_BRGMODRST_FPGA2SOC_RESET      0x1
/* Extracts the ALT_RSTMGR_BRGMODRST_FPGA2SOC field value from a register. */
#define ALT_RSTMGR_BRGMODRST_FPGA2SOC_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_RSTMGR_BRGMODRST_FPGA2SOC register field value suitable for setting the register. */
#define ALT_RSTMGR_BRGMODRST_FPGA2SOC_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : F2S SDRAM0 Bridge - f2ssdram0
 * 
 * Resets F2S_SDRAM0 Bridge.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_BRGMODRST_F2SSDRAM0 register field. */
#define ALT_RSTMGR_BRGMODRST_F2SSDRAM0_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_BRGMODRST_F2SSDRAM0 register field. */
#define ALT_RSTMGR_BRGMODRST_F2SSDRAM0_MSB        3
/* The width in bits of the ALT_RSTMGR_BRGMODRST_F2SSDRAM0 register field. */
#define ALT_RSTMGR_BRGMODRST_F2SSDRAM0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_BRGMODRST_F2SSDRAM0 register field value. */
#define ALT_RSTMGR_BRGMODRST_F2SSDRAM0_SET_MSK    0x00000008
/* The mask used to clear the ALT_RSTMGR_BRGMODRST_F2SSDRAM0 register field value. */
#define ALT_RSTMGR_BRGMODRST_F2SSDRAM0_CLR_MSK    0xfffffff7
/* The reset value of the ALT_RSTMGR_BRGMODRST_F2SSDRAM0 register field. */
#define ALT_RSTMGR_BRGMODRST_F2SSDRAM0_RESET      0x1
/* Extracts the ALT_RSTMGR_BRGMODRST_F2SSDRAM0 field value from a register. */
#define ALT_RSTMGR_BRGMODRST_F2SSDRAM0_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_RSTMGR_BRGMODRST_F2SSDRAM0 register field value suitable for setting the register. */
#define ALT_RSTMGR_BRGMODRST_F2SSDRAM0_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : F2S SDRAM1 Bridge - f2ssdram1
 * 
 * Resets F2S_SDRAM1 Bridge.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_BRGMODRST_F2SSDRAM1 register field. */
#define ALT_RSTMGR_BRGMODRST_F2SSDRAM1_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_BRGMODRST_F2SSDRAM1 register field. */
#define ALT_RSTMGR_BRGMODRST_F2SSDRAM1_MSB        4
/* The width in bits of the ALT_RSTMGR_BRGMODRST_F2SSDRAM1 register field. */
#define ALT_RSTMGR_BRGMODRST_F2SSDRAM1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_BRGMODRST_F2SSDRAM1 register field value. */
#define ALT_RSTMGR_BRGMODRST_F2SSDRAM1_SET_MSK    0x00000010
/* The mask used to clear the ALT_RSTMGR_BRGMODRST_F2SSDRAM1 register field value. */
#define ALT_RSTMGR_BRGMODRST_F2SSDRAM1_CLR_MSK    0xffffffef
/* The reset value of the ALT_RSTMGR_BRGMODRST_F2SSDRAM1 register field. */
#define ALT_RSTMGR_BRGMODRST_F2SSDRAM1_RESET      0x1
/* Extracts the ALT_RSTMGR_BRGMODRST_F2SSDRAM1 field value from a register. */
#define ALT_RSTMGR_BRGMODRST_F2SSDRAM1_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_RSTMGR_BRGMODRST_F2SSDRAM1 register field value suitable for setting the register. */
#define ALT_RSTMGR_BRGMODRST_F2SSDRAM1_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : F2S SDRAM2 Bridge - f2ssdram2
 * 
 * Resets F2S_SDRAM2 Bridge.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_BRGMODRST_F2SSDRAM2 register field. */
#define ALT_RSTMGR_BRGMODRST_F2SSDRAM2_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_BRGMODRST_F2SSDRAM2 register field. */
#define ALT_RSTMGR_BRGMODRST_F2SSDRAM2_MSB        5
/* The width in bits of the ALT_RSTMGR_BRGMODRST_F2SSDRAM2 register field. */
#define ALT_RSTMGR_BRGMODRST_F2SSDRAM2_WIDTH      1
/* The mask used to set the ALT_RSTMGR_BRGMODRST_F2SSDRAM2 register field value. */
#define ALT_RSTMGR_BRGMODRST_F2SSDRAM2_SET_MSK    0x00000020
/* The mask used to clear the ALT_RSTMGR_BRGMODRST_F2SSDRAM2 register field value. */
#define ALT_RSTMGR_BRGMODRST_F2SSDRAM2_CLR_MSK    0xffffffdf
/* The reset value of the ALT_RSTMGR_BRGMODRST_F2SSDRAM2 register field. */
#define ALT_RSTMGR_BRGMODRST_F2SSDRAM2_RESET      0x1
/* Extracts the ALT_RSTMGR_BRGMODRST_F2SSDRAM2 field value from a register. */
#define ALT_RSTMGR_BRGMODRST_F2SSDRAM2_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_RSTMGR_BRGMODRST_F2SSDRAM2 register field value suitable for setting the register. */
#define ALT_RSTMGR_BRGMODRST_F2SSDRAM2_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Resets DDR Scheduler - ddrsch
 * 
 * Resets logic in the DDR Scheduler in the NOC.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_BRGMODRST_DDRSCH register field. */
#define ALT_RSTMGR_BRGMODRST_DDRSCH_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_BRGMODRST_DDRSCH register field. */
#define ALT_RSTMGR_BRGMODRST_DDRSCH_MSB        6
/* The width in bits of the ALT_RSTMGR_BRGMODRST_DDRSCH register field. */
#define ALT_RSTMGR_BRGMODRST_DDRSCH_WIDTH      1
/* The mask used to set the ALT_RSTMGR_BRGMODRST_DDRSCH register field value. */
#define ALT_RSTMGR_BRGMODRST_DDRSCH_SET_MSK    0x00000040
/* The mask used to clear the ALT_RSTMGR_BRGMODRST_DDRSCH register field value. */
#define ALT_RSTMGR_BRGMODRST_DDRSCH_CLR_MSK    0xffffffbf
/* The reset value of the ALT_RSTMGR_BRGMODRST_DDRSCH register field. */
#define ALT_RSTMGR_BRGMODRST_DDRSCH_RESET      0x1
/* Extracts the ALT_RSTMGR_BRGMODRST_DDRSCH field value from a register. */
#define ALT_RSTMGR_BRGMODRST_DDRSCH_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_RSTMGR_BRGMODRST_DDRSCH register field value suitable for setting the register. */
#define ALT_RSTMGR_BRGMODRST_DDRSCH_SET(value) (((value) << 6) & 0x00000040)

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
 * The struct declaration for register ALT_RSTMGR_BRGMODRST.
 */
struct ALT_RSTMGR_BRGMODRST_s
{
    volatile uint32_t  soc2fpga   :  1;  /* SOC2FPGA Bridge */
    volatile uint32_t  lwhps2fpga :  1;  /* LWHPS2FPGA Bridge */
    volatile uint32_t  fpga2soc   :  1;  /* FPGA2SOC Bridge */
    volatile uint32_t  f2ssdram0  :  1;  /* F2S SDRAM0 Bridge */
    volatile uint32_t  f2ssdram1  :  1;  /* F2S SDRAM1 Bridge */
    volatile uint32_t  f2ssdram2  :  1;  /* F2S SDRAM2 Bridge */
    volatile uint32_t  ddrsch     :  1;  /* Resets DDR Scheduler */
    uint32_t                      : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_BRGMODRST. */
typedef struct ALT_RSTMGR_BRGMODRST_s  ALT_RSTMGR_BRGMODRST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_BRGMODRST register. */
#define ALT_RSTMGR_BRGMODRST_RESET       0xffffffff
/* The byte offset of the ALT_RSTMGR_BRGMODRST register from the beginning of the component. */
#define ALT_RSTMGR_BRGMODRST_OFST        0x2c

/*
 * Register : COLD Module Reset Register - coldmodrst
 * 
 * The COLDMODRST register is used by software to trigger module resets. Writing 1
 * to any of these fields will cause the L2 or CPU POR reset signal to be asserted
 * if that module is in WFI mode. The Reset Manager hardware will bring the module
 * back out of reset after the appropriate amount of time.
 * 
 * All fields are only reset by a cold reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                             
 * :-------|:-------|:------|:-----------------------------------------
 *  [0]    | RW     | 0x0   | Resets CPUPOR0                          
 *  [1]    | RW     | 0x0   | Resets CPUPOR1                          
 *  [2]    | RW     | 0x0   | Resets CPUPOR2                          
 *  [3]    | RW     | 0x0   | Resets CPUPOR3                          
 *  [7:4]  | ???    | 0x0   | *UNDEFINED*                             
 *  [8]    | RW     | 0x0   | Resets L2 shared memory system contoller
 *  [31:9] | ???    | 0x0   | *UNDEFINED*                             
 * 
 */
/*
 * Field : Resets CPUPOR0 - cpupor0
 * 
 * Resets ncpuporreset port of CPU0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_COLDMODRST_CPUPOR0 register field. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_COLDMODRST_CPUPOR0 register field. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR0_MSB        0
/* The width in bits of the ALT_RSTMGR_COLDMODRST_CPUPOR0 register field. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_COLDMODRST_CPUPOR0 register field value. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR0_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_COLDMODRST_CPUPOR0 register field value. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_COLDMODRST_CPUPOR0 register field. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR0_RESET      0x0
/* Extracts the ALT_RSTMGR_COLDMODRST_CPUPOR0 field value from a register. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_COLDMODRST_CPUPOR0 register field value suitable for setting the register. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Resets CPUPOR1 - cpupor1
 * 
 * Resets ncpuporreset port of CPU1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_COLDMODRST_CPUPOR1 register field. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR1_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_COLDMODRST_CPUPOR1 register field. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR1_MSB        1
/* The width in bits of the ALT_RSTMGR_COLDMODRST_CPUPOR1 register field. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_COLDMODRST_CPUPOR1 register field value. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR1_SET_MSK    0x00000002
/* The mask used to clear the ALT_RSTMGR_COLDMODRST_CPUPOR1 register field value. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR1_CLR_MSK    0xfffffffd
/* The reset value of the ALT_RSTMGR_COLDMODRST_CPUPOR1 register field. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR1_RESET      0x0
/* Extracts the ALT_RSTMGR_COLDMODRST_CPUPOR1 field value from a register. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR1_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_RSTMGR_COLDMODRST_CPUPOR1 register field value suitable for setting the register. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR1_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : Resets CPUPOR2 - cpupor2
 * 
 * Resets ncpuporreset port of CPU2.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_COLDMODRST_CPUPOR2 register field. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR2_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_COLDMODRST_CPUPOR2 register field. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR2_MSB        2
/* The width in bits of the ALT_RSTMGR_COLDMODRST_CPUPOR2 register field. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR2_WIDTH      1
/* The mask used to set the ALT_RSTMGR_COLDMODRST_CPUPOR2 register field value. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR2_SET_MSK    0x00000004
/* The mask used to clear the ALT_RSTMGR_COLDMODRST_CPUPOR2 register field value. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR2_CLR_MSK    0xfffffffb
/* The reset value of the ALT_RSTMGR_COLDMODRST_CPUPOR2 register field. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR2_RESET      0x0
/* Extracts the ALT_RSTMGR_COLDMODRST_CPUPOR2 field value from a register. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR2_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_RSTMGR_COLDMODRST_CPUPOR2 register field value suitable for setting the register. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR2_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : Resets CPUPOR3 - cpupor3
 * 
 * Resets ncpuporreset port of CPU3.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_COLDMODRST_CPUPOR3 register field. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR3_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_COLDMODRST_CPUPOR3 register field. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR3_MSB        3
/* The width in bits of the ALT_RSTMGR_COLDMODRST_CPUPOR3 register field. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR3_WIDTH      1
/* The mask used to set the ALT_RSTMGR_COLDMODRST_CPUPOR3 register field value. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR3_SET_MSK    0x00000008
/* The mask used to clear the ALT_RSTMGR_COLDMODRST_CPUPOR3 register field value. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR3_CLR_MSK    0xfffffff7
/* The reset value of the ALT_RSTMGR_COLDMODRST_CPUPOR3 register field. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR3_RESET      0x0
/* Extracts the ALT_RSTMGR_COLDMODRST_CPUPOR3 field value from a register. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR3_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_RSTMGR_COLDMODRST_CPUPOR3 register field value suitable for setting the register. */
#define ALT_RSTMGR_COLDMODRST_CPUPOR3_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : Resets L2 shared memory system contoller - l2
 * 
 * Resets L2 shared  memory system contoller.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_COLDMODRST_L2 register field. */
#define ALT_RSTMGR_COLDMODRST_L2_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_COLDMODRST_L2 register field. */
#define ALT_RSTMGR_COLDMODRST_L2_MSB        8
/* The width in bits of the ALT_RSTMGR_COLDMODRST_L2 register field. */
#define ALT_RSTMGR_COLDMODRST_L2_WIDTH      1
/* The mask used to set the ALT_RSTMGR_COLDMODRST_L2 register field value. */
#define ALT_RSTMGR_COLDMODRST_L2_SET_MSK    0x00000100
/* The mask used to clear the ALT_RSTMGR_COLDMODRST_L2 register field value. */
#define ALT_RSTMGR_COLDMODRST_L2_CLR_MSK    0xfffffeff
/* The reset value of the ALT_RSTMGR_COLDMODRST_L2 register field. */
#define ALT_RSTMGR_COLDMODRST_L2_RESET      0x0
/* Extracts the ALT_RSTMGR_COLDMODRST_L2 field value from a register. */
#define ALT_RSTMGR_COLDMODRST_L2_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_RSTMGR_COLDMODRST_L2 register field value suitable for setting the register. */
#define ALT_RSTMGR_COLDMODRST_L2_SET(value) (((value) << 8) & 0x00000100)

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
 * The struct declaration for register ALT_RSTMGR_COLDMODRST.
 */
struct ALT_RSTMGR_COLDMODRST_s
{
    volatile uint32_t  cpupor0 :  1;  /* Resets CPUPOR0 */
    volatile uint32_t  cpupor1 :  1;  /* Resets CPUPOR1 */
    volatile uint32_t  cpupor2 :  1;  /* Resets CPUPOR2 */
    volatile uint32_t  cpupor3 :  1;  /* Resets CPUPOR3 */
    uint32_t                   :  4;  /* *UNDEFINED* */
    volatile uint32_t  l2      :  1;  /* Resets L2 shared memory system contoller */
    uint32_t                   : 23;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_COLDMODRST. */
typedef struct ALT_RSTMGR_COLDMODRST_s  ALT_RSTMGR_COLDMODRST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_COLDMODRST register. */
#define ALT_RSTMGR_COLDMODRST_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_COLDMODRST register from the beginning of the component. */
#define ALT_RSTMGR_COLDMODRST_OFST        0x34

/*
 * Register : Debug Module Reset Register - dbgmodrst
 * 
 * The DBGMODRST register is used by software to control module resets.
 * 
 * When software writes the csdap_rst bit to 1, the RstMgr hardware will assert
 * both the csdap_rst and the dbg_rst resets, and then release just the dbg_rst
 * after 16 boot clock cycles . The csdap_rst will remain asserted until software
 * clears the csdap_rst bit.
 * 
 * When software writes the dbg_rst bit to 1, the RstMgr hardware will assert both
 * the csdap_rst and the dbg_rst, and then release just the csdap_rst after 16 boot
 * clock cycles. The dbg_rst will remain asserted until software clears the dbg_rst
 * bit.
 * 
 * When software writes 1 to both the cs_dap_rst and  the dbg_rst, the RstMgr
 * hardware will assert both the cs_dap_rst and the dbg_rst, and then release both
 * the csdap_rst and dbg_rst after 16 boot clock cycles. Software does not need to
 * clear either bit.
 * 
 * All fields are only reset by a cold reset.
 * 
 * Note: It is recommended that software performs the handshake(debug_l3noc)  by
 * using the corresponding bits of "hdsken" and "hdskreq" registers before
 * resetting dap or debug logic. SW should poll the "debug_l3noc_ack" bit and
 * implement its own timer. Only after the handshake is completed, SW should assert
 * these resets.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description         
 * :-------|:-------|:------|:---------------------
 *  [0]    | RW     | 0x0   | Resets Debug Domain 
 *  [1]    | RW     | 0x0   | Resets Coresight DAP
 *  [31:2] | ???    | 0x0   | *UNDEFINED*         
 * 
 */
/*
 * Field : Resets Debug Domain - dbg_rst
 * 
 * Resets logic located  in the debug domain.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_DBGMODRST_DBG_RST register field. */
#define ALT_RSTMGR_DBGMODRST_DBG_RST_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_DBGMODRST_DBG_RST register field. */
#define ALT_RSTMGR_DBGMODRST_DBG_RST_MSB        0
/* The width in bits of the ALT_RSTMGR_DBGMODRST_DBG_RST register field. */
#define ALT_RSTMGR_DBGMODRST_DBG_RST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_DBGMODRST_DBG_RST register field value. */
#define ALT_RSTMGR_DBGMODRST_DBG_RST_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_DBGMODRST_DBG_RST register field value. */
#define ALT_RSTMGR_DBGMODRST_DBG_RST_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_DBGMODRST_DBG_RST register field. */
#define ALT_RSTMGR_DBGMODRST_DBG_RST_RESET      0x0
/* Extracts the ALT_RSTMGR_DBGMODRST_DBG_RST field value from a register. */
#define ALT_RSTMGR_DBGMODRST_DBG_RST_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_DBGMODRST_DBG_RST register field value suitable for setting the register. */
#define ALT_RSTMGR_DBGMODRST_DBG_RST_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Resets Coresight DAP - csdap_rst
 * 
 * Resets logic located  in the DAP domain.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_DBGMODRST_CSDAP_RST register field. */
#define ALT_RSTMGR_DBGMODRST_CSDAP_RST_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_DBGMODRST_CSDAP_RST register field. */
#define ALT_RSTMGR_DBGMODRST_CSDAP_RST_MSB        1
/* The width in bits of the ALT_RSTMGR_DBGMODRST_CSDAP_RST register field. */
#define ALT_RSTMGR_DBGMODRST_CSDAP_RST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_DBGMODRST_CSDAP_RST register field value. */
#define ALT_RSTMGR_DBGMODRST_CSDAP_RST_SET_MSK    0x00000002
/* The mask used to clear the ALT_RSTMGR_DBGMODRST_CSDAP_RST register field value. */
#define ALT_RSTMGR_DBGMODRST_CSDAP_RST_CLR_MSK    0xfffffffd
/* The reset value of the ALT_RSTMGR_DBGMODRST_CSDAP_RST register field. */
#define ALT_RSTMGR_DBGMODRST_CSDAP_RST_RESET      0x0
/* Extracts the ALT_RSTMGR_DBGMODRST_CSDAP_RST field value from a register. */
#define ALT_RSTMGR_DBGMODRST_CSDAP_RST_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_RSTMGR_DBGMODRST_CSDAP_RST register field value suitable for setting the register. */
#define ALT_RSTMGR_DBGMODRST_CSDAP_RST_SET(value) (((value) << 1) & 0x00000002)

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
 * The struct declaration for register ALT_RSTMGR_DBGMODRST.
 */
struct ALT_RSTMGR_DBGMODRST_s
{
    volatile uint32_t  dbg_rst   :  1;  /* Resets Debug Domain */
    volatile uint32_t  csdap_rst :  1;  /* Resets Coresight DAP */
    uint32_t                     : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_DBGMODRST. */
typedef struct ALT_RSTMGR_DBGMODRST_s  ALT_RSTMGR_DBGMODRST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_DBGMODRST register. */
#define ALT_RSTMGR_DBGMODRST_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_DBGMODRST register from the beginning of the component. */
#define ALT_RSTMGR_DBGMODRST_OFST        0x3c

/*
 * Register : TAP Module Reset Register - tapmodrst
 * 
 * The TAPMODRST register is used by software to trigger module resets. Software
 * triggers the assertion of the TAP module reset signal by writing 1 to the TAP
 * bit. The Reset Manager will hold the TAP module reset signal asserted for 1000
 * clock cycles and then release the TAP module reset. If the TAP module is
 * currently asserted, writing to this register has no effect.
 * 
 * All fields are reset by a por reset. The reset value of all fields is 0.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                   
 * :-------|:-------|:------|:-------------------------------
 *  [0]    | RW     | 0x0   | JTAG TAP DOMAIN Reset Register
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                   
 * 
 */
/*
 * Field : JTAG TAP DOMAIN Reset Register - tap
 * 
 * Resets logic located only in the jtag tap domain.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_TAPMODRST_TAP register field. */
#define ALT_RSTMGR_TAPMODRST_TAP_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_TAPMODRST_TAP register field. */
#define ALT_RSTMGR_TAPMODRST_TAP_MSB        0
/* The width in bits of the ALT_RSTMGR_TAPMODRST_TAP register field. */
#define ALT_RSTMGR_TAPMODRST_TAP_WIDTH      1
/* The mask used to set the ALT_RSTMGR_TAPMODRST_TAP register field value. */
#define ALT_RSTMGR_TAPMODRST_TAP_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_TAPMODRST_TAP register field value. */
#define ALT_RSTMGR_TAPMODRST_TAP_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_TAPMODRST_TAP register field. */
#define ALT_RSTMGR_TAPMODRST_TAP_RESET      0x0
/* Extracts the ALT_RSTMGR_TAPMODRST_TAP field value from a register. */
#define ALT_RSTMGR_TAPMODRST_TAP_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_TAPMODRST_TAP register field value suitable for setting the register. */
#define ALT_RSTMGR_TAPMODRST_TAP_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_RSTMGR_TAPMODRST.
 */
struct ALT_RSTMGR_TAPMODRST_s
{
    volatile uint32_t  tap :  1;  /* JTAG TAP DOMAIN Reset Register */
    uint32_t               : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_TAPMODRST. */
typedef struct ALT_RSTMGR_TAPMODRST_s  ALT_RSTMGR_TAPMODRST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_TAPMODRST register. */
#define ALT_RSTMGR_TAPMODRST_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_TAPMODRST register from the beginning of the component. */
#define ALT_RSTMGR_TAPMODRST_OFST        0x40

/*
 * Register : Bridge Warm Mask Register - brgwarmmask
 * 
 * The "BRGWARMMASK"  register is used by software to mask the assertion of module
 * reset signals on a warm reset. If the bit is 1, the module reset signal is
 * asserted during a warm reset. If the bit is 0, the module reset signal is not
 * asserted during a warm reset. The bit assignments of the *WARMMASK registers
 * match the corresponding *MODRST registers.
 * 
 * All fields are only reset by a cold reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset     | Description                      
 * :-------|:-------|:----------|:----------------------------------
 *  [0]    | RW     | 0x1       | Mask for SOC2FPGA Bridge Reset   
 *  [1]    | RW     | 0x1       | Mask for LWHPS2FPGA Bridge Reset.
 *  [2]    | RW     | 0x1       | Mask for FPGA2SOC Bridge Reset.  
 *  [3]    | RW     | 0x1       | Mask for F2S SDRAM0 Bridge Reset 
 *  [4]    | RW     | 0x1       | Mask for F2S SDRAM1 Bridge Reset 
 *  [5]    | RW     | 0x1       | Mask for F2S SDRAM2 Bridge Reset 
 *  [6]    | RW     | 0x1       | Mask for DDR Scheduler Reset     
 *  [31:7] | ???    | 0x1ffffff | *UNDEFINED*                      
 * 
 */
/*
 * Field : Mask for SOC2FPGA Bridge Reset - soc2fpga
 * 
 * Masks hardware sequenced warm reset for SOC2FPGA Bridge.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_BRGWARMMASK_SOC2FPGA register field. */
#define ALT_RSTMGR_BRGWARMMASK_SOC2FPGA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_BRGWARMMASK_SOC2FPGA register field. */
#define ALT_RSTMGR_BRGWARMMASK_SOC2FPGA_MSB        0
/* The width in bits of the ALT_RSTMGR_BRGWARMMASK_SOC2FPGA register field. */
#define ALT_RSTMGR_BRGWARMMASK_SOC2FPGA_WIDTH      1
/* The mask used to set the ALT_RSTMGR_BRGWARMMASK_SOC2FPGA register field value. */
#define ALT_RSTMGR_BRGWARMMASK_SOC2FPGA_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_BRGWARMMASK_SOC2FPGA register field value. */
#define ALT_RSTMGR_BRGWARMMASK_SOC2FPGA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_BRGWARMMASK_SOC2FPGA register field. */
#define ALT_RSTMGR_BRGWARMMASK_SOC2FPGA_RESET      0x1
/* Extracts the ALT_RSTMGR_BRGWARMMASK_SOC2FPGA field value from a register. */
#define ALT_RSTMGR_BRGWARMMASK_SOC2FPGA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_BRGWARMMASK_SOC2FPGA register field value suitable for setting the register. */
#define ALT_RSTMGR_BRGWARMMASK_SOC2FPGA_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Mask for LWHPS2FPGA Bridge Reset. - lwhps2fpga
 * 
 * Masks hardware sequenced warm reset for LWHPS2FPGA Bridge
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_BRGWARMMASK_LWHPS2FPGA register field. */
#define ALT_RSTMGR_BRGWARMMASK_LWHPS2FPGA_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_BRGWARMMASK_LWHPS2FPGA register field. */
#define ALT_RSTMGR_BRGWARMMASK_LWHPS2FPGA_MSB        1
/* The width in bits of the ALT_RSTMGR_BRGWARMMASK_LWHPS2FPGA register field. */
#define ALT_RSTMGR_BRGWARMMASK_LWHPS2FPGA_WIDTH      1
/* The mask used to set the ALT_RSTMGR_BRGWARMMASK_LWHPS2FPGA register field value. */
#define ALT_RSTMGR_BRGWARMMASK_LWHPS2FPGA_SET_MSK    0x00000002
/* The mask used to clear the ALT_RSTMGR_BRGWARMMASK_LWHPS2FPGA register field value. */
#define ALT_RSTMGR_BRGWARMMASK_LWHPS2FPGA_CLR_MSK    0xfffffffd
/* The reset value of the ALT_RSTMGR_BRGWARMMASK_LWHPS2FPGA register field. */
#define ALT_RSTMGR_BRGWARMMASK_LWHPS2FPGA_RESET      0x1
/* Extracts the ALT_RSTMGR_BRGWARMMASK_LWHPS2FPGA field value from a register. */
#define ALT_RSTMGR_BRGWARMMASK_LWHPS2FPGA_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_RSTMGR_BRGWARMMASK_LWHPS2FPGA register field value suitable for setting the register. */
#define ALT_RSTMGR_BRGWARMMASK_LWHPS2FPGA_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : Mask for FPGA2SOC Bridge Reset. - fpga2soc
 * 
 * Masks hardware sequenced warm reset for FPGA2SOC Bridge
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_BRGWARMMASK_FPGA2SOC register field. */
#define ALT_RSTMGR_BRGWARMMASK_FPGA2SOC_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_BRGWARMMASK_FPGA2SOC register field. */
#define ALT_RSTMGR_BRGWARMMASK_FPGA2SOC_MSB        2
/* The width in bits of the ALT_RSTMGR_BRGWARMMASK_FPGA2SOC register field. */
#define ALT_RSTMGR_BRGWARMMASK_FPGA2SOC_WIDTH      1
/* The mask used to set the ALT_RSTMGR_BRGWARMMASK_FPGA2SOC register field value. */
#define ALT_RSTMGR_BRGWARMMASK_FPGA2SOC_SET_MSK    0x00000004
/* The mask used to clear the ALT_RSTMGR_BRGWARMMASK_FPGA2SOC register field value. */
#define ALT_RSTMGR_BRGWARMMASK_FPGA2SOC_CLR_MSK    0xfffffffb
/* The reset value of the ALT_RSTMGR_BRGWARMMASK_FPGA2SOC register field. */
#define ALT_RSTMGR_BRGWARMMASK_FPGA2SOC_RESET      0x1
/* Extracts the ALT_RSTMGR_BRGWARMMASK_FPGA2SOC field value from a register. */
#define ALT_RSTMGR_BRGWARMMASK_FPGA2SOC_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_RSTMGR_BRGWARMMASK_FPGA2SOC register field value suitable for setting the register. */
#define ALT_RSTMGR_BRGWARMMASK_FPGA2SOC_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : Mask for F2S SDRAM0 Bridge Reset - f2ssdram0
 * 
 * Masks hardware sequenced warm reset for F2S_SDRAM0 Bridge
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_BRGWARMMASK_F2SSDRAM0 register field. */
#define ALT_RSTMGR_BRGWARMMASK_F2SSDRAM0_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_BRGWARMMASK_F2SSDRAM0 register field. */
#define ALT_RSTMGR_BRGWARMMASK_F2SSDRAM0_MSB        3
/* The width in bits of the ALT_RSTMGR_BRGWARMMASK_F2SSDRAM0 register field. */
#define ALT_RSTMGR_BRGWARMMASK_F2SSDRAM0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_BRGWARMMASK_F2SSDRAM0 register field value. */
#define ALT_RSTMGR_BRGWARMMASK_F2SSDRAM0_SET_MSK    0x00000008
/* The mask used to clear the ALT_RSTMGR_BRGWARMMASK_F2SSDRAM0 register field value. */
#define ALT_RSTMGR_BRGWARMMASK_F2SSDRAM0_CLR_MSK    0xfffffff7
/* The reset value of the ALT_RSTMGR_BRGWARMMASK_F2SSDRAM0 register field. */
#define ALT_RSTMGR_BRGWARMMASK_F2SSDRAM0_RESET      0x1
/* Extracts the ALT_RSTMGR_BRGWARMMASK_F2SSDRAM0 field value from a register. */
#define ALT_RSTMGR_BRGWARMMASK_F2SSDRAM0_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_RSTMGR_BRGWARMMASK_F2SSDRAM0 register field value suitable for setting the register. */
#define ALT_RSTMGR_BRGWARMMASK_F2SSDRAM0_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : Mask for F2S SDRAM1 Bridge Reset - f2ssdram1
 * 
 * Masks hardware sequenced warm reset for F2S_SDRAM1 Bridge.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_BRGWARMMASK_F2SSDRAM1 register field. */
#define ALT_RSTMGR_BRGWARMMASK_F2SSDRAM1_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_BRGWARMMASK_F2SSDRAM1 register field. */
#define ALT_RSTMGR_BRGWARMMASK_F2SSDRAM1_MSB        4
/* The width in bits of the ALT_RSTMGR_BRGWARMMASK_F2SSDRAM1 register field. */
#define ALT_RSTMGR_BRGWARMMASK_F2SSDRAM1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_BRGWARMMASK_F2SSDRAM1 register field value. */
#define ALT_RSTMGR_BRGWARMMASK_F2SSDRAM1_SET_MSK    0x00000010
/* The mask used to clear the ALT_RSTMGR_BRGWARMMASK_F2SSDRAM1 register field value. */
#define ALT_RSTMGR_BRGWARMMASK_F2SSDRAM1_CLR_MSK    0xffffffef
/* The reset value of the ALT_RSTMGR_BRGWARMMASK_F2SSDRAM1 register field. */
#define ALT_RSTMGR_BRGWARMMASK_F2SSDRAM1_RESET      0x1
/* Extracts the ALT_RSTMGR_BRGWARMMASK_F2SSDRAM1 field value from a register. */
#define ALT_RSTMGR_BRGWARMMASK_F2SSDRAM1_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_RSTMGR_BRGWARMMASK_F2SSDRAM1 register field value suitable for setting the register. */
#define ALT_RSTMGR_BRGWARMMASK_F2SSDRAM1_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : Mask for F2S SDRAM2 Bridge Reset - f2ssdram2
 * 
 * Masks hardware sequenced warm reset for F2S_SDRAM2 Bridge.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_BRGWARMMASK_F2SSDRAM2 register field. */
#define ALT_RSTMGR_BRGWARMMASK_F2SSDRAM2_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_BRGWARMMASK_F2SSDRAM2 register field. */
#define ALT_RSTMGR_BRGWARMMASK_F2SSDRAM2_MSB        5
/* The width in bits of the ALT_RSTMGR_BRGWARMMASK_F2SSDRAM2 register field. */
#define ALT_RSTMGR_BRGWARMMASK_F2SSDRAM2_WIDTH      1
/* The mask used to set the ALT_RSTMGR_BRGWARMMASK_F2SSDRAM2 register field value. */
#define ALT_RSTMGR_BRGWARMMASK_F2SSDRAM2_SET_MSK    0x00000020
/* The mask used to clear the ALT_RSTMGR_BRGWARMMASK_F2SSDRAM2 register field value. */
#define ALT_RSTMGR_BRGWARMMASK_F2SSDRAM2_CLR_MSK    0xffffffdf
/* The reset value of the ALT_RSTMGR_BRGWARMMASK_F2SSDRAM2 register field. */
#define ALT_RSTMGR_BRGWARMMASK_F2SSDRAM2_RESET      0x1
/* Extracts the ALT_RSTMGR_BRGWARMMASK_F2SSDRAM2 field value from a register. */
#define ALT_RSTMGR_BRGWARMMASK_F2SSDRAM2_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_RSTMGR_BRGWARMMASK_F2SSDRAM2 register field value suitable for setting the register. */
#define ALT_RSTMGR_BRGWARMMASK_F2SSDRAM2_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Mask for DDR Scheduler Reset - ddrsch
 * 
 * Masks hardware sequenced warm reset for the DDR Scheduler in the NOC.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_BRGWARMMASK_DDRSCH register field. */
#define ALT_RSTMGR_BRGWARMMASK_DDRSCH_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_BRGWARMMASK_DDRSCH register field. */
#define ALT_RSTMGR_BRGWARMMASK_DDRSCH_MSB        6
/* The width in bits of the ALT_RSTMGR_BRGWARMMASK_DDRSCH register field. */
#define ALT_RSTMGR_BRGWARMMASK_DDRSCH_WIDTH      1
/* The mask used to set the ALT_RSTMGR_BRGWARMMASK_DDRSCH register field value. */
#define ALT_RSTMGR_BRGWARMMASK_DDRSCH_SET_MSK    0x00000040
/* The mask used to clear the ALT_RSTMGR_BRGWARMMASK_DDRSCH register field value. */
#define ALT_RSTMGR_BRGWARMMASK_DDRSCH_CLR_MSK    0xffffffbf
/* The reset value of the ALT_RSTMGR_BRGWARMMASK_DDRSCH register field. */
#define ALT_RSTMGR_BRGWARMMASK_DDRSCH_RESET      0x1
/* Extracts the ALT_RSTMGR_BRGWARMMASK_DDRSCH field value from a register. */
#define ALT_RSTMGR_BRGWARMMASK_DDRSCH_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_RSTMGR_BRGWARMMASK_DDRSCH register field value suitable for setting the register. */
#define ALT_RSTMGR_BRGWARMMASK_DDRSCH_SET(value) (((value) << 6) & 0x00000040)

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
 * The struct declaration for register ALT_RSTMGR_BRGWARMMASK.
 */
struct ALT_RSTMGR_BRGWARMMASK_s
{
    volatile uint32_t  soc2fpga   :  1;  /* Mask for SOC2FPGA Bridge Reset */
    volatile uint32_t  lwhps2fpga :  1;  /* Mask for LWHPS2FPGA Bridge Reset. */
    volatile uint32_t  fpga2soc   :  1;  /* Mask for FPGA2SOC Bridge Reset. */
    volatile uint32_t  f2ssdram0  :  1;  /* Mask for F2S SDRAM0 Bridge Reset */
    volatile uint32_t  f2ssdram1  :  1;  /* Mask for F2S SDRAM1 Bridge Reset */
    volatile uint32_t  f2ssdram2  :  1;  /* Mask for F2S SDRAM2 Bridge Reset */
    volatile uint32_t  ddrsch     :  1;  /* Mask for DDR Scheduler Reset */
    uint32_t                      : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_BRGWARMMASK. */
typedef struct ALT_RSTMGR_BRGWARMMASK_s  ALT_RSTMGR_BRGWARMMASK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_BRGWARMMASK register. */
#define ALT_RSTMGR_BRGWARMMASK_RESET       0xffffffff
/* The byte offset of the ALT_RSTMGR_BRGWARMMASK register from the beginning of the component. */
#define ALT_RSTMGR_BRGWARMMASK_OFST        0x4c

/*
 * Register : Test Status - tststa
 * 
 * Status fields used for testing the Reset Manager.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [4:0]  | R      | 0x0   | Reset State
 *  [31:5] | ???    | 0x0   | *UNDEFINED*
 * 
 */
/*
 * Field : Reset State - rstst
 * 
 * Warm/cold reset control FSM state.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_TSTSTA_RSTST register field. */
#define ALT_RSTMGR_TSTSTA_RSTST_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_TSTSTA_RSTST register field. */
#define ALT_RSTMGR_TSTSTA_RSTST_MSB        4
/* The width in bits of the ALT_RSTMGR_TSTSTA_RSTST register field. */
#define ALT_RSTMGR_TSTSTA_RSTST_WIDTH      5
/* The mask used to set the ALT_RSTMGR_TSTSTA_RSTST register field value. */
#define ALT_RSTMGR_TSTSTA_RSTST_SET_MSK    0x0000001f
/* The mask used to clear the ALT_RSTMGR_TSTSTA_RSTST register field value. */
#define ALT_RSTMGR_TSTSTA_RSTST_CLR_MSK    0xffffffe0
/* The reset value of the ALT_RSTMGR_TSTSTA_RSTST register field. */
#define ALT_RSTMGR_TSTSTA_RSTST_RESET      0x0
/* Extracts the ALT_RSTMGR_TSTSTA_RSTST field value from a register. */
#define ALT_RSTMGR_TSTSTA_RSTST_GET(value) (((value) & 0x0000001f) >> 0)
/* Produces a ALT_RSTMGR_TSTSTA_RSTST register field value suitable for setting the register. */
#define ALT_RSTMGR_TSTSTA_RSTST_SET(value) (((value) << 0) & 0x0000001f)

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
 * The struct declaration for register ALT_RSTMGR_TSTSTA.
 */
struct ALT_RSTMGR_TSTSTA_s
{
    const volatile uint32_t  rstst :  5;  /* Reset State */
    uint32_t                       : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_TSTSTA. */
typedef struct ALT_RSTMGR_TSTSTA_s  ALT_RSTMGR_TSTSTA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_TSTSTA register. */
#define ALT_RSTMGR_TSTSTA_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_TSTSTA register from the beginning of the component. */
#define ALT_RSTMGR_TSTSTA_OFST        0x5c

/*
 * Register : Hand Shake Time Out Value - hdsktimeout
 * 
 * The Warm Reset handshake time-out controls the amount of time to wait for the
 * ETR, FPGA and SDRAM interface to respond to a reset handshake request. The
 * register defaults to 10,240 l4_sys_free_clk cycles, which at 100 MHz will be
 * 102.4 micro-seconds.  This value will be a 25 bit programmable value in SW.  The
 * maximum programmable value would be 2^25-1 l4_sys_free_clk cycles.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset  | Description                     
 * :-------|:-------|:-------|:---------------------------------
 *  [31:0] | RW     | 0x2800 | Handshake timeout value Register
 * 
 */
/*
 * Field : Handshake timeout value Register - val
 * 
 * ETR, FPGA and SDRAM interface handshake time-out value.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HDSKTIMEOUT_VAL register field. */
#define ALT_RSTMGR_HDSKTIMEOUT_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HDSKTIMEOUT_VAL register field. */
#define ALT_RSTMGR_HDSKTIMEOUT_VAL_MSB        31
/* The width in bits of the ALT_RSTMGR_HDSKTIMEOUT_VAL register field. */
#define ALT_RSTMGR_HDSKTIMEOUT_VAL_WIDTH      32
/* The mask used to set the ALT_RSTMGR_HDSKTIMEOUT_VAL register field value. */
#define ALT_RSTMGR_HDSKTIMEOUT_VAL_SET_MSK    0xffffffff
/* The mask used to clear the ALT_RSTMGR_HDSKTIMEOUT_VAL register field value. */
#define ALT_RSTMGR_HDSKTIMEOUT_VAL_CLR_MSK    0x00000000
/* The reset value of the ALT_RSTMGR_HDSKTIMEOUT_VAL register field. */
#define ALT_RSTMGR_HDSKTIMEOUT_VAL_RESET      0x2800
/* Extracts the ALT_RSTMGR_HDSKTIMEOUT_VAL field value from a register. */
#define ALT_RSTMGR_HDSKTIMEOUT_VAL_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_RSTMGR_HDSKTIMEOUT_VAL register field value suitable for setting the register. */
#define ALT_RSTMGR_HDSKTIMEOUT_VAL_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_RSTMGR_HDSKTIMEOUT.
 */
struct ALT_RSTMGR_HDSKTIMEOUT_s
{
    volatile uint32_t  val : 32;  /* Handshake timeout value Register */
};

/* The typedef declaration for register ALT_RSTMGR_HDSKTIMEOUT. */
typedef struct ALT_RSTMGR_HDSKTIMEOUT_s  ALT_RSTMGR_HDSKTIMEOUT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_HDSKTIMEOUT register. */
#define ALT_RSTMGR_HDSKTIMEOUT_RESET       0x00002800
/* The byte offset of the ALT_RSTMGR_HDSKTIMEOUT register from the beginning of the component. */
#define ALT_RSTMGR_HDSKTIMEOUT_OFST        0x64

/*
 * Register : MPU L2 FLUSH Time Out Value Register - mpul2flushtimeout
 * 
 * The MPU L2 FLUSH handshake timeout will default to 1,048,576 which at 100 MHz
 * for l4_sys_free_clk will 1048 micro-seconds.  This value will be a 32 bit
 * programmable value in SW.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset    | Description              
 * :-------|:-------|:---------|:--------------------------
 *  [31:0] | RW     | 0x100000 | mpu l2flush timeout value
 * 
 */
/*
 * Field : mpu l2flush timeout value - val
 * 
 * MPU L2 flush handshake time-out value.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MPUL2FLUSHTIMEOUT_VAL register field. */
#define ALT_RSTMGR_MPUL2FLUSHTIMEOUT_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MPUL2FLUSHTIMEOUT_VAL register field. */
#define ALT_RSTMGR_MPUL2FLUSHTIMEOUT_VAL_MSB        31
/* The width in bits of the ALT_RSTMGR_MPUL2FLUSHTIMEOUT_VAL register field. */
#define ALT_RSTMGR_MPUL2FLUSHTIMEOUT_VAL_WIDTH      32
/* The mask used to set the ALT_RSTMGR_MPUL2FLUSHTIMEOUT_VAL register field value. */
#define ALT_RSTMGR_MPUL2FLUSHTIMEOUT_VAL_SET_MSK    0xffffffff
/* The mask used to clear the ALT_RSTMGR_MPUL2FLUSHTIMEOUT_VAL register field value. */
#define ALT_RSTMGR_MPUL2FLUSHTIMEOUT_VAL_CLR_MSK    0x00000000
/* The reset value of the ALT_RSTMGR_MPUL2FLUSHTIMEOUT_VAL register field. */
#define ALT_RSTMGR_MPUL2FLUSHTIMEOUT_VAL_RESET      0x100000
/* Extracts the ALT_RSTMGR_MPUL2FLUSHTIMEOUT_VAL field value from a register. */
#define ALT_RSTMGR_MPUL2FLUSHTIMEOUT_VAL_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_RSTMGR_MPUL2FLUSHTIMEOUT_VAL register field value suitable for setting the register. */
#define ALT_RSTMGR_MPUL2FLUSHTIMEOUT_VAL_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_RSTMGR_MPUL2FLUSHTIMEOUT.
 */
struct ALT_RSTMGR_MPUL2FLUSHTIMEOUT_s
{
    volatile uint32_t  val : 32;  /* mpu l2flush timeout value */
};

/* The typedef declaration for register ALT_RSTMGR_MPUL2FLUSHTIMEOUT. */
typedef struct ALT_RSTMGR_MPUL2FLUSHTIMEOUT_s  ALT_RSTMGR_MPUL2FLUSHTIMEOUT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_MPUL2FLUSHTIMEOUT register. */
#define ALT_RSTMGR_MPUL2FLUSHTIMEOUT_RESET       0x00100000
/* The byte offset of the ALT_RSTMGR_MPUL2FLUSHTIMEOUT register from the beginning of the component. */
#define ALT_RSTMGR_MPUL2FLUSHTIMEOUT_OFST        0x68

/*
 * Register : L3NOC Debug CS_DAP Handshake Time Out Value - dbghdsktimeout
 * 
 * The reset handshake time-out register controls the amount of time to wait for
 * the L3NOC interface to respond to a reset handshake request.
 * 
 * Note that the reset handshake is initiated when either the L3NOC or Debug/DAP
 * domain is getting reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset    | Description                     
 * :-------|:-------|:---------|:---------------------------------
 *  [31:0] | RW     | 0x100000 | Handshake timeout value Register
 * 
 */
/*
 * Field : Handshake timeout value Register - val
 * 
 * L3NOC interface handshake time-out value.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_DBGHDSKTIMEOUT_VAL register field. */
#define ALT_RSTMGR_DBGHDSKTIMEOUT_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_DBGHDSKTIMEOUT_VAL register field. */
#define ALT_RSTMGR_DBGHDSKTIMEOUT_VAL_MSB        31
/* The width in bits of the ALT_RSTMGR_DBGHDSKTIMEOUT_VAL register field. */
#define ALT_RSTMGR_DBGHDSKTIMEOUT_VAL_WIDTH      32
/* The mask used to set the ALT_RSTMGR_DBGHDSKTIMEOUT_VAL register field value. */
#define ALT_RSTMGR_DBGHDSKTIMEOUT_VAL_SET_MSK    0xffffffff
/* The mask used to clear the ALT_RSTMGR_DBGHDSKTIMEOUT_VAL register field value. */
#define ALT_RSTMGR_DBGHDSKTIMEOUT_VAL_CLR_MSK    0x00000000
/* The reset value of the ALT_RSTMGR_DBGHDSKTIMEOUT_VAL register field. */
#define ALT_RSTMGR_DBGHDSKTIMEOUT_VAL_RESET      0x100000
/* Extracts the ALT_RSTMGR_DBGHDSKTIMEOUT_VAL field value from a register. */
#define ALT_RSTMGR_DBGHDSKTIMEOUT_VAL_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_RSTMGR_DBGHDSKTIMEOUT_VAL register field value suitable for setting the register. */
#define ALT_RSTMGR_DBGHDSKTIMEOUT_VAL_SET(value) (((value) << 0) & 0xffffffff)

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
 * The struct declaration for register ALT_RSTMGR_DBGHDSKTIMEOUT.
 */
struct ALT_RSTMGR_DBGHDSKTIMEOUT_s
{
    volatile uint32_t  val : 32;  /* Handshake timeout value Register */
};

/* The typedef declaration for register ALT_RSTMGR_DBGHDSKTIMEOUT. */
typedef struct ALT_RSTMGR_DBGHDSKTIMEOUT_s  ALT_RSTMGR_DBGHDSKTIMEOUT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_DBGHDSKTIMEOUT register. */
#define ALT_RSTMGR_DBGHDSKTIMEOUT_RESET       0x00100000
/* The byte offset of the ALT_RSTMGR_DBGHDSKTIMEOUT register from the beginning of the component. */
#define ALT_RSTMGR_DBGHDSKTIMEOUT_OFST        0x6c

/*
 * Register : On Chip RAM load done - ocramload
 * 
 * SDM will set this register bit to 1 to indicate that the Onchip RAM content
 * loading is complete. The Reset Manager will wait for this bit to be set before
 * releasing the MPU warm resets.
 * 
 * This Register bit is reset by POR domain only.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [0]    | RW     | 0x0   | done       
 *  [31:1] | ???    | 0x0   | *UNDEFINED*
 * 
 */
/*
 * Field : done - done
 * 
 * SDM sets this bit to indicate the Reset Manager that the on chip ram loading is
 * done and it is safe to proceed with the MPU reset de-assertion sequence.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_OCRAMLOAD_DONE register field. */
#define ALT_RSTMGR_OCRAMLOAD_DONE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_OCRAMLOAD_DONE register field. */
#define ALT_RSTMGR_OCRAMLOAD_DONE_MSB        0
/* The width in bits of the ALT_RSTMGR_OCRAMLOAD_DONE register field. */
#define ALT_RSTMGR_OCRAMLOAD_DONE_WIDTH      1
/* The mask used to set the ALT_RSTMGR_OCRAMLOAD_DONE register field value. */
#define ALT_RSTMGR_OCRAMLOAD_DONE_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_OCRAMLOAD_DONE register field value. */
#define ALT_RSTMGR_OCRAMLOAD_DONE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_OCRAMLOAD_DONE register field. */
#define ALT_RSTMGR_OCRAMLOAD_DONE_RESET      0x0
/* Extracts the ALT_RSTMGR_OCRAMLOAD_DONE field value from a register. */
#define ALT_RSTMGR_OCRAMLOAD_DONE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_OCRAMLOAD_DONE register field value suitable for setting the register. */
#define ALT_RSTMGR_OCRAMLOAD_DONE_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_RSTMGR_OCRAMLOAD.
 */
struct ALT_RSTMGR_OCRAMLOAD_s
{
    volatile uint32_t  done :  1;  /* done */
    uint32_t                : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_OCRAMLOAD. */
typedef struct ALT_RSTMGR_OCRAMLOAD_s  ALT_RSTMGR_OCRAMLOAD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_OCRAMLOAD register. */
#define ALT_RSTMGR_OCRAMLOAD_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_OCRAMLOAD register from the beginning of the component. */
#define ALT_RSTMGR_OCRAMLOAD_OFST        0x80

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
 * The struct declaration for register group ALT_RSTMGR.
 */
struct ALT_RSTMGR_s
{
    volatile ALT_RSTMGR_STAT_t               stat;                 /* ALT_RSTMGR_STAT */
    volatile ALT_RSTMGR_MPURSTSTAT_t         mpurststat;           /* ALT_RSTMGR_MPURSTSTAT */
    volatile ALT_RSTMGR_MISCSTAT_t           miscstat;             /* ALT_RSTMGR_MISCSTAT */
    volatile uint32_t                        _pad_0xc_0xf;         /* *UNDEFINED* */
    volatile ALT_RSTMGR_HDSKEN_t             hdsken;               /* ALT_RSTMGR_HDSKEN */
    volatile ALT_RSTMGR_HDSKREQ_t            hdskreq;              /* ALT_RSTMGR_HDSKREQ */
    volatile ALT_RSTMGR_HDSKACK_t            hdskack;              /* ALT_RSTMGR_HDSKACK */
    volatile ALT_RSTMGR_HDSKSTALL_t          hdskstall;            /* ALT_RSTMGR_HDSKSTALL */
    volatile ALT_RSTMGR_MPUMODRST_t          mpumodrst;            /* ALT_RSTMGR_MPUMODRST */
    volatile ALT_RSTMGR_PER0MODRST_t         per0modrst;           /* ALT_RSTMGR_PER0MODRST */
    volatile ALT_RSTMGR_PER1MODRST_t         per1modrst;           /* ALT_RSTMGR_PER1MODRST */
    volatile ALT_RSTMGR_BRGMODRST_t          brgmodrst;            /* ALT_RSTMGR_BRGMODRST */
    volatile uint32_t                        _pad_0x30_0x33;       /* *UNDEFINED* */
    volatile ALT_RSTMGR_COLDMODRST_t         coldmodrst;           /* ALT_RSTMGR_COLDMODRST */
    volatile uint32_t                        _pad_0x38_0x3b;       /* *UNDEFINED* */
    volatile ALT_RSTMGR_DBGMODRST_t          dbgmodrst;            /* ALT_RSTMGR_DBGMODRST */
    volatile ALT_RSTMGR_TAPMODRST_t          tapmodrst;            /* ALT_RSTMGR_TAPMODRST */
    volatile uint32_t                        _pad_0x44_0x4b[2];    /* *UNDEFINED* */
    volatile ALT_RSTMGR_BRGWARMMASK_t        brgwarmmask;          /* ALT_RSTMGR_BRGWARMMASK */
    volatile uint32_t                        _pad_0x50_0x5b[3];    /* *UNDEFINED* */
    volatile ALT_RSTMGR_TSTSTA_t             tststa;               /* ALT_RSTMGR_TSTSTA */
    volatile uint32_t                        _pad_0x60_0x63;       /* *UNDEFINED* */
    volatile ALT_RSTMGR_HDSKTIMEOUT_t        hdsktimeout;          /* ALT_RSTMGR_HDSKTIMEOUT */
    volatile ALT_RSTMGR_MPUL2FLUSHTIMEOUT_t  mpul2flushtimeout;    /* ALT_RSTMGR_MPUL2FLUSHTIMEOUT */
    volatile ALT_RSTMGR_DBGHDSKTIMEOUT_t     dbghdsktimeout;       /* ALT_RSTMGR_DBGHDSKTIMEOUT */
    volatile uint32_t                        _pad_0x70_0x7f[4];    /* *UNDEFINED* */
    volatile ALT_RSTMGR_OCRAMLOAD_t          ocramload;            /* ALT_RSTMGR_OCRAMLOAD */
    volatile uint32_t                        _pad_0x84_0x100[31];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_RSTMGR. */
typedef struct ALT_RSTMGR_s  ALT_RSTMGR_t;
/* The struct declaration for the raw register contents of register group ALT_RSTMGR. */
struct ALT_RSTMGR_raw_s
{
    volatile uint32_t  stat;                 /* ALT_RSTMGR_STAT */
    volatile uint32_t  mpurststat;           /* ALT_RSTMGR_MPURSTSTAT */
    volatile uint32_t  miscstat;             /* ALT_RSTMGR_MISCSTAT */
    volatile uint32_t  _pad_0xc_0xf;         /* *UNDEFINED* */
    volatile uint32_t  hdsken;               /* ALT_RSTMGR_HDSKEN */
    volatile uint32_t  hdskreq;              /* ALT_RSTMGR_HDSKREQ */
    volatile uint32_t  hdskack;              /* ALT_RSTMGR_HDSKACK */
    volatile uint32_t  hdskstall;            /* ALT_RSTMGR_HDSKSTALL */
    volatile uint32_t  mpumodrst;            /* ALT_RSTMGR_MPUMODRST */
    volatile uint32_t  per0modrst;           /* ALT_RSTMGR_PER0MODRST */
    volatile uint32_t  per1modrst;           /* ALT_RSTMGR_PER1MODRST */
    volatile uint32_t  brgmodrst;            /* ALT_RSTMGR_BRGMODRST */
    volatile uint32_t  _pad_0x30_0x33;       /* *UNDEFINED* */
    volatile uint32_t  coldmodrst;           /* ALT_RSTMGR_COLDMODRST */
    volatile uint32_t  _pad_0x38_0x3b;       /* *UNDEFINED* */
    volatile uint32_t  dbgmodrst;            /* ALT_RSTMGR_DBGMODRST */
    volatile uint32_t  tapmodrst;            /* ALT_RSTMGR_TAPMODRST */
    volatile uint32_t  _pad_0x44_0x4b[2];    /* *UNDEFINED* */
    volatile uint32_t  brgwarmmask;          /* ALT_RSTMGR_BRGWARMMASK */
    volatile uint32_t  _pad_0x50_0x5b[3];    /* *UNDEFINED* */
    volatile uint32_t  tststa;               /* ALT_RSTMGR_TSTSTA */
    volatile uint32_t  _pad_0x60_0x63;       /* *UNDEFINED* */
    volatile uint32_t  hdsktimeout;          /* ALT_RSTMGR_HDSKTIMEOUT */
    volatile uint32_t  mpul2flushtimeout;    /* ALT_RSTMGR_MPUL2FLUSHTIMEOUT */
    volatile uint32_t  dbghdsktimeout;       /* ALT_RSTMGR_DBGHDSKTIMEOUT */
    volatile uint32_t  _pad_0x70_0x7f[4];    /* *UNDEFINED* */
    volatile uint32_t  ocramload;            /* ALT_RSTMGR_OCRAMLOAD */
    volatile uint32_t  _pad_0x84_0x100[31];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_RSTMGR. */
typedef struct ALT_RSTMGR_raw_s  ALT_RSTMGR_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_RSTMGR_H__ */

