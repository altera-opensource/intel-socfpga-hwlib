/******************************************************************************
*
* Copyright 2013 Altera Corporation. All Rights Reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* 1. Redistributions of source code must retain the above copyright notice,
* this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright notice,
* this list of conditions and the following disclaimer in the documentation
* and/or other materials provided with the distribution.
*
* 3. Neither the name of the copyright holder nor the names of its contributors
* may be used to endorse or promote products derived from this software without
* specific prior written permission.
* 
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
* ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
* CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.
*
******************************************************************************/

/*
 * $Id: //acds/rel/20.1std/embedded/ip/hps/altera_hps/hwlib/src/hwmgr/soc_cv_av/alt_clock_manager_init.c#1 $
 */

#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#include <socal/hps.h>
#include <socal/socal.h>
#include <socal/alt_sysmgr.h>
#include <hwlib.h>
#include <alt_clock_manager.h>
#include <alt_mpu_registers.h>
#include <alt_printf.h>
#include <alt_timers.h>
#include "alt_config.h"
#include "pll_config.h"

/* NOTE: To enable debugging output, delete the next line and uncomment the
   line after. */
#define dprintf null_printf
/* #define dprintf(fmt, ...) alt_printf(fmt, ##__VA_ARGS__) */


#define CLKMGR_PLL_VCO_RESET_VALUE  0x8001000d
#define CLKMGR_PLL_VCO_REGEXTSEL_MASK 0x80000000
#define CLKMGR_PERPLL_SRC_RESET_VALUE   0x00000015
#define CLKMGR_MAINPLL_L4SRC_RESET_VALUE    0x00000000
#define ALT_CLKMGR_ALTERAGRP_MPUCLK_ADDR        ALT_CAST(void *, (ALT_CAST(char *, ALT_CLKMGR_ADDR) + 0xe0))
#define ALT_CLKMGR_ALTERAGRP_MAINCLK_ADDR       ALT_CAST(void *, (ALT_CAST(char *, ALT_CLKMGR_ADDR) + 0xe4))

/*********************************************************************************
// PLL-init from baremetal_fw
// Setup clocks while making no assumptions of the previous state of the clocks.
// ---   Start by being paranoid and gate all sw managed clocks
// ---   Put all plls in bypass
// ---   Put all plls VCO registers back to reset value (bgpwr dwn).
// ---   Put peripheral and main pll src to reset value to avoid glitch.
// ---   Delay 5 us.
// ---   Deassert bg pwr dn and set numerator and denominator
// ---   Start 7 us timer.
// ---   set internal dividers
// ---   Wait for 7 us timer.
// ---   Enable plls
// ---   Set external dividers while plls are locking
// ---   Wait for pll lock
// ---   Assert/deassert outreset all.
// ---   Take all pll's out of bypass
// ---   Clear safe mode
// ---   set source main and peripheral clocks
// ---   Ungate clocks
*********************************************************************************/

