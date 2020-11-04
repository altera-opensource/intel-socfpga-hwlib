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
 * Component : ALT_RSTMGR
 * 
 */
/*
 * Register : Status Register - stat
 * 
 * The STAT register contains bits that indicate the reset source. For reset
 * sources, a field is 1 if its associated reset requester caused the reset.
 * 
 * Software clears bits by writing them with a value of 1. Writes to bits with a
 * value of 0 are ignored.
 * 
 * After a cold reset is complete, all bits are reset to their reset value except
 * for the bit(s) that indicate the source of the cold reset. If multiple cold
 * reset requests overlap with each other, the source de-asserts the request last
 * will be logged. The other reset request source(s)  de-assert the request in the
 * same cycle will also be logged, the rest of the fields are reset to default
 * value of 0.
 * 
 * After a warm reset is complete, the bit(s) that indicate the source of  the warm
 * reset are set to 1. A warm reset doesn't clear any of the bits  in the STAT
 * register; these bits must be cleared by software writing  the STAT register.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                              
 * :--------|:-------|:------|:------------------------------------------
 *  [0]     | RW     | 0x0   | HPS Power-On Voltage Detector Cold Reset 
 *  [1]     | RW     | 0x0   | Power-On FPGA Voltage Detector Cold Reset
 *  [2]     | RW     | 0x0   | nPOR Pin Cold Reset                      
 *  [3]     | RW     | 0x0   | FPGA Core Cold Reset                     
 *  [4]     | RW     | 0x0   | CONFIG_IO Cold Reset                     
 *  [5]     | RW     | 0x0   | Software Cold Reset                      
 *  [7:6]   | ???    | 0x0   | *UNDEFINED*                              
 *  [8]     | RW     | 0x0   | nRST Pin Warm Reset                      
 *  [9]     | RW     | 0x0   | FPGA Core Warm Reset                     
 *  [10]    | RW     | 0x0   | Software Warm Reset                      
 *  [11]    | RW     | 0x0   | MPU Watchdog 0 Warm Reset                
 *  [12]    | RW     | 0x0   | MPU Watchdog 1 Warm Reset                
 *  [13]    | RW     | 0x0   | L4 Watchdog 0 Warm Reset                 
 *  [14]    | RW     | 0x0   | L4 Watchdog 1 Warm Reset                 
 *  [15]    | ???    | 0x0   | *UNDEFINED*                              
 *  [16]    | RW     | 0x0   | FPGA Core Debug Reset                    
 *  [17]    | RW     | 0x0   | DAP Debug Reset                          
 *  [31:18] | ???    | 0x0   | *UNDEFINED*                              
 * 
 */
/*
 * Field : HPS Power-On Voltage Detector Cold Reset - porhpsvoltrst
 * 
 * Built-in HPS POR voltage detector triggered a cold reset.  Security Manager
 * brought Reset Manager out of POR Reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_PORHPSVOLTRST register field. */
#define ALT_RSTMGR_STAT_PORHPSVOLTRST_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_PORHPSVOLTRST register field. */
#define ALT_RSTMGR_STAT_PORHPSVOLTRST_MSB        0
/* The width in bits of the ALT_RSTMGR_STAT_PORHPSVOLTRST register field. */
#define ALT_RSTMGR_STAT_PORHPSVOLTRST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_PORHPSVOLTRST register field value. */
#define ALT_RSTMGR_STAT_PORHPSVOLTRST_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_STAT_PORHPSVOLTRST register field value. */
#define ALT_RSTMGR_STAT_PORHPSVOLTRST_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_STAT_PORHPSVOLTRST register field. */
#define ALT_RSTMGR_STAT_PORHPSVOLTRST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_PORHPSVOLTRST field value from a register. */
#define ALT_RSTMGR_STAT_PORHPSVOLTRST_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_STAT_PORHPSVOLTRST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_PORHPSVOLTRST_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Power-On FPGA Voltage Detector Cold Reset - porfpgavoltrst
 * 
 * Built-in FPGA  POR voltage detector triggered a cold reset.  Security Manager
 * brought Reset Manager out of POR Reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_PORFPGAVOLTRST register field. */
#define ALT_RSTMGR_STAT_PORFPGAVOLTRST_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_PORFPGAVOLTRST register field. */
#define ALT_RSTMGR_STAT_PORFPGAVOLTRST_MSB        1
/* The width in bits of the ALT_RSTMGR_STAT_PORFPGAVOLTRST register field. */
#define ALT_RSTMGR_STAT_PORFPGAVOLTRST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_PORFPGAVOLTRST register field value. */
#define ALT_RSTMGR_STAT_PORFPGAVOLTRST_SET_MSK    0x00000002
/* The mask used to clear the ALT_RSTMGR_STAT_PORFPGAVOLTRST register field value. */
#define ALT_RSTMGR_STAT_PORFPGAVOLTRST_CLR_MSK    0xfffffffd
/* The reset value of the ALT_RSTMGR_STAT_PORFPGAVOLTRST register field. */
#define ALT_RSTMGR_STAT_PORFPGAVOLTRST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_PORFPGAVOLTRST field value from a register. */
#define ALT_RSTMGR_STAT_PORFPGAVOLTRST_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_RSTMGR_STAT_PORFPGAVOLTRST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_PORFPGAVOLTRST_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : nPOR Pin Cold Reset - nporpinrst
 * 
 * nPOR pin triggered a cold reset (por_pin_req = 1)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_NPORPINRST register field. */
#define ALT_RSTMGR_STAT_NPORPINRST_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_NPORPINRST register field. */
#define ALT_RSTMGR_STAT_NPORPINRST_MSB        2
/* The width in bits of the ALT_RSTMGR_STAT_NPORPINRST register field. */
#define ALT_RSTMGR_STAT_NPORPINRST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_NPORPINRST register field value. */
#define ALT_RSTMGR_STAT_NPORPINRST_SET_MSK    0x00000004
/* The mask used to clear the ALT_RSTMGR_STAT_NPORPINRST register field value. */
#define ALT_RSTMGR_STAT_NPORPINRST_CLR_MSK    0xfffffffb
/* The reset value of the ALT_RSTMGR_STAT_NPORPINRST register field. */
#define ALT_RSTMGR_STAT_NPORPINRST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_NPORPINRST field value from a register. */
#define ALT_RSTMGR_STAT_NPORPINRST_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_RSTMGR_STAT_NPORPINRST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_NPORPINRST_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : FPGA Core Cold Reset - fpgacoldrst
 * 
 * FPGA core triggered a cold reset (f2s_cold_rst_req = 1)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_FPGACOLDRST register field. */
#define ALT_RSTMGR_STAT_FPGACOLDRST_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_FPGACOLDRST register field. */
#define ALT_RSTMGR_STAT_FPGACOLDRST_MSB        3
/* The width in bits of the ALT_RSTMGR_STAT_FPGACOLDRST register field. */
#define ALT_RSTMGR_STAT_FPGACOLDRST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_FPGACOLDRST register field value. */
#define ALT_RSTMGR_STAT_FPGACOLDRST_SET_MSK    0x00000008
/* The mask used to clear the ALT_RSTMGR_STAT_FPGACOLDRST register field value. */
#define ALT_RSTMGR_STAT_FPGACOLDRST_CLR_MSK    0xfffffff7
/* The reset value of the ALT_RSTMGR_STAT_FPGACOLDRST register field. */
#define ALT_RSTMGR_STAT_FPGACOLDRST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_FPGACOLDRST field value from a register. */
#define ALT_RSTMGR_STAT_FPGACOLDRST_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_RSTMGR_STAT_FPGACOLDRST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_FPGACOLDRST_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : CONFIG_IO Cold Reset - configiocoldrst
 * 
 * FPGA entered CONFIG_IO mode and a triggered a cold reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_CFGIOCOLDRST register field. */
#define ALT_RSTMGR_STAT_CFGIOCOLDRST_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_CFGIOCOLDRST register field. */
#define ALT_RSTMGR_STAT_CFGIOCOLDRST_MSB        4
/* The width in bits of the ALT_RSTMGR_STAT_CFGIOCOLDRST register field. */
#define ALT_RSTMGR_STAT_CFGIOCOLDRST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_CFGIOCOLDRST register field value. */
#define ALT_RSTMGR_STAT_CFGIOCOLDRST_SET_MSK    0x00000010
/* The mask used to clear the ALT_RSTMGR_STAT_CFGIOCOLDRST register field value. */
#define ALT_RSTMGR_STAT_CFGIOCOLDRST_CLR_MSK    0xffffffef
/* The reset value of the ALT_RSTMGR_STAT_CFGIOCOLDRST register field. */
#define ALT_RSTMGR_STAT_CFGIOCOLDRST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_CFGIOCOLDRST field value from a register. */
#define ALT_RSTMGR_STAT_CFGIOCOLDRST_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_RSTMGR_STAT_CFGIOCOLDRST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_CFGIOCOLDRST_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : Software Cold Reset - swcoldrst
 * 
 * Software wrote CTRL.SWCOLDRSTREQ to 1 and triggered a cold reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_SWCOLDRST register field. */
#define ALT_RSTMGR_STAT_SWCOLDRST_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_SWCOLDRST register field. */
#define ALT_RSTMGR_STAT_SWCOLDRST_MSB        5
/* The width in bits of the ALT_RSTMGR_STAT_SWCOLDRST register field. */
#define ALT_RSTMGR_STAT_SWCOLDRST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_SWCOLDRST register field value. */
#define ALT_RSTMGR_STAT_SWCOLDRST_SET_MSK    0x00000020
/* The mask used to clear the ALT_RSTMGR_STAT_SWCOLDRST register field value. */
#define ALT_RSTMGR_STAT_SWCOLDRST_CLR_MSK    0xffffffdf
/* The reset value of the ALT_RSTMGR_STAT_SWCOLDRST register field. */
#define ALT_RSTMGR_STAT_SWCOLDRST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_SWCOLDRST field value from a register. */
#define ALT_RSTMGR_STAT_SWCOLDRST_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_RSTMGR_STAT_SWCOLDRST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_SWCOLDRST_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : nRST Pin Warm Reset - nrstpinrst
 * 
 * nRST pin triggered a hardware sequenced warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_NRSTPINRST register field. */
#define ALT_RSTMGR_STAT_NRSTPINRST_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_NRSTPINRST register field. */
#define ALT_RSTMGR_STAT_NRSTPINRST_MSB        8
/* The width in bits of the ALT_RSTMGR_STAT_NRSTPINRST register field. */
#define ALT_RSTMGR_STAT_NRSTPINRST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_NRSTPINRST register field value. */
#define ALT_RSTMGR_STAT_NRSTPINRST_SET_MSK    0x00000100
/* The mask used to clear the ALT_RSTMGR_STAT_NRSTPINRST register field value. */
#define ALT_RSTMGR_STAT_NRSTPINRST_CLR_MSK    0xfffffeff
/* The reset value of the ALT_RSTMGR_STAT_NRSTPINRST register field. */
#define ALT_RSTMGR_STAT_NRSTPINRST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_NRSTPINRST field value from a register. */
#define ALT_RSTMGR_STAT_NRSTPINRST_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_RSTMGR_STAT_NRSTPINRST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_NRSTPINRST_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : FPGA Core Warm Reset - fpgawarmrst
 * 
 * FPGA core triggered a hardware sequenced warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_FPGAWARMRST register field. */
#define ALT_RSTMGR_STAT_FPGAWARMRST_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_FPGAWARMRST register field. */
#define ALT_RSTMGR_STAT_FPGAWARMRST_MSB        9
/* The width in bits of the ALT_RSTMGR_STAT_FPGAWARMRST register field. */
#define ALT_RSTMGR_STAT_FPGAWARMRST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_FPGAWARMRST register field value. */
#define ALT_RSTMGR_STAT_FPGAWARMRST_SET_MSK    0x00000200
/* The mask used to clear the ALT_RSTMGR_STAT_FPGAWARMRST register field value. */
#define ALT_RSTMGR_STAT_FPGAWARMRST_CLR_MSK    0xfffffdff
/* The reset value of the ALT_RSTMGR_STAT_FPGAWARMRST register field. */
#define ALT_RSTMGR_STAT_FPGAWARMRST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_FPGAWARMRST field value from a register. */
#define ALT_RSTMGR_STAT_FPGAWARMRST_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_RSTMGR_STAT_FPGAWARMRST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_FPGAWARMRST_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : Software Warm Reset - swwarmrst
 * 
 * Software wrote CTRL.SWARMRSTREQ to 1 and triggered a hardware sequenced warm
 * reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_SWWARMRST register field. */
#define ALT_RSTMGR_STAT_SWWARMRST_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_SWWARMRST register field. */
#define ALT_RSTMGR_STAT_SWWARMRST_MSB        10
/* The width in bits of the ALT_RSTMGR_STAT_SWWARMRST register field. */
#define ALT_RSTMGR_STAT_SWWARMRST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_SWWARMRST register field value. */
#define ALT_RSTMGR_STAT_SWWARMRST_SET_MSK    0x00000400
/* The mask used to clear the ALT_RSTMGR_STAT_SWWARMRST register field value. */
#define ALT_RSTMGR_STAT_SWWARMRST_CLR_MSK    0xfffffbff
/* The reset value of the ALT_RSTMGR_STAT_SWWARMRST register field. */
#define ALT_RSTMGR_STAT_SWWARMRST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_SWWARMRST field value from a register. */
#define ALT_RSTMGR_STAT_SWWARMRST_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_RSTMGR_STAT_SWWARMRST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_SWWARMRST_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : MPU Watchdog 0 Warm Reset - mpuwd0rst
 * 
 * MPU Watchdog 0 triggered a hardware sequenced warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_MPUWD0RST register field. */
#define ALT_RSTMGR_STAT_MPUWD0RST_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_MPUWD0RST register field. */
#define ALT_RSTMGR_STAT_MPUWD0RST_MSB        11
/* The width in bits of the ALT_RSTMGR_STAT_MPUWD0RST register field. */
#define ALT_RSTMGR_STAT_MPUWD0RST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_MPUWD0RST register field value. */
#define ALT_RSTMGR_STAT_MPUWD0RST_SET_MSK    0x00000800
/* The mask used to clear the ALT_RSTMGR_STAT_MPUWD0RST register field value. */
#define ALT_RSTMGR_STAT_MPUWD0RST_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_RSTMGR_STAT_MPUWD0RST register field. */
#define ALT_RSTMGR_STAT_MPUWD0RST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_MPUWD0RST field value from a register. */
#define ALT_RSTMGR_STAT_MPUWD0RST_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_RSTMGR_STAT_MPUWD0RST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_MPUWD0RST_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : MPU Watchdog 1 Warm Reset - mpuwd1rst
 * 
 * MPU Watchdog 1 triggered a hardware sequenced warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_MPUWD1RST register field. */
#define ALT_RSTMGR_STAT_MPUWD1RST_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_MPUWD1RST register field. */
#define ALT_RSTMGR_STAT_MPUWD1RST_MSB        12
/* The width in bits of the ALT_RSTMGR_STAT_MPUWD1RST register field. */
#define ALT_RSTMGR_STAT_MPUWD1RST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_MPUWD1RST register field value. */
#define ALT_RSTMGR_STAT_MPUWD1RST_SET_MSK    0x00001000
/* The mask used to clear the ALT_RSTMGR_STAT_MPUWD1RST register field value. */
#define ALT_RSTMGR_STAT_MPUWD1RST_CLR_MSK    0xffffefff
/* The reset value of the ALT_RSTMGR_STAT_MPUWD1RST register field. */
#define ALT_RSTMGR_STAT_MPUWD1RST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_MPUWD1RST field value from a register. */
#define ALT_RSTMGR_STAT_MPUWD1RST_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_RSTMGR_STAT_MPUWD1RST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_MPUWD1RST_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : L4 Watchdog 0 Warm Reset - l4wd0rst
 * 
 * L4 Watchdog 0 triggered a hardware sequenced warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_L4WD0RST register field. */
#define ALT_RSTMGR_STAT_L4WD0RST_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_L4WD0RST register field. */
#define ALT_RSTMGR_STAT_L4WD0RST_MSB        13
/* The width in bits of the ALT_RSTMGR_STAT_L4WD0RST register field. */
#define ALT_RSTMGR_STAT_L4WD0RST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_L4WD0RST register field value. */
#define ALT_RSTMGR_STAT_L4WD0RST_SET_MSK    0x00002000
/* The mask used to clear the ALT_RSTMGR_STAT_L4WD0RST register field value. */
#define ALT_RSTMGR_STAT_L4WD0RST_CLR_MSK    0xffffdfff
/* The reset value of the ALT_RSTMGR_STAT_L4WD0RST register field. */
#define ALT_RSTMGR_STAT_L4WD0RST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_L4WD0RST field value from a register. */
#define ALT_RSTMGR_STAT_L4WD0RST_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_RSTMGR_STAT_L4WD0RST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_L4WD0RST_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : L4 Watchdog 1 Warm Reset - l4wd1rst
 * 
 * L4 Watchdog 1 triggered a hardware sequenced warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_L4WD1RST register field. */
#define ALT_RSTMGR_STAT_L4WD1RST_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_L4WD1RST register field. */
#define ALT_RSTMGR_STAT_L4WD1RST_MSB        14
/* The width in bits of the ALT_RSTMGR_STAT_L4WD1RST register field. */
#define ALT_RSTMGR_STAT_L4WD1RST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_L4WD1RST register field value. */
#define ALT_RSTMGR_STAT_L4WD1RST_SET_MSK    0x00004000
/* The mask used to clear the ALT_RSTMGR_STAT_L4WD1RST register field value. */
#define ALT_RSTMGR_STAT_L4WD1RST_CLR_MSK    0xffffbfff
/* The reset value of the ALT_RSTMGR_STAT_L4WD1RST register field. */
#define ALT_RSTMGR_STAT_L4WD1RST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_L4WD1RST field value from a register. */
#define ALT_RSTMGR_STAT_L4WD1RST_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_RSTMGR_STAT_L4WD1RST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_L4WD1RST_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : FPGA Core Debug Reset - fpgadbgrst
 * 
 * FPGA triggered debug reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_FPGADBGRST register field. */
#define ALT_RSTMGR_STAT_FPGADBGRST_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_FPGADBGRST register field. */
#define ALT_RSTMGR_STAT_FPGADBGRST_MSB        16
/* The width in bits of the ALT_RSTMGR_STAT_FPGADBGRST register field. */
#define ALT_RSTMGR_STAT_FPGADBGRST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_FPGADBGRST register field value. */
#define ALT_RSTMGR_STAT_FPGADBGRST_SET_MSK    0x00010000
/* The mask used to clear the ALT_RSTMGR_STAT_FPGADBGRST register field value. */
#define ALT_RSTMGR_STAT_FPGADBGRST_CLR_MSK    0xfffeffff
/* The reset value of the ALT_RSTMGR_STAT_FPGADBGRST register field. */
#define ALT_RSTMGR_STAT_FPGADBGRST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_FPGADBGRST field value from a register. */
#define ALT_RSTMGR_STAT_FPGADBGRST_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_RSTMGR_STAT_FPGADBGRST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_FPGADBGRST_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : DAP Debug Reset - cdbgreqrst
 * 
 * DAP triggered debug reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_STAT_CDBGREQRST register field. */
#define ALT_RSTMGR_STAT_CDBGREQRST_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_STAT_CDBGREQRST register field. */
#define ALT_RSTMGR_STAT_CDBGREQRST_MSB        17
/* The width in bits of the ALT_RSTMGR_STAT_CDBGREQRST register field. */
#define ALT_RSTMGR_STAT_CDBGREQRST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_STAT_CDBGREQRST register field value. */
#define ALT_RSTMGR_STAT_CDBGREQRST_SET_MSK    0x00020000
/* The mask used to clear the ALT_RSTMGR_STAT_CDBGREQRST register field value. */
#define ALT_RSTMGR_STAT_CDBGREQRST_CLR_MSK    0xfffdffff
/* The reset value of the ALT_RSTMGR_STAT_CDBGREQRST register field. */
#define ALT_RSTMGR_STAT_CDBGREQRST_RESET      0x0
/* Extracts the ALT_RSTMGR_STAT_CDBGREQRST field value from a register. */
#define ALT_RSTMGR_STAT_CDBGREQRST_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_RSTMGR_STAT_CDBGREQRST register field value suitable for setting the register. */
#define ALT_RSTMGR_STAT_CDBGREQRST_SET(value) (((value) << 17) & 0x00020000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_STAT.
 */
