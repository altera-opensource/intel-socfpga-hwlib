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

/* Altera - ALT_CLKMGR */

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
 * Component : Clock Manager Module - CLKMGR
 * Clock Manager Module
 * 
 * Registers in the Clock Manager module
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
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CTRL_BOOTMODE register field. */
#define ALT_CLKMGR_CTRL_BOOTMODE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CTRL_BOOTMODE register field. */
#define ALT_CLKMGR_CTRL_BOOTMODE_MSB        0
/* The width in bits of the ALT_CLKMGR_CTRL_BOOTMODE register field. */
#define ALT_CLKMGR_CTRL_BOOTMODE_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CTRL_BOOTMODE register field value. */
#define ALT_CLKMGR_CTRL_BOOTMODE_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_CTRL_BOOTMODE register field value. */
#define ALT_CLKMGR_CTRL_BOOTMODE_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_CTRL_BOOTMODE register field. */
#define ALT_CLKMGR_CTRL_BOOTMODE_RESET      0x1
/* Extracts the ALT_CLKMGR_CTRL_BOOTMODE field value from a register. */
#define ALT_CLKMGR_CTRL_BOOTMODE_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_CTRL_BOOTMODE register field value suitable for setting the register. */
#define ALT_CLKMGR_CTRL_BOOTMODE_SET(value) (((value) << 0) & 0x00000001)

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
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CTRL_SWCTRLBTCLKEN register field. */
#define ALT_CLKMGR_CTRL_SWCTRLBTCLKEN_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CTRL_SWCTRLBTCLKEN register field. */
#define ALT_CLKMGR_CTRL_SWCTRLBTCLKEN_MSB        8
/* The width in bits of the ALT_CLKMGR_CTRL_SWCTRLBTCLKEN register field. */
#define ALT_CLKMGR_CTRL_SWCTRLBTCLKEN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CTRL_SWCTRLBTCLKEN register field value. */
#define ALT_CLKMGR_CTRL_SWCTRLBTCLKEN_SET_MSK    0x00000100
/* The mask used to clear the ALT_CLKMGR_CTRL_SWCTRLBTCLKEN register field value. */
#define ALT_CLKMGR_CTRL_SWCTRLBTCLKEN_CLR_MSK    0xfffffeff
/* The reset value of the ALT_CLKMGR_CTRL_SWCTRLBTCLKEN register field. */
#define ALT_CLKMGR_CTRL_SWCTRLBTCLKEN_RESET      0x0
/* Extracts the ALT_CLKMGR_CTRL_SWCTRLBTCLKEN field value from a register. */
#define ALT_CLKMGR_CTRL_SWCTRLBTCLKEN_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_CLKMGR_CTRL_SWCTRLBTCLKEN register field value suitable for setting the register. */
#define ALT_CLKMGR_CTRL_SWCTRLBTCLKEN_SET(value) (((value) << 8) & 0x00000100)

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
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_CTRL_SWCTRLBTCLKSEL register field. */
#define ALT_CLKMGR_CTRL_SWCTRLBTCLKSEL_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_CTRL_SWCTRLBTCLKSEL register field. */
#define ALT_CLKMGR_CTRL_SWCTRLBTCLKSEL_MSB        9
/* The width in bits of the ALT_CLKMGR_CTRL_SWCTRLBTCLKSEL register field. */
#define ALT_CLKMGR_CTRL_SWCTRLBTCLKSEL_WIDTH      1
/* The mask used to set the ALT_CLKMGR_CTRL_SWCTRLBTCLKSEL register field value. */
#define ALT_CLKMGR_CTRL_SWCTRLBTCLKSEL_SET_MSK    0x00000200
/* The mask used to clear the ALT_CLKMGR_CTRL_SWCTRLBTCLKSEL register field value. */
#define ALT_CLKMGR_CTRL_SWCTRLBTCLKSEL_CLR_MSK    0xfffffdff
/* The reset value of the ALT_CLKMGR_CTRL_SWCTRLBTCLKSEL register field. */
#define ALT_CLKMGR_CTRL_SWCTRLBTCLKSEL_RESET      0x0
/* Extracts the ALT_CLKMGR_CTRL_SWCTRLBTCLKSEL field value from a register. */
#define ALT_CLKMGR_CTRL_SWCTRLBTCLKSEL_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_CLKMGR_CTRL_SWCTRLBTCLKSEL register field value suitable for setting the register. */
#define ALT_CLKMGR_CTRL_SWCTRLBTCLKSEL_SET(value) (((value) << 9) & 0x00000200)

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
 * The struct declaration for register ALT_CLKMGR_CTRL.
 */