ALT_STATUS_CODE alt_clk_clkmgr_init(void) 
{
    uint32_t ret;
    volatile uint32_t temp;
    volatile uint32_t retry;
    volatile uint32_t start_count;

 	 uint32_t mainvco;
    uint32_t periphvco;
    ret = ALT_E_SUCCESS;

    /* fogbugz 61158 - we need to disable nandclk
    / and then do another apb access before disabling
    / gatting off the rest of the periperal clocks. */

    alt_write_word(ALT_CLKMGR_PERPLL_EN_ADDR,
            (ALT_CLKMGR_PERPLL_EN_NANDCLK_CLR_MSK & alt_read_word(ALT_CLKMGR_PERPLL_EN_ADDR)));

    /* DO NOT GATE OFF DEBUG CLOCKS */
    alt_write_word(ALT_CLKMGR_MAINPLL_EN_ADDR,
            ALT_CLKMGR_MAINPLL_EN_DBGTMRCLK_SET_MSK |
            ALT_CLKMGR_MAINPLL_EN_DBGTRACECLK_SET_MSK |
            ALT_CLKMGR_MAINPLL_EN_DBGCLK_SET_MSK |
            ALT_CLKMGR_MAINPLL_EN_DBGATCLK_SET_MSK |
            ALT_CLKMGR_MAINPLL_EN_S2FUSER0CLK_SET_MSK |
            ALT_CLKMGR_MAINPLL_EN_L4MPCLK_SET_MSK);

    alt_write_word(ALT_CLKMGR_SDRPLL_EN_ADDR, 0);

    /* Put all plls in bypass */
    alt_write_word(ALT_CLKMGR_BYPASS_ADDR, 0 |
            ALT_CLKMGR_BYPASS_PERPLLSRC_SET(ALT_CLKMGR_BYPASS_PERPLLSRC_E_SELECT_EOSC1) |
            ALT_CLKMGR_BYPASS_PERPLL_SET_MSK |
            ALT_CLKMGR_BYPASS_SDRPLLSRC_SET(ALT_CLKMGR_BYPASS_SDRPLLSRC_E_SELECT_EOSC1) |
            ALT_CLKMGR_BYPASS_SDRPLL_SET_MSK |
            ALT_CLKMGR_BYPASS_MAINPLL_SET_MSK);

    /* function to poll in the fsm busy bit
    / after bypass reg access wait for fsm */
    temp = 0;
    do {
        temp = (alt_read_word(ALT_CLKMGR_STAT_ADDR) & ALT_CLKMGR_STAT_BUSY_SET_MSK);
    } while (temp);

    /* Put all plls VCO registers back to reset value.
    / Some code might have messed with them. */
    alt_write_word(ALT_CLKMGR_MAINPLL_VCO_ADDR, CLKMGR_PLL_VCO_RESET_VALUE & ~CLKMGR_PLL_VCO_REGEXTSEL_MASK);
    alt_write_word(ALT_CLKMGR_PERPLL_VCO_ADDR, CLKMGR_PLL_VCO_RESET_VALUE & ~CLKMGR_PLL_VCO_REGEXTSEL_MASK);
    alt_write_word(ALT_CLKMGR_SDRPLL_VCO_ADDR, CLKMGR_PLL_VCO_RESET_VALUE & ~CLKMGR_PLL_VCO_REGEXTSEL_MASK);

    /* Fogbugz 60434 - the clocks to the flash devices and the L4_MAIN clocks can glitch
    / when coming out of safe mode if their source values are different from their reset
    / value.  So the trick it to put them back to their reset state, and change input
    / after exiting safe mode but before ungating the clocks. */
    alt_write_word(ALT_CLKMGR_PERPLL_SRC_ADDR, CLKMGR_PERPLL_SRC_RESET_VALUE);
    alt_write_word(ALT_CLKMGR_MAINPLL_L4SRC_ADDR, CLKMGR_MAINPLL_L4SRC_RESET_VALUE);

    /* read back for the required 5 us delay. */
    temp = alt_read_word(ALT_CLKMGR_MAINPLL_VCO_ADDR);
    temp = alt_read_word(ALT_CLKMGR_PERPLL_VCO_ADDR);
    temp = alt_read_word(ALT_CLKMGR_SDRPLL_VCO_ADDR);

    /* We made sure bgpwr down was assert for 5 us. Now deassert BG PWR DN
    / and set VCO reg with values from passdown file. */
    alt_write_word(ALT_CLKMGR_MAINPLL_VCO_ADDR, 0 |
            ALT_CLKMGR_MAINPLL_VCO_DENOM_SET(CONFIG_HPS_MAINPLLGRP_VCO_DENOM) |
            ALT_CLKMGR_MAINPLL_VCO_NUMER_SET(CONFIG_HPS_MAINPLLGRP_VCO_NUMER) |
            ALT_CLKMGR_MAINPLL_VCO_PWRDN_SET(0) |
            ALT_CLKMGR_MAINPLL_VCO_EN_SET(0) |
            ALT_CLKMGR_MAINPLL_VCO_BGPWRDN_SET(0) |
            ALT_CLKMGR_MAINPLL_VCO_REGEXTSEL_SET_MSK);

    alt_write_word(ALT_CLKMGR_PERPLL_VCO_ADDR, 0 |
            ALT_CLKMGR_PERPLL_VCO_DENOM_SET(CONFIG_HPS_PERPLLGRP_VCO_DENOM) |
            ALT_CLKMGR_PERPLL_VCO_NUMER_SET(CONFIG_HPS_PERPLLGRP_VCO_NUMER) |
            ALT_CLKMGR_PERPLL_VCO_PSRC_SET(CONFIG_HPS_PERPLLGRP_VCO_PSRC) |
            ALT_CLKMGR_PERPLL_VCO_PWRDN_SET(0) |
            ALT_CLKMGR_PERPLL_VCO_EN_SET(0) |
            ALT_CLKMGR_PERPLL_VCO_BGPWRDN_SET(0) |
            ALT_CLKMGR_PERPLL_VCO_REGEXTSEL_SET_MSK);

    alt_write_word(ALT_CLKMGR_SDRPLL_VCO_ADDR, 0 |
            ALT_CLKMGR_SDRPLL_VCO_DENOM_SET(CONFIG_HPS_SDRPLLGRP_VCO_DENOM) |
            ALT_CLKMGR_SDRPLL_VCO_NUMER_SET(CONFIG_HPS_SDRPLLGRP_VCO_NUMER) |
            ALT_CLKMGR_SDRPLL_VCO_SSRC_SET(CONFIG_HPS_SDRPLLGRP_VCO_SSRC) |
            ALT_CLKMGR_SDRPLL_VCO_OUTRSTALL_SET(0) |
            ALT_CLKMGR_SDRPLL_VCO_OUTRST_SET(0) |
            ALT_CLKMGR_SDRPLL_VCO_PWRDN_SET(0) |
            ALT_CLKMGR_SDRPLL_VCO_EN_SET(0) |
            ALT_CLKMGR_SDRPLL_VCO_BGPWRDN_SET(0) |
            ALT_CLKMGR_SDRPLL_VCO_REGEXTSEL_SET_MSK);

    /* Time starts here
    / must wait 7 us from BGPWRDN_SET(0) to VCO_ENABLE_SET(1) */
    start_count = alt_gpt_counter_get(ALT_GPT_OSC1_TMR0);

    /* main mpu cnt */
    alt_write_word(ALT_CLKMGR_MAINPLL_MPUCLK_ADDR,
            ALT_CLKMGR_MAINPLL_MPUCLK_CNT_SET(CONFIG_HPS_MAINPLLGRP_MPUCLK_CNT));

    /* main main clock cnt */
    alt_write_word(ALT_CLKMGR_MAINPLL_MAINCLK_ADDR,
            ALT_CLKMGR_MAINPLL_MAINCLK_CNT_SET(CONFIG_HPS_MAINPLLGRP_MAINCLK_CNT));


#ifdef CONFIG_HPS_ALTERAGRP_MPUCLK
     /* re-configuring fixed divider for faster MPU clock */
     alt_write_word(ALT_CLKMGR_ALTERAGRP_MPUCLK_ADDR, CONFIG_HPS_ALTERAGRP_MPUCLK);
#endif

    /* main for dbg cnt */
    alt_write_word(ALT_CLKMGR_MAINPLL_DBGATCLK_ADDR,
            ALT_CLKMGR_MAINPLL_DBGATCLK_CNT_SET(CONFIG_HPS_MAINPLLGRP_DBGATCLK_CNT));

#ifdef CONFIG_HPS_ALTERAGRP_MAINCLK
     /* re-configuring the fixed divider due to different main VCO */
     alt_write_word(ALT_CLKMGR_ALTERAGRP_MAINCLK_ADDR, CONFIG_HPS_ALTERAGRP_MAINCLK);
#endif

    /* main for cfgs2fuser0clk cnt */
    alt_write_word(ALT_CLKMGR_MAINPLL_CFGS2FUSER0CLK_ADDR,
            ALT_CLKMGR_MAINPLL_CFGS2FUSER0CLK_CNT_SET(CONFIG_HPS_MAINPLLGRP_CFGS2FUSER0CLK_CNT));

    /* Peri emac0 cnt */
    alt_write_word(ALT_CLKMGR_PERPLL_EMAC0CLK_ADDR,
            ALT_CLKMGR_PERPLL_EMAC0CLK_CNT_SET(CONFIG_HPS_PERPLLGRP_EMAC0CLK_CNT));

    /* Peri emac1 cnt */
    alt_write_word(ALT_CLKMGR_PERPLL_EMAC1CLK_ADDR,
                ALT_CLKMGR_PERPLL_EMAC1CLK_CNT_SET(CONFIG_HPS_PERPLLGRP_EMAC1CLK_CNT));

    /* Peri QSPI div */
    alt_write_word(ALT_CLKMGR_MAINPLL_MAINQSPICLK_ADDR,
            ALT_CLKMGR_MAINPLL_MAINQSPICLK_CNT_SET(CONFIG_HPS_MAINPLLGRP_MAINQSPICLK_CNT));

    /* Peri SDMMC div */
    alt_write_word(ALT_CLKMGR_MAINPLL_MAINNANDSDMMCCLK_ADDR,
            ALT_CLKMGR_MAINPLL_MAINNANDSDMMCCLK_CNT_SET(CONFIG_HPS_MAINPLLGRP_MAINNANDSDMMCCLK_CNT));

    alt_write_word(ALT_CLKMGR_PERPLL_PERQSPICLK_ADDR,
            ALT_CLKMGR_PERPLL_PERQSPICLK_CNT_SET(CONFIG_HPS_PERPLLGRP_PERQSPICLK_CNT));

    /* Peri pernandsdmmcclk cnt */
    alt_write_word(ALT_CLKMGR_PERPLL_PERNANDSDMMCCLK_ADDR,
            ALT_CLKMGR_PERPLL_PERNANDSDMMCCLK_CNT_SET(CONFIG_HPS_PERPLLGRP_PERNANDSDMMCCLK_CNT));

    /* Peri perbaseclk cnt */
    alt_write_word(ALT_CLKMGR_PERPLL_PERBASECLK_ADDR,
            ALT_CLKMGR_PERPLL_PERBASECLK_CNT_SET(CONFIG_HPS_PERPLLGRP_PERBASECLK_CNT));

    /* Peri s2fuser1clk cnt */
    alt_write_word(ALT_CLKMGR_PERPLL_S2FUSER1CLK_ADDR,
            ALT_CLKMGR_PERPLL_S2FUSER1CLK_CNT_SET(CONFIG_HPS_PERPLLGRP_S2FUSER1CLK_CNT));

    /* 7 us must have elapsed before we can enable vco's */
    alt_gpt_delay_ns(ALT_GPT_OSC1_TMR0, start_count, 7000);

    /* Enable vco's
    / main pll vco is typically 800 MHz. */
    alt_write_word(ALT_CLKMGR_MAINPLL_VCO_ADDR, 0 |
                ALT_CLKMGR_MAINPLL_VCO_DENOM_SET(CONFIG_HPS_MAINPLLGRP_VCO_DENOM) |
                ALT_CLKMGR_MAINPLL_VCO_NUMER_SET(CONFIG_HPS_MAINPLLGRP_VCO_NUMER) |
                ALT_CLKMGR_MAINPLL_VCO_PWRDN_SET(0) |
                ALT_CLKMGR_MAINPLL_VCO_EN_SET(1) |
                ALT_CLKMGR_MAINPLL_VCO_BGPWRDN_SET(0));

    /* periferal pll typically 1000 MHz. */
    alt_write_word(ALT_CLKMGR_PERPLL_VCO_ADDR, 0 |
                ALT_CLKMGR_PERPLL_VCO_DENOM_SET(CONFIG_HPS_PERPLLGRP_VCO_DENOM) |
                ALT_CLKMGR_PERPLL_VCO_NUMER_SET(CONFIG_HPS_PERPLLGRP_VCO_NUMER) |
                ALT_CLKMGR_PERPLL_VCO_PSRC_SET(CONFIG_HPS_PERPLLGRP_VCO_PSRC) |
                ALT_CLKMGR_PERPLL_VCO_PWRDN_SET(0) |
                ALT_CLKMGR_PERPLL_VCO_EN_SET(1) |
                ALT_CLKMGR_PERPLL_VCO_BGPWRDN_SET(0));

    /* sdram pll vco 1062.5 MHz. */
    alt_write_word(ALT_CLKMGR_SDRPLL_VCO_ADDR, 0 |
                ALT_CLKMGR_SDRPLL_VCO_DENOM_SET(CONFIG_HPS_SDRPLLGRP_VCO_DENOM) |
                ALT_CLKMGR_SDRPLL_VCO_NUMER_SET(CONFIG_HPS_SDRPLLGRP_VCO_NUMER) |
                ALT_CLKMGR_SDRPLL_VCO_SSRC_SET(CONFIG_HPS_SDRPLLGRP_VCO_SSRC) |
                ALT_CLKMGR_SDRPLL_VCO_OUTRSTALL_SET(0) |
                ALT_CLKMGR_SDRPLL_VCO_OUTRST_SET(0) |
                ALT_CLKMGR_SDRPLL_VCO_PWRDN_SET(0) |
                ALT_CLKMGR_SDRPLL_VCO_EN_SET(1) |
                ALT_CLKMGR_SDRPLL_VCO_BGPWRDN_SET(0));

    /* setup dividers while plls are locking
    / set L3 MP and L3 SP to divide by 2 from main_clk,
    / down to 400 MHz from the 800 MHz main_clk */
    alt_write_word(ALT_CLKMGR_MAINPLL_MAINDIV_ADDR,
            ALT_CLKMGR_MAINPLL_MAINDIV_L3MPCLK_SET(CONFIG_HPS_MAINPLLGRP_MAINDIV_L3MPCLK) |
            ALT_CLKMGR_MAINPLL_MAINDIV_L3SPCLK_SET(CONFIG_HPS_MAINPLLGRP_MAINDIV_L3SPCLK) |
            ALT_CLKMGR_MAINPLL_MAINDIV_L4MPCLK_SET(CONFIG_HPS_MAINPLLGRP_MAINDIV_L4MPCLK) |
            ALT_CLKMGR_MAINPLL_MAINDIV_L4SPCLK_SET(CONFIG_HPS_MAINPLLGRP_MAINDIV_L4SPCLK));

    alt_write_word(ALT_CLKMGR_MAINPLL_DBGDIV_ADDR,
            ALT_CLKMGR_MAINPLL_DBGDIV_DBGATCLK_SET(CONFIG_HPS_MAINPLLGRP_DBGDIV_DBGATCLK) |
            ALT_CLKMGR_MAINPLL_DBGDIV_DBGCLK_SET(CONFIG_HPS_MAINPLLGRP_DBGDIV_DBGCLK));

    alt_write_word(ALT_CLKMGR_MAINPLL_TRACEDIV_ADDR,
            ALT_CLKMGR_MAINPLL_TRACEDIV_TRACECLK_SET(CONFIG_HPS_MAINPLLGRP_TRACEDIV_TRACECLK));

    /* set L4 MP/SP, can0, and can1, etc.. div from perif-base_clock */
    alt_write_word(ALT_CLKMGR_PERPLL_DIV_ADDR,
            ALT_CLKMGR_PERPLL_DIV_USBCLK_SET(CONFIG_HPS_PERPLLGRP_DIV_USBCLK) |
            ALT_CLKMGR_PERPLL_DIV_SPIMCLK_SET(CONFIG_HPS_PERPLLGRP_DIV_SPIMCLK) |
            ALT_CLKMGR_PERPLL_DIV_CAN0CLK_SET(CONFIG_HPS_PERPLLGRP_DIV_CAN0CLK) |
            ALT_CLKMGR_PERPLL_DIV_CAN1CLK_SET(CONFIG_HPS_PERPLLGRP_DIV_CAN1CLK));

    alt_write_word(ALT_CLKMGR_PERPLL_GPIODIV_ADDR,
            ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK_SET(CONFIG_HPS_PERPLLGRP_GPIODIV_GPIODBCLK));

#define LOCKED_MASK \
    (ALT_CLKMGR_INTER_SDRPLLLOCKED_SET_MSK  | \
    ALT_CLKMGR_INTER_PERPLLLOCKED_SET_MSK  | \
    ALT_CLKMGR_INTER_MAINPLLLOCKED_SET_MSK)

    /* wait for 10 consecutive lock reads */
    temp = 0;
    retry = 0;
    do {
        temp = alt_read_word(ALT_CLKMGR_INTER_ADDR) & LOCKED_MASK;
        if (temp == LOCKED_MASK){
            retry++;
        }
        else {
            retry = 0;
        }
        if (retry > 9){
            break;
        }
    } while (1);

    /* write the sdram clock counters before toggling outreset all (without phase info) */
    alt_write_word(ALT_CLKMGR_SDRPLL_DDRDQSCLK_ADDR,
            ALT_CLKMGR_SDRPLL_DDRDQSCLK_CNT_SET(CONFIG_HPS_SDRPLLGRP_DDRDQSCLK_CNT));

    alt_write_word(ALT_CLKMGR_SDRPLL_DDR2XDQSCLK_ADDR,
            ALT_CLKMGR_SDRPLL_DDR2XDQSCLK_CNT_SET(CONFIG_HPS_SDRPLLGRP_DDR2XDQSCLK_CNT));

    alt_write_word(ALT_CLKMGR_SDRPLL_DDRDQCLK_ADDR,
            ALT_CLKMGR_SDRPLL_DDRDQCLK_CNT_SET(CONFIG_HPS_SDRPLLGRP_DDRDQCLK_CNT));

    alt_write_word(ALT_CLKMGR_SDRPLL_S2FUSER2CLK_ADDR,
            ALT_CLKMGR_SDRPLL_S2FUSER2CLK_CNT_SET(CONFIG_HPS_SDRPLLGRP_S2FUSER2CLK_CNT));

    /* after locking, but before taking out of bypass assert/deassert outresetall */
    mainvco = alt_read_word(ALT_CLKMGR_MAINPLL_VCO_ADDR);

    /* assert main outresetall */
    alt_write_word(ALT_CLKMGR_MAINPLL_VCO_ADDR, mainvco | ALT_CLKMGR_MAINPLL_VCO_OUTRSTALL_SET_MSK);

    periphvco = alt_read_word(ALT_CLKMGR_PERPLL_VCO_ADDR);

    /* assert pheriph outresetall */
    alt_write_word(ALT_CLKMGR_PERPLL_VCO_ADDR, periphvco | ALT_CLKMGR_PERPLL_VCO_OUTRSTALL_SET_MSK);

    /* assert sdram outresetall */
    alt_setbits_word(ALT_CLKMGR_SDRPLL_VCO_ADDR, ALT_CLKMGR_SDRPLL_VCO_OUTRSTALL_SET_MSK);

    /* deassert main outresetall */
    alt_write_word(ALT_CLKMGR_MAINPLL_VCO_ADDR, mainvco & ~ALT_CLKMGR_MAINPLL_VCO_OUTRSTALL_SET_MSK);

    /* deassert pheriph outresetall */
    alt_write_word(ALT_CLKMGR_PERPLL_VCO_ADDR, periphvco & ~ALT_CLKMGR_PERPLL_VCO_OUTRSTALL_SET_MSK);

    /* deassert sdram outresetall */
    alt_clrbits_word(ALT_CLKMGR_SDRPLL_VCO_ADDR, ALT_CLKMGR_SDRPLL_VCO_OUTRSTALL_SET_MSK);

    /* now that we've toggled outreset all, all the clocks are aligned nicely; so we can change any phase.
    / re-write the sdram clock counters with phase info */
    alt_write_word(ALT_CLKMGR_SDRPLL_DDRDQSCLK_ADDR,
            ALT_CLKMGR_SDRPLL_DDRDQSCLK_PHASE_SET(CONFIG_HPS_SDRPLLGRP_DDRDQSCLK_PHASE) |
            ALT_CLKMGR_SDRPLL_DDRDQSCLK_CNT_SET(CONFIG_HPS_SDRPLLGRP_DDRDQSCLK_CNT));

    /* SDRAM DDR2XDQSCLK 1062.5 MHz */
    alt_write_word(ALT_CLKMGR_SDRPLL_DDR2XDQSCLK_ADDR,
            ALT_CLKMGR_SDRPLL_DDR2XDQSCLK_PHASE_SET(CONFIG_HPS_SDRPLLGRP_DDR2XDQSCLK_PHASE) |
            ALT_CLKMGR_SDRPLL_DDR2XDQSCLK_CNT_SET(CONFIG_HPS_SDRPLLGRP_DDR2XDQSCLK_CNT));

    alt_write_word(ALT_CLKMGR_SDRPLL_DDRDQCLK_ADDR,
            ALT_CLKMGR_SDRPLL_DDRDQCLK_PHASE_SET(CONFIG_HPS_SDRPLLGRP_DDRDQCLK_PHASE) |
            ALT_CLKMGR_SDRPLL_DDRDQCLK_CNT_SET(CONFIG_HPS_SDRPLLGRP_DDRDQCLK_CNT));

    /* divide by six to get 177.08 MHz */
    alt_write_word(ALT_CLKMGR_SDRPLL_S2FUSER2CLK_ADDR,
            ALT_CLKMGR_SDRPLL_S2FUSER2CLK_PHASE_SET(CONFIG_HPS_SDRPLLGRP_S2FUSER2CLK_PHASE) |
            ALT_CLKMGR_SDRPLL_S2FUSER2CLK_CNT_SET(CONFIG_HPS_SDRPLLGRP_S2FUSER2CLK_CNT));


    /* Take all three PLLs out of bypass when safe mode is cleared. */
    alt_write_word(ALT_CLKMGR_BYPASS_ADDR, 0 |
            ALT_CLKMGR_BYPASS_PERPLLSRC_SET(ALT_CLKMGR_BYPASS_PERPLLSRC_E_SELECT_EOSC1) |
            ALT_CLKMGR_BYPASS_PERPLL_SET(0) |
            ALT_CLKMGR_BYPASS_SDRPLLSRC_SET(ALT_CLKMGR_BYPASS_SDRPLLSRC_E_SELECT_EOSC1) |
            ALT_CLKMGR_BYPASS_SDRPLL_SET(0) |
            ALT_CLKMGR_BYPASS_MAINPLL_SET(0));

    /* after bypass reg access wait for fsm */
    temp = 0;
    do {
        temp = (alt_read_word(ALT_CLKMGR_STAT_ADDR) & ALT_CLKMGR_STAT_BUSY_SET_MSK);
    } while (temp);

    /* clear safe mode.. W1C write 1 to clear */
    alt_setbits_word(ALT_CLKMGR_CTL_ADDR, ALT_CLKMGR_CTL_SAFEMOD_SET_MSK);
    temp = 0;
    do {
        temp = (alt_read_word(ALT_CLKMGR_STAT_ADDR) & ALT_CLKMGR_STAT_BUSY_SET_MSK);
    } while (temp);

    /* now that safe mode is clear with clocks gated
    / it safe to change the source mux for the flashes the the L4_MAIN */
    alt_write_word(ALT_CLKMGR_PERPLL_SRC_ADDR,
            ALT_CLKMGR_PERPLL_SRC_QSPI_SET(CONFIG_HPS_PERPLLGRP_SRC_QSPI) |
            ALT_CLKMGR_PERPLL_SRC_NAND_SET(CONFIG_HPS_PERPLLGRP_SRC_NAND) |
            ALT_CLKMGR_PERPLL_SRC_SDMMC_SET(CONFIG_HPS_PERPLLGRP_SRC_SDMMC));
    alt_write_word(ALT_CLKMGR_MAINPLL_L4SRC_ADDR,
            ALT_CLKMGR_MAINPLL_L4SRC_L4MP_SET(CONFIG_HPS_MAINPLLGRP_L4SRC_L4MP) |
            ALT_CLKMGR_MAINPLL_L4SRC_L4SP_SET(CONFIG_HPS_MAINPLLGRP_L4SRC_L4SP));

    /* Now ungate non-hw-managed clocks */
    alt_write_word(ALT_CLKMGR_MAINPLL_EN_ADDR, ~0);
    alt_write_word(ALT_CLKMGR_PERPLL_EN_ADDR, ~0);
    alt_write_word(ALT_CLKMGR_SDRPLL_EN_ADDR, ~0);

    return ret;
}