struct ALT_RSTMGR_STAT_s
{
    uint32_t  porhpsvoltrst   :  1;  /* HPS Power-On Voltage Detector Cold Reset */
    uint32_t  porfpgavoltrst  :  1;  /* Power-On FPGA Voltage Detector Cold Reset */
    uint32_t  nporpinrst      :  1;  /* nPOR Pin Cold Reset */
    uint32_t  fpgacoldrst     :  1;  /* FPGA Core Cold Reset */
    uint32_t  configiocoldrst :  1;  /* CONFIG_IO Cold Reset */
    uint32_t  swcoldrst       :  1;  /* Software Cold Reset */
    uint32_t                  :  2;  /* *UNDEFINED* */
    uint32_t  nrstpinrst      :  1;  /* nRST Pin Warm Reset */
    uint32_t  fpgawarmrst     :  1;  /* FPGA Core Warm Reset */
    uint32_t  swwarmrst       :  1;  /* Software Warm Reset */
    uint32_t  mpuwd0rst       :  1;  /* MPU Watchdog 0 Warm Reset */
    uint32_t  mpuwd1rst       :  1;  /* MPU Watchdog 1 Warm Reset */
    uint32_t  l4wd0rst        :  1;  /* L4 Watchdog 0 Warm Reset */
    uint32_t  l4wd1rst        :  1;  /* L4 Watchdog 1 Warm Reset */
    uint32_t                  :  1;  /* *UNDEFINED* */
    uint32_t  fpgadbgrst      :  1;  /* FPGA Core Debug Reset */
    uint32_t  cdbgreqrst      :  1;  /* DAP Debug Reset */
    uint32_t                  : 14;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_STAT. */
typedef volatile struct ALT_RSTMGR_STAT_s  ALT_RSTMGR_STAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_STAT register. */
#define ALT_RSTMGR_STAT_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_STAT register from the beginning of the component. */
#define ALT_RSTMGR_STAT_OFST        0x0

/*
 * Register : RAM Status Register - ramstat
 * 
 * The RAMSTAT register contains bits that indicate the security RAM clearing event
 * during cold or warm reset for each RAM.
 * 
 * Software clears bits by writing them with a value of 1. Writes to bits with a
 * value of 0 are ignored.
 * 
 * For MPU, there are seperate bits for L1 invalidate only or full security
 * clearing.
 * 
 * There is another bit for L1 invalidate timeout error only. The security RAM
 * clearing does not have a timeout.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                                         
 * :--------|:-------|:------|:---------------------------------------------------------------------
 *  [0]     | RW     | 0x0   | Onchip RAM RAMSTATUS bit during cold/warm reset                     
 *  [1]     | RW     | 0x0   | USB0 RAM RAMSTATUS bit during cold/warm reset                       
 *  [2]     | RW     | 0x0   | USB1 RAM RAMSTATUS bit during cold/warm reset                       
 *  [3]     | RW     | 0x0   | SDMMC RAM RAMSTATUS bit during cold/warm reset                      
 *  [4]     | RW     | 0x0   | DMA RAM RAMSTATUS bit during cold/warm reset                        
 *  [5]     | RW     | 0x0   | NAND Write RAM RAMSTATUS bit during cold/warm reset                 
 *  [6]     | RW     | 0x0   | NAND Read RAM RAMSTATUS bit during cold/warm reset                  
 *  [7]     | RW     | 0x0   | NAND ECC RAM RAMSTATUS bit during cold/warm reset                   
 *  [8]     | RW     | 0x0   | EMAC0 RX RAM RAMSTATUS bit during cold/warm reset                   
 *  [9]     | RW     | 0x0   | EMAC0 TX RAM RAMSTATUS bit during cold/warm reset                   
 *  [10]    | RW     | 0x0   | EMAC1 RX RAM RAMSTATUS bit during cold/warm reset                   
 *  [11]    | RW     | 0x0   | EMAC1 TX RAM RAMSTATUS bit during cold/warm reset                   
 *  [12]    | RW     | 0x0   | EMAC2 TX RAM RAMSTATUS bit during cold/warm reset                   
 *  [13]    | RW     | 0x0   | EMAC2 RX RAM RAMSTATUS bit during cold/warm reset                   
 *  [14]    | RW     | 0x0   | QSPI RAM RAMSTATUS bit during cold/warm reset                       
 *  [15]    | RW     | 0x0   | MWP RAM RAMSTATUS bit during cold/warm reset                        
 *  [16]    | RW     | 0x0   | MPU L1 invalidate clearing only RAMSTATUS bit during cold/warm reset
 *  [17]    | RW     | 0x0   | MPU l1 RAM clearing timeout during cold/warm reset                  
 *  [31:18] | ???    | 0x0   | *UNDEFINED*                                                         
 * 
 */
/*
 * Field : Onchip RAM RAMSTATUS bit during cold/warm reset - onchipramclr
 * 
 * RAMSTATUS bit to indicate Onchip RAM is cleared during cold/warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_RAMSTAT_ONCHIPRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_ONCHIPRAMCLR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_RAMSTAT_ONCHIPRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_ONCHIPRAMCLR_MSB        0
/* The width in bits of the ALT_RSTMGR_RAMSTAT_ONCHIPRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_ONCHIPRAMCLR_WIDTH      1
/* The mask used to set the ALT_RSTMGR_RAMSTAT_ONCHIPRAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_ONCHIPRAMCLR_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_RAMSTAT_ONCHIPRAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_ONCHIPRAMCLR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_RAMSTAT_ONCHIPRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_ONCHIPRAMCLR_RESET      0x0
/* Extracts the ALT_RSTMGR_RAMSTAT_ONCHIPRAMCLR field value from a register. */
#define ALT_RSTMGR_RAMSTAT_ONCHIPRAMCLR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_RAMSTAT_ONCHIPRAMCLR register field value suitable for setting the register. */
#define ALT_RSTMGR_RAMSTAT_ONCHIPRAMCLR_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : USB0 RAM RAMSTATUS bit during cold/warm reset - otg0ramclr
 * 
 * RAMSTATUS bit to indicate USB0 RAM is cleared during cold/warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_RAMSTAT_OTG0RAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_OTG0RAMCLR_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_RAMSTAT_OTG0RAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_OTG0RAMCLR_MSB        1
/* The width in bits of the ALT_RSTMGR_RAMSTAT_OTG0RAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_OTG0RAMCLR_WIDTH      1
/* The mask used to set the ALT_RSTMGR_RAMSTAT_OTG0RAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_OTG0RAMCLR_SET_MSK    0x00000002
/* The mask used to clear the ALT_RSTMGR_RAMSTAT_OTG0RAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_OTG0RAMCLR_CLR_MSK    0xfffffffd
/* The reset value of the ALT_RSTMGR_RAMSTAT_OTG0RAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_OTG0RAMCLR_RESET      0x0
/* Extracts the ALT_RSTMGR_RAMSTAT_OTG0RAMCLR field value from a register. */
#define ALT_RSTMGR_RAMSTAT_OTG0RAMCLR_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_RSTMGR_RAMSTAT_OTG0RAMCLR register field value suitable for setting the register. */
#define ALT_RSTMGR_RAMSTAT_OTG0RAMCLR_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : USB1 RAM RAMSTATUS bit during cold/warm reset - otg1ramclr
 * 
 * RAMSTATUS bit to indicate USB1 RAM is cleared during cold/warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_RAMSTAT_OTG1RAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_OTG1RAMCLR_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_RAMSTAT_OTG1RAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_OTG1RAMCLR_MSB        2
/* The width in bits of the ALT_RSTMGR_RAMSTAT_OTG1RAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_OTG1RAMCLR_WIDTH      1
/* The mask used to set the ALT_RSTMGR_RAMSTAT_OTG1RAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_OTG1RAMCLR_SET_MSK    0x00000004
/* The mask used to clear the ALT_RSTMGR_RAMSTAT_OTG1RAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_OTG1RAMCLR_CLR_MSK    0xfffffffb
/* The reset value of the ALT_RSTMGR_RAMSTAT_OTG1RAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_OTG1RAMCLR_RESET      0x0
/* Extracts the ALT_RSTMGR_RAMSTAT_OTG1RAMCLR field value from a register. */
#define ALT_RSTMGR_RAMSTAT_OTG1RAMCLR_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_RSTMGR_RAMSTAT_OTG1RAMCLR register field value suitable for setting the register. */
#define ALT_RSTMGR_RAMSTAT_OTG1RAMCLR_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : SDMMC RAM RAMSTATUS bit during cold/warm reset - sdmmcramclr
 * 
 * RAMSTATUS bit to indicate SDMMC RAM is cleared during cold/warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_RAMSTAT_SDMMCRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_SDMMCRAMCLR_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_RAMSTAT_SDMMCRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_SDMMCRAMCLR_MSB        3
/* The width in bits of the ALT_RSTMGR_RAMSTAT_SDMMCRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_SDMMCRAMCLR_WIDTH      1
/* The mask used to set the ALT_RSTMGR_RAMSTAT_SDMMCRAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_SDMMCRAMCLR_SET_MSK    0x00000008
/* The mask used to clear the ALT_RSTMGR_RAMSTAT_SDMMCRAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_SDMMCRAMCLR_CLR_MSK    0xfffffff7
/* The reset value of the ALT_RSTMGR_RAMSTAT_SDMMCRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_SDMMCRAMCLR_RESET      0x0
/* Extracts the ALT_RSTMGR_RAMSTAT_SDMMCRAMCLR field value from a register. */
#define ALT_RSTMGR_RAMSTAT_SDMMCRAMCLR_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_RSTMGR_RAMSTAT_SDMMCRAMCLR register field value suitable for setting the register. */
#define ALT_RSTMGR_RAMSTAT_SDMMCRAMCLR_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : DMA RAM RAMSTATUS bit during cold/warm reset - dmaramclr
 * 
 * RAMSTATUS bit to indicate DMA RAM is cleared during cold/warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_RAMSTAT_DMARAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_DMARAMCLR_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_RAMSTAT_DMARAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_DMARAMCLR_MSB        4
/* The width in bits of the ALT_RSTMGR_RAMSTAT_DMARAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_DMARAMCLR_WIDTH      1
/* The mask used to set the ALT_RSTMGR_RAMSTAT_DMARAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_DMARAMCLR_SET_MSK    0x00000010
/* The mask used to clear the ALT_RSTMGR_RAMSTAT_DMARAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_DMARAMCLR_CLR_MSK    0xffffffef
/* The reset value of the ALT_RSTMGR_RAMSTAT_DMARAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_DMARAMCLR_RESET      0x0
/* Extracts the ALT_RSTMGR_RAMSTAT_DMARAMCLR field value from a register. */
#define ALT_RSTMGR_RAMSTAT_DMARAMCLR_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_RSTMGR_RAMSTAT_DMARAMCLR register field value suitable for setting the register. */
#define ALT_RSTMGR_RAMSTAT_DMARAMCLR_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : NAND Write RAM RAMSTATUS bit during cold/warm reset - nandwramclr
 * 
 * RAMSTATUS bit to indicate NAND Write RAM is cleared during cold/warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_RAMSTAT_NANDWRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_NANDWRAMCLR_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_RAMSTAT_NANDWRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_NANDWRAMCLR_MSB        5
/* The width in bits of the ALT_RSTMGR_RAMSTAT_NANDWRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_NANDWRAMCLR_WIDTH      1
/* The mask used to set the ALT_RSTMGR_RAMSTAT_NANDWRAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_NANDWRAMCLR_SET_MSK    0x00000020
/* The mask used to clear the ALT_RSTMGR_RAMSTAT_NANDWRAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_NANDWRAMCLR_CLR_MSK    0xffffffdf
/* The reset value of the ALT_RSTMGR_RAMSTAT_NANDWRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_NANDWRAMCLR_RESET      0x0
/* Extracts the ALT_RSTMGR_RAMSTAT_NANDWRAMCLR field value from a register. */
#define ALT_RSTMGR_RAMSTAT_NANDWRAMCLR_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_RSTMGR_RAMSTAT_NANDWRAMCLR register field value suitable for setting the register. */
#define ALT_RSTMGR_RAMSTAT_NANDWRAMCLR_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : NAND Read RAM RAMSTATUS bit during cold/warm reset - nandrramclr
 * 
 * RAMSTATUS bit to indicate NAND Read RAM is cleared during cold/warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_RAMSTAT_NANDRRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_NANDRRAMCLR_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_RAMSTAT_NANDRRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_NANDRRAMCLR_MSB        6
/* The width in bits of the ALT_RSTMGR_RAMSTAT_NANDRRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_NANDRRAMCLR_WIDTH      1
/* The mask used to set the ALT_RSTMGR_RAMSTAT_NANDRRAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_NANDRRAMCLR_SET_MSK    0x00000040
/* The mask used to clear the ALT_RSTMGR_RAMSTAT_NANDRRAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_NANDRRAMCLR_CLR_MSK    0xffffffbf
/* The reset value of the ALT_RSTMGR_RAMSTAT_NANDRRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_NANDRRAMCLR_RESET      0x0
/* Extracts the ALT_RSTMGR_RAMSTAT_NANDRRAMCLR field value from a register. */
#define ALT_RSTMGR_RAMSTAT_NANDRRAMCLR_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_RSTMGR_RAMSTAT_NANDRRAMCLR register field value suitable for setting the register. */
#define ALT_RSTMGR_RAMSTAT_NANDRRAMCLR_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : NAND ECC RAM RAMSTATUS bit during cold/warm reset - nanderamclr
 * 
 * RAMSTATUS bit to indicate NAND ECC RAM is cleared during cold/warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_RAMSTAT_NANDERAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_NANDERAMCLR_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_RAMSTAT_NANDERAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_NANDERAMCLR_MSB        7
/* The width in bits of the ALT_RSTMGR_RAMSTAT_NANDERAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_NANDERAMCLR_WIDTH      1
/* The mask used to set the ALT_RSTMGR_RAMSTAT_NANDERAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_NANDERAMCLR_SET_MSK    0x00000080
/* The mask used to clear the ALT_RSTMGR_RAMSTAT_NANDERAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_NANDERAMCLR_CLR_MSK    0xffffff7f
/* The reset value of the ALT_RSTMGR_RAMSTAT_NANDERAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_NANDERAMCLR_RESET      0x0
/* Extracts the ALT_RSTMGR_RAMSTAT_NANDERAMCLR field value from a register. */
#define ALT_RSTMGR_RAMSTAT_NANDERAMCLR_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_RSTMGR_RAMSTAT_NANDERAMCLR register field value suitable for setting the register. */
#define ALT_RSTMGR_RAMSTAT_NANDERAMCLR_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : EMAC0 RX RAM RAMSTATUS bit during cold/warm reset - emac0rxramclr
 * 
 * RAMSTATUS bit to indicate EMAC0 RX RAM is cleared during cold/warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_RAMSTAT_EMAC0RXRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_EMAC0RXRAMCLR_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_RAMSTAT_EMAC0RXRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_EMAC0RXRAMCLR_MSB        8
/* The width in bits of the ALT_RSTMGR_RAMSTAT_EMAC0RXRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_EMAC0RXRAMCLR_WIDTH      1
/* The mask used to set the ALT_RSTMGR_RAMSTAT_EMAC0RXRAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_EMAC0RXRAMCLR_SET_MSK    0x00000100
/* The mask used to clear the ALT_RSTMGR_RAMSTAT_EMAC0RXRAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_EMAC0RXRAMCLR_CLR_MSK    0xfffffeff
/* The reset value of the ALT_RSTMGR_RAMSTAT_EMAC0RXRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_EMAC0RXRAMCLR_RESET      0x0
/* Extracts the ALT_RSTMGR_RAMSTAT_EMAC0RXRAMCLR field value from a register. */
#define ALT_RSTMGR_RAMSTAT_EMAC0RXRAMCLR_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_RSTMGR_RAMSTAT_EMAC0RXRAMCLR register field value suitable for setting the register. */
#define ALT_RSTMGR_RAMSTAT_EMAC0RXRAMCLR_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : EMAC0 TX RAM RAMSTATUS bit during cold/warm reset - emac0txramclr
 * 
 * RAMSTATUS bit to indicate EMAC0 TX RAM is cleared during cold/warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_RAMSTAT_EMAC0TXRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_EMAC0TXRAMCLR_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_RAMSTAT_EMAC0TXRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_EMAC0TXRAMCLR_MSB        9
/* The width in bits of the ALT_RSTMGR_RAMSTAT_EMAC0TXRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_EMAC0TXRAMCLR_WIDTH      1
/* The mask used to set the ALT_RSTMGR_RAMSTAT_EMAC0TXRAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_EMAC0TXRAMCLR_SET_MSK    0x00000200
/* The mask used to clear the ALT_RSTMGR_RAMSTAT_EMAC0TXRAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_EMAC0TXRAMCLR_CLR_MSK    0xfffffdff
/* The reset value of the ALT_RSTMGR_RAMSTAT_EMAC0TXRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_EMAC0TXRAMCLR_RESET      0x0
/* Extracts the ALT_RSTMGR_RAMSTAT_EMAC0TXRAMCLR field value from a register. */
#define ALT_RSTMGR_RAMSTAT_EMAC0TXRAMCLR_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_RSTMGR_RAMSTAT_EMAC0TXRAMCLR register field value suitable for setting the register. */
#define ALT_RSTMGR_RAMSTAT_EMAC0TXRAMCLR_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : EMAC1 RX RAM RAMSTATUS bit during cold/warm reset - emac1rxramclr
 * 
 * RAMSTATUS bit to indicate EMAC1 RX RAM is cleared during cold/warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_RAMSTAT_EMAC1RXRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_EMAC1RXRAMCLR_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_RAMSTAT_EMAC1RXRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_EMAC1RXRAMCLR_MSB        10
/* The width in bits of the ALT_RSTMGR_RAMSTAT_EMAC1RXRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_EMAC1RXRAMCLR_WIDTH      1
/* The mask used to set the ALT_RSTMGR_RAMSTAT_EMAC1RXRAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_EMAC1RXRAMCLR_SET_MSK    0x00000400
/* The mask used to clear the ALT_RSTMGR_RAMSTAT_EMAC1RXRAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_EMAC1RXRAMCLR_CLR_MSK    0xfffffbff
/* The reset value of the ALT_RSTMGR_RAMSTAT_EMAC1RXRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_EMAC1RXRAMCLR_RESET      0x0
/* Extracts the ALT_RSTMGR_RAMSTAT_EMAC1RXRAMCLR field value from a register. */
#define ALT_RSTMGR_RAMSTAT_EMAC1RXRAMCLR_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_RSTMGR_RAMSTAT_EMAC1RXRAMCLR register field value suitable for setting the register. */
#define ALT_RSTMGR_RAMSTAT_EMAC1RXRAMCLR_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : EMAC1 TX RAM RAMSTATUS bit during cold/warm reset - emac1txramclr
 * 
 * RAMSTATUS bit to indicate EMAC1 TX RAM is cleared during cold/warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_RAMSTAT_EMAC1TXRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_EMAC1TXRAMCLR_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_RAMSTAT_EMAC1TXRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_EMAC1TXRAMCLR_MSB        11
/* The width in bits of the ALT_RSTMGR_RAMSTAT_EMAC1TXRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_EMAC1TXRAMCLR_WIDTH      1
/* The mask used to set the ALT_RSTMGR_RAMSTAT_EMAC1TXRAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_EMAC1TXRAMCLR_SET_MSK    0x00000800
/* The mask used to clear the ALT_RSTMGR_RAMSTAT_EMAC1TXRAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_EMAC1TXRAMCLR_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_RSTMGR_RAMSTAT_EMAC1TXRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_EMAC1TXRAMCLR_RESET      0x0
/* Extracts the ALT_RSTMGR_RAMSTAT_EMAC1TXRAMCLR field value from a register. */
#define ALT_RSTMGR_RAMSTAT_EMAC1TXRAMCLR_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_RSTMGR_RAMSTAT_EMAC1TXRAMCLR register field value suitable for setting the register. */
#define ALT_RSTMGR_RAMSTAT_EMAC1TXRAMCLR_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : EMAC2 TX RAM RAMSTATUS bit during cold/warm reset - emac2txramclr
 * 
 * RAMSTATUS bit to indicate EMAC2 TX RAM is cleared during cold/warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_RAMSTAT_EMAC2TXRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_EMAC2TXRAMCLR_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_RAMSTAT_EMAC2TXRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_EMAC2TXRAMCLR_MSB        12
/* The width in bits of the ALT_RSTMGR_RAMSTAT_EMAC2TXRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_EMAC2TXRAMCLR_WIDTH      1
/* The mask used to set the ALT_RSTMGR_RAMSTAT_EMAC2TXRAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_EMAC2TXRAMCLR_SET_MSK    0x00001000
/* The mask used to clear the ALT_RSTMGR_RAMSTAT_EMAC2TXRAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_EMAC2TXRAMCLR_CLR_MSK    0xffffefff
/* The reset value of the ALT_RSTMGR_RAMSTAT_EMAC2TXRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_EMAC2TXRAMCLR_RESET      0x0
/* Extracts the ALT_RSTMGR_RAMSTAT_EMAC2TXRAMCLR field value from a register. */
#define ALT_RSTMGR_RAMSTAT_EMAC2TXRAMCLR_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_RSTMGR_RAMSTAT_EMAC2TXRAMCLR register field value suitable for setting the register. */
#define ALT_RSTMGR_RAMSTAT_EMAC2TXRAMCLR_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : EMAC2 RX RAM RAMSTATUS bit during cold/warm reset - emac2rxramclr
 * 
 * RAMSTATUS bit to indicate EMAC2 RX RAM is cleared during cold/warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_RAMSTAT_EMAC2RXRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_EMAC2RXRAMCLR_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_RAMSTAT_EMAC2RXRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_EMAC2RXRAMCLR_MSB        13
/* The width in bits of the ALT_RSTMGR_RAMSTAT_EMAC2RXRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_EMAC2RXRAMCLR_WIDTH      1
/* The mask used to set the ALT_RSTMGR_RAMSTAT_EMAC2RXRAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_EMAC2RXRAMCLR_SET_MSK    0x00002000
/* The mask used to clear the ALT_RSTMGR_RAMSTAT_EMAC2RXRAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_EMAC2RXRAMCLR_CLR_MSK    0xffffdfff
/* The reset value of the ALT_RSTMGR_RAMSTAT_EMAC2RXRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_EMAC2RXRAMCLR_RESET      0x0
/* Extracts the ALT_RSTMGR_RAMSTAT_EMAC2RXRAMCLR field value from a register. */
#define ALT_RSTMGR_RAMSTAT_EMAC2RXRAMCLR_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_RSTMGR_RAMSTAT_EMAC2RXRAMCLR register field value suitable for setting the register. */
#define ALT_RSTMGR_RAMSTAT_EMAC2RXRAMCLR_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : QSPI RAM RAMSTATUS bit during cold/warm reset - qspiramclr
 * 
 * RAMSTATUS bit to indicate QSPI RAM is cleared during cold/warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_RAMSTAT_QSPIRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_QSPIRAMCLR_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_RAMSTAT_QSPIRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_QSPIRAMCLR_MSB        14
/* The width in bits of the ALT_RSTMGR_RAMSTAT_QSPIRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_QSPIRAMCLR_WIDTH      1
/* The mask used to set the ALT_RSTMGR_RAMSTAT_QSPIRAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_QSPIRAMCLR_SET_MSK    0x00004000
/* The mask used to clear the ALT_RSTMGR_RAMSTAT_QSPIRAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_QSPIRAMCLR_CLR_MSK    0xffffbfff
/* The reset value of the ALT_RSTMGR_RAMSTAT_QSPIRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_QSPIRAMCLR_RESET      0x0
/* Extracts the ALT_RSTMGR_RAMSTAT_QSPIRAMCLR field value from a register. */
#define ALT_RSTMGR_RAMSTAT_QSPIRAMCLR_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_RSTMGR_RAMSTAT_QSPIRAMCLR register field value suitable for setting the register. */
#define ALT_RSTMGR_RAMSTAT_QSPIRAMCLR_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : MWP RAM RAMSTATUS bit during cold/warm reset - mwpramclr
 * 
 * RAMSTATUS bit to indicate MWP RAM is cleared during cold/warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_RAMSTAT_MWPRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_MWPRAMCLR_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_RAMSTAT_MWPRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_MWPRAMCLR_MSB        15
/* The width in bits of the ALT_RSTMGR_RAMSTAT_MWPRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_MWPRAMCLR_WIDTH      1
/* The mask used to set the ALT_RSTMGR_RAMSTAT_MWPRAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_MWPRAMCLR_SET_MSK    0x00008000
/* The mask used to clear the ALT_RSTMGR_RAMSTAT_MWPRAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_MWPRAMCLR_CLR_MSK    0xffff7fff
/* The reset value of the ALT_RSTMGR_RAMSTAT_MWPRAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_MWPRAMCLR_RESET      0x0
/* Extracts the ALT_RSTMGR_RAMSTAT_MWPRAMCLR field value from a register. */
#define ALT_RSTMGR_RAMSTAT_MWPRAMCLR_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_RSTMGR_RAMSTAT_MWPRAMCLR register field value suitable for setting the register. */
#define ALT_RSTMGR_RAMSTAT_MWPRAMCLR_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : MPU L1 invalidate clearing only RAMSTATUS bit during cold/warm reset - mpul1ramclr
 * 
 * RAMSTATUS bit to indicate MPU L1 invalidate clearing only or full security
 * clearing during cold/warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_RAMSTAT_MPUL1RAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_MPUL1RAMCLR_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_RAMSTAT_MPUL1RAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_MPUL1RAMCLR_MSB        16
/* The width in bits of the ALT_RSTMGR_RAMSTAT_MPUL1RAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_MPUL1RAMCLR_WIDTH      1
/* The mask used to set the ALT_RSTMGR_RAMSTAT_MPUL1RAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_MPUL1RAMCLR_SET_MSK    0x00010000
/* The mask used to clear the ALT_RSTMGR_RAMSTAT_MPUL1RAMCLR register field value. */
#define ALT_RSTMGR_RAMSTAT_MPUL1RAMCLR_CLR_MSK    0xfffeffff
/* The reset value of the ALT_RSTMGR_RAMSTAT_MPUL1RAMCLR register field. */
#define ALT_RSTMGR_RAMSTAT_MPUL1RAMCLR_RESET      0x0
/* Extracts the ALT_RSTMGR_RAMSTAT_MPUL1RAMCLR field value from a register. */
#define ALT_RSTMGR_RAMSTAT_MPUL1RAMCLR_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_RSTMGR_RAMSTAT_MPUL1RAMCLR register field value suitable for setting the register. */
#define ALT_RSTMGR_RAMSTAT_MPUL1RAMCLR_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : MPU l1 RAM clearing timeout during cold/warm reset - mpul1timeout
 * 
 * RAMSTATUS bit to indicate MPU l1 RAM cleared timeout during cold/warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_RAMSTAT_MPUL1TMO register field. */
#define ALT_RSTMGR_RAMSTAT_MPUL1TMO_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_RAMSTAT_MPUL1TMO register field. */
#define ALT_RSTMGR_RAMSTAT_MPUL1TMO_MSB        17
/* The width in bits of the ALT_RSTMGR_RAMSTAT_MPUL1TMO register field. */
#define ALT_RSTMGR_RAMSTAT_MPUL1TMO_WIDTH      1
/* The mask used to set the ALT_RSTMGR_RAMSTAT_MPUL1TMO register field value. */
#define ALT_RSTMGR_RAMSTAT_MPUL1TMO_SET_MSK    0x00020000
/* The mask used to clear the ALT_RSTMGR_RAMSTAT_MPUL1TMO register field value. */
#define ALT_RSTMGR_RAMSTAT_MPUL1TMO_CLR_MSK    0xfffdffff
/* The reset value of the ALT_RSTMGR_RAMSTAT_MPUL1TMO register field. */
#define ALT_RSTMGR_RAMSTAT_MPUL1TMO_RESET      0x0
/* Extracts the ALT_RSTMGR_RAMSTAT_MPUL1TMO field value from a register. */
#define ALT_RSTMGR_RAMSTAT_MPUL1TMO_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_RSTMGR_RAMSTAT_MPUL1TMO register field value suitable for setting the register. */
#define ALT_RSTMGR_RAMSTAT_MPUL1TMO_SET(value) (((value) << 17) & 0x00020000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_RAMSTAT.
 */
struct ALT_RSTMGR_RAMSTAT_s
{
    uint32_t  onchipramclr  :  1;  /* Onchip RAM RAMSTATUS bit during cold/warm reset */
    uint32_t  otg0ramclr    :  1;  /* USB0 RAM RAMSTATUS bit during cold/warm reset */
    uint32_t  otg1ramclr    :  1;  /* USB1 RAM RAMSTATUS bit during cold/warm reset */
    uint32_t  sdmmcramclr   :  1;  /* SDMMC RAM RAMSTATUS bit during cold/warm reset */
    uint32_t  dmaramclr     :  1;  /* DMA RAM RAMSTATUS bit during cold/warm reset */
    uint32_t  nandwramclr   :  1;  /* NAND Write RAM RAMSTATUS bit during cold/warm reset */
    uint32_t  nandrramclr   :  1;  /* NAND Read RAM RAMSTATUS bit during cold/warm reset */
    uint32_t  nanderamclr   :  1;  /* NAND ECC RAM RAMSTATUS bit during cold/warm reset */
    uint32_t  emac0rxramclr :  1;  /* EMAC0 RX RAM RAMSTATUS bit during cold/warm reset */
    uint32_t  emac0txramclr :  1;  /* EMAC0 TX RAM RAMSTATUS bit during cold/warm reset */
    uint32_t  emac1rxramclr :  1;  /* EMAC1 RX RAM RAMSTATUS bit during cold/warm reset */
    uint32_t  emac1txramclr :  1;  /* EMAC1 TX RAM RAMSTATUS bit during cold/warm reset */
    uint32_t  emac2txramclr :  1;  /* EMAC2 TX RAM RAMSTATUS bit during cold/warm reset */
    uint32_t  emac2rxramclr :  1;  /* EMAC2 RX RAM RAMSTATUS bit during cold/warm reset */
    uint32_t  qspiramclr    :  1;  /* QSPI RAM RAMSTATUS bit during cold/warm reset */
    uint32_t  mwpramclr     :  1;  /* MWP RAM RAMSTATUS bit during cold/warm reset */
    uint32_t  mpul1ramclr   :  1;  /* MPU L1 invalidate clearing only RAMSTATUS bit during cold/warm reset */
    uint32_t  mpul1timeout  :  1;  /* MPU l1 RAM clearing timeout during cold/warm reset */
    uint32_t                : 14;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_RAMSTAT. */
typedef volatile struct ALT_RSTMGR_RAMSTAT_s  ALT_RSTMGR_RAMSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_RAMSTAT register. */
#define ALT_RSTMGR_RAMSTAT_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_RAMSTAT register from the beginning of the component. */
#define ALT_RSTMGR_RAMSTAT_OFST        0x4

/*
 * Register : Status Register - miscstat
 * 
 * The MISCSTAT register contains bits that indicate the timeout event. For timeout
 * events, a field is 1 if its associated timeout occured as part of a hardware
 * sequenced warm/debug reset.
 * 
 * Software clears bits by writing them with a value of 1. Writes to bits with a
 * value of 0 are ignored.
 * 
 * After a cold reset is complete, all bits are reset to their reset value except
 * for the bit(s) that indicate the source of the cold reset. If multiple cold
 * reset requests overlap with each other, the source de-asserts the request last
 * will be logged. The other reset request source(s)  de-assert the request in the
 * same cycle will also be logged, the rest of the fields are reset to default
 * value of 0.
 * 
 * After a warm reset is complete, the bit(s) that indicate the source of  the warm
 * reset are set to 1. A warm reset doesn't clear any of the bits  in the MISCSTAT
 * register; these bits must be cleared by software writing  the STAT register.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                   
 * :-------|:-------|:------|:-------------------------------
 *  [0]    | RW     | 0x0   | SDRAM Self-Refresh Timeout    
 *  [1]    | RW     | 0x0   | FPGA manager handshake Timeout
 *  [2]    | RW     | 0x0   | FPGA handshake Timeout        
 *  [3]    | RW     | 0x0   | ETR Stall Timeout             
 *  [31:4] | ???    | 0x0   | *UNDEFINED*                   
 * 
 */
/*
 * Field : SDRAM Self-Refresh Timeout - sdrselfreftimeout
 * 
 * A 1 indicates that Reset Manager's request to the SDRAM Controller Subsystem to
 * put the SDRAM devices into self-refresh mode before starting a hardware
 * sequenced warm reset timed-out and the Reset Manager had to proceed with the
 * warm reset anyway.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MISCSTAT_SDRSELFREFTMO register field. */
#define ALT_RSTMGR_MISCSTAT_SDRSELFREFTMO_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MISCSTAT_SDRSELFREFTMO register field. */
#define ALT_RSTMGR_MISCSTAT_SDRSELFREFTMO_MSB        0
/* The width in bits of the ALT_RSTMGR_MISCSTAT_SDRSELFREFTMO register field. */
#define ALT_RSTMGR_MISCSTAT_SDRSELFREFTMO_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MISCSTAT_SDRSELFREFTMO register field value. */
#define ALT_RSTMGR_MISCSTAT_SDRSELFREFTMO_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_MISCSTAT_SDRSELFREFTMO register field value. */
#define ALT_RSTMGR_MISCSTAT_SDRSELFREFTMO_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_MISCSTAT_SDRSELFREFTMO register field. */
#define ALT_RSTMGR_MISCSTAT_SDRSELFREFTMO_RESET      0x0
/* Extracts the ALT_RSTMGR_MISCSTAT_SDRSELFREFTMO field value from a register. */
#define ALT_RSTMGR_MISCSTAT_SDRSELFREFTMO_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_MISCSTAT_SDRSELFREFTMO register field value suitable for setting the register. */
#define ALT_RSTMGR_MISCSTAT_SDRSELFREFTMO_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : FPGA manager handshake Timeout - fpgamgrhstimeout
 * 
 * A 1 indicates that Reset Manager's request to the FPGA manager to stop driving
 * configuration clock to FPGA CB before starting a hardware sequenced warm reset
 * timed-out and the Reset Manager had to proceed with the warm reset anyway.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MISCSTAT_FPGAMGRHSTMO register field. */
#define ALT_RSTMGR_MISCSTAT_FPGAMGRHSTMO_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MISCSTAT_FPGAMGRHSTMO register field. */
#define ALT_RSTMGR_MISCSTAT_FPGAMGRHSTMO_MSB        1
/* The width in bits of the ALT_RSTMGR_MISCSTAT_FPGAMGRHSTMO register field. */
#define ALT_RSTMGR_MISCSTAT_FPGAMGRHSTMO_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MISCSTAT_FPGAMGRHSTMO register field value. */
#define ALT_RSTMGR_MISCSTAT_FPGAMGRHSTMO_SET_MSK    0x00000002
/* The mask used to clear the ALT_RSTMGR_MISCSTAT_FPGAMGRHSTMO register field value. */
#define ALT_RSTMGR_MISCSTAT_FPGAMGRHSTMO_CLR_MSK    0xfffffffd
/* The reset value of the ALT_RSTMGR_MISCSTAT_FPGAMGRHSTMO register field. */
#define ALT_RSTMGR_MISCSTAT_FPGAMGRHSTMO_RESET      0x0
/* Extracts the ALT_RSTMGR_MISCSTAT_FPGAMGRHSTMO field value from a register. */
#define ALT_RSTMGR_MISCSTAT_FPGAMGRHSTMO_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_RSTMGR_MISCSTAT_FPGAMGRHSTMO register field value suitable for setting the register. */
#define ALT_RSTMGR_MISCSTAT_FPGAMGRHSTMO_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : FPGA handshake Timeout - fpgahstimeout
 * 
 * A 1 indicates that Reset Manager's handshake request to FPGA before starting a
 * hardware sequenced warm reset timed-out and the Reset Manager had to proceed
 * with the warm reset anyway.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MISCSTAT_FPGAHSTMO register field. */
#define ALT_RSTMGR_MISCSTAT_FPGAHSTMO_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MISCSTAT_FPGAHSTMO register field. */
#define ALT_RSTMGR_MISCSTAT_FPGAHSTMO_MSB        2
/* The width in bits of the ALT_RSTMGR_MISCSTAT_FPGAHSTMO register field. */
#define ALT_RSTMGR_MISCSTAT_FPGAHSTMO_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MISCSTAT_FPGAHSTMO register field value. */
#define ALT_RSTMGR_MISCSTAT_FPGAHSTMO_SET_MSK    0x00000004
/* The mask used to clear the ALT_RSTMGR_MISCSTAT_FPGAHSTMO register field value. */
#define ALT_RSTMGR_MISCSTAT_FPGAHSTMO_CLR_MSK    0xfffffffb
/* The reset value of the ALT_RSTMGR_MISCSTAT_FPGAHSTMO register field. */
#define ALT_RSTMGR_MISCSTAT_FPGAHSTMO_RESET      0x0
/* Extracts the ALT_RSTMGR_MISCSTAT_FPGAHSTMO field value from a register. */
#define ALT_RSTMGR_MISCSTAT_FPGAHSTMO_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_RSTMGR_MISCSTAT_FPGAHSTMO register field value suitable for setting the register. */
#define ALT_RSTMGR_MISCSTAT_FPGAHSTMO_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : ETR Stall Timeout - etrstalltimeout
 * 
 * A 1 indicates that Reset Manager's request to the ETR (Embedded Trace Router) to
 * stall its AXI master port before starting a hardware sequenced warm reset timed-
 * out and the Reset Manager had to proceed with the warm reset anyway.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MISCSTAT_ETRSTALLTMO register field. */
#define ALT_RSTMGR_MISCSTAT_ETRSTALLTMO_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MISCSTAT_ETRSTALLTMO register field. */
#define ALT_RSTMGR_MISCSTAT_ETRSTALLTMO_MSB        3
/* The width in bits of the ALT_RSTMGR_MISCSTAT_ETRSTALLTMO register field. */
#define ALT_RSTMGR_MISCSTAT_ETRSTALLTMO_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MISCSTAT_ETRSTALLTMO register field value. */
#define ALT_RSTMGR_MISCSTAT_ETRSTALLTMO_SET_MSK    0x00000008
/* The mask used to clear the ALT_RSTMGR_MISCSTAT_ETRSTALLTMO register field value. */
#define ALT_RSTMGR_MISCSTAT_ETRSTALLTMO_CLR_MSK    0xfffffff7
/* The reset value of the ALT_RSTMGR_MISCSTAT_ETRSTALLTMO register field. */
#define ALT_RSTMGR_MISCSTAT_ETRSTALLTMO_RESET      0x0
/* Extracts the ALT_RSTMGR_MISCSTAT_ETRSTALLTMO field value from a register. */
#define ALT_RSTMGR_MISCSTAT_ETRSTALLTMO_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_RSTMGR_MISCSTAT_ETRSTALLTMO register field value suitable for setting the register. */
#define ALT_RSTMGR_MISCSTAT_ETRSTALLTMO_SET(value) (((value) << 3) & 0x00000008)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_MISCSTAT.
 */
struct ALT_RSTMGR_MISCSTAT_s
{
    uint32_t  sdrselfreftimeout :  1;  /* SDRAM Self-Refresh Timeout */
    uint32_t  fpgamgrhstimeout  :  1;  /* FPGA manager handshake Timeout */
    uint32_t  fpgahstimeout     :  1;  /* FPGA handshake Timeout */
    uint32_t  etrstalltimeout   :  1;  /* ETR Stall Timeout */
    uint32_t                    : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_MISCSTAT. */
typedef volatile struct ALT_RSTMGR_MISCSTAT_s  ALT_RSTMGR_MISCSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_MISCSTAT register. */
#define ALT_RSTMGR_MISCSTAT_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_MISCSTAT register from the beginning of the component. */
#define ALT_RSTMGR_MISCSTAT_OFST        0x8

/*
 * Register : Control Register - ctrl
 * 
 * The CTRL register is used by software to control reset behavior.It includes
 * fields for software to initiate the cold and warm reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                
 * :-------|:-------|:--------|:----------------------------
 *  [0]    | RW     | 0x0     | Software Cold Reset Request
 *  [1]    | RW     | 0x0     | Software Warm Reset Request
 *  [31:2] | ???    | Unknown | *UNDEFINED*                
 * 
 */
/*
 * Field : Software Cold Reset Request - swcoldrstreq
 * 
 * This is a one-shot bit written by software to 1 to trigger a cold reset. It
 * always reads the value 0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_CTL_SWCOLDRSTREQ register field. */
#define ALT_RSTMGR_CTL_SWCOLDRSTREQ_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_CTL_SWCOLDRSTREQ register field. */
#define ALT_RSTMGR_CTL_SWCOLDRSTREQ_MSB        0
/* The width in bits of the ALT_RSTMGR_CTL_SWCOLDRSTREQ register field. */
#define ALT_RSTMGR_CTL_SWCOLDRSTREQ_WIDTH      1
/* The mask used to set the ALT_RSTMGR_CTL_SWCOLDRSTREQ register field value. */
#define ALT_RSTMGR_CTL_SWCOLDRSTREQ_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_CTL_SWCOLDRSTREQ register field value. */
#define ALT_RSTMGR_CTL_SWCOLDRSTREQ_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_CTL_SWCOLDRSTREQ register field. */
#define ALT_RSTMGR_CTL_SWCOLDRSTREQ_RESET      0x0
/* Extracts the ALT_RSTMGR_CTL_SWCOLDRSTREQ field value from a register. */
#define ALT_RSTMGR_CTL_SWCOLDRSTREQ_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_CTL_SWCOLDRSTREQ register field value suitable for setting the register. */
#define ALT_RSTMGR_CTL_SWCOLDRSTREQ_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Software Warm Reset Request - swwarmrstreq
 * 
 * This is a one-shot bit written by software to 1 to trigger a hardware sequenced
 * warm reset. It always reads the value 0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_CTL_SWWARMRSTREQ register field. */
#define ALT_RSTMGR_CTL_SWWARMRSTREQ_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_CTL_SWWARMRSTREQ register field. */
#define ALT_RSTMGR_CTL_SWWARMRSTREQ_MSB        1
/* The width in bits of the ALT_RSTMGR_CTL_SWWARMRSTREQ register field. */
#define ALT_RSTMGR_CTL_SWWARMRSTREQ_WIDTH      1
/* The mask used to set the ALT_RSTMGR_CTL_SWWARMRSTREQ register field value. */
#define ALT_RSTMGR_CTL_SWWARMRSTREQ_SET_MSK    0x00000002
/* The mask used to clear the ALT_RSTMGR_CTL_SWWARMRSTREQ register field value. */
#define ALT_RSTMGR_CTL_SWWARMRSTREQ_CLR_MSK    0xfffffffd
/* The reset value of the ALT_RSTMGR_CTL_SWWARMRSTREQ register field. */
#define ALT_RSTMGR_CTL_SWWARMRSTREQ_RESET      0x0
/* Extracts the ALT_RSTMGR_CTL_SWWARMRSTREQ field value from a register. */
#define ALT_RSTMGR_CTL_SWWARMRSTREQ_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_RSTMGR_CTL_SWWARMRSTREQ register field value suitable for setting the register. */
#define ALT_RSTMGR_CTL_SWWARMRSTREQ_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_CTL.
 */
struct ALT_RSTMGR_CTL_s
{
    uint32_t  swcoldrstreq :  1;  /* Software Cold Reset Request */
    uint32_t  swwarmrstreq :  1;  /* Software Warm Reset Request */
    uint32_t               : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_CTL. */
typedef volatile struct ALT_RSTMGR_CTL_s  ALT_RSTMGR_CTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_CTL register. */
#define ALT_RSTMGR_CTL_RESET       0x00100000
/* The byte offset of the ALT_RSTMGR_CTL register from the beginning of the component. */
#define ALT_RSTMGR_CTL_OFST        0xc

/*
 * Register : Control Register - hdsken
 * 
 * The CTRL register is used by software to control reset behavior.It includes
 * fields for enable hardware handshake with other modules before warm reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                 
 * :-------|:-------|:--------|:---------------------------------------------
 *  [0]    | RW     | 0x0     | SDRAM Self-Refresh Enable                   
 *  [1]    | RW     | 0x0     | FPGA Manager Handshake Enable               
 *  [2]    | RW     | 0x0     | FPGA Handshake Enable                       
 *  [3]    | RW     | 0x0     | ETR (Embedded Trace Router) Handshake Enable
 *  [31:4] | ???    | Unknown | *UNDEFINED*                                 
 * 
 */
/*
 * Field : SDRAM Self-Refresh Enable - sdrselfrefen
 * 
 * This field controls whether the contents of SDRAM devices survive a hardware
 * sequenced warm reset. If set to 1, the Reset Manager makes a request to the
 * SDRAM Controller Subsystem to put the SDRAM devices into self-refresh mode
 * before asserting warm reset signals. However, if SDRAM is already in warm reset,
 * Handshake with SDRAM is not performed.
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
 * Field : FPGA Manager Handshake Enable - fpgamgrhsen
 * 
 * Enables a handshake between the Reset Manager and FPGA Manager before a warm
 * reset. The handshake is used to warn the FPGA Manager that a warm reset it
 * coming so it can prepare for it. When the FPGA Manager receives a warm reset
 * handshake, the FPGA Manager drives its output clock to a quiescent state to
 * avoid glitches.
 * 
 * If set to 1, the  Manager makes a request to the FPGA Managerbefore asserting
 * warm reset signals. However if the FPGA Manager is already in warm reset, the
 * handshake is skipped.
 * 
 * If set to 0, the handshake is skipped.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HDSKEN_FPGAMGRHSEN register field. */
#define ALT_RSTMGR_HDSKEN_FPGAMGRHSEN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HDSKEN_FPGAMGRHSEN register field. */
#define ALT_RSTMGR_HDSKEN_FPGAMGRHSEN_MSB        1
/* The width in bits of the ALT_RSTMGR_HDSKEN_FPGAMGRHSEN register field. */
#define ALT_RSTMGR_HDSKEN_FPGAMGRHSEN_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HDSKEN_FPGAMGRHSEN register field value. */
#define ALT_RSTMGR_HDSKEN_FPGAMGRHSEN_SET_MSK    0x00000002
/* The mask used to clear the ALT_RSTMGR_HDSKEN_FPGAMGRHSEN register field value. */
#define ALT_RSTMGR_HDSKEN_FPGAMGRHSEN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_RSTMGR_HDSKEN_FPGAMGRHSEN register field. */
#define ALT_RSTMGR_HDSKEN_FPGAMGRHSEN_RESET      0x0
/* Extracts the ALT_RSTMGR_HDSKEN_FPGAMGRHSEN field value from a register. */
#define ALT_RSTMGR_HDSKEN_FPGAMGRHSEN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_RSTMGR_HDSKEN_FPGAMGRHSEN register field value suitable for setting the register. */
#define ALT_RSTMGR_HDSKEN_FPGAMGRHSEN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : FPGA Handshake Enable - fpgahsen
 * 
 * This field controls whether to perform handshake with FPGA before asserting warm
 * reset.
 * 
 * If set to 1, the Reset Manager makes a request to the FPGAbefore asserting warm
 * reset signals. However if FPGA is already in warm reset state, the handshake is
 * not performed.
 * 
 * If set to 0, the handshake is not performed
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
 * Software waits for the ETRSTALLACK to be 1 and then writes this field to 0.
 * Note that it is possible for the ETR to never assert ETRSTALLACK so software
 * should timeout if ETRSTALLACK is never asserted.
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

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_HDSKEN.
 */
struct ALT_RSTMGR_HDSKEN_s
{
    uint32_t  sdrselfrefen :  1;  /* SDRAM Self-Refresh Enable */
    uint32_t  fpgamgrhsen  :  1;  /* FPGA Manager Handshake Enable */
    uint32_t  fpgahsen     :  1;  /* FPGA Handshake Enable */
    uint32_t  etrstallen   :  1;  /* ETR (Embedded Trace Router) Handshake Enable */
    uint32_t               : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_HDSKEN. */
typedef volatile struct ALT_RSTMGR_HDSKEN_s  ALT_RSTMGR_HDSKEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_HDSKEN register. */
#define ALT_RSTMGR_HDSKEN_RESET       0x00100000
/* The byte offset of the ALT_RSTMGR_HDSKEN register from the beginning of the component. */
#define ALT_RSTMGR_HDSKEN_OFST        0x10

/*
 * Register : Control Register - hdskreq
 * 
 * The CTRL register is used by software to control reset behavior.It includes
 * fields for software to initiate the cold and warm reset, enable hardware
 * handshake with other modules before warm reset, and perform software handshake.
 * The software handshake sequence must match the hardware sequence. Software
 * mustde-assert the handshake request after asserting warm reset and before de-
 * assert the warm reset.
 * 
 * Fields are only reset by a cold reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                              
 * :-------|:-------|:--------|:------------------------------------------
 *  [0]    | RW     | 0x0     | SDRAM Self-Refresh Request               
 *  [1]    | RW     | 0x0     | FPGA Manager Handshake Request           
 *  [2]    | RW     | 0x0     | FPGA Handshake Request                   
 *  [3]    | RW     | 0x0     | ETR (Embedded Trace Router) Stall Request
 *  [31:4] | ???    | Unknown | *UNDEFINED*                              
 * 
 */
/*
 * Field : SDRAM Self-Refresh Request - sdrselfrefreq
 * 
 * Software writes this field 1 to request to the SDRAM Controller Subsystem that
 * it puts the SDRAM devices into self-refresh mode. This is done to preserve SDRAM
 * contents across a software warm reset.
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
 * Field : FPGA Manager Handshake Request - fpgamgrhsreq
 * 
 * Software writes this field 1 to request to the FPGA Manager to idle its output
 * clock.
 * 
 * Software waits for the FPGAMGRHSACK to be 1 and then writes this field to 0.
 * Note that it is possible for the FPGA Manager to never assert FPGAMGRHSACK so
 * software should timeout in this case.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HDSKREQ_FPGAMGRHSREQ register field. */
#define ALT_RSTMGR_HDSKREQ_FPGAMGRHSREQ_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HDSKREQ_FPGAMGRHSREQ register field. */
#define ALT_RSTMGR_HDSKREQ_FPGAMGRHSREQ_MSB        1
/* The width in bits of the ALT_RSTMGR_HDSKREQ_FPGAMGRHSREQ register field. */
#define ALT_RSTMGR_HDSKREQ_FPGAMGRHSREQ_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HDSKREQ_FPGAMGRHSREQ register field value. */
#define ALT_RSTMGR_HDSKREQ_FPGAMGRHSREQ_SET_MSK    0x00000002
/* The mask used to clear the ALT_RSTMGR_HDSKREQ_FPGAMGRHSREQ register field value. */
#define ALT_RSTMGR_HDSKREQ_FPGAMGRHSREQ_CLR_MSK    0xfffffffd
/* The reset value of the ALT_RSTMGR_HDSKREQ_FPGAMGRHSREQ register field. */
#define ALT_RSTMGR_HDSKREQ_FPGAMGRHSREQ_RESET      0x0
/* Extracts the ALT_RSTMGR_HDSKREQ_FPGAMGRHSREQ field value from a register. */
#define ALT_RSTMGR_HDSKREQ_FPGAMGRHSREQ_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_RSTMGR_HDSKREQ_FPGAMGRHSREQ register field value suitable for setting the register. */
#define ALT_RSTMGR_HDSKREQ_FPGAMGRHSREQ_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : FPGA Handshake Request - fpgahsreq
 * 
 * Software writes this field 1 to initiate handshake  request to FPGA .
 * 
 * Software waits for the FPGAHSACK to be active and then writes this field to 0.
 * Note that it is possible for the FPGA to never assert FPGAHSACK so software
 * should timeout in this case.
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
 * Software writes this field 1 to request to the ETR that it stalls its AXI master
 * to the L3 Interconnect.
 * 
 * Software waits for the ETRSTALLACK to be 1 and then writes this field to 0.
 * Note that it is possible for the ETR to never assert ETRSTALLACK so software
 * should timeout if ETRSTALLACK is never asserted.
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

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_HDSKREQ.
 */
struct ALT_RSTMGR_HDSKREQ_s
{
    uint32_t  sdrselfrefreq :  1;  /* SDRAM Self-Refresh Request */
    uint32_t  fpgamgrhsreq  :  1;  /* FPGA Manager Handshake Request */
    uint32_t  fpgahsreq     :  1;  /* FPGA Handshake Request */
    uint32_t  etrstallreq   :  1;  /* ETR (Embedded Trace Router) Stall Request */
    uint32_t                : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_HDSKREQ. */
typedef volatile struct ALT_RSTMGR_HDSKREQ_s  ALT_RSTMGR_HDSKREQ_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_HDSKREQ register. */
#define ALT_RSTMGR_HDSKREQ_RESET       0x00100000
/* The byte offset of the ALT_RSTMGR_HDSKREQ register from the beginning of the component. */
#define ALT_RSTMGR_HDSKREQ_OFST        0x14

/*
 * Register : Control Register - hdskack
 * 
 * The CTRL register is used by software to control reset behavior.It includes
 * fields for software to initiate the cold and warm reset, enable hardware
 * handshake with other modules before warm reset, and perform software handshake.
 * The software handshake sequence must match the hardware sequence. Software
 * mustde-assert the handshake request after asserting warm reset and before de-
 * assert the warm reset.
 * 
 * Fields are only reset by a cold reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                       
 * :-------|:-------|:--------|:---------------------------------------------------
 *  [0]    | R      | 0x0     | SDRAM Self-Refresh Acknowledge                    
 *  [1]    | R      | 0x0     | FPGA Manager Handshake Acknowledge                
 *  [2]    | R      | 0x0     | FPGA Handshake Acknowledge                        
 *  [3]    | R      | 0x0     | ETR (Embedded Trace Router) Stall Acknowledge     
 *  [7:4]  | ???    | 0x0     | *UNDEFINED*                                       
 *  [8]    | RW     | 0x0     | ETR (Embedded Trace Router) Stall After Warm Reset
 *  [31:9] | ???    | Unknown | *UNDEFINED*                                       
 * 
 */
/*
 * Field : SDRAM Self-Refresh Acknowledge - sdrselfreqack
 * 
 * This is the acknowlege for a SDRAM self-refresh mode request initiated by the
 * SDRSELFREFREQ field.  A 1 indicates that the SDRAM Controller Subsystem has put
 * the SDRAM devices into self-refresh mode.
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
 * Field : FPGA Manager Handshake Acknowledge - fpgamgrhsack
 * 
 * This is the acknowlege (high active) that the FPGA manager has successfully
 * idled its output clock.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HDSKACK_FPGAMGRHSACK register field. */
#define ALT_RSTMGR_HDSKACK_FPGAMGRHSACK_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HDSKACK_FPGAMGRHSACK register field. */
#define ALT_RSTMGR_HDSKACK_FPGAMGRHSACK_MSB        1
/* The width in bits of the ALT_RSTMGR_HDSKACK_FPGAMGRHSACK register field. */
#define ALT_RSTMGR_HDSKACK_FPGAMGRHSACK_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HDSKACK_FPGAMGRHSACK register field value. */
#define ALT_RSTMGR_HDSKACK_FPGAMGRHSACK_SET_MSK    0x00000002
/* The mask used to clear the ALT_RSTMGR_HDSKACK_FPGAMGRHSACK register field value. */
#define ALT_RSTMGR_HDSKACK_FPGAMGRHSACK_CLR_MSK    0xfffffffd
/* The reset value of the ALT_RSTMGR_HDSKACK_FPGAMGRHSACK register field. */
#define ALT_RSTMGR_HDSKACK_FPGAMGRHSACK_RESET      0x0
/* Extracts the ALT_RSTMGR_HDSKACK_FPGAMGRHSACK field value from a register. */
#define ALT_RSTMGR_HDSKACK_FPGAMGRHSACK_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_RSTMGR_HDSKACK_FPGAMGRHSACK register field value suitable for setting the register. */
#define ALT_RSTMGR_HDSKACK_FPGAMGRHSACK_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : FPGA Handshake Acknowledge - fpgahsack
 * 
 * This is the acknowlege (high active) that the FPGA handshake   acknowledge has
 * been received by Reset Manager.
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
 * This is the acknowlege for a ETR AXI master stall initiated by the ETRSTALLREQ
 * field.  A 1 indicates that the ETR has stalled its AXI master
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
 * Field : ETR (Embedded Trace Router) Stall After Warm Reset - etrstallwarmrst
 * 
 * If a warm reset occurs and ETRSTALLEN is 1, hardware sets this bit to 1 to
 * indicate that the stall of the ETR AXI master is pending. Hardware leaves the
 * ETR stalled until software clears this field by writing it with 1. Software must
 * only clear this field when it is ready to have the ETR AXI master start making
 * AXI requests to write trace data.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HDSKACK_ETRSTALLWARMRST register field. */
#define ALT_RSTMGR_HDSKACK_ETRSTALLWARMRST_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HDSKACK_ETRSTALLWARMRST register field. */
#define ALT_RSTMGR_HDSKACK_ETRSTALLWARMRST_MSB        8
/* The width in bits of the ALT_RSTMGR_HDSKACK_ETRSTALLWARMRST register field. */
#define ALT_RSTMGR_HDSKACK_ETRSTALLWARMRST_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HDSKACK_ETRSTALLWARMRST register field value. */
#define ALT_RSTMGR_HDSKACK_ETRSTALLWARMRST_SET_MSK    0x00000100
/* The mask used to clear the ALT_RSTMGR_HDSKACK_ETRSTALLWARMRST register field value. */
#define ALT_RSTMGR_HDSKACK_ETRSTALLWARMRST_CLR_MSK    0xfffffeff
/* The reset value of the ALT_RSTMGR_HDSKACK_ETRSTALLWARMRST register field. */
#define ALT_RSTMGR_HDSKACK_ETRSTALLWARMRST_RESET      0x0
/* Extracts the ALT_RSTMGR_HDSKACK_ETRSTALLWARMRST field value from a register. */
#define ALT_RSTMGR_HDSKACK_ETRSTALLWARMRST_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_RSTMGR_HDSKACK_ETRSTALLWARMRST register field value suitable for setting the register. */
#define ALT_RSTMGR_HDSKACK_ETRSTALLWARMRST_SET(value) (((value) << 8) & 0x00000100)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_HDSKACK.
 */
struct ALT_RSTMGR_HDSKACK_s
{
    const uint32_t  sdrselfreqack   :  1;  /* SDRAM Self-Refresh Acknowledge */
    const uint32_t  fpgamgrhsack    :  1;  /* FPGA Manager Handshake Acknowledge */
    const uint32_t  fpgahsack       :  1;  /* FPGA Handshake Acknowledge */
    const uint32_t  etrstallack     :  1;  /* ETR (Embedded Trace Router) Stall Acknowledge */
    uint32_t                        :  4;  /* *UNDEFINED* */
    uint32_t        etrstallwarmrst :  1;  /* ETR (Embedded Trace Router) Stall After Warm Reset */
    uint32_t                        : 23;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_HDSKACK. */
typedef volatile struct ALT_RSTMGR_HDSKACK_s  ALT_RSTMGR_HDSKACK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_HDSKACK register. */
#define ALT_RSTMGR_HDSKACK_RESET       0x00100000
/* The byte offset of the ALT_RSTMGR_HDSKACK register from the beginning of the component. */
#define ALT_RSTMGR_HDSKACK_OFST        0x18

/*
 * Register : Reset Cycles Count Register - counts
 * 
 * The COUNTS register is used by software to control reset behavior.It includes
 * fields for software to control the behavior of the warm reset and nRST pin.
 * 
 * Fields are only reset by a cold reset.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                   
 * :--------|:-------|:------|:-------------------------------
 *  [19:0]  | RW     | 0x800 | nRST Pin Count                
 *  [23:20] | ???    | 0x0   | *UNDEFINED*                   
 *  [31:24] | RW     | 0x80  | Warm reset release delay count
 * 
 */
/*
 * Field : nRST Pin Count - nrstcnt
 * 
 * The Reset Manager pulls down the nRST pin on a warm reset for the number of
 * cycles specified in this register. A value of 0x0 prevents the Reset Manager
 * from pulling down the nRST pin.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_COUNTS_NRSTCNT register field. */
#define ALT_RSTMGR_COUNTS_NRSTCNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_COUNTS_NRSTCNT register field. */
#define ALT_RSTMGR_COUNTS_NRSTCNT_MSB        19
/* The width in bits of the ALT_RSTMGR_COUNTS_NRSTCNT register field. */
#define ALT_RSTMGR_COUNTS_NRSTCNT_WIDTH      20
/* The mask used to set the ALT_RSTMGR_COUNTS_NRSTCNT register field value. */
#define ALT_RSTMGR_COUNTS_NRSTCNT_SET_MSK    0x000fffff
/* The mask used to clear the ALT_RSTMGR_COUNTS_NRSTCNT register field value. */
#define ALT_RSTMGR_COUNTS_NRSTCNT_CLR_MSK    0xfff00000
/* The reset value of the ALT_RSTMGR_COUNTS_NRSTCNT register field. */
#define ALT_RSTMGR_COUNTS_NRSTCNT_RESET      0x800
/* Extracts the ALT_RSTMGR_COUNTS_NRSTCNT field value from a register. */
#define ALT_RSTMGR_COUNTS_NRSTCNT_GET(value) (((value) & 0x000fffff) >> 0)
/* Produces a ALT_RSTMGR_COUNTS_NRSTCNT register field value suitable for setting the register. */
#define ALT_RSTMGR_COUNTS_NRSTCNT_SET(value) (((value) << 0) & 0x000fffff)

/*
 * Field : Warm reset release delay count - warmrstcycles
 * 
 * On a warm reset, the Reset Manager releases the reset to the Clock Manager, and
 * then waits for the number of cycles specified in this register before releasing
 * the rest of the hardware controlled resets.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_COUNTS_WARMRSTCYCLES register field. */
#define ALT_RSTMGR_COUNTS_WARMRSTCYCLES_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_COUNTS_WARMRSTCYCLES register field. */
#define ALT_RSTMGR_COUNTS_WARMRSTCYCLES_MSB        31
/* The width in bits of the ALT_RSTMGR_COUNTS_WARMRSTCYCLES register field. */
#define ALT_RSTMGR_COUNTS_WARMRSTCYCLES_WIDTH      8
/* The mask used to set the ALT_RSTMGR_COUNTS_WARMRSTCYCLES register field value. */
#define ALT_RSTMGR_COUNTS_WARMRSTCYCLES_SET_MSK    0xff000000
/* The mask used to clear the ALT_RSTMGR_COUNTS_WARMRSTCYCLES register field value. */
#define ALT_RSTMGR_COUNTS_WARMRSTCYCLES_CLR_MSK    0x00ffffff
/* The reset value of the ALT_RSTMGR_COUNTS_WARMRSTCYCLES register field. */
#define ALT_RSTMGR_COUNTS_WARMRSTCYCLES_RESET      0x80
/* Extracts the ALT_RSTMGR_COUNTS_WARMRSTCYCLES field value from a register. */
#define ALT_RSTMGR_COUNTS_WARMRSTCYCLES_GET(value) (((value) & 0xff000000) >> 24)
/* Produces a ALT_RSTMGR_COUNTS_WARMRSTCYCLES register field value suitable for setting the register. */
#define ALT_RSTMGR_COUNTS_WARMRSTCYCLES_SET(value) (((value) << 24) & 0xff000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_COUNTS.
 */
struct ALT_RSTMGR_COUNTS_s
{
    uint32_t  nrstcnt       : 20;  /* nRST Pin Count */
    uint32_t                :  4;  /* *UNDEFINED* */
    uint32_t  warmrstcycles :  8;  /* Warm reset release delay count */
};

/* The typedef declaration for register ALT_RSTMGR_COUNTS. */
typedef volatile struct ALT_RSTMGR_COUNTS_s  ALT_RSTMGR_COUNTS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_COUNTS register. */
#define ALT_RSTMGR_COUNTS_RESET       0x80000800
/* The byte offset of the ALT_RSTMGR_COUNTS register from the beginning of the component. */
#define ALT_RSTMGR_COUNTS_OFST        0x1c

/*
 * Register : MPU Module Reset Register - mpumodrst
 * 
 * The MPUMODRST register is used by software to trigger module resets (individual
 * module reset signals). Software explicitly asserts and de-asserts module reset
 * signals by writing bits in the appropriate *MODRST register. It is up to
 * software to ensure module reset signals are asserted for the appropriate length
 * of time and are de-asserted in the correct order. It is also up to software to
 * not assert a module reset signal that would prevent software from de-asserting
 * the module reset signal. For example, software should not assert the module
 * reset to the CPU executing the software.
 * 
 * Software writes a bit to 1 to assert the module reset signal and to 0 to de-
 * assert the module reset signal.
 * 
 * All fields except CPU1 are only reset by a cold reset. The CPU1 field is reset
 * by a cold reset. The CPU1 field is also reset by a warm reset if not masked by
 * the corresponding MPUWARMMASK field.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description    
 * :-------|:-------|:------|:----------------
 *  [0]    | RW     | 0x0   | CPU0           
 *  [1]    | RW     | 0x1   | CPU1           
 *  [2]    | RW     | 0x0   | Watchdogs      
 *  [3]    | RW     | 0x0   | SCU/Peripherals
 *  [31:4] | ???    | 0x0   | *UNDEFINED*    
 * 
 */
/*
 * Field : CPU0 - cpu0
 * 
 * Resets Cortex-A9 CPU0 in MPU. Whe software changes this field from 0 to 1,
 * ittriggers the following sequence:  1. CPU0 reset is asserted. cpu0 clkoff is
 * de-asserted 2. after 32 osc1_clk cycles, cpu0 clkoff is asserted.
 * 
 * When software changes this field from 1 to 0, it triggers the following
 * sequence: 1.CPU0 reset is de-asserted. 2. after 32 cycles, cpu0 clkoff is de-
 * asserted.
 * 
 * Software needs to wait for at least 64 osc1_clk cycles between each change of
 * this field to keep the proper reset/clkoff sequence.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MPUMODRST_CPU0 register field. */
#define ALT_RSTMGR_MPUMODRST_CPU0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MPUMODRST_CPU0 register field. */
#define ALT_RSTMGR_MPUMODRST_CPU0_MSB        0
/* The width in bits of the ALT_RSTMGR_MPUMODRST_CPU0 register field. */
#define ALT_RSTMGR_MPUMODRST_CPU0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MPUMODRST_CPU0 register field value. */
#define ALT_RSTMGR_MPUMODRST_CPU0_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_MPUMODRST_CPU0 register field value. */
#define ALT_RSTMGR_MPUMODRST_CPU0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_MPUMODRST_CPU0 register field. */
#define ALT_RSTMGR_MPUMODRST_CPU0_RESET      0x0
/* Extracts the ALT_RSTMGR_MPUMODRST_CPU0 field value from a register. */
#define ALT_RSTMGR_MPUMODRST_CPU0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_MPUMODRST_CPU0 register field value suitable for setting the register. */
#define ALT_RSTMGR_MPUMODRST_CPU0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : CPU1 - cpu1
 * 
 * Resets Cortex-A9 CPU1 in MPU.
 * 
 * It is reset to 1 on a cold or warm reset. This holds CPU1 in reset until
 * software is ready to release CPU1 from reset by writing 0 to this field.
 * 
 * On single-core devices, writes to this field are ignored.On dual-core devices,
 * writes to this field trigger the same sequence as writes to the CPU0 field
 * (except the sequence is performed on CPU1).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MPUMODRST_CPU1 register field. */
#define ALT_RSTMGR_MPUMODRST_CPU1_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MPUMODRST_CPU1 register field. */
#define ALT_RSTMGR_MPUMODRST_CPU1_MSB        1
/* The width in bits of the ALT_RSTMGR_MPUMODRST_CPU1 register field. */
#define ALT_RSTMGR_MPUMODRST_CPU1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MPUMODRST_CPU1 register field value. */
#define ALT_RSTMGR_MPUMODRST_CPU1_SET_MSK    0x00000002
/* The mask used to clear the ALT_RSTMGR_MPUMODRST_CPU1 register field value. */
#define ALT_RSTMGR_MPUMODRST_CPU1_CLR_MSK    0xfffffffd
/* The reset value of the ALT_RSTMGR_MPUMODRST_CPU1 register field. */
#define ALT_RSTMGR_MPUMODRST_CPU1_RESET      0x1
/* Extracts the ALT_RSTMGR_MPUMODRST_CPU1 field value from a register. */
#define ALT_RSTMGR_MPUMODRST_CPU1_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_RSTMGR_MPUMODRST_CPU1 register field value suitable for setting the register. */
#define ALT_RSTMGR_MPUMODRST_CPU1_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : Watchdogs - wds
 * 
 * Resets both per-CPU Watchdog Reset Status registers in MPU.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MPUMODRST_WDS register field. */
#define ALT_RSTMGR_MPUMODRST_WDS_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MPUMODRST_WDS register field. */
#define ALT_RSTMGR_MPUMODRST_WDS_MSB        2
/* The width in bits of the ALT_RSTMGR_MPUMODRST_WDS register field. */
#define ALT_RSTMGR_MPUMODRST_WDS_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MPUMODRST_WDS register field value. */
#define ALT_RSTMGR_MPUMODRST_WDS_SET_MSK    0x00000004
/* The mask used to clear the ALT_RSTMGR_MPUMODRST_WDS register field value. */
#define ALT_RSTMGR_MPUMODRST_WDS_CLR_MSK    0xfffffffb
/* The reset value of the ALT_RSTMGR_MPUMODRST_WDS register field. */
#define ALT_RSTMGR_MPUMODRST_WDS_RESET      0x0
/* Extracts the ALT_RSTMGR_MPUMODRST_WDS field value from a register. */
#define ALT_RSTMGR_MPUMODRST_WDS_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_RSTMGR_MPUMODRST_WDS register field value suitable for setting the register. */
#define ALT_RSTMGR_MPUMODRST_WDS_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : SCU/Peripherals - scuper
 * 
 * Resets SCU and peripherals. Peripherals consist of the interrupt controller,
 * global timer, both per-CPU private timers, and both per-CPU watchdogs (except
 * for the Watchdog Reset Status registers).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MPUMODRST_SCUPER register field. */
#define ALT_RSTMGR_MPUMODRST_SCUPER_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MPUMODRST_SCUPER register field. */
#define ALT_RSTMGR_MPUMODRST_SCUPER_MSB        3
/* The width in bits of the ALT_RSTMGR_MPUMODRST_SCUPER register field. */
#define ALT_RSTMGR_MPUMODRST_SCUPER_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MPUMODRST_SCUPER register field value. */
#define ALT_RSTMGR_MPUMODRST_SCUPER_SET_MSK    0x00000008
/* The mask used to clear the ALT_RSTMGR_MPUMODRST_SCUPER register field value. */
#define ALT_RSTMGR_MPUMODRST_SCUPER_CLR_MSK    0xfffffff7
/* The reset value of the ALT_RSTMGR_MPUMODRST_SCUPER register field. */
#define ALT_RSTMGR_MPUMODRST_SCUPER_RESET      0x0
/* Extracts the ALT_RSTMGR_MPUMODRST_SCUPER field value from a register. */
#define ALT_RSTMGR_MPUMODRST_SCUPER_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_RSTMGR_MPUMODRST_SCUPER register field value suitable for setting the register. */
#define ALT_RSTMGR_MPUMODRST_SCUPER_SET(value) (((value) << 3) & 0x00000008)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_MPUMODRST.
 */
struct ALT_RSTMGR_MPUMODRST_s
{
    uint32_t  cpu0   :  1;  /* CPU0 */
    uint32_t  cpu1   :  1;  /* CPU1 */
    uint32_t  wds    :  1;  /* Watchdogs */
    uint32_t  scuper :  1;  /* SCU/Peripherals */
    uint32_t         : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_MPUMODRST. */
typedef volatile struct ALT_RSTMGR_MPUMODRST_s  ALT_RSTMGR_MPUMODRST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_MPUMODRST register. */
#define ALT_RSTMGR_MPUMODRST_RESET       0x00000002
/* The byte offset of the ALT_RSTMGR_MPUMODRST register from the beginning of the component. */
#define ALT_RSTMGR_MPUMODRST_OFST        0x20

/*
 * Register : Peripheral 0 Module Reset Register - per0modrst
 * 
 * The PER0MODRST register is used by software to trigger module resets for
 * Peripheral Group and Fast Peripheral Group.  Regular Peripheral Group resets are
 * in the lower 2 bytes, and Fast Pheripheral Group resets are in the upper 2
 * bytes. Software explicitly asserts and de-asserts module reset signals by
 * writing bits in the appropriate *MODRST register. It is up to software to ensure
 * module reset signals are asserted for the appropriate length of time and are de-
 * asserted in the correct order. It is also up to software to not assert a module
 * reset signal that would prevent software from de-asserting the module reset
 * signal. For example, software should not assert the module reset to the CPU
 * executing the software.
 * 
 * Software writes a bit to 1 to assert the module reset signal and to 0 to de-
 * assert the module reset signal.
 * 
 * All fields are reset by a cold reset.All fields are also reset by a warm reset
 * if not masked by the corresponding PERWARMMASK field.
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
 *  [6]  | RW     | 0x1   | QSPI Flash    
 *  [7]  | RW     | 0x1   | SD/MMC        
 *  [8]  | RW     | 0x1   | EMAC0OCP      
 *  [9]  | RW     | 0x1   | EMAC1OCP      
 *  [10] | RW     | 0x1   | EMAC2OCP      
 *  [11] | RW     | 0x1   | USB0OCP       
 *  [12] | RW     | 0x1   | USB1OCP       
 *  [13] | RW     | 0x1   | NANDOCP       
 *  [14] | RW     | 0x1   | QSPIOCP       
 *  [15] | RW     | 0x1   | SDMMCOCP      
 *  [16] | RW     | 0x1   | DMA Controller
 *  [17] | RW     | 0x1   | SPIM0         
 *  [18] | RW     | 0x1   | SPIM1         
 *  [19] | RW     | 0x1   | SPIS0         
 *  [20] | RW     | 0x1   | SPIS1         
 *  [21] | RW     | 0x1   | DMAOCP        
 *  [22] | RW     | 0x1   | EMAC PTP      
 *  [23] | ???    | 0x0   | *UNDEFINED*   
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
 * Resets EMAC0
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
 * Resets EMAC1
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
 * Resets EMAC2
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
 * Resets USB0
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
 * Resets USB1
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
 * Resets NAND flash controller
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
 * Field : QSPI Flash - qspi
 * 
 * Resets QSPI flash controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_QSPI register field. */
#define ALT_RSTMGR_PER0MODRST_QSPI_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_QSPI register field. */
#define ALT_RSTMGR_PER0MODRST_QSPI_MSB        6
/* The width in bits of the ALT_RSTMGR_PER0MODRST_QSPI register field. */
#define ALT_RSTMGR_PER0MODRST_QSPI_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_QSPI register field value. */
#define ALT_RSTMGR_PER0MODRST_QSPI_SET_MSK    0x00000040
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_QSPI register field value. */
#define ALT_RSTMGR_PER0MODRST_QSPI_CLR_MSK    0xffffffbf
/* The reset value of the ALT_RSTMGR_PER0MODRST_QSPI register field. */
#define ALT_RSTMGR_PER0MODRST_QSPI_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_QSPI field value from a register. */
#define ALT_RSTMGR_PER0MODRST_QSPI_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_RSTMGR_PER0MODRST_QSPI register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_QSPI_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : SD/MMC - sdmmc
 * 
 * Resets SD/MMC controller
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
 * Field : QSPIOCP - qspiocp
 * 
 * Resets QSPI ECC OCP DIagnostics modules.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0MODRST_QSPIOCP register field. */
#define ALT_RSTMGR_PER0MODRST_QSPIOCP_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0MODRST_QSPIOCP register field. */
#define ALT_RSTMGR_PER0MODRST_QSPIOCP_MSB        14
/* The width in bits of the ALT_RSTMGR_PER0MODRST_QSPIOCP register field. */
#define ALT_RSTMGR_PER0MODRST_QSPIOCP_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0MODRST_QSPIOCP register field value. */
#define ALT_RSTMGR_PER0MODRST_QSPIOCP_SET_MSK    0x00004000
/* The mask used to clear the ALT_RSTMGR_PER0MODRST_QSPIOCP register field value. */
#define ALT_RSTMGR_PER0MODRST_QSPIOCP_CLR_MSK    0xffffbfff
/* The reset value of the ALT_RSTMGR_PER0MODRST_QSPIOCP register field. */
#define ALT_RSTMGR_PER0MODRST_QSPIOCP_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0MODRST_QSPIOCP field value from a register. */
#define ALT_RSTMGR_PER0MODRST_QSPIOCP_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_RSTMGR_PER0MODRST_QSPIOCP register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0MODRST_QSPIOCP_SET(value) (((value) << 14) & 0x00004000)

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
 * Resets DMA controller
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
 * Resets SPIM0 controller
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
 * Resets SPIM1 controller
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
 * Resets SPIS0 controller
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
 * Resets SPIS1 controller
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
 * Resets EMAC PTP
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
 * Controller
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
 * Controller
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
 * Controller
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
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_PER0MODRST.
 */
struct ALT_RSTMGR_PER0MODRST_s
{
    uint32_t  emac0    :  1;  /* EMAC0 */
    uint32_t  emac1    :  1;  /* EMAC1 */
    uint32_t  emac2    :  1;  /* EMAC2 */
    uint32_t  usb0     :  1;  /* USB0 */
    uint32_t  usb1     :  1;  /* USB1 */
    uint32_t  nand     :  1;  /* NAND Flash */
    uint32_t  qspi     :  1;  /* QSPI Flash */
    uint32_t  sdmmc    :  1;  /* SD/MMC */
    uint32_t  emac0ocp :  1;  /* EMAC0OCP */
    uint32_t  emac1ocp :  1;  /* EMAC1OCP */
    uint32_t  emac2ocp :  1;  /* EMAC2OCP */
    uint32_t  usb0ocp  :  1;  /* USB0OCP */
    uint32_t  usb1ocp  :  1;  /* USB1OCP */
    uint32_t  nandocp  :  1;  /* NANDOCP */
    uint32_t  qspiocp  :  1;  /* QSPIOCP */
    uint32_t  sdmmcocp :  1;  /* SDMMCOCP */
    uint32_t  dma      :  1;  /* DMA Controller */
    uint32_t  spim0    :  1;  /* SPIM0 */
    uint32_t  spim1    :  1;  /* SPIM1 */
    uint32_t  spis0    :  1;  /* SPIS0 */
    uint32_t  spis1    :  1;  /* SPIS1 */
    uint32_t  dmaocp   :  1;  /* DMAOCP */
    uint32_t  emacptp  :  1;  /* EMAC PTP */
    uint32_t           :  1;  /* *UNDEFINED* */
    uint32_t  dmaif0   :  1;  /* FPGA DMA0 */
    uint32_t  dmaif1   :  1;  /* FPGA DMA1 */
    uint32_t  dmaif2   :  1;  /* FPGA DMA2 */
    uint32_t  dmaif3   :  1;  /* FPGA DMA3 */
    uint32_t  dmaif4   :  1;  /* FPGA DMA4 */
    uint32_t  dmaif5   :  1;  /* FPGA DMA5 */
    uint32_t  dmaif6   :  1;  /* FPGA DMA6 */
    uint32_t  dmaif7   :  1;  /* FPGA DMA7 */
};

/* The typedef declaration for register ALT_RSTMGR_PER0MODRST. */
typedef volatile struct ALT_RSTMGR_PER0MODRST_s  ALT_RSTMGR_PER0MODRST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_PER0MODRST register. */
#define ALT_RSTMGR_PER0MODRST_RESET       0xff7fffff
/* The byte offset of the ALT_RSTMGR_PER0MODRST register from the beginning of the component. */
#define ALT_RSTMGR_PER0MODRST_OFST        0x24

/*
 * Register : Peripheral Module Reset Register - per1modrst
 * 
 * The PER1MODRST register is used by software to trigger module resets for Slow
 * Peripheral Group. Software explicitly asserts and de-asserts module reset
 * signals by writing bits in the appropriate *MODRST register. It is up to
 * software to ensure module reset signals are asserted for the appropriate length
 * of time and are de-asserted in the correct order. It is also up to software to
 * not assert a module reset signal that would prevent software from de-asserting
 * the module reset signal. For example, software should not assert the module
 * reset to the CPU executing the software.
 * 
 * Software writes a bit to 1 to assert the module reset signal and to 0 to de-
 * assert the module reset signal.
 * 
 * All fields are reset by a cold reset.All fields are also reset by a warm reset
 * if not masked by the corresponding PERWARMMASK field.
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
 *  [2]     | RW     | 0x1   | l4systimer0 
 *  [3]     | RW     | 0x1   | l4sys_timer1
 *  [4]     | RW     | 0x1   | SP Timer 0  
 *  [5]     | RW     | 0x1   | SP Timer 1  
 *  [7:6]   | ???    | 0x0   | *UNDEFINED* 
 *  [8]     | RW     | 0x1   | I2C0        
 *  [9]     | RW     | 0x1   | I2C1        
 *  [10]    | RW     | 0x1   | I2C2        
 *  [11]    | RW     | 0x1   | I2C3        
 *  [12]    | RW     | 0x1   | I2C4        
 *  [15:13] | ???    | 0x0   | *UNDEFINED* 
 *  [16]    | RW     | 0x1   | UART0       
 *  [17]    | RW     | 0x1   | UART1       
 *  [23:18] | ???    | 0x0   | *UNDEFINED* 
 *  [24]    | RW     | 0x1   | GPIO0       
 *  [25]    | RW     | 0x1   | GPIO1       
 *  [26]    | RW     | 0x1   | GPIO2       
 *  [31:27] | ???    | 0x0   | *UNDEFINED* 
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
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1MODRST_WD0 register field. */
#define ALT_RSTMGR_PER1MODRST_WD0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1MODRST_WD0 register field. */
#define ALT_RSTMGR_PER1MODRST_WD0_MSB        0
/* The width in bits of the ALT_RSTMGR_PER1MODRST_WD0 register field. */
#define ALT_RSTMGR_PER1MODRST_WD0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1MODRST_WD0 register field value. */
#define ALT_RSTMGR_PER1MODRST_WD0_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_PER1MODRST_WD0 register field value. */
#define ALT_RSTMGR_PER1MODRST_WD0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_PER1MODRST_WD0 register field. */
#define ALT_RSTMGR_PER1MODRST_WD0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1MODRST_WD0 field value from a register. */
#define ALT_RSTMGR_PER1MODRST_WD0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_PER1MODRST_WD0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1MODRST_WD0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Watch Dog1 - watchdog1
 * 
 * Resets Watchdog 1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1MODRST_WD1 register field. */
#define ALT_RSTMGR_PER1MODRST_WD1_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1MODRST_WD1 register field. */
#define ALT_RSTMGR_PER1MODRST_WD1_MSB        1
/* The width in bits of the ALT_RSTMGR_PER1MODRST_WD1 register field. */
#define ALT_RSTMGR_PER1MODRST_WD1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1MODRST_WD1 register field value. */
#define ALT_RSTMGR_PER1MODRST_WD1_SET_MSK    0x00000002
/* The mask used to clear the ALT_RSTMGR_PER1MODRST_WD1 register field value. */
#define ALT_RSTMGR_PER1MODRST_WD1_CLR_MSK    0xfffffffd
/* The reset value of the ALT_RSTMGR_PER1MODRST_WD1 register field. */
#define ALT_RSTMGR_PER1MODRST_WD1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1MODRST_WD1 field value from a register. */
#define ALT_RSTMGR_PER1MODRST_WD1_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_RSTMGR_PER1MODRST_WD1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1MODRST_WD1_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : l4systimer0 - l4systimer0
 * 
 * Resets l4sys_timer0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1MODRST_L4SYSTMR0 register field. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTMR0_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1MODRST_L4SYSTMR0 register field. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTMR0_MSB        2
/* The width in bits of the ALT_RSTMGR_PER1MODRST_L4SYSTMR0 register field. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTMR0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1MODRST_L4SYSTMR0 register field value. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTMR0_SET_MSK    0x00000004
/* The mask used to clear the ALT_RSTMGR_PER1MODRST_L4SYSTMR0 register field value. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTMR0_CLR_MSK    0xfffffffb
/* The reset value of the ALT_RSTMGR_PER1MODRST_L4SYSTMR0 register field. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTMR0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1MODRST_L4SYSTMR0 field value from a register. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTMR0_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_RSTMGR_PER1MODRST_L4SYSTMR0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTMR0_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : l4sys_timer1 - l4systimer1
 * 
 * Resets l4sys_timer1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1MODRST_L4SYSTMR1 register field. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTMR1_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1MODRST_L4SYSTMR1 register field. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTMR1_MSB        3
/* The width in bits of the ALT_RSTMGR_PER1MODRST_L4SYSTMR1 register field. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTMR1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1MODRST_L4SYSTMR1 register field value. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTMR1_SET_MSK    0x00000008
/* The mask used to clear the ALT_RSTMGR_PER1MODRST_L4SYSTMR1 register field value. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTMR1_CLR_MSK    0xfffffff7
/* The reset value of the ALT_RSTMGR_PER1MODRST_L4SYSTMR1 register field. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTMR1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1MODRST_L4SYSTMR1 field value from a register. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTMR1_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_RSTMGR_PER1MODRST_L4SYSTMR1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1MODRST_L4SYSTMR1_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : SP Timer 0 - sptimer0
 * 
 * Resets SP timer 0 connected to L4
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1MODRST_SPTMR0 register field. */
#define ALT_RSTMGR_PER1MODRST_SPTMR0_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1MODRST_SPTMR0 register field. */
#define ALT_RSTMGR_PER1MODRST_SPTMR0_MSB        4
/* The width in bits of the ALT_RSTMGR_PER1MODRST_SPTMR0 register field. */
#define ALT_RSTMGR_PER1MODRST_SPTMR0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1MODRST_SPTMR0 register field value. */
#define ALT_RSTMGR_PER1MODRST_SPTMR0_SET_MSK    0x00000010
/* The mask used to clear the ALT_RSTMGR_PER1MODRST_SPTMR0 register field value. */
#define ALT_RSTMGR_PER1MODRST_SPTMR0_CLR_MSK    0xffffffef
/* The reset value of the ALT_RSTMGR_PER1MODRST_SPTMR0 register field. */
#define ALT_RSTMGR_PER1MODRST_SPTMR0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1MODRST_SPTMR0 field value from a register. */
#define ALT_RSTMGR_PER1MODRST_SPTMR0_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_RSTMGR_PER1MODRST_SPTMR0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1MODRST_SPTMR0_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : SP Timer 1 - sptimer1
 * 
 * Resets SP timer 1 connected to L4
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1MODRST_SPTMR1 register field. */
#define ALT_RSTMGR_PER1MODRST_SPTMR1_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1MODRST_SPTMR1 register field. */
#define ALT_RSTMGR_PER1MODRST_SPTMR1_MSB        5
/* The width in bits of the ALT_RSTMGR_PER1MODRST_SPTMR1 register field. */
#define ALT_RSTMGR_PER1MODRST_SPTMR1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1MODRST_SPTMR1 register field value. */
#define ALT_RSTMGR_PER1MODRST_SPTMR1_SET_MSK    0x00000020
/* The mask used to clear the ALT_RSTMGR_PER1MODRST_SPTMR1 register field value. */
#define ALT_RSTMGR_PER1MODRST_SPTMR1_CLR_MSK    0xffffffdf
/* The reset value of the ALT_RSTMGR_PER1MODRST_SPTMR1 register field. */
#define ALT_RSTMGR_PER1MODRST_SPTMR1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1MODRST_SPTMR1 field value from a register. */
#define ALT_RSTMGR_PER1MODRST_SPTMR1_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_RSTMGR_PER1MODRST_SPTMR1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1MODRST_SPTMR1_SET(value) (((value) << 5) & 0x00000020)

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

/*
 * Field : GPIO2 - gpio2
 * 
 * Resets GPIO2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1MODRST_GPIO2 register field. */
#define ALT_RSTMGR_PER1MODRST_GPIO2_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1MODRST_GPIO2 register field. */
#define ALT_RSTMGR_PER1MODRST_GPIO2_MSB        26
/* The width in bits of the ALT_RSTMGR_PER1MODRST_GPIO2 register field. */
#define ALT_RSTMGR_PER1MODRST_GPIO2_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1MODRST_GPIO2 register field value. */
#define ALT_RSTMGR_PER1MODRST_GPIO2_SET_MSK    0x04000000
/* The mask used to clear the ALT_RSTMGR_PER1MODRST_GPIO2 register field value. */
#define ALT_RSTMGR_PER1MODRST_GPIO2_CLR_MSK    0xfbffffff
/* The reset value of the ALT_RSTMGR_PER1MODRST_GPIO2 register field. */
#define ALT_RSTMGR_PER1MODRST_GPIO2_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1MODRST_GPIO2 field value from a register. */
#define ALT_RSTMGR_PER1MODRST_GPIO2_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_RSTMGR_PER1MODRST_GPIO2 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1MODRST_GPIO2_SET(value) (((value) << 26) & 0x04000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_PER1MODRST.
 */
struct ALT_RSTMGR_PER1MODRST_s
{
    uint32_t  watchdog0   :  1;  /* Watch Dog0 */
    uint32_t  watchdog1   :  1;  /* Watch Dog1 */
    uint32_t  l4systimer0 :  1;  /* l4systimer0 */
    uint32_t  l4systimer1 :  1;  /* l4sys_timer1 */
    uint32_t  sptimer0    :  1;  /* SP Timer 0 */
    uint32_t  sptimer1    :  1;  /* SP Timer 1 */
    uint32_t              :  2;  /* *UNDEFINED* */
    uint32_t  i2c0        :  1;  /* I2C0 */
    uint32_t  i2c1        :  1;  /* I2C1 */
    uint32_t  i2c2        :  1;  /* I2C2 */
    uint32_t  i2c3        :  1;  /* I2C3 */
    uint32_t  i2c4        :  1;  /* I2C4 */
    uint32_t              :  3;  /* *UNDEFINED* */
    uint32_t  uart0       :  1;  /* UART0 */
    uint32_t  uart1       :  1;  /* UART1 */
    uint32_t              :  6;  /* *UNDEFINED* */
    uint32_t  gpio0       :  1;  /* GPIO0 */
    uint32_t  gpio1       :  1;  /* GPIO1 */
    uint32_t  gpio2       :  1;  /* GPIO2 */
    uint32_t              :  5;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_PER1MODRST. */
typedef volatile struct ALT_RSTMGR_PER1MODRST_s  ALT_RSTMGR_PER1MODRST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_PER1MODRST register. */
#define ALT_RSTMGR_PER1MODRST_RESET       0x07031f3f
/* The byte offset of the ALT_RSTMGR_PER1MODRST register from the beginning of the component. */
#define ALT_RSTMGR_PER1MODRST_OFST        0x28

/*
 * Register : Bridge Module Reset Register - brgmodrst
 * 
 * The BRGMODRST register is used by software to trigger module resets (individual
 * module reset signals). Software explicitly asserts and de-asserts module reset
 * signals by writing bits in the appropriate *MODRST register. It is up to
 * software to ensure module reset signals are asserted for the appropriate length
 * of time and are de-asserted in the correct order. It is also up to software to
 * not assert a module reset signal that would prevent software from de-asserting
 * the module reset signal. For example, software should not assert the module
 * reset to the CPU executing the software.
 * 
 * Software writes a bit to 1 to assert the module reset signal and to 0 to de-
 * assert the module reset signal.
 * 
 * All fields are reset by a cold reset.All fields are also reset by a warm reset
 * if not masked by the corresponding BRGWARMMASK field.
 * 
 * The reset value of all fields is 1. This holds the corresponding module in reset
 * until software is ready to release the module from reset by writing 0 to its
 * field.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description      
 * :-------|:-------|:------|:------------------
 *  [0]    | RW     | 0x1   | HPS2FPGA Bridge  
 *  [1]    | RW     | 0x1   | LWHPS2FPGA Bridge
 *  [2]    | RW     | 0x1   | FPGA2HPS Bridge  
 *  [3]    | RW     | 0x1   | F2S SDRAM0 Bridge
 *  [4]    | RW     | 0x1   | F2S SDRAM1 Bridge
 *  [5]    | RW     | 0x1   | F2S SDRAM2 Bridge
 *  [6]    | RW     | 0x1   | DDR Scheduler    
 *  [31:7] | ???    | 0x0   | *UNDEFINED*      
 * 
 */
/*
 * Field : HPS2FPGA Bridge - hps2fpga
 * 
 * Resets HPS2FPGA Bridge
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_BRGMODRST_H2F register field. */
#define ALT_RSTMGR_BRGMODRST_H2F_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_BRGMODRST_H2F register field. */
#define ALT_RSTMGR_BRGMODRST_H2F_MSB        0
/* The width in bits of the ALT_RSTMGR_BRGMODRST_H2F register field. */
#define ALT_RSTMGR_BRGMODRST_H2F_WIDTH      1
/* The mask used to set the ALT_RSTMGR_BRGMODRST_H2F register field value. */
#define ALT_RSTMGR_BRGMODRST_H2F_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_BRGMODRST_H2F register field value. */
#define ALT_RSTMGR_BRGMODRST_H2F_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_BRGMODRST_H2F register field. */
#define ALT_RSTMGR_BRGMODRST_H2F_RESET      0x1
/* Extracts the ALT_RSTMGR_BRGMODRST_H2F field value from a register. */
#define ALT_RSTMGR_BRGMODRST_H2F_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_BRGMODRST_H2F register field value suitable for setting the register. */
#define ALT_RSTMGR_BRGMODRST_H2F_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : LWHPS2FPGA Bridge - lwhps2fpga
 * 
 * Resets LWHPS2FPGA Bridge
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_BRGMODRST_LWH2F register field. */
#define ALT_RSTMGR_BRGMODRST_LWH2F_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_BRGMODRST_LWH2F register field. */
#define ALT_RSTMGR_BRGMODRST_LWH2F_MSB        1
/* The width in bits of the ALT_RSTMGR_BRGMODRST_LWH2F register field. */
#define ALT_RSTMGR_BRGMODRST_LWH2F_WIDTH      1
/* The mask used to set the ALT_RSTMGR_BRGMODRST_LWH2F register field value. */
#define ALT_RSTMGR_BRGMODRST_LWH2F_SET_MSK    0x00000002
/* The mask used to clear the ALT_RSTMGR_BRGMODRST_LWH2F register field value. */
#define ALT_RSTMGR_BRGMODRST_LWH2F_CLR_MSK    0xfffffffd
/* The reset value of the ALT_RSTMGR_BRGMODRST_LWH2F register field. */
#define ALT_RSTMGR_BRGMODRST_LWH2F_RESET      0x1
/* Extracts the ALT_RSTMGR_BRGMODRST_LWH2F field value from a register. */
#define ALT_RSTMGR_BRGMODRST_LWH2F_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_RSTMGR_BRGMODRST_LWH2F register field value suitable for setting the register. */
#define ALT_RSTMGR_BRGMODRST_LWH2F_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : FPGA2HPS Bridge - fpga2hps
 * 
 * Resets FPGA2HPS Bridge
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_BRGMODRST_F2H register field. */
#define ALT_RSTMGR_BRGMODRST_F2H_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_BRGMODRST_F2H register field. */
#define ALT_RSTMGR_BRGMODRST_F2H_MSB        2
/* The width in bits of the ALT_RSTMGR_BRGMODRST_F2H register field. */
#define ALT_RSTMGR_BRGMODRST_F2H_WIDTH      1
/* The mask used to set the ALT_RSTMGR_BRGMODRST_F2H register field value. */
#define ALT_RSTMGR_BRGMODRST_F2H_SET_MSK    0x00000004
/* The mask used to clear the ALT_RSTMGR_BRGMODRST_F2H register field value. */
#define ALT_RSTMGR_BRGMODRST_F2H_CLR_MSK    0xfffffffb
/* The reset value of the ALT_RSTMGR_BRGMODRST_F2H register field. */
#define ALT_RSTMGR_BRGMODRST_F2H_RESET      0x1
/* Extracts the ALT_RSTMGR_BRGMODRST_F2H field value from a register. */
#define ALT_RSTMGR_BRGMODRST_F2H_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_RSTMGR_BRGMODRST_F2H register field value suitable for setting the register. */
#define ALT_RSTMGR_BRGMODRST_F2H_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : F2S SDRAM0 Bridge - f2ssdram0
 * 
 * Resets F2S_SDRAM0 Bridge
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
 * Resets F2S_SDRAM1 Bridge
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
 * Resets F2S_SDRAM2 Bridge
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
 * Field : DDR Scheduler - ddrsch
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
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_BRGMODRST.
 */
struct ALT_RSTMGR_BRGMODRST_s
{
    uint32_t  hps2fpga   :  1;  /* HPS2FPGA Bridge */
    uint32_t  lwhps2fpga :  1;  /* LWHPS2FPGA Bridge */
    uint32_t  fpga2hps   :  1;  /* FPGA2HPS Bridge */
    uint32_t  f2ssdram0  :  1;  /* F2S SDRAM0 Bridge */
    uint32_t  f2ssdram1  :  1;  /* F2S SDRAM1 Bridge */
    uint32_t  f2ssdram2  :  1;  /* F2S SDRAM2 Bridge */
    uint32_t  ddrsch     :  1;  /* DDR Scheduler */
    uint32_t             : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_BRGMODRST. */
typedef volatile struct ALT_RSTMGR_BRGMODRST_s  ALT_RSTMGR_BRGMODRST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_BRGMODRST register. */
#define ALT_RSTMGR_BRGMODRST_RESET       0x0000007f
/* The byte offset of the ALT_RSTMGR_BRGMODRST register from the beginning of the component. */
#define ALT_RSTMGR_BRGMODRST_OFST        0x2c

/*
 * Register : SYSTEM Module Reset Register - sysmodrst
 * 
 * The SYSMODRST register is used by software to trigger module resets (individual
 * module reset signals). Software explicitly asserts and de-asserts module reset
 * signals by writing bits in the appropriate *MODRST register. It is up to
 * software to ensure module reset signals are asserted for the appropriate length
 * of time and are de-asserted in the correct order. It is also up to software to
 * not assert a module reset signal that would prevent software from de-asserting
 * the module reset signal. For example, software should not assert the module
 * reset to the CPU executing the software.
 * 
 * Software writes a bit to 1 to assert the module reset signal and to 0 to de-
 * assert the module reset signal.
 * 
 * All fields are only reset by a cold reset
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [0]    | RW     | 0x0   | Boot ROM                       
 *  [1]    | RW     | 0x0   | On-chip RAM                    
 *  [2]    | ???    | 0x0   | *UNDEFINED*                    
 *  [3]    | RW     | 0x0   | FPGA Manager                   
 *  [4]    | RW     | 0x0   | HPS to FPGA Core (Cold or Warm)
 *  [5]    | RW     | 0x0   | System/Debug                   
 *  [6]    | RW     | 0x0   | On-chip RAM ECC OCP Diagnostic 
 *  [31:7] | ???    | 0x0   | *UNDEFINED*                    
 * 
 */
/*
 * Field : Boot ROM - rom
 * 
 * Resets Boot ROM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_SYSMODRST_ROM register field. */
#define ALT_RSTMGR_SYSMODRST_ROM_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_SYSMODRST_ROM register field. */
#define ALT_RSTMGR_SYSMODRST_ROM_MSB        0
/* The width in bits of the ALT_RSTMGR_SYSMODRST_ROM register field. */
#define ALT_RSTMGR_SYSMODRST_ROM_WIDTH      1
/* The mask used to set the ALT_RSTMGR_SYSMODRST_ROM register field value. */
#define ALT_RSTMGR_SYSMODRST_ROM_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_SYSMODRST_ROM register field value. */
#define ALT_RSTMGR_SYSMODRST_ROM_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_SYSMODRST_ROM register field. */
#define ALT_RSTMGR_SYSMODRST_ROM_RESET      0x0
/* Extracts the ALT_RSTMGR_SYSMODRST_ROM field value from a register. */
#define ALT_RSTMGR_SYSMODRST_ROM_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_SYSMODRST_ROM register field value suitable for setting the register. */
#define ALT_RSTMGR_SYSMODRST_ROM_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : On-chip RAM - ocram
 * 
 * Resets On-chip RAM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_SYSMODRST_OCRAM register field. */
#define ALT_RSTMGR_SYSMODRST_OCRAM_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_SYSMODRST_OCRAM register field. */
#define ALT_RSTMGR_SYSMODRST_OCRAM_MSB        1
/* The width in bits of the ALT_RSTMGR_SYSMODRST_OCRAM register field. */
#define ALT_RSTMGR_SYSMODRST_OCRAM_WIDTH      1
/* The mask used to set the ALT_RSTMGR_SYSMODRST_OCRAM register field value. */
#define ALT_RSTMGR_SYSMODRST_OCRAM_SET_MSK    0x00000002
/* The mask used to clear the ALT_RSTMGR_SYSMODRST_OCRAM register field value. */
#define ALT_RSTMGR_SYSMODRST_OCRAM_CLR_MSK    0xfffffffd
/* The reset value of the ALT_RSTMGR_SYSMODRST_OCRAM register field. */
#define ALT_RSTMGR_SYSMODRST_OCRAM_RESET      0x0
/* Extracts the ALT_RSTMGR_SYSMODRST_OCRAM field value from a register. */
#define ALT_RSTMGR_SYSMODRST_OCRAM_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_RSTMGR_SYSMODRST_OCRAM register field value suitable for setting the register. */
#define ALT_RSTMGR_SYSMODRST_OCRAM_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : FPGA Manager - fpgamgr
 * 
 * Resets FPGA Manager
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_SYSMODRST_FPGAMGR register field. */
#define ALT_RSTMGR_SYSMODRST_FPGAMGR_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_SYSMODRST_FPGAMGR register field. */
#define ALT_RSTMGR_SYSMODRST_FPGAMGR_MSB        3
/* The width in bits of the ALT_RSTMGR_SYSMODRST_FPGAMGR register field. */
#define ALT_RSTMGR_SYSMODRST_FPGAMGR_WIDTH      1
/* The mask used to set the ALT_RSTMGR_SYSMODRST_FPGAMGR register field value. */
#define ALT_RSTMGR_SYSMODRST_FPGAMGR_SET_MSK    0x00000008
/* The mask used to clear the ALT_RSTMGR_SYSMODRST_FPGAMGR register field value. */
#define ALT_RSTMGR_SYSMODRST_FPGAMGR_CLR_MSK    0xfffffff7
/* The reset value of the ALT_RSTMGR_SYSMODRST_FPGAMGR register field. */
#define ALT_RSTMGR_SYSMODRST_FPGAMGR_RESET      0x0
/* Extracts the ALT_RSTMGR_SYSMODRST_FPGAMGR field value from a register. */
#define ALT_RSTMGR_SYSMODRST_FPGAMGR_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_RSTMGR_SYSMODRST_FPGAMGR register field value suitable for setting the register. */
#define ALT_RSTMGR_SYSMODRST_FPGAMGR_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : HPS to FPGA Core (Cold or Warm) - s2f
 * 
 * Resets logic in FPGA core that doesn't differentiate between HPS cold and warm
 * resets
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_SYSMODRST_S2F register field. */
#define ALT_RSTMGR_SYSMODRST_S2F_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_SYSMODRST_S2F register field. */
#define ALT_RSTMGR_SYSMODRST_S2F_MSB        4
/* The width in bits of the ALT_RSTMGR_SYSMODRST_S2F register field. */
#define ALT_RSTMGR_SYSMODRST_S2F_WIDTH      1
/* The mask used to set the ALT_RSTMGR_SYSMODRST_S2F register field value. */
#define ALT_RSTMGR_SYSMODRST_S2F_SET_MSK    0x00000010
/* The mask used to clear the ALT_RSTMGR_SYSMODRST_S2F register field value. */
#define ALT_RSTMGR_SYSMODRST_S2F_CLR_MSK    0xffffffef
/* The reset value of the ALT_RSTMGR_SYSMODRST_S2F register field. */
#define ALT_RSTMGR_SYSMODRST_S2F_RESET      0x0
/* Extracts the ALT_RSTMGR_SYSMODRST_S2F field value from a register. */
#define ALT_RSTMGR_SYSMODRST_S2F_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_RSTMGR_SYSMODRST_S2F register field value suitable for setting the register. */
#define ALT_RSTMGR_SYSMODRST_S2F_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : System/Debug - sysdbg
 * 
 * Resets logic that spans the system and debug domains.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_SYSMODRST_SYSDBG register field. */
#define ALT_RSTMGR_SYSMODRST_SYSDBG_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_SYSMODRST_SYSDBG register field. */
#define ALT_RSTMGR_SYSMODRST_SYSDBG_MSB        5
/* The width in bits of the ALT_RSTMGR_SYSMODRST_SYSDBG register field. */
#define ALT_RSTMGR_SYSMODRST_SYSDBG_WIDTH      1
/* The mask used to set the ALT_RSTMGR_SYSMODRST_SYSDBG register field value. */
#define ALT_RSTMGR_SYSMODRST_SYSDBG_SET_MSK    0x00000020
/* The mask used to clear the ALT_RSTMGR_SYSMODRST_SYSDBG register field value. */
#define ALT_RSTMGR_SYSMODRST_SYSDBG_CLR_MSK    0xffffffdf
/* The reset value of the ALT_RSTMGR_SYSMODRST_SYSDBG register field. */
#define ALT_RSTMGR_SYSMODRST_SYSDBG_RESET      0x0
/* Extracts the ALT_RSTMGR_SYSMODRST_SYSDBG field value from a register. */
#define ALT_RSTMGR_SYSMODRST_SYSDBG_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_RSTMGR_SYSMODRST_SYSDBG register field value suitable for setting the register. */
#define ALT_RSTMGR_SYSMODRST_SYSDBG_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : On-chip RAM ECC OCP Diagnostic - ocramocp
 * 
 * Resets On-chip RAM ECC OCP Diagnostic module
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_SYSMODRST_OCRAMOCP register field. */
#define ALT_RSTMGR_SYSMODRST_OCRAMOCP_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_SYSMODRST_OCRAMOCP register field. */
#define ALT_RSTMGR_SYSMODRST_OCRAMOCP_MSB        6
/* The width in bits of the ALT_RSTMGR_SYSMODRST_OCRAMOCP register field. */
#define ALT_RSTMGR_SYSMODRST_OCRAMOCP_WIDTH      1
/* The mask used to set the ALT_RSTMGR_SYSMODRST_OCRAMOCP register field value. */
#define ALT_RSTMGR_SYSMODRST_OCRAMOCP_SET_MSK    0x00000040
/* The mask used to clear the ALT_RSTMGR_SYSMODRST_OCRAMOCP register field value. */
#define ALT_RSTMGR_SYSMODRST_OCRAMOCP_CLR_MSK    0xffffffbf
/* The reset value of the ALT_RSTMGR_SYSMODRST_OCRAMOCP register field. */
#define ALT_RSTMGR_SYSMODRST_OCRAMOCP_RESET      0x0
/* Extracts the ALT_RSTMGR_SYSMODRST_OCRAMOCP field value from a register. */
#define ALT_RSTMGR_SYSMODRST_OCRAMOCP_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_RSTMGR_SYSMODRST_OCRAMOCP register field value suitable for setting the register. */
#define ALT_RSTMGR_SYSMODRST_OCRAMOCP_SET(value) (((value) << 6) & 0x00000040)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_SYSMODRST.
 */
struct ALT_RSTMGR_SYSMODRST_s
{
    uint32_t  rom      :  1;  /* Boot ROM */
    uint32_t  ocram    :  1;  /* On-chip RAM */
    uint32_t           :  1;  /* *UNDEFINED* */
    uint32_t  fpgamgr  :  1;  /* FPGA Manager */
    uint32_t  s2f      :  1;  /* HPS to FPGA Core (Cold or Warm) */
    uint32_t  sysdbg   :  1;  /* System/Debug */
    uint32_t  ocramocp :  1;  /* On-chip RAM ECC OCP Diagnostic */
    uint32_t           : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_SYSMODRST. */
typedef volatile struct ALT_RSTMGR_SYSMODRST_s  ALT_RSTMGR_SYSMODRST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_SYSMODRST register. */
#define ALT_RSTMGR_SYSMODRST_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_SYSMODRST register from the beginning of the component. */
#define ALT_RSTMGR_SYSMODRST_OFST        0x30

/*
 * Register : COLD Module Reset Register - coldmodrst
 * 
 * The COLDMODRST register is used by software to trigger module resets (individual
 * module reset signals). Software explicitly asserts and de-asserts module reset
 * signals by writing bits in the appropriate *MODRST register. It is up to
 * software to ensure module reset signals are asserted for the appropriate length
 * of time and are de-asserted in the correct order. It is also up to software to
 * not assert a module reset signal that would prevent software from de-asserting
 * the module reset signal. For example, software should not assert the module
 * reset to the CPU executing the software.
 * 
 * Software writes a bit to 1 to assert the module reset signal and to 0 to de-
 * assert the module reset signal.
 * 
 * All fields are only reset by a cold reset
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                 
 * :-------|:-------|:------|:-----------------------------
 *  [0]    | RW     | 0x0   | Clock Manager               
 *  [2:1]  | ???    | 0x0   | *UNDEFINED*                 
 *  [3]    | RW     | 0x0   | HPS to FPGA Core (Cold-only)
 *  [4]    | RW     | 0x0   | Timestamp                   
 *  [5]    | RW     | 0x0   | TAP Controller              
 *  [6]    | RW     | 0x0   | HMC Cold Reset              
 *  [7]    | RW     | 0x0   | IO Manager (Cold-only)      
 *  [31:8] | ???    | 0x0   | *UNDEFINED*                 
 * 
 */
/*
 * Field : Clock Manager - clkmgrcold
 * 
 * Resets Clock Manager (cold reset only)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_COLDMODRST_CLKMGRCOLD register field. */
#define ALT_RSTMGR_COLDMODRST_CLKMGRCOLD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_COLDMODRST_CLKMGRCOLD register field. */
#define ALT_RSTMGR_COLDMODRST_CLKMGRCOLD_MSB        0
/* The width in bits of the ALT_RSTMGR_COLDMODRST_CLKMGRCOLD register field. */
#define ALT_RSTMGR_COLDMODRST_CLKMGRCOLD_WIDTH      1
/* The mask used to set the ALT_RSTMGR_COLDMODRST_CLKMGRCOLD register field value. */
#define ALT_RSTMGR_COLDMODRST_CLKMGRCOLD_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_COLDMODRST_CLKMGRCOLD register field value. */
#define ALT_RSTMGR_COLDMODRST_CLKMGRCOLD_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_COLDMODRST_CLKMGRCOLD register field. */
#define ALT_RSTMGR_COLDMODRST_CLKMGRCOLD_RESET      0x0
/* Extracts the ALT_RSTMGR_COLDMODRST_CLKMGRCOLD field value from a register. */
#define ALT_RSTMGR_COLDMODRST_CLKMGRCOLD_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_COLDMODRST_CLKMGRCOLD register field value suitable for setting the register. */
#define ALT_RSTMGR_COLDMODRST_CLKMGRCOLD_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : HPS to FPGA Core (Cold-only) - s2fcold
 * 
 * Resets logic in FPGA core that is only reset by a cold reset (ignores warm
 * reset)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_COLDMODRST_S2FCOLD register field. */
#define ALT_RSTMGR_COLDMODRST_S2FCOLD_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_COLDMODRST_S2FCOLD register field. */
#define ALT_RSTMGR_COLDMODRST_S2FCOLD_MSB        3
/* The width in bits of the ALT_RSTMGR_COLDMODRST_S2FCOLD register field. */
#define ALT_RSTMGR_COLDMODRST_S2FCOLD_WIDTH      1
/* The mask used to set the ALT_RSTMGR_COLDMODRST_S2FCOLD register field value. */
#define ALT_RSTMGR_COLDMODRST_S2FCOLD_SET_MSK    0x00000008
/* The mask used to clear the ALT_RSTMGR_COLDMODRST_S2FCOLD register field value. */
#define ALT_RSTMGR_COLDMODRST_S2FCOLD_CLR_MSK    0xfffffff7
/* The reset value of the ALT_RSTMGR_COLDMODRST_S2FCOLD register field. */
#define ALT_RSTMGR_COLDMODRST_S2FCOLD_RESET      0x0
/* Extracts the ALT_RSTMGR_COLDMODRST_S2FCOLD field value from a register. */
#define ALT_RSTMGR_COLDMODRST_S2FCOLD_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_RSTMGR_COLDMODRST_S2FCOLD register field value suitable for setting the register. */
#define ALT_RSTMGR_COLDMODRST_S2FCOLD_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : Timestamp - timestampcold
 * 
 * Resets debug timestamp to 0 (cold reset only)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_COLDMODRST_TSCOLD register field. */
#define ALT_RSTMGR_COLDMODRST_TSCOLD_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_COLDMODRST_TSCOLD register field. */
#define ALT_RSTMGR_COLDMODRST_TSCOLD_MSB        4
/* The width in bits of the ALT_RSTMGR_COLDMODRST_TSCOLD register field. */
#define ALT_RSTMGR_COLDMODRST_TSCOLD_WIDTH      1
/* The mask used to set the ALT_RSTMGR_COLDMODRST_TSCOLD register field value. */
#define ALT_RSTMGR_COLDMODRST_TSCOLD_SET_MSK    0x00000010
/* The mask used to clear the ALT_RSTMGR_COLDMODRST_TSCOLD register field value. */
#define ALT_RSTMGR_COLDMODRST_TSCOLD_CLR_MSK    0xffffffef
/* The reset value of the ALT_RSTMGR_COLDMODRST_TSCOLD register field. */
#define ALT_RSTMGR_COLDMODRST_TSCOLD_RESET      0x0
/* Extracts the ALT_RSTMGR_COLDMODRST_TSCOLD field value from a register. */
#define ALT_RSTMGR_COLDMODRST_TSCOLD_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_RSTMGR_COLDMODRST_TSCOLD register field value suitable for setting the register. */
#define ALT_RSTMGR_COLDMODRST_TSCOLD_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : TAP Controller - tapcold
 * 
 * Resets portion of DAP JTAG TAP controller no reset by a debug probe reset (i.e.
 * nTRST pin).  Cold reset only.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_COLDMODRST_TAPCOLD register field. */
#define ALT_RSTMGR_COLDMODRST_TAPCOLD_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_COLDMODRST_TAPCOLD register field. */
#define ALT_RSTMGR_COLDMODRST_TAPCOLD_MSB        5
/* The width in bits of the ALT_RSTMGR_COLDMODRST_TAPCOLD register field. */
#define ALT_RSTMGR_COLDMODRST_TAPCOLD_WIDTH      1
/* The mask used to set the ALT_RSTMGR_COLDMODRST_TAPCOLD register field value. */
#define ALT_RSTMGR_COLDMODRST_TAPCOLD_SET_MSK    0x00000020
/* The mask used to clear the ALT_RSTMGR_COLDMODRST_TAPCOLD register field value. */
#define ALT_RSTMGR_COLDMODRST_TAPCOLD_CLR_MSK    0xffffffdf
/* The reset value of the ALT_RSTMGR_COLDMODRST_TAPCOLD register field. */
#define ALT_RSTMGR_COLDMODRST_TAPCOLD_RESET      0x0
/* Extracts the ALT_RSTMGR_COLDMODRST_TAPCOLD field value from a register. */
#define ALT_RSTMGR_COLDMODRST_TAPCOLD_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_RSTMGR_COLDMODRST_TAPCOLD register field value suitable for setting the register. */
#define ALT_RSTMGR_COLDMODRST_TAPCOLD_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : HMC Cold Reset - hmccold
 * 
 * Resets logic in HMC affected only by a cold reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_COLDMODRST_HMCCOLD register field. */
#define ALT_RSTMGR_COLDMODRST_HMCCOLD_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_COLDMODRST_HMCCOLD register field. */
#define ALT_RSTMGR_COLDMODRST_HMCCOLD_MSB        6
/* The width in bits of the ALT_RSTMGR_COLDMODRST_HMCCOLD register field. */
#define ALT_RSTMGR_COLDMODRST_HMCCOLD_WIDTH      1
/* The mask used to set the ALT_RSTMGR_COLDMODRST_HMCCOLD register field value. */
#define ALT_RSTMGR_COLDMODRST_HMCCOLD_SET_MSK    0x00000040
/* The mask used to clear the ALT_RSTMGR_COLDMODRST_HMCCOLD register field value. */
#define ALT_RSTMGR_COLDMODRST_HMCCOLD_CLR_MSK    0xffffffbf
/* The reset value of the ALT_RSTMGR_COLDMODRST_HMCCOLD register field. */
#define ALT_RSTMGR_COLDMODRST_HMCCOLD_RESET      0x0
/* Extracts the ALT_RSTMGR_COLDMODRST_HMCCOLD field value from a register. */
#define ALT_RSTMGR_COLDMODRST_HMCCOLD_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_RSTMGR_COLDMODRST_HMCCOLD register field value suitable for setting the register. */
#define ALT_RSTMGR_COLDMODRST_HMCCOLD_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : IO Manager (Cold-only) - iomgrcold
 * 
 * Resets logic in IO Manager that is only reset by a cold reset (ignores warm
 * reset)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_COLDMODRST_IOMGRCOLD register field. */
#define ALT_RSTMGR_COLDMODRST_IOMGRCOLD_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_COLDMODRST_IOMGRCOLD register field. */
#define ALT_RSTMGR_COLDMODRST_IOMGRCOLD_MSB        7
/* The width in bits of the ALT_RSTMGR_COLDMODRST_IOMGRCOLD register field. */
#define ALT_RSTMGR_COLDMODRST_IOMGRCOLD_WIDTH      1
/* The mask used to set the ALT_RSTMGR_COLDMODRST_IOMGRCOLD register field value. */
#define ALT_RSTMGR_COLDMODRST_IOMGRCOLD_SET_MSK    0x00000080
/* The mask used to clear the ALT_RSTMGR_COLDMODRST_IOMGRCOLD register field value. */
#define ALT_RSTMGR_COLDMODRST_IOMGRCOLD_CLR_MSK    0xffffff7f
/* The reset value of the ALT_RSTMGR_COLDMODRST_IOMGRCOLD register field. */
#define ALT_RSTMGR_COLDMODRST_IOMGRCOLD_RESET      0x0
/* Extracts the ALT_RSTMGR_COLDMODRST_IOMGRCOLD field value from a register. */
#define ALT_RSTMGR_COLDMODRST_IOMGRCOLD_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_RSTMGR_COLDMODRST_IOMGRCOLD register field value suitable for setting the register. */
#define ALT_RSTMGR_COLDMODRST_IOMGRCOLD_SET(value) (((value) << 7) & 0x00000080)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_COLDMODRST.
 */
struct ALT_RSTMGR_COLDMODRST_s
{
    uint32_t  clkmgrcold    :  1;  /* Clock Manager */
    uint32_t                :  2;  /* *UNDEFINED* */
    uint32_t  s2fcold       :  1;  /* HPS to FPGA Core (Cold-only) */
    uint32_t  timestampcold :  1;  /* Timestamp */
    uint32_t  tapcold       :  1;  /* TAP Controller */
    uint32_t  hmccold       :  1;  /* HMC Cold Reset */
    uint32_t  iomgrcold     :  1;  /* IO Manager (Cold-only) */
    uint32_t                : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_COLDMODRST. */
typedef volatile struct ALT_RSTMGR_COLDMODRST_s  ALT_RSTMGR_COLDMODRST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_COLDMODRST register. */
#define ALT_RSTMGR_COLDMODRST_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_COLDMODRST register from the beginning of the component. */
#define ALT_RSTMGR_COLDMODRST_OFST        0x34

/*
 * Register : NRST Module Reset Register - nrstmodrst
 * 
 * The NRSTMODRST register is used by software to trigger module resets (individual
 * module reset signals). Software explicitly asserts and de-asserts module reset
 * signals by writing bits in the appropriate *MODRST register. It is up to
 * software to ensure module reset signals are asserted for the appropriate length
 * of time and are de-asserted in the correct order. It is also up to software to
 * not assert a module reset signal that would prevent software from de-asserting
 * the module reset signal. For example, software should not assert the module
 * reset to the CPU executing the software.
 * 
 * Software writes a bit to 1 to assert the module reset signal and to 0 to de-
 * assert the module reset signal.
 * 
 * All fields are only reset by a cold reset
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [0]    | RW     | 0x0   | nRST Pin OE
 *  [31:1] | ???    | 0x0   | *UNDEFINED*
 * 
 */
/*
 * Field : nRST Pin OE - nrstpinoe
 * 
 * Drives NRST output enable with data tied low to extend cold and warm reset
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_NRSTMODRST_NRSTPINOE register field. */
#define ALT_RSTMGR_NRSTMODRST_NRSTPINOE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_NRSTMODRST_NRSTPINOE register field. */
#define ALT_RSTMGR_NRSTMODRST_NRSTPINOE_MSB        0
/* The width in bits of the ALT_RSTMGR_NRSTMODRST_NRSTPINOE register field. */
#define ALT_RSTMGR_NRSTMODRST_NRSTPINOE_WIDTH      1
/* The mask used to set the ALT_RSTMGR_NRSTMODRST_NRSTPINOE register field value. */
#define ALT_RSTMGR_NRSTMODRST_NRSTPINOE_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_NRSTMODRST_NRSTPINOE register field value. */
#define ALT_RSTMGR_NRSTMODRST_NRSTPINOE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_NRSTMODRST_NRSTPINOE register field. */
#define ALT_RSTMGR_NRSTMODRST_NRSTPINOE_RESET      0x0
/* Extracts the ALT_RSTMGR_NRSTMODRST_NRSTPINOE field value from a register. */
#define ALT_RSTMGR_NRSTMODRST_NRSTPINOE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_NRSTMODRST_NRSTPINOE register field value suitable for setting the register. */
#define ALT_RSTMGR_NRSTMODRST_NRSTPINOE_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_NRSTMODRST.
 */
struct ALT_RSTMGR_NRSTMODRST_s
{
    uint32_t  nrstpinoe :  1;  /* nRST Pin OE */
    uint32_t            : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_NRSTMODRST. */
typedef volatile struct ALT_RSTMGR_NRSTMODRST_s  ALT_RSTMGR_NRSTMODRST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_NRSTMODRST register. */
#define ALT_RSTMGR_NRSTMODRST_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_NRSTMODRST register from the beginning of the component. */
#define ALT_RSTMGR_NRSTMODRST_OFST        0x38

/*
 * Register : Debug Module Reset Register - dbgmodrst
 * 
 * The DBGMODRST register is used by software to trigger module resets (individual
 * module reset signals). Software explicitly asserts and de-asserts module reset
 * signals by writing bits in the appropriate *MODRST register. It is up to
 * software to ensure module reset signals are asserted for the appropriate length
 * of time and are de-asserted in the correct order. It is also up to software to
 * not assert a module reset signal that would prevent software from de-asserting
 * the module reset signal. For example, software should not assert the module
 * reset to the CPU executing the software.
 * 
 * Software writes a bit to 1 to assert the module reset signal and to 0 to de-
 * assert the module reset signal.
 * 
 * All fields are only reset by a cold reset
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [0]    | RW     | 0x0   | Debug      
 *  [31:1] | ???    | 0x0   | *UNDEFINED*
 * 
 */
/*
 * Field : Debug - dbg
 * 
 * Resets logic located only in the debug domain.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_DBGMODRST_DBG register field. */
#define ALT_RSTMGR_DBGMODRST_DBG_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_DBGMODRST_DBG register field. */
#define ALT_RSTMGR_DBGMODRST_DBG_MSB        0
/* The width in bits of the ALT_RSTMGR_DBGMODRST_DBG register field. */
#define ALT_RSTMGR_DBGMODRST_DBG_WIDTH      1
/* The mask used to set the ALT_RSTMGR_DBGMODRST_DBG register field value. */
#define ALT_RSTMGR_DBGMODRST_DBG_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_DBGMODRST_DBG register field value. */
#define ALT_RSTMGR_DBGMODRST_DBG_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_DBGMODRST_DBG register field. */
#define ALT_RSTMGR_DBGMODRST_DBG_RESET      0x0
/* Extracts the ALT_RSTMGR_DBGMODRST_DBG field value from a register. */
#define ALT_RSTMGR_DBGMODRST_DBG_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_DBGMODRST_DBG register field value suitable for setting the register. */
#define ALT_RSTMGR_DBGMODRST_DBG_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_DBGMODRST.
 */
struct ALT_RSTMGR_DBGMODRST_s
{
    uint32_t  dbg :  1;  /* Debug */
    uint32_t      : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_DBGMODRST. */
typedef volatile struct ALT_RSTMGR_DBGMODRST_s  ALT_RSTMGR_DBGMODRST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_DBGMODRST register. */
#define ALT_RSTMGR_DBGMODRST_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_DBGMODRST register from the beginning of the component. */
#define ALT_RSTMGR_DBGMODRST_OFST        0x3c

/*
 * Register : MPU Warm Mask Register - mpuwarmmask
 * 
 * The MPUWARMMASK register is used by software to mask the assertion of module
 * reset signals for hardware sequenced warm resets. There is a writeable bit for
 * each module reset signal that is asserted by default on a hardware sequenced
 * warm reset. If the bit is 1, the module reset signal is asserted by a hardware
 * sequenced warm reset. If the bit is 0, the module reset signal is not changed by
 * a hardware sequenced warm reset. The bit assignments of the *WARMMASK registers
 * match the corresponding *MODRST registers. Any module reset signals that are
 * never asserted by a warm reset have reserved bit offsets and are tied to 0 (read
 * as 0, writes are ignored).
 * 
 * All fields are only reset by a cold reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [0]    | RW     | 0x1   | Watchdogs  
 *  [31:1] | ???    | 0xf   | *UNDEFINED*
 * 
 */
/*
 * Field : Watchdogs - wds
 * 
 * Masks hardware sequenced warm reset for both per-CPU  Watchdog Reset Status
 * registers in MPU
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_MPUWARMMSK_WDS register field. */
#define ALT_RSTMGR_MPUWARMMSK_WDS_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_MPUWARMMSK_WDS register field. */
#define ALT_RSTMGR_MPUWARMMSK_WDS_MSB        0
/* The width in bits of the ALT_RSTMGR_MPUWARMMSK_WDS register field. */
#define ALT_RSTMGR_MPUWARMMSK_WDS_WIDTH      1
/* The mask used to set the ALT_RSTMGR_MPUWARMMSK_WDS register field value. */
#define ALT_RSTMGR_MPUWARMMSK_WDS_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_MPUWARMMSK_WDS register field value. */
#define ALT_RSTMGR_MPUWARMMSK_WDS_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_MPUWARMMSK_WDS register field. */
#define ALT_RSTMGR_MPUWARMMSK_WDS_RESET      0x1
/* Extracts the ALT_RSTMGR_MPUWARMMSK_WDS field value from a register. */
#define ALT_RSTMGR_MPUWARMMSK_WDS_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_MPUWARMMSK_WDS register field value suitable for setting the register. */
#define ALT_RSTMGR_MPUWARMMSK_WDS_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_MPUWARMMSK.
 */
struct ALT_RSTMGR_MPUWARMMSK_s
{
    uint32_t  wds :  1;  /* Watchdogs */
    uint32_t      : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_MPUWARMMSK. */
typedef volatile struct ALT_RSTMGR_MPUWARMMSK_s  ALT_RSTMGR_MPUWARMMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_MPUWARMMSK register. */
#define ALT_RSTMGR_MPUWARMMSK_RESET       0x0000001f
/* The byte offset of the ALT_RSTMGR_MPUWARMMSK register from the beginning of the component. */
#define ALT_RSTMGR_MPUWARMMSK_OFST        0x40

/*
 * Register : Peripheral 0 Warm Mask Register - per0warmmask
 * 
 * The PER0WARMMASK register is used by software to mask the assertion of
 * Peripheral and Fast Peripheral reset signals for hardware sequenced warm resets.
 * There is a writeable bit for each module reset signal that is asserted by
 * default on a hardware sequenced warm reset. If the bit is 1, the module reset
 * signal is asserted by a hardware sequenced warm reset. If the bit is 0, the
 * module reset signal is not changed by a hardware sequenced warm reset. The bit
 * assignments of the *WARMMASK registers match the corresponding *MODRST
 * registers. Any module reset signals that are never asserted by a warm reset have
 * reserved bit offsets and are tied to 0 (read as 0, writes are ignored).
 * 
 * All fields are only reset by a cold reset.
 * 
 * Register Layout
 * 
 *  Bits | Access | Reset | Description           
 * :-----|:-------|:------|:-----------------------
 *  [0]  | RW     | 0x1   | EMAC0                 
 *  [1]  | RW     | 0x1   | EMAC1                 
 *  [2]  | RW     | 0x1   | EMAC2                 
 *  [3]  | RW     | 0x1   | USB0                  
 *  [4]  | RW     | 0x1   | USB1                  
 *  [5]  | RW     | 0x1   | NAND Flash            
 *  [6]  | RW     | 0x1   | QSPI Flash            
 *  [7]  | RW     | 0x1   | SD/MMC                
 *  [8]  | RW     | 0x1   | EMAC0OCP              
 *  [9]  | RW     | 0x1   | EMAC1OCP              
 *  [10] | RW     | 0x1   | EMAC2OCP              
 *  [11] | RW     | 0x1   | USB0OCP               
 *  [12] | RW     | 0x1   | USB1OCP               
 *  [13] | RW     | 0x1   | NANDOCP               
 *  [14] | RW     | 0x1   | QSPIOCP               
 *  [15] | RW     | 0x1   | SDMMCOCP              
 *  [16] | RW     | 0x1   | DMA Controller        
 *  [17] | RW     | 0x1   | SPIM0                 
 *  [18] | RW     | 0x1   | SPIM1                 
 *  [19] | RW     | 0x1   | SPIS0                 
 *  [20] | RW     | 0x1   | SPIS1                 
 *  [21] | RW     | 0x1   | DMA Controller ECC OCP
 *  [22] | RW     | 0x1   | EMAC PTP              
 *  [23] | ???    | 0x0   | *UNDEFINED*           
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
 * Masks hardware sequenced warm reset for EMAC0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_EMAC0 register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_EMAC0 register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC0_MSB        0
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_EMAC0 register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_EMAC0 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC0_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_EMAC0 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_EMAC0 register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_EMAC0 field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_PER0WARMMSK_EMAC0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : EMAC1 - emac1
 * 
 * Masks hardware sequenced warm reset for EMAC1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_EMAC1 register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC1_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_EMAC1 register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC1_MSB        1
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_EMAC1 register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_EMAC1 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC1_SET_MSK    0x00000002
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_EMAC1 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC1_CLR_MSK    0xfffffffd
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_EMAC1 register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_EMAC1 field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC1_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_RSTMGR_PER0WARMMSK_EMAC1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC1_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : EMAC2 - emac2
 * 
 * Masks hardware sequenced warm reset for EMAC2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_EMAC2 register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC2_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_EMAC2 register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC2_MSB        2
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_EMAC2 register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC2_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_EMAC2 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC2_SET_MSK    0x00000004
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_EMAC2 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC2_CLR_MSK    0xfffffffb
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_EMAC2 register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC2_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_EMAC2 field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC2_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_RSTMGR_PER0WARMMSK_EMAC2 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC2_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : USB0 - usb0
 * 
 * Masks hardware sequenced warm reset for USB0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_USB0 register field. */
#define ALT_RSTMGR_PER0WARMMSK_USB0_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_USB0 register field. */
#define ALT_RSTMGR_PER0WARMMSK_USB0_MSB        3
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_USB0 register field. */
#define ALT_RSTMGR_PER0WARMMSK_USB0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_USB0 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_USB0_SET_MSK    0x00000008
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_USB0 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_USB0_CLR_MSK    0xfffffff7
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_USB0 register field. */
#define ALT_RSTMGR_PER0WARMMSK_USB0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_USB0 field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_USB0_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_RSTMGR_PER0WARMMSK_USB0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_USB0_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : USB1 - usb1
 * 
 * Masks hardware sequenced warm reset for USB1USB1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_USB1 register field. */
#define ALT_RSTMGR_PER0WARMMSK_USB1_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_USB1 register field. */
#define ALT_RSTMGR_PER0WARMMSK_USB1_MSB        4
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_USB1 register field. */
#define ALT_RSTMGR_PER0WARMMSK_USB1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_USB1 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_USB1_SET_MSK    0x00000010
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_USB1 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_USB1_CLR_MSK    0xffffffef
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_USB1 register field. */
#define ALT_RSTMGR_PER0WARMMSK_USB1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_USB1 field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_USB1_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_RSTMGR_PER0WARMMSK_USB1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_USB1_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : NAND Flash - nand
 * 
 * Masks hardware sequenced warm reset for NAND flash controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_NAND register field. */
#define ALT_RSTMGR_PER0WARMMSK_NAND_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_NAND register field. */
#define ALT_RSTMGR_PER0WARMMSK_NAND_MSB        5
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_NAND register field. */
#define ALT_RSTMGR_PER0WARMMSK_NAND_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_NAND register field value. */
#define ALT_RSTMGR_PER0WARMMSK_NAND_SET_MSK    0x00000020
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_NAND register field value. */
#define ALT_RSTMGR_PER0WARMMSK_NAND_CLR_MSK    0xffffffdf
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_NAND register field. */
#define ALT_RSTMGR_PER0WARMMSK_NAND_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_NAND field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_NAND_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_RSTMGR_PER0WARMMSK_NAND register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_NAND_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : QSPI Flash - qspi
 * 
 * Masks hardware sequenced warm reset for QSPI flash controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_QSPI register field. */
#define ALT_RSTMGR_PER0WARMMSK_QSPI_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_QSPI register field. */
#define ALT_RSTMGR_PER0WARMMSK_QSPI_MSB        6
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_QSPI register field. */
#define ALT_RSTMGR_PER0WARMMSK_QSPI_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_QSPI register field value. */
#define ALT_RSTMGR_PER0WARMMSK_QSPI_SET_MSK    0x00000040
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_QSPI register field value. */
#define ALT_RSTMGR_PER0WARMMSK_QSPI_CLR_MSK    0xffffffbf
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_QSPI register field. */
#define ALT_RSTMGR_PER0WARMMSK_QSPI_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_QSPI field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_QSPI_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_RSTMGR_PER0WARMMSK_QSPI register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_QSPI_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : SD/MMC - sdmmc
 * 
 * Masks hardware sequenced warm reset for SD/MMC controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_SDMMC register field. */
#define ALT_RSTMGR_PER0WARMMSK_SDMMC_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_SDMMC register field. */
#define ALT_RSTMGR_PER0WARMMSK_SDMMC_MSB        7
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_SDMMC register field. */
#define ALT_RSTMGR_PER0WARMMSK_SDMMC_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_SDMMC register field value. */
#define ALT_RSTMGR_PER0WARMMSK_SDMMC_SET_MSK    0x00000080
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_SDMMC register field value. */
#define ALT_RSTMGR_PER0WARMMSK_SDMMC_CLR_MSK    0xffffff7f
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_SDMMC register field. */
#define ALT_RSTMGR_PER0WARMMSK_SDMMC_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_SDMMC field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_SDMMC_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_RSTMGR_PER0WARMMSK_SDMMC register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_SDMMC_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : EMAC0OCP - emac0ocp
 * 
 * Masks hardware sequenced warm reset for EMAC0 ECC OCP DIagnostics modules.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_EMAC0OCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC0OCP_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_EMAC0OCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC0OCP_MSB        8
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_EMAC0OCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC0OCP_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_EMAC0OCP register field value. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC0OCP_SET_MSK    0x00000100
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_EMAC0OCP register field value. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC0OCP_CLR_MSK    0xfffffeff
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_EMAC0OCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC0OCP_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_EMAC0OCP field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC0OCP_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_RSTMGR_PER0WARMMSK_EMAC0OCP register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC0OCP_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : EMAC1OCP - emac1ocp
 * 
 * Masks hardware sequenced warm reset for EMAC1 ECC OCP DIagnostics modules.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_EMAC1OCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC1OCP_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_EMAC1OCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC1OCP_MSB        9
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_EMAC1OCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC1OCP_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_EMAC1OCP register field value. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC1OCP_SET_MSK    0x00000200
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_EMAC1OCP register field value. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC1OCP_CLR_MSK    0xfffffdff
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_EMAC1OCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC1OCP_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_EMAC1OCP field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC1OCP_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_RSTMGR_PER0WARMMSK_EMAC1OCP register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC1OCP_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : EMAC2OCP - emac2ocp
 * 
 * Masks hardware sequenced warm reset for EMAC2 ECC OCP DIagnostics modules.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_EMAC2OCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC2OCP_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_EMAC2OCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC2OCP_MSB        10
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_EMAC2OCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC2OCP_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_EMAC2OCP register field value. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC2OCP_SET_MSK    0x00000400
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_EMAC2OCP register field value. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC2OCP_CLR_MSK    0xfffffbff
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_EMAC2OCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC2OCP_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_EMAC2OCP field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC2OCP_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_RSTMGR_PER0WARMMSK_EMAC2OCP register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_EMAC2OCP_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : USB0OCP - usb0ocp
 * 
 * Masks hardware sequenced warm reset for USB0 ECC OCP DIagnostics module.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_USB0OCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_USB0OCP_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_USB0OCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_USB0OCP_MSB        11
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_USB0OCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_USB0OCP_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_USB0OCP register field value. */
#define ALT_RSTMGR_PER0WARMMSK_USB0OCP_SET_MSK    0x00000800
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_USB0OCP register field value. */
#define ALT_RSTMGR_PER0WARMMSK_USB0OCP_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_USB0OCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_USB0OCP_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_USB0OCP field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_USB0OCP_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_RSTMGR_PER0WARMMSK_USB0OCP register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_USB0OCP_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : USB1OCP - usb1ocp
 * 
 * Masks hardware sequenced warm reset for USB1 ECC OCP DIagnostics module.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_USB1OCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_USB1OCP_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_USB1OCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_USB1OCP_MSB        12
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_USB1OCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_USB1OCP_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_USB1OCP register field value. */
#define ALT_RSTMGR_PER0WARMMSK_USB1OCP_SET_MSK    0x00001000
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_USB1OCP register field value. */
#define ALT_RSTMGR_PER0WARMMSK_USB1OCP_CLR_MSK    0xffffefff
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_USB1OCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_USB1OCP_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_USB1OCP field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_USB1OCP_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_RSTMGR_PER0WARMMSK_USB1OCP register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_USB1OCP_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : NANDOCP - nandocp
 * 
 * Masks hardware sequenced warm reset for NAND ECC OCP DIagnostics modules.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_NANDOCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_NANDOCP_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_NANDOCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_NANDOCP_MSB        13
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_NANDOCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_NANDOCP_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_NANDOCP register field value. */
#define ALT_RSTMGR_PER0WARMMSK_NANDOCP_SET_MSK    0x00002000
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_NANDOCP register field value. */
#define ALT_RSTMGR_PER0WARMMSK_NANDOCP_CLR_MSK    0xffffdfff
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_NANDOCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_NANDOCP_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_NANDOCP field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_NANDOCP_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_RSTMGR_PER0WARMMSK_NANDOCP register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_NANDOCP_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : QSPIOCP - qspiocp
 * 
 * Masks hardware sequenced warm reset for QSPI ECC OCP DIagnostics module.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_QSPIOCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_QSPIOCP_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_QSPIOCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_QSPIOCP_MSB        14
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_QSPIOCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_QSPIOCP_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_QSPIOCP register field value. */
#define ALT_RSTMGR_PER0WARMMSK_QSPIOCP_SET_MSK    0x00004000
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_QSPIOCP register field value. */
#define ALT_RSTMGR_PER0WARMMSK_QSPIOCP_CLR_MSK    0xffffbfff
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_QSPIOCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_QSPIOCP_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_QSPIOCP field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_QSPIOCP_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_RSTMGR_PER0WARMMSK_QSPIOCP register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_QSPIOCP_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : SDMMCOCP - sdmmcocp
 * 
 * Masks hardware sequenced warm reset for SDMMC ECC OCP DIagnostics module.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_SDMMCOCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_SDMMCOCP_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_SDMMCOCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_SDMMCOCP_MSB        15
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_SDMMCOCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_SDMMCOCP_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_SDMMCOCP register field value. */
#define ALT_RSTMGR_PER0WARMMSK_SDMMCOCP_SET_MSK    0x00008000
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_SDMMCOCP register field value. */
#define ALT_RSTMGR_PER0WARMMSK_SDMMCOCP_CLR_MSK    0xffff7fff
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_SDMMCOCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_SDMMCOCP_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_SDMMCOCP field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_SDMMCOCP_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_RSTMGR_PER0WARMMSK_SDMMCOCP register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_SDMMCOCP_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : DMA Controller - dma
 * 
 * Masks hardware sequenced warm reset for DMA controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_DMA register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMA_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_DMA register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMA_MSB        16
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_DMA register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMA_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_DMA register field value. */
#define ALT_RSTMGR_PER0WARMMSK_DMA_SET_MSK    0x00010000
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_DMA register field value. */
#define ALT_RSTMGR_PER0WARMMSK_DMA_CLR_MSK    0xfffeffff
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_DMA register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMA_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_DMA field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_DMA_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_RSTMGR_PER0WARMMSK_DMA register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_DMA_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : SPIM0 - spim0
 * 
 * Masks hardware sequenced warm reset for SPIM0 controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_SPIM0 register field. */
#define ALT_RSTMGR_PER0WARMMSK_SPIM0_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_SPIM0 register field. */
#define ALT_RSTMGR_PER0WARMMSK_SPIM0_MSB        17
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_SPIM0 register field. */
#define ALT_RSTMGR_PER0WARMMSK_SPIM0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_SPIM0 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_SPIM0_SET_MSK    0x00020000
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_SPIM0 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_SPIM0_CLR_MSK    0xfffdffff
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_SPIM0 register field. */
#define ALT_RSTMGR_PER0WARMMSK_SPIM0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_SPIM0 field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_SPIM0_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_RSTMGR_PER0WARMMSK_SPIM0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_SPIM0_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : SPIM1 - spim1
 * 
 * Masks hardware sequenced warm reset for SPIM1 controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_SPIM1 register field. */
#define ALT_RSTMGR_PER0WARMMSK_SPIM1_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_SPIM1 register field. */
#define ALT_RSTMGR_PER0WARMMSK_SPIM1_MSB        18
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_SPIM1 register field. */
#define ALT_RSTMGR_PER0WARMMSK_SPIM1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_SPIM1 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_SPIM1_SET_MSK    0x00040000
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_SPIM1 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_SPIM1_CLR_MSK    0xfffbffff
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_SPIM1 register field. */
#define ALT_RSTMGR_PER0WARMMSK_SPIM1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_SPIM1 field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_SPIM1_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_RSTMGR_PER0WARMMSK_SPIM1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_SPIM1_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : SPIS0 - spis0
 * 
 * Masks hardware sequenced warm reset for SPIS0 controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_SPIS0 register field. */
#define ALT_RSTMGR_PER0WARMMSK_SPIS0_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_SPIS0 register field. */
#define ALT_RSTMGR_PER0WARMMSK_SPIS0_MSB        19
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_SPIS0 register field. */
#define ALT_RSTMGR_PER0WARMMSK_SPIS0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_SPIS0 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_SPIS0_SET_MSK    0x00080000
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_SPIS0 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_SPIS0_CLR_MSK    0xfff7ffff
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_SPIS0 register field. */
#define ALT_RSTMGR_PER0WARMMSK_SPIS0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_SPIS0 field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_SPIS0_GET(value) (((value) & 0x00080000) >> 19)
/* Produces a ALT_RSTMGR_PER0WARMMSK_SPIS0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_SPIS0_SET(value) (((value) << 19) & 0x00080000)

/*
 * Field : SPIS1 - spis1
 * 
 * Masks hardware sequenced warm reset for SPIS1 controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_SPIS1 register field. */
#define ALT_RSTMGR_PER0WARMMSK_SPIS1_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_SPIS1 register field. */
#define ALT_RSTMGR_PER0WARMMSK_SPIS1_MSB        20
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_SPIS1 register field. */
#define ALT_RSTMGR_PER0WARMMSK_SPIS1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_SPIS1 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_SPIS1_SET_MSK    0x00100000
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_SPIS1 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_SPIS1_CLR_MSK    0xffefffff
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_SPIS1 register field. */
#define ALT_RSTMGR_PER0WARMMSK_SPIS1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_SPIS1 field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_SPIS1_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_RSTMGR_PER0WARMMSK_SPIS1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_SPIS1_SET(value) (((value) << 20) & 0x00100000)

/*
 * Field : DMA Controller ECC OCP - dmaocp
 * 
 * Masks hardware sequenced warm reset for DMA Controller ECC OCP DIagnostics
 * module.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_DMAOCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAOCP_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_DMAOCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAOCP_MSB        21
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_DMAOCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAOCP_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_DMAOCP register field value. */
#define ALT_RSTMGR_PER0WARMMSK_DMAOCP_SET_MSK    0x00200000
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_DMAOCP register field value. */
#define ALT_RSTMGR_PER0WARMMSK_DMAOCP_CLR_MSK    0xffdfffff
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_DMAOCP register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAOCP_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_DMAOCP field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_DMAOCP_GET(value) (((value) & 0x00200000) >> 21)
/* Produces a ALT_RSTMGR_PER0WARMMSK_DMAOCP register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_DMAOCP_SET(value) (((value) << 21) & 0x00200000)

/*
 * Field : EMAC PTP - emacptp
 * 
 * Masks hardware sequenced warm reset for EMAC PTP
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_EMACPTP register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMACPTP_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_EMACPTP register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMACPTP_MSB        22
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_EMACPTP register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMACPTP_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_EMACPTP register field value. */
#define ALT_RSTMGR_PER0WARMMSK_EMACPTP_SET_MSK    0x00400000
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_EMACPTP register field value. */
#define ALT_RSTMGR_PER0WARMMSK_EMACPTP_CLR_MSK    0xffbfffff
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_EMACPTP register field. */
#define ALT_RSTMGR_PER0WARMMSK_EMACPTP_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_EMACPTP field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_EMACPTP_GET(value) (((value) & 0x00400000) >> 22)
/* Produces a ALT_RSTMGR_PER0WARMMSK_EMACPTP register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_EMACPTP_SET(value) (((value) << 22) & 0x00400000)

/*
 * Field : FPGA DMA0 - dmaif0
 * 
 * Masks hardware sequenced warm reset for DMA channel 0 interface adapter between
 * FPGA Fabric and HPS DMA Controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_DMAIF0 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF0_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_DMAIF0 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF0_MSB        24
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_DMAIF0 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_DMAIF0 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF0_SET_MSK    0x01000000
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_DMAIF0 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF0_CLR_MSK    0xfeffffff
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_DMAIF0 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_DMAIF0 field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF0_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_RSTMGR_PER0WARMMSK_DMAIF0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF0_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : FPGA DMA1 - dmaif1
 * 
 * Masks hardware sequenced warm reset for DMA channel 1 interface adapter between
 * FPGA Fabric and HPS DMA Controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_DMAIF1 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF1_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_DMAIF1 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF1_MSB        25
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_DMAIF1 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_DMAIF1 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF1_SET_MSK    0x02000000
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_DMAIF1 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF1_CLR_MSK    0xfdffffff
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_DMAIF1 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_DMAIF1 field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF1_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_RSTMGR_PER0WARMMSK_DMAIF1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF1_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : FPGA DMA2 - dmaif2
 * 
 * Masks hardware sequenced warm reset for DMA channel 2 interface adapter between
 * FPGA Fabric and HPS DMA Controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_DMAIF2 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF2_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_DMAIF2 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF2_MSB        26
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_DMAIF2 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF2_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_DMAIF2 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF2_SET_MSK    0x04000000
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_DMAIF2 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF2_CLR_MSK    0xfbffffff
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_DMAIF2 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF2_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_DMAIF2 field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF2_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_RSTMGR_PER0WARMMSK_DMAIF2 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF2_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : FPGA DMA3 - dmaif3
 * 
 * Masks hardware sequenced warm reset for DMA channel 3 interface adapter between
 * FPGA Fabric and HPS DMA Controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_DMAIF3 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF3_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_DMAIF3 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF3_MSB        27
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_DMAIF3 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF3_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_DMAIF3 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF3_SET_MSK    0x08000000
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_DMAIF3 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF3_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_DMAIF3 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF3_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_DMAIF3 field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF3_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_RSTMGR_PER0WARMMSK_DMAIF3 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF3_SET(value) (((value) << 27) & 0x08000000)

/*
 * Field : FPGA DMA4 - dmaif4
 * 
 * Masks hardware sequenced warm reset for DMA channel 4 interface adapter between
 * FPGA Fabric and HPS DMA Controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_DMAIF4 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF4_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_DMAIF4 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF4_MSB        28
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_DMAIF4 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF4_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_DMAIF4 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF4_SET_MSK    0x10000000
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_DMAIF4 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF4_CLR_MSK    0xefffffff
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_DMAIF4 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF4_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_DMAIF4 field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF4_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_RSTMGR_PER0WARMMSK_DMAIF4 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF4_SET(value) (((value) << 28) & 0x10000000)

/*
 * Field : FPGA DMA5 - dmaif5
 * 
 * Masks hardware sequenced warm reset for DMA channel 5 interface adapter between
 * FPGA Fabric and HPS DMA Controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_DMAIF5 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF5_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_DMAIF5 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF5_MSB        29
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_DMAIF5 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF5_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_DMAIF5 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF5_SET_MSK    0x20000000
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_DMAIF5 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF5_CLR_MSK    0xdfffffff
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_DMAIF5 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF5_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_DMAIF5 field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF5_GET(value) (((value) & 0x20000000) >> 29)
/* Produces a ALT_RSTMGR_PER0WARMMSK_DMAIF5 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF5_SET(value) (((value) << 29) & 0x20000000)

/*
 * Field : FPGA DMA6 - dmaif6
 * 
 * Masks hardware sequenced warm reset for DMA channel 6 interface adapter between
 * FPGA Fabric and HPS DMA Controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_DMAIF6 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF6_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_DMAIF6 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF6_MSB        30
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_DMAIF6 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF6_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_DMAIF6 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF6_SET_MSK    0x40000000
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_DMAIF6 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF6_CLR_MSK    0xbfffffff
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_DMAIF6 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF6_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_DMAIF6 field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF6_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_RSTMGR_PER0WARMMSK_DMAIF6 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF6_SET(value) (((value) << 30) & 0x40000000)

/*
 * Field : FPGA DMA7 - dmaif7
 * 
 * Masks hardware sequenced warm reset for DMA channel 7 interface adapter between
 * FPGA Fabric and HPS DMA Controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER0WARMMSK_DMAIF7 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF7_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER0WARMMSK_DMAIF7 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF7_MSB        31
/* The width in bits of the ALT_RSTMGR_PER0WARMMSK_DMAIF7 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF7_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER0WARMMSK_DMAIF7 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF7_SET_MSK    0x80000000
/* The mask used to clear the ALT_RSTMGR_PER0WARMMSK_DMAIF7 register field value. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF7_CLR_MSK    0x7fffffff
/* The reset value of the ALT_RSTMGR_PER0WARMMSK_DMAIF7 register field. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF7_RESET      0x1
/* Extracts the ALT_RSTMGR_PER0WARMMSK_DMAIF7 field value from a register. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF7_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_RSTMGR_PER0WARMMSK_DMAIF7 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER0WARMMSK_DMAIF7_SET(value) (((value) << 31) & 0x80000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_PER0WARMMSK.
 */
struct ALT_RSTMGR_PER0WARMMSK_s
{
    uint32_t  emac0    :  1;  /* EMAC0 */
    uint32_t  emac1    :  1;  /* EMAC1 */
    uint32_t  emac2    :  1;  /* EMAC2 */
    uint32_t  usb0     :  1;  /* USB0 */
    uint32_t  usb1     :  1;  /* USB1 */
    uint32_t  nand     :  1;  /* NAND Flash */
    uint32_t  qspi     :  1;  /* QSPI Flash */
    uint32_t  sdmmc    :  1;  /* SD/MMC */
    uint32_t  emac0ocp :  1;  /* EMAC0OCP */
    uint32_t  emac1ocp :  1;  /* EMAC1OCP */
    uint32_t  emac2ocp :  1;  /* EMAC2OCP */
    uint32_t  usb0ocp  :  1;  /* USB0OCP */
    uint32_t  usb1ocp  :  1;  /* USB1OCP */
    uint32_t  nandocp  :  1;  /* NANDOCP */
    uint32_t  qspiocp  :  1;  /* QSPIOCP */
    uint32_t  sdmmcocp :  1;  /* SDMMCOCP */
    uint32_t  dma      :  1;  /* DMA Controller */
    uint32_t  spim0    :  1;  /* SPIM0 */
    uint32_t  spim1    :  1;  /* SPIM1 */
    uint32_t  spis0    :  1;  /* SPIS0 */
    uint32_t  spis1    :  1;  /* SPIS1 */
    uint32_t  dmaocp   :  1;  /* DMA Controller ECC OCP */
    uint32_t  emacptp  :  1;  /* EMAC PTP */
    uint32_t           :  1;  /* *UNDEFINED* */
    uint32_t  dmaif0   :  1;  /* FPGA DMA0 */
    uint32_t  dmaif1   :  1;  /* FPGA DMA1 */
    uint32_t  dmaif2   :  1;  /* FPGA DMA2 */
    uint32_t  dmaif3   :  1;  /* FPGA DMA3 */
    uint32_t  dmaif4   :  1;  /* FPGA DMA4 */
    uint32_t  dmaif5   :  1;  /* FPGA DMA5 */
    uint32_t  dmaif6   :  1;  /* FPGA DMA6 */
    uint32_t  dmaif7   :  1;  /* FPGA DMA7 */
};

/* The typedef declaration for register ALT_RSTMGR_PER0WARMMSK. */
typedef volatile struct ALT_RSTMGR_PER0WARMMSK_s  ALT_RSTMGR_PER0WARMMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_PER0WARMMSK register. */
#define ALT_RSTMGR_PER0WARMMSK_RESET       0xff7fffff
/* The byte offset of the ALT_RSTMGR_PER0WARMMSK register from the beginning of the component. */
#define ALT_RSTMGR_PER0WARMMSK_OFST        0x44

/*
 * Register : Peripheral 1 Warm Mask Register - per1warmmask
 * 
 * The PER1WARMMASK register is used by software to mask the assertion of module
 * reset signals for hardware sequenced warm resets. There is a writeable bit for
 * each module reset signal that is asserted by default on a hardware sequenced
 * warm reset. If the bit is 1, the module reset signal is asserted by a hardware
 * sequenced warm reset. If the bit is 0, the module reset signal is not changed by
 * a hardware sequenced warm reset. The bit assignments of the *WARMMASK registers
 * match the corresponding *MODRST registers. Any module reset signals that are
 * never asserted by a warm reset have reserved bit offsets and are tied to 0 (read
 * as 0, writes are ignored).
 * 
 * All fields are only reset by a cold reset.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description
 * :--------|:-------|:------|:------------
 *  [0]     | RW     | 0x1   | Watch Dog0 
 *  [1]     | RW     | 0x1   | Watch Dog1 
 *  [2]     | RW     | 0x1   | l4systimer0
 *  [3]     | RW     | 0x1   | l4systimer1
 *  [4]     | RW     | 0x1   | SP Timer 0 
 *  [5]     | RW     | 0x1   | SP Timer 1 
 *  [7:6]   | ???    | 0x0   | *UNDEFINED*
 *  [8]     | RW     | 0x1   | I2C0       
 *  [9]     | RW     | 0x1   | I2C1       
 *  [10]    | RW     | 0x1   | I2C2       
 *  [11]    | RW     | 0x1   | I2C3       
 *  [12]    | RW     | 0x1   | I2C4       
 *  [15:13] | ???    | 0x0   | *UNDEFINED*
 *  [16]    | RW     | 0x1   | UART0      
 *  [17]    | RW     | 0x1   | UART1      
 *  [23:18] | ???    | 0x0   | *UNDEFINED*
 *  [24]    | RW     | 0x1   | GPIO0      
 *  [25]    | RW     | 0x1   | GPIO1      
 *  [26]    | RW     | 0x1   | GPIO2      
 *  [31:27] | ???    | 0x0   | *UNDEFINED*
 * 
 */
/*
 * Field : Watch Dog0 - watchdog0
 * 
 * Masks hardware sequenced warm reset for Watchdog 0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1WARMMSK_WD0 register field. */
#define ALT_RSTMGR_PER1WARMMSK_WD0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1WARMMSK_WD0 register field. */
#define ALT_RSTMGR_PER1WARMMSK_WD0_MSB        0
/* The width in bits of the ALT_RSTMGR_PER1WARMMSK_WD0 register field. */
#define ALT_RSTMGR_PER1WARMMSK_WD0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1WARMMSK_WD0 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_WD0_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_PER1WARMMSK_WD0 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_WD0_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_PER1WARMMSK_WD0 register field. */
#define ALT_RSTMGR_PER1WARMMSK_WD0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1WARMMSK_WD0 field value from a register. */
#define ALT_RSTMGR_PER1WARMMSK_WD0_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_PER1WARMMSK_WD0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1WARMMSK_WD0_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Watch Dog1 - watchdog1
 * 
 * Masks hardware sequenced warm reset for Watchdog 1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1WARMMSK_WD1 register field. */
#define ALT_RSTMGR_PER1WARMMSK_WD1_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1WARMMSK_WD1 register field. */
#define ALT_RSTMGR_PER1WARMMSK_WD1_MSB        1
/* The width in bits of the ALT_RSTMGR_PER1WARMMSK_WD1 register field. */
#define ALT_RSTMGR_PER1WARMMSK_WD1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1WARMMSK_WD1 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_WD1_SET_MSK    0x00000002
/* The mask used to clear the ALT_RSTMGR_PER1WARMMSK_WD1 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_WD1_CLR_MSK    0xfffffffd
/* The reset value of the ALT_RSTMGR_PER1WARMMSK_WD1 register field. */
#define ALT_RSTMGR_PER1WARMMSK_WD1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1WARMMSK_WD1 field value from a register. */
#define ALT_RSTMGR_PER1WARMMSK_WD1_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_RSTMGR_PER1WARMMSK_WD1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1WARMMSK_WD1_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : l4systimer0 - l4systimer0
 * 
 * Masks hardware sequenced warm reset for l4sys_timer0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1WARMMSK_L4SYSTMR0 register field. */
#define ALT_RSTMGR_PER1WARMMSK_L4SYSTMR0_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1WARMMSK_L4SYSTMR0 register field. */
#define ALT_RSTMGR_PER1WARMMSK_L4SYSTMR0_MSB        2
/* The width in bits of the ALT_RSTMGR_PER1WARMMSK_L4SYSTMR0 register field. */
#define ALT_RSTMGR_PER1WARMMSK_L4SYSTMR0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1WARMMSK_L4SYSTMR0 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_L4SYSTMR0_SET_MSK    0x00000004
/* The mask used to clear the ALT_RSTMGR_PER1WARMMSK_L4SYSTMR0 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_L4SYSTMR0_CLR_MSK    0xfffffffb
/* The reset value of the ALT_RSTMGR_PER1WARMMSK_L4SYSTMR0 register field. */
#define ALT_RSTMGR_PER1WARMMSK_L4SYSTMR0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1WARMMSK_L4SYSTMR0 field value from a register. */
#define ALT_RSTMGR_PER1WARMMSK_L4SYSTMR0_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_RSTMGR_PER1WARMMSK_L4SYSTMR0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1WARMMSK_L4SYSTMR0_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : l4systimer1 - l4systimer1
 * 
 * Masks hardware sequenced warm reset for l4sys_timer1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1WARMMSK_L4SYSTMR1 register field. */
#define ALT_RSTMGR_PER1WARMMSK_L4SYSTMR1_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1WARMMSK_L4SYSTMR1 register field. */
#define ALT_RSTMGR_PER1WARMMSK_L4SYSTMR1_MSB        3
/* The width in bits of the ALT_RSTMGR_PER1WARMMSK_L4SYSTMR1 register field. */
#define ALT_RSTMGR_PER1WARMMSK_L4SYSTMR1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1WARMMSK_L4SYSTMR1 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_L4SYSTMR1_SET_MSK    0x00000008
/* The mask used to clear the ALT_RSTMGR_PER1WARMMSK_L4SYSTMR1 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_L4SYSTMR1_CLR_MSK    0xfffffff7
/* The reset value of the ALT_RSTMGR_PER1WARMMSK_L4SYSTMR1 register field. */
#define ALT_RSTMGR_PER1WARMMSK_L4SYSTMR1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1WARMMSK_L4SYSTMR1 field value from a register. */
#define ALT_RSTMGR_PER1WARMMSK_L4SYSTMR1_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_RSTMGR_PER1WARMMSK_L4SYSTMR1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1WARMMSK_L4SYSTMR1_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : SP Timer 0 - sptimer0
 * 
 * Masks hardware sequenced warm reset for SP timer 0 connected to L4
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1WARMMSK_SPTMR0 register field. */
#define ALT_RSTMGR_PER1WARMMSK_SPTMR0_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1WARMMSK_SPTMR0 register field. */
#define ALT_RSTMGR_PER1WARMMSK_SPTMR0_MSB        4
/* The width in bits of the ALT_RSTMGR_PER1WARMMSK_SPTMR0 register field. */
#define ALT_RSTMGR_PER1WARMMSK_SPTMR0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1WARMMSK_SPTMR0 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_SPTMR0_SET_MSK    0x00000010
/* The mask used to clear the ALT_RSTMGR_PER1WARMMSK_SPTMR0 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_SPTMR0_CLR_MSK    0xffffffef
/* The reset value of the ALT_RSTMGR_PER1WARMMSK_SPTMR0 register field. */
#define ALT_RSTMGR_PER1WARMMSK_SPTMR0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1WARMMSK_SPTMR0 field value from a register. */
#define ALT_RSTMGR_PER1WARMMSK_SPTMR0_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_RSTMGR_PER1WARMMSK_SPTMR0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1WARMMSK_SPTMR0_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : SP Timer 1 - sptimer1
 * 
 * Masks hardware sequenced warm reset for SP timer 1 connected to L4
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1WARMMSK_SPTMR1 register field. */
#define ALT_RSTMGR_PER1WARMMSK_SPTMR1_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1WARMMSK_SPTMR1 register field. */
#define ALT_RSTMGR_PER1WARMMSK_SPTMR1_MSB        5
/* The width in bits of the ALT_RSTMGR_PER1WARMMSK_SPTMR1 register field. */
#define ALT_RSTMGR_PER1WARMMSK_SPTMR1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1WARMMSK_SPTMR1 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_SPTMR1_SET_MSK    0x00000020
/* The mask used to clear the ALT_RSTMGR_PER1WARMMSK_SPTMR1 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_SPTMR1_CLR_MSK    0xffffffdf
/* The reset value of the ALT_RSTMGR_PER1WARMMSK_SPTMR1 register field. */
#define ALT_RSTMGR_PER1WARMMSK_SPTMR1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1WARMMSK_SPTMR1 field value from a register. */
#define ALT_RSTMGR_PER1WARMMSK_SPTMR1_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_RSTMGR_PER1WARMMSK_SPTMR1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1WARMMSK_SPTMR1_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : I2C0 - i2c0
 * 
 * Masks hardware sequenced warm reset for 2C0 controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1WARMMSK_I2C0 register field. */
#define ALT_RSTMGR_PER1WARMMSK_I2C0_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1WARMMSK_I2C0 register field. */
#define ALT_RSTMGR_PER1WARMMSK_I2C0_MSB        8
/* The width in bits of the ALT_RSTMGR_PER1WARMMSK_I2C0 register field. */
#define ALT_RSTMGR_PER1WARMMSK_I2C0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1WARMMSK_I2C0 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_I2C0_SET_MSK    0x00000100
/* The mask used to clear the ALT_RSTMGR_PER1WARMMSK_I2C0 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_I2C0_CLR_MSK    0xfffffeff
/* The reset value of the ALT_RSTMGR_PER1WARMMSK_I2C0 register field. */
#define ALT_RSTMGR_PER1WARMMSK_I2C0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1WARMMSK_I2C0 field value from a register. */
#define ALT_RSTMGR_PER1WARMMSK_I2C0_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_RSTMGR_PER1WARMMSK_I2C0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1WARMMSK_I2C0_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : I2C1 - i2c1
 * 
 * Masks hardware sequenced warm reset for 2C1 controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1WARMMSK_I2C1 register field. */
#define ALT_RSTMGR_PER1WARMMSK_I2C1_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1WARMMSK_I2C1 register field. */
#define ALT_RSTMGR_PER1WARMMSK_I2C1_MSB        9
/* The width in bits of the ALT_RSTMGR_PER1WARMMSK_I2C1 register field. */
#define ALT_RSTMGR_PER1WARMMSK_I2C1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1WARMMSK_I2C1 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_I2C1_SET_MSK    0x00000200
/* The mask used to clear the ALT_RSTMGR_PER1WARMMSK_I2C1 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_I2C1_CLR_MSK    0xfffffdff
/* The reset value of the ALT_RSTMGR_PER1WARMMSK_I2C1 register field. */
#define ALT_RSTMGR_PER1WARMMSK_I2C1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1WARMMSK_I2C1 field value from a register. */
#define ALT_RSTMGR_PER1WARMMSK_I2C1_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_RSTMGR_PER1WARMMSK_I2C1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1WARMMSK_I2C1_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : I2C2 - i2c2
 * 
 * Masks hardware sequenced warm reset for I2C2 controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1WARMMSK_I2C2 register field. */
#define ALT_RSTMGR_PER1WARMMSK_I2C2_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1WARMMSK_I2C2 register field. */
#define ALT_RSTMGR_PER1WARMMSK_I2C2_MSB        10
/* The width in bits of the ALT_RSTMGR_PER1WARMMSK_I2C2 register field. */
#define ALT_RSTMGR_PER1WARMMSK_I2C2_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1WARMMSK_I2C2 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_I2C2_SET_MSK    0x00000400
/* The mask used to clear the ALT_RSTMGR_PER1WARMMSK_I2C2 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_I2C2_CLR_MSK    0xfffffbff
/* The reset value of the ALT_RSTMGR_PER1WARMMSK_I2C2 register field. */
#define ALT_RSTMGR_PER1WARMMSK_I2C2_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1WARMMSK_I2C2 field value from a register. */
#define ALT_RSTMGR_PER1WARMMSK_I2C2_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_RSTMGR_PER1WARMMSK_I2C2 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1WARMMSK_I2C2_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : I2C3 - i2c3
 * 
 * Masks hardware sequenced warm reset for I2C3 controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1WARMMSK_I2C3 register field. */
#define ALT_RSTMGR_PER1WARMMSK_I2C3_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1WARMMSK_I2C3 register field. */
#define ALT_RSTMGR_PER1WARMMSK_I2C3_MSB        11
/* The width in bits of the ALT_RSTMGR_PER1WARMMSK_I2C3 register field. */
#define ALT_RSTMGR_PER1WARMMSK_I2C3_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1WARMMSK_I2C3 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_I2C3_SET_MSK    0x00000800
/* The mask used to clear the ALT_RSTMGR_PER1WARMMSK_I2C3 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_I2C3_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_RSTMGR_PER1WARMMSK_I2C3 register field. */
#define ALT_RSTMGR_PER1WARMMSK_I2C3_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1WARMMSK_I2C3 field value from a register. */
#define ALT_RSTMGR_PER1WARMMSK_I2C3_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_RSTMGR_PER1WARMMSK_I2C3 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1WARMMSK_I2C3_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : I2C4 - i2c4
 * 
 * Masks hardware sequenced warm reset for I2C4 controller
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1WARMMSK_I2C4 register field. */
#define ALT_RSTMGR_PER1WARMMSK_I2C4_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1WARMMSK_I2C4 register field. */
#define ALT_RSTMGR_PER1WARMMSK_I2C4_MSB        12
/* The width in bits of the ALT_RSTMGR_PER1WARMMSK_I2C4 register field. */
#define ALT_RSTMGR_PER1WARMMSK_I2C4_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1WARMMSK_I2C4 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_I2C4_SET_MSK    0x00001000
/* The mask used to clear the ALT_RSTMGR_PER1WARMMSK_I2C4 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_I2C4_CLR_MSK    0xffffefff
/* The reset value of the ALT_RSTMGR_PER1WARMMSK_I2C4 register field. */
#define ALT_RSTMGR_PER1WARMMSK_I2C4_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1WARMMSK_I2C4 field value from a register. */
#define ALT_RSTMGR_PER1WARMMSK_I2C4_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_RSTMGR_PER1WARMMSK_I2C4 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1WARMMSK_I2C4_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : UART0 - uart0
 * 
 * Masks hardware sequenced warm reset forUART0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1WARMMSK_UART0 register field. */
#define ALT_RSTMGR_PER1WARMMSK_UART0_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1WARMMSK_UART0 register field. */
#define ALT_RSTMGR_PER1WARMMSK_UART0_MSB        16
/* The width in bits of the ALT_RSTMGR_PER1WARMMSK_UART0 register field. */
#define ALT_RSTMGR_PER1WARMMSK_UART0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1WARMMSK_UART0 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_UART0_SET_MSK    0x00010000
/* The mask used to clear the ALT_RSTMGR_PER1WARMMSK_UART0 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_UART0_CLR_MSK    0xfffeffff
/* The reset value of the ALT_RSTMGR_PER1WARMMSK_UART0 register field. */
#define ALT_RSTMGR_PER1WARMMSK_UART0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1WARMMSK_UART0 field value from a register. */
#define ALT_RSTMGR_PER1WARMMSK_UART0_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_RSTMGR_PER1WARMMSK_UART0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1WARMMSK_UART0_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : UART1 - uart1
 * 
 * Masks hardware sequenced warm reset for UART1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1WARMMSK_UART1 register field. */
#define ALT_RSTMGR_PER1WARMMSK_UART1_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1WARMMSK_UART1 register field. */
#define ALT_RSTMGR_PER1WARMMSK_UART1_MSB        17
/* The width in bits of the ALT_RSTMGR_PER1WARMMSK_UART1 register field. */
#define ALT_RSTMGR_PER1WARMMSK_UART1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1WARMMSK_UART1 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_UART1_SET_MSK    0x00020000
/* The mask used to clear the ALT_RSTMGR_PER1WARMMSK_UART1 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_UART1_CLR_MSK    0xfffdffff
/* The reset value of the ALT_RSTMGR_PER1WARMMSK_UART1 register field. */
#define ALT_RSTMGR_PER1WARMMSK_UART1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1WARMMSK_UART1 field value from a register. */
#define ALT_RSTMGR_PER1WARMMSK_UART1_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_RSTMGR_PER1WARMMSK_UART1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1WARMMSK_UART1_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : GPIO0 - gpio0
 * 
 * Masks hardware sequenced warm reset for GPIO0
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1WARMMSK_GPIO0 register field. */
#define ALT_RSTMGR_PER1WARMMSK_GPIO0_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1WARMMSK_GPIO0 register field. */
#define ALT_RSTMGR_PER1WARMMSK_GPIO0_MSB        24
/* The width in bits of the ALT_RSTMGR_PER1WARMMSK_GPIO0 register field. */
#define ALT_RSTMGR_PER1WARMMSK_GPIO0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1WARMMSK_GPIO0 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_GPIO0_SET_MSK    0x01000000
/* The mask used to clear the ALT_RSTMGR_PER1WARMMSK_GPIO0 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_GPIO0_CLR_MSK    0xfeffffff
/* The reset value of the ALT_RSTMGR_PER1WARMMSK_GPIO0 register field. */
#define ALT_RSTMGR_PER1WARMMSK_GPIO0_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1WARMMSK_GPIO0 field value from a register. */
#define ALT_RSTMGR_PER1WARMMSK_GPIO0_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_RSTMGR_PER1WARMMSK_GPIO0 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1WARMMSK_GPIO0_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : GPIO1 - gpio1
 * 
 * Masks hardware sequenced warm reset for GPIO1
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1WARMMSK_GPIO1 register field. */
#define ALT_RSTMGR_PER1WARMMSK_GPIO1_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1WARMMSK_GPIO1 register field. */
#define ALT_RSTMGR_PER1WARMMSK_GPIO1_MSB        25
/* The width in bits of the ALT_RSTMGR_PER1WARMMSK_GPIO1 register field. */
#define ALT_RSTMGR_PER1WARMMSK_GPIO1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1WARMMSK_GPIO1 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_GPIO1_SET_MSK    0x02000000
/* The mask used to clear the ALT_RSTMGR_PER1WARMMSK_GPIO1 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_GPIO1_CLR_MSK    0xfdffffff
/* The reset value of the ALT_RSTMGR_PER1WARMMSK_GPIO1 register field. */
#define ALT_RSTMGR_PER1WARMMSK_GPIO1_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1WARMMSK_GPIO1 field value from a register. */
#define ALT_RSTMGR_PER1WARMMSK_GPIO1_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_RSTMGR_PER1WARMMSK_GPIO1 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1WARMMSK_GPIO1_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : GPIO2 - gpio2
 * 
 * Masks hardware sequenced warm reset for GPIO2
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_PER1WARMMSK_GPIO2 register field. */
#define ALT_RSTMGR_PER1WARMMSK_GPIO2_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_PER1WARMMSK_GPIO2 register field. */
#define ALT_RSTMGR_PER1WARMMSK_GPIO2_MSB        26
/* The width in bits of the ALT_RSTMGR_PER1WARMMSK_GPIO2 register field. */
#define ALT_RSTMGR_PER1WARMMSK_GPIO2_WIDTH      1
/* The mask used to set the ALT_RSTMGR_PER1WARMMSK_GPIO2 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_GPIO2_SET_MSK    0x04000000
/* The mask used to clear the ALT_RSTMGR_PER1WARMMSK_GPIO2 register field value. */
#define ALT_RSTMGR_PER1WARMMSK_GPIO2_CLR_MSK    0xfbffffff
/* The reset value of the ALT_RSTMGR_PER1WARMMSK_GPIO2 register field. */
#define ALT_RSTMGR_PER1WARMMSK_GPIO2_RESET      0x1
/* Extracts the ALT_RSTMGR_PER1WARMMSK_GPIO2 field value from a register. */
#define ALT_RSTMGR_PER1WARMMSK_GPIO2_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_RSTMGR_PER1WARMMSK_GPIO2 register field value suitable for setting the register. */
#define ALT_RSTMGR_PER1WARMMSK_GPIO2_SET(value) (((value) << 26) & 0x04000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_PER1WARMMSK.
 */
struct ALT_RSTMGR_PER1WARMMSK_s
{
    uint32_t  watchdog0   :  1;  /* Watch Dog0 */
    uint32_t  watchdog1   :  1;  /* Watch Dog1 */
    uint32_t  l4systimer0 :  1;  /* l4systimer0 */
    uint32_t  l4systimer1 :  1;  /* l4systimer1 */
    uint32_t  sptimer0    :  1;  /* SP Timer 0 */
    uint32_t  sptimer1    :  1;  /* SP Timer 1 */
    uint32_t              :  2;  /* *UNDEFINED* */
    uint32_t  i2c0        :  1;  /* I2C0 */
    uint32_t  i2c1        :  1;  /* I2C1 */
    uint32_t  i2c2        :  1;  /* I2C2 */
    uint32_t  i2c3        :  1;  /* I2C3 */
    uint32_t  i2c4        :  1;  /* I2C4 */
    uint32_t              :  3;  /* *UNDEFINED* */
    uint32_t  uart0       :  1;  /* UART0 */
    uint32_t  uart1       :  1;  /* UART1 */
    uint32_t              :  6;  /* *UNDEFINED* */
    uint32_t  gpio0       :  1;  /* GPIO0 */
    uint32_t  gpio1       :  1;  /* GPIO1 */
    uint32_t  gpio2       :  1;  /* GPIO2 */
    uint32_t              :  5;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_PER1WARMMSK. */
typedef volatile struct ALT_RSTMGR_PER1WARMMSK_s  ALT_RSTMGR_PER1WARMMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_PER1WARMMSK register. */
#define ALT_RSTMGR_PER1WARMMSK_RESET       0x07031f3f
/* The byte offset of the ALT_RSTMGR_PER1WARMMSK register from the beginning of the component. */
#define ALT_RSTMGR_PER1WARMMSK_OFST        0x48

/*
 * Register : Bridge Warm Mask Register - brgwarmmask
 * 
 * The Bridge_WARM_MASK register is used by software to mask the assertion of
 * module reset signals for hardware sequenced warm resets. There is a writeable
 * bit for each module reset signal that is asserted by default on a hardware
 * sequenced warm reset. If the bit is 1, the module reset signal is asserted by a
 * hardware sequenced warm reset. If the bit is 0, the module reset signal is not
 * changed by a hardware sequenced warm reset. The bit assignments of the *WARMMASK
 * registers match the corresponding *MODRST registers. Any module reset signals
 * that are never asserted by a warm reset have reserved bit offsets and are tied
 * to 0 (read as 0, writes are ignored).
 * 
 * All fields are only reset by a cold reset.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description      
 * :-------|:-------|:------|:------------------
 *  [0]    | RW     | 0x1   | HPS2FPGA Bridge  
 *  [1]    | RW     | 0x1   | LWHPS2FPGA Bridge
 *  [2]    | RW     | 0x1   | FPGA2HPS Bridge  
 *  [3]    | RW     | 0x1   | F2S SDRAM0 Bridge
 *  [4]    | RW     | 0x1   | F2S SDRAM1 Bridge
 *  [5]    | RW     | 0x1   | F2S SDRAM2 Bridge
 *  [6]    | RW     | 0x1   | DDR Scheduler    
 *  [31:7] | ???    | 0x0   | *UNDEFINED*      
 * 
 */
/*
 * Field : HPS2FPGA Bridge - hps2fpga
 * 
 * Masks hardware sequenced warm reset for HPS2FPGA Bridge
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_BRGWARMMSK_H2F register field. */
#define ALT_RSTMGR_BRGWARMMSK_H2F_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_BRGWARMMSK_H2F register field. */
#define ALT_RSTMGR_BRGWARMMSK_H2F_MSB        0
/* The width in bits of the ALT_RSTMGR_BRGWARMMSK_H2F register field. */
#define ALT_RSTMGR_BRGWARMMSK_H2F_WIDTH      1
/* The mask used to set the ALT_RSTMGR_BRGWARMMSK_H2F register field value. */
#define ALT_RSTMGR_BRGWARMMSK_H2F_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_BRGWARMMSK_H2F register field value. */
#define ALT_RSTMGR_BRGWARMMSK_H2F_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_BRGWARMMSK_H2F register field. */
#define ALT_RSTMGR_BRGWARMMSK_H2F_RESET      0x1
/* Extracts the ALT_RSTMGR_BRGWARMMSK_H2F field value from a register. */
#define ALT_RSTMGR_BRGWARMMSK_H2F_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_BRGWARMMSK_H2F register field value suitable for setting the register. */
#define ALT_RSTMGR_BRGWARMMSK_H2F_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : LWHPS2FPGA Bridge - lwhps2fpga
 * 
 * Masks hardware sequenced warm reset for LWHPS2FPGA Bridge
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_BRGWARMMSK_LWH2F register field. */
#define ALT_RSTMGR_BRGWARMMSK_LWH2F_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_BRGWARMMSK_LWH2F register field. */
#define ALT_RSTMGR_BRGWARMMSK_LWH2F_MSB        1
/* The width in bits of the ALT_RSTMGR_BRGWARMMSK_LWH2F register field. */
#define ALT_RSTMGR_BRGWARMMSK_LWH2F_WIDTH      1
/* The mask used to set the ALT_RSTMGR_BRGWARMMSK_LWH2F register field value. */
#define ALT_RSTMGR_BRGWARMMSK_LWH2F_SET_MSK    0x00000002
/* The mask used to clear the ALT_RSTMGR_BRGWARMMSK_LWH2F register field value. */
#define ALT_RSTMGR_BRGWARMMSK_LWH2F_CLR_MSK    0xfffffffd
/* The reset value of the ALT_RSTMGR_BRGWARMMSK_LWH2F register field. */
#define ALT_RSTMGR_BRGWARMMSK_LWH2F_RESET      0x1
/* Extracts the ALT_RSTMGR_BRGWARMMSK_LWH2F field value from a register. */
#define ALT_RSTMGR_BRGWARMMSK_LWH2F_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_RSTMGR_BRGWARMMSK_LWH2F register field value suitable for setting the register. */
#define ALT_RSTMGR_BRGWARMMSK_LWH2F_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : FPGA2HPS Bridge - fpga2hps
 * 
 * Masks hardware sequenced warm reset for FPGA2HPS Bridge
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_BRGWARMMSK_F2H register field. */
#define ALT_RSTMGR_BRGWARMMSK_F2H_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_BRGWARMMSK_F2H register field. */
#define ALT_RSTMGR_BRGWARMMSK_F2H_MSB        2
/* The width in bits of the ALT_RSTMGR_BRGWARMMSK_F2H register field. */
#define ALT_RSTMGR_BRGWARMMSK_F2H_WIDTH      1
/* The mask used to set the ALT_RSTMGR_BRGWARMMSK_F2H register field value. */
#define ALT_RSTMGR_BRGWARMMSK_F2H_SET_MSK    0x00000004
/* The mask used to clear the ALT_RSTMGR_BRGWARMMSK_F2H register field value. */
#define ALT_RSTMGR_BRGWARMMSK_F2H_CLR_MSK    0xfffffffb
/* The reset value of the ALT_RSTMGR_BRGWARMMSK_F2H register field. */
#define ALT_RSTMGR_BRGWARMMSK_F2H_RESET      0x1
/* Extracts the ALT_RSTMGR_BRGWARMMSK_F2H field value from a register. */
#define ALT_RSTMGR_BRGWARMMSK_F2H_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_RSTMGR_BRGWARMMSK_F2H register field value suitable for setting the register. */
#define ALT_RSTMGR_BRGWARMMSK_F2H_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : F2S SDRAM0 Bridge - f2ssdram0
 * 
 * Masks hardware sequenced warm reset for F2S_SDRAM0 Bridge
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_BRGWARMMSK_F2SSDRAM0 register field. */
#define ALT_RSTMGR_BRGWARMMSK_F2SSDRAM0_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_BRGWARMMSK_F2SSDRAM0 register field. */
#define ALT_RSTMGR_BRGWARMMSK_F2SSDRAM0_MSB        3
/* The width in bits of the ALT_RSTMGR_BRGWARMMSK_F2SSDRAM0 register field. */
#define ALT_RSTMGR_BRGWARMMSK_F2SSDRAM0_WIDTH      1
/* The mask used to set the ALT_RSTMGR_BRGWARMMSK_F2SSDRAM0 register field value. */
#define ALT_RSTMGR_BRGWARMMSK_F2SSDRAM0_SET_MSK    0x00000008
/* The mask used to clear the ALT_RSTMGR_BRGWARMMSK_F2SSDRAM0 register field value. */
#define ALT_RSTMGR_BRGWARMMSK_F2SSDRAM0_CLR_MSK    0xfffffff7
/* The reset value of the ALT_RSTMGR_BRGWARMMSK_F2SSDRAM0 register field. */
#define ALT_RSTMGR_BRGWARMMSK_F2SSDRAM0_RESET      0x1
/* Extracts the ALT_RSTMGR_BRGWARMMSK_F2SSDRAM0 field value from a register. */
#define ALT_RSTMGR_BRGWARMMSK_F2SSDRAM0_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_RSTMGR_BRGWARMMSK_F2SSDRAM0 register field value suitable for setting the register. */
#define ALT_RSTMGR_BRGWARMMSK_F2SSDRAM0_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : F2S SDRAM1 Bridge - f2ssdram1
 * 
 * Masks hardware sequenced warm reset for F2S_SDRAM1 Bridge
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_BRGWARMMSK_F2SSDRAM1 register field. */
#define ALT_RSTMGR_BRGWARMMSK_F2SSDRAM1_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_BRGWARMMSK_F2SSDRAM1 register field. */
#define ALT_RSTMGR_BRGWARMMSK_F2SSDRAM1_MSB        4
/* The width in bits of the ALT_RSTMGR_BRGWARMMSK_F2SSDRAM1 register field. */
#define ALT_RSTMGR_BRGWARMMSK_F2SSDRAM1_WIDTH      1
/* The mask used to set the ALT_RSTMGR_BRGWARMMSK_F2SSDRAM1 register field value. */
#define ALT_RSTMGR_BRGWARMMSK_F2SSDRAM1_SET_MSK    0x00000010
/* The mask used to clear the ALT_RSTMGR_BRGWARMMSK_F2SSDRAM1 register field value. */
#define ALT_RSTMGR_BRGWARMMSK_F2SSDRAM1_CLR_MSK    0xffffffef
/* The reset value of the ALT_RSTMGR_BRGWARMMSK_F2SSDRAM1 register field. */
#define ALT_RSTMGR_BRGWARMMSK_F2SSDRAM1_RESET      0x1
/* Extracts the ALT_RSTMGR_BRGWARMMSK_F2SSDRAM1 field value from a register. */
#define ALT_RSTMGR_BRGWARMMSK_F2SSDRAM1_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_RSTMGR_BRGWARMMSK_F2SSDRAM1 register field value suitable for setting the register. */
#define ALT_RSTMGR_BRGWARMMSK_F2SSDRAM1_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : F2S SDRAM2 Bridge - f2ssdram2
 * 
 * Masks hardware sequenced warm reset for F2S_SDRAM2 Bridge
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_BRGWARMMSK_F2SSDRAM2 register field. */
#define ALT_RSTMGR_BRGWARMMSK_F2SSDRAM2_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_BRGWARMMSK_F2SSDRAM2 register field. */
#define ALT_RSTMGR_BRGWARMMSK_F2SSDRAM2_MSB        5
/* The width in bits of the ALT_RSTMGR_BRGWARMMSK_F2SSDRAM2 register field. */
#define ALT_RSTMGR_BRGWARMMSK_F2SSDRAM2_WIDTH      1
/* The mask used to set the ALT_RSTMGR_BRGWARMMSK_F2SSDRAM2 register field value. */
#define ALT_RSTMGR_BRGWARMMSK_F2SSDRAM2_SET_MSK    0x00000020
/* The mask used to clear the ALT_RSTMGR_BRGWARMMSK_F2SSDRAM2 register field value. */
#define ALT_RSTMGR_BRGWARMMSK_F2SSDRAM2_CLR_MSK    0xffffffdf
/* The reset value of the ALT_RSTMGR_BRGWARMMSK_F2SSDRAM2 register field. */
#define ALT_RSTMGR_BRGWARMMSK_F2SSDRAM2_RESET      0x1
/* Extracts the ALT_RSTMGR_BRGWARMMSK_F2SSDRAM2 field value from a register. */
#define ALT_RSTMGR_BRGWARMMSK_F2SSDRAM2_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_RSTMGR_BRGWARMMSK_F2SSDRAM2 register field value suitable for setting the register. */
#define ALT_RSTMGR_BRGWARMMSK_F2SSDRAM2_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : DDR Scheduler - ddrsch
 * 
 * Masks hardware sequenced warm reset for the DDR Scheduler in the NOC.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_BRGWARMMSK_DDRSCH register field. */
#define ALT_RSTMGR_BRGWARMMSK_DDRSCH_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_BRGWARMMSK_DDRSCH register field. */
#define ALT_RSTMGR_BRGWARMMSK_DDRSCH_MSB        6
/* The width in bits of the ALT_RSTMGR_BRGWARMMSK_DDRSCH register field. */
#define ALT_RSTMGR_BRGWARMMSK_DDRSCH_WIDTH      1
/* The mask used to set the ALT_RSTMGR_BRGWARMMSK_DDRSCH register field value. */
#define ALT_RSTMGR_BRGWARMMSK_DDRSCH_SET_MSK    0x00000040
/* The mask used to clear the ALT_RSTMGR_BRGWARMMSK_DDRSCH register field value. */
#define ALT_RSTMGR_BRGWARMMSK_DDRSCH_CLR_MSK    0xffffffbf
/* The reset value of the ALT_RSTMGR_BRGWARMMSK_DDRSCH register field. */
#define ALT_RSTMGR_BRGWARMMSK_DDRSCH_RESET      0x1
/* Extracts the ALT_RSTMGR_BRGWARMMSK_DDRSCH field value from a register. */
#define ALT_RSTMGR_BRGWARMMSK_DDRSCH_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_RSTMGR_BRGWARMMSK_DDRSCH register field value suitable for setting the register. */
#define ALT_RSTMGR_BRGWARMMSK_DDRSCH_SET(value) (((value) << 6) & 0x00000040)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_BRGWARMMSK.
 */
struct ALT_RSTMGR_BRGWARMMSK_s
{
    uint32_t  hps2fpga   :  1;  /* HPS2FPGA Bridge */
    uint32_t  lwhps2fpga :  1;  /* LWHPS2FPGA Bridge */
    uint32_t  fpga2hps   :  1;  /* FPGA2HPS Bridge */
    uint32_t  f2ssdram0  :  1;  /* F2S SDRAM0 Bridge */
    uint32_t  f2ssdram1  :  1;  /* F2S SDRAM1 Bridge */
    uint32_t  f2ssdram2  :  1;  /* F2S SDRAM2 Bridge */
    uint32_t  ddrsch     :  1;  /* DDR Scheduler */
    uint32_t             : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_BRGWARMMSK. */
typedef volatile struct ALT_RSTMGR_BRGWARMMSK_s  ALT_RSTMGR_BRGWARMMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_BRGWARMMSK register. */
#define ALT_RSTMGR_BRGWARMMSK_RESET       0x0000007f
/* The byte offset of the ALT_RSTMGR_BRGWARMMSK register from the beginning of the component. */
#define ALT_RSTMGR_BRGWARMMSK_OFST        0x4c

/*
 * Register : SYSTEM Warm Mask Register - syswarmmask
 * 
 * The SYSWARMMASK register is used by software to mask the assertion of module
 * reset signals for hardware sequenced warm resets. There is a writeable bit for
 * each module reset signal that is asserted by default on a hardware sequenced
 * warm reset. If the bit is 1, the module reset signal is asserted by a hardware
 * sequenced warm reset. If the bit is 0, the module reset signal is not changed by
 * a hardware sequenced warm reset. The bit assignments of the *WARMMASK registers
 * match the corresponding *MODRST registers. Any module reset signals that are
 * never asserted by a warm reset have reserved bit offsets and are tied to 0 (read
 * as 0, writes are ignored).
 * 
 * All fields are only reset by a cold reset.
 * 
 * Fields in the SYSMODRST register associated with cold reset or debug domain
 * reset aren't present in the MISCWARMMASK register and are reserved.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                    
 * :-------|:-------|:------|:--------------------------------
 *  [0]    | RW     | 0x1   | Boot ROM                       
 *  [1]    | RW     | 0x1   | On-chip RAM                    
 *  [2]    | ???    | 0x1   | *UNDEFINED*                    
 *  [3]    | RW     | 0x1   | FPGA Manager                   
 *  [4]    | RW     | 0x1   | HPS to FPGA Core (Cold or Warm)
 *  [5]    | RW     | 0x1   | System/Debug                   
 *  [6]    | RW     | 0x1   | On-chip RAM ECC OCP Diagnostic 
 *  [31:7] | ???    | 0x3   | *UNDEFINED*                    
 * 
 */
/*
 * Field : Boot ROM - rom
 * 
 * Masks hardware sequenced warm reset for Boot ROM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_SYSWARMMSK_ROM register field. */
#define ALT_RSTMGR_SYSWARMMSK_ROM_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_SYSWARMMSK_ROM register field. */
#define ALT_RSTMGR_SYSWARMMSK_ROM_MSB        0
/* The width in bits of the ALT_RSTMGR_SYSWARMMSK_ROM register field. */
#define ALT_RSTMGR_SYSWARMMSK_ROM_WIDTH      1
/* The mask used to set the ALT_RSTMGR_SYSWARMMSK_ROM register field value. */
#define ALT_RSTMGR_SYSWARMMSK_ROM_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_SYSWARMMSK_ROM register field value. */
#define ALT_RSTMGR_SYSWARMMSK_ROM_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_SYSWARMMSK_ROM register field. */
#define ALT_RSTMGR_SYSWARMMSK_ROM_RESET      0x1
/* Extracts the ALT_RSTMGR_SYSWARMMSK_ROM field value from a register. */
#define ALT_RSTMGR_SYSWARMMSK_ROM_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_SYSWARMMSK_ROM register field value suitable for setting the register. */
#define ALT_RSTMGR_SYSWARMMSK_ROM_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : On-chip RAM - ocram
 * 
 * Masks hardware sequenced warm reset for On-chip RAM
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_SYSWARMMSK_OCRAM register field. */
#define ALT_RSTMGR_SYSWARMMSK_OCRAM_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_SYSWARMMSK_OCRAM register field. */
#define ALT_RSTMGR_SYSWARMMSK_OCRAM_MSB        1
/* The width in bits of the ALT_RSTMGR_SYSWARMMSK_OCRAM register field. */
#define ALT_RSTMGR_SYSWARMMSK_OCRAM_WIDTH      1
/* The mask used to set the ALT_RSTMGR_SYSWARMMSK_OCRAM register field value. */
#define ALT_RSTMGR_SYSWARMMSK_OCRAM_SET_MSK    0x00000002
/* The mask used to clear the ALT_RSTMGR_SYSWARMMSK_OCRAM register field value. */
#define ALT_RSTMGR_SYSWARMMSK_OCRAM_CLR_MSK    0xfffffffd
/* The reset value of the ALT_RSTMGR_SYSWARMMSK_OCRAM register field. */
#define ALT_RSTMGR_SYSWARMMSK_OCRAM_RESET      0x1
/* Extracts the ALT_RSTMGR_SYSWARMMSK_OCRAM field value from a register. */
#define ALT_RSTMGR_SYSWARMMSK_OCRAM_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_RSTMGR_SYSWARMMSK_OCRAM register field value suitable for setting the register. */
#define ALT_RSTMGR_SYSWARMMSK_OCRAM_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : FPGA Manager - fpgamgr
 * 
 * Masks hardware sequenced warm reset for FPGA Manager
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_SYSWARMMSK_FPGAMGR register field. */
#define ALT_RSTMGR_SYSWARMMSK_FPGAMGR_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_SYSWARMMSK_FPGAMGR register field. */
#define ALT_RSTMGR_SYSWARMMSK_FPGAMGR_MSB        3
/* The width in bits of the ALT_RSTMGR_SYSWARMMSK_FPGAMGR register field. */
#define ALT_RSTMGR_SYSWARMMSK_FPGAMGR_WIDTH      1
/* The mask used to set the ALT_RSTMGR_SYSWARMMSK_FPGAMGR register field value. */
#define ALT_RSTMGR_SYSWARMMSK_FPGAMGR_SET_MSK    0x00000008
/* The mask used to clear the ALT_RSTMGR_SYSWARMMSK_FPGAMGR register field value. */
#define ALT_RSTMGR_SYSWARMMSK_FPGAMGR_CLR_MSK    0xfffffff7
/* The reset value of the ALT_RSTMGR_SYSWARMMSK_FPGAMGR register field. */
#define ALT_RSTMGR_SYSWARMMSK_FPGAMGR_RESET      0x1
/* Extracts the ALT_RSTMGR_SYSWARMMSK_FPGAMGR field value from a register. */
#define ALT_RSTMGR_SYSWARMMSK_FPGAMGR_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_RSTMGR_SYSWARMMSK_FPGAMGR register field value suitable for setting the register. */
#define ALT_RSTMGR_SYSWARMMSK_FPGAMGR_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : HPS to FPGA Core (Cold or Warm) - s2f
 * 
 * Masks hardware sequenced warm reset for logic in FPGA core that doesn't
 * differentiate between HPS cold and warm resets
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_SYSWARMMSK_S2F register field. */
#define ALT_RSTMGR_SYSWARMMSK_S2F_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_SYSWARMMSK_S2F register field. */
#define ALT_RSTMGR_SYSWARMMSK_S2F_MSB        4
/* The width in bits of the ALT_RSTMGR_SYSWARMMSK_S2F register field. */
#define ALT_RSTMGR_SYSWARMMSK_S2F_WIDTH      1
/* The mask used to set the ALT_RSTMGR_SYSWARMMSK_S2F register field value. */
#define ALT_RSTMGR_SYSWARMMSK_S2F_SET_MSK    0x00000010
/* The mask used to clear the ALT_RSTMGR_SYSWARMMSK_S2F register field value. */
#define ALT_RSTMGR_SYSWARMMSK_S2F_CLR_MSK    0xffffffef
/* The reset value of the ALT_RSTMGR_SYSWARMMSK_S2F register field. */
#define ALT_RSTMGR_SYSWARMMSK_S2F_RESET      0x1
/* Extracts the ALT_RSTMGR_SYSWARMMSK_S2F field value from a register. */
#define ALT_RSTMGR_SYSWARMMSK_S2F_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_RSTMGR_SYSWARMMSK_S2F register field value suitable for setting the register. */
#define ALT_RSTMGR_SYSWARMMSK_S2F_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : System/Debug - sysdbg
 * 
 * Masks hardware sequenced warm reset for logic that spans the system and debug
 * domains.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_SYSWARMMSK_SYSDBG register field. */
#define ALT_RSTMGR_SYSWARMMSK_SYSDBG_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_SYSWARMMSK_SYSDBG register field. */
#define ALT_RSTMGR_SYSWARMMSK_SYSDBG_MSB        5
/* The width in bits of the ALT_RSTMGR_SYSWARMMSK_SYSDBG register field. */
#define ALT_RSTMGR_SYSWARMMSK_SYSDBG_WIDTH      1
/* The mask used to set the ALT_RSTMGR_SYSWARMMSK_SYSDBG register field value. */
#define ALT_RSTMGR_SYSWARMMSK_SYSDBG_SET_MSK    0x00000020
/* The mask used to clear the ALT_RSTMGR_SYSWARMMSK_SYSDBG register field value. */
#define ALT_RSTMGR_SYSWARMMSK_SYSDBG_CLR_MSK    0xffffffdf
/* The reset value of the ALT_RSTMGR_SYSWARMMSK_SYSDBG register field. */
#define ALT_RSTMGR_SYSWARMMSK_SYSDBG_RESET      0x1
/* Extracts the ALT_RSTMGR_SYSWARMMSK_SYSDBG field value from a register. */
#define ALT_RSTMGR_SYSWARMMSK_SYSDBG_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_RSTMGR_SYSWARMMSK_SYSDBG register field value suitable for setting the register. */
#define ALT_RSTMGR_SYSWARMMSK_SYSDBG_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : On-chip RAM ECC OCP Diagnostic - ocramocp
 * 
 * Masks hardware sequenced warm reset for On-chip RAM ECC OCP Diagnostic module
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_SYSWARMMSK_OCRAMOCP register field. */
#define ALT_RSTMGR_SYSWARMMSK_OCRAMOCP_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_SYSWARMMSK_OCRAMOCP register field. */
#define ALT_RSTMGR_SYSWARMMSK_OCRAMOCP_MSB        6
/* The width in bits of the ALT_RSTMGR_SYSWARMMSK_OCRAMOCP register field. */
#define ALT_RSTMGR_SYSWARMMSK_OCRAMOCP_WIDTH      1
/* The mask used to set the ALT_RSTMGR_SYSWARMMSK_OCRAMOCP register field value. */
#define ALT_RSTMGR_SYSWARMMSK_OCRAMOCP_SET_MSK    0x00000040
/* The mask used to clear the ALT_RSTMGR_SYSWARMMSK_OCRAMOCP register field value. */
#define ALT_RSTMGR_SYSWARMMSK_OCRAMOCP_CLR_MSK    0xffffffbf
/* The reset value of the ALT_RSTMGR_SYSWARMMSK_OCRAMOCP register field. */
#define ALT_RSTMGR_SYSWARMMSK_OCRAMOCP_RESET      0x1
/* Extracts the ALT_RSTMGR_SYSWARMMSK_OCRAMOCP field value from a register. */
#define ALT_RSTMGR_SYSWARMMSK_OCRAMOCP_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_RSTMGR_SYSWARMMSK_OCRAMOCP register field value suitable for setting the register. */
#define ALT_RSTMGR_SYSWARMMSK_OCRAMOCP_SET(value) (((value) << 6) & 0x00000040)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_SYSWARMMSK.
 */
struct ALT_RSTMGR_SYSWARMMSK_s
{
    uint32_t  rom      :  1;  /* Boot ROM */
    uint32_t  ocram    :  1;  /* On-chip RAM */
    uint32_t           :  1;  /* *UNDEFINED* */
    uint32_t  fpgamgr  :  1;  /* FPGA Manager */
    uint32_t  s2f      :  1;  /* HPS to FPGA Core (Cold or Warm) */
    uint32_t  sysdbg   :  1;  /* System/Debug */
    uint32_t  ocramocp :  1;  /* On-chip RAM ECC OCP Diagnostic */
    uint32_t           : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_SYSWARMMSK. */
typedef volatile struct ALT_RSTMGR_SYSWARMMSK_s  ALT_RSTMGR_SYSWARMMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_SYSWARMMSK register. */
#define ALT_RSTMGR_SYSWARMMSK_RESET       0x000001ff
/* The byte offset of the ALT_RSTMGR_SYSWARMMSK register from the beginning of the component. */
#define ALT_RSTMGR_SYSWARMMSK_OFST        0x50

/*
 * Register : NRST Warm Mask Register - nrstwarmmask
 * 
 * The NRSTWARMMASK register is used by software to mask the assertion of module
 * reset signals for hardware sequenced warm resets. There is a writeable bit for
 * each module reset signal that is asserted by default on a hardware sequenced
 * warm reset. If the bit is 1, the module reset signal is asserted by a hardware
 * sequenced warm reset. If the bit is 0, the module reset signal is not changed by
 * a hardware sequenced warm reset. The bit assignments of the *WARMMASK registers
 * match the corresponding *MODRST registers. Any module reset signals that are
 * never asserted by a warm reset have reserved bit offsets and are tied to 0 (read
 * as 0, writes are ignored).
 * 
 * All fields are only reset by a cold reset.
 * 
 * Fields in the MISCMODRST register associated with cold reset or debug domain
 * reset aren't present in the MISCWARMMASK register and are reserved.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [0]    | RW     | 0x1   | nRST Pin OE
 *  [31:1] | ???    | 0x0   | *UNDEFINED*
 * 
 */
/*
 * Field : nRST Pin OE - nrstpinoe
 * 
 * Masks hardware sequenced warm reset for nrst_pin_oe
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_NRSTWARMMSK_NRSTPINOE register field. */
#define ALT_RSTMGR_NRSTWARMMSK_NRSTPINOE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_NRSTWARMMSK_NRSTPINOE register field. */
#define ALT_RSTMGR_NRSTWARMMSK_NRSTPINOE_MSB        0
/* The width in bits of the ALT_RSTMGR_NRSTWARMMSK_NRSTPINOE register field. */
#define ALT_RSTMGR_NRSTWARMMSK_NRSTPINOE_WIDTH      1
/* The mask used to set the ALT_RSTMGR_NRSTWARMMSK_NRSTPINOE register field value. */
#define ALT_RSTMGR_NRSTWARMMSK_NRSTPINOE_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_NRSTWARMMSK_NRSTPINOE register field value. */
#define ALT_RSTMGR_NRSTWARMMSK_NRSTPINOE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_NRSTWARMMSK_NRSTPINOE register field. */
#define ALT_RSTMGR_NRSTWARMMSK_NRSTPINOE_RESET      0x1
/* Extracts the ALT_RSTMGR_NRSTWARMMSK_NRSTPINOE field value from a register. */
#define ALT_RSTMGR_NRSTWARMMSK_NRSTPINOE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_NRSTWARMMSK_NRSTPINOE register field value suitable for setting the register. */
#define ALT_RSTMGR_NRSTWARMMSK_NRSTPINOE_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_NRSTWARMMSK.
 */
struct ALT_RSTMGR_NRSTWARMMSK_s
{
    uint32_t  nrstpinoe :  1;  /* nRST Pin OE */
    uint32_t            : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_NRSTWARMMSK. */
typedef volatile struct ALT_RSTMGR_NRSTWARMMSK_s  ALT_RSTMGR_NRSTWARMMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_NRSTWARMMSK register. */
#define ALT_RSTMGR_NRSTWARMMSK_RESET       0x00000001
/* The byte offset of the ALT_RSTMGR_NRSTWARMMSK register from the beginning of the component. */
#define ALT_RSTMGR_NRSTWARMMSK_OFST        0x54

/*
 * Register : Mask L3 Register - l3warmmask
 * 
 * The L3WARMMASK register is used by software to mask the assertion of module
 * reset signals for hardware sequenced warm resets. There is a writeable bit for
 * each module reset signal that is asserted by default on a hardware sequenced
 * warm reset. If the bit is 1, the module reset signal is asserted by a hardware
 * sequenced warm reset. If the bit is 0, the module reset signal is not changed by
 * a hardware sequenced warm reset. The bit assignments of the *WARMMASK registers
 * match the corresponding *MODRST registers. Any module reset signals that are
 * never asserted by a warm reset have reserved bit offsets and are tied to 0 (read
 * as 0, writes are ignored).
 * 
 * All fields are only reset by a cold reset.
 * 
 * Note that there is no module reset for the L3 interconnect in any *MODRST
 * register because there would be no way for a master to remove the module reset
 * to the L3 once asserted.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description    
 * :-------|:-------|:------|:----------------
 *  [0]    | RW     | 0x1   | L3 Interconnect
 *  [31:1] | ???    | 0x0   | *UNDEFINED*    
 * 
 */
/*
 * Field : L3 Interconnect - l3
 * 
 * Masks hardware sequenced warm reset to L3 Interconnect
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_L3WARMMSK_L3 register field. */
#define ALT_RSTMGR_L3WARMMSK_L3_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_L3WARMMSK_L3 register field. */
#define ALT_RSTMGR_L3WARMMSK_L3_MSB        0
/* The width in bits of the ALT_RSTMGR_L3WARMMSK_L3 register field. */
#define ALT_RSTMGR_L3WARMMSK_L3_WIDTH      1
/* The mask used to set the ALT_RSTMGR_L3WARMMSK_L3 register field value. */
#define ALT_RSTMGR_L3WARMMSK_L3_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_L3WARMMSK_L3 register field value. */
#define ALT_RSTMGR_L3WARMMSK_L3_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_L3WARMMSK_L3 register field. */
#define ALT_RSTMGR_L3WARMMSK_L3_RESET      0x1
/* Extracts the ALT_RSTMGR_L3WARMMSK_L3 field value from a register. */
#define ALT_RSTMGR_L3WARMMSK_L3_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_L3WARMMSK_L3 register field value suitable for setting the register. */
#define ALT_RSTMGR_L3WARMMSK_L3_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_L3WARMMSK.
 */
struct ALT_RSTMGR_L3WARMMSK_s
{
    uint32_t  l3 :  1;  /* L3 Interconnect */
    uint32_t     : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_L3WARMMSK. */
typedef volatile struct ALT_RSTMGR_L3WARMMSK_s  ALT_RSTMGR_L3WARMMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_L3WARMMSK register. */
#define ALT_RSTMGR_L3WARMMSK_RESET       0x00000001
/* The byte offset of the ALT_RSTMGR_L3WARMMSK register from the beginning of the component. */
#define ALT_RSTMGR_L3WARMMSK_OFST        0x58

/*
 * Register : Test Status - tststa
 * 
 * status fields used for testing the Reset Manager.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description      
 * :-------|:-------|:--------|:------------------
 *  [3:0]  | R      | Unknown | warm reset state 
 *  [6:4]  | R      | Unknown | debug reset state
 *  [31:7] | ???    | 0x0     | *UNDEFINED*      
 * 
 */
/*
 * Field : warm reset state - warmrstst
 * 
 * warm reset control FSM state
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_TSTSTA_WARMRSTST register field. */
#define ALT_RSTMGR_TSTSTA_WARMRSTST_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_TSTSTA_WARMRSTST register field. */
#define ALT_RSTMGR_TSTSTA_WARMRSTST_MSB        3
/* The width in bits of the ALT_RSTMGR_TSTSTA_WARMRSTST register field. */
#define ALT_RSTMGR_TSTSTA_WARMRSTST_WIDTH      4
/* The mask used to set the ALT_RSTMGR_TSTSTA_WARMRSTST register field value. */
#define ALT_RSTMGR_TSTSTA_WARMRSTST_SET_MSK    0x0000000f
/* The mask used to clear the ALT_RSTMGR_TSTSTA_WARMRSTST register field value. */
#define ALT_RSTMGR_TSTSTA_WARMRSTST_CLR_MSK    0xfffffff0
/* The reset value of the ALT_RSTMGR_TSTSTA_WARMRSTST register field is UNKNOWN. */
#define ALT_RSTMGR_TSTSTA_WARMRSTST_RESET      0x0
/* Extracts the ALT_RSTMGR_TSTSTA_WARMRSTST field value from a register. */
#define ALT_RSTMGR_TSTSTA_WARMRSTST_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_RSTMGR_TSTSTA_WARMRSTST register field value suitable for setting the register. */
#define ALT_RSTMGR_TSTSTA_WARMRSTST_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : debug reset state - dbgrstst
 * 
 * debug reset control FSM state
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_TSTSTA_DBGRSTST register field. */
#define ALT_RSTMGR_TSTSTA_DBGRSTST_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_TSTSTA_DBGRSTST register field. */
#define ALT_RSTMGR_TSTSTA_DBGRSTST_MSB        6
/* The width in bits of the ALT_RSTMGR_TSTSTA_DBGRSTST register field. */
#define ALT_RSTMGR_TSTSTA_DBGRSTST_WIDTH      3
/* The mask used to set the ALT_RSTMGR_TSTSTA_DBGRSTST register field value. */
#define ALT_RSTMGR_TSTSTA_DBGRSTST_SET_MSK    0x00000070
/* The mask used to clear the ALT_RSTMGR_TSTSTA_DBGRSTST register field value. */
#define ALT_RSTMGR_TSTSTA_DBGRSTST_CLR_MSK    0xffffff8f
/* The reset value of the ALT_RSTMGR_TSTSTA_DBGRSTST register field is UNKNOWN. */
#define ALT_RSTMGR_TSTSTA_DBGRSTST_RESET      0x0
/* Extracts the ALT_RSTMGR_TSTSTA_DBGRSTST field value from a register. */
#define ALT_RSTMGR_TSTSTA_DBGRSTST_GET(value) (((value) & 0x00000070) >> 4)
/* Produces a ALT_RSTMGR_TSTSTA_DBGRSTST register field value suitable for setting the register. */
#define ALT_RSTMGR_TSTSTA_DBGRSTST_SET(value) (((value) << 4) & 0x00000070)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_TSTSTA.
 */
struct ALT_RSTMGR_TSTSTA_s
{
    const uint32_t  warmrstst :  4;  /* warm reset state */
    const uint32_t  dbgrstst  :  3;  /* debug reset state */
    uint32_t                  : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_TSTSTA. */
typedef volatile struct ALT_RSTMGR_TSTSTA_s  ALT_RSTMGR_TSTSTA_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_TSTSTA register. */
#define ALT_RSTMGR_TSTSTA_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_TSTSTA register from the beginning of the component. */
#define ALT_RSTMGR_TSTSTA_OFST        0x5c

/*
 * Register : Test Scratch - tstscratch
 * 
 * SW can write/read this register without side effect to reset manager function.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [31:0] | RW     | 0x0   | field0     
 * 
 */
/*
 * Field : field0 - fld0
 * 
 * field for SW write/read
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_TSTSCRATCH_FLD0 register field. */
#define ALT_RSTMGR_TSTSCRATCH_FLD0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_TSTSCRATCH_FLD0 register field. */
#define ALT_RSTMGR_TSTSCRATCH_FLD0_MSB        31
/* The width in bits of the ALT_RSTMGR_TSTSCRATCH_FLD0 register field. */
#define ALT_RSTMGR_TSTSCRATCH_FLD0_WIDTH      32
/* The mask used to set the ALT_RSTMGR_TSTSCRATCH_FLD0 register field value. */
#define ALT_RSTMGR_TSTSCRATCH_FLD0_SET_MSK    0xffffffff
/* The mask used to clear the ALT_RSTMGR_TSTSCRATCH_FLD0 register field value. */
#define ALT_RSTMGR_TSTSCRATCH_FLD0_CLR_MSK    0x00000000
/* The reset value of the ALT_RSTMGR_TSTSCRATCH_FLD0 register field. */
#define ALT_RSTMGR_TSTSCRATCH_FLD0_RESET      0x0
/* Extracts the ALT_RSTMGR_TSTSCRATCH_FLD0 field value from a register. */
#define ALT_RSTMGR_TSTSCRATCH_FLD0_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_RSTMGR_TSTSCRATCH_FLD0 register field value suitable for setting the register. */
#define ALT_RSTMGR_TSTSCRATCH_FLD0_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_TSTSCRATCH.
 */
struct ALT_RSTMGR_TSTSCRATCH_s
{
    uint32_t  fld0 : 32;  /* field0 */
};

/* The typedef declaration for register ALT_RSTMGR_TSTSCRATCH. */
typedef volatile struct ALT_RSTMGR_TSTSCRATCH_s  ALT_RSTMGR_TSTSCRATCH_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_TSTSCRATCH register. */
#define ALT_RSTMGR_TSTSCRATCH_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_TSTSCRATCH register from the beginning of the component. */
#define ALT_RSTMGR_TSTSCRATCH_OFST        0x60

/*
 * Register : Hand Shake Time Out - hdsktimeout
 * 
 * The Warm Reset handshake timeout will default to 10,240 which at 100 MHz for
 * l4_sys_free_clk will 102.4 micro-seconds.  This value will be a 25 bit
 * programmable value in SW.  The reason for this is the HMC adaptor may need a
 * longer time to clear all outstanding SDRAM transactions.  The maximum
 * programmable value would be 20.97 msec
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset  | Description      
 * :--------|:-------|:-------|:------------------
 *  [24:0]  | RW     | 0x2800 | handshake timeout
 *  [31:25] | ???    | 0x0    | *UNDEFINED*      
 * 
 */
/*
 * Field : handshake timeout - val
 * 
 * hand shake timeout
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HDSKTMO_VAL register field. */
#define ALT_RSTMGR_HDSKTMO_VAL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HDSKTMO_VAL register field. */
#define ALT_RSTMGR_HDSKTMO_VAL_MSB        24
/* The width in bits of the ALT_RSTMGR_HDSKTMO_VAL register field. */
#define ALT_RSTMGR_HDSKTMO_VAL_WIDTH      25
/* The mask used to set the ALT_RSTMGR_HDSKTMO_VAL register field value. */
#define ALT_RSTMGR_HDSKTMO_VAL_SET_MSK    0x01ffffff
/* The mask used to clear the ALT_RSTMGR_HDSKTMO_VAL register field value. */
#define ALT_RSTMGR_HDSKTMO_VAL_CLR_MSK    0xfe000000
/* The reset value of the ALT_RSTMGR_HDSKTMO_VAL register field. */
#define ALT_RSTMGR_HDSKTMO_VAL_RESET      0x2800
/* Extracts the ALT_RSTMGR_HDSKTMO_VAL field value from a register. */
#define ALT_RSTMGR_HDSKTMO_VAL_GET(value) (((value) & 0x01ffffff) >> 0)
/* Produces a ALT_RSTMGR_HDSKTMO_VAL register field value suitable for setting the register. */
#define ALT_RSTMGR_HDSKTMO_VAL_SET(value) (((value) << 0) & 0x01ffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_HDSKTMO.
 */
struct ALT_RSTMGR_HDSKTMO_s
{
    uint32_t  val : 25;  /* handshake timeout */
    uint32_t      :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_HDSKTMO. */
typedef volatile struct ALT_RSTMGR_HDSKTMO_s  ALT_RSTMGR_HDSKTMO_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_HDSKTMO register. */
#define ALT_RSTMGR_HDSKTMO_RESET       0x00002800
/* The byte offset of the ALT_RSTMGR_HDSKTMO register from the beginning of the component. */
#define ALT_RSTMGR_HDSKTMO_OFST        0x64

/*
 * Register : HMC Interrupt - hmcintr
 * 
 * HMC GPIO Interrupt
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [0]    | RW     | 0x0   | intr       
 *  [31:1] | ???    | 0x0   | *UNDEFINED*
 * 
 */
/*
 * Field : intr - intr
 * 
 * Interrupt
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HMCINTR_INTR register field. */
#define ALT_RSTMGR_HMCINTR_INTR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HMCINTR_INTR register field. */
#define ALT_RSTMGR_HMCINTR_INTR_MSB        0
/* The width in bits of the ALT_RSTMGR_HMCINTR_INTR register field. */
#define ALT_RSTMGR_HMCINTR_INTR_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HMCINTR_INTR register field value. */
#define ALT_RSTMGR_HMCINTR_INTR_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_HMCINTR_INTR register field value. */
#define ALT_RSTMGR_HMCINTR_INTR_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_HMCINTR_INTR register field. */
#define ALT_RSTMGR_HMCINTR_INTR_RESET      0x0
/* Extracts the ALT_RSTMGR_HMCINTR_INTR field value from a register. */
#define ALT_RSTMGR_HMCINTR_INTR_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_HMCINTR_INTR register field value suitable for setting the register. */
#define ALT_RSTMGR_HMCINTR_INTR_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_HMCINTR.
 */
struct ALT_RSTMGR_HMCINTR_s
{
    uint32_t  intr :  1;  /* intr */
    uint32_t       : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_HMCINTR. */
typedef volatile struct ALT_RSTMGR_HMCINTR_s  ALT_RSTMGR_HMCINTR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_HMCINTR register. */
#define ALT_RSTMGR_HMCINTR_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_HMCINTR register from the beginning of the component. */
#define ALT_RSTMGR_HMCINTR_OFST        0x68

/*
 * Register : HMC Interrupt enable - hmcintren
 * 
 * HMC Interrupt Enable
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description         
 * :-------|:-------|:------|:---------------------
 *  [0]    | RW     | 0x0   | HMC Interrupt Enable
 *  [31:1] | ???    | 0x0   | *UNDEFINED*         
 * 
 */
/*
 * Field : HMC Interrupt Enable - en
 * 
 * HMC Interrupt Enable Signal for hmcintr
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HMCINTREN_EN register field. */
#define ALT_RSTMGR_HMCINTREN_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HMCINTREN_EN register field. */
#define ALT_RSTMGR_HMCINTREN_EN_MSB        0
/* The width in bits of the ALT_RSTMGR_HMCINTREN_EN register field. */
#define ALT_RSTMGR_HMCINTREN_EN_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HMCINTREN_EN register field value. */
#define ALT_RSTMGR_HMCINTREN_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_HMCINTREN_EN register field value. */
#define ALT_RSTMGR_HMCINTREN_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_HMCINTREN_EN register field. */
#define ALT_RSTMGR_HMCINTREN_EN_RESET      0x0
/* Extracts the ALT_RSTMGR_HMCINTREN_EN field value from a register. */
#define ALT_RSTMGR_HMCINTREN_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_HMCINTREN_EN register field value suitable for setting the register. */
#define ALT_RSTMGR_HMCINTREN_EN_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_HMCINTREN.
 */
struct ALT_RSTMGR_HMCINTREN_s
{
    uint32_t  en :  1;  /* HMC Interrupt Enable */
    uint32_t     : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_HMCINTREN. */
typedef volatile struct ALT_RSTMGR_HMCINTREN_s  ALT_RSTMGR_HMCINTREN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_HMCINTREN register. */
#define ALT_RSTMGR_HMCINTREN_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_HMCINTREN register from the beginning of the component. */
#define ALT_RSTMGR_HMCINTREN_OFST        0x6c

/*
 * Register : HMC Interrupt enable set - hmcintrens
 * 
 * HMC Interrupt Enable Set
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                
 * :-------|:-------|:------|:----------------------------
 *  [0]    | RW     | 0x0   | Interrupt Enable Set Signal
 *  [31:1] | ???    | 0x0   | *UNDEFINED*                
 * 
 */
/*
 * Field : Interrupt Enable Set Signal - en
 * 
 * Interrupt Enable Set Signal
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HMCINTRENS_EN register field. */
#define ALT_RSTMGR_HMCINTRENS_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HMCINTRENS_EN register field. */
#define ALT_RSTMGR_HMCINTRENS_EN_MSB        0
/* The width in bits of the ALT_RSTMGR_HMCINTRENS_EN register field. */
#define ALT_RSTMGR_HMCINTRENS_EN_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HMCINTRENS_EN register field value. */
#define ALT_RSTMGR_HMCINTRENS_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_HMCINTRENS_EN register field value. */
#define ALT_RSTMGR_HMCINTRENS_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_HMCINTRENS_EN register field. */
#define ALT_RSTMGR_HMCINTRENS_EN_RESET      0x0
/* Extracts the ALT_RSTMGR_HMCINTRENS_EN field value from a register. */
#define ALT_RSTMGR_HMCINTRENS_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_HMCINTRENS_EN register field value suitable for setting the register. */
#define ALT_RSTMGR_HMCINTRENS_EN_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_HMCINTRENS.
 */
struct ALT_RSTMGR_HMCINTRENS_s
{
    uint32_t  en :  1;  /* Interrupt Enable Set Signal */
    uint32_t     : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_HMCINTRENS. */
typedef volatile struct ALT_RSTMGR_HMCINTRENS_s  ALT_RSTMGR_HMCINTRENS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_HMCINTRENS register. */
#define ALT_RSTMGR_HMCINTRENS_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_HMCINTRENS register from the beginning of the component. */
#define ALT_RSTMGR_HMCINTRENS_OFST        0x70

/*
 * Register : HMC Interrupt Enable Clear - hmcintrenr
 * 
 * HMC Interrupt Enable Clear
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description               
 * :-------|:-------|:------|:---------------------------
 *  [0]    | RW     | 0x0   | HMC Interrupt Enable Clear
 *  [31:1] | ???    | 0x0   | *UNDEFINED*               
 * 
 */
/*
 * Field : HMC Interrupt Enable Clear - en
 * 
 * HMC Interrupt Enable Clear Signal
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HMCINTRENR_EN register field. */
#define ALT_RSTMGR_HMCINTRENR_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HMCINTRENR_EN register field. */
#define ALT_RSTMGR_HMCINTRENR_EN_MSB        0
/* The width in bits of the ALT_RSTMGR_HMCINTRENR_EN register field. */
#define ALT_RSTMGR_HMCINTRENR_EN_WIDTH      1
/* The mask used to set the ALT_RSTMGR_HMCINTRENR_EN register field value. */
#define ALT_RSTMGR_HMCINTRENR_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_RSTMGR_HMCINTRENR_EN register field value. */
#define ALT_RSTMGR_HMCINTRENR_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_RSTMGR_HMCINTRENR_EN register field. */
#define ALT_RSTMGR_HMCINTRENR_EN_RESET      0x0
/* Extracts the ALT_RSTMGR_HMCINTRENR_EN field value from a register. */
#define ALT_RSTMGR_HMCINTRENR_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_RSTMGR_HMCINTRENR_EN register field value suitable for setting the register. */
#define ALT_RSTMGR_HMCINTRENR_EN_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_HMCINTRENR.
 */
struct ALT_RSTMGR_HMCINTRENR_s
{
    uint32_t  en :  1;  /* HMC Interrupt Enable Clear */
    uint32_t     : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_HMCINTRENR. */
typedef volatile struct ALT_RSTMGR_HMCINTRENR_s  ALT_RSTMGR_HMCINTRENR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_HMCINTRENR register. */
#define ALT_RSTMGR_HMCINTRENR_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_HMCINTRENR register from the beginning of the component. */
#define ALT_RSTMGR_HMCINTRENR_OFST        0x74

/*
 * Register : HMC GPIO Output - hmcgpout
 * 
 * GPIO output for HMC and corresponding interrupt
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [7:0]  | RW     | 0x0   | out        
 *  [31:8] | ???    | 0x0   | *UNDEFINED*
 * 
 */
/*
 * Field : out - out
 * 
 * hmc gpio out
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HMCGPOUT_OUT register field. */
#define ALT_RSTMGR_HMCGPOUT_OUT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HMCGPOUT_OUT register field. */
#define ALT_RSTMGR_HMCGPOUT_OUT_MSB        7
/* The width in bits of the ALT_RSTMGR_HMCGPOUT_OUT register field. */
#define ALT_RSTMGR_HMCGPOUT_OUT_WIDTH      8
/* The mask used to set the ALT_RSTMGR_HMCGPOUT_OUT register field value. */
#define ALT_RSTMGR_HMCGPOUT_OUT_SET_MSK    0x000000ff
/* The mask used to clear the ALT_RSTMGR_HMCGPOUT_OUT register field value. */
#define ALT_RSTMGR_HMCGPOUT_OUT_CLR_MSK    0xffffff00
/* The reset value of the ALT_RSTMGR_HMCGPOUT_OUT register field. */
#define ALT_RSTMGR_HMCGPOUT_OUT_RESET      0x0
/* Extracts the ALT_RSTMGR_HMCGPOUT_OUT field value from a register. */
#define ALT_RSTMGR_HMCGPOUT_OUT_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_RSTMGR_HMCGPOUT_OUT register field value suitable for setting the register. */
#define ALT_RSTMGR_HMCGPOUT_OUT_SET(value) (((value) << 0) & 0x000000ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_HMCGPOUT.
 */
struct ALT_RSTMGR_HMCGPOUT_s
{
    uint32_t  out :  8;  /* out */
    uint32_t      : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_HMCGPOUT. */
typedef volatile struct ALT_RSTMGR_HMCGPOUT_s  ALT_RSTMGR_HMCGPOUT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_HMCGPOUT register. */
#define ALT_RSTMGR_HMCGPOUT_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_HMCGPOUT register from the beginning of the component. */
#define ALT_RSTMGR_HMCGPOUT_OFST        0x78

/*
 * Register : HMC GPIO Input - hmcgpin
 * 
 * GPIO input for HMC and corresponding interrupt
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description
 * :-------|:-------|:------|:------------
 *  [7:0]  | R      | 0x0   | in         
 *  [31:8] | ???    | 0x0   | *UNDEFINED*
 * 
 */
/*
 * Field : in - in
 * 
 * hmc gpio in
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_RSTMGR_HMCGPIN_IN register field. */
#define ALT_RSTMGR_HMCGPIN_IN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_RSTMGR_HMCGPIN_IN register field. */
#define ALT_RSTMGR_HMCGPIN_IN_MSB        7
/* The width in bits of the ALT_RSTMGR_HMCGPIN_IN register field. */
#define ALT_RSTMGR_HMCGPIN_IN_WIDTH      8
/* The mask used to set the ALT_RSTMGR_HMCGPIN_IN register field value. */
#define ALT_RSTMGR_HMCGPIN_IN_SET_MSK    0x000000ff
/* The mask used to clear the ALT_RSTMGR_HMCGPIN_IN register field value. */
#define ALT_RSTMGR_HMCGPIN_IN_CLR_MSK    0xffffff00
/* The reset value of the ALT_RSTMGR_HMCGPIN_IN register field. */
#define ALT_RSTMGR_HMCGPIN_IN_RESET      0x0
/* Extracts the ALT_RSTMGR_HMCGPIN_IN field value from a register. */
#define ALT_RSTMGR_HMCGPIN_IN_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_RSTMGR_HMCGPIN_IN register field value suitable for setting the register. */
#define ALT_RSTMGR_HMCGPIN_IN_SET(value) (((value) << 0) & 0x000000ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_RSTMGR_HMCGPIN.
 */
struct ALT_RSTMGR_HMCGPIN_s
{
    const uint32_t  in :  8;  /* in */
    uint32_t           : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_RSTMGR_HMCGPIN. */
typedef volatile struct ALT_RSTMGR_HMCGPIN_s  ALT_RSTMGR_HMCGPIN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_RSTMGR_HMCGPIN register. */
#define ALT_RSTMGR_HMCGPIN_RESET       0x00000000
/* The byte offset of the ALT_RSTMGR_HMCGPIN register from the beginning of the component. */
#define ALT_RSTMGR_HMCGPIN_OFST        0x7c

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_RSTMGR.
 */
struct ALT_RSTMGR_s
{
    ALT_RSTMGR_STAT_t         stat;                 /* ALT_RSTMGR_STAT */
    ALT_RSTMGR_RAMSTAT_t      ramstat;              /* ALT_RSTMGR_RAMSTAT */
    ALT_RSTMGR_MISCSTAT_t     miscstat;             /* ALT_RSTMGR_MISCSTAT */
    ALT_RSTMGR_CTL_t          ctrl;                 /* ALT_RSTMGR_CTL */
    ALT_RSTMGR_HDSKEN_t       hdsken;               /* ALT_RSTMGR_HDSKEN */
    ALT_RSTMGR_HDSKREQ_t      hdskreq;              /* ALT_RSTMGR_HDSKREQ */
    ALT_RSTMGR_HDSKACK_t      hdskack;              /* ALT_RSTMGR_HDSKACK */
    ALT_RSTMGR_COUNTS_t       counts;               /* ALT_RSTMGR_COUNTS */
    ALT_RSTMGR_MPUMODRST_t    mpumodrst;            /* ALT_RSTMGR_MPUMODRST */
    ALT_RSTMGR_PER0MODRST_t   per0modrst;           /* ALT_RSTMGR_PER0MODRST */
    ALT_RSTMGR_PER1MODRST_t   per1modrst;           /* ALT_RSTMGR_PER1MODRST */
    ALT_RSTMGR_BRGMODRST_t    brgmodrst;            /* ALT_RSTMGR_BRGMODRST */
    ALT_RSTMGR_SYSMODRST_t    sysmodrst;            /* ALT_RSTMGR_SYSMODRST */
    ALT_RSTMGR_COLDMODRST_t   coldmodrst;           /* ALT_RSTMGR_COLDMODRST */
    ALT_RSTMGR_NRSTMODRST_t   nrstmodrst;           /* ALT_RSTMGR_NRSTMODRST */
    ALT_RSTMGR_DBGMODRST_t    dbgmodrst;            /* ALT_RSTMGR_DBGMODRST */
    ALT_RSTMGR_MPUWARMMSK_t   mpuwarmmask;          /* ALT_RSTMGR_MPUWARMMSK */
    ALT_RSTMGR_PER0WARMMSK_t  per0warmmask;         /* ALT_RSTMGR_PER0WARMMSK */
    ALT_RSTMGR_PER1WARMMSK_t  per1warmmask;         /* ALT_RSTMGR_PER1WARMMSK */
    ALT_RSTMGR_BRGWARMMSK_t   brgwarmmask;          /* ALT_RSTMGR_BRGWARMMSK */
    ALT_RSTMGR_SYSWARMMSK_t   syswarmmask;          /* ALT_RSTMGR_SYSWARMMSK */
    ALT_RSTMGR_NRSTWARMMSK_t  nrstwarmmask;         /* ALT_RSTMGR_NRSTWARMMSK */
    ALT_RSTMGR_L3WARMMSK_t    l3warmmask;           /* ALT_RSTMGR_L3WARMMSK */
    ALT_RSTMGR_TSTSTA_t       tststa;               /* ALT_RSTMGR_TSTSTA */
    ALT_RSTMGR_TSTSCRATCH_t   tstscratch;           /* ALT_RSTMGR_TSTSCRATCH */
    ALT_RSTMGR_HDSKTMO_t      hdsktimeout;          /* ALT_RSTMGR_HDSKTMO */
    ALT_RSTMGR_HMCINTR_t      hmcintr;              /* ALT_RSTMGR_HMCINTR */
    ALT_RSTMGR_HMCINTREN_t    hmcintren;            /* ALT_RSTMGR_HMCINTREN */
    ALT_RSTMGR_HMCINTRENS_t   hmcintrens;           /* ALT_RSTMGR_HMCINTRENS */
    ALT_RSTMGR_HMCINTRENR_t   hmcintrenr;           /* ALT_RSTMGR_HMCINTRENR */
    ALT_RSTMGR_HMCGPOUT_t     hmcgpout;             /* ALT_RSTMGR_HMCGPOUT */
    ALT_RSTMGR_HMCGPIN_t      hmcgpin;              /* ALT_RSTMGR_HMCGPIN */
    volatile uint32_t         _pad_0x80_0x100[32];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_RSTMGR. */
typedef volatile struct ALT_RSTMGR_s  ALT_RSTMGR_t;
/* The struct declaration for the raw register contents of register group ALT_RSTMGR. */
struct ALT_RSTMGR_raw_s
{
    volatile uint32_t  stat;                 /* ALT_RSTMGR_STAT */
    volatile uint32_t  ramstat;              /* ALT_RSTMGR_RAMSTAT */
    volatile uint32_t  miscstat;             /* ALT_RSTMGR_MISCSTAT */
    volatile uint32_t  ctrl;                 /* ALT_RSTMGR_CTL */
    volatile uint32_t  hdsken;               /* ALT_RSTMGR_HDSKEN */
    volatile uint32_t  hdskreq;              /* ALT_RSTMGR_HDSKREQ */
    volatile uint32_t  hdskack;              /* ALT_RSTMGR_HDSKACK */
    volatile uint32_t  counts;               /* ALT_RSTMGR_COUNTS */
    volatile uint32_t  mpumodrst;            /* ALT_RSTMGR_MPUMODRST */
    volatile uint32_t  per0modrst;           /* ALT_RSTMGR_PER0MODRST */
    volatile uint32_t  per1modrst;           /* ALT_RSTMGR_PER1MODRST */
    volatile uint32_t  brgmodrst;            /* ALT_RSTMGR_BRGMODRST */
    volatile uint32_t  sysmodrst;            /* ALT_RSTMGR_SYSMODRST */
    volatile uint32_t  coldmodrst;           /* ALT_RSTMGR_COLDMODRST */
    volatile uint32_t  nrstmodrst;           /* ALT_RSTMGR_NRSTMODRST */
    volatile uint32_t  dbgmodrst;            /* ALT_RSTMGR_DBGMODRST */
    volatile uint32_t  mpuwarmmask;          /* ALT_RSTMGR_MPUWARMMSK */
    volatile uint32_t  per0warmmask;         /* ALT_RSTMGR_PER0WARMMSK */
    volatile uint32_t  per1warmmask;         /* ALT_RSTMGR_PER1WARMMSK */
    volatile uint32_t  brgwarmmask;          /* ALT_RSTMGR_BRGWARMMSK */
    volatile uint32_t  syswarmmask;          /* ALT_RSTMGR_SYSWARMMSK */
    volatile uint32_t  nrstwarmmask;         /* ALT_RSTMGR_NRSTWARMMSK */
    volatile uint32_t  l3warmmask;           /* ALT_RSTMGR_L3WARMMSK */
    volatile uint32_t  tststa;               /* ALT_RSTMGR_TSTSTA */
    volatile uint32_t  tstscratch;           /* ALT_RSTMGR_TSTSCRATCH */
    volatile uint32_t  hdsktimeout;          /* ALT_RSTMGR_HDSKTMO */
    volatile uint32_t  hmcintr;              /* ALT_RSTMGR_HMCINTR */
    volatile uint32_t  hmcintren;            /* ALT_RSTMGR_HMCINTREN */
    volatile uint32_t  hmcintrens;           /* ALT_RSTMGR_HMCINTRENS */
    volatile uint32_t  hmcintrenr;           /* ALT_RSTMGR_HMCINTRENR */
    volatile uint32_t  hmcgpout;             /* ALT_RSTMGR_HMCGPOUT */
    volatile uint32_t  hmcgpin;              /* ALT_RSTMGR_HMCGPIN */
    uint32_t           _pad_0x80_0x100[32];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_RSTMGR. */
typedef volatile struct ALT_RSTMGR_raw_s  ALT_RSTMGR_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_RSTMGR_H__ */

