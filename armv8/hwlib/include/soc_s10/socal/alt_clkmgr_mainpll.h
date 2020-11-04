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

/* Altera - ALT_CLKMGR_MAINPLL */

#ifndef __ALT_SOCAL_CLKMGR_MAINPLL_H__
#define __ALT_SOCAL_CLKMGR_MAINPLL_H__

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
 * Component : Main PLL Group - CLKMGR_MAINPLL
 * Main PLL Group
 * 
 * Contains registers with settings for the Main PLL.
 * 
 */
/*
 * Register : Enable Register - en
 * 
 * Contains fields that control clock enables for Main Clocks.
 * 
 * 1: The clock is enabled.
 * 
 * 0: The clock is disabled.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description           
 * :-------|:-------|:------|:-----------------------
 *  [0]    | RW     | 0x1   | MPU Clock Group Enable
 *  [1]    | RW     | 0x1   | l4_main_clk Enable    
 *  [2]    | RW     | 0x1   | l4_mp_clk Enable      
 *  [3]    | RW     | 0x1   | l4_sp_clk Enable      
 *  [4]    | RW     | 0x1   | Debug Group Enable    
 *  [5]    | RW     | 0x1   | Debug Timer Enable    
 *  [6]    | RW     | 0x1   | s2f_user0_clk Enable  
 *  [31:7] | ???    | 0x1   | *UNDEFINED*           
 * 
 */
/*
 * Field : MPU Clock Group Enable - mpuclken
 * 
 * Enable for MPU Clock Group (mpu_clk, mpu_l2ram_clk  and mpu_periph_clk).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_EN_MPUCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_MPUCLKEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_EN_MPUCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_MPUCLKEN_MSB        0
/* The width in bits of the ALT_CLKMGR_MAINPLL_EN_MPUCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_MPUCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_EN_MPUCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_EN_MPUCLKEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_MAINPLL_EN_MPUCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_EN_MPUCLKEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_MAINPLL_EN_MPUCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_MPUCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_EN_MPUCLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_EN_MPUCLKEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_EN_MPUCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_EN_MPUCLKEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : l4_main_clk Enable - l4mainclken
 * 
 * Enables clock l4_main_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_EN_L4MAINCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_L4MAINCLKEN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_EN_L4MAINCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_L4MAINCLKEN_MSB        1
/* The width in bits of the ALT_CLKMGR_MAINPLL_EN_L4MAINCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_L4MAINCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_EN_L4MAINCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_EN_L4MAINCLKEN_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_MAINPLL_EN_L4MAINCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_EN_L4MAINCLKEN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_MAINPLL_EN_L4MAINCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_L4MAINCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_EN_L4MAINCLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_EN_L4MAINCLKEN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_MAINPLL_EN_L4MAINCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_EN_L4MAINCLKEN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : l4_mp_clk Enable - l4mpclken
 * 
 * Enables clock l4_mp_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_EN_L4MPCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_L4MPCLKEN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_EN_L4MPCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_L4MPCLKEN_MSB        2
/* The width in bits of the ALT_CLKMGR_MAINPLL_EN_L4MPCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_L4MPCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_EN_L4MPCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_EN_L4MPCLKEN_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_MAINPLL_EN_L4MPCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_EN_L4MPCLKEN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_MAINPLL_EN_L4MPCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_L4MPCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_EN_L4MPCLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_EN_L4MPCLKEN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_MAINPLL_EN_L4MPCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_EN_L4MPCLKEN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : l4_sp_clk Enable - l4spclken
 * 
 * Enables clock l4_sp_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_EN_L4SPCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_L4SPCLKEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_EN_L4SPCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_L4SPCLKEN_MSB        3
/* The width in bits of the ALT_CLKMGR_MAINPLL_EN_L4SPCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_L4SPCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_EN_L4SPCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_EN_L4SPCLKEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_MAINPLL_EN_L4SPCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_EN_L4SPCLKEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_MAINPLL_EN_L4SPCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_L4SPCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_EN_L4SPCLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_EN_L4SPCLKEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_MAINPLL_EN_L4SPCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_EN_L4SPCLKEN_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : Debug Group Enable - csclken
 * 
 * Enables Debug Clock outputs (cs_at_clk, cs_pdbg_clk, and cs_trace_clk)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_EN_CSCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_CSCLKEN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_EN_CSCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_CSCLKEN_MSB        4
/* The width in bits of the ALT_CLKMGR_MAINPLL_EN_CSCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_CSCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_EN_CSCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_EN_CSCLKEN_SET_MSK    0x00000010
/* The mask used to clear the ALT_CLKMGR_MAINPLL_EN_CSCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_EN_CSCLKEN_CLR_MSK    0xffffffef
/* The reset value of the ALT_CLKMGR_MAINPLL_EN_CSCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_CSCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_EN_CSCLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_EN_CSCLKEN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_CLKMGR_MAINPLL_EN_CSCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_EN_CSCLKEN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : Debug Timer Enable - cstimerclken
 * 
 * Enables Debug Timer Clock output (cs_timer_clk)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_EN_CSTIMERCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_CSTIMERCLKEN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_EN_CSTIMERCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_CSTIMERCLKEN_MSB        5
/* The width in bits of the ALT_CLKMGR_MAINPLL_EN_CSTIMERCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_CSTIMERCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_EN_CSTIMERCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_EN_CSTIMERCLKEN_SET_MSK    0x00000020
/* The mask used to clear the ALT_CLKMGR_MAINPLL_EN_CSTIMERCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_EN_CSTIMERCLKEN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_CLKMGR_MAINPLL_EN_CSTIMERCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_CSTIMERCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_EN_CSTIMERCLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_EN_CSTIMERCLKEN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_CLKMGR_MAINPLL_EN_CSTIMERCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_EN_CSTIMERCLKEN_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : s2f_user0_clk Enable - s2fuser0clken
 * 
 * Enables clock s2f_user0_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_EN_S2FUSER0CLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_S2FUSER0CLKEN_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_EN_S2FUSER0CLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_S2FUSER0CLKEN_MSB        6
/* The width in bits of the ALT_CLKMGR_MAINPLL_EN_S2FUSER0CLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_S2FUSER0CLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_EN_S2FUSER0CLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_EN_S2FUSER0CLKEN_SET_MSK    0x00000040
/* The mask used to clear the ALT_CLKMGR_MAINPLL_EN_S2FUSER0CLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_EN_S2FUSER0CLKEN_CLR_MSK    0xffffffbf
/* The reset value of the ALT_CLKMGR_MAINPLL_EN_S2FUSER0CLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_S2FUSER0CLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_EN_S2FUSER0CLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_EN_S2FUSER0CLKEN_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_CLKMGR_MAINPLL_EN_S2FUSER0CLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_EN_S2FUSER0CLKEN_SET(value) (((value) << 6) & 0x00000040)

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
 * The struct declaration for register ALT_CLKMGR_MAINPLL_EN.
 */