struct ALT_CLKMGR_CTRL_s
{
    volatile uint32_t  bootmode       :  1;  /* Boot Mode */
    uint32_t                          :  7;  /* *UNDEFINED* */
    volatile uint32_t  swctrlbtclken  :  1;  /* SW Control Boot Clock Enable */
    volatile uint32_t  swctrlbtclksel :  1;  /* SW Control Boot Clock Select */
    uint32_t                          : 22;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_CTRL. */
typedef struct ALT_CLKMGR_CTRL_s  ALT_CLKMGR_CTRL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_CTRL register. */
#define ALT_CLKMGR_CTRL_RESET       0x00000003
/* The byte offset of the ALT_CLKMGR_CTRL register from the beginning of the component. */
#define ALT_CLKMGR_CTRL_OFST        0x0

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
 *  Enum                        | Value | Description         
 * :----------------------------|:------|:---------------------
 *  ALT_CLKMGR_STAT_BUSY_E_IDLE | 0x0   | Clocks stable       
 *  ALT_CLKMGR_STAT_BUSY_E_BUSY | 0x1   | Clocks in transition
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_STAT_BUSY
 * 
 * Clocks stable
 */
#define ALT_CLKMGR_STAT_BUSY_E_IDLE 0x0
/*
 * Enumerated value for register field ALT_CLKMGR_STAT_BUSY
 * 
 * Clocks in transition
 */
#define ALT_CLKMGR_STAT_BUSY_E_BUSY 0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_STAT_BUSY register field. */
#define ALT_CLKMGR_STAT_BUSY_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_STAT_BUSY register field. */
#define ALT_CLKMGR_STAT_BUSY_MSB        0
/* The width in bits of the ALT_CLKMGR_STAT_BUSY register field. */
#define ALT_CLKMGR_STAT_BUSY_WIDTH      1
/* The mask used to set the ALT_CLKMGR_STAT_BUSY register field value. */
#define ALT_CLKMGR_STAT_BUSY_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_STAT_BUSY register field value. */
#define ALT_CLKMGR_STAT_BUSY_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_STAT_BUSY register field. */
#define ALT_CLKMGR_STAT_BUSY_RESET      0x0
/* Extracts the ALT_CLKMGR_STAT_BUSY field value from a register. */
#define ALT_CLKMGR_STAT_BUSY_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_STAT_BUSY register field value suitable for setting the register. */
#define ALT_CLKMGR_STAT_BUSY_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Main PLL Current Lock Status - mainplllocked
 * 
 * If 1, the Main PLL is currently locked. If 0, the Main PLL is currently not
 * locked.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_STAT_MAINPLLLOCKED register field. */
#define ALT_CLKMGR_STAT_MAINPLLLOCKED_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_STAT_MAINPLLLOCKED register field. */
#define ALT_CLKMGR_STAT_MAINPLLLOCKED_MSB        8
/* The width in bits of the ALT_CLKMGR_STAT_MAINPLLLOCKED register field. */
#define ALT_CLKMGR_STAT_MAINPLLLOCKED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_STAT_MAINPLLLOCKED register field value. */
#define ALT_CLKMGR_STAT_MAINPLLLOCKED_SET_MSK    0x00000100
/* The mask used to clear the ALT_CLKMGR_STAT_MAINPLLLOCKED register field value. */
#define ALT_CLKMGR_STAT_MAINPLLLOCKED_CLR_MSK    0xfffffeff
/* The reset value of the ALT_CLKMGR_STAT_MAINPLLLOCKED register field. */
#define ALT_CLKMGR_STAT_MAINPLLLOCKED_RESET      0x0
/* Extracts the ALT_CLKMGR_STAT_MAINPLLLOCKED field value from a register. */
#define ALT_CLKMGR_STAT_MAINPLLLOCKED_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_CLKMGR_STAT_MAINPLLLOCKED register field value suitable for setting the register. */
#define ALT_CLKMGR_STAT_MAINPLLLOCKED_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : Peripheral PLL Current Lock Status - perplllocked
 * 
 * If 1, the Peripheral PLL is currently locked. If 0, the Peripheral PLL is
 * currently not locked.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_STAT_PERPLLLOCKED register field. */
#define ALT_CLKMGR_STAT_PERPLLLOCKED_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_STAT_PERPLLLOCKED register field. */
#define ALT_CLKMGR_STAT_PERPLLLOCKED_MSB        9
/* The width in bits of the ALT_CLKMGR_STAT_PERPLLLOCKED register field. */
#define ALT_CLKMGR_STAT_PERPLLLOCKED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_STAT_PERPLLLOCKED register field value. */
#define ALT_CLKMGR_STAT_PERPLLLOCKED_SET_MSK    0x00000200
/* The mask used to clear the ALT_CLKMGR_STAT_PERPLLLOCKED register field value. */
#define ALT_CLKMGR_STAT_PERPLLLOCKED_CLR_MSK    0xfffffdff
/* The reset value of the ALT_CLKMGR_STAT_PERPLLLOCKED register field. */
#define ALT_CLKMGR_STAT_PERPLLLOCKED_RESET      0x0
/* Extracts the ALT_CLKMGR_STAT_PERPLLLOCKED field value from a register. */
#define ALT_CLKMGR_STAT_PERPLLLOCKED_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_CLKMGR_STAT_PERPLLLOCKED register field value suitable for setting the register. */
#define ALT_CLKMGR_STAT_PERPLLLOCKED_SET(value) (((value) << 9) & 0x00000200)

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
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_STAT_BOOTMODE register field. */
#define ALT_CLKMGR_STAT_BOOTMODE_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_STAT_BOOTMODE register field. */
#define ALT_CLKMGR_STAT_BOOTMODE_MSB        16
/* The width in bits of the ALT_CLKMGR_STAT_BOOTMODE register field. */
#define ALT_CLKMGR_STAT_BOOTMODE_WIDTH      1
/* The mask used to set the ALT_CLKMGR_STAT_BOOTMODE register field value. */
#define ALT_CLKMGR_STAT_BOOTMODE_SET_MSK    0x00010000
/* The mask used to clear the ALT_CLKMGR_STAT_BOOTMODE register field value. */
#define ALT_CLKMGR_STAT_BOOTMODE_CLR_MSK    0xfffeffff
/* The reset value of the ALT_CLKMGR_STAT_BOOTMODE register field. */
#define ALT_CLKMGR_STAT_BOOTMODE_RESET      0x1
/* Extracts the ALT_CLKMGR_STAT_BOOTMODE field value from a register. */
#define ALT_CLKMGR_STAT_BOOTMODE_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_CLKMGR_STAT_BOOTMODE register field value suitable for setting the register. */
#define ALT_CLKMGR_STAT_BOOTMODE_SET(value) (((value) << 16) & 0x00010000)

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
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_STAT_BOOTCLKSRC register field. */
#define ALT_CLKMGR_STAT_BOOTCLKSRC_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_STAT_BOOTCLKSRC register field. */
#define ALT_CLKMGR_STAT_BOOTCLKSRC_MSB        17
/* The width in bits of the ALT_CLKMGR_STAT_BOOTCLKSRC register field. */
#define ALT_CLKMGR_STAT_BOOTCLKSRC_WIDTH      1
/* The mask used to set the ALT_CLKMGR_STAT_BOOTCLKSRC register field value. */
#define ALT_CLKMGR_STAT_BOOTCLKSRC_SET_MSK    0x00020000
/* The mask used to clear the ALT_CLKMGR_STAT_BOOTCLKSRC register field value. */
#define ALT_CLKMGR_STAT_BOOTCLKSRC_CLR_MSK    0xfffdffff
/* The reset value of the ALT_CLKMGR_STAT_BOOTCLKSRC register field. */
#define ALT_CLKMGR_STAT_BOOTCLKSRC_RESET      0x0
/* Extracts the ALT_CLKMGR_STAT_BOOTCLKSRC field value from a register. */
#define ALT_CLKMGR_STAT_BOOTCLKSRC_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_CLKMGR_STAT_BOOTCLKSRC register field value suitable for setting the register. */
#define ALT_CLKMGR_STAT_BOOTCLKSRC_SET(value) (((value) << 17) & 0x00020000)

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
 * The struct declaration for register ALT_CLKMGR_STAT.
 */
struct ALT_CLKMGR_STAT_s
{
    const volatile uint32_t  busy          :  1;  /* HW Managed Clocks BUSY */
    uint32_t                               :  7;  /* *UNDEFINED* */
    const volatile uint32_t  mainplllocked :  1;  /* Main PLL Current Lock Status */
    const volatile uint32_t  perplllocked  :  1;  /* Peripheral PLL Current Lock Status */
    uint32_t                               :  6;  /* *UNDEFINED* */
    const volatile uint32_t  bootmode      :  1;  /* Boot Mode Status */
    const volatile uint32_t  bootclksrc    :  1;  /* Boot Clock Source Status */
    uint32_t                               : 14;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_STAT. */
typedef struct ALT_CLKMGR_STAT_s  ALT_CLKMGR_STAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_STAT register. */
#define ALT_CLKMGR_STAT_RESET       0x00010000
/* The byte offset of the ALT_CLKMGR_STAT register from the beginning of the component. */
#define ALT_CLKMGR_STAT_OFST        0x4

/*
 * Register : Test IO Control Register - testioctrl
 * 
 * Contains fields setting the IO output select for Test Clock and Debug outputs.
 * 
 * For debug purpose, clock manager send the PLL clocks and PLL lock status out to
 * the dedicated IO and DFT fabric. Dedicated IO expects 4 signals from clock
 * manager i.e. osc_clk, main pll c0/c1, peripheral pll c0/c1 and lock status.
 * 
 * testioctrl_debugclksel is used to select between main pll lock and peripheral
 * pll lock status
 * 
 * testioctrl_mainclksel is used to select between channel 0 and channel 1 of main
 * PLL
 * 
 * testioctrl_peripclksel is used to select between channel 0 and channel 1 of
 * peripheral PLL
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset  | Description            
 * :-------|:-------|:-------|:------------------------
 *  [0]    | RW     | 0x0    | Main Clock Select      
 *  [1]    | ???    | 0x0    | *UNDEFINED*            
 *  [2]    | RW     | 0x0    | Peripheral Clock Select
 *  [3]    | ???    | 0x1    | *UNDEFINED*            
 *  [4]    | RW     | 0x0    | Debug Clock Select     
 *  [31:5] | ???    | 0x8040 | *UNDEFINED*            
 * 
 */
/*
 * Field : Main Clock Select - mainclksel
 * 
 * Selects between Channel 1 and channel 0 of the main PLL.
 * 
 * 0 -> main PLL C0
 * 
 * 1 -> main PLL C1
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description
 * :---------------------------------------|:------|:------------
 *  ALT_CLKMGR_TESTIOCTRL_MAINCLKSEL_E_MPU | 0x0   |            
 *  ALT_CLKMGR_TESTIOCTRL_MAINCLKSEL_E_NOC | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_TESTIOCTRL_MAINCLKSEL
 * 
 */
#define ALT_CLKMGR_TESTIOCTRL_MAINCLKSEL_E_MPU  0x0
/*
 * Enumerated value for register field ALT_CLKMGR_TESTIOCTRL_MAINCLKSEL
 * 
 */
#define ALT_CLKMGR_TESTIOCTRL_MAINCLKSEL_E_NOC  0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_TESTIOCTRL_MAINCLKSEL register field. */
#define ALT_CLKMGR_TESTIOCTRL_MAINCLKSEL_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_TESTIOCTRL_MAINCLKSEL register field. */
#define ALT_CLKMGR_TESTIOCTRL_MAINCLKSEL_MSB        0
/* The width in bits of the ALT_CLKMGR_TESTIOCTRL_MAINCLKSEL register field. */
#define ALT_CLKMGR_TESTIOCTRL_MAINCLKSEL_WIDTH      1
/* The mask used to set the ALT_CLKMGR_TESTIOCTRL_MAINCLKSEL register field value. */
#define ALT_CLKMGR_TESTIOCTRL_MAINCLKSEL_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_TESTIOCTRL_MAINCLKSEL register field value. */
#define ALT_CLKMGR_TESTIOCTRL_MAINCLKSEL_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_TESTIOCTRL_MAINCLKSEL register field. */
#define ALT_CLKMGR_TESTIOCTRL_MAINCLKSEL_RESET      0x0
/* Extracts the ALT_CLKMGR_TESTIOCTRL_MAINCLKSEL field value from a register. */
#define ALT_CLKMGR_TESTIOCTRL_MAINCLKSEL_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_TESTIOCTRL_MAINCLKSEL register field value suitable for setting the register. */
#define ALT_CLKMGR_TESTIOCTRL_MAINCLKSEL_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : Peripheral Clock Select - periclksel
 * 
 * Selects between Channel 1 and channel 0 of the peripheral PLL.
 * 
 * 0 -> periph PLL C0
 * 
 * 1 -> periph PLL C1
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description
 * :---------------------------------------|:------|:------------
 *  ALT_CLKMGR_TESTIOCTRL_PERICLKSEL_E_MPU | 0x0   |            
 *  ALT_CLKMGR_TESTIOCTRL_PERICLKSEL_E_NOC | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_TESTIOCTRL_PERICLKSEL
 * 
 */
#define ALT_CLKMGR_TESTIOCTRL_PERICLKSEL_E_MPU  0x0
/*
 * Enumerated value for register field ALT_CLKMGR_TESTIOCTRL_PERICLKSEL
 * 
 */
#define ALT_CLKMGR_TESTIOCTRL_PERICLKSEL_E_NOC  0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_TESTIOCTRL_PERICLKSEL register field. */
#define ALT_CLKMGR_TESTIOCTRL_PERICLKSEL_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_TESTIOCTRL_PERICLKSEL register field. */
#define ALT_CLKMGR_TESTIOCTRL_PERICLKSEL_MSB        2
/* The width in bits of the ALT_CLKMGR_TESTIOCTRL_PERICLKSEL register field. */
#define ALT_CLKMGR_TESTIOCTRL_PERICLKSEL_WIDTH      1
/* The mask used to set the ALT_CLKMGR_TESTIOCTRL_PERICLKSEL register field value. */
#define ALT_CLKMGR_TESTIOCTRL_PERICLKSEL_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_TESTIOCTRL_PERICLKSEL register field value. */
#define ALT_CLKMGR_TESTIOCTRL_PERICLKSEL_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_TESTIOCTRL_PERICLKSEL register field. */
#define ALT_CLKMGR_TESTIOCTRL_PERICLKSEL_RESET      0x0
/* Extracts the ALT_CLKMGR_TESTIOCTRL_PERICLKSEL field value from a register. */
#define ALT_CLKMGR_TESTIOCTRL_PERICLKSEL_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_TESTIOCTRL_PERICLKSEL register field value suitable for setting the register. */
#define ALT_CLKMGR_TESTIOCTRL_PERICLKSEL_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : Debug Clock Select - debugclksel
 * 
 * Selects the source of PLL_lock for debug purpose.
 * 
 * 0 -main PLL lock
 * 
 * 1- peri pLL lock
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description
 * :-------------------------------------------|:------|:------------
 *  ALT_CLKMGR_TESTIOCTRL_DEBUGCLKSEL_E_MAIN   | 0x0   |            
 *  ALT_CLKMGR_TESTIOCTRL_DEBUGCLKSEL_E_PERIPH | 0x1   |            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CLKMGR_TESTIOCTRL_DEBUGCLKSEL
 * 
 */
#define ALT_CLKMGR_TESTIOCTRL_DEBUGCLKSEL_E_MAIN    0x0
/*
 * Enumerated value for register field ALT_CLKMGR_TESTIOCTRL_DEBUGCLKSEL
 * 
 */
#define ALT_CLKMGR_TESTIOCTRL_DEBUGCLKSEL_E_PERIPH  0x1

/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_TESTIOCTRL_DEBUGCLKSEL register field. */
#define ALT_CLKMGR_TESTIOCTRL_DEBUGCLKSEL_LSB        4
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_TESTIOCTRL_DEBUGCLKSEL register field. */
#define ALT_CLKMGR_TESTIOCTRL_DEBUGCLKSEL_MSB        4
/* The width in bits of the ALT_CLKMGR_TESTIOCTRL_DEBUGCLKSEL register field. */
#define ALT_CLKMGR_TESTIOCTRL_DEBUGCLKSEL_WIDTH      1
/* The mask used to set the ALT_CLKMGR_TESTIOCTRL_DEBUGCLKSEL register field value. */
#define ALT_CLKMGR_TESTIOCTRL_DEBUGCLKSEL_SET_MSK    0x00000010
/* The mask used to clear the ALT_CLKMGR_TESTIOCTRL_DEBUGCLKSEL register field value. */
#define ALT_CLKMGR_TESTIOCTRL_DEBUGCLKSEL_CLR_MSK    0xffffffef
/* The reset value of the ALT_CLKMGR_TESTIOCTRL_DEBUGCLKSEL register field. */
#define ALT_CLKMGR_TESTIOCTRL_DEBUGCLKSEL_RESET      0x0
/* Extracts the ALT_CLKMGR_TESTIOCTRL_DEBUGCLKSEL field value from a register. */
#define ALT_CLKMGR_TESTIOCTRL_DEBUGCLKSEL_GET(value) (((value) & 0x00000010) >> 4)
/* Produces a ALT_CLKMGR_TESTIOCTRL_DEBUGCLKSEL register field value suitable for setting the register. */
#define ALT_CLKMGR_TESTIOCTRL_DEBUGCLKSEL_SET(value) (((value) << 4) & 0x00000010)

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
 * The struct declaration for register ALT_CLKMGR_TESTIOCTRL.
 */
struct ALT_CLKMGR_TESTIOCTRL_s
{
    volatile uint32_t  mainclksel  :  1;  /* Main Clock Select */
    uint32_t                       :  1;  /* *UNDEFINED* */
    volatile uint32_t  periclksel  :  1;  /* Peripheral Clock Select */
    uint32_t                       :  1;  /* *UNDEFINED* */
    volatile uint32_t  debugclksel :  1;  /* Debug Clock Select */
    uint32_t                       : 27;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_TESTIOCTRL. */
typedef struct ALT_CLKMGR_TESTIOCTRL_s  ALT_CLKMGR_TESTIOCTRL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_TESTIOCTRL register. */
#define ALT_CLKMGR_TESTIOCTRL_RESET       0x00100808
/* The byte offset of the ALT_CLKMGR_TESTIOCTRL register from the beginning of the component. */
#define ALT_CLKMGR_TESTIOCTRL_OFST        0x8

/*
 * Register : intrgen
 * 
 * Global Interrupt Enable
 * 
 * Writing 0 will disable any functions from this IP to cause a hardware interrupt.
 * 
 * Interrupt pending status register can still be set but the hardware interrupt
 * signal will remain de-asserted.
 * 
 * Writing 1 will enable the hardware interrupt from this IP.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description          
 * :-------|:-------|:------|:----------------------
 *  [0]    | RW     | 0x0   | ALT_CLKMGR_INTRGEN_EN
 *  [31:1] | ???    | 0x0   | *UNDEFINED*          
 * 
 */
/*
 * Field : en
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_INTRGEN_EN register field. */
#define ALT_CLKMGR_INTRGEN_EN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_INTRGEN_EN register field. */
#define ALT_CLKMGR_INTRGEN_EN_MSB        0
/* The width in bits of the ALT_CLKMGR_INTRGEN_EN register field. */
#define ALT_CLKMGR_INTRGEN_EN_WIDTH      1
/* The mask used to set the ALT_CLKMGR_INTRGEN_EN register field value. */
#define ALT_CLKMGR_INTRGEN_EN_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_INTRGEN_EN register field value. */
#define ALT_CLKMGR_INTRGEN_EN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_INTRGEN_EN register field. */
#define ALT_CLKMGR_INTRGEN_EN_RESET      0x0
/* Extracts the ALT_CLKMGR_INTRGEN_EN field value from a register. */
#define ALT_CLKMGR_INTRGEN_EN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_INTRGEN_EN register field value suitable for setting the register. */
#define ALT_CLKMGR_INTRGEN_EN_SET(value) (((value) << 0) & 0x00000001)

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
 * The struct declaration for register ALT_CLKMGR_INTRGEN.
 */
struct ALT_CLKMGR_INTRGEN_s
{
    volatile uint32_t  en :  1;  /* ALT_CLKMGR_INTRGEN_EN */
    uint32_t              : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_INTRGEN. */
typedef struct ALT_CLKMGR_INTRGEN_s  ALT_CLKMGR_INTRGEN_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_INTRGEN register. */
#define ALT_CLKMGR_INTRGEN_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_INTRGEN register from the beginning of the component. */
#define ALT_CLKMGR_INTRGEN_OFST        0xc

/*
 * Register : intrmsk
 * 
 * Interrupt Mask
 * 
 * A 0 in the curresponding bitfield will mask that particular interrupt.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                        
 * :-------|:-------|:------|:------------------------------------
 *  [0]    | RW     | 0x0   | ALT_CLKMGR_INTRMSK_MAINLOCKACHIEVED
 *  [1]    | RW     | 0x0   | ALT_CLKMGR_INTRMSK_PERLOCKACHIEVED 
 *  [2]    | RW     | 0x0   | ALT_CLKMGR_INTRMSK_MAINLOCKLOST    
 *  [3]    | RW     | 0x0   | ALT_CLKMGR_INTRMSK_PERLOCKLOST     
 *  [31:4] | ???    | 0x0   | *UNDEFINED*                        
 * 
 */
/*
 * Field : mainlockachieved
 * 
 * To mask lock achieved interrupt from main PLL
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_INTRMSK_MAINLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRMSK_MAINLOCKACHIEVED_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_INTRMSK_MAINLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRMSK_MAINLOCKACHIEVED_MSB        0
/* The width in bits of the ALT_CLKMGR_INTRMSK_MAINLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRMSK_MAINLOCKACHIEVED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_INTRMSK_MAINLOCKACHIEVED register field value. */
#define ALT_CLKMGR_INTRMSK_MAINLOCKACHIEVED_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_INTRMSK_MAINLOCKACHIEVED register field value. */
#define ALT_CLKMGR_INTRMSK_MAINLOCKACHIEVED_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_INTRMSK_MAINLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRMSK_MAINLOCKACHIEVED_RESET      0x0
/* Extracts the ALT_CLKMGR_INTRMSK_MAINLOCKACHIEVED field value from a register. */
#define ALT_CLKMGR_INTRMSK_MAINLOCKACHIEVED_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_INTRMSK_MAINLOCKACHIEVED register field value suitable for setting the register. */
#define ALT_CLKMGR_INTRMSK_MAINLOCKACHIEVED_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : perlockachieved
 * 
 * To mask lock achieved interrupt from periph PLL
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_INTRMSK_PERLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRMSK_PERLOCKACHIEVED_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_INTRMSK_PERLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRMSK_PERLOCKACHIEVED_MSB        1
/* The width in bits of the ALT_CLKMGR_INTRMSK_PERLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRMSK_PERLOCKACHIEVED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_INTRMSK_PERLOCKACHIEVED register field value. */
#define ALT_CLKMGR_INTRMSK_PERLOCKACHIEVED_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_INTRMSK_PERLOCKACHIEVED register field value. */
#define ALT_CLKMGR_INTRMSK_PERLOCKACHIEVED_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_INTRMSK_PERLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRMSK_PERLOCKACHIEVED_RESET      0x0
/* Extracts the ALT_CLKMGR_INTRMSK_PERLOCKACHIEVED field value from a register. */
#define ALT_CLKMGR_INTRMSK_PERLOCKACHIEVED_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_INTRMSK_PERLOCKACHIEVED register field value suitable for setting the register. */
#define ALT_CLKMGR_INTRMSK_PERLOCKACHIEVED_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : mainlocklost
 * 
 * To mask lock lost interrupt from main PLL
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_INTRMSK_MAINLOCKLOST register field. */
#define ALT_CLKMGR_INTRMSK_MAINLOCKLOST_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_INTRMSK_MAINLOCKLOST register field. */
#define ALT_CLKMGR_INTRMSK_MAINLOCKLOST_MSB        2
/* The width in bits of the ALT_CLKMGR_INTRMSK_MAINLOCKLOST register field. */
#define ALT_CLKMGR_INTRMSK_MAINLOCKLOST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_INTRMSK_MAINLOCKLOST register field value. */
#define ALT_CLKMGR_INTRMSK_MAINLOCKLOST_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_INTRMSK_MAINLOCKLOST register field value. */
#define ALT_CLKMGR_INTRMSK_MAINLOCKLOST_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_INTRMSK_MAINLOCKLOST register field. */
#define ALT_CLKMGR_INTRMSK_MAINLOCKLOST_RESET      0x0
/* Extracts the ALT_CLKMGR_INTRMSK_MAINLOCKLOST field value from a register. */
#define ALT_CLKMGR_INTRMSK_MAINLOCKLOST_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_INTRMSK_MAINLOCKLOST register field value suitable for setting the register. */
#define ALT_CLKMGR_INTRMSK_MAINLOCKLOST_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : perlocklost
 * 
 * To mask lock lost interrupt from periph PLL
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_INTRMSK_PERLOCKLOST register field. */
#define ALT_CLKMGR_INTRMSK_PERLOCKLOST_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_INTRMSK_PERLOCKLOST register field. */
#define ALT_CLKMGR_INTRMSK_PERLOCKLOST_MSB        3
/* The width in bits of the ALT_CLKMGR_INTRMSK_PERLOCKLOST register field. */
#define ALT_CLKMGR_INTRMSK_PERLOCKLOST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_INTRMSK_PERLOCKLOST register field value. */
#define ALT_CLKMGR_INTRMSK_PERLOCKLOST_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_INTRMSK_PERLOCKLOST register field value. */
#define ALT_CLKMGR_INTRMSK_PERLOCKLOST_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_INTRMSK_PERLOCKLOST register field. */
#define ALT_CLKMGR_INTRMSK_PERLOCKLOST_RESET      0x0
/* Extracts the ALT_CLKMGR_INTRMSK_PERLOCKLOST field value from a register. */
#define ALT_CLKMGR_INTRMSK_PERLOCKLOST_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_INTRMSK_PERLOCKLOST register field value suitable for setting the register. */
#define ALT_CLKMGR_INTRMSK_PERLOCKLOST_SET(value) (((value) << 3) & 0x00000008)

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
 * The struct declaration for register ALT_CLKMGR_INTRMSK.
 */
struct ALT_CLKMGR_INTRMSK_s
{
    volatile uint32_t  mainlockachieved :  1;  /* ALT_CLKMGR_INTRMSK_MAINLOCKACHIEVED */
    volatile uint32_t  perlockachieved  :  1;  /* ALT_CLKMGR_INTRMSK_PERLOCKACHIEVED */
    volatile uint32_t  mainlocklost     :  1;  /* ALT_CLKMGR_INTRMSK_MAINLOCKLOST */
    volatile uint32_t  perlocklost      :  1;  /* ALT_CLKMGR_INTRMSK_PERLOCKLOST */
    uint32_t                            : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_INTRMSK. */
typedef struct ALT_CLKMGR_INTRMSK_s  ALT_CLKMGR_INTRMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_INTRMSK register. */
#define ALT_CLKMGR_INTRMSK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_INTRMSK register from the beginning of the component. */
#define ALT_CLKMGR_INTRMSK_OFST        0x10

/*
 * Register : intrclr
 * 
 * Interrupt Clear.
 * 
 * Writing 1 to a particular bit will cause that interrupt to be cleared if it was
 * set.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                   
 * :-------|:-------|:------|:-------------------------------
 *  [0]    | RW     | 0x0   | main PLL lock achieved clear  
 *  [1]    | RW     | 0x0   | periph PLL lock achieved clear
 *  [2]    | RW     | 0x0   | main PLL lock lost clear      
 *  [3]    | RW     | 0x0   | periph PLL lock lost clear    
 *  [31:4] | ???    | 0x0   | *UNDEFINED*                   
 * 
 */
/*
 * Field : main PLL lock achieved clear - mainlockachieved
 * 
 * This is used to clear sticky main PLL lock achieved signal.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_INTRCLR_MAINLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRCLR_MAINLOCKACHIEVED_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_INTRCLR_MAINLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRCLR_MAINLOCKACHIEVED_MSB        0
/* The width in bits of the ALT_CLKMGR_INTRCLR_MAINLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRCLR_MAINLOCKACHIEVED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_INTRCLR_MAINLOCKACHIEVED register field value. */
#define ALT_CLKMGR_INTRCLR_MAINLOCKACHIEVED_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_INTRCLR_MAINLOCKACHIEVED register field value. */
#define ALT_CLKMGR_INTRCLR_MAINLOCKACHIEVED_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_INTRCLR_MAINLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRCLR_MAINLOCKACHIEVED_RESET      0x0
/* Extracts the ALT_CLKMGR_INTRCLR_MAINLOCKACHIEVED field value from a register. */
#define ALT_CLKMGR_INTRCLR_MAINLOCKACHIEVED_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_INTRCLR_MAINLOCKACHIEVED register field value suitable for setting the register. */
#define ALT_CLKMGR_INTRCLR_MAINLOCKACHIEVED_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : periph PLL lock achieved clear - perlockachieved
 * 
 * This is used to clear sticky periph PLL lock achieved signal.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_INTRCLR_PERLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRCLR_PERLOCKACHIEVED_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_INTRCLR_PERLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRCLR_PERLOCKACHIEVED_MSB        1
/* The width in bits of the ALT_CLKMGR_INTRCLR_PERLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRCLR_PERLOCKACHIEVED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_INTRCLR_PERLOCKACHIEVED register field value. */
#define ALT_CLKMGR_INTRCLR_PERLOCKACHIEVED_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_INTRCLR_PERLOCKACHIEVED register field value. */
#define ALT_CLKMGR_INTRCLR_PERLOCKACHIEVED_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_INTRCLR_PERLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRCLR_PERLOCKACHIEVED_RESET      0x0
/* Extracts the ALT_CLKMGR_INTRCLR_PERLOCKACHIEVED field value from a register. */
#define ALT_CLKMGR_INTRCLR_PERLOCKACHIEVED_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_INTRCLR_PERLOCKACHIEVED register field value suitable for setting the register. */
#define ALT_CLKMGR_INTRCLR_PERLOCKACHIEVED_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : main PLL lock lost clear - mainlocklost
 * 
 * This is used to clear sticky main PLL lock lost signal.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_INTRCLR_MAINLOCKLOST register field. */
#define ALT_CLKMGR_INTRCLR_MAINLOCKLOST_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_INTRCLR_MAINLOCKLOST register field. */
#define ALT_CLKMGR_INTRCLR_MAINLOCKLOST_MSB        2
/* The width in bits of the ALT_CLKMGR_INTRCLR_MAINLOCKLOST register field. */
#define ALT_CLKMGR_INTRCLR_MAINLOCKLOST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_INTRCLR_MAINLOCKLOST register field value. */
#define ALT_CLKMGR_INTRCLR_MAINLOCKLOST_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_INTRCLR_MAINLOCKLOST register field value. */
#define ALT_CLKMGR_INTRCLR_MAINLOCKLOST_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_INTRCLR_MAINLOCKLOST register field. */
#define ALT_CLKMGR_INTRCLR_MAINLOCKLOST_RESET      0x0
/* Extracts the ALT_CLKMGR_INTRCLR_MAINLOCKLOST field value from a register. */
#define ALT_CLKMGR_INTRCLR_MAINLOCKLOST_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_INTRCLR_MAINLOCKLOST register field value suitable for setting the register. */
#define ALT_CLKMGR_INTRCLR_MAINLOCKLOST_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : periph PLL lock lost clear - perlocklost
 * 
 * This is used to clear sticky periph PLL lock lost signal.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_INTRCLR_PERLOCKLOST register field. */
#define ALT_CLKMGR_INTRCLR_PERLOCKLOST_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_INTRCLR_PERLOCKLOST register field. */
#define ALT_CLKMGR_INTRCLR_PERLOCKLOST_MSB        3
/* The width in bits of the ALT_CLKMGR_INTRCLR_PERLOCKLOST register field. */
#define ALT_CLKMGR_INTRCLR_PERLOCKLOST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_INTRCLR_PERLOCKLOST register field value. */
#define ALT_CLKMGR_INTRCLR_PERLOCKLOST_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_INTRCLR_PERLOCKLOST register field value. */
#define ALT_CLKMGR_INTRCLR_PERLOCKLOST_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_INTRCLR_PERLOCKLOST register field. */
#define ALT_CLKMGR_INTRCLR_PERLOCKLOST_RESET      0x0
/* Extracts the ALT_CLKMGR_INTRCLR_PERLOCKLOST field value from a register. */
#define ALT_CLKMGR_INTRCLR_PERLOCKLOST_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_INTRCLR_PERLOCKLOST register field value suitable for setting the register. */
#define ALT_CLKMGR_INTRCLR_PERLOCKLOST_SET(value) (((value) << 3) & 0x00000008)

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
 * The struct declaration for register ALT_CLKMGR_INTRCLR.
 */
struct ALT_CLKMGR_INTRCLR_s
{
    volatile uint32_t  mainlockachieved :  1;  /* main PLL lock achieved clear */
    volatile uint32_t  perlockachieved  :  1;  /* periph PLL lock achieved clear */
    volatile uint32_t  mainlocklost     :  1;  /* main PLL lock lost clear */
    volatile uint32_t  perlocklost      :  1;  /* periph PLL lock lost clear */
    uint32_t                            : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_INTRCLR. */
typedef struct ALT_CLKMGR_INTRCLR_s  ALT_CLKMGR_INTRCLR_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_INTRCLR register. */
#define ALT_CLKMGR_INTRCLR_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_INTRCLR register from the beginning of the component. */
#define ALT_CLKMGR_INTRCLR_OFST        0x14

/*
 * Register : intrsts
 * 
 * Interrupt Pending Status after the interrupt masks.
 * 
 * Set by hardware and read by software.
 * 
 * Sticky behavior. Once set by hardware, the bit will remain set, till cleared by
 * software by writing to intrclr register.
 * 
 * The status for a particular bit would be read as 0, if the curresponding mask
 * bit is set.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                     
 * :-------|:-------|:------|:-------------------------------------------------
 *  [0]    | RW     | 0x0   | main PLL lock achieved pending after intr mask  
 *  [1]    | RW     | 0x0   | periph PLL lock achieved pending after intr mask
 *  [2]    | RW     | 0x0   | main PLL lock lost pending after intr mask      
 *  [3]    | RW     | 0x0   | periph PLL lock lost pending after intr mask    
 *  [31:4] | ???    | 0x0   | *UNDEFINED*                                     
 * 
 */
/*
 * Field : main PLL lock achieved pending after intr mask - mainlockachieved
 * 
 * Pending status for main PLL lock achieved interrupt after intr mask
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_INTRSTS_MAINLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRSTS_MAINLOCKACHIEVED_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_INTRSTS_MAINLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRSTS_MAINLOCKACHIEVED_MSB        0
/* The width in bits of the ALT_CLKMGR_INTRSTS_MAINLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRSTS_MAINLOCKACHIEVED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_INTRSTS_MAINLOCKACHIEVED register field value. */
#define ALT_CLKMGR_INTRSTS_MAINLOCKACHIEVED_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_INTRSTS_MAINLOCKACHIEVED register field value. */
#define ALT_CLKMGR_INTRSTS_MAINLOCKACHIEVED_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_INTRSTS_MAINLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRSTS_MAINLOCKACHIEVED_RESET      0x0
/* Extracts the ALT_CLKMGR_INTRSTS_MAINLOCKACHIEVED field value from a register. */
#define ALT_CLKMGR_INTRSTS_MAINLOCKACHIEVED_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_INTRSTS_MAINLOCKACHIEVED register field value suitable for setting the register. */
#define ALT_CLKMGR_INTRSTS_MAINLOCKACHIEVED_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : periph PLL lock achieved pending after intr mask - perlockachieved
 * 
 * Pending status for periph PLL lock achieved interrupt after intr mask
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_INTRSTS_PERLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRSTS_PERLOCKACHIEVED_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_INTRSTS_PERLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRSTS_PERLOCKACHIEVED_MSB        1
/* The width in bits of the ALT_CLKMGR_INTRSTS_PERLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRSTS_PERLOCKACHIEVED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_INTRSTS_PERLOCKACHIEVED register field value. */
#define ALT_CLKMGR_INTRSTS_PERLOCKACHIEVED_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_INTRSTS_PERLOCKACHIEVED register field value. */
#define ALT_CLKMGR_INTRSTS_PERLOCKACHIEVED_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_INTRSTS_PERLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRSTS_PERLOCKACHIEVED_RESET      0x0
/* Extracts the ALT_CLKMGR_INTRSTS_PERLOCKACHIEVED field value from a register. */
#define ALT_CLKMGR_INTRSTS_PERLOCKACHIEVED_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_INTRSTS_PERLOCKACHIEVED register field value suitable for setting the register. */
#define ALT_CLKMGR_INTRSTS_PERLOCKACHIEVED_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : main PLL lock lost pending after intr mask - mainlocklost
 * 
 * Pending status for main PLL lock lost interrupt after intr mask
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_INTRSTS_MAINLOCKLOST register field. */
#define ALT_CLKMGR_INTRSTS_MAINLOCKLOST_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_INTRSTS_MAINLOCKLOST register field. */
#define ALT_CLKMGR_INTRSTS_MAINLOCKLOST_MSB        2
/* The width in bits of the ALT_CLKMGR_INTRSTS_MAINLOCKLOST register field. */
#define ALT_CLKMGR_INTRSTS_MAINLOCKLOST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_INTRSTS_MAINLOCKLOST register field value. */
#define ALT_CLKMGR_INTRSTS_MAINLOCKLOST_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_INTRSTS_MAINLOCKLOST register field value. */
#define ALT_CLKMGR_INTRSTS_MAINLOCKLOST_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_INTRSTS_MAINLOCKLOST register field. */
#define ALT_CLKMGR_INTRSTS_MAINLOCKLOST_RESET      0x0
/* Extracts the ALT_CLKMGR_INTRSTS_MAINLOCKLOST field value from a register. */
#define ALT_CLKMGR_INTRSTS_MAINLOCKLOST_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_INTRSTS_MAINLOCKLOST register field value suitable for setting the register. */
#define ALT_CLKMGR_INTRSTS_MAINLOCKLOST_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : periph PLL lock lost pending after intr mask - perlocklost
 * 
 * Pending status for periph PLL lock lost interrupt after intr mask
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_INTRSTS_PERLOCKLOST register field. */
#define ALT_CLKMGR_INTRSTS_PERLOCKLOST_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_INTRSTS_PERLOCKLOST register field. */
#define ALT_CLKMGR_INTRSTS_PERLOCKLOST_MSB        3
/* The width in bits of the ALT_CLKMGR_INTRSTS_PERLOCKLOST register field. */
#define ALT_CLKMGR_INTRSTS_PERLOCKLOST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_INTRSTS_PERLOCKLOST register field value. */
#define ALT_CLKMGR_INTRSTS_PERLOCKLOST_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_INTRSTS_PERLOCKLOST register field value. */
#define ALT_CLKMGR_INTRSTS_PERLOCKLOST_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_INTRSTS_PERLOCKLOST register field. */
#define ALT_CLKMGR_INTRSTS_PERLOCKLOST_RESET      0x0
/* Extracts the ALT_CLKMGR_INTRSTS_PERLOCKLOST field value from a register. */
#define ALT_CLKMGR_INTRSTS_PERLOCKLOST_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_INTRSTS_PERLOCKLOST register field value suitable for setting the register. */
#define ALT_CLKMGR_INTRSTS_PERLOCKLOST_SET(value) (((value) << 3) & 0x00000008)

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
 * The struct declaration for register ALT_CLKMGR_INTRSTS.
 */
struct ALT_CLKMGR_INTRSTS_s
{
    volatile uint32_t  mainlockachieved :  1;  /* main PLL lock achieved pending after intr mask */
    volatile uint32_t  perlockachieved  :  1;  /* periph PLL lock achieved pending after intr mask */
    volatile uint32_t  mainlocklost     :  1;  /* main PLL lock lost pending after intr mask */
    volatile uint32_t  perlocklost      :  1;  /* periph PLL lock lost pending after intr mask */
    uint32_t                            : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_INTRSTS. */
typedef struct ALT_CLKMGR_INTRSTS_s  ALT_CLKMGR_INTRSTS_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_INTRSTS register. */
#define ALT_CLKMGR_INTRSTS_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_INTRSTS register from the beginning of the component. */
#define ALT_CLKMGR_INTRSTS_OFST        0x18

/*
 * Register : intrstk
 * 
 * Interrupt Pending Status without considering the interrupt masks.
 * 
 * Set by hardware and read by software.
 * 
 * Hardware can set the particular bit, even if the corresponding bit is masked by
 * software by intrmsk register.
 * 
 * Sticky behavior. Once set by hardware, the bit will remain set, till cleared by
 * software by writing to intrclr register.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                      
 * :-------|:-------|:------|:--------------------------------------------------
 *  [0]    | RW     | 0x0   | main PLL lock achieved pending before intr mask  
 *  [1]    | RW     | 0x0   | periph PLL lock achieved pending before intr mask
 *  [2]    | RW     | 0x0   | main PLL lock lost pending before intr mask      
 *  [3]    | RW     | 0x0   | periph PLL lock lost pending before intr mask    
 *  [31:4] | ???    | 0x0   | *UNDEFINED*                                      
 * 
 */
/*
 * Field : main PLL lock achieved pending before intr mask - mainlockachieved
 * 
 * Pending status for main PLL lock achieved interrupt before intr mask
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_INTRSTK_MAINLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRSTK_MAINLOCKACHIEVED_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_INTRSTK_MAINLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRSTK_MAINLOCKACHIEVED_MSB        0
/* The width in bits of the ALT_CLKMGR_INTRSTK_MAINLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRSTK_MAINLOCKACHIEVED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_INTRSTK_MAINLOCKACHIEVED register field value. */
#define ALT_CLKMGR_INTRSTK_MAINLOCKACHIEVED_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_INTRSTK_MAINLOCKACHIEVED register field value. */
#define ALT_CLKMGR_INTRSTK_MAINLOCKACHIEVED_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_INTRSTK_MAINLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRSTK_MAINLOCKACHIEVED_RESET      0x0
/* Extracts the ALT_CLKMGR_INTRSTK_MAINLOCKACHIEVED field value from a register. */
#define ALT_CLKMGR_INTRSTK_MAINLOCKACHIEVED_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_INTRSTK_MAINLOCKACHIEVED register field value suitable for setting the register. */
#define ALT_CLKMGR_INTRSTK_MAINLOCKACHIEVED_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : periph PLL lock achieved pending before intr mask - perlockachieved
 * 
 * Pending status for periph PLL lock achieved interrupt before intr mask
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_INTRSTK_PERLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRSTK_PERLOCKACHIEVED_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_INTRSTK_PERLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRSTK_PERLOCKACHIEVED_MSB        1
/* The width in bits of the ALT_CLKMGR_INTRSTK_PERLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRSTK_PERLOCKACHIEVED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_INTRSTK_PERLOCKACHIEVED register field value. */
#define ALT_CLKMGR_INTRSTK_PERLOCKACHIEVED_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_INTRSTK_PERLOCKACHIEVED register field value. */
#define ALT_CLKMGR_INTRSTK_PERLOCKACHIEVED_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_INTRSTK_PERLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRSTK_PERLOCKACHIEVED_RESET      0x0
/* Extracts the ALT_CLKMGR_INTRSTK_PERLOCKACHIEVED field value from a register. */
#define ALT_CLKMGR_INTRSTK_PERLOCKACHIEVED_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_INTRSTK_PERLOCKACHIEVED register field value suitable for setting the register. */
#define ALT_CLKMGR_INTRSTK_PERLOCKACHIEVED_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : main PLL lock lost pending before intr mask - mainlocklost
 * 
 * Pending status for main PLL lock lost interrupt before intr mask
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_INTRSTK_MAINLOCKLOST register field. */
#define ALT_CLKMGR_INTRSTK_MAINLOCKLOST_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_INTRSTK_MAINLOCKLOST register field. */
#define ALT_CLKMGR_INTRSTK_MAINLOCKLOST_MSB        2
/* The width in bits of the ALT_CLKMGR_INTRSTK_MAINLOCKLOST register field. */
#define ALT_CLKMGR_INTRSTK_MAINLOCKLOST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_INTRSTK_MAINLOCKLOST register field value. */
#define ALT_CLKMGR_INTRSTK_MAINLOCKLOST_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_INTRSTK_MAINLOCKLOST register field value. */
#define ALT_CLKMGR_INTRSTK_MAINLOCKLOST_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_INTRSTK_MAINLOCKLOST register field. */
#define ALT_CLKMGR_INTRSTK_MAINLOCKLOST_RESET      0x0
/* Extracts the ALT_CLKMGR_INTRSTK_MAINLOCKLOST field value from a register. */
#define ALT_CLKMGR_INTRSTK_MAINLOCKLOST_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_INTRSTK_MAINLOCKLOST register field value suitable for setting the register. */
#define ALT_CLKMGR_INTRSTK_MAINLOCKLOST_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : periph PLL lock lost pending before intr mask - perlocklost
 * 
 * Pending status for periph PLL lock lost interrupt before intr mask
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_INTRSTK_PERLOCKLOST register field. */
#define ALT_CLKMGR_INTRSTK_PERLOCKLOST_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_INTRSTK_PERLOCKLOST register field. */
#define ALT_CLKMGR_INTRSTK_PERLOCKLOST_MSB        3
/* The width in bits of the ALT_CLKMGR_INTRSTK_PERLOCKLOST register field. */
#define ALT_CLKMGR_INTRSTK_PERLOCKLOST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_INTRSTK_PERLOCKLOST register field value. */
#define ALT_CLKMGR_INTRSTK_PERLOCKLOST_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_INTRSTK_PERLOCKLOST register field value. */
#define ALT_CLKMGR_INTRSTK_PERLOCKLOST_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_INTRSTK_PERLOCKLOST register field. */
#define ALT_CLKMGR_INTRSTK_PERLOCKLOST_RESET      0x0
/* Extracts the ALT_CLKMGR_INTRSTK_PERLOCKLOST field value from a register. */
#define ALT_CLKMGR_INTRSTK_PERLOCKLOST_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_INTRSTK_PERLOCKLOST register field value suitable for setting the register. */
#define ALT_CLKMGR_INTRSTK_PERLOCKLOST_SET(value) (((value) << 3) & 0x00000008)

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
 * The struct declaration for register ALT_CLKMGR_INTRSTK.
 */
struct ALT_CLKMGR_INTRSTK_s
{
    volatile uint32_t  mainlockachieved :  1;  /* main PLL lock achieved pending before intr mask */
    volatile uint32_t  perlockachieved  :  1;  /* periph PLL lock achieved pending before intr mask */
    volatile uint32_t  mainlocklost     :  1;  /* main PLL lock lost pending before intr mask */
    volatile uint32_t  perlocklost      :  1;  /* periph PLL lock lost pending before intr mask */
    uint32_t                            : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_INTRSTK. */
typedef struct ALT_CLKMGR_INTRSTK_s  ALT_CLKMGR_INTRSTK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_INTRSTK register. */
#define ALT_CLKMGR_INTRSTK_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_INTRSTK register from the beginning of the component. */
#define ALT_CLKMGR_INTRSTK_OFST        0x1c

/*
 * Register : intrraw
 * 
 * Realtime Status of the bits which could have caused interrupt.
 * 
 * Set and clear by hardware.
 * 
 * Realtime behavior. Bits follow the current hardware status.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                 
 * :-------|:-------|:------|:-----------------------------
 *  [0]    | RW     | 0x0   | raw main pll lock achieved  
 *  [1]    | RW     | 0x0   | raw periph pll lock achieved
 *  [2]    | RW     | 0x0   | raw main pll lock lost      
 *  [3]    | RW     | 0x0   | raw periph pll lock lost    
 *  [31:4] | ???    | 0x0   | *UNDEFINED*                 
 * 
 */
/*
 * Field : raw main pll lock achieved - mainlockachieved
 * 
 * Raw signal (before masking) for main PLL lock achieved. It comed from clock
 * manager
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_INTRRAW_MAINLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRRAW_MAINLOCKACHIEVED_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_INTRRAW_MAINLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRRAW_MAINLOCKACHIEVED_MSB        0
/* The width in bits of the ALT_CLKMGR_INTRRAW_MAINLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRRAW_MAINLOCKACHIEVED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_INTRRAW_MAINLOCKACHIEVED register field value. */
#define ALT_CLKMGR_INTRRAW_MAINLOCKACHIEVED_SET_MSK    0x00000001
/* The mask used to clear the ALT_CLKMGR_INTRRAW_MAINLOCKACHIEVED register field value. */
#define ALT_CLKMGR_INTRRAW_MAINLOCKACHIEVED_CLR_MSK    0xfffffffe
/* The reset value of the ALT_CLKMGR_INTRRAW_MAINLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRRAW_MAINLOCKACHIEVED_RESET      0x0
/* Extracts the ALT_CLKMGR_INTRRAW_MAINLOCKACHIEVED field value from a register. */
#define ALT_CLKMGR_INTRRAW_MAINLOCKACHIEVED_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_CLKMGR_INTRRAW_MAINLOCKACHIEVED register field value suitable for setting the register. */
#define ALT_CLKMGR_INTRRAW_MAINLOCKACHIEVED_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : raw periph pll lock achieved - perlockachieved
 * 
 * Raw signal (before masking) for periph PLL lock achieved. It comed from clock
 * manager
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_INTRRAW_PERLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRRAW_PERLOCKACHIEVED_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_INTRRAW_PERLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRRAW_PERLOCKACHIEVED_MSB        1
/* The width in bits of the ALT_CLKMGR_INTRRAW_PERLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRRAW_PERLOCKACHIEVED_WIDTH      1
/* The mask used to set the ALT_CLKMGR_INTRRAW_PERLOCKACHIEVED register field value. */
#define ALT_CLKMGR_INTRRAW_PERLOCKACHIEVED_SET_MSK    0x00000002
/* The mask used to clear the ALT_CLKMGR_INTRRAW_PERLOCKACHIEVED register field value. */
#define ALT_CLKMGR_INTRRAW_PERLOCKACHIEVED_CLR_MSK    0xfffffffd
/* The reset value of the ALT_CLKMGR_INTRRAW_PERLOCKACHIEVED register field. */
#define ALT_CLKMGR_INTRRAW_PERLOCKACHIEVED_RESET      0x0
/* Extracts the ALT_CLKMGR_INTRRAW_PERLOCKACHIEVED field value from a register. */
#define ALT_CLKMGR_INTRRAW_PERLOCKACHIEVED_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_CLKMGR_INTRRAW_PERLOCKACHIEVED register field value suitable for setting the register. */
#define ALT_CLKMGR_INTRRAW_PERLOCKACHIEVED_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : raw main pll lock lost - mainlocklost
 * 
 * Raw signal (before masking) for main PLL lock lost. It comed from clock manager
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_INTRRAW_MAINLOCKLOST register field. */
#define ALT_CLKMGR_INTRRAW_MAINLOCKLOST_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_INTRRAW_MAINLOCKLOST register field. */
#define ALT_CLKMGR_INTRRAW_MAINLOCKLOST_MSB        2
/* The width in bits of the ALT_CLKMGR_INTRRAW_MAINLOCKLOST register field. */
#define ALT_CLKMGR_INTRRAW_MAINLOCKLOST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_INTRRAW_MAINLOCKLOST register field value. */
#define ALT_CLKMGR_INTRRAW_MAINLOCKLOST_SET_MSK    0x00000004
/* The mask used to clear the ALT_CLKMGR_INTRRAW_MAINLOCKLOST register field value. */
#define ALT_CLKMGR_INTRRAW_MAINLOCKLOST_CLR_MSK    0xfffffffb
/* The reset value of the ALT_CLKMGR_INTRRAW_MAINLOCKLOST register field. */
#define ALT_CLKMGR_INTRRAW_MAINLOCKLOST_RESET      0x0
/* Extracts the ALT_CLKMGR_INTRRAW_MAINLOCKLOST field value from a register. */
#define ALT_CLKMGR_INTRRAW_MAINLOCKLOST_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_CLKMGR_INTRRAW_MAINLOCKLOST register field value suitable for setting the register. */
#define ALT_CLKMGR_INTRRAW_MAINLOCKLOST_SET(value) (((value) << 2) & 0x00000004)

/*
 * Field : raw periph pll lock lost - perlocklost
 * 
 * Raw signal (before masking) for periph PLL lock lost. It comed from clock
 * manager
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CLKMGR_INTRRAW_PERLOCKLOST register field. */
#define ALT_CLKMGR_INTRRAW_PERLOCKLOST_LSB        3
/* The Most Significant Bit (MSB) position of the ALT_CLKMGR_INTRRAW_PERLOCKLOST register field. */
#define ALT_CLKMGR_INTRRAW_PERLOCKLOST_MSB        3
/* The width in bits of the ALT_CLKMGR_INTRRAW_PERLOCKLOST register field. */
#define ALT_CLKMGR_INTRRAW_PERLOCKLOST_WIDTH      1
/* The mask used to set the ALT_CLKMGR_INTRRAW_PERLOCKLOST register field value. */
#define ALT_CLKMGR_INTRRAW_PERLOCKLOST_SET_MSK    0x00000008
/* The mask used to clear the ALT_CLKMGR_INTRRAW_PERLOCKLOST register field value. */
#define ALT_CLKMGR_INTRRAW_PERLOCKLOST_CLR_MSK    0xfffffff7
/* The reset value of the ALT_CLKMGR_INTRRAW_PERLOCKLOST register field. */
#define ALT_CLKMGR_INTRRAW_PERLOCKLOST_RESET      0x0
/* Extracts the ALT_CLKMGR_INTRRAW_PERLOCKLOST field value from a register. */
#define ALT_CLKMGR_INTRRAW_PERLOCKLOST_GET(value) (((value) & 0x00000008) >> 3)
/* Produces a ALT_CLKMGR_INTRRAW_PERLOCKLOST register field value suitable for setting the register. */
#define ALT_CLKMGR_INTRRAW_PERLOCKLOST_SET(value) (((value) << 3) & 0x00000008)

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
 * The struct declaration for register ALT_CLKMGR_INTRRAW.
 */
struct ALT_CLKMGR_INTRRAW_s
{
    volatile uint32_t  mainlockachieved :  1;  /* raw main pll lock achieved */
    volatile uint32_t  perlockachieved  :  1;  /* raw periph pll lock achieved */
    volatile uint32_t  mainlocklost     :  1;  /* raw main pll lock lost */
    volatile uint32_t  perlocklost      :  1;  /* raw periph pll lock lost */
    uint32_t                            : 28;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CLKMGR_INTRRAW. */
typedef struct ALT_CLKMGR_INTRRAW_s  ALT_CLKMGR_INTRRAW_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_CLKMGR_INTRRAW register. */
#define ALT_CLKMGR_INTRRAW_RESET       0x00000000
/* The byte offset of the ALT_CLKMGR_INTRRAW register from the beginning of the component. */
#define ALT_CLKMGR_INTRRAW_OFST        0x20

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
 * The struct declaration for register group ALT_CLKMGR.
 */
struct ALT_CLKMGR_s
{
    volatile ALT_CLKMGR_CTRL_t        ctrl;               /* ALT_CLKMGR_CTRL */
    volatile ALT_CLKMGR_STAT_t        stat;               /* ALT_CLKMGR_STAT */
    volatile ALT_CLKMGR_TESTIOCTRL_t  testioctrl;         /* ALT_CLKMGR_TESTIOCTRL */
    volatile ALT_CLKMGR_INTRGEN_t     intrgen;            /* ALT_CLKMGR_INTRGEN */
    volatile ALT_CLKMGR_INTRMSK_t     intrmsk;            /* ALT_CLKMGR_INTRMSK */
    volatile ALT_CLKMGR_INTRCLR_t     intrclr;            /* ALT_CLKMGR_INTRCLR */
    volatile ALT_CLKMGR_INTRSTS_t     intrsts;            /* ALT_CLKMGR_INTRSTS */
    volatile ALT_CLKMGR_INTRSTK_t     intrstk;            /* ALT_CLKMGR_INTRSTK */
    volatile ALT_CLKMGR_INTRRAW_t     intrraw;            /* ALT_CLKMGR_INTRRAW */
    volatile uint32_t                 _pad_0x24_0x2c[2];  /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_CLKMGR. */
typedef struct ALT_CLKMGR_s  ALT_CLKMGR_t;
/* The struct declaration for the raw register contents of register group ALT_CLKMGR. */
struct ALT_CLKMGR_raw_s
{
    volatile uint32_t  ctrl;               /* ALT_CLKMGR_CTRL */
    volatile uint32_t  stat;               /* ALT_CLKMGR_STAT */
    volatile uint32_t  testioctrl;         /* ALT_CLKMGR_TESTIOCTRL */
    volatile uint32_t  intrgen;            /* ALT_CLKMGR_INTRGEN */
    volatile uint32_t  intrmsk;            /* ALT_CLKMGR_INTRMSK */
    volatile uint32_t  intrclr;            /* ALT_CLKMGR_INTRCLR */
    volatile uint32_t  intrsts;            /* ALT_CLKMGR_INTRSTS */
    volatile uint32_t  intrstk;            /* ALT_CLKMGR_INTRSTK */
    volatile uint32_t  intrraw;            /* ALT_CLKMGR_INTRRAW */
    volatile uint32_t  _pad_0x24_0x2c[2];  /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_CLKMGR. */
typedef struct ALT_CLKMGR_raw_s  ALT_CLKMGR_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_CLKMGR_H__ */

