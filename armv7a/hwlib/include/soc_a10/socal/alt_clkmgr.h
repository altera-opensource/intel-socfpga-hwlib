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

/* Altera - ALT_CLKMGR_CLKMGR */

#ifndef __ALT_SOCAL_CLKMGR_H__
#define __ALT_SOCAL_CLKMGR_H__

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
 * Component : ALT_CLKMGR_CLKMGR
 * 
 */
/*
 * Register : Control Register - ctrl
 * 
 * Contains fields that control the entire Clock Manager.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                 
 * :--------|:-------|:------|:-----------------------------
 *  [0]     | RW     | 0x1   | Boot Mode                   
 *  [7:1]   | ???    | 0x1   | *UNDEFINED*                 
 *  [8]     | RW     | 0x0   | SW Control Boot Clock Enable
 *  [9]     | RW     | 0x0   | SW Control Boot Clock Select
 *  [31:10] | ???    | 0x0   | *UNDEFINED*                 
 * 
 */
/*
 * Field : Boot Mode - bootmode
 * 
 * When set the Clock Manager is in Boot Mode.
 * 
 * In Boot Mode Clock Manager register settings defining clock behavior are ignored
 * and clocks are set to their Boot Mode settings.  All clocks will be bypassed and
 * external HW managed counters and dividers will be set to divide by 1.
 * 
 * This bit should only be cleared when clocks have been correctly configured.
 * 
 * This field is set on a cold reset and optionally on a warm reset. SW may set
 * this bit to force the clocks into Boot Mode.  SW exits Boot Mode by clearing
 * this bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_CTL_BOOTMOD register field. */
#define ALT_CLKMGR_CLKMGR_CTL_BOOTMOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_CTL_BOOTMOD register field. */
#define ALT_CLKMGR_CLKMGR_CTL_BOOTMOD_MSB        0
/* The width in bits of the ALT_CLKMGR_CLKMGR_CTL_BOOTMOD register field. */
#define ALT_CLKMGR_CLKMGR_CTL_BOOTMOD_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_CTL_BOOTMOD register field value. */
#define ALT_CLKMGR_CLKMGR_CTL_BOOTMOD_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_CLKMGR_CTL_BOOTMOD register field value. */
#define ALT_CLKMGR_CLKMGR_CTL_BOOTMOD_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_CLKMGR_CTL_BOOTMOD register field. */
#define ALT_CLKMGR_CLKMGR_CTL_BOOTMOD_RESET      0x1
/* Extracts the ALT_CLKMGR_CLKMGR_CTL_BOOTMOD field value from a register. */
#define ALT_CLKMGR_CLKMGR_CTL_BOOTMOD_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_CLKMGR_CTL_BOOTMOD register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_CTL_BOOTMOD_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : SW Control Boot Clock Enable - swctrlbtclken
 * 
 * If set, then Software will take control of the boot_clk mux select.  If set,
 * then swctrlbtclksel will determine the mux setting.  If not set, the security
 * features will determine the fuse settings.
 * 
 * This bit is cleared on a cold reset. Warm reset has no affect on this bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKEN register field. */
#define ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKEN_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKEN register field. */
#define ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKEN_MSB        8
/* The width in bits of the ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKEN register field. */
#define ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKEN register field value. */
#define ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKEN_SET_MSK    0x00000100
/* The mask used to clear the ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKEN register field value. */
#define ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKEN_CLR_MSK    0xfffffeff
/* The reset value of the ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKEN register field. */
#define ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKEN_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKEN field value from a register. */
#define ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKEN_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKEN_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : SW Control Boot Clock Select - swctrlbtclksel
 * 
 * This bit is only used if swctrlbtclken is set.
 * 
 * If 1, boot_clk source will be from cb_intosc_hs_clk divided by 2.  If 0,
 * boot_clk source will be from the external oscillator (EOSC1).
 * 
 * This bit is cleared on a cold reset. Warm reset has no affect on this bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKSEL register field. */
#define ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKSEL_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKSEL register field. */
#define ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKSEL_MSB        9
/* The width in bits of the ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKSEL register field. */
#define ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKSEL_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKSEL register field value. */
#define ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKSEL_SET_MSK    0x00000200
/* The mask used to clear the ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKSEL register field value. */
#define ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKSEL_CLR_MSK    0xfffffdff
/* The reset value of the ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKSEL register field. */
#define ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKSEL_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKSEL field value from a register. */
#define ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKSEL_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKSEL register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_CTL_SWCTLBTCLKSEL_SET(value) (((value) << 9) & 0x00000200)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_CLKMGR_CTL.
 */