struct ALT_CLKMGR_MAINPLL_EN_s
{
    volatile uint32_t  mpuclken      :  1;  /* MPU Clock Group Enable */
    volatile uint32_t  l4mainclken   :  1;  /* l4_main_clk Enable */
    volatile uint32_t  l4mpclken     :  1;  /* l4_mp_clk Enable */
    volatile uint32_t  l4spclken     :  1;  /* l4_sp_clk Enable */
    volatile uint32_t  csclken       :  1;  /* Debug Group Enable */
    volatile uint32_t  cstimerclken  :  1;  /* Debug Timer Enable */
    volatile uint32_t  s2fuser0clken :  1;  /* s2f_user0_clk Enable */
    uint32_t                         : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_EN. */
typedef struct ALT_CLKMGR_MAINPLL_EN_s  ALT_CLKMGR_MAINPLL_EN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_EN register. */
#define ALT_CLKMGR_MAINPLL_EN_RESET       0x000000ff
/* The byte offset of the ALT_CLKMGR_MAINPLL_EN register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_EN_OFST        0x0

/*
 * Register : Enable Set Register - ens
 * 
 * Write One to Set correspondng fields in the Enable Register.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description           
 * :-------|:-------|:------|:-----------------------
 *  [0]    | RW     | 0x1   | MPU Clock Group Enable
 *  [1]    | RW     | 0x1   | l4_main_clk Enable    
 *  [2]    | RW     | 0x1   | l4_mp_clk Enable      
 *  [3]    | RW     | 0x1   | l4_sp_clk Enable      
 *  [4]    | RW     | 0x1   | Debug Group Enable    
 *  [5]    | RW     | 0x1   | Debug Timer Enable    
 *  [6]    | RW     | 0x1   | s2f_user0_clk Enable  
 *  [31:7] | ???    | 0x1   | *UNDEFINED*           
 * 
 */
/*
 * Field : MPU Clock Group Enable - mpuclken
 * 
 * Enable for MPU Clock Group (mpu_clk, mpu_l2ram_clk and mpu_periph_clk).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_ENS_MPUCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_MPUCLKEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_ENS_MPUCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_MPUCLKEN_MSB        0
/* The width in bits of the ALT_CLKMGR_MAINPLL_ENS_MPUCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_MPUCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_ENS_MPUCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENS_MPUCLKEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_MAINPLL_ENS_MPUCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENS_MPUCLKEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_MAINPLL_ENS_MPUCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_MPUCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_ENS_MPUCLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_ENS_MPUCLKEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_ENS_MPUCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_ENS_MPUCLKEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : l4_main_clk Enable - l4mainclken
 * 
 * Enables clock l4_main_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_ENS_L4MAINCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_L4MAINCLKEN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_ENS_L4MAINCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_L4MAINCLKEN_MSB        1
/* The width in bits of the ALT_CLKMGR_MAINPLL_ENS_L4MAINCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_L4MAINCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_ENS_L4MAINCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENS_L4MAINCLKEN_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_MAINPLL_ENS_L4MAINCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENS_L4MAINCLKEN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_MAINPLL_ENS_L4MAINCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_L4MAINCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_ENS_L4MAINCLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_ENS_L4MAINCLKEN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_MAINPLL_ENS_L4MAINCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_ENS_L4MAINCLKEN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : l4_mp_clk Enable - l4mpclken
 * 
 * Enables clock l4_mp_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_ENS_L4MPCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_L4MPCLKEN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_ENS_L4MPCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_L4MPCLKEN_MSB        2
/* The width in bits of the ALT_CLKMGR_MAINPLL_ENS_L4MPCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_L4MPCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_ENS_L4MPCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENS_L4MPCLKEN_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_MAINPLL_ENS_L4MPCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENS_L4MPCLKEN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_MAINPLL_ENS_L4MPCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_L4MPCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_ENS_L4MPCLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_ENS_L4MPCLKEN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_MAINPLL_ENS_L4MPCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_ENS_L4MPCLKEN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : l4_sp_clk Enable - l4spclken
 * 
 * Enables clock l4_sp_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_ENS_L4SPCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_L4SPCLKEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_ENS_L4SPCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_L4SPCLKEN_MSB        3
/* The width in bits of the ALT_CLKMGR_MAINPLL_ENS_L4SPCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_L4SPCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_ENS_L4SPCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENS_L4SPCLKEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_MAINPLL_ENS_L4SPCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENS_L4SPCLKEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_MAINPLL_ENS_L4SPCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_L4SPCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_ENS_L4SPCLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_ENS_L4SPCLKEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_MAINPLL_ENS_L4SPCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_ENS_L4SPCLKEN_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : Debug Group Enable - csclken
 * 
 * Enables Debug Clock outputs (cs_at_clk, cs_pdbg_clk and cs_trace_clk)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_ENS_CSCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_CSCLKEN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_ENS_CSCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_CSCLKEN_MSB        4
/* The width in bits of the ALT_CLKMGR_MAINPLL_ENS_CSCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_CSCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_ENS_CSCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENS_CSCLKEN_SET_MSK    0x00000010
/* The mask used to clear the ALT_CLKMGR_MAINPLL_ENS_CSCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENS_CSCLKEN_CLR_MSK    0xffffffef
/* The reset value of the ALT_CLKMGR_MAINPLL_ENS_CSCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_CSCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_ENS_CSCLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_ENS_CSCLKEN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_CLKMGR_MAINPLL_ENS_CSCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_ENS_CSCLKEN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : Debug Timer Enable - cstimerclken
 * 
 * Enables Debug Timer Clock output (cs_timer_clk)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_ENS_CSTIMERCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_CSTIMERCLKEN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_ENS_CSTIMERCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_CSTIMERCLKEN_MSB        5
/* The width in bits of the ALT_CLKMGR_MAINPLL_ENS_CSTIMERCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_CSTIMERCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_ENS_CSTIMERCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENS_CSTIMERCLKEN_SET_MSK    0x00000020
/* The mask used to clear the ALT_CLKMGR_MAINPLL_ENS_CSTIMERCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENS_CSTIMERCLKEN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_CLKMGR_MAINPLL_ENS_CSTIMERCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_CSTIMERCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_ENS_CSTIMERCLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_ENS_CSTIMERCLKEN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_CLKMGR_MAINPLL_ENS_CSTIMERCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_ENS_CSTIMERCLKEN_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : s2f_user0_clk Enable - s2fuser0clken
 * 
 * Enables clock s2f_user0_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_ENS_S2FUSER0CLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_S2FUSER0CLKEN_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_ENS_S2FUSER0CLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_S2FUSER0CLKEN_MSB        6
/* The width in bits of the ALT_CLKMGR_MAINPLL_ENS_S2FUSER0CLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_S2FUSER0CLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_ENS_S2FUSER0CLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENS_S2FUSER0CLKEN_SET_MSK    0x00000040
/* The mask used to clear the ALT_CLKMGR_MAINPLL_ENS_S2FUSER0CLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENS_S2FUSER0CLKEN_CLR_MSK    0xffffffbf
/* The reset value of the ALT_CLKMGR_MAINPLL_ENS_S2FUSER0CLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_S2FUSER0CLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_ENS_S2FUSER0CLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_ENS_S2FUSER0CLKEN_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_CLKMGR_MAINPLL_ENS_S2FUSER0CLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_ENS_S2FUSER0CLKEN_SET(value) (((value) << 6) & 0x00000040)

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
 * The struct declaration for register ALT_CLKMGR_MAINPLL_ENS.
 */
struct ALT_CLKMGR_MAINPLL_ENS_s
{
    volatile uint32_t  mpuclken      :  1;  /* MPU Clock Group Enable */
    volatile uint32_t  l4mainclken   :  1;  /* l4_main_clk Enable */
    volatile uint32_t  l4mpclken     :  1;  /* l4_mp_clk Enable */
    volatile uint32_t  l4spclken     :  1;  /* l4_sp_clk Enable */
    volatile uint32_t  csclken       :  1;  /* Debug Group Enable */
    volatile uint32_t  cstimerclken  :  1;  /* Debug Timer Enable */
    volatile uint32_t  s2fuser0clken :  1;  /* s2f_user0_clk Enable */
    uint32_t                         : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_ENS. */
typedef struct ALT_CLKMGR_MAINPLL_ENS_s  ALT_CLKMGR_MAINPLL_ENS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_ENS register. */
#define ALT_CLKMGR_MAINPLL_ENS_RESET       0x000000ff
/* The byte offset of the ALT_CLKMGR_MAINPLL_ENS register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_ENS_OFST        0x4

/*
 * Register : Enable Reset Register - enr
 * 
 * Write One to Clear corresponding fields in Enable Register.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description           
 * :-------|:-------|:------|:-----------------------
 *  [0]    | RW     | 0x1   | MPU Clock Group Enable
 *  [1]    | RW     | 0x1   | l4_main_clk Enable    
 *  [2]    | RW     | 0x1   | l4_mp_clk Enable      
 *  [3]    | RW     | 0x1   | l4_sp_clk Enable      
 *  [4]    | RW     | 0x1   | Debug Group Enable    
 *  [5]    | RW     | 0x1   | Debug Timer Enable    
 *  [6]    | RW     | 0x1   | s2f_user0_clk Enable  
 *  [31:7] | ???    | 0x1   | *UNDEFINED*           
 * 
 */
/*
 * Field : MPU Clock Group Enable - mpuclken
 * 
 * Enable for MPU Clock Group (mpu_clk, mpu_l2ram_clk and mpu_periph_clk).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_ENR_MPUCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_MPUCLKEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_ENR_MPUCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_MPUCLKEN_MSB        0
/* The width in bits of the ALT_CLKMGR_MAINPLL_ENR_MPUCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_MPUCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_ENR_MPUCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENR_MPUCLKEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_MAINPLL_ENR_MPUCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENR_MPUCLKEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_MAINPLL_ENR_MPUCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_MPUCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_ENR_MPUCLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_ENR_MPUCLKEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_ENR_MPUCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_ENR_MPUCLKEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : l4_main_clk Enable - l4mainclken
 * 
 * Enables clock l4_main_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_ENR_L4MAINCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_L4MAINCLKEN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_ENR_L4MAINCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_L4MAINCLKEN_MSB        1
/* The width in bits of the ALT_CLKMGR_MAINPLL_ENR_L4MAINCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_L4MAINCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_ENR_L4MAINCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENR_L4MAINCLKEN_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_MAINPLL_ENR_L4MAINCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENR_L4MAINCLKEN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_MAINPLL_ENR_L4MAINCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_L4MAINCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_ENR_L4MAINCLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_ENR_L4MAINCLKEN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_MAINPLL_ENR_L4MAINCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_ENR_L4MAINCLKEN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : l4_mp_clk Enable - l4mpclken
 * 
 * Enables clock l4_mp_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_ENR_L4MPCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_L4MPCLKEN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_ENR_L4MPCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_L4MPCLKEN_MSB        2
/* The width in bits of the ALT_CLKMGR_MAINPLL_ENR_L4MPCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_L4MPCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_ENR_L4MPCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENR_L4MPCLKEN_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_MAINPLL_ENR_L4MPCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENR_L4MPCLKEN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_MAINPLL_ENR_L4MPCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_L4MPCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_ENR_L4MPCLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_ENR_L4MPCLKEN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_MAINPLL_ENR_L4MPCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_ENR_L4MPCLKEN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : l4_sp_clk Enable - l4spclken
 * 
 * Enables clock l4_sp_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_ENR_L4SPCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_L4SPCLKEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_ENR_L4SPCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_L4SPCLKEN_MSB        3
/* The width in bits of the ALT_CLKMGR_MAINPLL_ENR_L4SPCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_L4SPCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_ENR_L4SPCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENR_L4SPCLKEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_MAINPLL_ENR_L4SPCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENR_L4SPCLKEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_MAINPLL_ENR_L4SPCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_L4SPCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_ENR_L4SPCLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_ENR_L4SPCLKEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_MAINPLL_ENR_L4SPCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_ENR_L4SPCLKEN_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : Debug Group Enable - csclken
 * 
 * Enables Debug Clock outputs (cs_at_clk, cs_pdbg_clk and cs_trace_clk)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_ENR_CSCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_CSCLKEN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_ENR_CSCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_CSCLKEN_MSB        4
/* The width in bits of the ALT_CLKMGR_MAINPLL_ENR_CSCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_CSCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_ENR_CSCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENR_CSCLKEN_SET_MSK    0x00000010
/* The mask used to clear the ALT_CLKMGR_MAINPLL_ENR_CSCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENR_CSCLKEN_CLR_MSK    0xffffffef
/* The reset value of the ALT_CLKMGR_MAINPLL_ENR_CSCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_CSCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_ENR_CSCLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_ENR_CSCLKEN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_CLKMGR_MAINPLL_ENR_CSCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_ENR_CSCLKEN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : Debug Timer Enable - cstimerclken
 * 
 * Enables Debug Timer Clock output (cs_timer_clk)
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_ENR_CSTIMERCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_CSTIMERCLKEN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_ENR_CSTIMERCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_CSTIMERCLKEN_MSB        5
/* The width in bits of the ALT_CLKMGR_MAINPLL_ENR_CSTIMERCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_CSTIMERCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_ENR_CSTIMERCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENR_CSTIMERCLKEN_SET_MSK    0x00000020
/* The mask used to clear the ALT_CLKMGR_MAINPLL_ENR_CSTIMERCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENR_CSTIMERCLKEN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_CLKMGR_MAINPLL_ENR_CSTIMERCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_CSTIMERCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_ENR_CSTIMERCLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_ENR_CSTIMERCLKEN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_CLKMGR_MAINPLL_ENR_CSTIMERCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_ENR_CSTIMERCLKEN_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : s2f_user0_clk Enable - s2fuser0clken
 * 
 * Enables clock s2f_user0_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_ENR_S2FUSER0CLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_S2FUSER0CLKEN_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_ENR_S2FUSER0CLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_S2FUSER0CLKEN_MSB        6
/* The width in bits of the ALT_CLKMGR_MAINPLL_ENR_S2FUSER0CLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_S2FUSER0CLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_ENR_S2FUSER0CLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENR_S2FUSER0CLKEN_SET_MSK    0x00000040
/* The mask used to clear the ALT_CLKMGR_MAINPLL_ENR_S2FUSER0CLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENR_S2FUSER0CLKEN_CLR_MSK    0xffffffbf
/* The reset value of the ALT_CLKMGR_MAINPLL_ENR_S2FUSER0CLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_S2FUSER0CLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_ENR_S2FUSER0CLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_ENR_S2FUSER0CLKEN_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_CLKMGR_MAINPLL_ENR_S2FUSER0CLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_ENR_S2FUSER0CLKEN_SET(value) (((value) << 6) & 0x00000040)

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
 * The struct declaration for register ALT_CLKMGR_MAINPLL_ENR.
 */
struct ALT_CLKMGR_MAINPLL_ENR_s
{
    volatile uint32_t  mpuclken      :  1;  /* MPU Clock Group Enable */
    volatile uint32_t  l4mainclken   :  1;  /* l4_main_clk Enable */
    volatile uint32_t  l4mpclken     :  1;  /* l4_mp_clk Enable */
    volatile uint32_t  l4spclken     :  1;  /* l4_sp_clk Enable */
    volatile uint32_t  csclken       :  1;  /* Debug Group Enable */
    volatile uint32_t  cstimerclken  :  1;  /* Debug Timer Enable */
    volatile uint32_t  s2fuser0clken :  1;  /* s2f_user0_clk Enable */
    uint32_t                         : 25;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_ENR. */
typedef struct ALT_CLKMGR_MAINPLL_ENR_s  ALT_CLKMGR_MAINPLL_ENR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_ENR register. */
#define ALT_CLKMGR_MAINPLL_ENR_RESET       0x000000ff
/* The byte offset of the ALT_CLKMGR_MAINPLL_ENR register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_ENR_OFST        0x8

/*
 * Register : Bypass Register - bypass
 * 
 * Contains fields that control bypass for clocks derived from the Main PLL.
 * 
 * 1: The clock is bypassed to boot_clk.
 * 
 * 0: The clock is derived from the 5:1 active mux.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description     
 * :-------|:-------|:------|:-----------------
 *  [0]    | RW     | 0x1   | MPU Bypass      
 *  [1]    | RW     | 0x1   | NOC Bypass      
 *  [2]    | RW     | 0x1   | S2F User0 Bypass
 *  [31:3] | ???    | 0x7   | *UNDEFINED*     
 * 
 */
/*
 * Field : MPU Bypass - mpu
 * 
 * If set, the MPU clock group will be bypassed to the boot_clk.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_BYPASS_MPU register field. */
#define ALT_CLKMGR_MAINPLL_BYPASS_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_BYPASS_MPU register field. */
#define ALT_CLKMGR_MAINPLL_BYPASS_MPU_MSB        0
/* The width in bits of the ALT_CLKMGR_MAINPLL_BYPASS_MPU register field. */
#define ALT_CLKMGR_MAINPLL_BYPASS_MPU_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_BYPASS_MPU register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASS_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_MAINPLL_BYPASS_MPU register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASS_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_MAINPLL_BYPASS_MPU register field. */
#define ALT_CLKMGR_MAINPLL_BYPASS_MPU_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_BYPASS_MPU field value from a register. */
#define ALT_CLKMGR_MAINPLL_BYPASS_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_BYPASS_MPU register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_BYPASS_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : NOC Bypass - noc
 * 
 * If set, the NOC clock group will be bypassed to boot_clk.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_BYPASS_NOC register field. */
#define ALT_CLKMGR_MAINPLL_BYPASS_NOC_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_BYPASS_NOC register field. */
#define ALT_CLKMGR_MAINPLL_BYPASS_NOC_MSB        1
/* The width in bits of the ALT_CLKMGR_MAINPLL_BYPASS_NOC register field. */
#define ALT_CLKMGR_MAINPLL_BYPASS_NOC_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_BYPASS_NOC register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASS_NOC_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_MAINPLL_BYPASS_NOC register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASS_NOC_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_MAINPLL_BYPASS_NOC register field. */
#define ALT_CLKMGR_MAINPLL_BYPASS_NOC_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_BYPASS_NOC field value from a register. */
#define ALT_CLKMGR_MAINPLL_BYPASS_NOC_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_MAINPLL_BYPASS_NOC register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_BYPASS_NOC_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : S2F User0 Bypass - s2fuser0
 * 
 * If set, the s2f_user0_clk will be bypassed to the boot_clk.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_BYPASS_S2FUSER0 register field. */
#define ALT_CLKMGR_MAINPLL_BYPASS_S2FUSER0_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_BYPASS_S2FUSER0 register field. */
#define ALT_CLKMGR_MAINPLL_BYPASS_S2FUSER0_MSB        2
/* The width in bits of the ALT_CLKMGR_MAINPLL_BYPASS_S2FUSER0 register field. */
#define ALT_CLKMGR_MAINPLL_BYPASS_S2FUSER0_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_BYPASS_S2FUSER0 register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASS_S2FUSER0_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_MAINPLL_BYPASS_S2FUSER0 register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASS_S2FUSER0_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_MAINPLL_BYPASS_S2FUSER0 register field. */
#define ALT_CLKMGR_MAINPLL_BYPASS_S2FUSER0_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_BYPASS_S2FUSER0 field value from a register. */
#define ALT_CLKMGR_MAINPLL_BYPASS_S2FUSER0_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_MAINPLL_BYPASS_S2FUSER0 register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_BYPASS_S2FUSER0_SET(value) (((value) << 2) & 0x00000004)

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
 * The struct declaration for register ALT_CLKMGR_MAINPLL_BYPASS.
 */
struct ALT_CLKMGR_MAINPLL_BYPASS_s
{
    volatile uint32_t  mpu      :  1;  /* MPU Bypass */
    volatile uint32_t  noc      :  1;  /* NOC Bypass */
    volatile uint32_t  s2fuser0 :  1;  /* S2F User0 Bypass */
    uint32_t                    : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_BYPASS. */
typedef struct ALT_CLKMGR_MAINPLL_BYPASS_s  ALT_CLKMGR_MAINPLL_BYPASS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_BYPASS register. */
#define ALT_CLKMGR_MAINPLL_BYPASS_RESET       0x0000003f
/* The byte offset of the ALT_CLKMGR_MAINPLL_BYPASS register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_BYPASS_OFST        0xc

/*
 * Register : Bypass Set Register - bypasss
 * 
 * Write One to Set corresponding fields in Bypass Register.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description     
 * :-------|:-------|:------|:-----------------
 *  [0]    | RW     | 0x1   | MPU Bypass      
 *  [1]    | RW     | 0x1   | NOC Bypass      
 *  [2]    | RW     | 0x1   | S2F User0 Bypass
 *  [31:3] | ???    | 0x7   | *UNDEFINED*     
 * 
 */
/*
 * Field : MPU Bypass - mpu
 * 
 * If set, the MPU clock group will be bypassed to the input clock reference of the
 * Main PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_BYPASSS_MPU register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_BYPASSS_MPU register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_MPU_MSB        0
/* The width in bits of the ALT_CLKMGR_MAINPLL_BYPASSS_MPU register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_MPU_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_BYPASSS_MPU register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_MAINPLL_BYPASSS_MPU register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_MAINPLL_BYPASSS_MPU register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_MPU_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_BYPASSS_MPU field value from a register. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_BYPASSS_MPU register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : NOC Bypass - noc
 * 
 * If set, the NOC clock group will be bypassed to the input clock reference of the
 * Main PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_BYPASSS_NOC register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_NOC_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_BYPASSS_NOC register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_NOC_MSB        1
/* The width in bits of the ALT_CLKMGR_MAINPLL_BYPASSS_NOC register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_NOC_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_BYPASSS_NOC register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_NOC_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_MAINPLL_BYPASSS_NOC register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_NOC_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_MAINPLL_BYPASSS_NOC register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_NOC_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_BYPASSS_NOC field value from a register. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_NOC_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_MAINPLL_BYPASSS_NOC register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_NOC_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : S2F User0 Bypass - s2fuser0
 * 
 * If set, the s2f_user0_clk will be bypassed to the input clock reference of the
 * Main PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_BYPASSS_S2FUSER0 register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_S2FUSER0_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_BYPASSS_S2FUSER0 register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_S2FUSER0_MSB        2
/* The width in bits of the ALT_CLKMGR_MAINPLL_BYPASSS_S2FUSER0 register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_S2FUSER0_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_BYPASSS_S2FUSER0 register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_S2FUSER0_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_MAINPLL_BYPASSS_S2FUSER0 register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_S2FUSER0_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_MAINPLL_BYPASSS_S2FUSER0 register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_S2FUSER0_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_BYPASSS_S2FUSER0 field value from a register. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_S2FUSER0_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_MAINPLL_BYPASSS_S2FUSER0 register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_S2FUSER0_SET(value) (((value) << 2) & 0x00000004)

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
 * The struct declaration for register ALT_CLKMGR_MAINPLL_BYPASSS.
 */
struct ALT_CLKMGR_MAINPLL_BYPASSS_s
{
    volatile uint32_t  mpu      :  1;  /* MPU Bypass */
    volatile uint32_t  noc      :  1;  /* NOC Bypass */
    volatile uint32_t  s2fuser0 :  1;  /* S2F User0 Bypass */
    uint32_t                    : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_BYPASSS. */
typedef struct ALT_CLKMGR_MAINPLL_BYPASSS_s  ALT_CLKMGR_MAINPLL_BYPASSS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_BYPASSS register. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_RESET       0x0000003f
/* The byte offset of the ALT_CLKMGR_MAINPLL_BYPASSS register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_OFST        0x10

/*
 * Register : Bypass Reset Register - bypassr
 * 
 * Write One to Clear corresponding fields in Bypass Register.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description     
 * :-------|:-------|:------|:-----------------
 *  [0]    | RW     | 0x1   | MPU Bypass      
 *  [1]    | RW     | 0x1   | NOC Bypass      
 *  [2]    | RW     | 0x1   | S2F User0 Bypass
 *  [31:3] | ???    | 0x7   | *UNDEFINED*     
 * 
 */
/*
 * Field : MPU Bypass - mpu
 * 
 * If set, the MPU clock group will be bypassed to the input clock reference of the
 * Main PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_BYPASSR_MPU register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_MPU_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_BYPASSR_MPU register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_MPU_MSB        0
/* The width in bits of the ALT_CLKMGR_MAINPLL_BYPASSR_MPU register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_MPU_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_BYPASSR_MPU register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_MPU_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_MAINPLL_BYPASSR_MPU register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_MPU_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_MAINPLL_BYPASSR_MPU register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_MPU_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_BYPASSR_MPU field value from a register. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_MPU_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_BYPASSR_MPU register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_MPU_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : NOC Bypass - noc
 * 
 * If set, the NOC clock group will be bypassed to the input clock reference of the
 * Main PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_BYPASSR_NOC register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_NOC_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_BYPASSR_NOC register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_NOC_MSB        1
/* The width in bits of the ALT_CLKMGR_MAINPLL_BYPASSR_NOC register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_NOC_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_BYPASSR_NOC register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_NOC_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_MAINPLL_BYPASSR_NOC register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_NOC_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_MAINPLL_BYPASSR_NOC register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_NOC_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_BYPASSR_NOC field value from a register. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_NOC_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_MAINPLL_BYPASSR_NOC register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_NOC_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : S2F User0 Bypass - s2fuser0
 * 
 * If set, the s2f_user0_clk will be bypassed to the input clock reference of the
 * Main PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_BYPASSR_S2FUSER0 register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_S2FUSER0_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_BYPASSR_S2FUSER0 register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_S2FUSER0_MSB        2
/* The width in bits of the ALT_CLKMGR_MAINPLL_BYPASSR_S2FUSER0 register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_S2FUSER0_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_BYPASSR_S2FUSER0 register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_S2FUSER0_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_MAINPLL_BYPASSR_S2FUSER0 register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_S2FUSER0_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_MAINPLL_BYPASSR_S2FUSER0 register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_S2FUSER0_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_BYPASSR_S2FUSER0 field value from a register. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_S2FUSER0_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_MAINPLL_BYPASSR_S2FUSER0 register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_S2FUSER0_SET(value) (((value) << 2) & 0x00000004)

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
 * The struct declaration for register ALT_CLKMGR_MAINPLL_BYPASSR.
 */
struct ALT_CLKMGR_MAINPLL_BYPASSR_s
{
    volatile uint32_t  mpu      :  1;  /* MPU Bypass */
    volatile uint32_t  noc      :  1;  /* NOC Bypass */
    volatile uint32_t  s2fuser0 :  1;  /* S2F User0 Bypass */
    uint32_t                    : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_BYPASSR. */
typedef struct ALT_CLKMGR_MAINPLL_BYPASSR_s  ALT_CLKMGR_MAINPLL_BYPASSR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_BYPASSR register. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_RESET       0x0000003f
/* The byte offset of the ALT_CLKMGR_MAINPLL_BYPASSR register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_OFST        0x14

/*
 * Register : Main PLL Control Register for MPU Clock Group. - mpuclk
 * 
 * Contains settings that control clock mpu_clk generated from the Main PLL VCO
 * clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                  
 * :--------|:-------|:------|:------------------------------
 *  [10:0]  | RW     | 0x0   | Counter                      
 *  [15:11] | ???    | 0x0   | *UNDEFINED*                  
 *  [18:16] | RW     | 0x0   | ALT_CLKMGR_MAINPLL_MPUCLK_SRC
 *  [31:19] | ???    | 0x0   | *UNDEFINED*                  
 * 
 */
/*
 * Field : Counter - cnt
 * 
 * Divides the VCO/2 frequency by the value+1 in this field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_MPUCLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_MPUCLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_MPUCLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_MPUCLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_MAINPLL_MPUCLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_MPUCLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_MAINPLL_MPUCLK_CNT register field value. */
#define ALT_CLKMGR_MAINPLL_MPUCLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_MAINPLL_MPUCLK_CNT register field value. */
#define ALT_CLKMGR_MAINPLL_MPUCLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_MAINPLL_MPUCLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_MPUCLK_CNT_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_MPUCLK_CNT field value from a register. */
#define ALT_CLKMGR_MAINPLL_MPUCLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_MPUCLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_MPUCLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

/*
 * Field : src
 * 
 * Selects the source for the active 5:1 clock selection when the PLL is not
 * bypassed.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description
 * :---------------------------------------|:------|:------------
 *  ALT_CLKMGR_MAINPLL_MPUCLK_SRC_E_MAIN   | 0x0   |            
 *  ALT_CLKMGR_MAINPLL_MPUCLK_SRC_E_PERI   | 0x1   |            
 *  ALT_CLKMGR_MAINPLL_MPUCLK_SRC_E_OSC1   | 0x2   |            
 *  ALT_CLKMGR_MAINPLL_MPUCLK_SRC_E_INTOSC | 0x3   |            
 *  ALT_CLKMGR_MAINPLL_MPUCLK_SRC_E_FPGA   | 0x4   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_MPUCLK_SRC
 * 
 */
#define ALT_CLKMGR_MAINPLL_MPUCLK_SRC_E_MAIN    0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_MPUCLK_SRC
 * 
 */
#define ALT_CLKMGR_MAINPLL_MPUCLK_SRC_E_PERI    0x1
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_MPUCLK_SRC
 * 
 */
#define ALT_CLKMGR_MAINPLL_MPUCLK_SRC_E_OSC1    0x2
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_MPUCLK_SRC
 * 
 */
#define ALT_CLKMGR_MAINPLL_MPUCLK_SRC_E_INTOSC  0x3
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_MPUCLK_SRC
 * 
 */
#define ALT_CLKMGR_MAINPLL_MPUCLK_SRC_E_FPGA    0x4

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_MPUCLK_SRC register field. */
#define ALT_CLKMGR_MAINPLL_MPUCLK_SRC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_MPUCLK_SRC register field. */
#define ALT_CLKMGR_MAINPLL_MPUCLK_SRC_MSB        18
/* The width in bits of the ALT_CLKMGR_MAINPLL_MPUCLK_SRC register field. */
#define ALT_CLKMGR_MAINPLL_MPUCLK_SRC_WIDTH      3
/* The mask used to set the ALT_CLKMGR_MAINPLL_MPUCLK_SRC register field value. */
#define ALT_CLKMGR_MAINPLL_MPUCLK_SRC_SET_MSK    0x00070000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_MPUCLK_SRC register field value. */
#define ALT_CLKMGR_MAINPLL_MPUCLK_SRC_CLR_MSK    0xfff8ffff
/* The reset value of the ALT_CLKMGR_MAINPLL_MPUCLK_SRC register field. */
#define ALT_CLKMGR_MAINPLL_MPUCLK_SRC_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_MPUCLK_SRC field value from a register. */
#define ALT_CLKMGR_MAINPLL_MPUCLK_SRC_GET(value) (((value) & 0x00070000) >> 16)
/* Produces a ALT_CLKMGR_MAINPLL_MPUCLK_SRC register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_MPUCLK_SRC_SET(value) (((value) << 16) & 0x00070000)

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
 * The struct declaration for register ALT_CLKMGR_MAINPLL_MPUCLK.
 */
struct ALT_CLKMGR_MAINPLL_MPUCLK_s
{
    volatile uint32_t  cnt : 11;  /* Counter */
    uint32_t               :  5;  /* *UNDEFINED* */
    volatile uint32_t  src :  3;  /* ALT_CLKMGR_MAINPLL_MPUCLK_SRC */
    uint32_t               : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_MPUCLK. */
typedef struct ALT_CLKMGR_MAINPLL_MPUCLK_s  ALT_CLKMGR_MAINPLL_MPUCLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_MPUCLK register. */
#define ALT_CLKMGR_MAINPLL_MPUCLK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_MAINPLL_MPUCLK register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_MPUCLK_OFST        0x18

/*
 * Register : Main PLL Control Register for NOC Clock Group. - nocclk
 * 
 * Contains settings that control clock main_clk generated from the Main PLL VCO
 * clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                  
 * :--------|:-------|:------|:------------------------------
 *  [10:0]  | RW     | 0x0   | Counter                      
 *  [15:11] | ???    | 0x0   | *UNDEFINED*                  
 *  [18:16] | RW     | 0x0   | ALT_CLKMGR_MAINPLL_NOCCLK_SRC
 *  [31:19] | ???    | 0x0   | *UNDEFINED*                  
 * 
 */
/*
 * Field : Counter - cnt
 * 
 * Divides the VCO frequency by the value+1 in this field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_NOCCLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_NOCCLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_NOCCLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_NOCCLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_MAINPLL_NOCCLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_NOCCLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_MAINPLL_NOCCLK_CNT register field value. */
#define ALT_CLKMGR_MAINPLL_NOCCLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_MAINPLL_NOCCLK_CNT register field value. */
#define ALT_CLKMGR_MAINPLL_NOCCLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_MAINPLL_NOCCLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_NOCCLK_CNT_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_NOCCLK_CNT field value from a register. */
#define ALT_CLKMGR_MAINPLL_NOCCLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_NOCCLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_NOCCLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

/*
 * Field : src
 * 
 * Selects the source for the active 5:1 clock selection when the PLL is not
 * bypassed.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description
 * :---------------------------------------|:------|:------------
 *  ALT_CLKMGR_MAINPLL_NOCCLK_SRC_E_MAIN   | 0x0   |            
 *  ALT_CLKMGR_MAINPLL_NOCCLK_SRC_E_PERI   | 0x1   |            
 *  ALT_CLKMGR_MAINPLL_NOCCLK_SRC_E_OSC1   | 0x2   |            
 *  ALT_CLKMGR_MAINPLL_NOCCLK_SRC_E_INTOSC | 0x3   |            
 *  ALT_CLKMGR_MAINPLL_NOCCLK_SRC_E_FPGA   | 0x4   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCCLK_SRC
 * 
 */
#define ALT_CLKMGR_MAINPLL_NOCCLK_SRC_E_MAIN    0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCCLK_SRC
 * 
 */
#define ALT_CLKMGR_MAINPLL_NOCCLK_SRC_E_PERI    0x1
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCCLK_SRC
 * 
 */
#define ALT_CLKMGR_MAINPLL_NOCCLK_SRC_E_OSC1    0x2
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCCLK_SRC
 * 
 */
#define ALT_CLKMGR_MAINPLL_NOCCLK_SRC_E_INTOSC  0x3
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCCLK_SRC
 * 
 */
#define ALT_CLKMGR_MAINPLL_NOCCLK_SRC_E_FPGA    0x4

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_NOCCLK_SRC register field. */
#define ALT_CLKMGR_MAINPLL_NOCCLK_SRC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_NOCCLK_SRC register field. */
#define ALT_CLKMGR_MAINPLL_NOCCLK_SRC_MSB        18
/* The width in bits of the ALT_CLKMGR_MAINPLL_NOCCLK_SRC register field. */
#define ALT_CLKMGR_MAINPLL_NOCCLK_SRC_WIDTH      3
/* The mask used to set the ALT_CLKMGR_MAINPLL_NOCCLK_SRC register field value. */
#define ALT_CLKMGR_MAINPLL_NOCCLK_SRC_SET_MSK    0x00070000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_NOCCLK_SRC register field value. */
#define ALT_CLKMGR_MAINPLL_NOCCLK_SRC_CLR_MSK    0xfff8ffff
/* The reset value of the ALT_CLKMGR_MAINPLL_NOCCLK_SRC register field. */
#define ALT_CLKMGR_MAINPLL_NOCCLK_SRC_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_NOCCLK_SRC field value from a register. */
#define ALT_CLKMGR_MAINPLL_NOCCLK_SRC_GET(value) (((value) & 0x00070000) >> 16)
/* Produces a ALT_CLKMGR_MAINPLL_NOCCLK_SRC register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_NOCCLK_SRC_SET(value) (((value) << 16) & 0x00070000)

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
 * The struct declaration for register ALT_CLKMGR_MAINPLL_NOCCLK.
 */
struct ALT_CLKMGR_MAINPLL_NOCCLK_s
{
    volatile uint32_t  cnt : 11;  /* Counter */
    uint32_t               :  5;  /* *UNDEFINED* */
    volatile uint32_t  src :  3;  /* ALT_CLKMGR_MAINPLL_NOCCLK_SRC */
    uint32_t               : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_NOCCLK. */
typedef struct ALT_CLKMGR_MAINPLL_NOCCLK_s  ALT_CLKMGR_MAINPLL_NOCCLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_NOCCLK register. */
#define ALT_CLKMGR_MAINPLL_NOCCLK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_MAINPLL_NOCCLK register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_NOCCLK_OFST        0x1c

/*
 * Register : Main PLL Control Register for Counter 2 Clock - cntr2clk
 * 
 * Contains settings that control Couner 2 clock generated from the Main PLL VCO
 * clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description
 * :--------|:-------|:------|:------------
 *  [10:0]  | RW     | 0x1   | Counter    
 *  [31:11] | ???    | 0x0   | *UNDEFINED*
 * 
 */
/*
 * Field : Counter - cnt
 * 
 * Divides the VCO frequency by the value+1 in this field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_CNTR2CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR2CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_CNTR2CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR2CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_MAINPLL_CNTR2CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR2CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_MAINPLL_CNTR2CLK_CNT register field value. */
#define ALT_CLKMGR_MAINPLL_CNTR2CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_MAINPLL_CNTR2CLK_CNT register field value. */
#define ALT_CLKMGR_MAINPLL_CNTR2CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR2CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR2CLK_CNT_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_CNTR2CLK_CNT field value from a register. */
#define ALT_CLKMGR_MAINPLL_CNTR2CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_CNTR2CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_CNTR2CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

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
 * The struct declaration for register ALT_CLKMGR_MAINPLL_CNTR2CLK.
 */
struct ALT_CLKMGR_MAINPLL_CNTR2CLK_s
{
    volatile uint32_t  cnt : 11;  /* Counter */
    uint32_t               : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_CNTR2CLK. */
typedef struct ALT_CLKMGR_MAINPLL_CNTR2CLK_s  ALT_CLKMGR_MAINPLL_CNTR2CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR2CLK register. */
#define ALT_CLKMGR_MAINPLL_CNTR2CLK_RESET       0x00000001
/* The byte offset of the ALT_CLKMGR_MAINPLL_CNTR2CLK register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_CNTR2CLK_OFST        0x20

/*
 * Register : Main PLL Control Register for Counter 3 Clock - cntr3clk
 * 
 * Contains settings that control Couner 3 clock generated from the Main PLL VCO
 * clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description
 * :--------|:-------|:------|:------------
 *  [10:0]  | RW     | 0x1   | Counter    
 *  [31:11] | ???    | 0x0   | *UNDEFINED*
 * 
 */
/*
 * Field : Counter - cnt
 * 
 * Divides the VCO frequency by the value+1 in this field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_CNTR3CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR3CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_CNTR3CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR3CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_MAINPLL_CNTR3CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR3CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_MAINPLL_CNTR3CLK_CNT register field value. */
#define ALT_CLKMGR_MAINPLL_CNTR3CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_MAINPLL_CNTR3CLK_CNT register field value. */
#define ALT_CLKMGR_MAINPLL_CNTR3CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR3CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR3CLK_CNT_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_CNTR3CLK_CNT field value from a register. */
#define ALT_CLKMGR_MAINPLL_CNTR3CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_CNTR3CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_CNTR3CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

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
 * The struct declaration for register ALT_CLKMGR_MAINPLL_CNTR3CLK.
 */
struct ALT_CLKMGR_MAINPLL_CNTR3CLK_s
{
    volatile uint32_t  cnt : 11;  /* Counter */
    uint32_t               : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_CNTR3CLK. */
typedef struct ALT_CLKMGR_MAINPLL_CNTR3CLK_s  ALT_CLKMGR_MAINPLL_CNTR3CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR3CLK register. */
#define ALT_CLKMGR_MAINPLL_CNTR3CLK_RESET       0x00000001
/* The byte offset of the ALT_CLKMGR_MAINPLL_CNTR3CLK register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_CNTR3CLK_OFST        0x24

/*
 * Register : Main PLL Control Register for Counter 4 Clock - cntr4clk
 * 
 * Contains settings that control Couner 4 clock generated from the Main PLL VCO
 * clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description
 * :--------|:-------|:------|:------------
 *  [10:0]  | RW     | 0x3   | Counter    
 *  [31:11] | ???    | 0x0   | *UNDEFINED*
 * 
 */
/*
 * Field : Counter - cnt
 * 
 * Divides the VCO frequency by the value+1 in this field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_CNTR4CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR4CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_CNTR4CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR4CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_MAINPLL_CNTR4CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR4CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_MAINPLL_CNTR4CLK_CNT register field value. */
#define ALT_CLKMGR_MAINPLL_CNTR4CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_MAINPLL_CNTR4CLK_CNT register field value. */
#define ALT_CLKMGR_MAINPLL_CNTR4CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR4CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR4CLK_CNT_RESET      0x3
/* Extracts the ALT_CLKMGR_MAINPLL_CNTR4CLK_CNT field value from a register. */
#define ALT_CLKMGR_MAINPLL_CNTR4CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_CNTR4CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_CNTR4CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

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
 * The struct declaration for register ALT_CLKMGR_MAINPLL_CNTR4CLK.
 */
struct ALT_CLKMGR_MAINPLL_CNTR4CLK_s
{
    volatile uint32_t  cnt : 11;  /* Counter */
    uint32_t               : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_CNTR4CLK. */
typedef struct ALT_CLKMGR_MAINPLL_CNTR4CLK_s  ALT_CLKMGR_MAINPLL_CNTR4CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR4CLK register. */
#define ALT_CLKMGR_MAINPLL_CNTR4CLK_RESET       0x00000003
/* The byte offset of the ALT_CLKMGR_MAINPLL_CNTR4CLK register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_CNTR4CLK_OFST        0x28

/*
 * Register : Main PLL Control Register for Counter 5 Clock - cntr5clk
 * 
 * Contains settings that control Couner 5 clock generated from the Main PLL VCO
 * clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description
 * :--------|:-------|:------|:------------
 *  [10:0]  | RW     | 0x1   | Counter    
 *  [31:11] | ???    | 0x0   | *UNDEFINED*
 * 
 */
/*
 * Field : Counter - cnt
 * 
 * Divides the VCO frequency by the value+1 in this field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_CNTR5CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR5CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_CNTR5CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR5CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_MAINPLL_CNTR5CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR5CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_MAINPLL_CNTR5CLK_CNT register field value. */
#define ALT_CLKMGR_MAINPLL_CNTR5CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_MAINPLL_CNTR5CLK_CNT register field value. */
#define ALT_CLKMGR_MAINPLL_CNTR5CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR5CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR5CLK_CNT_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_CNTR5CLK_CNT field value from a register. */
#define ALT_CLKMGR_MAINPLL_CNTR5CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_CNTR5CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_CNTR5CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

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
 * The struct declaration for register ALT_CLKMGR_MAINPLL_CNTR5CLK.
 */
struct ALT_CLKMGR_MAINPLL_CNTR5CLK_s
{
    volatile uint32_t  cnt : 11;  /* Counter */
    uint32_t               : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_CNTR5CLK. */
typedef struct ALT_CLKMGR_MAINPLL_CNTR5CLK_s  ALT_CLKMGR_MAINPLL_CNTR5CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR5CLK register. */
#define ALT_CLKMGR_MAINPLL_CNTR5CLK_RESET       0x00000001
/* The byte offset of the ALT_CLKMGR_MAINPLL_CNTR5CLK register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_CNTR5CLK_OFST        0x2c

/*
 * Register : Main PLL Control Register for Counter 6 Clock - cntr6clk
 * 
 * Contains settings that control Couner 6 clock generated from the Main PLL VCO
 * clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description
 * :--------|:-------|:------|:------------
 *  [10:0]  | RW     | 0x1   | Counter    
 *  [31:11] | ???    | 0x0   | *UNDEFINED*
 * 
 */
/*
 * Field : Counter - cnt
 * 
 * Divides the VCO frequency by the value+1 in this field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_CNTR6CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR6CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_CNTR6CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR6CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_MAINPLL_CNTR6CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR6CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_MAINPLL_CNTR6CLK_CNT register field value. */
#define ALT_CLKMGR_MAINPLL_CNTR6CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_MAINPLL_CNTR6CLK_CNT register field value. */
#define ALT_CLKMGR_MAINPLL_CNTR6CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR6CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR6CLK_CNT_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_CNTR6CLK_CNT field value from a register. */
#define ALT_CLKMGR_MAINPLL_CNTR6CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_CNTR6CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_CNTR6CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

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
 * The struct declaration for register ALT_CLKMGR_MAINPLL_CNTR6CLK.
 */
struct ALT_CLKMGR_MAINPLL_CNTR6CLK_s
{
    volatile uint32_t  cnt : 11;  /* Counter */
    uint32_t               : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_CNTR6CLK. */
typedef struct ALT_CLKMGR_MAINPLL_CNTR6CLK_s  ALT_CLKMGR_MAINPLL_CNTR6CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR6CLK register. */
#define ALT_CLKMGR_MAINPLL_CNTR6CLK_RESET       0x00000001
/* The byte offset of the ALT_CLKMGR_MAINPLL_CNTR6CLK register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_CNTR6CLK_OFST        0x30

/*
 * Register : Main PLL Control Register for Counter 7 Clock - cntr7clk
 * 
 * Contains settings that control Couner 7 clock generated from the Main PLL VCO
 * clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                    
 * :--------|:-------|:------|:--------------------------------
 *  [10:0]  | RW     | 0x0   | Counter                        
 *  [15:11] | ???    | 0x0   | *UNDEFINED*                    
 *  [18:16] | RW     | 0x1   | ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC
 *  [31:19] | ???    | 0x0   | *UNDEFINED*                    
 * 
 */
/*
 * Field : Counter - cnt
 * 
 * Divides the VCO frequency by the value+1 in this field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_CNTR7CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_CNTR7CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_MAINPLL_CNTR7CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_MAINPLL_CNTR7CLK_CNT register field value. */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_MAINPLL_CNTR7CLK_CNT register field value. */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR7CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_CNT_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_CNTR7CLK_CNT field value from a register. */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_CNTR7CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

/*
 * Field : src
 * 
 * Selects the source for the active 5:1 clock selection when the PLL is not
 * bypassed.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description
 * :-----------------------------------------|:------|:------------
 *  ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC_E_MAIN   | 0x0   |            
 *  ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC_E_PERI   | 0x1   |            
 *  ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC_E_OSC1   | 0x2   |            
 *  ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC_E_INTOSC | 0x3   |            
 *  ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC_E_FPGA   | 0x4   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC
 * 
 */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC_E_MAIN      0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC
 * 
 */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC_E_PERI      0x1
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC
 * 
 */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC_E_OSC1      0x2
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC
 * 
 */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC_E_INTOSC    0x3
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC
 * 
 */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC_E_FPGA      0x4

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC register field. */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC register field. */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC_MSB        18
/* The width in bits of the ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC register field. */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC_WIDTH      3
/* The mask used to set the ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC register field value. */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC_SET_MSK    0x00070000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC register field value. */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC_CLR_MSK    0xfff8ffff
/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC register field. */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC field value from a register. */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC_GET(value) (((value) & 0x00070000) >> 16)
/* Produces a ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC_SET(value) (((value) << 16) & 0x00070000)

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
 * The struct declaration for register ALT_CLKMGR_MAINPLL_CNTR7CLK.
 */
struct ALT_CLKMGR_MAINPLL_CNTR7CLK_s
{
    volatile uint32_t  cnt : 11;  /* Counter */
    uint32_t               :  5;  /* *UNDEFINED* */
    volatile uint32_t  src :  3;  /* ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC */
    uint32_t               : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_CNTR7CLK. */
typedef struct ALT_CLKMGR_MAINPLL_CNTR7CLK_s  ALT_CLKMGR_MAINPLL_CNTR7CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR7CLK register. */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_RESET       0x00010000
/* The byte offset of the ALT_CLKMGR_MAINPLL_CNTR7CLK register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_OFST        0x34

/*
 * Register : Main PLL Control Register for Counter 8 Clock - cntr8clk
 * 
 * Contains settings that control Couner 8 clock generated from the Main PLL VCO
 * clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description
 * :--------|:-------|:------|:------------
 *  [10:0]  | RW     | 0x0   | Counter    
 *  [31:11] | ???    | 0x0   | *UNDEFINED*
 * 
 */
/*
 * Field : Counter - cnt
 * 
 * Divides the VCO frequency by the value+1 in this field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_CNTR8CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR8CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_CNTR8CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR8CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_MAINPLL_CNTR8CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR8CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_MAINPLL_CNTR8CLK_CNT register field value. */
#define ALT_CLKMGR_MAINPLL_CNTR8CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_MAINPLL_CNTR8CLK_CNT register field value. */
#define ALT_CLKMGR_MAINPLL_CNTR8CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR8CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR8CLK_CNT_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_CNTR8CLK_CNT field value from a register. */
#define ALT_CLKMGR_MAINPLL_CNTR8CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_CNTR8CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_CNTR8CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

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
 * The struct declaration for register ALT_CLKMGR_MAINPLL_CNTR8CLK.
 */
struct ALT_CLKMGR_MAINPLL_CNTR8CLK_s
{
    volatile uint32_t  cnt : 11;  /* Counter */
    uint32_t               : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_CNTR8CLK. */
typedef struct ALT_CLKMGR_MAINPLL_CNTR8CLK_s  ALT_CLKMGR_MAINPLL_CNTR8CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR8CLK register. */
#define ALT_CLKMGR_MAINPLL_CNTR8CLK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_MAINPLL_CNTR8CLK register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_CNTR8CLK_OFST        0x38

/*
 * Register : Main PLL Control Register for Counter 10 Clock - cntr9clk
 * 
 * Contains settings that control Couner 10 clock generated from the Main PLL VCO
 * clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description
 * :--------|:-------|:------|:------------
 *  [10:0]  | RW     | 0x0   | Counter    
 *  [31:11] | ???    | 0x0   | *UNDEFINED*
 * 
 */
/*
 * Field : Counter - cnt
 * 
 * Divides the VCO frequency by the value+1 in this field.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_CNTR9CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_CNTR9CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_MAINPLL_CNTR9CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_MAINPLL_CNTR9CLK_CNT register field value. */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_MAINPLL_CNTR9CLK_CNT register field value. */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR9CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_CNT_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_CNTR9CLK_CNT field value from a register. */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_CNTR9CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

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
 * The struct declaration for register ALT_CLKMGR_MAINPLL_CNTR9CLK.
 */
struct ALT_CLKMGR_MAINPLL_CNTR9CLK_s
{
    volatile uint32_t  cnt : 11;  /* Counter */
    uint32_t               : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_CNTR9CLK. */
typedef struct ALT_CLKMGR_MAINPLL_CNTR9CLK_s  ALT_CLKMGR_MAINPLL_CNTR9CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR9CLK register. */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_MAINPLL_CNTR9CLK register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_OFST        0x3c

/*
 * Register : NoC Divide Register - nocdiv
 * 
 * Contains fields that control clock dividers for NoC Clocks.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                            
 * :--------|:-------|:------|:----------------------------------------
 *  [1:0]   | RW     | 0x0   | L4 Main Clock Divider                  
 *  [7:2]   | ???    | 0x0   | *UNDEFINED*                            
 *  [9:8]   | RW     | 0x1   | L4 MP Clock Divider                    
 *  [15:10] | ???    | 0x0   | *UNDEFINED*                            
 *  [17:16] | RW     | 0x2   | L4 SP Clock Divider                    
 *  [23:18] | ???    | 0x0   | *UNDEFINED*                            
 *  [25:24] | RW     | 0x0   | CoreSight Trace Clock Divider          
 *  [27:26] | RW     | 0x2   | CoreSight Trace Interface Clock Divider
 *  [28]    | RW     | 0x1   | CoreSight Debug Clock Divider          
 *  [31:29] | ???    | 0x0   | *UNDEFINED*                            
 * 
 */
/*
 * Field : L4 Main Clock Divider - l4mainclk
 * 
 * The external l4_main_clk divider is specified in this field.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description
 * :-------------------------------------------|:------|:------------
 *  ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK_E_DIV1 | 0x0   | Divide By 1
 *  ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK_E_DIV2 | 0x1   | Divide By 2
 *  ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK_E_DIV4 | 0x2   | Divide By 4
 *  ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK_E_DIV8 | 0x3   | Divide By 8
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK
 * 
 * Divide By 1
 */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK_E_DIV1  0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK
 * 
 * Divide By 2
 */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK_E_DIV2  0x1
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK
 * 
 * Divide By 4
 */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK_E_DIV4  0x2
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK
 * 
 * Divide By 8
 */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK_E_DIV8  0x3

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK register field. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK register field. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK_MSB        1
/* The width in bits of the ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK register field. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK_WIDTH      2
/* The mask used to set the ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK register field value. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK_SET_MSK    0x00000003
/* The mask used to clear the ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK register field value. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK_CLR_MSK    0xfffffffc
/* The reset value of the ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK register field. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK field value from a register. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : L4 MP Clock Divider - l4mpclk
 * 
 * The external l4_mp_clk divider is specified in this field.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description
 * :-----------------------------------------|:------|:------------
 *  ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK_E_DIV1 | 0x0   | Divide By 1
 *  ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK_E_DIV2 | 0x1   | Divide By 2
 *  ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK_E_DIV4 | 0x2   | Divide By 4
 *  ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK_E_DIV8 | 0x3   | Divide By 8
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK
 * 
 * Divide By 1
 */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK_E_DIV1    0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK
 * 
 * Divide By 2
 */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK_E_DIV2    0x1
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK
 * 
 * Divide By 4
 */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK_E_DIV4    0x2
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK
 * 
 * Divide By 8
 */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK_E_DIV8    0x3

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK register field. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK register field. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK_MSB        9
/* The width in bits of the ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK register field. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK_WIDTH      2
/* The mask used to set the ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK register field value. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK_SET_MSK    0x00000300
/* The mask used to clear the ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK register field value. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK_CLR_MSK    0xfffffcff
/* The reset value of the ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK register field. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK field value from a register. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK_GET(value) (((value) & 0x00000300) >> 8)
/* Produces a ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK_SET(value) (((value) << 8) & 0x00000300)

/*
 * Field : L4 SP Clock Divider - l4spclk
 * 
 * The external l4_sp_clk divider is specified in this field.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description
 * :-----------------------------------------|:------|:------------
 *  ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK_E_DIV1 | 0x0   | Divide By 1
 *  ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK_E_DIV2 | 0x1   | Divide By 2
 *  ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK_E_DIV4 | 0x2   | Divide By 4
 *  ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK_E_DIV8 | 0x3   | Divide By 8
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK
 * 
 * Divide By 1
 */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK_E_DIV1    0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK
 * 
 * Divide By 2
 */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK_E_DIV2    0x1
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK
 * 
 * Divide By 4
 */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK_E_DIV4    0x2
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK
 * 
 * Divide By 8
 */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK_E_DIV8    0x3

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK register field. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK register field. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK_MSB        17
/* The width in bits of the ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK register field. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK_WIDTH      2
/* The mask used to set the ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK register field value. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK_SET_MSK    0x00030000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK register field value. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK_CLR_MSK    0xfffcffff
/* The reset value of the ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK register field. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK_RESET      0x2
/* Extracts the ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK field value from a register. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK_GET(value) (((value) & 0x00030000) >> 16)
/* Produces a ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK_SET(value) (((value) << 16) & 0x00030000)

/*
 * Field : CoreSight Trace Clock Divider - csatclk
 * 
 * The external cs_at_clk divider is specified in this field.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description
 * :-----------------------------------------|:------|:------------
 *  ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK_E_DIV1 | 0x0   | Divide By 1
 *  ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK_E_DIV2 | 0x1   | Divide By 2
 *  ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK_E_DIV4 | 0x2   | Divide By 4
 *  ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK_E_DIV8 | 0x3   | Divide By 8
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK
 * 
 * Divide By 1
 */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK_E_DIV1    0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK
 * 
 * Divide By 2
 */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK_E_DIV2    0x1
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK
 * 
 * Divide By 4
 */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK_E_DIV4    0x2
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK
 * 
 * Divide By 8
 */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK_E_DIV8    0x3

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK register field. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK register field. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK_MSB        25
/* The width in bits of the ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK register field. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK_WIDTH      2
/* The mask used to set the ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK register field value. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK_SET_MSK    0x03000000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK register field value. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK_CLR_MSK    0xfcffffff
/* The reset value of the ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK register field. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK field value from a register. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK_GET(value) (((value) & 0x03000000) >> 24)
/* Produces a ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK_SET(value) (((value) << 24) & 0x03000000)

/*
 * Field : CoreSight Trace Interface Clock Divider - cstraceclk
 * 
 * The external cs_trace_clk divider is specified in this field.  The cs_trace_clk
 * is used by the actual trace interface to the debugger.  This divider is cascaded
 * after the cs_at_clk external divider.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                        | Value | Description
 * :--------------------------------------------|:------|:------------
 *  ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK_E_DIV1 | 0x0   | Divide By 1
 *  ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK_E_DIV2 | 0x1   | Divide By 2
 *  ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK_E_DIV4 | 0x2   | Divide By 4
 *  ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK_E_DIV8 | 0x3   | Divide By 8
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK
 * 
 * Divide By 1
 */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK_E_DIV1 0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK
 * 
 * Divide By 2
 */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK_E_DIV2 0x1
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK
 * 
 * Divide By 4
 */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK_E_DIV4 0x2
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK
 * 
 * Divide By 8
 */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK_E_DIV8 0x3

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK register field. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK register field. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK_MSB        27
/* The width in bits of the ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK register field. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK_WIDTH      2
/* The mask used to set the ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK register field value. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK_SET_MSK    0x0c000000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK register field value. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK_CLR_MSK    0xf3ffffff
/* The reset value of the ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK register field. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK_RESET      0x2
/* Extracts the ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK field value from a register. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK_GET(value) (((value) & 0x0c000000) >> 26)
/* Produces a ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK_SET(value) (((value) << 26) & 0x0c000000)

/*
 * Field : CoreSight Debug Clock Divider - cspdbgclk
 * 
 * The external cs_pdbg_clk divider is specified in this field.  This divider is
 * cascaded after the cs_at_clk external divider.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description
 * :-------------------------------------------|:------|:------------
 *  ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK_E_DIV1 | 0x0   | Divide By 1
 *  ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK_E_DIV4 | 0x1   | Divide By 4
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK
 * 
 * Divide By 1
 */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK_E_DIV1  0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK
 * 
 * Divide By 4
 */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK_E_DIV4  0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK register field. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK register field. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK_MSB        28
/* The width in bits of the ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK register field. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK register field value. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK_SET_MSK    0x10000000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK register field value. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK_CLR_MSK    0xefffffff
/* The reset value of the ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK register field. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK field value from a register. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK_SET(value) (((value) << 28) & 0x10000000)

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
 * The struct declaration for register ALT_CLKMGR_MAINPLL_NOCDIV.
 */
struct ALT_CLKMGR_MAINPLL_NOCDIV_s
{
    volatile uint32_t  l4mainclk  :  2;  /* L4 Main Clock Divider */
    uint32_t                      :  6;  /* *UNDEFINED* */
    volatile uint32_t  l4mpclk    :  2;  /* L4 MP Clock Divider */
    uint32_t                      :  6;  /* *UNDEFINED* */
    volatile uint32_t  l4spclk    :  2;  /* L4 SP Clock Divider */
    uint32_t                      :  6;  /* *UNDEFINED* */
    volatile uint32_t  csatclk    :  2;  /* CoreSight Trace Clock Divider */
    volatile uint32_t  cstraceclk :  2;  /* CoreSight Trace Interface Clock Divider */
    volatile uint32_t  cspdbgclk  :  1;  /* CoreSight Debug Clock Divider */
    uint32_t                      :  3;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_NOCDIV. */
typedef struct ALT_CLKMGR_MAINPLL_NOCDIV_s  ALT_CLKMGR_MAINPLL_NOCDIV_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_NOCDIV register. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_RESET       0x18020100
/* The byte offset of the ALT_CLKMGR_MAINPLL_NOCDIV register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_OFST        0x40

/*
 * Register : pllglob
 * 
 * This refects register settings for both the channels of the main PLL
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                         
 * :--------|:-------|:------|:-------------------------------------
 *  [0]     | RW     | 0x0   | main PLL power down                 
 *  [1]     | RW     | 0x0   | main PLL reset                      
 *  [2]     | RW     | 0x0   | main PLL mute                       
 *  [3]     | RW     | 0x0   | Int mode sel                        
 *  [4]     | RW     | 0x0   | Bypass clock source select control  
 *  [7:5]   | ???    | 0x0   | *UNDEFINED*                         
 *  [13:8]  | RW     | 0x1   | ALT_CLKMGR_MAINPLL_PLLGLOB_REFCLKDIV
 *  [15:14] | ???    | 0x0   | *UNDEFINED*                         
 *  [17:16] | RW     | 0x0   | Clock Source                        
 *  [31:18] | ???    | 0x0   | *UNDEFINED*                         
 * 
 */
/*
 * Field : main PLL power down - pd
 * 
 * Pll Disable/Power-Down Control. This is an active low signal
 * 
 * 1: Pll Analog circuits are Enabled;
 * 
 * 0: Pll is Disabled.
 * 
 * By default the signal is asserted. Software should come and write '1' in this
 * reg to bring up the PLL
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description
 * :------------------------------------------|:------|:------------
 *  ALT_CLKMGR_MAINPLL_PLLGLOB_PD_E_POWERDOWN | 0x0   |            
 *  ALT_CLKMGR_MAINPLL_PLLGLOB_PD_E_POWERUP   | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLGLOB_PD
 * 
 */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_PD_E_POWERDOWN   0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLGLOB_PD
 * 
 */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_PD_E_POWERUP     0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_PLLGLOB_PD register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_PD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_PLLGLOB_PD register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_PD_MSB        0
/* The width in bits of the ALT_CLKMGR_MAINPLL_PLLGLOB_PD register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_PD_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_PLLGLOB_PD register field value. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_PD_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_MAINPLL_PLLGLOB_PD register field value. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_PD_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_MAINPLL_PLLGLOB_PD register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_PD_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_PLLGLOB_PD field value from a register. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_PD_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_PLLGLOB_PD register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_PD_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : main PLL reset - rst
 * 
 * Pll Reset. Used to power down and initialize the synthesizer. Must be asserted
 * when power supply pins are applied.
 * 
 * 1- Hard Reset Is De-Asserted;
 * 
 * 0-Hard Reset Is Asserted.
 * 
 * This is an active low signal.
 * 
 * By default the signal is asserted. Software should come and write '1' in this
 * reg to bring up the PLL
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_PLLGLOB_RST register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_RST_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_PLLGLOB_RST register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_RST_MSB        1
/* The width in bits of the ALT_CLKMGR_MAINPLL_PLLGLOB_RST register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_RST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_PLLGLOB_RST register field value. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_RST_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_MAINPLL_PLLGLOB_RST register field value. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_RST_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_MAINPLL_PLLGLOB_RST register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_RST_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_PLLGLOB_RST field value from a register. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_RST_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_MAINPLL_PLLGLOB_RST register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_RST_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : main PLL mute - mute
 * 
 * Mutes All Pll Outputs Glitch-Free:
 * 
 * 1 - Output Clocks Are Muted To 1'B0;
 * 
 * 0 - Output Clocks Are Active
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description
 * :-----------------------------------------|:------|:------------
 *  ALT_CLKMGR_MAINPLL_PLLGLOB_MUTE_E_UNMUTE | 0x0   |            
 *  ALT_CLKMGR_MAINPLL_PLLGLOB_MUTE_E_MUTE   | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLGLOB_MUTE
 * 
 */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_MUTE_E_UNMUTE    0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLGLOB_MUTE
 * 
 */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_MUTE_E_MUTE      0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_PLLGLOB_MUTE register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_MUTE_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_PLLGLOB_MUTE register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_MUTE_MSB        2
/* The width in bits of the ALT_CLKMGR_MAINPLL_PLLGLOB_MUTE register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_MUTE_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_PLLGLOB_MUTE register field value. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_MUTE_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_MAINPLL_PLLGLOB_MUTE register field value. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_MUTE_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_MAINPLL_PLLGLOB_MUTE register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_MUTE_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_PLLGLOB_MUTE field value from a register. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_MUTE_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_MAINPLL_PLLGLOB_MUTE register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_MUTE_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : Int mode sel - modsel
 * 
 * terger mode, feedback divident to PLL is considered integer. It can be only set
 * while the PLL is at reset or power down state. It cannot be switched
 * dynamically.
 * 
 * Select: 1'B1 - Fractional Mode
 * 
 * 1'B0 - Integer Mode;
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description
 * :------------------------------------------|:------|:------------
 *  ALT_CLKMGR_MAINPLL_PLLGLOB_MODSEL_E_INT   | 0x0   |            
 *  ALT_CLKMGR_MAINPLL_PLLGLOB_MODSEL_E_FLOAT | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLGLOB_MODSEL
 * 
 */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_MODSEL_E_INT     0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLGLOB_MODSEL
 * 
 */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_MODSEL_E_FLOAT   0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_PLLGLOB_MODSEL register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_MODSEL_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_PLLGLOB_MODSEL register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_MODSEL_MSB        3
/* The width in bits of the ALT_CLKMGR_MAINPLL_PLLGLOB_MODSEL register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_MODSEL_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_PLLGLOB_MODSEL register field value. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_MODSEL_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_MAINPLL_PLLGLOB_MODSEL register field value. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_MODSEL_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_MAINPLL_PLLGLOB_MODSEL register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_MODSEL_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_PLLGLOB_MODSEL field value from a register. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_MODSEL_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_MAINPLL_PLLGLOB_MODSEL register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_MODSEL_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : Bypass clock source select control - bysctl
 * 
 * This bit is resposible for selecting source for bypass clock in PLL bypass mode.
 * In the current version of the PLL. this feature is not supported.
 * 
 * Therefore it can be '0' or '1'. The value does not matter at all.
 * 
 * Making it '0' by defaut
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_PLLGLOB_BYSCTL register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_BYSCTL_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_PLLGLOB_BYSCTL register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_BYSCTL_MSB        4
/* The width in bits of the ALT_CLKMGR_MAINPLL_PLLGLOB_BYSCTL register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_BYSCTL_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_PLLGLOB_BYSCTL register field value. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_BYSCTL_SET_MSK    0x00000010
/* The mask used to clear the ALT_CLKMGR_MAINPLL_PLLGLOB_BYSCTL register field value. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_BYSCTL_CLR_MSK    0xffffffef
/* The reset value of the ALT_CLKMGR_MAINPLL_PLLGLOB_BYSCTL register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_BYSCTL_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_PLLGLOB_BYSCTL field value from a register. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_BYSCTL_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_CLKMGR_MAINPLL_PLLGLOB_BYSCTL register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_BYSCTL_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : refclkdiv
 * 
 * Reference Clock Divider Control Registers;
 * 
 * Fref_eff    = (Fref)/(refdiv[5:0])
 * 
 * Frq_mul = {(6+ mdiv[7:0]* (fdiv[23:0]/ (2^24)))}
 * 
 * Fsyn = Frq_mul * Fref_eff
 * 
 * (Fsyn /6) >= 3* Fref_eff
 * 
 * Fock_vpll_pr1   =    Fsyn /(pr1[7:0])
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_PLLGLOB_REFCLKDIV register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_REFCLKDIV_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_PLLGLOB_REFCLKDIV register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_REFCLKDIV_MSB        13
/* The width in bits of the ALT_CLKMGR_MAINPLL_PLLGLOB_REFCLKDIV register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_REFCLKDIV_WIDTH      6
/* The mask used to set the ALT_CLKMGR_MAINPLL_PLLGLOB_REFCLKDIV register field value. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_REFCLKDIV_SET_MSK    0x00003f00
/* The mask used to clear the ALT_CLKMGR_MAINPLL_PLLGLOB_REFCLKDIV register field value. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_REFCLKDIV_CLR_MSK    0xffffc0ff
/* The reset value of the ALT_CLKMGR_MAINPLL_PLLGLOB_REFCLKDIV register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_REFCLKDIV_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_PLLGLOB_REFCLKDIV field value from a register. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_REFCLKDIV_GET(value) (((value) & 0x00003f00) >> 8)
/* Produces a ALT_CLKMGR_MAINPLL_PLLGLOB_REFCLKDIV register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_REFCLKDIV_SET(value) (((value) << 8) & 0x00003f00)

/*
 * Field : Clock Source - psrc
 * 
 * Controls the VCO input clock source.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description  
 * :-----------------------------------------|:------|:--------------
 *  ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC_E_EOSC1  | 0x0   | eosc1_clk    
 *  ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC_E_INTOSC | 0x1   | cb_intosc_clk
 *  ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC_E_F2S    | 0x2   | f2s_free_clk 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC
 * 
 * eosc1_clk
 */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC_E_EOSC1     0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC
 * 
 * cb_intosc_clk
 */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC_E_INTOSC    0x1
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC
 * 
 * f2s_free_clk
 */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC_E_F2S       0x2

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC_MSB        17
/* The width in bits of the ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC_WIDTH      2
/* The mask used to set the ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC register field value. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC_SET_MSK    0x00030000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC register field value. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC_CLR_MSK    0xfffcffff
/* The reset value of the ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC register field. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC field value from a register. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC_GET(value) (((value) & 0x00030000) >> 16)
/* Produces a ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC_SET(value) (((value) << 16) & 0x00030000)

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
 * The struct declaration for register ALT_CLKMGR_MAINPLL_PLLGLOB.
 */
struct ALT_CLKMGR_MAINPLL_PLLGLOB_s
{
    volatile uint32_t  pd        :  1;  /* main PLL power down */
    volatile uint32_t  rst       :  1;  /* main PLL reset */
    volatile uint32_t  mute      :  1;  /* main PLL mute */
    volatile uint32_t  modsel    :  1;  /* Int mode sel */
    volatile uint32_t  bysctl    :  1;  /* Bypass clock source select control */
    uint32_t                     :  3;  /* *UNDEFINED* */
    volatile uint32_t  refclkdiv :  6;  /* ALT_CLKMGR_MAINPLL_PLLGLOB_REFCLKDIV */
    uint32_t                     :  2;  /* *UNDEFINED* */
    volatile uint32_t  psrc      :  2;  /* Clock Source */
    uint32_t                     : 14;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_PLLGLOB. */
typedef struct ALT_CLKMGR_MAINPLL_PLLGLOB_s  ALT_CLKMGR_MAINPLL_PLLGLOB_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_PLLGLOB register. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_RESET       0x00000100
/* The byte offset of the ALT_CLKMGR_MAINPLL_PLLGLOB register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_PLLGLOB_OFST        0x44

/*
 * Register : fdbck
 * 
 * VCO freq register counters
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                  
 * :--------|:-------|:------|:------------------------------
 *  [23:0]  | RW     | 0x0   | ALT_CLKMGR_MAINPLL_FDBCK_FDIV
 *  [31:24] | RW     | 0x2a  | ALT_CLKMGR_MAINPLL_FDBCK_MDIV
 * 
 */
/*
 * Field : fdiv
 * 
 * Fractional Synthesizer Center Frequency Control Word. The PLL Initially Operates
 * At The Frequency Based On The Mdiv Value Set At Reset. After Pll Exits Reset,
 * Any Change In Mdiv Value At The Interface Is Stored Internally.
 * 
 * Fref_eff    = (Fref)/(refdiv[5:0])
 * 
 * Frq_mul = {(6+ mdiv[7:0]* (fdiv[23:0]/ (2^24)))}
 * 
 * Fsyn = Frq_mul * Fref_eff
 * 
 * (Fsyn /6) >= 3* Fref_eff
 * 
 * Fock_vpll_pr1   =    Fsyn /(pr1[7:0])
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_FDBCK_FDIV register field. */
#define ALT_CLKMGR_MAINPLL_FDBCK_FDIV_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_FDBCK_FDIV register field. */
#define ALT_CLKMGR_MAINPLL_FDBCK_FDIV_MSB        23
/* The width in bits of the ALT_CLKMGR_MAINPLL_FDBCK_FDIV register field. */
#define ALT_CLKMGR_MAINPLL_FDBCK_FDIV_WIDTH      24
/* The mask used to set the ALT_CLKMGR_MAINPLL_FDBCK_FDIV register field value. */
#define ALT_CLKMGR_MAINPLL_FDBCK_FDIV_SET_MSK    0x00ffffff
/* The mask used to clear the ALT_CLKMGR_MAINPLL_FDBCK_FDIV register field value. */
#define ALT_CLKMGR_MAINPLL_FDBCK_FDIV_CLR_MSK    0xff000000
/* The reset value of the ALT_CLKMGR_MAINPLL_FDBCK_FDIV register field. */
#define ALT_CLKMGR_MAINPLL_FDBCK_FDIV_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_FDBCK_FDIV field value from a register. */
#define ALT_CLKMGR_MAINPLL_FDBCK_FDIV_GET(value) (((value) & 0x00ffffff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_FDBCK_FDIV register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_FDBCK_FDIV_SET(value) (((value) << 0) & 0x00ffffff)

/*
 * Field : mdiv
 * 
 * Feedback Clock Divider. The Pll Initially Operates At The Frequency Based On The
 * Mdiv And Fdiv Values Set At Reset. After Pll Exits Reset, Any Change In Mdiv Or
 * Fdiv Values At The Interface Are Stored Internally. ictl_vpll_mdiv_a_[7:0] =
 * (Fvco /( Fref / ictl_vpll_refdiv_nt_[5:0])) - 6.
 * 
 * Fref_eff    = (Fref)/(refdiv[5:0])
 * 
 * Frq_mul = {(6+ mdiv[7:0]* (fdiv[23:0]/ (2^24)))}
 * 
 * Fsyn = Frq_mul * Fref_eff
 * 
 * (Fsyn /6) >= 3* Fref_eff
 * 
 * Fock_vpll_pr1   =    Fsyn /(pr1[7:0])
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_FDBCK_MDIV register field. */
#define ALT_CLKMGR_MAINPLL_FDBCK_MDIV_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_FDBCK_MDIV register field. */
#define ALT_CLKMGR_MAINPLL_FDBCK_MDIV_MSB        31
/* The width in bits of the ALT_CLKMGR_MAINPLL_FDBCK_MDIV register field. */
#define ALT_CLKMGR_MAINPLL_FDBCK_MDIV_WIDTH      8
/* The mask used to set the ALT_CLKMGR_MAINPLL_FDBCK_MDIV register field value. */
#define ALT_CLKMGR_MAINPLL_FDBCK_MDIV_SET_MSK    0xff000000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_FDBCK_MDIV register field value. */
#define ALT_CLKMGR_MAINPLL_FDBCK_MDIV_CLR_MSK    0x00ffffff
/* The reset value of the ALT_CLKMGR_MAINPLL_FDBCK_MDIV register field. */
#define ALT_CLKMGR_MAINPLL_FDBCK_MDIV_RESET      0x2a
/* Extracts the ALT_CLKMGR_MAINPLL_FDBCK_MDIV field value from a register. */
#define ALT_CLKMGR_MAINPLL_FDBCK_MDIV_GET(value) (((value) & 0xff000000) >> 24)
/* Produces a ALT_CLKMGR_MAINPLL_FDBCK_MDIV register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_FDBCK_MDIV_SET(value) (((value) << 24) & 0xff000000)

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
 * The struct declaration for register ALT_CLKMGR_MAINPLL_FDBCK.
 */
struct ALT_CLKMGR_MAINPLL_FDBCK_s
{
    volatile uint32_t  fdiv : 24;  /* ALT_CLKMGR_MAINPLL_FDBCK_FDIV */
    volatile uint32_t  mdiv :  8;  /* ALT_CLKMGR_MAINPLL_FDBCK_MDIV */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_FDBCK. */
typedef struct ALT_CLKMGR_MAINPLL_FDBCK_s  ALT_CLKMGR_MAINPLL_FDBCK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_FDBCK register. */
#define ALT_CLKMGR_MAINPLL_FDBCK_RESET       0x2a000000
/* The byte offset of the ALT_CLKMGR_MAINPLL_FDBCK register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_FDBCK_OFST        0x48

/*
 * Register : mem
 * 
 * Registers dealing with PLL internal memory access.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                
 * :--------|:-------|:------|:----------------------------
 *  [9:0]   | RW     | 0x0   | ALT_CLKMGR_MAINPLL_MEM_ADDR
 *  [15:10] | ???    | 0x0   | *UNDEFINED*                
 *  [23:16] | RW     | 0x0   | ALT_CLKMGR_MAINPLL_MEM_WDAT
 *  [24]    | RW     | 0x0   | ALT_CLKMGR_MAINPLL_MEM_REQ 
 *  [25]    | RW     | 0x0   | ALT_CLKMGR_MAINPLL_MEM_WR  
 *  [31:26] | ???    | 0x0   | *UNDEFINED*                
 * 
 */
/*
 * Field : addr
 * 
 * PLL Memory Addressing
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_MEM_ADDR register field. */
#define ALT_CLKMGR_MAINPLL_MEM_ADDR_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_MEM_ADDR register field. */
#define ALT_CLKMGR_MAINPLL_MEM_ADDR_MSB        9
/* The width in bits of the ALT_CLKMGR_MAINPLL_MEM_ADDR register field. */
#define ALT_CLKMGR_MAINPLL_MEM_ADDR_WIDTH      10
/* The mask used to set the ALT_CLKMGR_MAINPLL_MEM_ADDR register field value. */
#define ALT_CLKMGR_MAINPLL_MEM_ADDR_SET_MSK    0x000003ff
/* The mask used to clear the ALT_CLKMGR_MAINPLL_MEM_ADDR register field value. */
#define ALT_CLKMGR_MAINPLL_MEM_ADDR_CLR_MSK    0xfffffc00
/* The reset value of the ALT_CLKMGR_MAINPLL_MEM_ADDR register field. */
#define ALT_CLKMGR_MAINPLL_MEM_ADDR_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_MEM_ADDR field value from a register. */
#define ALT_CLKMGR_MAINPLL_MEM_ADDR_GET(value) (((value) & 0x000003ff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_MEM_ADDR register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_MEM_ADDR_SET(value) (((value) << 0) & 0x000003ff)

/*
 * Field : wdat
 * 
 * Memory Write Data
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_MEM_WDAT register field. */
#define ALT_CLKMGR_MAINPLL_MEM_WDAT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_MEM_WDAT register field. */
#define ALT_CLKMGR_MAINPLL_MEM_WDAT_MSB        23
/* The width in bits of the ALT_CLKMGR_MAINPLL_MEM_WDAT register field. */
#define ALT_CLKMGR_MAINPLL_MEM_WDAT_WIDTH      8
/* The mask used to set the ALT_CLKMGR_MAINPLL_MEM_WDAT register field value. */
#define ALT_CLKMGR_MAINPLL_MEM_WDAT_SET_MSK    0x00ff0000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_MEM_WDAT register field value. */
#define ALT_CLKMGR_MAINPLL_MEM_WDAT_CLR_MSK    0xff00ffff
/* The reset value of the ALT_CLKMGR_MAINPLL_MEM_WDAT register field. */
#define ALT_CLKMGR_MAINPLL_MEM_WDAT_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_MEM_WDAT field value from a register. */
#define ALT_CLKMGR_MAINPLL_MEM_WDAT_GET(value) (((value) & 0x00ff0000) >> 16)
/* Produces a ALT_CLKMGR_MAINPLL_MEM_WDAT register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_MEM_WDAT_SET(value) (((value) << 16) & 0x00ff0000)

/*
 * Field : req
 * 
 * Memory Request Signal
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_MEM_REQ register field. */
#define ALT_CLKMGR_MAINPLL_MEM_REQ_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_MEM_REQ register field. */
#define ALT_CLKMGR_MAINPLL_MEM_REQ_MSB        24
/* The width in bits of the ALT_CLKMGR_MAINPLL_MEM_REQ register field. */
#define ALT_CLKMGR_MAINPLL_MEM_REQ_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_MEM_REQ register field value. */
#define ALT_CLKMGR_MAINPLL_MEM_REQ_SET_MSK    0x01000000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_MEM_REQ register field value. */
#define ALT_CLKMGR_MAINPLL_MEM_REQ_CLR_MSK    0xfeffffff
/* The reset value of the ALT_CLKMGR_MAINPLL_MEM_REQ register field. */
#define ALT_CLKMGR_MAINPLL_MEM_REQ_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_MEM_REQ field value from a register. */
#define ALT_CLKMGR_MAINPLL_MEM_REQ_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_CLKMGR_MAINPLL_MEM_REQ register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_MEM_REQ_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : wr
 * 
 * Memory Read/Write Signal. 0 - Indicates A Read Transaction. 1 - Indicates A
 * Write Transaction
 * 
 * Field Enumeration Values:
 * 
 *  Enum                              | Value | Description
 * :----------------------------------|:------|:------------
 *  ALT_CLKMGR_MAINPLL_MEM_WR_E_READ  | 0x0   |            
 *  ALT_CLKMGR_MAINPLL_MEM_WR_E_WRITE | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_MEM_WR
 * 
 */
#define ALT_CLKMGR_MAINPLL_MEM_WR_E_READ    0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_MEM_WR
 * 
 */
#define ALT_CLKMGR_MAINPLL_MEM_WR_E_WRITE   0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_MEM_WR register field. */
#define ALT_CLKMGR_MAINPLL_MEM_WR_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_MEM_WR register field. */
#define ALT_CLKMGR_MAINPLL_MEM_WR_MSB        25
/* The width in bits of the ALT_CLKMGR_MAINPLL_MEM_WR register field. */
#define ALT_CLKMGR_MAINPLL_MEM_WR_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_MEM_WR register field value. */
#define ALT_CLKMGR_MAINPLL_MEM_WR_SET_MSK    0x02000000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_MEM_WR register field value. */
#define ALT_CLKMGR_MAINPLL_MEM_WR_CLR_MSK    0xfdffffff
/* The reset value of the ALT_CLKMGR_MAINPLL_MEM_WR register field. */
#define ALT_CLKMGR_MAINPLL_MEM_WR_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_MEM_WR field value from a register. */
#define ALT_CLKMGR_MAINPLL_MEM_WR_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_CLKMGR_MAINPLL_MEM_WR register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_MEM_WR_SET(value) (((value) << 25) & 0x02000000)

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
 * The struct declaration for register ALT_CLKMGR_MAINPLL_MEM.
 */
struct ALT_CLKMGR_MAINPLL_MEM_s
{
    volatile uint32_t  addr : 10;  /* ALT_CLKMGR_MAINPLL_MEM_ADDR */
    uint32_t                :  6;  /* *UNDEFINED* */
    volatile uint32_t  wdat :  8;  /* ALT_CLKMGR_MAINPLL_MEM_WDAT */
    volatile uint32_t  req  :  1;  /* ALT_CLKMGR_MAINPLL_MEM_REQ */
    volatile uint32_t  wr   :  1;  /* ALT_CLKMGR_MAINPLL_MEM_WR */
    uint32_t                :  6;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_MEM. */
typedef struct ALT_CLKMGR_MAINPLL_MEM_s  ALT_CLKMGR_MAINPLL_MEM_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_MEM register. */
#define ALT_CLKMGR_MAINPLL_MEM_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_MAINPLL_MEM register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_MEM_OFST        0x4c

/*
 * Register : memstat
 * 
 * Periph PLL memstatus register. contains ack and memory read data
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                     
 * :-------|:-------|:------|:---------------------------------
 *  [7:0]  | R      | 0x0   | ALT_CLKMGR_MAINPLL_MEMSTAT_RDATA
 *  [31:8] | ???    | 0x0   | *UNDEFINED*                     
 * 
 */
/*
 * Field : rdata
 * 
 * Memory Read Data
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_MEMSTAT_RDATA register field. */
#define ALT_CLKMGR_MAINPLL_MEMSTAT_RDATA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_MEMSTAT_RDATA register field. */
#define ALT_CLKMGR_MAINPLL_MEMSTAT_RDATA_MSB        7
/* The width in bits of the ALT_CLKMGR_MAINPLL_MEMSTAT_RDATA register field. */
#define ALT_CLKMGR_MAINPLL_MEMSTAT_RDATA_WIDTH      8
/* The mask used to set the ALT_CLKMGR_MAINPLL_MEMSTAT_RDATA register field value. */
#define ALT_CLKMGR_MAINPLL_MEMSTAT_RDATA_SET_MSK    0x000000ff
/* The mask used to clear the ALT_CLKMGR_MAINPLL_MEMSTAT_RDATA register field value. */
#define ALT_CLKMGR_MAINPLL_MEMSTAT_RDATA_CLR_MSK    0xffffff00
/* The reset value of the ALT_CLKMGR_MAINPLL_MEMSTAT_RDATA register field. */
#define ALT_CLKMGR_MAINPLL_MEMSTAT_RDATA_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_MEMSTAT_RDATA field value from a register. */
#define ALT_CLKMGR_MAINPLL_MEMSTAT_RDATA_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_MEMSTAT_RDATA register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_MEMSTAT_RDATA_SET(value) (((value) << 0) & 0x000000ff)

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
 * The struct declaration for register ALT_CLKMGR_MAINPLL_MEMSTAT.
 */
struct ALT_CLKMGR_MAINPLL_MEMSTAT_s
{
    const volatile uint32_t  rdata :  8;  /* ALT_CLKMGR_MAINPLL_MEMSTAT_RDATA */
    uint32_t                       : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_MEMSTAT. */
typedef struct ALT_CLKMGR_MAINPLL_MEMSTAT_s  ALT_CLKMGR_MAINPLL_MEMSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_MEMSTAT register. */
#define ALT_CLKMGR_MAINPLL_MEMSTAT_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_MAINPLL_MEMSTAT register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_MEMSTAT_OFST        0x50

/*
 * Register : pllc0
 * 
 * Channel C0 frequency settings for the main PLL
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                   
 * :--------|:-------|:------|:-------------------------------
 *  [7:0]   | RW     | 0x2   | ALT_CLKMGR_MAINPLL_PLLC0_DIV  
 *  [23:8]  | ???    | 0x0   | *UNDEFINED*                   
 *  [24]    | RW     | 0x0   | ALT_CLKMGR_MAINPLL_PLLC0_PHINC
 *  [25]    | RW     | 0x0   | ALT_CLKMGR_MAINPLL_PLLC0_PHRST
 *  [26]    | RW     | 0x0   | ALT_CLKMGR_MAINPLL_PLLC0_BYPAS
 *  [27]    | RW     | 0x1   | ALT_CLKMGR_MAINPLL_PLLC0_EN   
 *  [31:28] | ???    | 0x0   | *UNDEFINED*                   
 * 
 */
/*
 * Field : div
 * 
 * PLL channel 0 divider ratio in binary code; Can be dynamically updated after
 * lock signal is asserted, glitch-free from 8'd3 to 8'd255; could encounter
 * glitches for 8'd1 and 8d'2 cases.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_PLLC0_DIV register field. */
#define ALT_CLKMGR_MAINPLL_PLLC0_DIV_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_PLLC0_DIV register field. */
#define ALT_CLKMGR_MAINPLL_PLLC0_DIV_MSB        7
/* The width in bits of the ALT_CLKMGR_MAINPLL_PLLC0_DIV register field. */
#define ALT_CLKMGR_MAINPLL_PLLC0_DIV_WIDTH      8
/* The mask used to set the ALT_CLKMGR_MAINPLL_PLLC0_DIV register field value. */
#define ALT_CLKMGR_MAINPLL_PLLC0_DIV_SET_MSK    0x000000ff
/* The mask used to clear the ALT_CLKMGR_MAINPLL_PLLC0_DIV register field value. */
#define ALT_CLKMGR_MAINPLL_PLLC0_DIV_CLR_MSK    0xffffff00
/* The reset value of the ALT_CLKMGR_MAINPLL_PLLC0_DIV register field. */
#define ALT_CLKMGR_MAINPLL_PLLC0_DIV_RESET      0x2
/* Extracts the ALT_CLKMGR_MAINPLL_PLLC0_DIV field value from a register. */
#define ALT_CLKMGR_MAINPLL_PLLC0_DIV_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_PLLC0_DIV register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_PLLC0_DIV_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : phinc
 * 
 * When a positive edge is induced, one of the positive edges of PLLC0 clock is
 * pushed out by 1/8th of VCO period.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_CLKMGR_MAINPLL_PLLC0_PHINC_E_UNPUSH | 0x0   |            
 *  ALT_CLKMGR_MAINPLL_PLLC0_PHINC_E_PUSH   | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLC0_PHINC
 * 
 */
#define ALT_CLKMGR_MAINPLL_PLLC0_PHINC_E_UNPUSH 0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLC0_PHINC
 * 
 */
#define ALT_CLKMGR_MAINPLL_PLLC0_PHINC_E_PUSH   0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_PLLC0_PHINC register field. */
#define ALT_CLKMGR_MAINPLL_PLLC0_PHINC_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_PLLC0_PHINC register field. */
#define ALT_CLKMGR_MAINPLL_PLLC0_PHINC_MSB        24
/* The width in bits of the ALT_CLKMGR_MAINPLL_PLLC0_PHINC register field. */
#define ALT_CLKMGR_MAINPLL_PLLC0_PHINC_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_PLLC0_PHINC register field value. */
#define ALT_CLKMGR_MAINPLL_PLLC0_PHINC_SET_MSK    0x01000000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_PLLC0_PHINC register field value. */
#define ALT_CLKMGR_MAINPLL_PLLC0_PHINC_CLR_MSK    0xfeffffff
/* The reset value of the ALT_CLKMGR_MAINPLL_PLLC0_PHINC register field. */
#define ALT_CLKMGR_MAINPLL_PLLC0_PHINC_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_PLLC0_PHINC field value from a register. */
#define ALT_CLKMGR_MAINPLL_PLLC0_PHINC_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_CLKMGR_MAINPLL_PLLC0_PHINC register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_PLLC0_PHINC_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : phrst
 * 
 * If ictl_vpll_pr1_phrst_a=1'b1, the phase of PLLC0 clock is reset to default
 * phase as the PLL is just started.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                         | Value | Description
 * :---------------------------------------------|:------|:------------
 *  ALT_CLKMGR_MAINPLL_PLLC0_PHRST_E_RSTDEASSERT | 0x0   |            
 *  ALT_CLKMGR_MAINPLL_PLLC0_PHRST_E_RSTASSERT   | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLC0_PHRST
 * 
 */
#define ALT_CLKMGR_MAINPLL_PLLC0_PHRST_E_RSTDEASSERT    0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLC0_PHRST
 * 
 */
#define ALT_CLKMGR_MAINPLL_PLLC0_PHRST_E_RSTASSERT      0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_PLLC0_PHRST register field. */
#define ALT_CLKMGR_MAINPLL_PLLC0_PHRST_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_PLLC0_PHRST register field. */
#define ALT_CLKMGR_MAINPLL_PLLC0_PHRST_MSB        25
/* The width in bits of the ALT_CLKMGR_MAINPLL_PLLC0_PHRST register field. */
#define ALT_CLKMGR_MAINPLL_PLLC0_PHRST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_PLLC0_PHRST register field value. */
#define ALT_CLKMGR_MAINPLL_PLLC0_PHRST_SET_MSK    0x02000000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_PLLC0_PHRST register field value. */
#define ALT_CLKMGR_MAINPLL_PLLC0_PHRST_CLR_MSK    0xfdffffff
/* The reset value of the ALT_CLKMGR_MAINPLL_PLLC0_PHRST register field. */
#define ALT_CLKMGR_MAINPLL_PLLC0_PHRST_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_PLLC0_PHRST field value from a register. */
#define ALT_CLKMGR_MAINPLL_PLLC0_PHRST_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_CLKMGR_MAINPLL_PLLC0_PHRST register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_PLLC0_PHRST_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : bypas
 * 
 * PLL channel 0 output bypass. Before lock, it is muted, regardless of its value.
 * 
 * After lock, if enabled (en==1) and bypass=1, this outputs refclk.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description
 * :------------------------------------------|:------|:------------
 *  ALT_CLKMGR_MAINPLL_PLLC0_BYPAS_E_UNBYPASS | 0x0   |            
 *  ALT_CLKMGR_MAINPLL_PLLC0_BYPAS_E_BYPASS   | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLC0_BYPAS
 * 
 */
#define ALT_CLKMGR_MAINPLL_PLLC0_BYPAS_E_UNBYPASS   0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLC0_BYPAS
 * 
 */
#define ALT_CLKMGR_MAINPLL_PLLC0_BYPAS_E_BYPASS     0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_PLLC0_BYPAS register field. */
#define ALT_CLKMGR_MAINPLL_PLLC0_BYPAS_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_PLLC0_BYPAS register field. */
#define ALT_CLKMGR_MAINPLL_PLLC0_BYPAS_MSB        26
/* The width in bits of the ALT_CLKMGR_MAINPLL_PLLC0_BYPAS register field. */
#define ALT_CLKMGR_MAINPLL_PLLC0_BYPAS_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_PLLC0_BYPAS register field value. */
#define ALT_CLKMGR_MAINPLL_PLLC0_BYPAS_SET_MSK    0x04000000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_PLLC0_BYPAS register field value. */
#define ALT_CLKMGR_MAINPLL_PLLC0_BYPAS_CLR_MSK    0xfbffffff
/* The reset value of the ALT_CLKMGR_MAINPLL_PLLC0_BYPAS register field. */
#define ALT_CLKMGR_MAINPLL_PLLC0_BYPAS_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_PLLC0_BYPAS field value from a register. */
#define ALT_CLKMGR_MAINPLL_PLLC0_BYPAS_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_CLKMGR_MAINPLL_PLLC0_BYPAS register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_PLLC0_BYPAS_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : en
 * 
 * PLL channel 0 output enable; the output is muted before lock signal is asserted,
 * regardless of the value; after lock is asserted, it is glitch-free enable
 * ock_vpll_pr1, if enabled
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description
 * :--------------------------------------|:------|:------------
 *  ALT_CLKMGR_MAINPLL_PLLC0_EN_E_DISABLE | 0x0   |            
 *  ALT_CLKMGR_MAINPLL_PLLC0_EN_E_ENABLE  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLC0_EN
 * 
 */
#define ALT_CLKMGR_MAINPLL_PLLC0_EN_E_DISABLE   0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLC0_EN
 * 
 */
#define ALT_CLKMGR_MAINPLL_PLLC0_EN_E_ENABLE    0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_PLLC0_EN register field. */
#define ALT_CLKMGR_MAINPLL_PLLC0_EN_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_PLLC0_EN register field. */
#define ALT_CLKMGR_MAINPLL_PLLC0_EN_MSB        27
/* The width in bits of the ALT_CLKMGR_MAINPLL_PLLC0_EN register field. */
#define ALT_CLKMGR_MAINPLL_PLLC0_EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_PLLC0_EN register field value. */
#define ALT_CLKMGR_MAINPLL_PLLC0_EN_SET_MSK    0x08000000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_PLLC0_EN register field value. */
#define ALT_CLKMGR_MAINPLL_PLLC0_EN_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_CLKMGR_MAINPLL_PLLC0_EN register field. */
#define ALT_CLKMGR_MAINPLL_PLLC0_EN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_PLLC0_EN field value from a register. */
#define ALT_CLKMGR_MAINPLL_PLLC0_EN_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_CLKMGR_MAINPLL_PLLC0_EN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_PLLC0_EN_SET(value) (((value) << 27) & 0x08000000)

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
 * The struct declaration for register ALT_CLKMGR_MAINPLL_PLLC0.
 */
struct ALT_CLKMGR_MAINPLL_PLLC0_s
{
    volatile uint32_t  div   :  8;  /* ALT_CLKMGR_MAINPLL_PLLC0_DIV */
    uint32_t                 : 16;  /* *UNDEFINED* */
    volatile uint32_t  phinc :  1;  /* ALT_CLKMGR_MAINPLL_PLLC0_PHINC */
    volatile uint32_t  phrst :  1;  /* ALT_CLKMGR_MAINPLL_PLLC0_PHRST */
    volatile uint32_t  bypas :  1;  /* ALT_CLKMGR_MAINPLL_PLLC0_BYPAS */
    volatile uint32_t  en    :  1;  /* ALT_CLKMGR_MAINPLL_PLLC0_EN */
    uint32_t                 :  4;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_PLLC0. */
typedef struct ALT_CLKMGR_MAINPLL_PLLC0_s  ALT_CLKMGR_MAINPLL_PLLC0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_PLLC0 register. */
#define ALT_CLKMGR_MAINPLL_PLLC0_RESET       0x08000002
/* The byte offset of the ALT_CLKMGR_MAINPLL_PLLC0 register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_PLLC0_OFST        0x54

/*
 * Register : pllc1
 * 
 * Channel C1 settings for the main PLL
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                   
 * :--------|:-------|:------|:-------------------------------
 *  [7:0]   | RW     | 0x6   | ALT_CLKMGR_MAINPLL_PLLC1_DIV  
 *  [23:8]  | ???    | 0x0   | *UNDEFINED*                   
 *  [24]    | RW     | 0x1   | ALT_CLKMGR_MAINPLL_PLLC1_EN   
 *  [25]    | RW     | 0x0   | ALT_CLKMGR_MAINPLL_PLLC1_BYPAS
 *  [26]    | RW     | 0x0   | ALT_CLKMGR_MAINPLL_PLLC1_PHINC
 *  [27]    | RW     | 0x0   | ALT_CLKMGR_MAINPLL_PLLC1_PHRST
 *  [31:28] | ???    | 0x0   | *UNDEFINED*                   
 * 
 */
/*
 * Field : div
 * 
 * PLL channel 1 divider ratio in binary code; Can be dynamically updated after
 * lock signal is asserted, glitch-free from 8'd3 to 8'd255; could encounter
 * glitches for 8'd1 and 8d'2 cases.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_PLLC1_DIV register field. */
#define ALT_CLKMGR_MAINPLL_PLLC1_DIV_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_PLLC1_DIV register field. */
#define ALT_CLKMGR_MAINPLL_PLLC1_DIV_MSB        7
/* The width in bits of the ALT_CLKMGR_MAINPLL_PLLC1_DIV register field. */
#define ALT_CLKMGR_MAINPLL_PLLC1_DIV_WIDTH      8
/* The mask used to set the ALT_CLKMGR_MAINPLL_PLLC1_DIV register field value. */
#define ALT_CLKMGR_MAINPLL_PLLC1_DIV_SET_MSK    0x000000ff
/* The mask used to clear the ALT_CLKMGR_MAINPLL_PLLC1_DIV register field value. */
#define ALT_CLKMGR_MAINPLL_PLLC1_DIV_CLR_MSK    0xffffff00
/* The reset value of the ALT_CLKMGR_MAINPLL_PLLC1_DIV register field. */
#define ALT_CLKMGR_MAINPLL_PLLC1_DIV_RESET      0x6
/* Extracts the ALT_CLKMGR_MAINPLL_PLLC1_DIV field value from a register. */
#define ALT_CLKMGR_MAINPLL_PLLC1_DIV_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_PLLC1_DIV register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_PLLC1_DIV_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : en
 * 
 * PLL channel 1 output enable; the output is muted before lock signal is asserted,
 * regardless of the value; after lock is asserted, it is glitch-free enable
 * ock_vpll_pr1, if enabled
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description
 * :--------------------------------------|:------|:------------
 *  ALT_CLKMGR_MAINPLL_PLLC1_EN_E_DISABLE | 0x0   |            
 *  ALT_CLKMGR_MAINPLL_PLLC1_EN_E_ENABLE  | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLC1_EN
 * 
 */
#define ALT_CLKMGR_MAINPLL_PLLC1_EN_E_DISABLE   0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLC1_EN
 * 
 */
#define ALT_CLKMGR_MAINPLL_PLLC1_EN_E_ENABLE    0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_PLLC1_EN register field. */
#define ALT_CLKMGR_MAINPLL_PLLC1_EN_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_PLLC1_EN register field. */
#define ALT_CLKMGR_MAINPLL_PLLC1_EN_MSB        24
/* The width in bits of the ALT_CLKMGR_MAINPLL_PLLC1_EN register field. */
#define ALT_CLKMGR_MAINPLL_PLLC1_EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_PLLC1_EN register field value. */
#define ALT_CLKMGR_MAINPLL_PLLC1_EN_SET_MSK    0x01000000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_PLLC1_EN register field value. */
#define ALT_CLKMGR_MAINPLL_PLLC1_EN_CLR_MSK    0xfeffffff
/* The reset value of the ALT_CLKMGR_MAINPLL_PLLC1_EN register field. */
#define ALT_CLKMGR_MAINPLL_PLLC1_EN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_PLLC1_EN field value from a register. */
#define ALT_CLKMGR_MAINPLL_PLLC1_EN_GET(value) (((value) & 0x01000000) >> 24)
/* Produces a ALT_CLKMGR_MAINPLL_PLLC1_EN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_PLLC1_EN_SET(value) (((value) << 24) & 0x01000000)

/*
 * Field : bypas
 * 
 * PLL channel 1 output bypass; before lock, it is muted, regardless of its value.
 * After lock, if enabled and bypass=1, this outputs refclk.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description
 * :------------------------------------------|:------|:------------
 *  ALT_CLKMGR_MAINPLL_PLLC1_BYPAS_E_UNBYPASS | 0x0   |            
 *  ALT_CLKMGR_MAINPLL_PLLC1_BYPAS_E_BYPASS   | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLC1_BYPAS
 * 
 */
#define ALT_CLKMGR_MAINPLL_PLLC1_BYPAS_E_UNBYPASS   0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLC1_BYPAS
 * 
 */
#define ALT_CLKMGR_MAINPLL_PLLC1_BYPAS_E_BYPASS     0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_PLLC1_BYPAS register field. */
#define ALT_CLKMGR_MAINPLL_PLLC1_BYPAS_LSB        25
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_PLLC1_BYPAS register field. */
#define ALT_CLKMGR_MAINPLL_PLLC1_BYPAS_MSB        25
/* The width in bits of the ALT_CLKMGR_MAINPLL_PLLC1_BYPAS register field. */
#define ALT_CLKMGR_MAINPLL_PLLC1_BYPAS_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_PLLC1_BYPAS register field value. */
#define ALT_CLKMGR_MAINPLL_PLLC1_BYPAS_SET_MSK    0x02000000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_PLLC1_BYPAS register field value. */
#define ALT_CLKMGR_MAINPLL_PLLC1_BYPAS_CLR_MSK    0xfdffffff
/* The reset value of the ALT_CLKMGR_MAINPLL_PLLC1_BYPAS register field. */
#define ALT_CLKMGR_MAINPLL_PLLC1_BYPAS_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_PLLC1_BYPAS field value from a register. */
#define ALT_CLKMGR_MAINPLL_PLLC1_BYPAS_GET(value) (((value) & 0x02000000) >> 25)
/* Produces a ALT_CLKMGR_MAINPLL_PLLC1_BYPAS register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_PLLC1_BYPAS_SET(value) (((value) << 25) & 0x02000000)

/*
 * Field : phinc
 * 
 * When a positive edge is induced, one of the positive edges of PLLC1 clock is
 * pushed out by 1/8th of VCO period.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_CLKMGR_MAINPLL_PLLC1_PHINC_E_UNPUSH | 0x0   |            
 *  ALT_CLKMGR_MAINPLL_PLLC1_PHINC_E_PUSH   | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLC1_PHINC
 * 
 */
#define ALT_CLKMGR_MAINPLL_PLLC1_PHINC_E_UNPUSH 0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLC1_PHINC
 * 
 */
#define ALT_CLKMGR_MAINPLL_PLLC1_PHINC_E_PUSH   0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_PLLC1_PHINC register field. */
#define ALT_CLKMGR_MAINPLL_PLLC1_PHINC_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_PLLC1_PHINC register field. */
#define ALT_CLKMGR_MAINPLL_PLLC1_PHINC_MSB        26
/* The width in bits of the ALT_CLKMGR_MAINPLL_PLLC1_PHINC register field. */
#define ALT_CLKMGR_MAINPLL_PLLC1_PHINC_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_PLLC1_PHINC register field value. */
#define ALT_CLKMGR_MAINPLL_PLLC1_PHINC_SET_MSK    0x04000000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_PLLC1_PHINC register field value. */
#define ALT_CLKMGR_MAINPLL_PLLC1_PHINC_CLR_MSK    0xfbffffff
/* The reset value of the ALT_CLKMGR_MAINPLL_PLLC1_PHINC register field. */
#define ALT_CLKMGR_MAINPLL_PLLC1_PHINC_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_PLLC1_PHINC field value from a register. */
#define ALT_CLKMGR_MAINPLL_PLLC1_PHINC_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_CLKMGR_MAINPLL_PLLC1_PHINC register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_PLLC1_PHINC_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : phrst
 * 
 * If ictl_vpll_pr1_phrst_a=1'b1, the phase of PLLC1 clock is reset to default
 * phase as the PLL is just started.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                         | Value | Description
 * :---------------------------------------------|:------|:------------
 *  ALT_CLKMGR_MAINPLL_PLLC1_PHRST_E_RSTDEASSERT | 0x0   |            
 *  ALT_CLKMGR_MAINPLL_PLLC1_PHRST_E_RSTASSERT   | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLC1_PHRST
 * 
 */
#define ALT_CLKMGR_MAINPLL_PLLC1_PHRST_E_RSTDEASSERT    0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_PLLC1_PHRST
 * 
 */
#define ALT_CLKMGR_MAINPLL_PLLC1_PHRST_E_RSTASSERT      0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_PLLC1_PHRST register field. */
#define ALT_CLKMGR_MAINPLL_PLLC1_PHRST_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_PLLC1_PHRST register field. */
#define ALT_CLKMGR_MAINPLL_PLLC1_PHRST_MSB        27
/* The width in bits of the ALT_CLKMGR_MAINPLL_PLLC1_PHRST register field. */
#define ALT_CLKMGR_MAINPLL_PLLC1_PHRST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_PLLC1_PHRST register field value. */
#define ALT_CLKMGR_MAINPLL_PLLC1_PHRST_SET_MSK    0x08000000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_PLLC1_PHRST register field value. */
#define ALT_CLKMGR_MAINPLL_PLLC1_PHRST_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_CLKMGR_MAINPLL_PLLC1_PHRST register field. */
#define ALT_CLKMGR_MAINPLL_PLLC1_PHRST_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_PLLC1_PHRST field value from a register. */
#define ALT_CLKMGR_MAINPLL_PLLC1_PHRST_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_CLKMGR_MAINPLL_PLLC1_PHRST register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_PLLC1_PHRST_SET(value) (((value) << 27) & 0x08000000)

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
 * The struct declaration for register ALT_CLKMGR_MAINPLL_PLLC1.
 */
struct ALT_CLKMGR_MAINPLL_PLLC1_s
{
    volatile uint32_t  div   :  8;  /* ALT_CLKMGR_MAINPLL_PLLC1_DIV */
    uint32_t                 : 16;  /* *UNDEFINED* */
    volatile uint32_t  en    :  1;  /* ALT_CLKMGR_MAINPLL_PLLC1_EN */
    volatile uint32_t  bypas :  1;  /* ALT_CLKMGR_MAINPLL_PLLC1_BYPAS */
    volatile uint32_t  phinc :  1;  /* ALT_CLKMGR_MAINPLL_PLLC1_PHINC */
    volatile uint32_t  phrst :  1;  /* ALT_CLKMGR_MAINPLL_PLLC1_PHRST */
    uint32_t                 :  4;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_PLLC1. */
typedef struct ALT_CLKMGR_MAINPLL_PLLC1_s  ALT_CLKMGR_MAINPLL_PLLC1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_PLLC1 register. */
#define ALT_CLKMGR_MAINPLL_PLLC1_RESET       0x01000006
/* The byte offset of the ALT_CLKMGR_MAINPLL_PLLC1 register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_PLLC1_OFST        0x58

/*
 * Register : vcocalib
 * 
 * VCO calibration control registers.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                       
 * :--------|:-------|:------|:-----------------------------------
 *  [7:0]   | RW     | 0xb7  | ALT_CLKMGR_MAINPLL_VCOCALIB_HSCNT 
 *  [8]     | ???    | 0x1   | *UNDEFINED*                       
 *  [16:9]  | RW     | 0x4   | ALT_CLKMGR_MAINPLL_VCOCALIB_MSCNT 
 *  [22:17] | ???    | 0x0   | *UNDEFINED*                       
 *  [24:23] | RW     | 0x0   | ALT_CLKMGR_MAINPLL_VCOCALIB_TERMIN
 *  [31:25] | ???    | 0x0   | *UNDEFINED*                       
 * 
 */
/*
 * Field : hscnt
 * 
 * VCO calibration parameter.
 * 
 * hscnt= (mdiv+ 6) * mscnt/ refdiv-9.
 * 
 * It can be only set while the pll is at reset or power down state.
 * 
 * It cannot be switched dynamically.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_VCOCALIB_HSCNT register field. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_HSCNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_VCOCALIB_HSCNT register field. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_HSCNT_MSB        7
/* The width in bits of the ALT_CLKMGR_MAINPLL_VCOCALIB_HSCNT register field. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_HSCNT_WIDTH      8
/* The mask used to set the ALT_CLKMGR_MAINPLL_VCOCALIB_HSCNT register field value. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_HSCNT_SET_MSK    0x000000ff
/* The mask used to clear the ALT_CLKMGR_MAINPLL_VCOCALIB_HSCNT register field value. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_HSCNT_CLR_MSK    0xffffff00
/* The reset value of the ALT_CLKMGR_MAINPLL_VCOCALIB_HSCNT register field. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_HSCNT_RESET      0xb7
/* Extracts the ALT_CLKMGR_MAINPLL_VCOCALIB_HSCNT field value from a register. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_HSCNT_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_VCOCALIB_HSCNT register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_HSCNT_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : mscnt
 * 
 * mscnt = 200/(fvco/fref).
 * 
 * It can be only set while the PLL is at reset or power down state.
 * 
 * It cannot be switched dynamically.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_VCOCALIB_MSCNT register field. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_MSCNT_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_VCOCALIB_MSCNT register field. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_MSCNT_MSB        16
/* The width in bits of the ALT_CLKMGR_MAINPLL_VCOCALIB_MSCNT register field. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_MSCNT_WIDTH      8
/* The mask used to set the ALT_CLKMGR_MAINPLL_VCOCALIB_MSCNT register field value. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_MSCNT_SET_MSK    0x0001fe00
/* The mask used to clear the ALT_CLKMGR_MAINPLL_VCOCALIB_MSCNT register field value. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_MSCNT_CLR_MSK    0xfffe01ff
/* The reset value of the ALT_CLKMGR_MAINPLL_VCOCALIB_MSCNT register field. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_MSCNT_RESET      0x4
/* Extracts the ALT_CLKMGR_MAINPLL_VCOCALIB_MSCNT field value from a register. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_MSCNT_GET(value) (((value) & 0x0001fe00) >> 9)
/* Produces a ALT_CLKMGR_MAINPLL_VCOCALIB_MSCNT register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_MSCNT_SET(value) (((value) << 9) & 0x0001fe00)

/*
 * Field : termin
 * 
 * Termination Calibration Control Look-Up Table Select
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_VCOCALIB_TERMIN register field. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_TERMIN_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_VCOCALIB_TERMIN register field. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_TERMIN_MSB        24
/* The width in bits of the ALT_CLKMGR_MAINPLL_VCOCALIB_TERMIN register field. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_TERMIN_WIDTH      2
/* The mask used to set the ALT_CLKMGR_MAINPLL_VCOCALIB_TERMIN register field value. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_TERMIN_SET_MSK    0x01800000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_VCOCALIB_TERMIN register field value. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_TERMIN_CLR_MSK    0xfe7fffff
/* The reset value of the ALT_CLKMGR_MAINPLL_VCOCALIB_TERMIN register field. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_TERMIN_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_VCOCALIB_TERMIN field value from a register. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_TERMIN_GET(value) (((value) & 0x01800000) >> 23)
/* Produces a ALT_CLKMGR_MAINPLL_VCOCALIB_TERMIN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_TERMIN_SET(value) (((value) << 23) & 0x01800000)

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
 * The struct declaration for register ALT_CLKMGR_MAINPLL_VCOCALIB.
 */
struct ALT_CLKMGR_MAINPLL_VCOCALIB_s
{
    volatile uint32_t  hscnt  :  8;  /* ALT_CLKMGR_MAINPLL_VCOCALIB_HSCNT */
    uint32_t                  :  1;  /* *UNDEFINED* */
    volatile uint32_t  mscnt  :  8;  /* ALT_CLKMGR_MAINPLL_VCOCALIB_MSCNT */
    uint32_t                  :  6;  /* *UNDEFINED* */
    volatile uint32_t  termin :  2;  /* ALT_CLKMGR_MAINPLL_VCOCALIB_TERMIN */
    uint32_t                  :  7;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_VCOCALIB. */
typedef struct ALT_CLKMGR_MAINPLL_VCOCALIB_s  ALT_CLKMGR_MAINPLL_VCOCALIB_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_VCOCALIB register. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_RESET       0x000009b7
/* The byte offset of the ALT_CLKMGR_MAINPLL_VCOCALIB register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_VCOCALIB_OFST        0x5c

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
 * The struct declaration for register group ALT_CLKMGR_MAINPLL.
 */
struct ALT_CLKMGR_MAINPLL_s
{
    volatile ALT_CLKMGR_MAINPLL_EN_t        en;                 /* ALT_CLKMGR_MAINPLL_EN */
    volatile ALT_CLKMGR_MAINPLL_ENS_t       ens;                /* ALT_CLKMGR_MAINPLL_ENS */
    volatile ALT_CLKMGR_MAINPLL_ENR_t       enr;                /* ALT_CLKMGR_MAINPLL_ENR */
    volatile ALT_CLKMGR_MAINPLL_BYPASS_t    bypass;             /* ALT_CLKMGR_MAINPLL_BYPASS */
    volatile ALT_CLKMGR_MAINPLL_BYPASSS_t   bypasss;            /* ALT_CLKMGR_MAINPLL_BYPASSS */
    volatile ALT_CLKMGR_MAINPLL_BYPASSR_t   bypassr;            /* ALT_CLKMGR_MAINPLL_BYPASSR */
    volatile ALT_CLKMGR_MAINPLL_MPUCLK_t    mpuclk;             /* ALT_CLKMGR_MAINPLL_MPUCLK */
    volatile ALT_CLKMGR_MAINPLL_NOCCLK_t    nocclk;             /* ALT_CLKMGR_MAINPLL_NOCCLK */
    volatile ALT_CLKMGR_MAINPLL_CNTR2CLK_t  cntr2clk;           /* ALT_CLKMGR_MAINPLL_CNTR2CLK */
    volatile ALT_CLKMGR_MAINPLL_CNTR3CLK_t  cntr3clk;           /* ALT_CLKMGR_MAINPLL_CNTR3CLK */
    volatile ALT_CLKMGR_MAINPLL_CNTR4CLK_t  cntr4clk;           /* ALT_CLKMGR_MAINPLL_CNTR4CLK */
    volatile ALT_CLKMGR_MAINPLL_CNTR5CLK_t  cntr5clk;           /* ALT_CLKMGR_MAINPLL_CNTR5CLK */
    volatile ALT_CLKMGR_MAINPLL_CNTR6CLK_t  cntr6clk;           /* ALT_CLKMGR_MAINPLL_CNTR6CLK */
    volatile ALT_CLKMGR_MAINPLL_CNTR7CLK_t  cntr7clk;           /* ALT_CLKMGR_MAINPLL_CNTR7CLK */
    volatile ALT_CLKMGR_MAINPLL_CNTR8CLK_t  cntr8clk;           /* ALT_CLKMGR_MAINPLL_CNTR8CLK */
    volatile ALT_CLKMGR_MAINPLL_CNTR9CLK_t  cntr9clk;           /* ALT_CLKMGR_MAINPLL_CNTR9CLK */
    volatile ALT_CLKMGR_MAINPLL_NOCDIV_t    nocdiv;             /* ALT_CLKMGR_MAINPLL_NOCDIV */
    volatile ALT_CLKMGR_MAINPLL_PLLGLOB_t   pllglob;            /* ALT_CLKMGR_MAINPLL_PLLGLOB */
    volatile ALT_CLKMGR_MAINPLL_FDBCK_t     fdbck;              /* ALT_CLKMGR_MAINPLL_FDBCK */
    volatile ALT_CLKMGR_MAINPLL_MEM_t       mem;                /* ALT_CLKMGR_MAINPLL_MEM */
    volatile ALT_CLKMGR_MAINPLL_MEMSTAT_t   memstat;            /* ALT_CLKMGR_MAINPLL_MEMSTAT */
    volatile ALT_CLKMGR_MAINPLL_PLLC0_t     pllc0;              /* ALT_CLKMGR_MAINPLL_PLLC0 */
    volatile ALT_CLKMGR_MAINPLL_PLLC1_t     pllc1;              /* ALT_CLKMGR_MAINPLL_PLLC1 */
    volatile ALT_CLKMGR_MAINPLL_VCOCALIB_t  vcocalib;           /* ALT_CLKMGR_MAINPLL_VCOCALIB */
    volatile uint32_t                       _pad_0x60_0x70[4];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_CLKMGR_MAINPLL. */
typedef struct ALT_CLKMGR_MAINPLL_s  ALT_CLKMGR_MAINPLL_t;
/* The struct declaration for the raw register contents of register group ALT_CLKMGR_MAINPLL. */
struct ALT_CLKMGR_MAINPLL_raw_s
{
    volatile uint32_t  en;                 /* ALT_CLKMGR_MAINPLL_EN */
    volatile uint32_t  ens;                /* ALT_CLKMGR_MAINPLL_ENS */
    volatile uint32_t  enr;                /* ALT_CLKMGR_MAINPLL_ENR */
    volatile uint32_t  bypass;             /* ALT_CLKMGR_MAINPLL_BYPASS */
    volatile uint32_t  bypasss;            /* ALT_CLKMGR_MAINPLL_BYPASSS */
    volatile uint32_t  bypassr;            /* ALT_CLKMGR_MAINPLL_BYPASSR */
    volatile uint32_t  mpuclk;             /* ALT_CLKMGR_MAINPLL_MPUCLK */
    volatile uint32_t  nocclk;             /* ALT_CLKMGR_MAINPLL_NOCCLK */
    volatile uint32_t  cntr2clk;           /* ALT_CLKMGR_MAINPLL_CNTR2CLK */
    volatile uint32_t  cntr3clk;           /* ALT_CLKMGR_MAINPLL_CNTR3CLK */
    volatile uint32_t  cntr4clk;           /* ALT_CLKMGR_MAINPLL_CNTR4CLK */
    volatile uint32_t  cntr5clk;           /* ALT_CLKMGR_MAINPLL_CNTR5CLK */
    volatile uint32_t  cntr6clk;           /* ALT_CLKMGR_MAINPLL_CNTR6CLK */
    volatile uint32_t  cntr7clk;           /* ALT_CLKMGR_MAINPLL_CNTR7CLK */
    volatile uint32_t  cntr8clk;           /* ALT_CLKMGR_MAINPLL_CNTR8CLK */
    volatile uint32_t  cntr9clk;           /* ALT_CLKMGR_MAINPLL_CNTR9CLK */
    volatile uint32_t  nocdiv;             /* ALT_CLKMGR_MAINPLL_NOCDIV */
    volatile uint32_t  pllglob;            /* ALT_CLKMGR_MAINPLL_PLLGLOB */
    volatile uint32_t  fdbck;              /* ALT_CLKMGR_MAINPLL_FDBCK */
    volatile uint32_t  mem;                /* ALT_CLKMGR_MAINPLL_MEM */
    volatile uint32_t  memstat;            /* ALT_CLKMGR_MAINPLL_MEMSTAT */
    volatile uint32_t  pllc0;              /* ALT_CLKMGR_MAINPLL_PLLC0 */
    volatile uint32_t  pllc1;              /* ALT_CLKMGR_MAINPLL_PLLC1 */
    volatile uint32_t  vcocalib;           /* ALT_CLKMGR_MAINPLL_VCOCALIB */
    volatile uint32_t  _pad_0x60_0x70[4];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_CLKMGR_MAINPLL. */
typedef struct ALT_CLKMGR_MAINPLL_raw_s  ALT_CLKMGR_MAINPLL_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_CLKMGR_MAINPLL_H__ */