struct ALT_CLKMGR_CLKMGR_CTL_s
{
    uint32_t  bootmode       :  1;  /* Boot Mode */
    uint32_t                 :  7;  /* *UNDEFINED* */
    uint32_t  swctrlbtclken  :  1;  /* SW Control Boot Clock Enable */
    uint32_t  swctrlbtclksel :  1;  /* SW Control Boot Clock Select */
    uint32_t                 : 22;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_CLKMGR_CTL. */
typedef volatile struct ALT_CLKMGR_CLKMGR_CTL_s  ALT_CLKMGR_CLKMGR_CTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_CLKMGR_CTL register. */
#define ALT_CLKMGR_CLKMGR_CTL_RESET       0x00000003
/* The byte offset of the ALT_CLKMGR_CLKMGR_CTL register from the beginning of the component. */
#define ALT_CLKMGR_CLKMGR_CTL_OFST        0x0

/*
 * Register : Interrupt Status Register - intr
 * 
 * Contains interrupt fields for Clock Manager
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                 
 * :--------|:-------|:------|:-----------------------------
 *  [0]     | RW     | 0x0   | Main PLL Achieved Lock      
 *  [1]     | RW     | 0x0   | Peripheral PLL Achieved Lock
 *  [2]     | RW     | 0x0   | Main PLL Lost Lock          
 *  [3]     | RW     | 0x0   | Peripheral PLL Lost Lock    
 *  [7:4]   | ???    | 0x0   | *UNDEFINED*                 
 *  [8]     | RW     | 0x0   | Main PLL RF Slip            
 *  [9]     | RW     | 0x0   | Peripheral PLL RF Slip      
 *  [10]    | RW     | 0x0   | Main PLL FB Slip            
 *  [11]    | RW     | 0x0   | Peripheral PLL FB Slip      
 *  [31:12] | ???    | 0x0   | *UNDEFINED*                 
 * 
 */
/*
 * Field : Main PLL Achieved Lock - mainpllachieved
 * 
 * If 1, the Main PLL has achieved lock at least once since this bit was cleared.
 * If 0, the Main PLL has not achieved lock since this bit was cleared.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTR_MAINPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLACHIEVED_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTR_MAINPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLACHIEVED_MSB        0
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTR_MAINPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLACHIEVED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTR_MAINPLLACHIEVED register field value. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLACHIEVED_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTR_MAINPLLACHIEVED register field value. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLACHIEVED_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_CLKMGR_INTR_MAINPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLACHIEVED_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTR_MAINPLLACHIEVED field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLACHIEVED_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_CLKMGR_INTR_MAINPLLACHIEVED register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLACHIEVED_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Peripheral PLL Achieved Lock - perpllachieved
 * 
 * If 1, the Peripheral PLL has achieved lock at least once since this bit was
 * cleared. If 0, the Peripheral PLL has not achieved lock since this bit was
 * cleared.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTR_PERPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLACHIEVED_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTR_PERPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLACHIEVED_MSB        1
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTR_PERPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLACHIEVED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTR_PERPLLACHIEVED register field value. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLACHIEVED_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTR_PERPLLACHIEVED register field value. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLACHIEVED_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_CLKMGR_INTR_PERPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLACHIEVED_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTR_PERPLLACHIEVED field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLACHIEVED_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_CLKMGR_INTR_PERPLLACHIEVED register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLACHIEVED_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : Main PLL Lost Lock - mainplllost
 * 
 * If 1, the Main PLL has lost lock at least once since this bit was cleared. If 0,
 * the Main PLL has not lost lock since this bit was cleared.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTR_MAINPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLLOST_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTR_MAINPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLLOST_MSB        2
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTR_MAINPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLLOST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTR_MAINPLLLOST register field value. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLLOST_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTR_MAINPLLLOST register field value. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLLOST_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_CLKMGR_INTR_MAINPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLLOST_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTR_MAINPLLLOST field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLLOST_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_CLKMGR_INTR_MAINPLLLOST register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLLOST_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : Peripheral PLL Lost Lock - perplllost
 * 
 * If 1, the Peripheral PLL has lost lock at least once since this bit was cleared.
 * If 0, the Peripheral PLL has not lost lock since this bit was cleared.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTR_PERPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLLOST_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTR_PERPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLLOST_MSB        3
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTR_PERPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLLOST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTR_PERPLLLOST register field value. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLLOST_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTR_PERPLLLOST register field value. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLLOST_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_CLKMGR_INTR_PERPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLLOST_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTR_PERPLLLOST field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLLOST_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_CLKMGR_INTR_PERPLLLOST register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLLOST_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : Main PLL RF Slip - mainpllrfslip
 * 
 * If 1, the Main PLL reference cycle has slipped (CLKOUT frequency too high).
 * This does not mean the PLL has lost lock, but the quality of the clock has
 * degraded.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTR_MAINPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLRFSLIP_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTR_MAINPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLRFSLIP_MSB        8
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTR_MAINPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLRFSLIP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTR_MAINPLLRFSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLRFSLIP_SET_MSK    0x00000100
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTR_MAINPLLRFSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLRFSLIP_CLR_MSK    0xfffffeff
/* The reset value of the ALT_CLKMGR_CLKMGR_INTR_MAINPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLRFSLIP_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTR_MAINPLLRFSLIP field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLRFSLIP_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_CLKMGR_CLKMGR_INTR_MAINPLLRFSLIP register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLRFSLIP_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : Peripheral PLL RF Slip - perpllrfslip
 * 
 * If 1, the Peripheral PLL reference cycle has slipped (CLKOUT frequency too
 * high).  This does not mean the PLL has lost lock, but the quality of the clock
 * has degraded.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTR_PERPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLRFSLIP_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTR_PERPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLRFSLIP_MSB        9
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTR_PERPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLRFSLIP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTR_PERPLLRFSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLRFSLIP_SET_MSK    0x00000200
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTR_PERPLLRFSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLRFSLIP_CLR_MSK    0xfffffdff
/* The reset value of the ALT_CLKMGR_CLKMGR_INTR_PERPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLRFSLIP_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTR_PERPLLRFSLIP field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLRFSLIP_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_CLKMGR_CLKMGR_INTR_PERPLLRFSLIP register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLRFSLIP_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : Main PLL FB Slip - mainpllfbslip
 * 
 * If 1, the Main PLL feedback cycle has slipped (CLKOUT frequency too low).  This
 * does not mean the PLL has lost lock, but the quality of the clock has degraded.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTR_MAINPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLFBSLIP_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTR_MAINPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLFBSLIP_MSB        10
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTR_MAINPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLFBSLIP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTR_MAINPLLFBSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLFBSLIP_SET_MSK    0x00000400
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTR_MAINPLLFBSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLFBSLIP_CLR_MSK    0xfffffbff
/* The reset value of the ALT_CLKMGR_CLKMGR_INTR_MAINPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLFBSLIP_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTR_MAINPLLFBSLIP field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLFBSLIP_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_CLKMGR_CLKMGR_INTR_MAINPLLFBSLIP register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTR_MAINPLLFBSLIP_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : Peripheral PLL FB Slip - perpllfbslip
 * 
 * If 1, the Peripheral PLL feedback cycle has slipped (CLKOUT frequency too low).
 * This does not mean the PLL has lost lock, but the quality of the clock has
 * degraded.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTR_PERPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLFBSLIP_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTR_PERPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLFBSLIP_MSB        11
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTR_PERPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLFBSLIP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTR_PERPLLFBSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLFBSLIP_SET_MSK    0x00000800
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTR_PERPLLFBSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLFBSLIP_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_CLKMGR_CLKMGR_INTR_PERPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLFBSLIP_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTR_PERPLLFBSLIP field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLFBSLIP_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_CLKMGR_CLKMGR_INTR_PERPLLFBSLIP register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTR_PERPLLFBSLIP_SET(value) (((value) << 11) & 0x00000800)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_CLKMGR_INTR.
 */
struct ALT_CLKMGR_CLKMGR_INTR_s
{
    uint32_t  mainpllachieved :  1;  /* Main PLL Achieved Lock */
    uint32_t  perpllachieved  :  1;  /* Peripheral PLL Achieved Lock */
    uint32_t  mainplllost     :  1;  /* Main PLL Lost Lock */
    uint32_t  perplllost      :  1;  /* Peripheral PLL Lost Lock */
    uint32_t                  :  4;  /* *UNDEFINED* */
    uint32_t  mainpllrfslip   :  1;  /* Main PLL RF Slip */
    uint32_t  perpllrfslip    :  1;  /* Peripheral PLL RF Slip */
    uint32_t  mainpllfbslip   :  1;  /* Main PLL FB Slip */
    uint32_t  perpllfbslip    :  1;  /* Peripheral PLL FB Slip */
    uint32_t                  : 20;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_CLKMGR_INTR. */
typedef volatile struct ALT_CLKMGR_CLKMGR_INTR_s  ALT_CLKMGR_CLKMGR_INTR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_CLKMGR_INTR register. */
#define ALT_CLKMGR_CLKMGR_INTR_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_CLKMGR_INTR register from the beginning of the component. */
#define ALT_CLKMGR_CLKMGR_INTR_OFST        0x4

/*
 * Register : Interrupt Status Register Set - intrs
 * 
 * Contains fields that indicate the PLL lock status.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                 
 * :--------|:-------|:------|:-----------------------------
 *  [0]     | RW     | 0x0   | Main PLL Achieved Lock      
 *  [1]     | RW     | 0x0   | Peripheral PLL Achieved Lock
 *  [2]     | RW     | 0x0   | Main PLL Lost Lock          
 *  [3]     | RW     | 0x0   | Peripheral PLL Lost Lock    
 *  [7:4]   | ???    | 0x0   | *UNDEFINED*                 
 *  [8]     | RW     | 0x0   | Main PLL RF Slip            
 *  [9]     | RW     | 0x0   | Peripheral PLL RF Slip      
 *  [10]    | RW     | 0x0   | Main PLL FB Slip            
 *  [11]    | RW     | 0x0   | Peripheral PLL FB Slip      
 *  [31:12] | ???    | 0x0   | *UNDEFINED*                 
 * 
 */
/*
 * Field : Main PLL Achieved Lock - mainpllachieved
 * 
 * If 1, the Main PLL has achieved lock at least once since this bit was cleared.
 * If 0, the Main PLL has not achieved lock since this bit was cleared.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLACHIEVED_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLACHIEVED_MSB        0
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLACHIEVED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLACHIEVED register field value. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLACHIEVED_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLACHIEVED register field value. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLACHIEVED_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLACHIEVED_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLACHIEVED field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLACHIEVED_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_CLKMGR_INTRS_MAINPLLACHIEVED register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLACHIEVED_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Peripheral PLL Achieved Lock - perpllachieved
 * 
 * If 1, the Peripheral PLL has achieved lock at least once since this bit was
 * cleared. If 0, the Peripheral PLL has not achieved lock since this bit was
 * cleared.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRS_PERPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLACHIEVED_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRS_PERPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLACHIEVED_MSB        1
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRS_PERPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLACHIEVED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRS_PERPLLACHIEVED register field value. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLACHIEVED_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRS_PERPLLACHIEVED register field value. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLACHIEVED_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRS_PERPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLACHIEVED_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRS_PERPLLACHIEVED field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLACHIEVED_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_CLKMGR_INTRS_PERPLLACHIEVED register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLACHIEVED_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : Main PLL Lost Lock - mainplllost
 * 
 * If 1, the Main PLL has lost lock at least once since this bit was cleared. If 0,
 * the Main PLL has not lost lock since this bit was cleared.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLLOST_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLLOST_MSB        2
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLLOST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLLOST register field value. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLLOST_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLLOST register field value. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLLOST_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLLOST_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLLOST field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLLOST_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_CLKMGR_INTRS_MAINPLLLOST register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLLOST_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : Peripheral PLL Lost Lock - perplllost
 * 
 * If 1, the Peripheral PLL has lost lock at least once since this bit was cleared.
 * If 0, the Peripheral PLL has not lost lock since this bit was cleared.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRS_PERPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLLOST_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRS_PERPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLLOST_MSB        3
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRS_PERPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLLOST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRS_PERPLLLOST register field value. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLLOST_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRS_PERPLLLOST register field value. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLLOST_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRS_PERPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLLOST_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRS_PERPLLLOST field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLLOST_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_CLKMGR_INTRS_PERPLLLOST register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLLOST_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : Main PLL RF Slip - mainpllrfslip
 * 
 * If 1, the Main PLL reference cycle has slipped (CLKOUT frequency too high).
 * This does not mean the PLL has lost lock, but the quality of the clock has
 * degraded.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLRFSLIP_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLRFSLIP_MSB        8
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLRFSLIP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLRFSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLRFSLIP_SET_MSK    0x00000100
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLRFSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLRFSLIP_CLR_MSK    0xfffffeff
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLRFSLIP_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLRFSLIP field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLRFSLIP_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_CLKMGR_CLKMGR_INTRS_MAINPLLRFSLIP register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLRFSLIP_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : Peripheral PLL RF Slip - perpllrfslip
 * 
 * If 1, the Peripheral PLL reference cycle has slipped (CLKOUT frequency too
 * high).  This does not mean the PLL has lost lock, but the quality of the clock
 * has degraded.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRS_PERPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLRFSLIP_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRS_PERPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLRFSLIP_MSB        9
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRS_PERPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLRFSLIP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRS_PERPLLRFSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLRFSLIP_SET_MSK    0x00000200
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRS_PERPLLRFSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLRFSLIP_CLR_MSK    0xfffffdff
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRS_PERPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLRFSLIP_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRS_PERPLLRFSLIP field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLRFSLIP_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_CLKMGR_CLKMGR_INTRS_PERPLLRFSLIP register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLRFSLIP_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : Main PLL FB Slip - mainpllfbslip
 * 
 * If 1, the Main PLL feedback cycle has slipped (CLKOUT frequency too low).  This
 * does not mean the PLL has lost lock, but the quality of the clock has degraded.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLFBSLIP_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLFBSLIP_MSB        10
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLFBSLIP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLFBSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLFBSLIP_SET_MSK    0x00000400
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLFBSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLFBSLIP_CLR_MSK    0xfffffbff
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLFBSLIP_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRS_MAINPLLFBSLIP field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLFBSLIP_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_CLKMGR_CLKMGR_INTRS_MAINPLLFBSLIP register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRS_MAINPLLFBSLIP_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : Peripheral PLL FB Slip - perpllfbslip
 * 
 * If 1, the Peripheral PLL feedback cycle has slipped (CLKOUT frequency too low).
 * This does not mean the PLL has lost lock, but the quality of the clock has
 * degraded.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRS_PERPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLFBSLIP_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRS_PERPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLFBSLIP_MSB        11
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRS_PERPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLFBSLIP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRS_PERPLLFBSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLFBSLIP_SET_MSK    0x00000800
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRS_PERPLLFBSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLFBSLIP_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRS_PERPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLFBSLIP_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRS_PERPLLFBSLIP field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLFBSLIP_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_CLKMGR_CLKMGR_INTRS_PERPLLFBSLIP register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRS_PERPLLFBSLIP_SET(value) (((value) << 11) & 0x00000800)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_CLKMGR_INTRS.
 */
struct ALT_CLKMGR_CLKMGR_INTRS_s
{
    uint32_t  mainpllachieved :  1;  /* Main PLL Achieved Lock */
    uint32_t  perpllachieved  :  1;  /* Peripheral PLL Achieved Lock */
    uint32_t  mainplllost     :  1;  /* Main PLL Lost Lock */
    uint32_t  perplllost      :  1;  /* Peripheral PLL Lost Lock */
    uint32_t                  :  4;  /* *UNDEFINED* */
    uint32_t  mainpllrfslip   :  1;  /* Main PLL RF Slip */
    uint32_t  perpllrfslip    :  1;  /* Peripheral PLL RF Slip */
    uint32_t  mainpllfbslip   :  1;  /* Main PLL FB Slip */
    uint32_t  perpllfbslip    :  1;  /* Peripheral PLL FB Slip */
    uint32_t                  : 20;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_CLKMGR_INTRS. */
typedef volatile struct ALT_CLKMGR_CLKMGR_INTRS_s  ALT_CLKMGR_CLKMGR_INTRS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_CLKMGR_INTRS register. */
#define ALT_CLKMGR_CLKMGR_INTRS_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_CLKMGR_INTRS register from the beginning of the component. */
#define ALT_CLKMGR_CLKMGR_INTRS_OFST        0x8

/*
 * Register : Interrupt Status Register Reset - intrr
 * 
 * Contains fields that indicate the PLL lock status.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                 
 * :--------|:-------|:------|:-----------------------------
 *  [0]     | RW     | 0x0   | Main PLL Achieved Lock      
 *  [1]     | RW     | 0x0   | Peripheral PLL Achieved Lock
 *  [2]     | RW     | 0x0   | Main PLL Lost Lock          
 *  [3]     | RW     | 0x0   | Peripheral PLL Lost Lock    
 *  [7:4]   | ???    | 0x0   | *UNDEFINED*                 
 *  [8]     | RW     | 0x0   | Main PLL RF Slip            
 *  [9]     | RW     | 0x0   | Peripheral PLL RF Slip      
 *  [10]    | RW     | 0x0   | Main PLL FB Slip            
 *  [11]    | RW     | 0x0   | Peripheral PLL FB Slip      
 *  [31:12] | ???    | 0x0   | *UNDEFINED*                 
 * 
 */
/*
 * Field : Main PLL Achieved Lock - mainpllachieved
 * 
 * If 1, the Main PLL has achieved lock at least once since this bit was cleared.
 * If 0, the Main PLL has not achieved lock since this bit was cleared.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLACHIEVED_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLACHIEVED_MSB        0
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLACHIEVED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLACHIEVED register field value. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLACHIEVED_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLACHIEVED register field value. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLACHIEVED_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLACHIEVED_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLACHIEVED field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLACHIEVED_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_CLKMGR_INTRR_MAINPLLACHIEVED register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLACHIEVED_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Peripheral PLL Achieved Lock - perpllachieved
 * 
 * If 1, the Peripheral PLL has achieved lock at least once since this bit was
 * cleared. If 0, the Peripheral PLL has not achieved lock since this bit was
 * cleared.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRR_PERPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLACHIEVED_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRR_PERPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLACHIEVED_MSB        1
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRR_PERPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLACHIEVED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRR_PERPLLACHIEVED register field value. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLACHIEVED_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRR_PERPLLACHIEVED register field value. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLACHIEVED_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRR_PERPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLACHIEVED_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRR_PERPLLACHIEVED field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLACHIEVED_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_CLKMGR_INTRR_PERPLLACHIEVED register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLACHIEVED_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : Main PLL Lost Lock - mainplllost
 * 
 * If 1, the Main PLL has lost lock at least once since this bit was cleared. If 0,
 * the Main PLL has not lost lock since this bit was cleared.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLLOST_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLLOST_MSB        2
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLLOST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLLOST register field value. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLLOST_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLLOST register field value. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLLOST_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLLOST_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLLOST field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLLOST_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_CLKMGR_INTRR_MAINPLLLOST register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLLOST_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : Peripheral PLL Lost Lock - perplllost
 * 
 * If 1, the Peripheral PLL has lost lock at least once since this bit was cleared.
 * If 0, the Peripheral PLL has not lost lock since this bit was cleared.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRR_PERPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLLOST_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRR_PERPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLLOST_MSB        3
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRR_PERPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLLOST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRR_PERPLLLOST register field value. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLLOST_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRR_PERPLLLOST register field value. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLLOST_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRR_PERPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLLOST_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRR_PERPLLLOST field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLLOST_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_CLKMGR_INTRR_PERPLLLOST register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLLOST_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : Main PLL RF Slip - mainpllrfslip
 * 
 * If 1, the Main PLL reference cycle has slipped (CLKOUT frequency too high).
 * This does not mean the PLL has lost lock, but the quality of the clock has
 * degraded.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLRFSLIP_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLRFSLIP_MSB        8
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLRFSLIP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLRFSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLRFSLIP_SET_MSK    0x00000100
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLRFSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLRFSLIP_CLR_MSK    0xfffffeff
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLRFSLIP_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLRFSLIP field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLRFSLIP_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_CLKMGR_CLKMGR_INTRR_MAINPLLRFSLIP register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLRFSLIP_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : Peripheral PLL RF Slip - perpllrfslip
 * 
 * If 1, the Peripheral PLL reference cycle has slipped (CLKOUT frequency too
 * high).  This does not mean the PLL has lost lock, but the quality of the clock
 * has degraded.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRR_PERPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLRFSLIP_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRR_PERPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLRFSLIP_MSB        9
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRR_PERPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLRFSLIP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRR_PERPLLRFSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLRFSLIP_SET_MSK    0x00000200
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRR_PERPLLRFSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLRFSLIP_CLR_MSK    0xfffffdff
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRR_PERPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLRFSLIP_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRR_PERPLLRFSLIP field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLRFSLIP_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_CLKMGR_CLKMGR_INTRR_PERPLLRFSLIP register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLRFSLIP_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : Main PLL FB Slip - mainpllfbslip
 * 
 * If 1, the Main PLL feedback cycle has slipped (CLKOUT frequency too low).  This
 * does not mean the PLL has lost lock, but the quality of the clock has degraded.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLFBSLIP_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLFBSLIP_MSB        10
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLFBSLIP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLFBSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLFBSLIP_SET_MSK    0x00000400
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLFBSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLFBSLIP_CLR_MSK    0xfffffbff
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLFBSLIP_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRR_MAINPLLFBSLIP field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLFBSLIP_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_CLKMGR_CLKMGR_INTRR_MAINPLLFBSLIP register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRR_MAINPLLFBSLIP_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : Peripheral PLL FB Slip - perpllfbslip
 * 
 * If 1, the Peripheral PLL feedback cycle has slipped (CLKOUT frequency too low).
 * This does not mean the PLL has lost lock, but the quality of the clock has
 * degraded.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRR_PERPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLFBSLIP_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRR_PERPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLFBSLIP_MSB        11
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRR_PERPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLFBSLIP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRR_PERPLLFBSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLFBSLIP_SET_MSK    0x00000800
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRR_PERPLLFBSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLFBSLIP_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRR_PERPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLFBSLIP_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRR_PERPLLFBSLIP field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLFBSLIP_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_CLKMGR_CLKMGR_INTRR_PERPLLFBSLIP register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRR_PERPLLFBSLIP_SET(value) (((value) << 11) & 0x00000800)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_CLKMGR_INTRR.
 */
struct ALT_CLKMGR_CLKMGR_INTRR_s
{
    uint32_t  mainpllachieved :  1;  /* Main PLL Achieved Lock */
    uint32_t  perpllachieved  :  1;  /* Peripheral PLL Achieved Lock */
    uint32_t  mainplllost     :  1;  /* Main PLL Lost Lock */
    uint32_t  perplllost      :  1;  /* Peripheral PLL Lost Lock */
    uint32_t                  :  4;  /* *UNDEFINED* */
    uint32_t  mainpllrfslip   :  1;  /* Main PLL RF Slip */
    uint32_t  perpllrfslip    :  1;  /* Peripheral PLL RF Slip */
    uint32_t  mainpllfbslip   :  1;  /* Main PLL FB Slip */
    uint32_t  perpllfbslip    :  1;  /* Peripheral PLL FB Slip */
    uint32_t                  : 20;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_CLKMGR_INTRR. */
typedef volatile struct ALT_CLKMGR_CLKMGR_INTRR_s  ALT_CLKMGR_CLKMGR_INTRR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_CLKMGR_INTRR register. */
#define ALT_CLKMGR_CLKMGR_INTRR_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_CLKMGR_INTRR register from the beginning of the component. */
#define ALT_CLKMGR_CLKMGR_INTRR_OFST        0xc

/*
 * Register : Interrupt Enable Register - intren
 * 
 * Contain fields that enable the interrupt
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                  
 * :--------|:-------|:------|:----------------------------------------------
 *  [0]     | RW     | 0x0   | Main PLL Achieved Lock Interrupt Enable      
 *  [1]     | RW     | 0x0   | Peripheral PLL Achieved Lock Interrupt Enable
 *  [2]     | RW     | 0x0   | Main PLL Achieved Lock Interrupt Enable      
 *  [3]     | RW     | 0x0   | Peripheral PLL Achieved Lock Interrupt Enable
 *  [7:4]   | ???    | 0x0   | *UNDEFINED*                                  
 *  [8]     | RW     | 0x0   | Main PLL RF Slip Interrupt Enable            
 *  [9]     | RW     | 0x0   | Peripheral PLL RF Slip Interrupt Enable      
 *  [10]    | RW     | 0x0   | Main PLL FB Slip Interrupt Enable            
 *  [11]    | RW     | 0x0   | Peripheral PLL FB Slip Interrupt Enable      
 *  [31:12] | ???    | 0x0   | *UNDEFINED*                                  
 * 
 */
/*
 * Field : Main PLL Achieved Lock Interrupt Enable - mainpllachieved
 * 
 * When set to 1, the Main PLL achieved lock bit is ORed into the Clock Manager
 * interrupt output.  When set to 0 the Main PLL achieved lock bit is not ORed into
 * the Clock Manager interrupt output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLACHIEVED_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLACHIEVED_MSB        0
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLACHIEVED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLACHIEVED register field value. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLACHIEVED_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLACHIEVED register field value. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLACHIEVED_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLACHIEVED_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLACHIEVED field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLACHIEVED_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_CLKMGR_INTREN_MAINPLLACHIEVED register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLACHIEVED_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Peripheral PLL Achieved Lock Interrupt Enable - perpllachieved
 * 
 * When set to 1, the Peripheral PLL achieved lock bit is ORed into the Clock
 * Manager interrupt output.  When set to 0 the Peripheral PLL achieved lock bit is
 * not ORed into the Clock Manager interrupt output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTREN_PERPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLACHIEVED_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTREN_PERPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLACHIEVED_MSB        1
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTREN_PERPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLACHIEVED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTREN_PERPLLACHIEVED register field value. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLACHIEVED_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTREN_PERPLLACHIEVED register field value. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLACHIEVED_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_CLKMGR_INTREN_PERPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLACHIEVED_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTREN_PERPLLACHIEVED field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLACHIEVED_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_CLKMGR_INTREN_PERPLLACHIEVED register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLACHIEVED_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : Main PLL Achieved Lock Interrupt Enable - mainplllost
 * 
 * When set to 1, the Main PLL lost lock bit is ORed into the Clock Manager
 * interrupt output.  When set to 0 the Main PLL lost lock bit is not ORed into the
 * Clock Manager interrupt output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLLOST_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLLOST_MSB        2
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLLOST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLLOST register field value. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLLOST_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLLOST register field value. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLLOST_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLLOST_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLLOST field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLLOST_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_CLKMGR_INTREN_MAINPLLLOST register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLLOST_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : Peripheral PLL Achieved Lock Interrupt Enable - perplllost
 * 
 * When set to 1, the Peripheral PLL lost lock bit is ORed into the Clock Manager
 * interrupt output.  When set to 0 the Peripheral PLL lost lock bit is not ORed
 * into the Clock Manager interrupt output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTREN_PERPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLLOST_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTREN_PERPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLLOST_MSB        3
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTREN_PERPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLLOST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTREN_PERPLLLOST register field value. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLLOST_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTREN_PERPLLLOST register field value. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLLOST_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_CLKMGR_INTREN_PERPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLLOST_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTREN_PERPLLLOST field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLLOST_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_CLKMGR_INTREN_PERPLLLOST register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLLOST_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : Main PLL RF Slip Interrupt Enable - mainpllrfslip
 * 
 * When set to 1,the Main PLL reference cycle slipped bit is ORed into the Clock
 * Manager interrupt output.  When set to 0, the Main PLL reference cylce slipped
 * bit is Ored into the Clock Manager interrupt output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLRFSLIP_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLRFSLIP_MSB        8
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLRFSLIP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLRFSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLRFSLIP_SET_MSK    0x00000100
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLRFSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLRFSLIP_CLR_MSK    0xfffffeff
/* The reset value of the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLRFSLIP_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLRFSLIP field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLRFSLIP_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_CLKMGR_CLKMGR_INTREN_MAINPLLRFSLIP register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLRFSLIP_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : Peripheral PLL RF Slip Interrupt Enable - perpllrfslip
 * 
 * When set to 1,the Peripheral PLL reference cycle slipped bit is ORed into the
 * Clock Manager interrupt output.  When set to 0, the Peripheral PLL reference
 * cylce slipped bit is Ored into the Clock Manager interrupt output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTREN_PERPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLRFSLIP_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTREN_PERPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLRFSLIP_MSB        9
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTREN_PERPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLRFSLIP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTREN_PERPLLRFSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLRFSLIP_SET_MSK    0x00000200
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTREN_PERPLLRFSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLRFSLIP_CLR_MSK    0xfffffdff
/* The reset value of the ALT_CLKMGR_CLKMGR_INTREN_PERPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLRFSLIP_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTREN_PERPLLRFSLIP field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLRFSLIP_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_CLKMGR_CLKMGR_INTREN_PERPLLRFSLIP register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLRFSLIP_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : Main PLL FB Slip Interrupt Enable - mainpllfbslip
 * 
 * When set to 1,the Main PLL feedback cycle slipped bit is ORed into the Clock
 * Manager interrupt output.  When set to 0, the Main PLL feedback cylce slipped
 * bit is Ored into the Clock Manager interrupt output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLFBSLIP_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLFBSLIP_MSB        10
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLFBSLIP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLFBSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLFBSLIP_SET_MSK    0x00000400
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLFBSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLFBSLIP_CLR_MSK    0xfffffbff
/* The reset value of the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLFBSLIP_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTREN_MAINPLLFBSLIP field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLFBSLIP_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_CLKMGR_CLKMGR_INTREN_MAINPLLFBSLIP register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTREN_MAINPLLFBSLIP_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : Peripheral PLL FB Slip Interrupt Enable - perpllfbslip
 * 
 * When set to 1,the Peripheral PLL feedback cycle slipped bit is ORed into the
 * Clock Manager interrupt output.  When set to 0, the Peripheral PLL feedback
 * cylce slipped bit is Ored into the Clock Manager interrupt output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTREN_PERPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLFBSLIP_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTREN_PERPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLFBSLIP_MSB        11
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTREN_PERPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLFBSLIP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTREN_PERPLLFBSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLFBSLIP_SET_MSK    0x00000800
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTREN_PERPLLFBSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLFBSLIP_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_CLKMGR_CLKMGR_INTREN_PERPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLFBSLIP_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTREN_PERPLLFBSLIP field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLFBSLIP_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_CLKMGR_CLKMGR_INTREN_PERPLLFBSLIP register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTREN_PERPLLFBSLIP_SET(value) (((value) << 11) & 0x00000800)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_CLKMGR_INTREN.
 */
struct ALT_CLKMGR_CLKMGR_INTREN_s
{
    uint32_t  mainpllachieved :  1;  /* Main PLL Achieved Lock Interrupt Enable */
    uint32_t  perpllachieved  :  1;  /* Peripheral PLL Achieved Lock Interrupt Enable */
    uint32_t  mainplllost     :  1;  /* Main PLL Achieved Lock Interrupt Enable */
    uint32_t  perplllost      :  1;  /* Peripheral PLL Achieved Lock Interrupt Enable */
    uint32_t                  :  4;  /* *UNDEFINED* */
    uint32_t  mainpllrfslip   :  1;  /* Main PLL RF Slip Interrupt Enable */
    uint32_t  perpllrfslip    :  1;  /* Peripheral PLL RF Slip Interrupt Enable */
    uint32_t  mainpllfbslip   :  1;  /* Main PLL FB Slip Interrupt Enable */
    uint32_t  perpllfbslip    :  1;  /* Peripheral PLL FB Slip Interrupt Enable */
    uint32_t                  : 20;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_CLKMGR_INTREN. */
typedef volatile struct ALT_CLKMGR_CLKMGR_INTREN_s  ALT_CLKMGR_CLKMGR_INTREN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_CLKMGR_INTREN register. */
#define ALT_CLKMGR_CLKMGR_INTREN_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_CLKMGR_INTREN register from the beginning of the component. */
#define ALT_CLKMGR_CLKMGR_INTREN_OFST        0x10

/*
 * Register : Interrupt Enable Register Set - intrens
 * 
 * Contain fields that enable the interrupt
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                  
 * :--------|:-------|:------|:----------------------------------------------
 *  [0]     | RW     | 0x0   | Main PLL Achieved Lock Interrupt Enable      
 *  [1]     | RW     | 0x0   | Peripheral PLL Achieved Lock Interrupt Enable
 *  [2]     | RW     | 0x0   | Main PLL Achieved Lock Interrupt Enable      
 *  [3]     | RW     | 0x0   | Peripheral PLL Achieved Lock Interrupt Enable
 *  [7:4]   | ???    | 0x0   | *UNDEFINED*                                  
 *  [8]     | RW     | 0x0   | Main PLL RF Slip Interrupt Enable            
 *  [9]     | RW     | 0x0   | Peripheral PLL RF Slip Interrupt Enable      
 *  [10]    | RW     | 0x0   | Main PLL FB Slip Interrupt Enable            
 *  [11]    | RW     | 0x0   | Peripheral PLL FB Slip Interrupt Enable      
 *  [31:12] | ???    | 0x0   | *UNDEFINED*                                  
 * 
 */
/*
 * Field : Main PLL Achieved Lock Interrupt Enable - mainpllachieved
 * 
 * When set to 1, the Main PLL achieved lock bit is ORed into the Clock Manager
 * interrupt output.  When set to 0 the Main PLL achieved lock bit is not ORed into
 * the Clock Manager interrupt output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLACHIEVED_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLACHIEVED_MSB        0
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLACHIEVED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLACHIEVED register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLACHIEVED_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLACHIEVED register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLACHIEVED_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLACHIEVED_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLACHIEVED field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLACHIEVED_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLACHIEVED register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLACHIEVED_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Peripheral PLL Achieved Lock Interrupt Enable - perpllachieved
 * 
 * When set to 1, the Peripheral PLL achieved lock bit is ORed into the Clock
 * Manager interrupt output.  When set to 0 the Peripheral PLL achieved lock bit is
 * not ORed into the Clock Manager interrupt output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLACHIEVED_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLACHIEVED_MSB        1
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLACHIEVED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLACHIEVED register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLACHIEVED_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLACHIEVED register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLACHIEVED_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLACHIEVED_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLACHIEVED field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLACHIEVED_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_CLKMGR_INTRENS_PERPLLACHIEVED register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLACHIEVED_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : Main PLL Achieved Lock Interrupt Enable - mainplllost
 * 
 * When set to 1, the Main PLL lost lock bit is ORed into the Clock Manager
 * interrupt output.  When set to 0 the Main PLL lost lock bit is not ORed into the
 * Clock Manager interrupt output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLLOST_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLLOST_MSB        2
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLLOST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLLOST register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLLOST_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLLOST register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLLOST_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLLOST_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLLOST field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLLOST_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLLOST register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLLOST_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : Peripheral PLL Achieved Lock Interrupt Enable - perplllost
 * 
 * When set to 1, the Peripheral PLL lost lock bit is ORed into the Clock Manager
 * interrupt output.  When set to 0 the Peripheral PLL lost lock bit is not ORed
 * into the Clock Manager interrupt output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLLOST_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLLOST_MSB        3
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLLOST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLLOST register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLLOST_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLLOST register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLLOST_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLLOST_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLLOST field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLLOST_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_CLKMGR_INTRENS_PERPLLLOST register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLLOST_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : Main PLL RF Slip Interrupt Enable - mainpllrfslip
 * 
 * When set to 1,the Main PLL reference cycle slipped bit is ORed into the Clock
 * Manager interrupt output.  When set to 0, the Main PLL reference cylce slipped
 * bit is Ored into the Clock Manager interrupt output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLRFSLIP_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLRFSLIP_MSB        8
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLRFSLIP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLRFSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLRFSLIP_SET_MSK    0x00000100
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLRFSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLRFSLIP_CLR_MSK    0xfffffeff
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLRFSLIP_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLRFSLIP field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLRFSLIP_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLRFSLIP register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLRFSLIP_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : Peripheral PLL RF Slip Interrupt Enable - perpllrfslip
 * 
 * When set to 1,the Peripheral PLL reference cycle slipped bit is ORed into the
 * Clock Manager interrupt output.  When set to 0, the Peripheral PLL reference
 * cylce slipped bit is Ored into the Clock Manager interrupt output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLRFSLIP_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLRFSLIP_MSB        9
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLRFSLIP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLRFSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLRFSLIP_SET_MSK    0x00000200
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLRFSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLRFSLIP_CLR_MSK    0xfffffdff
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLRFSLIP_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLRFSLIP field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLRFSLIP_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_CLKMGR_CLKMGR_INTRENS_PERPLLRFSLIP register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLRFSLIP_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : Main PLL FB Slip Interrupt Enable - mainpllfbslip
 * 
 * When set to 1,the Main PLL feedback cycle slipped bit is ORed into the Clock
 * Manager interrupt output.  When set to 0, the Main PLL feedback cylce slipped
 * bit is Ored into the Clock Manager interrupt output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLFBSLIP_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLFBSLIP_MSB        10
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLFBSLIP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLFBSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLFBSLIP_SET_MSK    0x00000400
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLFBSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLFBSLIP_CLR_MSK    0xfffffbff
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLFBSLIP_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLFBSLIP field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLFBSLIP_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLFBSLIP register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRENS_MAINPLLFBSLIP_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : Peripheral PLL FB Slip Interrupt Enable - perpllfbslip
 * 
 * When set to 1,the Peripheral PLL feedback cycle slipped bit is ORed into the
 * Clock Manager interrupt output.  When set to 0, the Peripheral PLL feedback
 * cylce slipped bit is Ored into the Clock Manager interrupt output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLFBSLIP_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLFBSLIP_MSB        11
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLFBSLIP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLFBSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLFBSLIP_SET_MSK    0x00000800
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLFBSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLFBSLIP_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLFBSLIP_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRENS_PERPLLFBSLIP field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLFBSLIP_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_CLKMGR_CLKMGR_INTRENS_PERPLLFBSLIP register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRENS_PERPLLFBSLIP_SET(value) (((value) << 11) & 0x00000800)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_CLKMGR_INTRENS.
 */
struct ALT_CLKMGR_CLKMGR_INTRENS_s
{
    uint32_t  mainpllachieved :  1;  /* Main PLL Achieved Lock Interrupt Enable */
    uint32_t  perpllachieved  :  1;  /* Peripheral PLL Achieved Lock Interrupt Enable */
    uint32_t  mainplllost     :  1;  /* Main PLL Achieved Lock Interrupt Enable */
    uint32_t  perplllost      :  1;  /* Peripheral PLL Achieved Lock Interrupt Enable */
    uint32_t                  :  4;  /* *UNDEFINED* */
    uint32_t  mainpllrfslip   :  1;  /* Main PLL RF Slip Interrupt Enable */
    uint32_t  perpllrfslip    :  1;  /* Peripheral PLL RF Slip Interrupt Enable */
    uint32_t  mainpllfbslip   :  1;  /* Main PLL FB Slip Interrupt Enable */
    uint32_t  perpllfbslip    :  1;  /* Peripheral PLL FB Slip Interrupt Enable */
    uint32_t                  : 20;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_CLKMGR_INTRENS. */
typedef volatile struct ALT_CLKMGR_CLKMGR_INTRENS_s  ALT_CLKMGR_CLKMGR_INTRENS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_CLKMGR_INTRENS register. */
#define ALT_CLKMGR_CLKMGR_INTRENS_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_CLKMGR_INTRENS register from the beginning of the component. */
#define ALT_CLKMGR_CLKMGR_INTRENS_OFST        0x14

/*
 * Register : Interrupt Enable Register Reset - intrenr
 * 
 * Contain fields that enable the interrupt
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                  
 * :--------|:-------|:------|:----------------------------------------------
 *  [0]     | RW     | 0x0   | Main PLL Achieved Lock Interrupt Enable      
 *  [1]     | RW     | 0x0   | Peripheral PLL Achieved Lock Interrupt Enable
 *  [2]     | RW     | 0x0   | Main PLL Achieved Lock Interrupt Enable      
 *  [3]     | RW     | 0x0   | Peripheral PLL Achieved Lock Interrupt Enable
 *  [7:4]   | ???    | 0x0   | *UNDEFINED*                                  
 *  [8]     | RW     | 0x0   | Main PLL RF Slip Interrupt Enable            
 *  [9]     | RW     | 0x0   | Peripheral PLL RF Slip Interrupt Enable      
 *  [10]    | RW     | 0x0   | Main PLL FB Slip Interrupt Enable            
 *  [11]    | RW     | 0x0   | Peripheral PLL FB Slip Interrupt Enable      
 *  [31:12] | ???    | 0x0   | *UNDEFINED*                                  
 * 
 */
/*
 * Field : Main PLL Achieved Lock Interrupt Enable - mainpllachieved
 * 
 * When set to 1, the Main PLL achieved lock bit is ORed into the Clock Manager
 * interrupt output.  When set to 0 the Main PLL achieved lock bit is not ORed into
 * the Clock Manager interrupt output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLACHIEVED_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLACHIEVED_MSB        0
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLACHIEVED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLACHIEVED register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLACHIEVED_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLACHIEVED register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLACHIEVED_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLACHIEVED_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLACHIEVED field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLACHIEVED_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLACHIEVED register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLACHIEVED_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Peripheral PLL Achieved Lock Interrupt Enable - perpllachieved
 * 
 * When set to 1, the Peripheral PLL achieved lock bit is ORed into the Clock
 * Manager interrupt output.  When set to 0 the Peripheral PLL achieved lock bit is
 * not ORed into the Clock Manager interrupt output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLACHIEVED_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLACHIEVED_MSB        1
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLACHIEVED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLACHIEVED register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLACHIEVED_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLACHIEVED register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLACHIEVED_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLACHIEVED register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLACHIEVED_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLACHIEVED field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLACHIEVED_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_CLKMGR_INTRENR_PERPLLACHIEVED register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLACHIEVED_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : Main PLL Achieved Lock Interrupt Enable - mainplllost
 * 
 * When set to 1, the Main PLL lost lock bit is ORed into the Clock Manager
 * interrupt output.  When set to 0 the Main PLL lost lock bit is not ORed into the
 * Clock Manager interrupt output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLLOST_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLLOST_MSB        2
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLLOST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLLOST register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLLOST_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLLOST register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLLOST_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLLOST_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLLOST field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLLOST_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLLOST register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLLOST_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : Peripheral PLL Achieved Lock Interrupt Enable - perplllost
 * 
 * When set to 1, the Peripheral PLL lost lock bit is ORed into the Clock Manager
 * interrupt output.  When set to 0 the Peripheral PLL lost lock bit is not ORed
 * into the Clock Manager interrupt output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLLOST_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLLOST_MSB        3
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLLOST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLLOST register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLLOST_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLLOST register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLLOST_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLLOST register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLLOST_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLLOST field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLLOST_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_CLKMGR_INTRENR_PERPLLLOST register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLLOST_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : Main PLL RF Slip Interrupt Enable - mainpllrfslip
 * 
 * When set to 1,the Main PLL reference cycle slipped bit is ORed into the Clock
 * Manager interrupt output.  When set to 0, the Main PLL reference cylce slipped
 * bit is Ored into the Clock Manager interrupt output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLRFSLIP_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLRFSLIP_MSB        8
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLRFSLIP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLRFSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLRFSLIP_SET_MSK    0x00000100
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLRFSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLRFSLIP_CLR_MSK    0xfffffeff
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLRFSLIP_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLRFSLIP field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLRFSLIP_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLRFSLIP register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLRFSLIP_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : Peripheral PLL RF Slip Interrupt Enable - perpllrfslip
 * 
 * When set to 1,the Peripheral PLL reference cycle slipped bit is ORed into the
 * Clock Manager interrupt output.  When set to 0, the Peripheral PLL reference
 * cylce slipped bit is Ored into the Clock Manager interrupt output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLRFSLIP_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLRFSLIP_MSB        9
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLRFSLIP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLRFSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLRFSLIP_SET_MSK    0x00000200
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLRFSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLRFSLIP_CLR_MSK    0xfffffdff
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLRFSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLRFSLIP_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLRFSLIP field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLRFSLIP_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_CLKMGR_CLKMGR_INTRENR_PERPLLRFSLIP register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLRFSLIP_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : Main PLL FB Slip Interrupt Enable - mainpllfbslip
 * 
 * When set to 1,the Main PLL feedback cycle slipped bit is ORed into the Clock
 * Manager interrupt output.  When set to 0, the Main PLL feedback cylce slipped
 * bit is Ored into the Clock Manager interrupt output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLFBSLIP_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLFBSLIP_MSB        10
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLFBSLIP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLFBSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLFBSLIP_SET_MSK    0x00000400
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLFBSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLFBSLIP_CLR_MSK    0xfffffbff
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLFBSLIP_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLFBSLIP field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLFBSLIP_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLFBSLIP register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRENR_MAINPLLFBSLIP_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : Peripheral PLL FB Slip Interrupt Enable - perpllfbslip
 * 
 * When set to 1,the Peripheral PLL feedback cycle slipped bit is ORed into the
 * Clock Manager interrupt output.  When set to 0, the Peripheral PLL feedback
 * cylce slipped bit is Ored into the Clock Manager interrupt output.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLFBSLIP_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLFBSLIP_MSB        11
/* The width in bits of the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLFBSLIP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLFBSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLFBSLIP_SET_MSK    0x00000800
/* The mask used to clear the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLFBSLIP register field value. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLFBSLIP_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLFBSLIP register field. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLFBSLIP_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_INTRENR_PERPLLFBSLIP field value from a register. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLFBSLIP_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_CLKMGR_CLKMGR_INTRENR_PERPLLFBSLIP register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_INTRENR_PERPLLFBSLIP_SET(value) (((value) << 11) & 0x00000800)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_CLKMGR_INTRENR.
 */
struct ALT_CLKMGR_CLKMGR_INTRENR_s
{
    uint32_t  mainpllachieved :  1;  /* Main PLL Achieved Lock Interrupt Enable */
    uint32_t  perpllachieved  :  1;  /* Peripheral PLL Achieved Lock Interrupt Enable */
    uint32_t  mainplllost     :  1;  /* Main PLL Achieved Lock Interrupt Enable */
    uint32_t  perplllost      :  1;  /* Peripheral PLL Achieved Lock Interrupt Enable */
    uint32_t                  :  4;  /* *UNDEFINED* */
    uint32_t  mainpllrfslip   :  1;  /* Main PLL RF Slip Interrupt Enable */
    uint32_t  perpllrfslip    :  1;  /* Peripheral PLL RF Slip Interrupt Enable */
    uint32_t  mainpllfbslip   :  1;  /* Main PLL FB Slip Interrupt Enable */
    uint32_t  perpllfbslip    :  1;  /* Peripheral PLL FB Slip Interrupt Enable */
    uint32_t                  : 20;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_CLKMGR_INTRENR. */
typedef volatile struct ALT_CLKMGR_CLKMGR_INTRENR_s  ALT_CLKMGR_CLKMGR_INTRENR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_CLKMGR_INTRENR register. */
#define ALT_CLKMGR_CLKMGR_INTRENR_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_CLKMGR_INTRENR register from the beginning of the component. */
#define ALT_CLKMGR_CLKMGR_INTRENR_OFST        0x18

/*
 * Register : Status Register - stat
 * 
 * Provides status for Clock Manager including PLL lock and HW Managed Clock State
 * Machine busy.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                       
 * :--------|:-------|:------|:-----------------------------------
 *  [0]     | R      | 0x0   | HW Managed Clocks BUSY            
 *  [7:1]   | ???    | 0x0   | *UNDEFINED*                       
 *  [8]     | R      | 0x0   | Main PLL Current Lock Status      
 *  [9]     | R      | 0x0   | Peripheral PLL Current Lock Status
 *  [15:10] | ???    | 0x0   | *UNDEFINED*                       
 *  [16]    | R      | 0x1   | Boot Mode Status                  
 *  [17]    | R      | 0x0   | Boot Clock Source Status          
 *  [31:18] | ???    | 0x0   | *UNDEFINED*                       
 * 
 */
/*
 * Field : HW Managed Clocks BUSY - busy
 * 
 * This read only bit indicates that the Hardware Managed clock's state machine is
 * active.  If the state machine is active, then the clocks are in transition.
 * Software should poll this bit after changing the source of internal clocks when
 * changing the state of CTRL.BOOTMODE, MAINPLLGRP.BYPASS.MPU or
 * MAINPLLGRP.BYPASS.NOC register bits.   Immediately following writes to any of
 * these registers, SW should wait 0.5 usecs and then poll this BUSY bit until it
 * is IDLE before proceeding with any other register writes in the Clock Manager.
 * 
 * The reset value of this bit is applied on a cold reset; warm reset has no affect
 * on this bit.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                               | Value | Description         
 * :-----------------------------------|:------|:---------------------
 *  ALT_CLKMGR_CLKMGR_STAT_BUSY_E_IDLE | 0x0   | Clocks stable       
 *  ALT_CLKMGR_CLKMGR_STAT_BUSY_E_BUSY | 0x1   | Clocks in transition
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_CLKMGR_STAT_BUSY
 * 
 * Clocks stable
 */
#define ALT_CLKMGR_CLKMGR_STAT_BUSY_E_IDLE  0x0
/*
 * Enumerated value for register field ALT_CLKMGR_CLKMGR_STAT_BUSY
 * 
 * Clocks in transition
 */
#define ALT_CLKMGR_CLKMGR_STAT_BUSY_E_BUSY  0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_STAT_BUSY register field. */
#define ALT_CLKMGR_CLKMGR_STAT_BUSY_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_STAT_BUSY register field. */
#define ALT_CLKMGR_CLKMGR_STAT_BUSY_MSB        0
/* The width in bits of the ALT_CLKMGR_CLKMGR_STAT_BUSY register field. */
#define ALT_CLKMGR_CLKMGR_STAT_BUSY_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_STAT_BUSY register field value. */
#define ALT_CLKMGR_CLKMGR_STAT_BUSY_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_CLKMGR_STAT_BUSY register field value. */
#define ALT_CLKMGR_CLKMGR_STAT_BUSY_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_CLKMGR_STAT_BUSY register field. */
#define ALT_CLKMGR_CLKMGR_STAT_BUSY_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_STAT_BUSY field value from a register. */
#define ALT_CLKMGR_CLKMGR_STAT_BUSY_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_CLKMGR_STAT_BUSY register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_STAT_BUSY_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Main PLL Current Lock Status - mainplllocked
 * 
 * If 1, the Main PLL is currently locked. If 0, the Main PLL is currently not
 * locked.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_STAT_MAINPLLLOCKED register field. */
#define ALT_CLKMGR_CLKMGR_STAT_MAINPLLLOCKED_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_STAT_MAINPLLLOCKED register field. */
#define ALT_CLKMGR_CLKMGR_STAT_MAINPLLLOCKED_MSB        8
/* The width in bits of the ALT_CLKMGR_CLKMGR_STAT_MAINPLLLOCKED register field. */
#define ALT_CLKMGR_CLKMGR_STAT_MAINPLLLOCKED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_STAT_MAINPLLLOCKED register field value. */
#define ALT_CLKMGR_CLKMGR_STAT_MAINPLLLOCKED_SET_MSK    0x00000100
/* The mask used to clear the ALT_CLKMGR_CLKMGR_STAT_MAINPLLLOCKED register field value. */
#define ALT_CLKMGR_CLKMGR_STAT_MAINPLLLOCKED_CLR_MSK    0xfffffeff
/* The reset value of the ALT_CLKMGR_CLKMGR_STAT_MAINPLLLOCKED register field. */
#define ALT_CLKMGR_CLKMGR_STAT_MAINPLLLOCKED_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_STAT_MAINPLLLOCKED field value from a register. */
#define ALT_CLKMGR_CLKMGR_STAT_MAINPLLLOCKED_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_CLKMGR_CLKMGR_STAT_MAINPLLLOCKED register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_STAT_MAINPLLLOCKED_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : Peripheral PLL Current Lock Status - perplllocked
 * 
 * If 1, the Peripheral PLL is currently locked. If 0, the Peripheral PLL is
 * currently not locked.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_STAT_PERPLLLOCKED register field. */
#define ALT_CLKMGR_CLKMGR_STAT_PERPLLLOCKED_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_STAT_PERPLLLOCKED register field. */
#define ALT_CLKMGR_CLKMGR_STAT_PERPLLLOCKED_MSB        9
/* The width in bits of the ALT_CLKMGR_CLKMGR_STAT_PERPLLLOCKED register field. */
#define ALT_CLKMGR_CLKMGR_STAT_PERPLLLOCKED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_STAT_PERPLLLOCKED register field value. */
#define ALT_CLKMGR_CLKMGR_STAT_PERPLLLOCKED_SET_MSK    0x00000200
/* The mask used to clear the ALT_CLKMGR_CLKMGR_STAT_PERPLLLOCKED register field value. */
#define ALT_CLKMGR_CLKMGR_STAT_PERPLLLOCKED_CLR_MSK    0xfffffdff
/* The reset value of the ALT_CLKMGR_CLKMGR_STAT_PERPLLLOCKED register field. */
#define ALT_CLKMGR_CLKMGR_STAT_PERPLLLOCKED_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_STAT_PERPLLLOCKED field value from a register. */
#define ALT_CLKMGR_CLKMGR_STAT_PERPLLLOCKED_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_CLKMGR_CLKMGR_STAT_PERPLLLOCKED register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_STAT_PERPLLLOCKED_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : Boot Mode Status - bootmode
 * 
 * If 1, the clocks are currently in Boot Mode. If 0, the clocks are not in Boot
 * Mode.
 * 
 * This is a read only status.  For SW to exit Boot Mode, SW must clear the RW bit
 * CTRL.BOOTMODE.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_STAT_BOOTMOD register field. */
#define ALT_CLKMGR_CLKMGR_STAT_BOOTMOD_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_STAT_BOOTMOD register field. */
#define ALT_CLKMGR_CLKMGR_STAT_BOOTMOD_MSB        16
/* The width in bits of the ALT_CLKMGR_CLKMGR_STAT_BOOTMOD register field. */
#define ALT_CLKMGR_CLKMGR_STAT_BOOTMOD_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_STAT_BOOTMOD register field value. */
#define ALT_CLKMGR_CLKMGR_STAT_BOOTMOD_SET_MSK    0x00010000
/* The mask used to clear the ALT_CLKMGR_CLKMGR_STAT_BOOTMOD register field value. */
#define ALT_CLKMGR_CLKMGR_STAT_BOOTMOD_CLR_MSK    0xfffeffff
/* The reset value of the ALT_CLKMGR_CLKMGR_STAT_BOOTMOD register field. */
#define ALT_CLKMGR_CLKMGR_STAT_BOOTMOD_RESET      0x1
/* Extracts the ALT_CLKMGR_CLKMGR_STAT_BOOTMOD field value from a register. */
#define ALT_CLKMGR_CLKMGR_STAT_BOOTMOD_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_CLKMGR_CLKMGR_STAT_BOOTMOD register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_STAT_BOOTMOD_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : Boot Clock Source Status - bootclksrc
 * 
 * If 1, the source of boot_clk is cb_intosc_hs_div2_clk.  . If 0, the boot_clk
 * source is the external oscillator (EOSC1).
 * 
 * This is a read only status.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_STAT_BOOTCLKSRC register field. */
#define ALT_CLKMGR_CLKMGR_STAT_BOOTCLKSRC_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_STAT_BOOTCLKSRC register field. */
#define ALT_CLKMGR_CLKMGR_STAT_BOOTCLKSRC_MSB        17
/* The width in bits of the ALT_CLKMGR_CLKMGR_STAT_BOOTCLKSRC register field. */
#define ALT_CLKMGR_CLKMGR_STAT_BOOTCLKSRC_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CLKMGR_STAT_BOOTCLKSRC register field value. */
#define ALT_CLKMGR_CLKMGR_STAT_BOOTCLKSRC_SET_MSK    0x00020000
/* The mask used to clear the ALT_CLKMGR_CLKMGR_STAT_BOOTCLKSRC register field value. */
#define ALT_CLKMGR_CLKMGR_STAT_BOOTCLKSRC_CLR_MSK    0xfffdffff
/* The reset value of the ALT_CLKMGR_CLKMGR_STAT_BOOTCLKSRC register field. */
#define ALT_CLKMGR_CLKMGR_STAT_BOOTCLKSRC_RESET      0x0
/* Extracts the ALT_CLKMGR_CLKMGR_STAT_BOOTCLKSRC field value from a register. */
#define ALT_CLKMGR_CLKMGR_STAT_BOOTCLKSRC_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_CLKMGR_CLKMGR_STAT_BOOTCLKSRC register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_STAT_BOOTCLKSRC_SET(value) (((value) << 17) & 0x00020000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_CLKMGR_STAT.
 */
struct ALT_CLKMGR_CLKMGR_STAT_s
{
    const uint32_t  busy          :  1;  /* HW Managed Clocks BUSY */
    uint32_t                      :  7;  /* *UNDEFINED* */
    const uint32_t  mainplllocked :  1;  /* Main PLL Current Lock Status */
    const uint32_t  perplllocked  :  1;  /* Peripheral PLL Current Lock Status */
    uint32_t                      :  6;  /* *UNDEFINED* */
    const uint32_t  bootmode      :  1;  /* Boot Mode Status */
    const uint32_t  bootclksrc    :  1;  /* Boot Clock Source Status */
    uint32_t                      : 14;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_CLKMGR_STAT. */
typedef volatile struct ALT_CLKMGR_CLKMGR_STAT_s  ALT_CLKMGR_CLKMGR_STAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_CLKMGR_STAT register. */
#define ALT_CLKMGR_CLKMGR_STAT_RESET       0x00010000
/* The byte offset of the ALT_CLKMGR_CLKMGR_STAT register from the beginning of the component. */
#define ALT_CLKMGR_CLKMGR_STAT_OFST        0x1c

/*
 * Register : Test IO Control Register - testioctrl
 * 
 * Contains fields setting the IO output select for Test Clock and Debug outputs.
 * The dedicated IO outputs includes two outputs for the Main PLL clock outputs
 * (PLL_CLK0 and PLL_CLK1), two outputs for the Peripheral PLL clock outputs
 * (PLL_CLK2 and PLL_CLK3), and one output for miscelaneous debug for the Main and
 * Peripheral PLL (PLL_CLK4).
 * 
 * The Test Clock and Debug outputs will only propigate to the dedicated IO based
 * on the IO pinmux configuration.  If Test Clocks are selected in the pinmux, then
 * the selects in this register determine which PLL clocks and PLL debug signals
 * will propigate to the IOs.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description            
 * :--------|:-------|:------|:------------------------
 *  [3:0]   | RW     | 0x8   | Main Clock Select      
 *  [7:4]   | ???    | 0x0   | *UNDEFINED*            
 *  [11:8]  | RW     | 0x8   | Peripheral Clock Select
 *  [15:12] | ???    | 0x0   | *UNDEFINED*            
 *  [20:16] | RW     | 0x10  | Debug Clock Select     
 *  [31:21] | ???    | 0x0   | *UNDEFINED*            
 * 
 */
/*
 * Field : Main Clock Select - mainclksel
 * 
 * Selects the source of PLL_CLK0 and PLL_CLK1 dedicated IO outputs if selected.
 * All of the CLKOUT# counter outputs are from the Main PLL.
 * 
 * The following table determines the PLL counter output select:
 * 
 * sel                     PLL_CLK0                PLL_CLK1
 * 
 * 0000            CLKOUT0         CLKOUT8
 * 
 * 0001            CLKOUT1         CLKOUT9
 * 
 * 0010            CLKOUT2         CLKOUT10
 * 
 * 0011            CLKOUT3         CLKOUT11
 * 
 * 0100            CLKOUT4         CLKOUT13
 * 
 * 0101            CLKOUT5         CLKOUT14
 * 
 * 0110            CLKOUT6         CLKOUT15
 * 
 * 0111            CLKOUT7         CLKOUT16
 * 
 * 1xxx            VSS                             VSS
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_TESTIOCTL_MAINCLKSEL register field. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_MAINCLKSEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_TESTIOCTL_MAINCLKSEL register field. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_MAINCLKSEL_MSB        3
/* The width in bits of the ALT_CLKMGR_CLKMGR_TESTIOCTL_MAINCLKSEL register field. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_MAINCLKSEL_WIDTH      4
/* The mask used to set the ALT_CLKMGR_CLKMGR_TESTIOCTL_MAINCLKSEL register field value. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_MAINCLKSEL_SET_MSK    0x0000000f
/* The mask used to clear the ALT_CLKMGR_CLKMGR_TESTIOCTL_MAINCLKSEL register field value. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_MAINCLKSEL_CLR_MSK    0xfffffff0
/* The reset value of the ALT_CLKMGR_CLKMGR_TESTIOCTL_MAINCLKSEL register field. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_MAINCLKSEL_RESET      0x8
/* Extracts the ALT_CLKMGR_CLKMGR_TESTIOCTL_MAINCLKSEL field value from a register. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_MAINCLKSEL_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_CLKMGR_CLKMGR_TESTIOCTL_MAINCLKSEL register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_MAINCLKSEL_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : Peripheral Clock Select - periclksel
 * 
 * Selects the source of PLL_CLK2 and PLL_CLK3 dedicated IO outputs if selected.
 * All of the CLKOUT# counter outputs are from the Peripheral PLL.
 * 
 * The following table determines the PLL counter output select:
 * 
 * sel                     PLL_CLK2                PLL_CLK3
 * 
 * 0000            CLKOUT0         CLKOUT8
 * 
 * 0001            CLKOUT1         CLKOUT9
 * 
 * 0010            CLKOUT2         CLKOUT10
 * 
 * 0011            CLKOUT3         CLKOUT11
 * 
 * 0100            CLKOUT4         CLKOUT13
 * 
 * 0101            CLKOUT5         CLKOUT14
 * 
 * 0110            CLKOUT6         CLKOUT15
 * 
 * 0111            CLKOUT7         CLKOUT16
 * 
 * 1xxx            VSS                             VSS
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_TESTIOCTL_PERICLKSEL register field. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_PERICLKSEL_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_TESTIOCTL_PERICLKSEL register field. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_PERICLKSEL_MSB        11
/* The width in bits of the ALT_CLKMGR_CLKMGR_TESTIOCTL_PERICLKSEL register field. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_PERICLKSEL_WIDTH      4
/* The mask used to set the ALT_CLKMGR_CLKMGR_TESTIOCTL_PERICLKSEL register field value. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_PERICLKSEL_SET_MSK    0x00000f00
/* The mask used to clear the ALT_CLKMGR_CLKMGR_TESTIOCTL_PERICLKSEL register field value. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_PERICLKSEL_CLR_MSK    0xfffff0ff
/* The reset value of the ALT_CLKMGR_CLKMGR_TESTIOCTL_PERICLKSEL register field. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_PERICLKSEL_RESET      0x8
/* Extracts the ALT_CLKMGR_CLKMGR_TESTIOCTL_PERICLKSEL field value from a register. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_PERICLKSEL_GET(value) (((value) & 0x00000f00) >> 8)
/* Produces a ALT_CLKMGR_CLKMGR_TESTIOCTL_PERICLKSEL register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_PERICLKSEL_SET(value) (((value) << 8) & 0x00000f00)

/*
 * Field : Debug Clock Select - debugclksel
 * 
 * Selects the source of PLL_CLK4 for miscellaneous PLL signals.
 * 
 * Bit[3]  (p below) determines if from the debug output is from the Main or
 * Peripheral PLL.  If 0, the the output is from the Main PLL and if 1, the output
 * is from the Peripheral PLL.
 * 
 * The following table determines the PLL debug output select:
 * 
 * sel                     PLL_CLK4
 * 
 * 0p000           OUTRESETACK0
 * 
 * 0p001           OUTRESETACK3
 * 
 * 0p010           OUTRESETACK7
 * 
 * 0p011           PLLRESET
 * 
 * 0p100           OUTRESETACK15
 * 
 * 0p101           FBSLIP
 * 
 * 0p110           RFSLIP
 * 
 * 0p111           LOCK
 * 
 * 1xxxx           VSS
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CLKMGR_TESTIOCTL_DBGCLKSEL register field. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_DBGCLKSEL_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CLKMGR_TESTIOCTL_DBGCLKSEL register field. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_DBGCLKSEL_MSB        20
/* The width in bits of the ALT_CLKMGR_CLKMGR_TESTIOCTL_DBGCLKSEL register field. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_DBGCLKSEL_WIDTH      5
/* The mask used to set the ALT_CLKMGR_CLKMGR_TESTIOCTL_DBGCLKSEL register field value. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_DBGCLKSEL_SET_MSK    0x001f0000
/* The mask used to clear the ALT_CLKMGR_CLKMGR_TESTIOCTL_DBGCLKSEL register field value. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_DBGCLKSEL_CLR_MSK    0xffe0ffff
/* The reset value of the ALT_CLKMGR_CLKMGR_TESTIOCTL_DBGCLKSEL register field. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_DBGCLKSEL_RESET      0x10
/* Extracts the ALT_CLKMGR_CLKMGR_TESTIOCTL_DBGCLKSEL field value from a register. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_DBGCLKSEL_GET(value) (((value) & 0x001f0000) >> 16)
/* Produces a ALT_CLKMGR_CLKMGR_TESTIOCTL_DBGCLKSEL register field value suitable for setting the register. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_DBGCLKSEL_SET(value) (((value) << 16) & 0x001f0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_CLKMGR_TESTIOCTL.
 */
struct ALT_CLKMGR_CLKMGR_TESTIOCTL_s
{
    uint32_t  mainclksel  :  4;  /* Main Clock Select */
    uint32_t              :  4;  /* *UNDEFINED* */
    uint32_t  periclksel  :  4;  /* Peripheral Clock Select */
    uint32_t              :  4;  /* *UNDEFINED* */
    uint32_t  debugclksel :  5;  /* Debug Clock Select */
    uint32_t              : 11;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_CLKMGR_TESTIOCTL. */
typedef volatile struct ALT_CLKMGR_CLKMGR_TESTIOCTL_s  ALT_CLKMGR_CLKMGR_TESTIOCTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_CLKMGR_TESTIOCTL register. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_RESET       0x00100808
/* The byte offset of the ALT_CLKMGR_CLKMGR_TESTIOCTL register from the beginning of the component. */
#define ALT_CLKMGR_CLKMGR_TESTIOCTL_OFST        0x20

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_CLKMGR_CLKMGR.
 */
struct ALT_CLKMGR_CLKMGR_s
{
    ALT_CLKMGR_CLKMGR_CTL_t        ctrl;               /* ALT_CLKMGR_CLKMGR_CTL */
    ALT_CLKMGR_CLKMGR_INTR_t       intr;               /* ALT_CLKMGR_CLKMGR_INTR */
    ALT_CLKMGR_CLKMGR_INTRS_t      intrs;              /* ALT_CLKMGR_CLKMGR_INTRS */
    ALT_CLKMGR_CLKMGR_INTRR_t      intrr;              /* ALT_CLKMGR_CLKMGR_INTRR */
    ALT_CLKMGR_CLKMGR_INTREN_t     intren;             /* ALT_CLKMGR_CLKMGR_INTREN */
    ALT_CLKMGR_CLKMGR_INTRENS_t    intrens;            /* ALT_CLKMGR_CLKMGR_INTRENS */
    ALT_CLKMGR_CLKMGR_INTRENR_t    intrenr;            /* ALT_CLKMGR_CLKMGR_INTRENR */
    ALT_CLKMGR_CLKMGR_STAT_t       stat;               /* ALT_CLKMGR_CLKMGR_STAT */
    ALT_CLKMGR_CLKMGR_TESTIOCTL_t  testioctrl;         /* ALT_CLKMGR_CLKMGR_TESTIOCTL */
    volatile uint32_t              _pad_0x24_0x40[7];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_CLKMGR_CLKMGR. */
typedef volatile struct ALT_CLKMGR_CLKMGR_s  ALT_CLKMGR_CLKMGR_t;
/* The struct declaration for the raw register contents of register group ALT_CLKMGR_CLKMGR. */
struct ALT_CLKMGR_CLKMGR_raw_s
{
    volatile uint32_t  ctrl;               /* ALT_CLKMGR_CLKMGR_CTL */
    volatile uint32_t  intr;               /* ALT_CLKMGR_CLKMGR_INTR */
    volatile uint32_t  intrs;              /* ALT_CLKMGR_CLKMGR_INTRS */
    volatile uint32_t  intrr;              /* ALT_CLKMGR_CLKMGR_INTRR */
    volatile uint32_t  intren;             /* ALT_CLKMGR_CLKMGR_INTREN */
    volatile uint32_t  intrens;            /* ALT_CLKMGR_CLKMGR_INTRENS */
    volatile uint32_t  intrenr;            /* ALT_CLKMGR_CLKMGR_INTRENR */
    volatile uint32_t  stat;               /* ALT_CLKMGR_CLKMGR_STAT */
    volatile uint32_t  testioctrl;         /* ALT_CLKMGR_CLKMGR_TESTIOCTL */
    uint32_t           _pad_0x24_0x40[7];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_CLKMGR_CLKMGR. */
typedef volatile struct ALT_CLKMGR_CLKMGR_raw_s  ALT_CLKMGR_CLKMGR_raw_t;
#endif  /* __ASSEMBLY__ */


/*
 * Component : ALT_CLKMGR_MAINPLL
 * 
 */
/*
 * Register : Main PLL VCO Control Register 0 - vco0
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                    
 * :--------|:-------|:------|:--------------------------------
 *  [0]     | RW     | 0x1   | BG PWRDN                       
 *  [1]     | RW     | 0x1   | Power down                     
 *  [2]     | RW     | 0x0   | Enable                         
 *  [3]     | RW     | 0x0   | All Output Counter Reset       
 *  [4]     | RW     | 0x0   | External Regulator Input Select
 *  [5]     | RW     | 0x0   | Fast Locking Enable            
 *  [6]     | RW     | 0x1   | Saturation Enable              
 *  [7]     | ???    | 0x0   | *UNDEFINED*                    
 *  [9:8]   | RW     | 0x0   | Clock Source                   
 *  [15:10] | ???    | 0x0   | *UNDEFINED*                    
 *  [27:16] | RW     | 0x1   | Loop Bandwidth Adjust          
 *  [28]    | RW     | 0x0   | Loop Bandwidth Adjust Enabled  
 *  [31:29] | ???    | 0x0   | *UNDEFINED*                    
 * 
 */
/*
 * Field : BG PWRDN - bgpwrdn
 * 
 * If '1', powers down bandgap. If '0', bandgap is not power down.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_VCO0_BGPWRDN register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_BGPWRDN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_VCO0_BGPWRDN register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_BGPWRDN_MSB        0
/* The width in bits of the ALT_CLKMGR_MAINPLL_VCO0_BGPWRDN register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_BGPWRDN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_VCO0_BGPWRDN register field value. */
#define ALT_CLKMGR_MAINPLL_VCO0_BGPWRDN_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_MAINPLL_VCO0_BGPWRDN register field value. */
#define ALT_CLKMGR_MAINPLL_VCO0_BGPWRDN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_MAINPLL_VCO0_BGPWRDN register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_BGPWRDN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_VCO0_BGPWRDN field value from a register. */
#define ALT_CLKMGR_MAINPLL_VCO0_BGPWRDN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_VCO0_BGPWRDN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_VCO0_BGPWRDN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Power down - pwrdn
 * 
 * If '1', power down analog circuitry. If '0', analog circuitry not powered down.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_VCO0_PWRDN register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_PWRDN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_VCO0_PWRDN register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_PWRDN_MSB        1
/* The width in bits of the ALT_CLKMGR_MAINPLL_VCO0_PWRDN register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_PWRDN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_VCO0_PWRDN register field value. */
#define ALT_CLKMGR_MAINPLL_VCO0_PWRDN_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_MAINPLL_VCO0_PWRDN register field value. */
#define ALT_CLKMGR_MAINPLL_VCO0_PWRDN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_MAINPLL_VCO0_PWRDN register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_PWRDN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_VCO0_PWRDN field value from a register. */
#define ALT_CLKMGR_MAINPLL_VCO0_PWRDN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_MAINPLL_VCO0_PWRDN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_VCO0_PWRDN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : Enable - en
 * 
 * If '1', VCO is enabled. If '0', VCO is in reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_VCO0_EN register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_EN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_VCO0_EN register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_EN_MSB        2
/* The width in bits of the ALT_CLKMGR_MAINPLL_VCO0_EN register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_VCO0_EN register field value. */
#define ALT_CLKMGR_MAINPLL_VCO0_EN_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_MAINPLL_VCO0_EN register field value. */
#define ALT_CLKMGR_MAINPLL_VCO0_EN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_MAINPLL_VCO0_EN register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_EN_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_VCO0_EN field value from a register. */
#define ALT_CLKMGR_MAINPLL_VCO0_EN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_MAINPLL_VCO0_EN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_VCO0_EN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : All Output Counter Reset - outresetall
 * 
 * Before releasing Bypass, All Output Counter Reset must be set and cleared by
 * software for correct clock operation.
 * 
 * If '1', Reset phase multiplexer and all output counter state. So that after the
 * assertion all the clocks output are start from rising edge align.
 * 
 * If '0', phase multiplexer and output counter state not reset and no change to
 * the phase of the clock outputs.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_VCO0_OUTRSTALL register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_OUTRSTALL_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_VCO0_OUTRSTALL register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_OUTRSTALL_MSB        3
/* The width in bits of the ALT_CLKMGR_MAINPLL_VCO0_OUTRSTALL register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_OUTRSTALL_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_VCO0_OUTRSTALL register field value. */
#define ALT_CLKMGR_MAINPLL_VCO0_OUTRSTALL_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_MAINPLL_VCO0_OUTRSTALL register field value. */
#define ALT_CLKMGR_MAINPLL_VCO0_OUTRSTALL_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_MAINPLL_VCO0_OUTRSTALL register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_OUTRSTALL_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_VCO0_OUTRSTALL field value from a register. */
#define ALT_CLKMGR_MAINPLL_VCO0_OUTRSTALL_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_MAINPLL_VCO0_OUTRSTALL register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_VCO0_OUTRSTALL_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : External Regulator Input Select - regextsel
 * 
 * If set to '1', the external regulator is selected for the PLL.
 * 
 * If set to '0', the internal regulator is slected.
 * 
 * It is strongly recommended to select the external regulator while the PLL is not
 * enabled (in reset), and  then disable the external regulater once the PLL
 * becomes enabled.  Software should simulateously update the 'Enable' bit and the
 * 'External Regulator Input Select' in the same write access to the VCO register.
 * When the 'Enable' bit is clear, the 'External Regulator Input Select' should be
 * set, and vice versa.
 * 
 * The reset value of this bit is applied on a cold reset; warm reset has no affect
 * on this bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_VCO0_REGEXTSEL register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_REGEXTSEL_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_VCO0_REGEXTSEL register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_REGEXTSEL_MSB        4
/* The width in bits of the ALT_CLKMGR_MAINPLL_VCO0_REGEXTSEL register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_REGEXTSEL_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_VCO0_REGEXTSEL register field value. */
#define ALT_CLKMGR_MAINPLL_VCO0_REGEXTSEL_SET_MSK    0x00000010
/* The mask used to clear the ALT_CLKMGR_MAINPLL_VCO0_REGEXTSEL register field value. */
#define ALT_CLKMGR_MAINPLL_VCO0_REGEXTSEL_CLR_MSK    0xffffffef
/* The reset value of the ALT_CLKMGR_MAINPLL_VCO0_REGEXTSEL register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_REGEXTSEL_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_VCO0_REGEXTSEL field value from a register. */
#define ALT_CLKMGR_MAINPLL_VCO0_REGEXTSEL_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_CLKMGR_MAINPLL_VCO0_REGEXTSEL register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_VCO0_REGEXTSEL_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : Fast Locking Enable - fasten
 * 
 * Enables fast locking circuit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_VCO0_FASTEN register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_FASTEN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_VCO0_FASTEN register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_FASTEN_MSB        5
/* The width in bits of the ALT_CLKMGR_MAINPLL_VCO0_FASTEN register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_FASTEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_VCO0_FASTEN register field value. */
#define ALT_CLKMGR_MAINPLL_VCO0_FASTEN_SET_MSK    0x00000020
/* The mask used to clear the ALT_CLKMGR_MAINPLL_VCO0_FASTEN register field value. */
#define ALT_CLKMGR_MAINPLL_VCO0_FASTEN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_CLKMGR_MAINPLL_VCO0_FASTEN register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_FASTEN_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_VCO0_FASTEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_VCO0_FASTEN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_CLKMGR_MAINPLL_VCO0_FASTEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_VCO0_FASTEN_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Saturation Enable - saten
 * 
 * Enables saturation behavior.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_VCO0_SATEN register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_SATEN_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_VCO0_SATEN register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_SATEN_MSB        6
/* The width in bits of the ALT_CLKMGR_MAINPLL_VCO0_SATEN register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_SATEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_VCO0_SATEN register field value. */
#define ALT_CLKMGR_MAINPLL_VCO0_SATEN_SET_MSK    0x00000040
/* The mask used to clear the ALT_CLKMGR_MAINPLL_VCO0_SATEN register field value. */
#define ALT_CLKMGR_MAINPLL_VCO0_SATEN_CLR_MSK    0xffffffbf
/* The reset value of the ALT_CLKMGR_MAINPLL_VCO0_SATEN register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_SATEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_VCO0_SATEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_VCO0_SATEN_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_CLKMGR_MAINPLL_VCO0_SATEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_VCO0_SATEN_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : Clock Source - psrc
 * 
 * Controls the VCO input clock source.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description  
 * :--------------------------------------|:------|:--------------
 *  ALT_CLKMGR_MAINPLL_VCO0_PSRC_E_EOSC1  | 0x0   | eosc1_clk    
 *  ALT_CLKMGR_MAINPLL_VCO0_PSRC_E_INTOSC | 0x1   | cb_intosc_clk
 *  ALT_CLKMGR_MAINPLL_VCO0_PSRC_E_F2S    | 0x2   | f2s_free_clk 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_VCO0_PSRC
 * 
 * eosc1_clk
 */
#define ALT_CLKMGR_MAINPLL_VCO0_PSRC_E_EOSC1    0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_VCO0_PSRC
 * 
 * cb_intosc_clk
 */
#define ALT_CLKMGR_MAINPLL_VCO0_PSRC_E_INTOSC   0x1
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_VCO0_PSRC
 * 
 * f2s_free_clk
 */
#define ALT_CLKMGR_MAINPLL_VCO0_PSRC_E_F2S      0x2

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_VCO0_PSRC register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_PSRC_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_VCO0_PSRC register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_PSRC_MSB        9
/* The width in bits of the ALT_CLKMGR_MAINPLL_VCO0_PSRC register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_PSRC_WIDTH      2
/* The mask used to set the ALT_CLKMGR_MAINPLL_VCO0_PSRC register field value. */
#define ALT_CLKMGR_MAINPLL_VCO0_PSRC_SET_MSK    0x00000300
/* The mask used to clear the ALT_CLKMGR_MAINPLL_VCO0_PSRC register field value. */
#define ALT_CLKMGR_MAINPLL_VCO0_PSRC_CLR_MSK    0xfffffcff
/* The reset value of the ALT_CLKMGR_MAINPLL_VCO0_PSRC register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_PSRC_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_VCO0_PSRC field value from a register. */
#define ALT_CLKMGR_MAINPLL_VCO0_PSRC_GET(value) (((value) & 0x00000300) >> 8)
/* Produces a ALT_CLKMGR_MAINPLL_VCO0_PSRC register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_VCO0_PSRC_SET(value) (((value) << 8) & 0x00000300)

/*
 * Field : Loop Bandwidth Adjust - bwadj
 * 
 * Provides Loop Bandwidth Adjust value.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_VCO0_BWADJ register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_BWADJ_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_VCO0_BWADJ register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_BWADJ_MSB        27
/* The width in bits of the ALT_CLKMGR_MAINPLL_VCO0_BWADJ register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_BWADJ_WIDTH      12
/* The mask used to set the ALT_CLKMGR_MAINPLL_VCO0_BWADJ register field value. */
#define ALT_CLKMGR_MAINPLL_VCO0_BWADJ_SET_MSK    0x0fff0000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_VCO0_BWADJ register field value. */
#define ALT_CLKMGR_MAINPLL_VCO0_BWADJ_CLR_MSK    0xf000ffff
/* The reset value of the ALT_CLKMGR_MAINPLL_VCO0_BWADJ register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_BWADJ_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_VCO0_BWADJ field value from a register. */
#define ALT_CLKMGR_MAINPLL_VCO0_BWADJ_GET(value) (((value) & 0x0fff0000) >> 16)
/* Produces a ALT_CLKMGR_MAINPLL_VCO0_BWADJ register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_VCO0_BWADJ_SET(value) (((value) << 16) & 0x0fff0000)

/*
 * Field : Loop Bandwidth Adjust Enabled - bwadjen
 * 
 * If set to 1, the Loop Bandwidth Adjust value comes from the Loop Bandwidth
 * Adjust field.
 * 
 * If set to 0, the Loop Bandwidth Adjust value equals the M field divided by 2
 * value of the VCO Control Register.  The M divided by 2 is the upper 12 bits
 * (12:1) of the M field in the VCO register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_VCO0_BWADJEN register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_BWADJEN_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_VCO0_BWADJEN register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_BWADJEN_MSB        28
/* The width in bits of the ALT_CLKMGR_MAINPLL_VCO0_BWADJEN register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_BWADJEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_VCO0_BWADJEN register field value. */
#define ALT_CLKMGR_MAINPLL_VCO0_BWADJEN_SET_MSK    0x10000000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_VCO0_BWADJEN register field value. */
#define ALT_CLKMGR_MAINPLL_VCO0_BWADJEN_CLR_MSK    0xefffffff
/* The reset value of the ALT_CLKMGR_MAINPLL_VCO0_BWADJEN register field. */
#define ALT_CLKMGR_MAINPLL_VCO0_BWADJEN_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_VCO0_BWADJEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_VCO0_BWADJEN_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_CLKMGR_MAINPLL_VCO0_BWADJEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_VCO0_BWADJEN_SET(value) (((value) << 28) & 0x10000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_MAINPLL_VCO0.
 */
struct ALT_CLKMGR_MAINPLL_VCO0_s
{
    uint32_t  bgpwrdn     :  1;  /* BG PWRDN */
    uint32_t  pwrdn       :  1;  /* Power down */
    uint32_t  en          :  1;  /* Enable */
    uint32_t  outresetall :  1;  /* All Output Counter Reset */
    uint32_t  regextsel   :  1;  /* External Regulator Input Select */
    uint32_t  fasten      :  1;  /* Fast Locking Enable */
    uint32_t  saten       :  1;  /* Saturation Enable */
    uint32_t              :  1;  /* *UNDEFINED* */
    uint32_t  psrc        :  2;  /* Clock Source */
    uint32_t              :  6;  /* *UNDEFINED* */
    uint32_t  bwadj       : 12;  /* Loop Bandwidth Adjust */
    uint32_t  bwadjen     :  1;  /* Loop Bandwidth Adjust Enabled */
    uint32_t              :  3;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_VCO0. */
typedef volatile struct ALT_CLKMGR_MAINPLL_VCO0_s  ALT_CLKMGR_MAINPLL_VCO0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_VCO0 register. */
#define ALT_CLKMGR_MAINPLL_VCO0_RESET       0x00010043
/* The byte offset of the ALT_CLKMGR_MAINPLL_VCO0 register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_VCO0_OFST        0x0

/*
 * Register : Main PLL VCO Control Register 1 - vco1
 * 
 * Contains settings that control the Main PLL VCO. The VCO1 register contains the
 * numerator and denominator counter settings.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description    
 * :--------|:-------|:------|:----------------
 *  [12:0]  | RW     | 0x1   | Numerator (M)  
 *  [15:13] | ???    | 0x0   | *UNDEFINED*    
 *  [21:16] | RW     | 0x1   | Denominator (N)
 *  [31:22] | ???    | 0x0   | *UNDEFINED*    
 * 
 */
/*
 * Field : Numerator (M) - numer
 * 
 * Numerator in VCO output frequency equation. For incremental frequency change, if
 * the new value lead to less than 20% of the frequency change, this value can be
 * changed without resetting the PLL. The Numerator and Denominator can not be
 * changed at the same time for incremental frequency changed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_VCO1_NUMER register field. */
#define ALT_CLKMGR_MAINPLL_VCO1_NUMER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_VCO1_NUMER register field. */
#define ALT_CLKMGR_MAINPLL_VCO1_NUMER_MSB        12
/* The width in bits of the ALT_CLKMGR_MAINPLL_VCO1_NUMER register field. */
#define ALT_CLKMGR_MAINPLL_VCO1_NUMER_WIDTH      13
/* The mask used to set the ALT_CLKMGR_MAINPLL_VCO1_NUMER register field value. */
#define ALT_CLKMGR_MAINPLL_VCO1_NUMER_SET_MSK    0x00001fff
/* The mask used to clear the ALT_CLKMGR_MAINPLL_VCO1_NUMER register field value. */
#define ALT_CLKMGR_MAINPLL_VCO1_NUMER_CLR_MSK    0xffffe000
/* The reset value of the ALT_CLKMGR_MAINPLL_VCO1_NUMER register field. */
#define ALT_CLKMGR_MAINPLL_VCO1_NUMER_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_VCO1_NUMER field value from a register. */
#define ALT_CLKMGR_MAINPLL_VCO1_NUMER_GET(value) (((value) & 0x00001fff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_VCO1_NUMER register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_VCO1_NUMER_SET(value) (((value) << 0) & 0x00001fff)

/*
 * Field : Denominator (N) - denom
 * 
 * Denominator in VCO output frequency equation. For incremental frequency change,
 * if the new value lead to less than 20% of the frequency change, this value can
 * be changed without resetting the PLL. The Numerator and Denominator can not be
 * changed at the same time for incremental frequency changed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_VCO1_DENOM register field. */
#define ALT_CLKMGR_MAINPLL_VCO1_DENOM_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_VCO1_DENOM register field. */
#define ALT_CLKMGR_MAINPLL_VCO1_DENOM_MSB        21
/* The width in bits of the ALT_CLKMGR_MAINPLL_VCO1_DENOM register field. */
#define ALT_CLKMGR_MAINPLL_VCO1_DENOM_WIDTH      6
/* The mask used to set the ALT_CLKMGR_MAINPLL_VCO1_DENOM register field value. */
#define ALT_CLKMGR_MAINPLL_VCO1_DENOM_SET_MSK    0x003f0000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_VCO1_DENOM register field value. */
#define ALT_CLKMGR_MAINPLL_VCO1_DENOM_CLR_MSK    0xffc0ffff
/* The reset value of the ALT_CLKMGR_MAINPLL_VCO1_DENOM register field. */
#define ALT_CLKMGR_MAINPLL_VCO1_DENOM_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_VCO1_DENOM field value from a register. */
#define ALT_CLKMGR_MAINPLL_VCO1_DENOM_GET(value) (((value) & 0x003f0000) >> 16)
/* Produces a ALT_CLKMGR_MAINPLL_VCO1_DENOM register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_VCO1_DENOM_SET(value) (((value) << 16) & 0x003f0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_MAINPLL_VCO1.
 */
struct ALT_CLKMGR_MAINPLL_VCO1_s
{
    uint32_t  numer : 13;  /* Numerator (M) */
    uint32_t        :  3;  /* *UNDEFINED* */
    uint32_t  denom :  6;  /* Denominator (N) */
    uint32_t        : 10;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_VCO1. */
typedef volatile struct ALT_CLKMGR_MAINPLL_VCO1_s  ALT_CLKMGR_MAINPLL_VCO1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_VCO1 register. */
#define ALT_CLKMGR_MAINPLL_VCO1_RESET       0x00010001
/* The byte offset of the ALT_CLKMGR_MAINPLL_VCO1 register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_VCO1_OFST        0x4

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
 *  [7]    | RW     | 0x1   | hmc_pll_ref_clk Enable
 *  [31:8] | ???    | 0x0   | *UNDEFINED*           
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
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_EN_CSTMRCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_CSTMRCLKEN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_EN_CSTMRCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_CSTMRCLKEN_MSB        5
/* The width in bits of the ALT_CLKMGR_MAINPLL_EN_CSTMRCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_CSTMRCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_EN_CSTMRCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_EN_CSTMRCLKEN_SET_MSK    0x00000020
/* The mask used to clear the ALT_CLKMGR_MAINPLL_EN_CSTMRCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_EN_CSTMRCLKEN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_CLKMGR_MAINPLL_EN_CSTMRCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_CSTMRCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_EN_CSTMRCLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_EN_CSTMRCLKEN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_CLKMGR_MAINPLL_EN_CSTMRCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_EN_CSTMRCLKEN_SET(value) (((value) << 5) & 0x00000020)

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

/*
 * Field : hmc_pll_ref_clk Enable - hmcpllrefclken
 * 
 * Enables clock hmc_pll_ref_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_EN_HMCPLLREFCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_HMCPLLREFCLKEN_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_EN_HMCPLLREFCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_HMCPLLREFCLKEN_MSB        7
/* The width in bits of the ALT_CLKMGR_MAINPLL_EN_HMCPLLREFCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_HMCPLLREFCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_EN_HMCPLLREFCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_EN_HMCPLLREFCLKEN_SET_MSK    0x00000080
/* The mask used to clear the ALT_CLKMGR_MAINPLL_EN_HMCPLLREFCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_EN_HMCPLLREFCLKEN_CLR_MSK    0xffffff7f
/* The reset value of the ALT_CLKMGR_MAINPLL_EN_HMCPLLREFCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_EN_HMCPLLREFCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_EN_HMCPLLREFCLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_EN_HMCPLLREFCLKEN_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_CLKMGR_MAINPLL_EN_HMCPLLREFCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_EN_HMCPLLREFCLKEN_SET(value) (((value) << 7) & 0x00000080)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_MAINPLL_EN.
 */
struct ALT_CLKMGR_MAINPLL_EN_s
{
    uint32_t  mpuclken       :  1;  /* MPU Clock Group Enable */
    uint32_t  l4mainclken    :  1;  /* l4_main_clk Enable */
    uint32_t  l4mpclken      :  1;  /* l4_mp_clk Enable */
    uint32_t  l4spclken      :  1;  /* l4_sp_clk Enable */
    uint32_t  csclken        :  1;  /* Debug Group Enable */
    uint32_t  cstimerclken   :  1;  /* Debug Timer Enable */
    uint32_t  s2fuser0clken  :  1;  /* s2f_user0_clk Enable */
    uint32_t  hmcpllrefclken :  1;  /* hmc_pll_ref_clk Enable */
    uint32_t                 : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_EN. */
typedef volatile struct ALT_CLKMGR_MAINPLL_EN_s  ALT_CLKMGR_MAINPLL_EN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_EN register. */
#define ALT_CLKMGR_MAINPLL_EN_RESET       0x000000ff
/* The byte offset of the ALT_CLKMGR_MAINPLL_EN register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_EN_OFST        0x8

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
 *  [7]    | RW     | 0x1   | hmc_pll_ref_clk Enable
 *  [31:8] | ???    | 0x0   | *UNDEFINED*           
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
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_ENS_CSTMRCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_CSTMRCLKEN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_ENS_CSTMRCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_CSTMRCLKEN_MSB        5
/* The width in bits of the ALT_CLKMGR_MAINPLL_ENS_CSTMRCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_CSTMRCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_ENS_CSTMRCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENS_CSTMRCLKEN_SET_MSK    0x00000020
/* The mask used to clear the ALT_CLKMGR_MAINPLL_ENS_CSTMRCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENS_CSTMRCLKEN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_CLKMGR_MAINPLL_ENS_CSTMRCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_CSTMRCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_ENS_CSTMRCLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_ENS_CSTMRCLKEN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_CLKMGR_MAINPLL_ENS_CSTMRCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_ENS_CSTMRCLKEN_SET(value) (((value) << 5) & 0x00000020)

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

/*
 * Field : hmc_pll_ref_clk Enable - hmcpllrefclken
 * 
 * Enables clock hmc_pll_ref_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_ENS_HMCPLLREFCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_HMCPLLREFCLKEN_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_ENS_HMCPLLREFCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_HMCPLLREFCLKEN_MSB        7
/* The width in bits of the ALT_CLKMGR_MAINPLL_ENS_HMCPLLREFCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_HMCPLLREFCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_ENS_HMCPLLREFCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENS_HMCPLLREFCLKEN_SET_MSK    0x00000080
/* The mask used to clear the ALT_CLKMGR_MAINPLL_ENS_HMCPLLREFCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENS_HMCPLLREFCLKEN_CLR_MSK    0xffffff7f
/* The reset value of the ALT_CLKMGR_MAINPLL_ENS_HMCPLLREFCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENS_HMCPLLREFCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_ENS_HMCPLLREFCLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_ENS_HMCPLLREFCLKEN_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_CLKMGR_MAINPLL_ENS_HMCPLLREFCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_ENS_HMCPLLREFCLKEN_SET(value) (((value) << 7) & 0x00000080)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_MAINPLL_ENS.
 */
struct ALT_CLKMGR_MAINPLL_ENS_s
{
    uint32_t  mpuclken       :  1;  /* MPU Clock Group Enable */
    uint32_t  l4mainclken    :  1;  /* l4_main_clk Enable */
    uint32_t  l4mpclken      :  1;  /* l4_mp_clk Enable */
    uint32_t  l4spclken      :  1;  /* l4_sp_clk Enable */
    uint32_t  csclken        :  1;  /* Debug Group Enable */
    uint32_t  cstimerclken   :  1;  /* Debug Timer Enable */
    uint32_t  s2fuser0clken  :  1;  /* s2f_user0_clk Enable */
    uint32_t  hmcpllrefclken :  1;  /* hmc_pll_ref_clk Enable */
    uint32_t                 : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_ENS. */
typedef volatile struct ALT_CLKMGR_MAINPLL_ENS_s  ALT_CLKMGR_MAINPLL_ENS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_ENS register. */
#define ALT_CLKMGR_MAINPLL_ENS_RESET       0x000000ff
/* The byte offset of the ALT_CLKMGR_MAINPLL_ENS register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_ENS_OFST        0xc

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
 *  [7]    | RW     | 0x1   | hmc_pll_ref_clk Enable
 *  [31:8] | ???    | 0x0   | *UNDEFINED*           
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
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_ENR_CSTMRCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_CSTMRCLKEN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_ENR_CSTMRCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_CSTMRCLKEN_MSB        5
/* The width in bits of the ALT_CLKMGR_MAINPLL_ENR_CSTMRCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_CSTMRCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_ENR_CSTMRCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENR_CSTMRCLKEN_SET_MSK    0x00000020
/* The mask used to clear the ALT_CLKMGR_MAINPLL_ENR_CSTMRCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENR_CSTMRCLKEN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_CLKMGR_MAINPLL_ENR_CSTMRCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_CSTMRCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_ENR_CSTMRCLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_ENR_CSTMRCLKEN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_CLKMGR_MAINPLL_ENR_CSTMRCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_ENR_CSTMRCLKEN_SET(value) (((value) << 5) & 0x00000020)

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

/*
 * Field : hmc_pll_ref_clk Enable - hmcpllrefclken
 * 
 * Enables clock hmc_pll_ref_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_ENR_HMCPLLREFCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_HMCPLLREFCLKEN_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_ENR_HMCPLLREFCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_HMCPLLREFCLKEN_MSB        7
/* The width in bits of the ALT_CLKMGR_MAINPLL_ENR_HMCPLLREFCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_HMCPLLREFCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_ENR_HMCPLLREFCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENR_HMCPLLREFCLKEN_SET_MSK    0x00000080
/* The mask used to clear the ALT_CLKMGR_MAINPLL_ENR_HMCPLLREFCLKEN register field value. */
#define ALT_CLKMGR_MAINPLL_ENR_HMCPLLREFCLKEN_CLR_MSK    0xffffff7f
/* The reset value of the ALT_CLKMGR_MAINPLL_ENR_HMCPLLREFCLKEN register field. */
#define ALT_CLKMGR_MAINPLL_ENR_HMCPLLREFCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_ENR_HMCPLLREFCLKEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_ENR_HMCPLLREFCLKEN_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_CLKMGR_MAINPLL_ENR_HMCPLLREFCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_ENR_HMCPLLREFCLKEN_SET(value) (((value) << 7) & 0x00000080)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_MAINPLL_ENR.
 */
struct ALT_CLKMGR_MAINPLL_ENR_s
{
    uint32_t  mpuclken       :  1;  /* MPU Clock Group Enable */
    uint32_t  l4mainclken    :  1;  /* l4_main_clk Enable */
    uint32_t  l4mpclken      :  1;  /* l4_mp_clk Enable */
    uint32_t  l4spclken      :  1;  /* l4_sp_clk Enable */
    uint32_t  csclken        :  1;  /* Debug Group Enable */
    uint32_t  cstimerclken   :  1;  /* Debug Timer Enable */
    uint32_t  s2fuser0clken  :  1;  /* s2f_user0_clk Enable */
    uint32_t  hmcpllrefclken :  1;  /* hmc_pll_ref_clk Enable */
    uint32_t                 : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_ENR. */
typedef volatile struct ALT_CLKMGR_MAINPLL_ENR_s  ALT_CLKMGR_MAINPLL_ENR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_ENR register. */
#define ALT_CLKMGR_MAINPLL_ENR_RESET       0x000000ff
/* The byte offset of the ALT_CLKMGR_MAINPLL_ENR register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_ENR_OFST        0x10

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
 * :-------|:-------|:------|:-------------------------
 *  [0]    | RW     | 0x1   | MPU Bypass              
 *  [1]    | RW     | 0x1   | NOC Bypass              
 *  [2]    | RW     | 0x1   | S2F User0 Bypass        
 *  [3]    | RW     | 0x1   | HMC PLL Reference Bypass
 *  [4]    | RW     | 0x1   | PLL RFEN Clock Bypass   
 *  [5]    | RW     | 0x1   | PLL FBEN Clock Bypass   
 *  [31:6] | ???    | 0x0   | *UNDEFINED*             
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

/*
 * Field : HMC PLL Reference Bypass - hmcpllref
 * 
 * If set, the hmc_pll_ref_clk will be bypassed to the boot_clk.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_BYPASS_HMCPLLREF register field. */
#define ALT_CLKMGR_MAINPLL_BYPASS_HMCPLLREF_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_BYPASS_HMCPLLREF register field. */
#define ALT_CLKMGR_MAINPLL_BYPASS_HMCPLLREF_MSB        3
/* The width in bits of the ALT_CLKMGR_MAINPLL_BYPASS_HMCPLLREF register field. */
#define ALT_CLKMGR_MAINPLL_BYPASS_HMCPLLREF_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_BYPASS_HMCPLLREF register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASS_HMCPLLREF_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_MAINPLL_BYPASS_HMCPLLREF register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASS_HMCPLLREF_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_MAINPLL_BYPASS_HMCPLLREF register field. */
#define ALT_CLKMGR_MAINPLL_BYPASS_HMCPLLREF_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_BYPASS_HMCPLLREF field value from a register. */
#define ALT_CLKMGR_MAINPLL_BYPASS_HMCPLLREF_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_MAINPLL_BYPASS_HMCPLLREF register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_BYPASS_HMCPLLREF_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : PLL RFEN Clock Bypass - rfen
 * 
 * If set, the pll_main_rfen_clk will be bypassed to the boot_clk.  The
 * pll_main_rfen_clk is used to synchronously update the Denominator to the Main
 * PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_BYPASS_RFEN register field. */
#define ALT_CLKMGR_MAINPLL_BYPASS_RFEN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_BYPASS_RFEN register field. */
#define ALT_CLKMGR_MAINPLL_BYPASS_RFEN_MSB        4
/* The width in bits of the ALT_CLKMGR_MAINPLL_BYPASS_RFEN register field. */
#define ALT_CLKMGR_MAINPLL_BYPASS_RFEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_BYPASS_RFEN register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASS_RFEN_SET_MSK    0x00000010
/* The mask used to clear the ALT_CLKMGR_MAINPLL_BYPASS_RFEN register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASS_RFEN_CLR_MSK    0xffffffef
/* The reset value of the ALT_CLKMGR_MAINPLL_BYPASS_RFEN register field. */
#define ALT_CLKMGR_MAINPLL_BYPASS_RFEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_BYPASS_RFEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_BYPASS_RFEN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_CLKMGR_MAINPLL_BYPASS_RFEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_BYPASS_RFEN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : PLL FBEN Clock Bypass - fben
 * 
 * If set, the pll_main_fben_clk will be bypassed to the boot_clk.  The
 * pll_main_fben_clk is used to synchronously update the Numerator to the Main PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_BYPASS_FBEN register field. */
#define ALT_CLKMGR_MAINPLL_BYPASS_FBEN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_BYPASS_FBEN register field. */
#define ALT_CLKMGR_MAINPLL_BYPASS_FBEN_MSB        5
/* The width in bits of the ALT_CLKMGR_MAINPLL_BYPASS_FBEN register field. */
#define ALT_CLKMGR_MAINPLL_BYPASS_FBEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_BYPASS_FBEN register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASS_FBEN_SET_MSK    0x00000020
/* The mask used to clear the ALT_CLKMGR_MAINPLL_BYPASS_FBEN register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASS_FBEN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_CLKMGR_MAINPLL_BYPASS_FBEN register field. */
#define ALT_CLKMGR_MAINPLL_BYPASS_FBEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_BYPASS_FBEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_BYPASS_FBEN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_CLKMGR_MAINPLL_BYPASS_FBEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_BYPASS_FBEN_SET(value) (((value) << 5) & 0x00000020)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_MAINPLL_BYPASS.
 */
struct ALT_CLKMGR_MAINPLL_BYPASS_s
{
    uint32_t  mpu       :  1;  /* MPU Bypass */
    uint32_t  noc       :  1;  /* NOC Bypass */
    uint32_t  s2fuser0  :  1;  /* S2F User0 Bypass */
    uint32_t  hmcpllref :  1;  /* HMC PLL Reference Bypass */
    uint32_t  rfen      :  1;  /* PLL RFEN Clock Bypass */
    uint32_t  fben      :  1;  /* PLL FBEN Clock Bypass */
    uint32_t            : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_BYPASS. */
typedef volatile struct ALT_CLKMGR_MAINPLL_BYPASS_s  ALT_CLKMGR_MAINPLL_BYPASS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_BYPASS register. */
#define ALT_CLKMGR_MAINPLL_BYPASS_RESET       0x0000003f
/* The byte offset of the ALT_CLKMGR_MAINPLL_BYPASS register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_BYPASS_OFST        0x14

/*
 * Register : Bypass Set Register - bypasss
 * 
 * Write One to Set corresponding fields in Bypass Register.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description             
 * :-------|:-------|:------|:-------------------------
 *  [0]    | RW     | 0x1   | MPU Bypass              
 *  [1]    | RW     | 0x1   | NOC Bypass              
 *  [2]    | RW     | 0x1   | S2F User0 Bypass        
 *  [3]    | RW     | 0x1   | HMC PLL Reference Bypass
 *  [4]    | RW     | 0x1   | PLL RFEN Clock Bypass   
 *  [5]    | RW     | 0x1   | PLL FBEN Clock Bypass   
 *  [31:6] | ???    | 0x0   | *UNDEFINED*             
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

/*
 * Field : HMC PLL Reference Bypass - hmcpllref
 * 
 * If set, the hmc_pll_ref_clk will be bypassed to the boot_clk.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_BYPASSS_HMCPLLREF register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_HMCPLLREF_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_BYPASSS_HMCPLLREF register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_HMCPLLREF_MSB        3
/* The width in bits of the ALT_CLKMGR_MAINPLL_BYPASSS_HMCPLLREF register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_HMCPLLREF_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_BYPASSS_HMCPLLREF register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_HMCPLLREF_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_MAINPLL_BYPASSS_HMCPLLREF register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_HMCPLLREF_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_MAINPLL_BYPASSS_HMCPLLREF register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_HMCPLLREF_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_BYPASSS_HMCPLLREF field value from a register. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_HMCPLLREF_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_MAINPLL_BYPASSS_HMCPLLREF register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_HMCPLLREF_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : PLL RFEN Clock Bypass - rfen
 * 
 * If set, the pll_main_rfen_clk will be bypassed to the boot_clk.  The
 * pll_main_rfen_clk is used to synchronously update the Denominator to the Main
 * PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_BYPASSS_RFEN register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_RFEN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_BYPASSS_RFEN register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_RFEN_MSB        4
/* The width in bits of the ALT_CLKMGR_MAINPLL_BYPASSS_RFEN register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_RFEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_BYPASSS_RFEN register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_RFEN_SET_MSK    0x00000010
/* The mask used to clear the ALT_CLKMGR_MAINPLL_BYPASSS_RFEN register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_RFEN_CLR_MSK    0xffffffef
/* The reset value of the ALT_CLKMGR_MAINPLL_BYPASSS_RFEN register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_RFEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_BYPASSS_RFEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_RFEN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_CLKMGR_MAINPLL_BYPASSS_RFEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_RFEN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : PLL FBEN Clock Bypass - fben
 * 
 * If set, the pll_main_fben_clk will be bypassed to the boot_clk.  The
 * pll_main_fben_clk is used to synchronously update the Numerator to the Main PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_BYPASSS_FBEN register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_FBEN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_BYPASSS_FBEN register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_FBEN_MSB        5
/* The width in bits of the ALT_CLKMGR_MAINPLL_BYPASSS_FBEN register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_FBEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_BYPASSS_FBEN register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_FBEN_SET_MSK    0x00000020
/* The mask used to clear the ALT_CLKMGR_MAINPLL_BYPASSS_FBEN register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_FBEN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_CLKMGR_MAINPLL_BYPASSS_FBEN register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_FBEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_BYPASSS_FBEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_FBEN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_CLKMGR_MAINPLL_BYPASSS_FBEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_FBEN_SET(value) (((value) << 5) & 0x00000020)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_MAINPLL_BYPASSS.
 */
struct ALT_CLKMGR_MAINPLL_BYPASSS_s
{
    uint32_t  mpu       :  1;  /* MPU Bypass */
    uint32_t  noc       :  1;  /* NOC Bypass */
    uint32_t  s2fuser0  :  1;  /* S2F User0 Bypass */
    uint32_t  hmcpllref :  1;  /* HMC PLL Reference Bypass */
    uint32_t  rfen      :  1;  /* PLL RFEN Clock Bypass */
    uint32_t  fben      :  1;  /* PLL FBEN Clock Bypass */
    uint32_t            : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_BYPASSS. */
typedef volatile struct ALT_CLKMGR_MAINPLL_BYPASSS_s  ALT_CLKMGR_MAINPLL_BYPASSS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_BYPASSS register. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_RESET       0x0000003f
/* The byte offset of the ALT_CLKMGR_MAINPLL_BYPASSS register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_BYPASSS_OFST        0x18

/*
 * Register : Bypass Reset Register - bypassr
 * 
 * Write One to Clear corresponding fields in Bypass Register.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description             
 * :-------|:-------|:------|:-------------------------
 *  [0]    | RW     | 0x1   | MPU Bypass              
 *  [1]    | RW     | 0x1   | NOC Bypass              
 *  [2]    | RW     | 0x1   | S2F User0 Bypass        
 *  [3]    | RW     | 0x1   | HMC PLL Reference Bypass
 *  [4]    | RW     | 0x1   | PLL RFEN Clock Bypass   
 *  [5]    | RW     | 0x1   | PLL FBEN Clock Bypass   
 *  [31:6] | ???    | 0x0   | *UNDEFINED*             
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

/*
 * Field : HMC PLL Reference Bypass - hmcpllref
 * 
 * If set, the hmc_pll_ref_clk will be bypassed to the boot_clk.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_BYPASSR_HMCPLLREF register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_HMCPLLREF_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_BYPASSR_HMCPLLREF register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_HMCPLLREF_MSB        3
/* The width in bits of the ALT_CLKMGR_MAINPLL_BYPASSR_HMCPLLREF register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_HMCPLLREF_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_BYPASSR_HMCPLLREF register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_HMCPLLREF_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_MAINPLL_BYPASSR_HMCPLLREF register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_HMCPLLREF_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_MAINPLL_BYPASSR_HMCPLLREF register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_HMCPLLREF_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_BYPASSR_HMCPLLREF field value from a register. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_HMCPLLREF_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_MAINPLL_BYPASSR_HMCPLLREF register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_HMCPLLREF_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : PLL RFEN Clock Bypass - rfen
 * 
 * If set, the pll_main_rfen_clk will be bypassed to the boot_clk.  The
 * pll_main_rfen_clk is used to synchronously update the Denominator to the Main
 * PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_BYPASSR_RFEN register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_RFEN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_BYPASSR_RFEN register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_RFEN_MSB        4
/* The width in bits of the ALT_CLKMGR_MAINPLL_BYPASSR_RFEN register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_RFEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_BYPASSR_RFEN register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_RFEN_SET_MSK    0x00000010
/* The mask used to clear the ALT_CLKMGR_MAINPLL_BYPASSR_RFEN register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_RFEN_CLR_MSK    0xffffffef
/* The reset value of the ALT_CLKMGR_MAINPLL_BYPASSR_RFEN register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_RFEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_BYPASSR_RFEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_RFEN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_CLKMGR_MAINPLL_BYPASSR_RFEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_RFEN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : PLL FBEN Clock Bypass - fben
 * 
 * If set, the pll_main_fben_clk will be bypassed to the boot_clk.  The
 * pll_main_fben_clk is used to synchronously update the Numerator to the Main PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_BYPASSR_FBEN register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_FBEN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_BYPASSR_FBEN register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_FBEN_MSB        5
/* The width in bits of the ALT_CLKMGR_MAINPLL_BYPASSR_FBEN register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_FBEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_MAINPLL_BYPASSR_FBEN register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_FBEN_SET_MSK    0x00000020
/* The mask used to clear the ALT_CLKMGR_MAINPLL_BYPASSR_FBEN register field value. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_FBEN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_CLKMGR_MAINPLL_BYPASSR_FBEN register field. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_FBEN_RESET      0x1
/* Extracts the ALT_CLKMGR_MAINPLL_BYPASSR_FBEN field value from a register. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_FBEN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_CLKMGR_MAINPLL_BYPASSR_FBEN register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_FBEN_SET(value) (((value) << 5) & 0x00000020)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_MAINPLL_BYPASSR.
 */
struct ALT_CLKMGR_MAINPLL_BYPASSR_s
{
    uint32_t  mpu       :  1;  /* MPU Bypass */
    uint32_t  noc       :  1;  /* NOC Bypass */
    uint32_t  s2fuser0  :  1;  /* S2F User0 Bypass */
    uint32_t  hmcpllref :  1;  /* HMC PLL Reference Bypass */
    uint32_t  rfen      :  1;  /* PLL RFEN Clock Bypass */
    uint32_t  fben      :  1;  /* PLL FBEN Clock Bypass */
    uint32_t            : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_BYPASSR. */
typedef volatile struct ALT_CLKMGR_MAINPLL_BYPASSR_s  ALT_CLKMGR_MAINPLL_BYPASSR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_BYPASSR register. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_RESET       0x0000003f
/* The byte offset of the ALT_CLKMGR_MAINPLL_BYPASSR register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_BYPASSR_OFST        0x1c

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
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_MAINPLL_MPUCLK.
 */
struct ALT_CLKMGR_MAINPLL_MPUCLK_s
{
    uint32_t  cnt : 11;  /* Counter */
    uint32_t      :  5;  /* *UNDEFINED* */
    uint32_t  src :  3;  /* ALT_CLKMGR_MAINPLL_MPUCLK_SRC */
    uint32_t      : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_MPUCLK. */
typedef volatile struct ALT_CLKMGR_MAINPLL_MPUCLK_s  ALT_CLKMGR_MAINPLL_MPUCLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_MPUCLK register. */
#define ALT_CLKMGR_MAINPLL_MPUCLK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_MAINPLL_MPUCLK register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_MPUCLK_OFST        0x20

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
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_MAINPLL_NOCCLK.
 */
struct ALT_CLKMGR_MAINPLL_NOCCLK_s
{
    uint32_t  cnt : 11;  /* Counter */
    uint32_t      :  5;  /* *UNDEFINED* */
    uint32_t  src :  3;  /* ALT_CLKMGR_MAINPLL_NOCCLK_SRC */
    uint32_t      : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_NOCCLK. */
typedef volatile struct ALT_CLKMGR_MAINPLL_NOCCLK_s  ALT_CLKMGR_MAINPLL_NOCCLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_NOCCLK register. */
#define ALT_CLKMGR_MAINPLL_NOCCLK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_MAINPLL_NOCCLK register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_NOCCLK_OFST        0x24

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
#define ALT_CLKMGR_MAINPLL_CNTR2CLK_CNT_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_CNTR2CLK_CNT field value from a register. */
#define ALT_CLKMGR_MAINPLL_CNTR2CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_CNTR2CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_CNTR2CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_MAINPLL_CNTR2CLK.
 */
struct ALT_CLKMGR_MAINPLL_CNTR2CLK_s
{
    uint32_t  cnt : 11;  /* Counter */
    uint32_t      : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_CNTR2CLK. */
typedef volatile struct ALT_CLKMGR_MAINPLL_CNTR2CLK_s  ALT_CLKMGR_MAINPLL_CNTR2CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR2CLK register. */
#define ALT_CLKMGR_MAINPLL_CNTR2CLK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_MAINPLL_CNTR2CLK register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_CNTR2CLK_OFST        0x28

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
#define ALT_CLKMGR_MAINPLL_CNTR3CLK_CNT_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_CNTR3CLK_CNT field value from a register. */
#define ALT_CLKMGR_MAINPLL_CNTR3CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_CNTR3CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_CNTR3CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_MAINPLL_CNTR3CLK.
 */
struct ALT_CLKMGR_MAINPLL_CNTR3CLK_s
{
    uint32_t  cnt : 11;  /* Counter */
    uint32_t      : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_CNTR3CLK. */
typedef volatile struct ALT_CLKMGR_MAINPLL_CNTR3CLK_s  ALT_CLKMGR_MAINPLL_CNTR3CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR3CLK register. */
#define ALT_CLKMGR_MAINPLL_CNTR3CLK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_MAINPLL_CNTR3CLK register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_CNTR3CLK_OFST        0x2c

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
#define ALT_CLKMGR_MAINPLL_CNTR4CLK_CNT_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_CNTR4CLK_CNT field value from a register. */
#define ALT_CLKMGR_MAINPLL_CNTR4CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_CNTR4CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_CNTR4CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_MAINPLL_CNTR4CLK.
 */
struct ALT_CLKMGR_MAINPLL_CNTR4CLK_s
{
    uint32_t  cnt : 11;  /* Counter */
    uint32_t      : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_CNTR4CLK. */
typedef volatile struct ALT_CLKMGR_MAINPLL_CNTR4CLK_s  ALT_CLKMGR_MAINPLL_CNTR4CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR4CLK register. */
#define ALT_CLKMGR_MAINPLL_CNTR4CLK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_MAINPLL_CNTR4CLK register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_CNTR4CLK_OFST        0x30

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
#define ALT_CLKMGR_MAINPLL_CNTR5CLK_CNT_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_CNTR5CLK_CNT field value from a register. */
#define ALT_CLKMGR_MAINPLL_CNTR5CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_CNTR5CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_CNTR5CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_MAINPLL_CNTR5CLK.
 */
struct ALT_CLKMGR_MAINPLL_CNTR5CLK_s
{
    uint32_t  cnt : 11;  /* Counter */
    uint32_t      : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_CNTR5CLK. */
typedef volatile struct ALT_CLKMGR_MAINPLL_CNTR5CLK_s  ALT_CLKMGR_MAINPLL_CNTR5CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR5CLK register. */
#define ALT_CLKMGR_MAINPLL_CNTR5CLK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_MAINPLL_CNTR5CLK register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_CNTR5CLK_OFST        0x34

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
#define ALT_CLKMGR_MAINPLL_CNTR6CLK_CNT_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_CNTR6CLK_CNT field value from a register. */
#define ALT_CLKMGR_MAINPLL_CNTR6CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_CNTR6CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_CNTR6CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_MAINPLL_CNTR6CLK.
 */
struct ALT_CLKMGR_MAINPLL_CNTR6CLK_s
{
    uint32_t  cnt : 11;  /* Counter */
    uint32_t      : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_CNTR6CLK. */
typedef volatile struct ALT_CLKMGR_MAINPLL_CNTR6CLK_s  ALT_CLKMGR_MAINPLL_CNTR6CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR6CLK register. */
#define ALT_CLKMGR_MAINPLL_CNTR6CLK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_MAINPLL_CNTR6CLK register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_CNTR6CLK_OFST        0x38

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
 *  [18:16] | RW     | 0x0   | ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC
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
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC field value from a register. */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC_GET(value) (((value) & 0x00070000) >> 16)
/* Produces a ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC_SET(value) (((value) << 16) & 0x00070000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_MAINPLL_CNTR7CLK.
 */
struct ALT_CLKMGR_MAINPLL_CNTR7CLK_s
{
    uint32_t  cnt : 11;  /* Counter */
    uint32_t      :  5;  /* *UNDEFINED* */
    uint32_t  src :  3;  /* ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC */
    uint32_t      : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_CNTR7CLK. */
typedef volatile struct ALT_CLKMGR_MAINPLL_CNTR7CLK_s  ALT_CLKMGR_MAINPLL_CNTR7CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR7CLK register. */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_MAINPLL_CNTR7CLK register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_CNTR7CLK_OFST        0x3c

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
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_MAINPLL_CNTR8CLK.
 */
struct ALT_CLKMGR_MAINPLL_CNTR8CLK_s
{
    uint32_t  cnt : 11;  /* Counter */
    uint32_t      : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_CNTR8CLK. */
typedef volatile struct ALT_CLKMGR_MAINPLL_CNTR8CLK_s  ALT_CLKMGR_MAINPLL_CNTR8CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR8CLK register. */
#define ALT_CLKMGR_MAINPLL_CNTR8CLK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_MAINPLL_CNTR8CLK register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_CNTR8CLK_OFST        0x40

/*
 * Register : Main PLL Control Register for Counter 9 Clock - cntr9clk
 * 
 * Contains settings that control Couner 9 clock generated from the Main PLL VCO
 * clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                    
 * :--------|:-------|:------|:--------------------------------
 *  [10:0]  | RW     | 0x0   | Counter                        
 *  [15:11] | ???    | 0x0   | *UNDEFINED*                    
 *  [18:16] | RW     | 0x0   | ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC
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
 *  ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC_E_MAIN   | 0x0   |            
 *  ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC_E_PERI   | 0x1   |            
 *  ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC_E_OSC1   | 0x2   |            
 *  ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC_E_INTOSC | 0x3   |            
 *  ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC_E_FPGA   | 0x4   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC
 * 
 */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC_E_MAIN      0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC
 * 
 */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC_E_PERI      0x1
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC
 * 
 */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC_E_OSC1      0x2
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC
 * 
 */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC_E_INTOSC    0x3
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC
 * 
 */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC_E_FPGA      0x4

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC register field. */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC register field. */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC_MSB        18
/* The width in bits of the ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC register field. */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC_WIDTH      3
/* The mask used to set the ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC register field value. */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC_SET_MSK    0x00070000
/* The mask used to clear the ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC register field value. */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC_CLR_MSK    0xfff8ffff
/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC register field. */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC field value from a register. */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC_GET(value) (((value) & 0x00070000) >> 16)
/* Produces a ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC_SET(value) (((value) << 16) & 0x00070000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_MAINPLL_CNTR9CLK.
 */
struct ALT_CLKMGR_MAINPLL_CNTR9CLK_s
{
    uint32_t  cnt : 11;  /* Counter */
    uint32_t      :  5;  /* *UNDEFINED* */
    uint32_t  src :  3;  /* ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC */
    uint32_t      : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_CNTR9CLK. */
typedef volatile struct ALT_CLKMGR_MAINPLL_CNTR9CLK_s  ALT_CLKMGR_MAINPLL_CNTR9CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR9CLK register. */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_MAINPLL_CNTR9CLK register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_CNTR9CLK_OFST        0x44

/*
 * Register : Main PLL Control Register for Counter 15 Clock - cntr15clk
 * 
 * Contains settings that control Couner 15 clock generated from the Main PLL VCO
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
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_CNTR15CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR15CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_CNTR15CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR15CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_MAINPLL_CNTR15CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR15CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_MAINPLL_CNTR15CLK_CNT register field value. */
#define ALT_CLKMGR_MAINPLL_CNTR15CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_MAINPLL_CNTR15CLK_CNT register field value. */
#define ALT_CLKMGR_MAINPLL_CNTR15CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR15CLK_CNT register field. */
#define ALT_CLKMGR_MAINPLL_CNTR15CLK_CNT_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_CNTR15CLK_CNT field value from a register. */
#define ALT_CLKMGR_MAINPLL_CNTR15CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_CNTR15CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_CNTR15CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_MAINPLL_CNTR15CLK.
 */
struct ALT_CLKMGR_MAINPLL_CNTR15CLK_s
{
    uint32_t  cnt : 11;  /* Counter */
    uint32_t      : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_CNTR15CLK. */
typedef volatile struct ALT_CLKMGR_MAINPLL_CNTR15CLK_s  ALT_CLKMGR_MAINPLL_CNTR15CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_CNTR15CLK register. */
#define ALT_CLKMGR_MAINPLL_CNTR15CLK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_MAINPLL_CNTR15CLK register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_CNTR15CLK_OFST        0x5c

/*
 * Register : Main PLL Output Counter Reset Register - outrst
 * 
 * Contains settings to assert individual Outreset for all Main PLL Counters.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description         
 * :--------|:-------|:------|:---------------------
 *  [15:0]  | RW     | 0x0   | Output Counter Reset
 *  [31:16] | ???    | 0x0   | *UNDEFINED*         
 * 
 */
/*
 * Field : Output Counter Reset - outreset
 * 
 * Resets the individual PLL output counter.
 * 
 * For software to change the PLL output counter without producing glitches on the
 * respective clock, SW must set the Output Counter Reset Register 'Output Counter
 * Reset' bit. Software then polls the respective Output Counter Reset Acknowledge
 * bit in the Output Counter Reset Ack Status Register. Software then writes the
 * appropriate counter register, and then clears the respective Output Counter
 * Reset bit.
 * 
 * LSB 'outreset[0]' corresponds to PLL output clock C0, etc.
 * 
 * If set to '1', reset output divider, no clock output from counter.
 * 
 * If set to '0', counter is not reset.
 * 
 * The reset value of this bit is applied on a cold reset; warm reset has no affect
 * on this bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_OUTRST_OUTRST register field. */
#define ALT_CLKMGR_MAINPLL_OUTRST_OUTRST_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_OUTRST_OUTRST register field. */
#define ALT_CLKMGR_MAINPLL_OUTRST_OUTRST_MSB        15
/* The width in bits of the ALT_CLKMGR_MAINPLL_OUTRST_OUTRST register field. */
#define ALT_CLKMGR_MAINPLL_OUTRST_OUTRST_WIDTH      16
/* The mask used to set the ALT_CLKMGR_MAINPLL_OUTRST_OUTRST register field value. */
#define ALT_CLKMGR_MAINPLL_OUTRST_OUTRST_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_CLKMGR_MAINPLL_OUTRST_OUTRST register field value. */
#define ALT_CLKMGR_MAINPLL_OUTRST_OUTRST_CLR_MSK    0xffff0000
/* The reset value of the ALT_CLKMGR_MAINPLL_OUTRST_OUTRST register field. */
#define ALT_CLKMGR_MAINPLL_OUTRST_OUTRST_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_OUTRST_OUTRST field value from a register. */
#define ALT_CLKMGR_MAINPLL_OUTRST_OUTRST_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_OUTRST_OUTRST register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_OUTRST_OUTRST_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_MAINPLL_OUTRST.
 */
struct ALT_CLKMGR_MAINPLL_OUTRST_s
{
    uint32_t  outreset : 16;  /* Output Counter Reset */
    uint32_t           : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_OUTRST. */
typedef volatile struct ALT_CLKMGR_MAINPLL_OUTRST_s  ALT_CLKMGR_MAINPLL_OUTRST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_OUTRST register. */
#define ALT_CLKMGR_MAINPLL_OUTRST_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_MAINPLL_OUTRST register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_OUTRST_OFST        0x60

/*
 * Register : Main PLL Output Counter Reset Ack Status Register - outrststat
 * 
 * Contains Output Clock Counter Reset acknowledge status.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                     
 * :--------|:-------|:------|:---------------------------------
 *  [15:0]  | R      | 0x0   | Output Counter Reset Acknowledge
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                     
 * 
 */
/*
 * Field : Output Counter Reset Acknowledge - outresetack
 * 
 * These read only bits per PLL output indicate that the PLL has received the
 * Output Reset Counter request and has gracefully stopped the respective PLL
 * output clock.
 * 
 * For software to change the PLL output counter without producing glitches on the
 * respective clock, SW must set the Output Counter Reset Register 'Output Counter
 * Reset' bit. Software then polls the respective Output Counter Reset Acknowledge
 * bit in the Output Counter Reset Ack Status Register. Software then writes the
 * appropriate counter register, and then clears the respective Output Counter
 * Reset bit.
 * 
 * The reset value of this bit is applied on a cold reset; warm reset has no affect
 * on this bit.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                              | Value | Description                         
 * :--------------------------------------------------|:------|:-------------------------------------
 *  ALT_CLKMGR_MAINPLL_OUTRSTSTAT_OUTRSTACK_E_IDLE    | 0x0   | Idle                                
 *  ALT_CLKMGR_MAINPLL_OUTRSTSTAT_OUTRSTACK_E_ACK_RXD | 0x1   | Output Counter Acknowledge received.
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_OUTRSTSTAT_OUTRSTACK
 * 
 * Idle
 */
#define ALT_CLKMGR_MAINPLL_OUTRSTSTAT_OUTRSTACK_E_IDLE      0x0
/*
 * Enumerated value for register field ALT_CLKMGR_MAINPLL_OUTRSTSTAT_OUTRSTACK
 * 
 * Output Counter Acknowledge received.
 */
#define ALT_CLKMGR_MAINPLL_OUTRSTSTAT_OUTRSTACK_E_ACK_RXD   0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_MAINPLL_OUTRSTSTAT_OUTRSTACK register field. */
#define ALT_CLKMGR_MAINPLL_OUTRSTSTAT_OUTRSTACK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_MAINPLL_OUTRSTSTAT_OUTRSTACK register field. */
#define ALT_CLKMGR_MAINPLL_OUTRSTSTAT_OUTRSTACK_MSB        15
/* The width in bits of the ALT_CLKMGR_MAINPLL_OUTRSTSTAT_OUTRSTACK register field. */
#define ALT_CLKMGR_MAINPLL_OUTRSTSTAT_OUTRSTACK_WIDTH      16
/* The mask used to set the ALT_CLKMGR_MAINPLL_OUTRSTSTAT_OUTRSTACK register field value. */
#define ALT_CLKMGR_MAINPLL_OUTRSTSTAT_OUTRSTACK_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_CLKMGR_MAINPLL_OUTRSTSTAT_OUTRSTACK register field value. */
#define ALT_CLKMGR_MAINPLL_OUTRSTSTAT_OUTRSTACK_CLR_MSK    0xffff0000
/* The reset value of the ALT_CLKMGR_MAINPLL_OUTRSTSTAT_OUTRSTACK register field. */
#define ALT_CLKMGR_MAINPLL_OUTRSTSTAT_OUTRSTACK_RESET      0x0
/* Extracts the ALT_CLKMGR_MAINPLL_OUTRSTSTAT_OUTRSTACK field value from a register. */
#define ALT_CLKMGR_MAINPLL_OUTRSTSTAT_OUTRSTACK_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_CLKMGR_MAINPLL_OUTRSTSTAT_OUTRSTACK register field value suitable for setting the register. */
#define ALT_CLKMGR_MAINPLL_OUTRSTSTAT_OUTRSTACK_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_MAINPLL_OUTRSTSTAT.
 */
struct ALT_CLKMGR_MAINPLL_OUTRSTSTAT_s
{
    const uint32_t  outresetack : 16;  /* Output Counter Reset Acknowledge */
    uint32_t                    : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_OUTRSTSTAT. */
typedef volatile struct ALT_CLKMGR_MAINPLL_OUTRSTSTAT_s  ALT_CLKMGR_MAINPLL_OUTRSTSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_OUTRSTSTAT register. */
#define ALT_CLKMGR_MAINPLL_OUTRSTSTAT_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_MAINPLL_OUTRSTSTAT register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_OUTRSTSTAT_OFST        0x64

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
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_MAINPLL_NOCDIV.
 */
struct ALT_CLKMGR_MAINPLL_NOCDIV_s
{
    uint32_t  l4mainclk  :  2;  /* L4 Main Clock Divider */
    uint32_t             :  6;  /* *UNDEFINED* */
    uint32_t  l4mpclk    :  2;  /* L4 MP Clock Divider */
    uint32_t             :  6;  /* *UNDEFINED* */
    uint32_t  l4spclk    :  2;  /* L4 SP Clock Divider */
    uint32_t             :  6;  /* *UNDEFINED* */
    uint32_t  csatclk    :  2;  /* CoreSight Trace Clock Divider */
    uint32_t  cstraceclk :  2;  /* CoreSight Trace Interface Clock Divider */
    uint32_t  cspdbgclk  :  1;  /* CoreSight Debug Clock Divider */
    uint32_t             :  3;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_MAINPLL_NOCDIV. */
typedef volatile struct ALT_CLKMGR_MAINPLL_NOCDIV_s  ALT_CLKMGR_MAINPLL_NOCDIV_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_MAINPLL_NOCDIV register. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_RESET       0x18020100
/* The byte offset of the ALT_CLKMGR_MAINPLL_NOCDIV register from the beginning of the component. */
#define ALT_CLKMGR_MAINPLL_NOCDIV_OFST        0x68

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_CLKMGR_MAINPLL.
 */
struct ALT_CLKMGR_MAINPLL_s
{
    ALT_CLKMGR_MAINPLL_VCO0_t        vco0;               /* ALT_CLKMGR_MAINPLL_VCO0 */
    ALT_CLKMGR_MAINPLL_VCO1_t        vco1;               /* ALT_CLKMGR_MAINPLL_VCO1 */
    ALT_CLKMGR_MAINPLL_EN_t          en;                 /* ALT_CLKMGR_MAINPLL_EN */
    ALT_CLKMGR_MAINPLL_ENS_t         ens;                /* ALT_CLKMGR_MAINPLL_ENS */
    ALT_CLKMGR_MAINPLL_ENR_t         enr;                /* ALT_CLKMGR_MAINPLL_ENR */
    ALT_CLKMGR_MAINPLL_BYPASS_t      bypass;             /* ALT_CLKMGR_MAINPLL_BYPASS */
    ALT_CLKMGR_MAINPLL_BYPASSS_t     bypasss;            /* ALT_CLKMGR_MAINPLL_BYPASSS */
    ALT_CLKMGR_MAINPLL_BYPASSR_t     bypassr;            /* ALT_CLKMGR_MAINPLL_BYPASSR */
    ALT_CLKMGR_MAINPLL_MPUCLK_t      mpuclk;             /* ALT_CLKMGR_MAINPLL_MPUCLK */
    ALT_CLKMGR_MAINPLL_NOCCLK_t      nocclk;             /* ALT_CLKMGR_MAINPLL_NOCCLK */
    ALT_CLKMGR_MAINPLL_CNTR2CLK_t    cntr2clk;           /* ALT_CLKMGR_MAINPLL_CNTR2CLK */
    ALT_CLKMGR_MAINPLL_CNTR3CLK_t    cntr3clk;           /* ALT_CLKMGR_MAINPLL_CNTR3CLK */
    ALT_CLKMGR_MAINPLL_CNTR4CLK_t    cntr4clk;           /* ALT_CLKMGR_MAINPLL_CNTR4CLK */
    ALT_CLKMGR_MAINPLL_CNTR5CLK_t    cntr5clk;           /* ALT_CLKMGR_MAINPLL_CNTR5CLK */
    ALT_CLKMGR_MAINPLL_CNTR6CLK_t    cntr6clk;           /* ALT_CLKMGR_MAINPLL_CNTR6CLK */
    ALT_CLKMGR_MAINPLL_CNTR7CLK_t    cntr7clk;           /* ALT_CLKMGR_MAINPLL_CNTR7CLK */
    ALT_CLKMGR_MAINPLL_CNTR8CLK_t    cntr8clk;           /* ALT_CLKMGR_MAINPLL_CNTR8CLK */
    ALT_CLKMGR_MAINPLL_CNTR9CLK_t    cntr9clk;           /* ALT_CLKMGR_MAINPLL_CNTR9CLK */
    volatile uint32_t                _pad_0x48_0x5b[5];  /* *UNDEFINED* */
    ALT_CLKMGR_MAINPLL_CNTR15CLK_t   cntr15clk;          /* ALT_CLKMGR_MAINPLL_CNTR15CLK */
    ALT_CLKMGR_MAINPLL_OUTRST_t      outrst;             /* ALT_CLKMGR_MAINPLL_OUTRST */
    ALT_CLKMGR_MAINPLL_OUTRSTSTAT_t  outrststat;         /* ALT_CLKMGR_MAINPLL_OUTRSTSTAT */
    ALT_CLKMGR_MAINPLL_NOCDIV_t      nocdiv;             /* ALT_CLKMGR_MAINPLL_NOCDIV */
    volatile uint32_t                _pad_0x6c_0x80[5];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_CLKMGR_MAINPLL. */
typedef volatile struct ALT_CLKMGR_MAINPLL_s  ALT_CLKMGR_MAINPLL_t;
/* The struct declaration for the raw register contents of register group ALT_CLKMGR_MAINPLL. */
struct ALT_CLKMGR_MAINPLL_raw_s
{
    volatile uint32_t  vco0;               /* ALT_CLKMGR_MAINPLL_VCO0 */
    volatile uint32_t  vco1;               /* ALT_CLKMGR_MAINPLL_VCO1 */
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
    uint32_t           _pad_0x48_0x5b[5];  /* *UNDEFINED* */
    volatile uint32_t  cntr15clk;          /* ALT_CLKMGR_MAINPLL_CNTR15CLK */
    volatile uint32_t  outrst;             /* ALT_CLKMGR_MAINPLL_OUTRST */
    volatile uint32_t  outrststat;         /* ALT_CLKMGR_MAINPLL_OUTRSTSTAT */
    volatile uint32_t  nocdiv;             /* ALT_CLKMGR_MAINPLL_NOCDIV */
    uint32_t           _pad_0x6c_0x80[5];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_CLKMGR_MAINPLL. */
typedef volatile struct ALT_CLKMGR_MAINPLL_raw_s  ALT_CLKMGR_MAINPLL_raw_t;
#endif  /* __ASSEMBLY__ */


/*
 * Component : ALT_CLKMGR_PERPLL
 * 
 */
/*
 * Register : Peripheral PLL VCO Control Register 0 - vco0
 * 
 * Contains settings that control the Peripheral PLL VCO.   VCO0 register contains
 * signals required for PLL reset and power down.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                    
 * :--------|:-------|:------|:--------------------------------
 *  [0]     | RW     | 0x1   | BG PWRDN                       
 *  [1]     | RW     | 0x1   | Power down                     
 *  [2]     | RW     | 0x0   | Enable                         
 *  [3]     | RW     | 0x0   | All Output Counter Reset       
 *  [4]     | RW     | 0x0   | External Regulator Input Select
 *  [5]     | RW     | 0x0   | Fast Locking Enable            
 *  [6]     | RW     | 0x1   | Saturation Enable              
 *  [7]     | ???    | 0x0   | *UNDEFINED*                    
 *  [9:8]   | RW     | 0x0   | Clock Source                   
 *  [15:10] | ???    | 0x0   | *UNDEFINED*                    
 *  [27:16] | RW     | 0x1   | Loop Bandwidth Adjust          
 *  [28]    | RW     | 0x0   | Loop Bandwidth Adjust Enabled  
 *  [31:29] | ???    | 0x0   | *UNDEFINED*                    
 * 
 */
/*
 * Field : BG PWRDN - bgpwrdn
 * 
 * If '1', powers down bandgap. If '0', bandgap is not power down.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_VCO0_BGPWRDN register field. */
#define ALT_CLKMGR_PERPLL_VCO0_BGPWRDN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_VCO0_BGPWRDN register field. */
#define ALT_CLKMGR_PERPLL_VCO0_BGPWRDN_MSB        0
/* The width in bits of the ALT_CLKMGR_PERPLL_VCO0_BGPWRDN register field. */
#define ALT_CLKMGR_PERPLL_VCO0_BGPWRDN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_VCO0_BGPWRDN register field value. */
#define ALT_CLKMGR_PERPLL_VCO0_BGPWRDN_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_PERPLL_VCO0_BGPWRDN register field value. */
#define ALT_CLKMGR_PERPLL_VCO0_BGPWRDN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_PERPLL_VCO0_BGPWRDN register field. */
#define ALT_CLKMGR_PERPLL_VCO0_BGPWRDN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_VCO0_BGPWRDN field value from a register. */
#define ALT_CLKMGR_PERPLL_VCO0_BGPWRDN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_VCO0_BGPWRDN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_VCO0_BGPWRDN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Power down - pwrdn
 * 
 * If '1', power down analog circuitry. If '0', analog circuitry not powered down.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_VCO0_PWRDN register field. */
#define ALT_CLKMGR_PERPLL_VCO0_PWRDN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_VCO0_PWRDN register field. */
#define ALT_CLKMGR_PERPLL_VCO0_PWRDN_MSB        1
/* The width in bits of the ALT_CLKMGR_PERPLL_VCO0_PWRDN register field. */
#define ALT_CLKMGR_PERPLL_VCO0_PWRDN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_VCO0_PWRDN register field value. */
#define ALT_CLKMGR_PERPLL_VCO0_PWRDN_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_PERPLL_VCO0_PWRDN register field value. */
#define ALT_CLKMGR_PERPLL_VCO0_PWRDN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_PERPLL_VCO0_PWRDN register field. */
#define ALT_CLKMGR_PERPLL_VCO0_PWRDN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_VCO0_PWRDN field value from a register. */
#define ALT_CLKMGR_PERPLL_VCO0_PWRDN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_PERPLL_VCO0_PWRDN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_VCO0_PWRDN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : Enable - en
 * 
 * If '1', VCO is enabled. If '0', VCO is in reset.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_VCO0_EN register field. */
#define ALT_CLKMGR_PERPLL_VCO0_EN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_VCO0_EN register field. */
#define ALT_CLKMGR_PERPLL_VCO0_EN_MSB        2
/* The width in bits of the ALT_CLKMGR_PERPLL_VCO0_EN register field. */
#define ALT_CLKMGR_PERPLL_VCO0_EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_VCO0_EN register field value. */
#define ALT_CLKMGR_PERPLL_VCO0_EN_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_PERPLL_VCO0_EN register field value. */
#define ALT_CLKMGR_PERPLL_VCO0_EN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_PERPLL_VCO0_EN register field. */
#define ALT_CLKMGR_PERPLL_VCO0_EN_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_VCO0_EN field value from a register. */
#define ALT_CLKMGR_PERPLL_VCO0_EN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_PERPLL_VCO0_EN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_VCO0_EN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : All Output Counter Reset - outresetall
 * 
 * Before releasing Bypass, All Output Counter Reset must be set and cleared by
 * software for correct clock operation.
 * 
 * If '1', Reset phase multiplexer and all output counter state. So that after the
 * assertion all the clocks output are start from rising edge align.
 * 
 * If '0', phase multiplexer and output counter state not reset and no change to
 * the phase of the clock outputs.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_VCO0_OUTRSTALL register field. */
#define ALT_CLKMGR_PERPLL_VCO0_OUTRSTALL_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_VCO0_OUTRSTALL register field. */
#define ALT_CLKMGR_PERPLL_VCO0_OUTRSTALL_MSB        3
/* The width in bits of the ALT_CLKMGR_PERPLL_VCO0_OUTRSTALL register field. */
#define ALT_CLKMGR_PERPLL_VCO0_OUTRSTALL_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_VCO0_OUTRSTALL register field value. */
#define ALT_CLKMGR_PERPLL_VCO0_OUTRSTALL_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_PERPLL_VCO0_OUTRSTALL register field value. */
#define ALT_CLKMGR_PERPLL_VCO0_OUTRSTALL_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_PERPLL_VCO0_OUTRSTALL register field. */
#define ALT_CLKMGR_PERPLL_VCO0_OUTRSTALL_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_VCO0_OUTRSTALL field value from a register. */
#define ALT_CLKMGR_PERPLL_VCO0_OUTRSTALL_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_PERPLL_VCO0_OUTRSTALL register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_VCO0_OUTRSTALL_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : External Regulator Input Select - regextsel
 * 
 * If set to '1', the external regulator is selected for the PLL.
 * 
 * If set to '0', the internal regulator is slected.
 * 
 * It is strongly recommended to select the external regulator while the PLL is not
 * enabled (in reset), and  then disable the external regulater once the PLL
 * becomes enabled.  Software should simulateously update the 'Enable' bit and the
 * 'External Regulator Input Select' in the same write access to the VCO register.
 * When the 'Enable' bit is clear, the 'External Regulator Input Select' should be
 * set, and vice versa.
 * 
 * The reset value of this bit is applied on a cold reset; warm reset has no affect
 * on this bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_VCO0_REGEXTSEL register field. */
#define ALT_CLKMGR_PERPLL_VCO0_REGEXTSEL_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_VCO0_REGEXTSEL register field. */
#define ALT_CLKMGR_PERPLL_VCO0_REGEXTSEL_MSB        4
/* The width in bits of the ALT_CLKMGR_PERPLL_VCO0_REGEXTSEL register field. */
#define ALT_CLKMGR_PERPLL_VCO0_REGEXTSEL_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_VCO0_REGEXTSEL register field value. */
#define ALT_CLKMGR_PERPLL_VCO0_REGEXTSEL_SET_MSK    0x00000010
/* The mask used to clear the ALT_CLKMGR_PERPLL_VCO0_REGEXTSEL register field value. */
#define ALT_CLKMGR_PERPLL_VCO0_REGEXTSEL_CLR_MSK    0xffffffef
/* The reset value of the ALT_CLKMGR_PERPLL_VCO0_REGEXTSEL register field. */
#define ALT_CLKMGR_PERPLL_VCO0_REGEXTSEL_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_VCO0_REGEXTSEL field value from a register. */
#define ALT_CLKMGR_PERPLL_VCO0_REGEXTSEL_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_CLKMGR_PERPLL_VCO0_REGEXTSEL register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_VCO0_REGEXTSEL_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : Fast Locking Enable - fasten
 * 
 * Enables fast locking circuit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_VCO0_FASTEN register field. */
#define ALT_CLKMGR_PERPLL_VCO0_FASTEN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_VCO0_FASTEN register field. */
#define ALT_CLKMGR_PERPLL_VCO0_FASTEN_MSB        5
/* The width in bits of the ALT_CLKMGR_PERPLL_VCO0_FASTEN register field. */
#define ALT_CLKMGR_PERPLL_VCO0_FASTEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_VCO0_FASTEN register field value. */
#define ALT_CLKMGR_PERPLL_VCO0_FASTEN_SET_MSK    0x00000020
/* The mask used to clear the ALT_CLKMGR_PERPLL_VCO0_FASTEN register field value. */
#define ALT_CLKMGR_PERPLL_VCO0_FASTEN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_CLKMGR_PERPLL_VCO0_FASTEN register field. */
#define ALT_CLKMGR_PERPLL_VCO0_FASTEN_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_VCO0_FASTEN field value from a register. */
#define ALT_CLKMGR_PERPLL_VCO0_FASTEN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_CLKMGR_PERPLL_VCO0_FASTEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_VCO0_FASTEN_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : Saturation Enable - saten
 * 
 * Enables saturation behavior.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_VCO0_SATEN register field. */
#define ALT_CLKMGR_PERPLL_VCO0_SATEN_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_VCO0_SATEN register field. */
#define ALT_CLKMGR_PERPLL_VCO0_SATEN_MSB        6
/* The width in bits of the ALT_CLKMGR_PERPLL_VCO0_SATEN register field. */
#define ALT_CLKMGR_PERPLL_VCO0_SATEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_VCO0_SATEN register field value. */
#define ALT_CLKMGR_PERPLL_VCO0_SATEN_SET_MSK    0x00000040
/* The mask used to clear the ALT_CLKMGR_PERPLL_VCO0_SATEN register field value. */
#define ALT_CLKMGR_PERPLL_VCO0_SATEN_CLR_MSK    0xffffffbf
/* The reset value of the ALT_CLKMGR_PERPLL_VCO0_SATEN register field. */
#define ALT_CLKMGR_PERPLL_VCO0_SATEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_VCO0_SATEN field value from a register. */
#define ALT_CLKMGR_PERPLL_VCO0_SATEN_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_CLKMGR_PERPLL_VCO0_SATEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_VCO0_SATEN_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : Clock Source - psrc
 * 
 * Controls the VCO input clock source.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                 | Value | Description     
 * :-------------------------------------|:------|:-----------------
 *  ALT_CLKMGR_PERPLL_VCO0_PSRC_E_EOSC1  | 0x0   | eosc1_clk       
 *  ALT_CLKMGR_PERPLL_VCO0_PSRC_E_INTOSC | 0x1   | cb_intosc_clk   
 *  ALT_CLKMGR_PERPLL_VCO0_PSRC_E_F2S    | 0x2   | f2s_free_clk    
 *  ALT_CLKMGR_PERPLL_VCO0_PSRC_E_MAIN   | 0x3   | main_count15_clk
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_VCO0_PSRC
 * 
 * eosc1_clk
 */
#define ALT_CLKMGR_PERPLL_VCO0_PSRC_E_EOSC1     0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_VCO0_PSRC
 * 
 * cb_intosc_clk
 */
#define ALT_CLKMGR_PERPLL_VCO0_PSRC_E_INTOSC    0x1
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_VCO0_PSRC
 * 
 * f2s_free_clk
 */
#define ALT_CLKMGR_PERPLL_VCO0_PSRC_E_F2S       0x2
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_VCO0_PSRC
 * 
 * main_count15_clk
 */
#define ALT_CLKMGR_PERPLL_VCO0_PSRC_E_MAIN      0x3

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_VCO0_PSRC register field. */
#define ALT_CLKMGR_PERPLL_VCO0_PSRC_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_VCO0_PSRC register field. */
#define ALT_CLKMGR_PERPLL_VCO0_PSRC_MSB        9
/* The width in bits of the ALT_CLKMGR_PERPLL_VCO0_PSRC register field. */
#define ALT_CLKMGR_PERPLL_VCO0_PSRC_WIDTH      2
/* The mask used to set the ALT_CLKMGR_PERPLL_VCO0_PSRC register field value. */
#define ALT_CLKMGR_PERPLL_VCO0_PSRC_SET_MSK    0x00000300
/* The mask used to clear the ALT_CLKMGR_PERPLL_VCO0_PSRC register field value. */
#define ALT_CLKMGR_PERPLL_VCO0_PSRC_CLR_MSK    0xfffffcff
/* The reset value of the ALT_CLKMGR_PERPLL_VCO0_PSRC register field. */
#define ALT_CLKMGR_PERPLL_VCO0_PSRC_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_VCO0_PSRC field value from a register. */
#define ALT_CLKMGR_PERPLL_VCO0_PSRC_GET(value) (((value) & 0x00000300) >> 8)
/* Produces a ALT_CLKMGR_PERPLL_VCO0_PSRC register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_VCO0_PSRC_SET(value) (((value) << 8) & 0x00000300)

/*
 * Field : Loop Bandwidth Adjust - bwadj
 * 
 * Provides Loop Bandwidth Adjust value.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_VCO0_BWADJ register field. */
#define ALT_CLKMGR_PERPLL_VCO0_BWADJ_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_VCO0_BWADJ register field. */
#define ALT_CLKMGR_PERPLL_VCO0_BWADJ_MSB        27
/* The width in bits of the ALT_CLKMGR_PERPLL_VCO0_BWADJ register field. */
#define ALT_CLKMGR_PERPLL_VCO0_BWADJ_WIDTH      12
/* The mask used to set the ALT_CLKMGR_PERPLL_VCO0_BWADJ register field value. */
#define ALT_CLKMGR_PERPLL_VCO0_BWADJ_SET_MSK    0x0fff0000
/* The mask used to clear the ALT_CLKMGR_PERPLL_VCO0_BWADJ register field value. */
#define ALT_CLKMGR_PERPLL_VCO0_BWADJ_CLR_MSK    0xf000ffff
/* The reset value of the ALT_CLKMGR_PERPLL_VCO0_BWADJ register field. */
#define ALT_CLKMGR_PERPLL_VCO0_BWADJ_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_VCO0_BWADJ field value from a register. */
#define ALT_CLKMGR_PERPLL_VCO0_BWADJ_GET(value) (((value) & 0x0fff0000) >> 16)
/* Produces a ALT_CLKMGR_PERPLL_VCO0_BWADJ register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_VCO0_BWADJ_SET(value) (((value) << 16) & 0x0fff0000)

/*
 * Field : Loop Bandwidth Adjust Enabled - bwadjen
 * 
 * If set to 1, the Loop Bandwidth Adjust value comes from the Loop Bandwidth
 * Adjust field.
 * 
 * If set to 0, the Loop Bandwidth Adjust value equals the M field divided by 2
 * value of the VCO Control Register.  The M divided by 2 is the upper 12 bits
 * (12:1) of the M field in the VCO register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_VCO0_BWADJEN register field. */
#define ALT_CLKMGR_PERPLL_VCO0_BWADJEN_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_VCO0_BWADJEN register field. */
#define ALT_CLKMGR_PERPLL_VCO0_BWADJEN_MSB        28
/* The width in bits of the ALT_CLKMGR_PERPLL_VCO0_BWADJEN register field. */
#define ALT_CLKMGR_PERPLL_VCO0_BWADJEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_VCO0_BWADJEN register field value. */
#define ALT_CLKMGR_PERPLL_VCO0_BWADJEN_SET_MSK    0x10000000
/* The mask used to clear the ALT_CLKMGR_PERPLL_VCO0_BWADJEN register field value. */
#define ALT_CLKMGR_PERPLL_VCO0_BWADJEN_CLR_MSK    0xefffffff
/* The reset value of the ALT_CLKMGR_PERPLL_VCO0_BWADJEN register field. */
#define ALT_CLKMGR_PERPLL_VCO0_BWADJEN_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_VCO0_BWADJEN field value from a register. */
#define ALT_CLKMGR_PERPLL_VCO0_BWADJEN_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_CLKMGR_PERPLL_VCO0_BWADJEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_VCO0_BWADJEN_SET(value) (((value) << 28) & 0x10000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_PERPLL_VCO0.
 */
struct ALT_CLKMGR_PERPLL_VCO0_s
{
    uint32_t  bgpwrdn     :  1;  /* BG PWRDN */
    uint32_t  pwrdn       :  1;  /* Power down */
    uint32_t  en          :  1;  /* Enable */
    uint32_t  outresetall :  1;  /* All Output Counter Reset */
    uint32_t  regextsel   :  1;  /* External Regulator Input Select */
    uint32_t  fasten      :  1;  /* Fast Locking Enable */
    uint32_t  saten       :  1;  /* Saturation Enable */
    uint32_t              :  1;  /* *UNDEFINED* */
    uint32_t  psrc        :  2;  /* Clock Source */
    uint32_t              :  6;  /* *UNDEFINED* */
    uint32_t  bwadj       : 12;  /* Loop Bandwidth Adjust */
    uint32_t  bwadjen     :  1;  /* Loop Bandwidth Adjust Enabled */
    uint32_t              :  3;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_VCO0. */
typedef volatile struct ALT_CLKMGR_PERPLL_VCO0_s  ALT_CLKMGR_PERPLL_VCO0_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_VCO0 register. */
#define ALT_CLKMGR_PERPLL_VCO0_RESET       0x00010043
/* The byte offset of the ALT_CLKMGR_PERPLL_VCO0 register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_VCO0_OFST        0x0

/*
 * Register : Main PLL VCO Control Register - vco1
 * 
 * Contains settings that control the Peripheral PLL VCO. The VCO1 register
 * contains the numerator and denominator counter settings.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description    
 * :--------|:-------|:------|:----------------
 *  [12:0]  | RW     | 0x1   | Numerator (M)  
 *  [15:13] | ???    | 0x0   | *UNDEFINED*    
 *  [21:16] | RW     | 0x1   | Denominator (N)
 *  [31:22] | ???    | 0x0   | *UNDEFINED*    
 * 
 */
/*
 * Field : Numerator (M) - numer
 * 
 * Numerator in VCO output frequency equation. For incremental frequency change, if
 * the new value lead to less than 20% of the frequency change, this value can be
 * changed without resetting the PLL. The Numerator and Denominator can not be
 * changed at the same time for incremental frequency changed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_VCO1_NUMER register field. */
#define ALT_CLKMGR_PERPLL_VCO1_NUMER_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_VCO1_NUMER register field. */
#define ALT_CLKMGR_PERPLL_VCO1_NUMER_MSB        12
/* The width in bits of the ALT_CLKMGR_PERPLL_VCO1_NUMER register field. */
#define ALT_CLKMGR_PERPLL_VCO1_NUMER_WIDTH      13
/* The mask used to set the ALT_CLKMGR_PERPLL_VCO1_NUMER register field value. */
#define ALT_CLKMGR_PERPLL_VCO1_NUMER_SET_MSK    0x00001fff
/* The mask used to clear the ALT_CLKMGR_PERPLL_VCO1_NUMER register field value. */
#define ALT_CLKMGR_PERPLL_VCO1_NUMER_CLR_MSK    0xffffe000
/* The reset value of the ALT_CLKMGR_PERPLL_VCO1_NUMER register field. */
#define ALT_CLKMGR_PERPLL_VCO1_NUMER_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_VCO1_NUMER field value from a register. */
#define ALT_CLKMGR_PERPLL_VCO1_NUMER_GET(value) (((value) & 0x00001fff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_VCO1_NUMER register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_VCO1_NUMER_SET(value) (((value) << 0) & 0x00001fff)

/*
 * Field : Denominator (N) - denom
 * 
 * Denominator in VCO output frequency equation. For incremental frequency change,
 * if the new value lead to less than 20% of the frequency change, this value can
 * be changed without resetting the PLL. The Numerator and Denominator can not be
 * changed at the same time for incremental frequency changed.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_VCO1_DENOM register field. */
#define ALT_CLKMGR_PERPLL_VCO1_DENOM_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_VCO1_DENOM register field. */
#define ALT_CLKMGR_PERPLL_VCO1_DENOM_MSB        21
/* The width in bits of the ALT_CLKMGR_PERPLL_VCO1_DENOM register field. */
#define ALT_CLKMGR_PERPLL_VCO1_DENOM_WIDTH      6
/* The mask used to set the ALT_CLKMGR_PERPLL_VCO1_DENOM register field value. */
#define ALT_CLKMGR_PERPLL_VCO1_DENOM_SET_MSK    0x003f0000
/* The mask used to clear the ALT_CLKMGR_PERPLL_VCO1_DENOM register field value. */
#define ALT_CLKMGR_PERPLL_VCO1_DENOM_CLR_MSK    0xffc0ffff
/* The reset value of the ALT_CLKMGR_PERPLL_VCO1_DENOM register field. */
#define ALT_CLKMGR_PERPLL_VCO1_DENOM_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_VCO1_DENOM field value from a register. */
#define ALT_CLKMGR_PERPLL_VCO1_DENOM_GET(value) (((value) & 0x003f0000) >> 16)
/* Produces a ALT_CLKMGR_PERPLL_VCO1_DENOM register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_VCO1_DENOM_SET(value) (((value) << 16) & 0x003f0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_PERPLL_VCO1.
 */
struct ALT_CLKMGR_PERPLL_VCO1_s
{
    uint32_t  numer : 13;  /* Numerator (M) */
    uint32_t        :  3;  /* *UNDEFINED* */
    uint32_t  denom :  6;  /* Denominator (N) */
    uint32_t        : 10;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_VCO1. */
typedef volatile struct ALT_CLKMGR_PERPLL_VCO1_s  ALT_CLKMGR_PERPLL_VCO1_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_VCO1 register. */
#define ALT_CLKMGR_PERPLL_VCO1_RESET       0x00010001
/* The byte offset of the ALT_CLKMGR_PERPLL_VCO1 register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_VCO1_OFST        0x4

/*
 * Register : Enable Register - en
 * 
 * Contains fields that control clock enables for clocks derived from the
 * Peripheral PLL.
 * 
 * 1: The clock is enabled.
 * 
 * 0: The clock is disabled.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description         
 * :--------|:-------|:------|:---------------------
 *  [0]     | RW     | 0x1   | emac0_clk Enable    
 *  [1]     | RW     | 0x1   | emac1_clk_clk Enable
 *  [2]     | RW     | 0x1   | emac2_clk Enable    
 *  [3]     | RW     | 0x1   | emac_ptp_clk Enable 
 *  [4]     | RW     | 0x1   | gpio_db_clk Enable  
 *  [5]     | RW     | 0x1   | SDMMC Clock Enable  
 *  [6]     | RW     | 0x1   | s2f_user1_clk Enable
 *  [7]     | ???    | 0x0   | *UNDEFINED*         
 *  [8]     | RW     | 0x1   | USB Clock Enable    
 *  [9]     | RW     | 0x1   | SPIM Clock Enable   
 *  [10]    | RW     | 0x1   | NAND Clock Enable   
 *  [11]    | RW     | 0x1   | QSPI Clock Enable   
 *  [31:12] | ???    | 0x0   | *UNDEFINED*         
 * 
 */
/*
 * Field : emac0_clk Enable - emac0en
 * 
 * Enables clock emac0_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EN_EMAC0EN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMAC0EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EN_EMAC0EN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMAC0EN_MSB        0
/* The width in bits of the ALT_CLKMGR_PERPLL_EN_EMAC0EN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMAC0EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EN_EMAC0EN register field value. */
#define ALT_CLKMGR_PERPLL_EN_EMAC0EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_PERPLL_EN_EMAC0EN register field value. */
#define ALT_CLKMGR_PERPLL_EN_EMAC0EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_PERPLL_EN_EMAC0EN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMAC0EN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_EN_EMAC0EN field value from a register. */
#define ALT_CLKMGR_PERPLL_EN_EMAC0EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_EN_EMAC0EN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EN_EMAC0EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : emac1_clk_clk Enable - emac1en
 * 
 * Enables clock emac1_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EN_EMAC1EN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMAC1EN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EN_EMAC1EN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMAC1EN_MSB        1
/* The width in bits of the ALT_CLKMGR_PERPLL_EN_EMAC1EN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMAC1EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EN_EMAC1EN register field value. */
#define ALT_CLKMGR_PERPLL_EN_EMAC1EN_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_PERPLL_EN_EMAC1EN register field value. */
#define ALT_CLKMGR_PERPLL_EN_EMAC1EN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_PERPLL_EN_EMAC1EN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMAC1EN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_EN_EMAC1EN field value from a register. */
#define ALT_CLKMGR_PERPLL_EN_EMAC1EN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_PERPLL_EN_EMAC1EN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EN_EMAC1EN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : emac2_clk Enable - emac2en
 * 
 * Enables clock emac2_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EN_EMAC2EN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMAC2EN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EN_EMAC2EN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMAC2EN_MSB        2
/* The width in bits of the ALT_CLKMGR_PERPLL_EN_EMAC2EN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMAC2EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EN_EMAC2EN register field value. */
#define ALT_CLKMGR_PERPLL_EN_EMAC2EN_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_PERPLL_EN_EMAC2EN register field value. */
#define ALT_CLKMGR_PERPLL_EN_EMAC2EN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_PERPLL_EN_EMAC2EN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMAC2EN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_EN_EMAC2EN field value from a register. */
#define ALT_CLKMGR_PERPLL_EN_EMAC2EN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_PERPLL_EN_EMAC2EN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EN_EMAC2EN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : emac_ptp_clk Enable - emacptpen
 * 
 * Enables clock emac_ptp_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EN_EMACPTPEN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMACPTPEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EN_EMACPTPEN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMACPTPEN_MSB        3
/* The width in bits of the ALT_CLKMGR_PERPLL_EN_EMACPTPEN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMACPTPEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EN_EMACPTPEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_EMACPTPEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_PERPLL_EN_EMACPTPEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_EMACPTPEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_PERPLL_EN_EMACPTPEN register field. */
#define ALT_CLKMGR_PERPLL_EN_EMACPTPEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_EN_EMACPTPEN field value from a register. */
#define ALT_CLKMGR_PERPLL_EN_EMACPTPEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_PERPLL_EN_EMACPTPEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EN_EMACPTPEN_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : gpio_db_clk Enable - gpiodben
 * 
 * Enables clock gpio_db_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EN_GPIODBEN register field. */
#define ALT_CLKMGR_PERPLL_EN_GPIODBEN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EN_GPIODBEN register field. */
#define ALT_CLKMGR_PERPLL_EN_GPIODBEN_MSB        4
/* The width in bits of the ALT_CLKMGR_PERPLL_EN_GPIODBEN register field. */
#define ALT_CLKMGR_PERPLL_EN_GPIODBEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EN_GPIODBEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_GPIODBEN_SET_MSK    0x00000010
/* The mask used to clear the ALT_CLKMGR_PERPLL_EN_GPIODBEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_GPIODBEN_CLR_MSK    0xffffffef
/* The reset value of the ALT_CLKMGR_PERPLL_EN_GPIODBEN register field. */
#define ALT_CLKMGR_PERPLL_EN_GPIODBEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_EN_GPIODBEN field value from a register. */
#define ALT_CLKMGR_PERPLL_EN_GPIODBEN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_CLKMGR_PERPLL_EN_GPIODBEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EN_GPIODBEN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : SDMMC Clock Enable - sdmmcclken
 * 
 * Enables SDMMC peripheral clock.   This enable goes outside of the Clock Manger
 * to the SDMMC directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN_MSB        5
/* The width in bits of the ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN_SET_MSK    0x00000020
/* The mask used to clear the ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : s2f_user1_clk Enable - s2fuser1clken
 * 
 * Enables clock s2f_user1_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN_MSB        6
/* The width in bits of the ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN_SET_MSK    0x00000040
/* The mask used to clear the ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN_CLR_MSK    0xffffffbf
/* The reset value of the ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : USB Clock Enable - usbclken
 * 
 * Enables USB peripheral clock.   This enable goes outside of the Clock Manger to
 * the USB directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EN_USBCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_USBCLKEN_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EN_USBCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_USBCLKEN_MSB        8
/* The width in bits of the ALT_CLKMGR_PERPLL_EN_USBCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_USBCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EN_USBCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_USBCLKEN_SET_MSK    0x00000100
/* The mask used to clear the ALT_CLKMGR_PERPLL_EN_USBCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_USBCLKEN_CLR_MSK    0xfffffeff
/* The reset value of the ALT_CLKMGR_PERPLL_EN_USBCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_USBCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_EN_USBCLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_EN_USBCLKEN_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_CLKMGR_PERPLL_EN_USBCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EN_USBCLKEN_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : SPIM Clock Enable - spimclken
 * 
 * Enables SPI Master peripheral clock.   This enable goes outside of the Clock
 * Manger to the SPIM directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EN_SPIMCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_SPIMCLKEN_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EN_SPIMCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_SPIMCLKEN_MSB        9
/* The width in bits of the ALT_CLKMGR_PERPLL_EN_SPIMCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_SPIMCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EN_SPIMCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_SPIMCLKEN_SET_MSK    0x00000200
/* The mask used to clear the ALT_CLKMGR_PERPLL_EN_SPIMCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_SPIMCLKEN_CLR_MSK    0xfffffdff
/* The reset value of the ALT_CLKMGR_PERPLL_EN_SPIMCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_SPIMCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_EN_SPIMCLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_EN_SPIMCLKEN_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_CLKMGR_PERPLL_EN_SPIMCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EN_SPIMCLKEN_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : NAND Clock Enable - nandclken
 * 
 * Enables NAND peripheral clock.   This enable goes outside of the Clock Manger to
 * the NAND directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EN_NANDCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_NANDCLKEN_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EN_NANDCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_NANDCLKEN_MSB        10
/* The width in bits of the ALT_CLKMGR_PERPLL_EN_NANDCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_NANDCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EN_NANDCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_NANDCLKEN_SET_MSK    0x00000400
/* The mask used to clear the ALT_CLKMGR_PERPLL_EN_NANDCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_NANDCLKEN_CLR_MSK    0xfffffbff
/* The reset value of the ALT_CLKMGR_PERPLL_EN_NANDCLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_NANDCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_EN_NANDCLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_EN_NANDCLKEN_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_CLKMGR_PERPLL_EN_NANDCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EN_NANDCLKEN_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : QSPI Clock Enable - qspiclken
 * 
 * Enables QSPI peripheral clock.   This enable goes outside of the Clock Manger to
 * the QSPI directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EN_QSPICLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_QSPICLKEN_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EN_QSPICLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_QSPICLKEN_MSB        11
/* The width in bits of the ALT_CLKMGR_PERPLL_EN_QSPICLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_QSPICLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EN_QSPICLKEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_QSPICLKEN_SET_MSK    0x00000800
/* The mask used to clear the ALT_CLKMGR_PERPLL_EN_QSPICLKEN register field value. */
#define ALT_CLKMGR_PERPLL_EN_QSPICLKEN_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_CLKMGR_PERPLL_EN_QSPICLKEN register field. */
#define ALT_CLKMGR_PERPLL_EN_QSPICLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_EN_QSPICLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_EN_QSPICLKEN_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_CLKMGR_PERPLL_EN_QSPICLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EN_QSPICLKEN_SET(value) (((value) << 11) & 0x00000800)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_PERPLL_EN.
 */
struct ALT_CLKMGR_PERPLL_EN_s
{
    uint32_t  emac0en       :  1;  /* emac0_clk Enable */
    uint32_t  emac1en       :  1;  /* emac1_clk_clk Enable */
    uint32_t  emac2en       :  1;  /* emac2_clk Enable */
    uint32_t  emacptpen     :  1;  /* emac_ptp_clk Enable */
    uint32_t  gpiodben      :  1;  /* gpio_db_clk Enable */
    uint32_t  sdmmcclken    :  1;  /* SDMMC Clock Enable */
    uint32_t  s2fuser1clken :  1;  /* s2f_user1_clk Enable */
    uint32_t                :  1;  /* *UNDEFINED* */
    uint32_t  usbclken      :  1;  /* USB Clock Enable */
    uint32_t  spimclken     :  1;  /* SPIM Clock Enable */
    uint32_t  nandclken     :  1;  /* NAND Clock Enable */
    uint32_t  qspiclken     :  1;  /* QSPI Clock Enable */
    uint32_t                : 20;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_EN. */
typedef volatile struct ALT_CLKMGR_PERPLL_EN_s  ALT_CLKMGR_PERPLL_EN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_EN register. */
#define ALT_CLKMGR_PERPLL_EN_RESET       0x00000f7f
/* The byte offset of the ALT_CLKMGR_PERPLL_EN register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_EN_OFST        0x8

/*
 * Register : Enable Set Register - ens
 * 
 * Write One to Set corresonding fields in Enable Register.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description         
 * :--------|:-------|:------|:---------------------
 *  [0]     | RW     | 0x1   | emac0_clk Enable    
 *  [1]     | RW     | 0x1   | emac1_clk_clk Enable
 *  [2]     | RW     | 0x1   | emac2_clk Enable    
 *  [3]     | RW     | 0x1   | emac_ptp_clk Enable 
 *  [4]     | RW     | 0x1   | gpio_db_clk Enable  
 *  [5]     | RW     | 0x1   | SDMMC Clock Enable  
 *  [6]     | RW     | 0x1   | s2f_user1_clk Enable
 *  [7]     | ???    | 0x0   | *UNDEFINED*         
 *  [8]     | RW     | 0x1   | USB Clock Enable    
 *  [9]     | RW     | 0x1   | SPIM Clock Enable   
 *  [10]    | RW     | 0x1   | NAND Clock Enable   
 *  [11]    | RW     | 0x1   | QSPI Clock Enable   
 *  [31:12] | ???    | 0x0   | *UNDEFINED*         
 * 
 */
/*
 * Field : emac0_clk Enable - emac0en
 * 
 * Enables clock emac0_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENS_EMAC0EN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC0EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENS_EMAC0EN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC0EN_MSB        0
/* The width in bits of the ALT_CLKMGR_PERPLL_ENS_EMAC0EN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC0EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENS_EMAC0EN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC0EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENS_EMAC0EN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC0EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_PERPLL_ENS_EMAC0EN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC0EN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENS_EMAC0EN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC0EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_ENS_EMAC0EN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC0EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : emac1_clk_clk Enable - emac1en
 * 
 * Enables clock emac1_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENS_EMAC1EN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC1EN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENS_EMAC1EN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC1EN_MSB        1
/* The width in bits of the ALT_CLKMGR_PERPLL_ENS_EMAC1EN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC1EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENS_EMAC1EN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC1EN_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENS_EMAC1EN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC1EN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_PERPLL_ENS_EMAC1EN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC1EN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENS_EMAC1EN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC1EN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_PERPLL_ENS_EMAC1EN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC1EN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : emac2_clk Enable - emac2en
 * 
 * Enables clock emac2_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENS_EMAC2EN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC2EN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENS_EMAC2EN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC2EN_MSB        2
/* The width in bits of the ALT_CLKMGR_PERPLL_ENS_EMAC2EN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC2EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENS_EMAC2EN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC2EN_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENS_EMAC2EN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC2EN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_PERPLL_ENS_EMAC2EN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC2EN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENS_EMAC2EN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC2EN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_PERPLL_ENS_EMAC2EN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENS_EMAC2EN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : emac_ptp_clk Enable - emacptpen
 * 
 * Enables clock emac_ptp_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENS_EMACPTPEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMACPTPEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENS_EMACPTPEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMACPTPEN_MSB        3
/* The width in bits of the ALT_CLKMGR_PERPLL_ENS_EMACPTPEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMACPTPEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENS_EMACPTPEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_EMACPTPEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENS_EMACPTPEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_EMACPTPEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_PERPLL_ENS_EMACPTPEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_EMACPTPEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENS_EMACPTPEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENS_EMACPTPEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_PERPLL_ENS_EMACPTPEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENS_EMACPTPEN_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : gpio_db_clk Enable - gpiodben
 * 
 * Enables clock gpio_db_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENS_GPIODBEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_GPIODBEN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENS_GPIODBEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_GPIODBEN_MSB        4
/* The width in bits of the ALT_CLKMGR_PERPLL_ENS_GPIODBEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_GPIODBEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENS_GPIODBEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_GPIODBEN_SET_MSK    0x00000010
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENS_GPIODBEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_GPIODBEN_CLR_MSK    0xffffffef
/* The reset value of the ALT_CLKMGR_PERPLL_ENS_GPIODBEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_GPIODBEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENS_GPIODBEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENS_GPIODBEN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_CLKMGR_PERPLL_ENS_GPIODBEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENS_GPIODBEN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : SDMMC Clock Enable - sdmmcclken
 * 
 * Enables SDMMC peripheral clock.   This enable goes outside of the Clock Manger
 * to the SDMMC directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN_MSB        5
/* The width in bits of the ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN_SET_MSK    0x00000020
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENS_SDMMCCLKEN_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : s2f_user1_clk Enable - s2fuser1clken
 * 
 * Enables clock s2f_user1_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN_MSB        6
/* The width in bits of the ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN_SET_MSK    0x00000040
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN_CLR_MSK    0xffffffbf
/* The reset value of the ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENS_S2FUSER1CLKEN_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : USB Clock Enable - usbclken
 * 
 * Enables USB peripheral clock.   This enable goes outside of the Clock Manger to
 * the USB directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENS_USBCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_USBCLKEN_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENS_USBCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_USBCLKEN_MSB        8
/* The width in bits of the ALT_CLKMGR_PERPLL_ENS_USBCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_USBCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENS_USBCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_USBCLKEN_SET_MSK    0x00000100
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENS_USBCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_USBCLKEN_CLR_MSK    0xfffffeff
/* The reset value of the ALT_CLKMGR_PERPLL_ENS_USBCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_USBCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENS_USBCLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENS_USBCLKEN_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_CLKMGR_PERPLL_ENS_USBCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENS_USBCLKEN_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : SPIM Clock Enable - spimclken
 * 
 * Enables SPI Master peripheral clock.   This enable goes outside of the Clock
 * Manger to the SPIM directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN_MSB        9
/* The width in bits of the ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN_SET_MSK    0x00000200
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN_CLR_MSK    0xfffffdff
/* The reset value of the ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENS_SPIMCLKEN_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : NAND Clock Enable - nandclken
 * 
 * Enables NAND peripheral clock.   This enable goes outside of the Clock Manger to
 * the NAND directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENS_NANDCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_NANDCLKEN_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENS_NANDCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_NANDCLKEN_MSB        10
/* The width in bits of the ALT_CLKMGR_PERPLL_ENS_NANDCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_NANDCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENS_NANDCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_NANDCLKEN_SET_MSK    0x00000400
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENS_NANDCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_NANDCLKEN_CLR_MSK    0xfffffbff
/* The reset value of the ALT_CLKMGR_PERPLL_ENS_NANDCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_NANDCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENS_NANDCLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENS_NANDCLKEN_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_CLKMGR_PERPLL_ENS_NANDCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENS_NANDCLKEN_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : QSPI Clock Enable - qspiclken
 * 
 * Enables QSPI peripheral clock.   This enable goes outside of the Clock Manger to
 * the QSPI directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENS_QSPICLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_QSPICLKEN_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENS_QSPICLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_QSPICLKEN_MSB        11
/* The width in bits of the ALT_CLKMGR_PERPLL_ENS_QSPICLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_QSPICLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENS_QSPICLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_QSPICLKEN_SET_MSK    0x00000800
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENS_QSPICLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENS_QSPICLKEN_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_CLKMGR_PERPLL_ENS_QSPICLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENS_QSPICLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENS_QSPICLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENS_QSPICLKEN_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_CLKMGR_PERPLL_ENS_QSPICLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENS_QSPICLKEN_SET(value) (((value) << 11) & 0x00000800)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_PERPLL_ENS.
 */
struct ALT_CLKMGR_PERPLL_ENS_s
{
    uint32_t  emac0en       :  1;  /* emac0_clk Enable */
    uint32_t  emac1en       :  1;  /* emac1_clk_clk Enable */
    uint32_t  emac2en       :  1;  /* emac2_clk Enable */
    uint32_t  emacptpen     :  1;  /* emac_ptp_clk Enable */
    uint32_t  gpiodben      :  1;  /* gpio_db_clk Enable */
    uint32_t  sdmmcclken    :  1;  /* SDMMC Clock Enable */
    uint32_t  s2fuser1clken :  1;  /* s2f_user1_clk Enable */
    uint32_t                :  1;  /* *UNDEFINED* */
    uint32_t  usbclken      :  1;  /* USB Clock Enable */
    uint32_t  spimclken     :  1;  /* SPIM Clock Enable */
    uint32_t  nandclken     :  1;  /* NAND Clock Enable */
    uint32_t  qspiclken     :  1;  /* QSPI Clock Enable */
    uint32_t                : 20;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_ENS. */
typedef volatile struct ALT_CLKMGR_PERPLL_ENS_s  ALT_CLKMGR_PERPLL_ENS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_ENS register. */
#define ALT_CLKMGR_PERPLL_ENS_RESET       0x00000f7f
/* The byte offset of the ALT_CLKMGR_PERPLL_ENS register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_ENS_OFST        0xc

/*
 * Register : Enable Reset Register - enr
 * 
 * Write One to Clear corresponding fields in Enable Register.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description         
 * :--------|:-------|:------|:---------------------
 *  [0]     | RW     | 0x1   | emac0_clk Enable    
 *  [1]     | RW     | 0x1   | emac1_clk_clk Enable
 *  [2]     | RW     | 0x1   | emac2_clk Enable    
 *  [3]     | RW     | 0x1   | emac_ptp_clk Enable 
 *  [4]     | RW     | 0x1   | gpio_db_clk Enable  
 *  [5]     | RW     | 0x1   | SDMMC Clock Enable  
 *  [6]     | RW     | 0x1   | s2f_user1_clk Enable
 *  [7]     | ???    | 0x0   | *UNDEFINED*         
 *  [8]     | RW     | 0x1   | USB Clock Enable    
 *  [9]     | RW     | 0x1   | SPIM Clock Enable   
 *  [10]    | RW     | 0x1   | NAND Clock Enable   
 *  [11]    | RW     | 0x1   | QSPI Clock Enable   
 *  [31:12] | ???    | 0x0   | *UNDEFINED*         
 * 
 */
/*
 * Field : emac0_clk Enable - emac0en
 * 
 * Enables clock emac0_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENR_EMAC0EN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC0EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENR_EMAC0EN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC0EN_MSB        0
/* The width in bits of the ALT_CLKMGR_PERPLL_ENR_EMAC0EN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC0EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENR_EMAC0EN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC0EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENR_EMAC0EN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC0EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_PERPLL_ENR_EMAC0EN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC0EN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENR_EMAC0EN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC0EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_ENR_EMAC0EN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC0EN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : emac1_clk_clk Enable - emac1en
 * 
 * Enables clock emac1_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENR_EMAC1EN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC1EN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENR_EMAC1EN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC1EN_MSB        1
/* The width in bits of the ALT_CLKMGR_PERPLL_ENR_EMAC1EN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC1EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENR_EMAC1EN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC1EN_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENR_EMAC1EN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC1EN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_PERPLL_ENR_EMAC1EN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC1EN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENR_EMAC1EN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC1EN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_PERPLL_ENR_EMAC1EN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC1EN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : emac2_clk Enable - emac2en
 * 
 * Enables clock emac2_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENR_EMAC2EN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC2EN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENR_EMAC2EN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC2EN_MSB        2
/* The width in bits of the ALT_CLKMGR_PERPLL_ENR_EMAC2EN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC2EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENR_EMAC2EN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC2EN_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENR_EMAC2EN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC2EN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_PERPLL_ENR_EMAC2EN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC2EN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENR_EMAC2EN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC2EN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_PERPLL_ENR_EMAC2EN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENR_EMAC2EN_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : emac_ptp_clk Enable - emacptpen
 * 
 * Enables clock emac_ptp_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENR_EMACPTPEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMACPTPEN_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENR_EMACPTPEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMACPTPEN_MSB        3
/* The width in bits of the ALT_CLKMGR_PERPLL_ENR_EMACPTPEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMACPTPEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENR_EMACPTPEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_EMACPTPEN_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENR_EMACPTPEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_EMACPTPEN_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_PERPLL_ENR_EMACPTPEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_EMACPTPEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENR_EMACPTPEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENR_EMACPTPEN_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_PERPLL_ENR_EMACPTPEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENR_EMACPTPEN_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : gpio_db_clk Enable - gpiodben
 * 
 * Enables clock gpio_db_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENR_GPIODBEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_GPIODBEN_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENR_GPIODBEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_GPIODBEN_MSB        4
/* The width in bits of the ALT_CLKMGR_PERPLL_ENR_GPIODBEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_GPIODBEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENR_GPIODBEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_GPIODBEN_SET_MSK    0x00000010
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENR_GPIODBEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_GPIODBEN_CLR_MSK    0xffffffef
/* The reset value of the ALT_CLKMGR_PERPLL_ENR_GPIODBEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_GPIODBEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENR_GPIODBEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENR_GPIODBEN_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_CLKMGR_PERPLL_ENR_GPIODBEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENR_GPIODBEN_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : SDMMC Clock Enable - sdmmcclken
 * 
 * Enables SDMMC peripheral clock.   This enable goes outside of the Clock Manger
 * to the SDMMC directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN_MSB        5
/* The width in bits of the ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN_SET_MSK    0x00000020
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN_CLR_MSK    0xffffffdf
/* The reset value of the ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENR_SDMMCCLKEN_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : s2f_user1_clk Enable - s2fuser1clken
 * 
 * Enables clock s2f_user1_clk output
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN_MSB        6
/* The width in bits of the ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN_SET_MSK    0x00000040
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN_CLR_MSK    0xffffffbf
/* The reset value of the ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : USB Clock Enable - usbclken
 * 
 * Enables USB peripheral clock.   This enable goes outside of the Clock Manger to
 * the USB directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENR_USBCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_USBCLKEN_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENR_USBCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_USBCLKEN_MSB        8
/* The width in bits of the ALT_CLKMGR_PERPLL_ENR_USBCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_USBCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENR_USBCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_USBCLKEN_SET_MSK    0x00000100
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENR_USBCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_USBCLKEN_CLR_MSK    0xfffffeff
/* The reset value of the ALT_CLKMGR_PERPLL_ENR_USBCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_USBCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENR_USBCLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENR_USBCLKEN_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_CLKMGR_PERPLL_ENR_USBCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENR_USBCLKEN_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : SPIM Clock Enable - spimclken
 * 
 * Enables SPI Master peripheral clock.   This enable goes outside of the Clock
 * Manger to the SPIM directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN_MSB        9
/* The width in bits of the ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN_SET_MSK    0x00000200
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN_CLR_MSK    0xfffffdff
/* The reset value of the ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENR_SPIMCLKEN_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : NAND Clock Enable - nandclken
 * 
 * Enables NAND peripheral clock.   This enable goes outside of the Clock Manger to
 * the NAND directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENR_NANDCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_NANDCLKEN_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENR_NANDCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_NANDCLKEN_MSB        10
/* The width in bits of the ALT_CLKMGR_PERPLL_ENR_NANDCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_NANDCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENR_NANDCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_NANDCLKEN_SET_MSK    0x00000400
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENR_NANDCLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_NANDCLKEN_CLR_MSK    0xfffffbff
/* The reset value of the ALT_CLKMGR_PERPLL_ENR_NANDCLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_NANDCLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENR_NANDCLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENR_NANDCLKEN_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_CLKMGR_PERPLL_ENR_NANDCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENR_NANDCLKEN_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : QSPI Clock Enable - qspiclken
 * 
 * Enables QSPI peripheral clock.   This enable goes outside of the Clock Manger to
 * the QSPI directly.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_ENR_QSPICLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_QSPICLKEN_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_ENR_QSPICLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_QSPICLKEN_MSB        11
/* The width in bits of the ALT_CLKMGR_PERPLL_ENR_QSPICLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_QSPICLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_ENR_QSPICLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_QSPICLKEN_SET_MSK    0x00000800
/* The mask used to clear the ALT_CLKMGR_PERPLL_ENR_QSPICLKEN register field value. */
#define ALT_CLKMGR_PERPLL_ENR_QSPICLKEN_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_CLKMGR_PERPLL_ENR_QSPICLKEN register field. */
#define ALT_CLKMGR_PERPLL_ENR_QSPICLKEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_ENR_QSPICLKEN field value from a register. */
#define ALT_CLKMGR_PERPLL_ENR_QSPICLKEN_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_CLKMGR_PERPLL_ENR_QSPICLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_ENR_QSPICLKEN_SET(value) (((value) << 11) & 0x00000800)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_PERPLL_ENR.
 */
struct ALT_CLKMGR_PERPLL_ENR_s
{
    uint32_t  emac0en       :  1;  /* emac0_clk Enable */
    uint32_t  emac1en       :  1;  /* emac1_clk_clk Enable */
    uint32_t  emac2en       :  1;  /* emac2_clk Enable */
    uint32_t  emacptpen     :  1;  /* emac_ptp_clk Enable */
    uint32_t  gpiodben      :  1;  /* gpio_db_clk Enable */
    uint32_t  sdmmcclken    :  1;  /* SDMMC Clock Enable */
    uint32_t  s2fuser1clken :  1;  /* s2f_user1_clk Enable */
    uint32_t                :  1;  /* *UNDEFINED* */
    uint32_t  usbclken      :  1;  /* USB Clock Enable */
    uint32_t  spimclken     :  1;  /* SPIM Clock Enable */
    uint32_t  nandclken     :  1;  /* NAND Clock Enable */
    uint32_t  qspiclken     :  1;  /* QSPI Clock Enable */
    uint32_t                : 20;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_ENR. */
typedef volatile struct ALT_CLKMGR_PERPLL_ENR_s  ALT_CLKMGR_PERPLL_ENR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_ENR register. */
#define ALT_CLKMGR_PERPLL_ENR_RESET       0x00000f7f
/* The byte offset of the ALT_CLKMGR_PERPLL_ENR register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_ENR_OFST        0x10

/*
 * Register : Bypass Register - bypass
 * 
 * Contains fields that control bypass for clocks derived from the Peripheral PLL.
 * 
 * 1: The clock is bypassed.
 * 
 * 0: The clock is derived from the 5:1 active mux.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description          
 * :-------|:-------|:------|:----------------------
 *  [0]    | RW     | 0x1   | EMACA Bypass         
 *  [1]    | RW     | 0x1   | EMACB Bypass         
 *  [2]    | RW     | 0x1   | EMAC PTP Bypass      
 *  [3]    | RW     | 0x1   | GPIO Debounce Bypass 
 *  [4]    | RW     | 0x1   | SDMMC Bypass         
 *  [5]    | RW     | 0x1   | S2F User1 Bypass     
 *  [6]    | RW     | 0x1   | PLL RFEN Clock Bypass
 *  [7]    | RW     | 0x1   | PLL FBEN Clock Bypass
 *  [31:8] | ???    | 0x0   | *UNDEFINED*          
 * 
 */
/*
 * Field : EMACA Bypass - emaca
 * 
 * If set, the emaca_free_clk will be bypassed to the input clock reference of the
 * Main PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASS_EMACA register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASS_EMACA register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACA_MSB        0
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASS_EMACA register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACA_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASS_EMACA register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACA_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASS_EMACA register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASS_EMACA register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACA_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASS_EMACA field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_BYPASS_EMACA register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACA_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : EMACB Bypass - emacb
 * 
 * If set, the emacb_free_clk will be bypassed to the input clock reference of the
 * Main PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASS_EMACB register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACB_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASS_EMACB register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACB_MSB        1
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASS_EMACB register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACB_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASS_EMACB register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACB_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASS_EMACB register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACB_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASS_EMACB register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACB_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASS_EMACB field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACB_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_PERPLL_BYPASS_EMACB register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACB_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : EMAC PTP Bypass - emacptp
 * 
 * If set, the emac_ptp_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASS_EMACPTP register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACPTP_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASS_EMACPTP register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACPTP_MSB        2
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASS_EMACPTP register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACPTP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASS_EMACPTP register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACPTP_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASS_EMACPTP register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACPTP_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASS_EMACPTP register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACPTP_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASS_EMACPTP field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACPTP_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_PERPLL_BYPASS_EMACPTP register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASS_EMACPTP_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : GPIO Debounce Bypass - gpiodb
 * 
 * If set, the gpio_db_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASS_GPIODB register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_GPIODB_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASS_GPIODB register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_GPIODB_MSB        3
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASS_GPIODB register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_GPIODB_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASS_GPIODB register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_GPIODB_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASS_GPIODB register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_GPIODB_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASS_GPIODB register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_GPIODB_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASS_GPIODB field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASS_GPIODB_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_PERPLL_BYPASS_GPIODB register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASS_GPIODB_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : SDMMC Bypass - sdmmc
 * 
 * If set, the sdmmc_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASS_SDMMC register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_SDMMC_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASS_SDMMC register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_SDMMC_MSB        4
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASS_SDMMC register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_SDMMC_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASS_SDMMC register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_SDMMC_SET_MSK    0x00000010
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASS_SDMMC register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_SDMMC_CLR_MSK    0xffffffef
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASS_SDMMC register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_SDMMC_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASS_SDMMC field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASS_SDMMC_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_CLKMGR_PERPLL_BYPASS_SDMMC register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASS_SDMMC_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : S2F User1 Bypass - s2fuser1
 * 
 * If set, the s2f_user1_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1 register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1 register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1_MSB        5
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1 register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1 register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1_SET_MSK    0x00000020
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1 register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1_CLR_MSK    0xffffffdf
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1 register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1 field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1 register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : PLL RFEN Clock Bypass - rfen
 * 
 * If set, the pll_peri_rfen_clk will be bypassed to the boot_clk.  The
 * pll_peri_rfen_clk is used to synchronously update the Denominator to the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASS_RFEN register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_RFEN_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASS_RFEN register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_RFEN_MSB        6
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASS_RFEN register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_RFEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASS_RFEN register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_RFEN_SET_MSK    0x00000040
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASS_RFEN register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_RFEN_CLR_MSK    0xffffffbf
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASS_RFEN register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_RFEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASS_RFEN field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASS_RFEN_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_CLKMGR_PERPLL_BYPASS_RFEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASS_RFEN_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : PLL FBEN Clock Bypass - fben
 * 
 * If set, the pll_main_fben_clk will be bypassed to the boot_clk.  The
 * pll_main_fben_clk is used to synchronously update the Numerator to the Main PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASS_FBEN register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_FBEN_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASS_FBEN register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_FBEN_MSB        7
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASS_FBEN register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_FBEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASS_FBEN register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_FBEN_SET_MSK    0x00000080
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASS_FBEN register field value. */
#define ALT_CLKMGR_PERPLL_BYPASS_FBEN_CLR_MSK    0xffffff7f
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASS_FBEN register field. */
#define ALT_CLKMGR_PERPLL_BYPASS_FBEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASS_FBEN field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASS_FBEN_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_CLKMGR_PERPLL_BYPASS_FBEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASS_FBEN_SET(value) (((value) << 7) & 0x00000080)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_PERPLL_BYPASS.
 */
struct ALT_CLKMGR_PERPLL_BYPASS_s
{
    uint32_t  emaca    :  1;  /* EMACA Bypass */
    uint32_t  emacb    :  1;  /* EMACB Bypass */
    uint32_t  emacptp  :  1;  /* EMAC PTP Bypass */
    uint32_t  gpiodb   :  1;  /* GPIO Debounce Bypass */
    uint32_t  sdmmc    :  1;  /* SDMMC Bypass */
    uint32_t  s2fuser1 :  1;  /* S2F User1 Bypass */
    uint32_t  rfen     :  1;  /* PLL RFEN Clock Bypass */
    uint32_t  fben     :  1;  /* PLL FBEN Clock Bypass */
    uint32_t           : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_BYPASS. */
typedef volatile struct ALT_CLKMGR_PERPLL_BYPASS_s  ALT_CLKMGR_PERPLL_BYPASS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_BYPASS register. */
#define ALT_CLKMGR_PERPLL_BYPASS_RESET       0x000000ff
/* The byte offset of the ALT_CLKMGR_PERPLL_BYPASS register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_BYPASS_OFST        0x14

/*
 * Register : Bypass Set Register - bypasss
 * 
 * Write One to Set corresponding fields in Bypass Register.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description          
 * :-------|:-------|:------|:----------------------
 *  [0]    | RW     | 0x1   | EMACA Bypass         
 *  [1]    | RW     | 0x1   | EMACB Bypass         
 *  [2]    | RW     | 0x1   | EMAC PTP Bypass      
 *  [3]    | RW     | 0x1   | GPIO Debounce Bypass 
 *  [4]    | RW     | 0x1   | SDMMC Bypass         
 *  [5]    | RW     | 0x1   | S2F User1 Bypass     
 *  [6]    | RW     | 0x1   | PLL RFEN Clock Bypass
 *  [7]    | RW     | 0x1   | PLL FBEN Clock Bypass
 *  [31:8] | ???    | 0x0   | *UNDEFINED*          
 * 
 */
/*
 * Field : EMACA Bypass - emaca
 * 
 * If set, the emaca_free_clk will be bypassed to the input clock reference of the
 * Periphal PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_EMACA register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_EMACA register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACA_MSB        0
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSS_EMACA register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACA_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSS_EMACA register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACA_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSS_EMACA register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSS_EMACA register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACA_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSS_EMACA field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSS_EMACA register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACA_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : EMACB Bypass - emacb
 * 
 * If set, the emacb_free_clk will be bypassed to the input clock reference of the
 * Main PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_EMACB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACB_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_EMACB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACB_MSB        1
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSS_EMACB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACB_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSS_EMACB register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACB_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSS_EMACB register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACB_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSS_EMACB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACB_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSS_EMACB field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACB_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSS_EMACB register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACB_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : EMAC PTP Bypass - emacptp
 * 
 * If set, the emac_ptp_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP_MSB        2
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_EMACPTP_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : GPIO Debounce Bypass - gpiodb
 * 
 * If set, the gpio_db_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_GPIODB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_GPIODB_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_GPIODB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_GPIODB_MSB        3
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSS_GPIODB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_GPIODB_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSS_GPIODB register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_GPIODB_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSS_GPIODB register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_GPIODB_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSS_GPIODB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_GPIODB_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSS_GPIODB field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_GPIODB_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSS_GPIODB register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_GPIODB_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : SDMMC Bypass - sdmmc
 * 
 * If set, the sdmmc_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_SDMMC register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_SDMMC_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_SDMMC register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_SDMMC_MSB        4
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSS_SDMMC register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_SDMMC_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSS_SDMMC register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_SDMMC_SET_MSK    0x00000010
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSS_SDMMC register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_SDMMC_CLR_MSK    0xffffffef
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSS_SDMMC register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_SDMMC_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSS_SDMMC field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_SDMMC_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSS_SDMMC register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_SDMMC_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : S2F User1 Bypass - s2fuser1
 * 
 * If set, the s2f_user1_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1 register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1 register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1_MSB        5
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1 register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1 register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1_SET_MSK    0x00000020
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1 register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1_CLR_MSK    0xffffffdf
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1 register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1 field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1 register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_S2FUSER1_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : PLL RFEN Clock Bypass - rfen
 * 
 * If set, the pll_peri_rfen_clk will be bypassed to the boot_clk.  The
 * pll_peri_rfen_clk is used to synchronously update the Denominator to the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_RFEN register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_RFEN_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_RFEN register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_RFEN_MSB        6
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSS_RFEN register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_RFEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSS_RFEN register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_RFEN_SET_MSK    0x00000040
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSS_RFEN register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_RFEN_CLR_MSK    0xffffffbf
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSS_RFEN register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_RFEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSS_RFEN field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_RFEN_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSS_RFEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_RFEN_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : PLL FBEN Clock Bypass - fben
 * 
 * If set, the pll_main_fben_clk will be bypassed to the boot_clk.  The
 * pll_main_fben_clk is used to synchronously update the Numerator to the Main PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_FBEN register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_FBEN_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSS_FBEN register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_FBEN_MSB        7
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSS_FBEN register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_FBEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSS_FBEN register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_FBEN_SET_MSK    0x00000080
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSS_FBEN register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSS_FBEN_CLR_MSK    0xffffff7f
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSS_FBEN register field. */
#define ALT_CLKMGR_PERPLL_BYPASSS_FBEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSS_FBEN field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_FBEN_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSS_FBEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_FBEN_SET(value) (((value) << 7) & 0x00000080)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_PERPLL_BYPASSS.
 */
struct ALT_CLKMGR_PERPLL_BYPASSS_s
{
    uint32_t  emaca    :  1;  /* EMACA Bypass */
    uint32_t  emacb    :  1;  /* EMACB Bypass */
    uint32_t  emacptp  :  1;  /* EMAC PTP Bypass */
    uint32_t  gpiodb   :  1;  /* GPIO Debounce Bypass */
    uint32_t  sdmmc    :  1;  /* SDMMC Bypass */
    uint32_t  s2fuser1 :  1;  /* S2F User1 Bypass */
    uint32_t  rfen     :  1;  /* PLL RFEN Clock Bypass */
    uint32_t  fben     :  1;  /* PLL FBEN Clock Bypass */
    uint32_t           : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_BYPASSS. */
typedef volatile struct ALT_CLKMGR_PERPLL_BYPASSS_s  ALT_CLKMGR_PERPLL_BYPASSS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSS register. */
#define ALT_CLKMGR_PERPLL_BYPASSS_RESET       0x000000ff
/* The byte offset of the ALT_CLKMGR_PERPLL_BYPASSS register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_BYPASSS_OFST        0x18

/*
 * Register : Bypass Reset Register - bypassr
 * 
 * Write One to Clear corresponding fields in Bypass Register.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description          
 * :-------|:-------|:------|:----------------------
 *  [0]    | RW     | 0x1   | EMACA Bypass         
 *  [1]    | RW     | 0x1   | EMACB Bypass         
 *  [2]    | RW     | 0x1   | EMAC PTP Bypass      
 *  [3]    | RW     | 0x1   | GPIO Debounce Bypass 
 *  [4]    | RW     | 0x1   | SDMMC Bypass         
 *  [5]    | RW     | 0x1   | S2F User1 Bypass     
 *  [6]    | RW     | 0x1   | PLL RFEN Clock Bypass
 *  [7]    | RW     | 0x1   | PLL FBEN Clock Bypass
 *  [31:8] | ???    | 0x0   | *UNDEFINED*          
 * 
 */
/*
 * Field : EMACA Bypass - emaca
 * 
 * If set, the emaca_free_clk will be bypassed to the input clock reference of the
 * Periphal PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_EMACA register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACA_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_EMACA register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACA_MSB        0
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSR_EMACA register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACA_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSR_EMACA register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACA_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSR_EMACA register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACA_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSR_EMACA register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACA_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSR_EMACA field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACA_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSR_EMACA register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACA_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : EMACB Bypass - emacb
 * 
 * If set, the emacb_free_clk will be bypassed to the input clock reference of the
 * Main PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_EMACB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACB_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_EMACB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACB_MSB        1
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSR_EMACB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACB_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSR_EMACB register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACB_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSR_EMACB register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACB_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSR_EMACB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACB_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSR_EMACB field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACB_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSR_EMACB register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACB_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : EMAC PTP Bypass - emacptp
 * 
 * If set, the emac_ptp_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP_MSB        2
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_EMACPTP_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : GPIO Debounce Bypass - gpiodb
 * 
 * If set, the gpio_db_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_GPIODB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_GPIODB_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_GPIODB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_GPIODB_MSB        3
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSR_GPIODB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_GPIODB_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSR_GPIODB register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_GPIODB_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSR_GPIODB register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_GPIODB_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSR_GPIODB register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_GPIODB_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSR_GPIODB field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_GPIODB_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSR_GPIODB register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_GPIODB_SET(value) (((value) << 3) & 0x00000008)

/*
 * Field : SDMMC Bypass - sdmmc
 * 
 * If set, the sdmmc_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_SDMMC register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_SDMMC_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_SDMMC register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_SDMMC_MSB        4
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSR_SDMMC register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_SDMMC_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSR_SDMMC register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_SDMMC_SET_MSK    0x00000010
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSR_SDMMC register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_SDMMC_CLR_MSK    0xffffffef
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSR_SDMMC register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_SDMMC_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSR_SDMMC field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_SDMMC_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSR_SDMMC register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_SDMMC_SET(value) (((value) << 4) & 0x00000010)

/*
 * Field : S2F User1 Bypass - s2fuser1
 * 
 * If set, the s2f_user1_clk will be bypassed to the input clock reference of the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1 register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1_LSB        5
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1 register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1_MSB        5
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1 register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1 register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1_SET_MSK    0x00000020
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1 register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1_CLR_MSK    0xffffffdf
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1 register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1 field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1_GET(value) (((value) & 0x00000020) >> 5)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1 register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_S2FUSER1_SET(value) (((value) << 5) & 0x00000020)

/*
 * Field : PLL RFEN Clock Bypass - rfen
 * 
 * If set, the pll_peri_rfen_clk will be bypassed to the boot_clk.  The
 * pll_peri_rfen_clk is used to synchronously update the Denominator to the
 * Peripheral PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_RFEN register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_RFEN_LSB        6
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_RFEN register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_RFEN_MSB        6
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSR_RFEN register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_RFEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSR_RFEN register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_RFEN_SET_MSK    0x00000040
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSR_RFEN register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_RFEN_CLR_MSK    0xffffffbf
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSR_RFEN register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_RFEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSR_RFEN field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_RFEN_GET(value) (((value) & 0x00000040) >> 6)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSR_RFEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_RFEN_SET(value) (((value) << 6) & 0x00000040)

/*
 * Field : PLL FBEN Clock Bypass - fben
 * 
 * If set, the pll_main_fben_clk will be bypassed to the boot_clk.  The
 * pll_main_fben_clk is used to synchronously update the Numerator to the Main PLL.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_FBEN register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_FBEN_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_BYPASSR_FBEN register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_FBEN_MSB        7
/* The width in bits of the ALT_CLKMGR_PERPLL_BYPASSR_FBEN register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_FBEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_BYPASSR_FBEN register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_FBEN_SET_MSK    0x00000080
/* The mask used to clear the ALT_CLKMGR_PERPLL_BYPASSR_FBEN register field value. */
#define ALT_CLKMGR_PERPLL_BYPASSR_FBEN_CLR_MSK    0xffffff7f
/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSR_FBEN register field. */
#define ALT_CLKMGR_PERPLL_BYPASSR_FBEN_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_BYPASSR_FBEN field value from a register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_FBEN_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_CLKMGR_PERPLL_BYPASSR_FBEN register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_FBEN_SET(value) (((value) << 7) & 0x00000080)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_PERPLL_BYPASSR.
 */
struct ALT_CLKMGR_PERPLL_BYPASSR_s
{
    uint32_t  emaca    :  1;  /* EMACA Bypass */
    uint32_t  emacb    :  1;  /* EMACB Bypass */
    uint32_t  emacptp  :  1;  /* EMAC PTP Bypass */
    uint32_t  gpiodb   :  1;  /* GPIO Debounce Bypass */
    uint32_t  sdmmc    :  1;  /* SDMMC Bypass */
    uint32_t  s2fuser1 :  1;  /* S2F User1 Bypass */
    uint32_t  rfen     :  1;  /* PLL RFEN Clock Bypass */
    uint32_t  fben     :  1;  /* PLL FBEN Clock Bypass */
    uint32_t           : 24;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_BYPASSR. */
typedef volatile struct ALT_CLKMGR_PERPLL_BYPASSR_s  ALT_CLKMGR_PERPLL_BYPASSR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_BYPASSR register. */
#define ALT_CLKMGR_PERPLL_BYPASSR_RESET       0x000000ff
/* The byte offset of the ALT_CLKMGR_PERPLL_BYPASSR register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_BYPASSR_OFST        0x1c

/*
 * Register : Peripheral PLL Control Register for Counter 2 Clock - cntr2clk
 * 
 * Contains settings that control Couner 2 clock generated from the Peripheral PLL
 * VCO clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                   
 * :--------|:-------|:------|:-------------------------------
 *  [10:0]  | RW     | 0x0   | Counter                       
 *  [15:11] | ???    | 0x0   | *UNDEFINED*                   
 *  [18:16] | RW     | 0x0   | ALT_CLKMGR_PERPLL_CNTR2CLK_SRC
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
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR2CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR2CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR2CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR2CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR2CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR2CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_CNT_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_CNTR2CLK_CNT field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_CNTR2CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

/*
 * Field : src
 * 
 * Selects the source for the active 5:1 clock selection when the PLL is not
 * bypassed.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_MAIN   | 0x0   |            
 *  ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_PERI   | 0x1   |            
 *  ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_OSC1   | 0x2   |            
 *  ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_INTOSC | 0x3   |            
 *  ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_FPGA   | 0x4   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR2CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_MAIN   0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR2CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_PERI   0x1
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR2CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_OSC1   0x2
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR2CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_INTOSC 0x3
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR2CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_FPGA   0x4

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR2CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR2CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_MSB        18
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR2CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_WIDTH      3
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR2CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_SET_MSK    0x00070000
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR2CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_CLR_MSK    0xfff8ffff
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR2CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_CNTR2CLK_SRC field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_GET(value) (((value) & 0x00070000) >> 16)
/* Produces a ALT_CLKMGR_PERPLL_CNTR2CLK_SRC register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_SET(value) (((value) << 16) & 0x00070000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_PERPLL_CNTR2CLK.
 */
struct ALT_CLKMGR_PERPLL_CNTR2CLK_s
{
    uint32_t  cnt : 11;  /* Counter */
    uint32_t      :  5;  /* *UNDEFINED* */
    uint32_t  src :  3;  /* ALT_CLKMGR_PERPLL_CNTR2CLK_SRC */
    uint32_t      : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_CNTR2CLK. */
typedef volatile struct ALT_CLKMGR_PERPLL_CNTR2CLK_s  ALT_CLKMGR_PERPLL_CNTR2CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_CNTR2CLK register. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_PERPLL_CNTR2CLK register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_CNTR2CLK_OFST        0x28

/*
 * Register : Peripheral PLL Control Register for Counter 3 Clock - cntr3clk
 * 
 * Contains settings that control Counter 3 clock generated from the Peripheral PLL
 * VCO clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                   
 * :--------|:-------|:------|:-------------------------------
 *  [10:0]  | RW     | 0x0   | Counter                       
 *  [15:11] | ???    | 0x0   | *UNDEFINED*                   
 *  [18:16] | RW     | 0x0   | ALT_CLKMGR_PERPLL_CNTR3CLK_SRC
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
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR3CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR3CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR3CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR3CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR3CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR3CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_CNT_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_CNTR3CLK_CNT field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_CNTR3CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

/*
 * Field : src
 * 
 * Selects the source for the active 5:1 clock selection when the PLL is not
 * bypassed.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_E_MAIN   | 0x0   |            
 *  ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_E_PERI   | 0x1   |            
 *  ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_E_OSC1   | 0x2   |            
 *  ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_E_INTOSC | 0x3   |            
 *  ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_E_FPGA   | 0x4   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR3CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_E_MAIN   0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR3CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_E_PERI   0x1
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR3CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_E_OSC1   0x2
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR3CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_E_INTOSC 0x3
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR3CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_E_FPGA   0x4

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR3CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR3CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_MSB        18
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR3CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_WIDTH      3
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR3CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_SET_MSK    0x00070000
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR3CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_CLR_MSK    0xfff8ffff
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR3CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_CNTR3CLK_SRC field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_GET(value) (((value) & 0x00070000) >> 16)
/* Produces a ALT_CLKMGR_PERPLL_CNTR3CLK_SRC register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_SET(value) (((value) << 16) & 0x00070000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_PERPLL_CNTR3CLK.
 */
struct ALT_CLKMGR_PERPLL_CNTR3CLK_s
{
    uint32_t  cnt : 11;  /* Counter */
    uint32_t      :  5;  /* *UNDEFINED* */
    uint32_t  src :  3;  /* ALT_CLKMGR_PERPLL_CNTR3CLK_SRC */
    uint32_t      : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_CNTR3CLK. */
typedef volatile struct ALT_CLKMGR_PERPLL_CNTR3CLK_s  ALT_CLKMGR_PERPLL_CNTR3CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_CNTR3CLK register. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_PERPLL_CNTR3CLK register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_CNTR3CLK_OFST        0x2c

/*
 * Register : Peripheral PLL Control Register for Counter 4 Clock - cntr4clk
 * 
 * Contains settings that control Couner 4 clock generated from the Peripheral PLL
 * VCO clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                   
 * :--------|:-------|:------|:-------------------------------
 *  [10:0]  | RW     | 0x0   | Counter                       
 *  [15:11] | ???    | 0x0   | *UNDEFINED*                   
 *  [18:16] | RW     | 0x0   | ALT_CLKMGR_PERPLL_CNTR4CLK_SRC
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
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR4CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR4CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR4CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR4CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR4CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR4CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_CNT_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_CNTR4CLK_CNT field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_CNTR4CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

/*
 * Field : src
 * 
 * Selects the source for the active 5:1 clock selection when the PLL is not
 * bypassed.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_MAIN   | 0x0   |            
 *  ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_PERI   | 0x1   |            
 *  ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_OSC1   | 0x2   |            
 *  ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_INTOSC | 0x3   |            
 *  ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_FPGA   | 0x4   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR4CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_MAIN   0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR4CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_PERI   0x1
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR4CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_OSC1   0x2
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR4CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_INTOSC 0x3
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR4CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_FPGA   0x4

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR4CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR4CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_MSB        18
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR4CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_WIDTH      3
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR4CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_SET_MSK    0x00070000
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR4CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_CLR_MSK    0xfff8ffff
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR4CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_CNTR4CLK_SRC field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_GET(value) (((value) & 0x00070000) >> 16)
/* Produces a ALT_CLKMGR_PERPLL_CNTR4CLK_SRC register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_SET(value) (((value) << 16) & 0x00070000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_PERPLL_CNTR4CLK.
 */
struct ALT_CLKMGR_PERPLL_CNTR4CLK_s
{
    uint32_t  cnt : 11;  /* Counter */
    uint32_t      :  5;  /* *UNDEFINED* */
    uint32_t  src :  3;  /* ALT_CLKMGR_PERPLL_CNTR4CLK_SRC */
    uint32_t      : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_CNTR4CLK. */
typedef volatile struct ALT_CLKMGR_PERPLL_CNTR4CLK_s  ALT_CLKMGR_PERPLL_CNTR4CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_CNTR4CLK register. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_PERPLL_CNTR4CLK register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_CNTR4CLK_OFST        0x30

/*
 * Register : Peripheral PLL Control Register for Counter 5 Clock - cntr5clk
 * 
 * Contains settings that control Couner 5 clock generated from the Peripheral PLL
 * VCO clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                   
 * :--------|:-------|:------|:-------------------------------
 *  [10:0]  | RW     | 0x0   | Counter                       
 *  [15:11] | ???    | 0x0   | *UNDEFINED*                   
 *  [18:16] | RW     | 0x0   | ALT_CLKMGR_PERPLL_CNTR5CLK_SRC
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
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR5CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR5CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR5CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR5CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR5CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR5CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_CNT_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_CNTR5CLK_CNT field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_CNTR5CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

/*
 * Field : src
 * 
 * Selects the source for the active 5:1 clock selection when the PLL is not
 * bypassed.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_E_MAIN   | 0x0   |            
 *  ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_E_PERI   | 0x1   |            
 *  ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_E_OSC1   | 0x2   |            
 *  ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_E_INTOSC | 0x3   |            
 *  ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_E_FPGA   | 0x4   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR5CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_E_MAIN   0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR5CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_E_PERI   0x1
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR5CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_E_OSC1   0x2
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR5CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_E_INTOSC 0x3
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR5CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_E_FPGA   0x4

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR5CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR5CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_MSB        18
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR5CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_WIDTH      3
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR5CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_SET_MSK    0x00070000
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR5CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_CLR_MSK    0xfff8ffff
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR5CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_CNTR5CLK_SRC field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_GET(value) (((value) & 0x00070000) >> 16)
/* Produces a ALT_CLKMGR_PERPLL_CNTR5CLK_SRC register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_SET(value) (((value) << 16) & 0x00070000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_PERPLL_CNTR5CLK.
 */
struct ALT_CLKMGR_PERPLL_CNTR5CLK_s
{
    uint32_t  cnt : 11;  /* Counter */
    uint32_t      :  5;  /* *UNDEFINED* */
    uint32_t  src :  3;  /* ALT_CLKMGR_PERPLL_CNTR5CLK_SRC */
    uint32_t      : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_CNTR5CLK. */
typedef volatile struct ALT_CLKMGR_PERPLL_CNTR5CLK_s  ALT_CLKMGR_PERPLL_CNTR5CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_CNTR5CLK register. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_PERPLL_CNTR5CLK register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_CNTR5CLK_OFST        0x34

/*
 * Register : Peripheral PLL Control Register for Counter 6 Clock - cntr6clk
 * 
 * Contains settings that control Couner 6 clock generated from the Peripheral PLL
 * VCO clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                   
 * :--------|:-------|:------|:-------------------------------
 *  [10:0]  | RW     | 0x0   | Counter                       
 *  [15:11] | ???    | 0x0   | *UNDEFINED*                   
 *  [18:16] | RW     | 0x0   | ALT_CLKMGR_PERPLL_CNTR6CLK_SRC
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
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR6CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR6CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR6CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR6CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR6CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR6CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_CNT_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_CNTR6CLK_CNT field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_CNTR6CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

/*
 * Field : src
 * 
 * Selects the source for the active 5:1 clock selection when the PLL is not
 * bypassed.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_E_MAIN   | 0x0   |            
 *  ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_E_PERI   | 0x1   |            
 *  ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_E_OSC1   | 0x2   |            
 *  ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_E_INTOSC | 0x3   |            
 *  ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_E_FPGA   | 0x4   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR6CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_E_MAIN   0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR6CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_E_PERI   0x1
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR6CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_E_OSC1   0x2
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR6CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_E_INTOSC 0x3
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR6CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_E_FPGA   0x4

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR6CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR6CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_MSB        18
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR6CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_WIDTH      3
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR6CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_SET_MSK    0x00070000
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR6CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_CLR_MSK    0xfff8ffff
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR6CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_CNTR6CLK_SRC field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_GET(value) (((value) & 0x00070000) >> 16)
/* Produces a ALT_CLKMGR_PERPLL_CNTR6CLK_SRC register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_SET(value) (((value) << 16) & 0x00070000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_PERPLL_CNTR6CLK.
 */
struct ALT_CLKMGR_PERPLL_CNTR6CLK_s
{
    uint32_t  cnt : 11;  /* Counter */
    uint32_t      :  5;  /* *UNDEFINED* */
    uint32_t  src :  3;  /* ALT_CLKMGR_PERPLL_CNTR6CLK_SRC */
    uint32_t      : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_CNTR6CLK. */
typedef volatile struct ALT_CLKMGR_PERPLL_CNTR6CLK_s  ALT_CLKMGR_PERPLL_CNTR6CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_CNTR6CLK register. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_PERPLL_CNTR6CLK register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_CNTR6CLK_OFST        0x38

/*
 * Register : Peripheral PLL Control Register for Counter 7 Clock - cntr7clk
 * 
 * Contains settings that control Couner 7 clock generated from the Peripheral PLL
 * VCO clock.
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
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR7CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR7CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR7CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR7CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR7CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR7CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR7CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR7CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR7CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR7CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR7CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR7CLK_CNT_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_CNTR7CLK_CNT field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR7CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_CNTR7CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR7CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_PERPLL_CNTR7CLK.
 */
struct ALT_CLKMGR_PERPLL_CNTR7CLK_s
{
    uint32_t  cnt : 11;  /* Counter */
    uint32_t      : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_CNTR7CLK. */
typedef volatile struct ALT_CLKMGR_PERPLL_CNTR7CLK_s  ALT_CLKMGR_PERPLL_CNTR7CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_CNTR7CLK register. */
#define ALT_CLKMGR_PERPLL_CNTR7CLK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_PERPLL_CNTR7CLK register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_CNTR7CLK_OFST        0x3c

/*
 * Register : Peripheral PLL Control Register for Counter 8 Clock - cntr8clk
 * 
 * Contains settings that control Couner 8 clock generated from the Peripheral PLL
 * VCO clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                   
 * :--------|:-------|:------|:-------------------------------
 *  [10:0]  | RW     | 0x0   | Counter                       
 *  [15:11] | ???    | 0x0   | *UNDEFINED*                   
 *  [18:16] | RW     | 0x0   | ALT_CLKMGR_PERPLL_CNTR8CLK_SRC
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
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR8CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR8CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR8CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR8CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR8CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR8CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_CNT_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_CNTR8CLK_CNT field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_CNTR8CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

/*
 * Field : src
 * 
 * Selects the source for the active 5:1 clock selection when the PLL is not
 * bypassed.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description
 * :----------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_E_MAIN   | 0x0   |            
 *  ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_E_PERI   | 0x1   |            
 *  ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_E_OSC1   | 0x2   |            
 *  ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_E_INTOSC | 0x3   |            
 *  ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_E_FPGA   | 0x4   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR8CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_E_MAIN   0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR8CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_E_PERI   0x1
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR8CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_E_OSC1   0x2
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR8CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_E_INTOSC 0x3
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_CNTR8CLK_SRC
 * 
 */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_E_FPGA   0x4

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR8CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR8CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_MSB        18
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR8CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_WIDTH      3
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR8CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_SET_MSK    0x00070000
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR8CLK_SRC register field value. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_CLR_MSK    0xfff8ffff
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR8CLK_SRC register field. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_CNTR8CLK_SRC field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_GET(value) (((value) & 0x00070000) >> 16)
/* Produces a ALT_CLKMGR_PERPLL_CNTR8CLK_SRC register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_SET(value) (((value) << 16) & 0x00070000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_PERPLL_CNTR8CLK.
 */
struct ALT_CLKMGR_PERPLL_CNTR8CLK_s
{
    uint32_t  cnt : 11;  /* Counter */
    uint32_t      :  5;  /* *UNDEFINED* */
    uint32_t  src :  3;  /* ALT_CLKMGR_PERPLL_CNTR8CLK_SRC */
    uint32_t      : 13;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_CNTR8CLK. */
typedef volatile struct ALT_CLKMGR_PERPLL_CNTR8CLK_s  ALT_CLKMGR_PERPLL_CNTR8CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_CNTR8CLK register. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_PERPLL_CNTR8CLK register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_CNTR8CLK_OFST        0x40

/*
 * Register : Peripheral PLL Control Register for Counter 9 Clock - cntr9clk
 * 
 * Contains settings that control Couner 9 clock generated from the Peripheral PLL
 * VCO clock.
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
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_CNTR9CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_CNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_CNTR9CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_CNT_MSB        10
/* The width in bits of the ALT_CLKMGR_PERPLL_CNTR9CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_CNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_PERPLL_CNTR9CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_CNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_PERPLL_CNTR9CLK_CNT register field value. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_CNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_PERPLL_CNTR9CLK_CNT register field. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_CNT_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_CNTR9CLK_CNT field value from a register. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_CNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_CNTR9CLK_CNT register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_CNT_SET(value) (((value) << 0) & 0x000007ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_PERPLL_CNTR9CLK.
 */
struct ALT_CLKMGR_PERPLL_CNTR9CLK_s
{
    uint32_t  cnt : 11;  /* Counter */
    uint32_t      : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_CNTR9CLK. */
typedef volatile struct ALT_CLKMGR_PERPLL_CNTR9CLK_s  ALT_CLKMGR_PERPLL_CNTR9CLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_CNTR9CLK register. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_PERPLL_CNTR9CLK register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_CNTR9CLK_OFST        0x44

/*
 * Register : Peripheral PLL Output Counter Reset Register - outrst
 * 
 * Contains settings to assert individual Outreset for all Peripheral PLL Counters.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description         
 * :--------|:-------|:------|:---------------------
 *  [15:0]  | RW     | 0x0   | Output Counter Reset
 *  [31:16] | ???    | 0x0   | *UNDEFINED*         
 * 
 */
/*
 * Field : Output Counter Reset - outreset
 * 
 * Resets the individual PLL output counter.
 * 
 * For software to change the PLL output counter without producing glitches on the
 * respective clock, SW must set the Output Counter Reset Register 'Output Counter
 * Reset' bit. Software then polls the respective Output Counter Reset Acknowledge
 * bit in the Output Counter Reset Ack Status Register. Software then writes the
 * appropriate counter register, and then clears the respective Output Counter
 * Reset bit.
 * 
 * LSB 'outreset[0]' corresponds to PLL output clock C0, etc.
 * 
 * If set to '1', reset output divider, no clock output from counter.
 * 
 * If set to '0', counter is not reset.
 * 
 * The reset value of this bit is applied on a cold reset; warm reset has no affect
 * on this bit.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_OUTRST_OUTRST register field. */
#define ALT_CLKMGR_PERPLL_OUTRST_OUTRST_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_OUTRST_OUTRST register field. */
#define ALT_CLKMGR_PERPLL_OUTRST_OUTRST_MSB        15
/* The width in bits of the ALT_CLKMGR_PERPLL_OUTRST_OUTRST register field. */
#define ALT_CLKMGR_PERPLL_OUTRST_OUTRST_WIDTH      16
/* The mask used to set the ALT_CLKMGR_PERPLL_OUTRST_OUTRST register field value. */
#define ALT_CLKMGR_PERPLL_OUTRST_OUTRST_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_CLKMGR_PERPLL_OUTRST_OUTRST register field value. */
#define ALT_CLKMGR_PERPLL_OUTRST_OUTRST_CLR_MSK    0xffff0000
/* The reset value of the ALT_CLKMGR_PERPLL_OUTRST_OUTRST register field. */
#define ALT_CLKMGR_PERPLL_OUTRST_OUTRST_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_OUTRST_OUTRST field value from a register. */
#define ALT_CLKMGR_PERPLL_OUTRST_OUTRST_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_OUTRST_OUTRST register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_OUTRST_OUTRST_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_PERPLL_OUTRST.
 */
struct ALT_CLKMGR_PERPLL_OUTRST_s
{
    uint32_t  outreset : 16;  /* Output Counter Reset */
    uint32_t           : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_OUTRST. */
typedef volatile struct ALT_CLKMGR_PERPLL_OUTRST_s  ALT_CLKMGR_PERPLL_OUTRST_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_OUTRST register. */
#define ALT_CLKMGR_PERPLL_OUTRST_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_PERPLL_OUTRST register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_OUTRST_OFST        0x60

/*
 * Register : Peripheral PLL Output Counter Reset Ack Status Register - outrststat
 * 
 * Contains Output Clock Counter Reset acknowledge status.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                     
 * :--------|:-------|:------|:---------------------------------
 *  [15:0]  | R      | 0x0   | Output Counter Reset Acknowledge
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                     
 * 
 */
/*
 * Field : Output Counter Reset Acknowledge - outresetack
 * 
 * These read only bits per PLL output indicate that the PLL has received the
 * Output Reset Counter request and has gracefully stopped the respective PLL
 * output clock.
 * 
 * For software to change the PLL output counter without producing glitches on the
 * respective clock, SW must set the Output Counter Reset Register 'Output Counter
 * Reset' bit. Software then polls the respective Output Counter Reset Acknowledge
 * bit in the Output Counter Reset Ack Status Register. Software then writes the
 * appropriate counter register, and then clears the respective Output Counter
 * Reset bit.
 * 
 * The reset value of this bit is applied on a cold reset; warm reset has no affect
 * on this bit.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                             | Value | Description                         
 * :-------------------------------------------------|:------|:-------------------------------------
 *  ALT_CLKMGR_PERPLL_OUTRSTSTAT_OUTRSTACK_E_IDLE    | 0x0   | Idle                                
 *  ALT_CLKMGR_PERPLL_OUTRSTSTAT_OUTRSTACK_E_ACK_RXD | 0x1   | Output Counter Acknowledge received.
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_OUTRSTSTAT_OUTRSTACK
 * 
 * Idle
 */
#define ALT_CLKMGR_PERPLL_OUTRSTSTAT_OUTRSTACK_E_IDLE       0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_OUTRSTSTAT_OUTRSTACK
 * 
 * Output Counter Acknowledge received.
 */
#define ALT_CLKMGR_PERPLL_OUTRSTSTAT_OUTRSTACK_E_ACK_RXD    0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_OUTRSTSTAT_OUTRSTACK register field. */
#define ALT_CLKMGR_PERPLL_OUTRSTSTAT_OUTRSTACK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_OUTRSTSTAT_OUTRSTACK register field. */
#define ALT_CLKMGR_PERPLL_OUTRSTSTAT_OUTRSTACK_MSB        15
/* The width in bits of the ALT_CLKMGR_PERPLL_OUTRSTSTAT_OUTRSTACK register field. */
#define ALT_CLKMGR_PERPLL_OUTRSTSTAT_OUTRSTACK_WIDTH      16
/* The mask used to set the ALT_CLKMGR_PERPLL_OUTRSTSTAT_OUTRSTACK register field value. */
#define ALT_CLKMGR_PERPLL_OUTRSTSTAT_OUTRSTACK_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_CLKMGR_PERPLL_OUTRSTSTAT_OUTRSTACK register field value. */
#define ALT_CLKMGR_PERPLL_OUTRSTSTAT_OUTRSTACK_CLR_MSK    0xffff0000
/* The reset value of the ALT_CLKMGR_PERPLL_OUTRSTSTAT_OUTRSTACK register field. */
#define ALT_CLKMGR_PERPLL_OUTRSTSTAT_OUTRSTACK_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_OUTRSTSTAT_OUTRSTACK field value from a register. */
#define ALT_CLKMGR_PERPLL_OUTRSTSTAT_OUTRSTACK_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_OUTRSTSTAT_OUTRSTACK register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_OUTRSTSTAT_OUTRSTACK_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_PERPLL_OUTRSTSTAT.
 */
struct ALT_CLKMGR_PERPLL_OUTRSTSTAT_s
{
    const uint32_t  outresetack : 16;  /* Output Counter Reset Acknowledge */
    uint32_t                    : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_OUTRSTSTAT. */
typedef volatile struct ALT_CLKMGR_PERPLL_OUTRSTSTAT_s  ALT_CLKMGR_PERPLL_OUTRSTSTAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_OUTRSTSTAT register. */
#define ALT_CLKMGR_PERPLL_OUTRSTSTAT_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_PERPLL_OUTRSTSTAT register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_OUTRSTSTAT_OFST        0x64

/*
 * Register : Main Divide Register - emacctl
 * 
 * Contains fields that control clock dividers for main clocks derived from the
 * Main PLL
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description       
 * :--------|:-------|:------|:-------------------
 *  [25:0]  | ???    | 0x0   | *UNDEFINED*       
 *  [26]    | RW     | 0x0   | EMAC0 clock select
 *  [27]    | RW     | 0x0   | EMAC1 clock select
 *  [28]    | RW     | 0x0   | EMAC2 clock select
 *  [31:29] | ???    | 0x0   | *UNDEFINED*       
 * 
 */
/*
 * Field : EMAC0 clock select - emac0sel
 * 
 * Selects the source for emac0_clk as either emaca_free_clk or emacb_free_clk.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description
 * :-------------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_E_EMACA | 0x0   | EMAC A     
 *  ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_E_EMACB | 0x1   | EMAC B     
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL
 * 
 * EMAC A
 */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_E_EMACA  0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL
 * 
 * EMAC B
 */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_E_EMACB  0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL register field. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_LSB        26
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL register field. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_MSB        26
/* The width in bits of the ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL register field. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL register field value. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_SET_MSK    0x04000000
/* The mask used to clear the ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL register field value. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_CLR_MSK    0xfbffffff
/* The reset value of the ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL register field. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL field value from a register. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_GET(value) (((value) & 0x04000000) >> 26)
/* Produces a ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_SET(value) (((value) << 26) & 0x04000000)

/*
 * Field : EMAC1 clock select - emac1sel
 * 
 * Selects the source for emac1_clk as either emaca_free_clk or emacb_free_clk.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description
 * :-------------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_E_EMACA | 0x0   | EMAC A     
 *  ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_E_EMACB | 0x1   | EMAC B     
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL
 * 
 * EMAC A
 */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_E_EMACA  0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL
 * 
 * EMAC B
 */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_E_EMACB  0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL register field. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_LSB        27
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL register field. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_MSB        27
/* The width in bits of the ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL register field. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL register field value. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_SET_MSK    0x08000000
/* The mask used to clear the ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL register field value. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_CLR_MSK    0xf7ffffff
/* The reset value of the ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL register field. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL field value from a register. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_GET(value) (((value) & 0x08000000) >> 27)
/* Produces a ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_SET(value) (((value) << 27) & 0x08000000)

/*
 * Field : EMAC2 clock select - emac2sel
 * 
 * Selects the source for emac2_clk as either emaca_free_clk or emacb_free_clk.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description
 * :-------------------------------------------|:------|:------------
 *  ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_E_EMACA | 0x0   | EMAC A     
 *  ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_E_EMACB | 0x1   | EMAC B     
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL
 * 
 * EMAC A
 */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_E_EMACA  0x0
/*
 * Enumerated value for register field ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL
 * 
 * EMAC B
 */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_E_EMACB  0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL register field. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_LSB        28
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL register field. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_MSB        28
/* The width in bits of the ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL register field. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_WIDTH      1
/* The mask used to set the ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL register field value. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_SET_MSK    0x10000000
/* The mask used to clear the ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL register field value. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_CLR_MSK    0xefffffff
/* The reset value of the ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL register field. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_RESET      0x0
/* Extracts the ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL field value from a register. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_GET(value) (((value) & 0x10000000) >> 28)
/* Produces a ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_SET(value) (((value) << 28) & 0x10000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_PERPLL_EMACCTL.
 */
struct ALT_CLKMGR_PERPLL_EMACCTL_s
{
    uint32_t           : 26;  /* *UNDEFINED* */
    uint32_t  emac0sel :  1;  /* EMAC0 clock select */
    uint32_t  emac1sel :  1;  /* EMAC1 clock select */
    uint32_t  emac2sel :  1;  /* EMAC2 clock select */
    uint32_t           :  3;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_EMACCTL. */
typedef volatile struct ALT_CLKMGR_PERPLL_EMACCTL_s  ALT_CLKMGR_PERPLL_EMACCTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_EMACCTL register. */
#define ALT_CLKMGR_PERPLL_EMACCTL_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_PERPLL_EMACCTL register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_EMACCTL_OFST        0x68

/*
 * Register : GPIO Divide Register - gpiodiv
 * 
 * Contains a field that controls the clock divider for the GPIO De-bounce clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                 
 * :--------|:-------|:------|:-----------------------------
 *  [15:0]  | RW     | 0x1   | GPIO De-bounce Clock Divider
 *  [31:16] | ???    | 0x0   | *UNDEFINED*                 
 * 
 */
/*
 * Field : GPIO De-bounce Clock Divider - gpiodbclk
 * 
 * The gpio_db_clk is divided down from the periph_base_clk by the value plus one
 * specified in this field. The value 0 (divide by 1) is illegal. A value of 1
 * indicates divide by 2, 2 divide by 3, etc.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK register field. */
#define ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK register field. */
#define ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK_MSB        15
/* The width in bits of the ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK register field. */
#define ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK_WIDTH      16
/* The mask used to set the ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK register field value. */
#define ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK_SET_MSK    0x0000ffff
/* The mask used to clear the ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK register field value. */
#define ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK_CLR_MSK    0xffff0000
/* The reset value of the ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK register field. */
#define ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK_RESET      0x1
/* Extracts the ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK field value from a register. */
#define ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK_GET(value) (((value) & 0x0000ffff) >> 0)
/* Produces a ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK register field value suitable for setting the register. */
#define ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK_SET(value) (((value) << 0) & 0x0000ffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_PERPLL_GPIODIV.
 */
struct ALT_CLKMGR_PERPLL_GPIODIV_s
{
    uint32_t  gpiodbclk : 16;  /* GPIO De-bounce Clock Divider */
    uint32_t            : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_PERPLL_GPIODIV. */
typedef volatile struct ALT_CLKMGR_PERPLL_GPIODIV_s  ALT_CLKMGR_PERPLL_GPIODIV_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_PERPLL_GPIODIV register. */
#define ALT_CLKMGR_PERPLL_GPIODIV_RESET       0x00000001
/* The byte offset of the ALT_CLKMGR_PERPLL_GPIODIV register from the beginning of the component. */
#define ALT_CLKMGR_PERPLL_GPIODIV_OFST        0x6c

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_CLKMGR_PERPLL.
 */
struct ALT_CLKMGR_PERPLL_s
{
    ALT_CLKMGR_PERPLL_VCO0_t        vco0;               /* ALT_CLKMGR_PERPLL_VCO0 */
    ALT_CLKMGR_PERPLL_VCO1_t        vco1;               /* ALT_CLKMGR_PERPLL_VCO1 */
    ALT_CLKMGR_PERPLL_EN_t          en;                 /* ALT_CLKMGR_PERPLL_EN */
    ALT_CLKMGR_PERPLL_ENS_t         ens;                /* ALT_CLKMGR_PERPLL_ENS */
    ALT_CLKMGR_PERPLL_ENR_t         enr;                /* ALT_CLKMGR_PERPLL_ENR */
    ALT_CLKMGR_PERPLL_BYPASS_t      bypass;             /* ALT_CLKMGR_PERPLL_BYPASS */
    ALT_CLKMGR_PERPLL_BYPASSS_t     bypasss;            /* ALT_CLKMGR_PERPLL_BYPASSS */
    ALT_CLKMGR_PERPLL_BYPASSR_t     bypassr;            /* ALT_CLKMGR_PERPLL_BYPASSR */
    volatile uint32_t               _pad_0x20_0x27[2];  /* *UNDEFINED* */
    ALT_CLKMGR_PERPLL_CNTR2CLK_t    cntr2clk;           /* ALT_CLKMGR_PERPLL_CNTR2CLK */
    ALT_CLKMGR_PERPLL_CNTR3CLK_t    cntr3clk;           /* ALT_CLKMGR_PERPLL_CNTR3CLK */
    ALT_CLKMGR_PERPLL_CNTR4CLK_t    cntr4clk;           /* ALT_CLKMGR_PERPLL_CNTR4CLK */
    ALT_CLKMGR_PERPLL_CNTR5CLK_t    cntr5clk;           /* ALT_CLKMGR_PERPLL_CNTR5CLK */
    ALT_CLKMGR_PERPLL_CNTR6CLK_t    cntr6clk;           /* ALT_CLKMGR_PERPLL_CNTR6CLK */
    ALT_CLKMGR_PERPLL_CNTR7CLK_t    cntr7clk;           /* ALT_CLKMGR_PERPLL_CNTR7CLK */
    ALT_CLKMGR_PERPLL_CNTR8CLK_t    cntr8clk;           /* ALT_CLKMGR_PERPLL_CNTR8CLK */
    ALT_CLKMGR_PERPLL_CNTR9CLK_t    cntr9clk;           /* ALT_CLKMGR_PERPLL_CNTR9CLK */
    volatile uint32_t               _pad_0x48_0x5f[6];  /* *UNDEFINED* */
    ALT_CLKMGR_PERPLL_OUTRST_t      outrst;             /* ALT_CLKMGR_PERPLL_OUTRST */
    ALT_CLKMGR_PERPLL_OUTRSTSTAT_t  outrststat;         /* ALT_CLKMGR_PERPLL_OUTRSTSTAT */
    ALT_CLKMGR_PERPLL_EMACCTL_t     emacctl;            /* ALT_CLKMGR_PERPLL_EMACCTL */
    ALT_CLKMGR_PERPLL_GPIODIV_t     gpiodiv;            /* ALT_CLKMGR_PERPLL_GPIODIV */
    volatile uint32_t               _pad_0x70_0x80[4];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_CLKMGR_PERPLL. */
typedef volatile struct ALT_CLKMGR_PERPLL_s  ALT_CLKMGR_PERPLL_t;
/* The struct declaration for the raw register contents of register group ALT_CLKMGR_PERPLL. */
struct ALT_CLKMGR_PERPLL_raw_s
{
    volatile uint32_t  vco0;               /* ALT_CLKMGR_PERPLL_VCO0 */
    volatile uint32_t  vco1;               /* ALT_CLKMGR_PERPLL_VCO1 */
    volatile uint32_t  en;                 /* ALT_CLKMGR_PERPLL_EN */
    volatile uint32_t  ens;                /* ALT_CLKMGR_PERPLL_ENS */
    volatile uint32_t  enr;                /* ALT_CLKMGR_PERPLL_ENR */
    volatile uint32_t  bypass;             /* ALT_CLKMGR_PERPLL_BYPASS */
    volatile uint32_t  bypasss;            /* ALT_CLKMGR_PERPLL_BYPASSS */
    volatile uint32_t  bypassr;            /* ALT_CLKMGR_PERPLL_BYPASSR */
    uint32_t           _pad_0x20_0x27[2];  /* *UNDEFINED* */
    volatile uint32_t  cntr2clk;           /* ALT_CLKMGR_PERPLL_CNTR2CLK */
    volatile uint32_t  cntr3clk;           /* ALT_CLKMGR_PERPLL_CNTR3CLK */
    volatile uint32_t  cntr4clk;           /* ALT_CLKMGR_PERPLL_CNTR4CLK */
    volatile uint32_t  cntr5clk;           /* ALT_CLKMGR_PERPLL_CNTR5CLK */
    volatile uint32_t  cntr6clk;           /* ALT_CLKMGR_PERPLL_CNTR6CLK */
    volatile uint32_t  cntr7clk;           /* ALT_CLKMGR_PERPLL_CNTR7CLK */
    volatile uint32_t  cntr8clk;           /* ALT_CLKMGR_PERPLL_CNTR8CLK */
    volatile uint32_t  cntr9clk;           /* ALT_CLKMGR_PERPLL_CNTR9CLK */
    uint32_t           _pad_0x48_0x5f[6];  /* *UNDEFINED* */
    volatile uint32_t  outrst;             /* ALT_CLKMGR_PERPLL_OUTRST */
    volatile uint32_t  outrststat;         /* ALT_CLKMGR_PERPLL_OUTRSTSTAT */
    volatile uint32_t  emacctl;            /* ALT_CLKMGR_PERPLL_EMACCTL */
    volatile uint32_t  gpiodiv;            /* ALT_CLKMGR_PERPLL_GPIODIV */
    uint32_t           _pad_0x70_0x80[4];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_CLKMGR_PERPLL. */
typedef volatile struct ALT_CLKMGR_PERPLL_raw_s  ALT_CLKMGR_PERPLL_raw_t;
#endif  /* __ASSEMBLY__ */


/*
 * Component : ALT_CLKMGR_ALTERA
 * 
 */
/*
 * Register : NOC Internal PLL Counters - nocclk
 * 
 * Contains settings that control clock main_clk generated from the Main PLL VCO
 * clock.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                    
 * :--------|:-------|:------|:--------------------------------
 *  [10:0]  | RW     | 0x3   | Main PLL Internal Counter      
 *  [15:11] | ???    | 0x0   | *UNDEFINED*                    
 *  [26:16] | RW     | 0x3   | Peripheral PLL Internal Counter
 *  [31:27] | ???    | 0x0   | *UNDEFINED*                    
 * 
 */
/*
 * Field : Main PLL Internal Counter - maincnt
 * 
 * Divides the VCO frequency by the value+1 in this field.  Divides the VCO
 * frequency by the value+1 in this field.  This field loads the internal counter
 * in the NOC PLL for the NOC Clock Group.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_NOCCLK_MAINCNT register field. */
#define ALT_CLKMGR_NOCCLK_MAINCNT_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_NOCCLK_MAINCNT register field. */
#define ALT_CLKMGR_NOCCLK_MAINCNT_MSB        10
/* The width in bits of the ALT_CLKMGR_NOCCLK_MAINCNT register field. */
#define ALT_CLKMGR_NOCCLK_MAINCNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_NOCCLK_MAINCNT register field value. */
#define ALT_CLKMGR_NOCCLK_MAINCNT_SET_MSK    0x000007ff
/* The mask used to clear the ALT_CLKMGR_NOCCLK_MAINCNT register field value. */
#define ALT_CLKMGR_NOCCLK_MAINCNT_CLR_MSK    0xfffff800
/* The reset value of the ALT_CLKMGR_NOCCLK_MAINCNT register field. */
#define ALT_CLKMGR_NOCCLK_MAINCNT_RESET      0x3
/* Extracts the ALT_CLKMGR_NOCCLK_MAINCNT field value from a register. */
#define ALT_CLKMGR_NOCCLK_MAINCNT_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_CLKMGR_NOCCLK_MAINCNT register field value suitable for setting the register. */
#define ALT_CLKMGR_NOCCLK_MAINCNT_SET(value) (((value) << 0) & 0x000007ff)

/*
 * Field : Peripheral PLL Internal Counter - pericnt
 * 
 * Divides the VCO frequency by the value+1 in this field.  Divides the VCO
 * frequency by the value+1 in this field.  This field loads the internal counter
 * in the NOC PLL for the NOC Clock Group.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_NOCCLK_PERICNT register field. */
#define ALT_CLKMGR_NOCCLK_PERICNT_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_NOCCLK_PERICNT register field. */
#define ALT_CLKMGR_NOCCLK_PERICNT_MSB        26
/* The width in bits of the ALT_CLKMGR_NOCCLK_PERICNT register field. */
#define ALT_CLKMGR_NOCCLK_PERICNT_WIDTH      11
/* The mask used to set the ALT_CLKMGR_NOCCLK_PERICNT register field value. */
#define ALT_CLKMGR_NOCCLK_PERICNT_SET_MSK    0x07ff0000
/* The mask used to clear the ALT_CLKMGR_NOCCLK_PERICNT register field value. */
#define ALT_CLKMGR_NOCCLK_PERICNT_CLR_MSK    0xf800ffff
/* The reset value of the ALT_CLKMGR_NOCCLK_PERICNT register field. */
#define ALT_CLKMGR_NOCCLK_PERICNT_RESET      0x3
/* Extracts the ALT_CLKMGR_NOCCLK_PERICNT field value from a register. */
#define ALT_CLKMGR_NOCCLK_PERICNT_GET(value) (((value) & 0x07ff0000) >> 16)
/* Produces a ALT_CLKMGR_NOCCLK_PERICNT register field value suitable for setting the register. */
#define ALT_CLKMGR_NOCCLK_PERICNT_SET(value) (((value) << 16) & 0x07ff0000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CLKMGR_NOCCLK.
 */
struct ALT_CLKMGR_NOCCLK_s
{
    uint32_t  maincnt : 11;  /* Main PLL Internal Counter */
    uint32_t          :  5;  /* *UNDEFINED* */
    uint32_t  pericnt : 11;  /* Peripheral PLL Internal Counter */
    uint32_t          :  5;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_NOCCLK. */
typedef volatile struct ALT_CLKMGR_NOCCLK_s  ALT_CLKMGR_NOCCLK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_NOCCLK register. */
#define ALT_CLKMGR_NOCCLK_RESET       0x00030003
/* The byte offset of the ALT_CLKMGR_NOCCLK register from the beginning of the component. */
#define ALT_CLKMGR_NOCCLK_OFST        0x4

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_CLKMGR_ALTERA.
 */
struct ALT_CLKMGR_ALTERA_s
{
    volatile uint32_t    _pad_0x0_0x3;       /* *UNDEFINED* */
    ALT_CLKMGR_NOCCLK_t  nocclk;             /* ALT_CLKMGR_NOCCLK */
    volatile uint32_t    _pad_0x8_0x40[14];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_CLKMGR_ALTERA. */
typedef volatile struct ALT_CLKMGR_ALTERA_s  ALT_CLKMGR_ALTERA_t;
/* The struct declaration for the raw register contents of register group ALT_CLKMGR_ALTERA. */
struct ALT_CLKMGR_ALTERA_raw_s
{
    uint32_t           _pad_0x0_0x3;       /* *UNDEFINED* */
    volatile uint32_t  nocclk;             /* ALT_CLKMGR_NOCCLK */
    uint32_t           _pad_0x8_0x40[14];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_CLKMGR_ALTERA. */
typedef volatile struct ALT_CLKMGR_ALTERA_raw_s  ALT_CLKMGR_ALTERA_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_CLKMGR_H__ */

