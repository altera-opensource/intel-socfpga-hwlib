/******************************************************************************
*
* Copyright 2013,2017 Altera Corporation. All Rights Reserved.
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
 * $Id: //acds/main/embedded/ip/hps/armv8/hwlib/src/hwmgr/alt_clock_manager.c#1 $
 */

#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#include <socal/alt_clkmgr.h>
#include <socal/alt_clkmgr_mainpll.h>
#include <socal/alt_clkmgr_perpll.h>
#include <socal/hps.h>
#include <socal/socal.h>
#include <socal/alt_sysmgr.h>
#include <socal/alt_spim.h>
#include <hwlib.h>
#include <socal/alt_rstmgr.h>
#include <alt_clock_manager.h>

#ifndef CONFIG_EXT_OSC1_FREQ
#define CONFIG_EXT_OSC1_FREQ    25000000
#endif
#ifndef CONFIG_INTOSC_HS_DIV2
#define CONFIG_INTOSC_HS_DIV2   100000000
#endif
#ifndef CONFIG_FREE_CLK
#define CONFIG_FREE_CLK         100000000
#endif

/* link weak */
alt_freq_t osc1_clock = CONFIG_EXT_OSC1_FREQ;
alt_freq_t cb_intosc = CONFIG_INTOSC_HS_DIV2;
alt_freq_t f2s_free_clk = CONFIG_FREE_CLK;


alt_freq_t alt_clk_get_osc1_freq()
{
    return osc1_clock;
}

alt_freq_t alt_clk_get_cb_intosc_freq()
{
    return cb_intosc;
}

alt_freq_t alt_clk_get_f2s_free_freq()
{
    return f2s_free_clk;
}

/***************************************************************
                Functions to retrieve frequencies of devices
***************************************************************/
static alt_freq_t alt_clk_get_main_syn_freq(uint8_t channel)
{
    alt_freq_t Fref, Fref_eff, freq;
    alt_freq_t Frq_mul, Fsyn;
    uint32_t pllglob, fdbck, pll_reg;
    /* Note - we will assume that main_pll is locked */

    /* Step 1 - what is the clock source freq? */
    pllglob = alt_read_word(ALT_CLKMGR_MAINPLL_PLLGLOB_ADDR);
    switch(ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC_GET(pllglob))
    {
        case ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC_E_EOSC1:
            Fref = alt_clk_get_osc1_freq();
            break;
        case ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC_E_INTOSC:
            Fref = alt_clk_get_cb_intosc_freq();
            break;
        case ALT_CLKMGR_MAINPLL_PLLGLOB_PSRC_E_F2S:/* f2s_free */
            Fref = alt_clk_get_f2s_free_freq();
            break;
        default:
            return ALT_CLK_ERROR;
    }
    if(Fref == ALT_CLK_ERROR)
    { 
        return ALT_CLK_ERROR; 
    }

    /* Fref_eff    = (Fref)/(refdiv[5:0]) */
    Fref_eff = Fref / ALT_CLKMGR_MAINPLL_PLLGLOB_REFCLKDIV_GET(pllglob);
    
    fdbck = alt_read_word(ALT_CLKMGR_MAINPLL_FDBCK_ADDR);

    /* Frq_mul = {(6+ mdiv[7:0]).(fdiv[23:0])} */
    Frq_mul = (6<<24) + fdbck; /* >> 24 */
    
    /* Fsyn = Frq_mul * Fref_eff */
    Fsyn = (alt_freq_t) (Frq_mul * Fref_eff) >> 24;

    /* Fock_vpll_pr1   =    Fsyn /(pr1[7:0]) */
    if(channel == 0)
    {
        pll_reg = alt_read_word(ALT_CLKMGR_MAINPLL_PLLC0_ADDR);
        freq = Fsyn/ALT_CLKMGR_MAINPLL_PLLC0_DIV_GET(pll_reg);
    }
    else
    {
        pll_reg = alt_read_word(ALT_CLKMGR_MAINPLL_PLLC1_ADDR);
        freq = Fsyn/ALT_CLKMGR_MAINPLL_PLLC1_DIV_GET(pll_reg);
    }

    return freq;
}

static alt_freq_t alt_clk_get_per_syn_freq(uint8_t channel)
{
    alt_freq_t Fref, Fref_eff, freq;
    alt_freq_t Frq_mul, Fsyn;
    uint32_t pllglob, fdbck, pll_reg;
    /* Note - we will assume that per_pll is locked */

    /* Step 1 - what is the clock source freq? */
    pllglob = alt_read_word(ALT_CLKMGR_PERPLL_PLLGLOB_ADDR);
    switch(ALT_CLKMGR_PERPLL_PLLGLOB_PSRC_GET(pllglob))
    {
        case ALT_CLKMGR_PERPLL_PLLGLOB_PSRC_E_EOSC1:
            Fref = alt_clk_get_osc1_freq();
            break;
        case ALT_CLKMGR_PERPLL_PLLGLOB_PSRC_E_INTOSC:
            Fref = alt_clk_get_cb_intosc_freq();
            break;
        case ALT_CLKMGR_PERPLL_PLLGLOB_PSRC_E_F2S:/* f2s_free */
            Fref = alt_clk_get_f2s_free_freq();
            break;
        default:
            return ALT_CLK_ERROR;
    }
    if(Fref == ALT_CLK_ERROR)
    { 
        return ALT_CLK_ERROR;
    }

    /* Fref_eff    = (Fref)/(refdiv[5:0]) */
    Fref_eff = Fref / ALT_CLKMGR_PERPLL_PLLGLOB_REFCLKDIV_GET(pllglob);

    fdbck = alt_read_word(ALT_CLKMGR_PERPLL_FDBCK_ADDR);

    /* Frq_mul = {(6+ mdiv[7:0].fdiv[23:0])} */
    Frq_mul = (6<<24) + fdbck; /* >> 24 */

    /* Fsyn = Frq_mul * Fref_eff */
    Fsyn = (alt_freq_t) (Frq_mul * Fref_eff) >> 24;

    /* Fock_vpll_pr1   =    Fsyn /(pr1[7:0]) */
    if(channel == 0)
    {
        pll_reg = alt_read_word(ALT_CLKMGR_PERPLL_PLLC0_ADDR);
        freq = Fsyn/ ALT_CLKMGR_MAINPLL_PLLC0_DIV_GET(pll_reg);
    }
    else
    {
        pll_reg = alt_read_word(ALT_CLKMGR_PERPLL_PLLC1_ADDR);
        freq = Fsyn/ALT_CLKMGR_MAINPLL_PLLC1_DIV_GET(pll_reg);
    }

    return freq;
}

alt_freq_t alt_clk_get_mpu_freq()
{
    uint32_t mpuclk = alt_read_word(ALT_CLKMGR_MAINPLL_MPUCLK_ADDR);
    switch(ALT_CLKMGR_MAINPLL_MPUCLK_SRC_GET(mpuclk))
    {
    case ALT_CLKMGR_MAINPLL_MPUCLK_SRC_E_MAIN:
        return alt_clk_get_main_syn_freq(0);
    case ALT_CLKMGR_MAINPLL_MPUCLK_SRC_E_PERI:
        return alt_clk_get_per_syn_freq(0);
    case ALT_CLKMGR_MAINPLL_MPUCLK_SRC_E_OSC1:
        return alt_clk_get_osc1_freq();
    case ALT_CLKMGR_MAINPLL_MPUCLK_SRC_E_INTOSC:
        return alt_clk_get_cb_intosc_freq();
    case ALT_CLKMGR_MAINPLL_MPUCLK_SRC_E_FPGA:
        return alt_clk_get_f2s_free_freq();
    }
    return ALT_CLK_ERROR;
}

alt_freq_t alt_clk_get_mpu_periph_freq()
{
    return alt_clk_get_mpu_freq()/4;/* This divider should be /1 for boot clock */
}

alt_freq_t alt_clk_get_mpu_ccu_freq()
{
    return alt_clk_get_mpu_freq()/2;/* This divider should be /1 for boot clock */
}

alt_freq_t alt_clk_get_noc_freq()
{
    uint32_t mpuclk = alt_read_word(ALT_CLKMGR_MAINPLL_NOCCLK_ADDR);
   switch(ALT_CLKMGR_MAINPLL_NOCCLK_SRC_GET(mpuclk))
    {
    case ALT_CLKMGR_MAINPLL_NOCCLK_SRC_E_MAIN:
        return alt_clk_get_main_syn_freq(1);
    case ALT_CLKMGR_MAINPLL_NOCCLK_SRC_E_PERI:
        return alt_clk_get_per_syn_freq(1);
    case ALT_CLKMGR_MAINPLL_NOCCLK_SRC_E_OSC1:
        return alt_clk_get_osc1_freq();
    case ALT_CLKMGR_MAINPLL_NOCCLK_SRC_E_INTOSC:
        return alt_clk_get_cb_intosc_freq();
    case ALT_CLKMGR_MAINPLL_NOCCLK_SRC_E_FPGA:
        return alt_clk_get_f2s_free_freq();
    }
    return ALT_CLK_ERROR;
}

alt_freq_t alt_clk_get_l3_main_free_freq()
{
    return alt_clk_get_noc_freq();
}

alt_freq_t alt_clk_get_l4_sys_free_freq()
{
    return alt_clk_get_noc_freq()/4;/* This divider should be /2 for boot clock */
}

alt_freq_t alt_clk_get_l4_main_freq()
{
    uint32_t nocdiv = alt_read_word(ALT_CLKMGR_MAINPLL_NOCDIV_ADDR);
    return alt_clk_get_noc_freq()/(1 << ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK_GET(nocdiv));
}
alt_freq_t alt_clk_get_l4_mp_freq()
{
    uint32_t nocdiv = alt_read_word(ALT_CLKMGR_MAINPLL_NOCDIV_ADDR);
    return alt_clk_get_noc_freq()/(1 << ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK_GET(nocdiv));
}
alt_freq_t alt_clk_get_l4_sp_freq()
{
    uint32_t nocdiv = alt_read_word(ALT_CLKMGR_MAINPLL_NOCDIV_ADDR);
    return alt_clk_get_noc_freq()/(1 << ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK_GET(nocdiv));
}
alt_freq_t alt_clk_get_cs_at_freq()
{
    uint32_t nocdiv = alt_read_word(ALT_CLKMGR_MAINPLL_NOCDIV_ADDR);
    return alt_clk_get_noc_freq()/(1 << ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK_GET(nocdiv));
}
alt_freq_t alt_clk_get_cs_timer_freq()
{
    uint32_t nocdiv = alt_read_word(ALT_CLKMGR_MAINPLL_NOCDIV_ADDR);
    /* l4_timer_clk has same divider as cs_at_clk */
    return alt_clk_get_noc_freq()/(1 << ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK_GET(nocdiv));
}
alt_freq_t alt_clk_get_cs_pdbg_freq()
{
    alt_freq_t at_clk;
    uint32_t nocdiv = alt_read_word(ALT_CLKMGR_MAINPLL_NOCDIV_ADDR);
    at_clk = alt_clk_get_noc_freq()/(1 << ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK_GET(nocdiv));
    if(ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK_GET(nocdiv))
    {
        return at_clk/4;
    }
    return at_clk;
}

alt_freq_t alt_clk_get_cs_trace_freq()
{
    alt_freq_t at_clk;
    uint32_t nocdiv = alt_read_word(ALT_CLKMGR_MAINPLL_NOCDIV_ADDR);
    at_clk = alt_clk_get_noc_freq()/(1 << ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK_GET(nocdiv));
    return at_clk/(1 << ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK_GET(nocdiv));
}

/*
    CNTR2CLK = EMACA
    CNTR3CLK = EMACB
    CNTR4CLK = EMAC_PTP
    CNTR5CLK = GPIO
    CNTR6CLK = SDMMC
    CNTR7CLK = S2F_USER0
    CNTR8CLK = S2F_USER1
    CNTR9CLK = PSI_REF_CLK
*/
#define ALT_CLKMGR_MAINPLL_CNTRNCLK_CNT             ALT_CLKMGR_MAINPLL_CNTR4CLK_CNT
#define ALT_CLKMGR_MAINPLL_CNTRNCLK_CNT_GET         ALT_CLKMGR_MAINPLL_CNTR4CLK_CNT_GET
#define ALT_CLKMGR_PERPLL_CNTRNCLK_CNT_GET          ALT_CLKMGR_PERPLL_CNTR4CLK_CNT_GET
#define ALT_CLKMGR_PERPLL_CNTRNCLK_SRC_GET          ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_GET
#define ALT_CLKMGR_PERPLL_CNTRNCLK_SRC_E_OSC1       ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_OSC1
#define ALT_CLKMGR_PERPLL_CNTRNCLK_SRC_E_INTOSC     ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_INTOSC
#define ALT_CLKMGR_PERPLL_CNTRNCLK_SRC_E_FPGA       ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_FPGA
#define ALT_CLKMGR_PERPLL_CNTRNCLK_SRC_E_MAIN       ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_MAIN
#define ALT_CLKMGR_PERPLL_CNTRNCLK_SRC_E_PERI       ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_E_PERI

static alt_freq_t alt_clk_cntr(uint32_t cntrNclk, void *p_other_cntrNclk, uint8_t passed_var_is_main)
{
    switch(ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_GET(cntrNclk))
    {
        case ALT_CLKMGR_PERPLL_CNTRNCLK_SRC_E_MAIN:
            if(!passed_var_is_main)
            {
                cntrNclk = alt_read_word(p_other_cntrNclk);
            }
            return alt_clk_get_main_syn_freq(1)/(ALT_CLKMGR_MAINPLL_CNTRNCLK_CNT_GET(cntrNclk) + 1);
        case ALT_CLKMGR_PERPLL_CNTRNCLK_SRC_E_PERI:
            if(passed_var_is_main)
            {
                cntrNclk = alt_read_word(p_other_cntrNclk);
            }
            return alt_clk_get_per_syn_freq(1)/(ALT_CLKMGR_PERPLL_CNTRNCLK_CNT_GET(cntrNclk) + 1);
        case ALT_CLKMGR_PERPLL_CNTRNCLK_SRC_E_OSC1:
            return alt_clk_get_osc1_freq();
        case ALT_CLKMGR_PERPLL_CNTRNCLK_SRC_E_INTOSC:
            return alt_clk_get_cb_intosc_freq();
        case ALT_CLKMGR_PERPLL_CNTRNCLK_SRC_E_FPGA:
            return alt_clk_get_f2s_free_freq();
    }
    return ALT_CLK_ERROR;
}

static alt_freq_t alt_clk_emaca_freq()
{
    uint32_t per_cntr2clk = alt_read_word(ALT_CLKMGR_PERPLL_CNTR2CLK_ADDR);
    return alt_clk_cntr(per_cntr2clk, ALT_CLKMGR_MAINPLL_CNTR2CLK_ADDR, 0);
}
static alt_freq_t alt_clk_emacb_freq()
{
    uint32_t per_cntr3clk = alt_read_word(ALT_CLKMGR_PERPLL_CNTR3CLK_ADDR);
    return alt_clk_cntr(per_cntr3clk, ALT_CLKMGR_MAINPLL_CNTR3CLK_ADDR, 0);
}

alt_freq_t alt_clk_get_emac0_freq()
{
    uint32_t nocdiv = alt_read_word(ALT_CLKMGR_PERPLL_EMACCTL_ADDR);
    if(ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_E_EMACA ==  ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_GET(nocdiv))
    {
        return alt_clk_emaca_freq();
    }
    return alt_clk_emacb_freq();
}

alt_freq_t alt_clk_get_emac1_freq()
{
    uint32_t nocdiv = alt_read_word(ALT_CLKMGR_PERPLL_EMACCTL_ADDR);
    if(ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_E_EMACA ==  ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_GET(nocdiv))
    {
        return alt_clk_emaca_freq(); 
    }
    return alt_clk_emacb_freq();
}

alt_freq_t alt_clk_get_emac2_freq()
{
    uint32_t nocdiv = alt_read_word(ALT_CLKMGR_PERPLL_EMACCTL_ADDR);
    if(ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_E_EMACA ==  ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_GET(nocdiv))
    {
        return alt_clk_emaca_freq(); 
    }
    return alt_clk_emacb_freq();
}
alt_freq_t alt_clk_get_emac_ptp_freq()
{
    uint32_t per_cntr4clk = alt_read_word(ALT_CLKMGR_PERPLL_CNTR4CLK_ADDR);
    return alt_clk_cntr(per_cntr4clk, ALT_CLKMGR_MAINPLL_CNTR4CLK_ADDR, 0);
}

alt_freq_t alt_clk_get_gpio_db_freq()
{
    alt_freq_t freq;
    uint32_t divider, cntr5clk;
    divider = alt_read_word(ALT_CLKMGR_PERPLL_GPIODIV_ADDR);
    cntr5clk = alt_read_word(ALT_CLKMGR_PERPLL_CNTR5CLK_ADDR);
    freq = alt_clk_cntr(cntr5clk, ALT_CLKMGR_MAINPLL_CNTR5CLK_ADDR, 0);
    return freq/(divider+1);
}

alt_freq_t alt_clk_get_sdmmc_freq()
{
    uint32_t cntr6clk = alt_read_word(ALT_CLKMGR_PERPLL_CNTR6CLK_ADDR);
    return alt_clk_cntr(cntr6clk, ALT_CLKMGR_MAINPLL_CNTR6CLK_ADDR, 0);
}

alt_freq_t alt_clk_get_nand_freq()
{
    return alt_clk_get_mpu_periph_freq();
}

alt_freq_t alt_clk_get_usb_freq()
{
    return alt_clk_get_mpu_periph_freq();
}

alt_freq_t alt_clk_get_s2f_user0_freq()
{
    uint32_t cntr7clk = alt_read_word(ALT_CLKMGR_MAINPLL_CNTR7CLK_ADDR);
    return alt_clk_cntr(cntr7clk, ALT_CLKMGR_PERPLL_CNTR7CLK_ADDR, 1);
}

alt_freq_t alt_clk_get_s2f_user1_freq()
{
    uint32_t cntr8clk = alt_read_word(ALT_CLKMGR_PERPLL_CNTR8CLK_ADDR);
    return alt_clk_cntr(cntr8clk, ALT_CLKMGR_MAINPLL_CNTR8CLK_ADDR, 0);    
}

alt_freq_t alt_clk_get_psi_ref_freq()
{
    uint32_t cntr9clk = alt_read_word(ALT_CLKMGR_PERPLL_CNTR9CLK_ADDR);
    return alt_clk_cntr(cntr9clk, ALT_CLKMGR_MAINPLL_CNTR9CLK_ADDR, 0);    
}

alt_freq_t alt_clk_get_freq(ALT_CLK_t clk)
{
    switch (clk)
    {
    case ALT_CLK_OSC1:
        return alt_clk_get_osc1_freq();
    case ALT_CLK_F2S_FREE_CLK:
        return alt_clk_get_f2s_free_freq();
    case ALT_CLK_INTOSC:
        return alt_clk_get_cb_intosc_freq();
    case ALT_CLK_MPU:
        return alt_clk_get_mpu_freq();
    case ALT_CLK_USB:
        return alt_clk_get_usb_freq();
    case ALT_CLK_NAND:
        /* Intentional fallthrough */
    case ALT_CLK_MPU_PERIPH:
        return alt_clk_get_mpu_periph_freq();
    case ALT_CLK_MPU_CCU:
        return alt_clk_get_mpu_ccu_freq();
    case ALT_CLK_L4_MAIN:
        return alt_clk_get_l4_main_freq();
    case ALT_CLK_L4_SYS_FREE:
        return alt_clk_get_l4_sys_free_freq();
    case ALT_CLK_L4_MP:
        return alt_clk_get_l4_mp_freq();
    case ALT_CLK_L4_SP:
        return alt_clk_get_l4_sp_freq();
    case ALT_CLK_CS_TIMER:
        return alt_clk_get_cs_timer_freq();
    case ALT_CLK_CS_AT:
        return alt_clk_get_cs_at_freq();
    case ALT_CLK_CS_PDBG:
        return alt_clk_get_cs_pdbg_freq();
    case ALT_CLK_CS_TRACE:
        return alt_clk_get_cs_trace_freq();
    case ALT_CLK_S2F_USER0:
        return alt_clk_get_s2f_user0_freq();
    case ALT_CLK_S2F_USER1:
        return alt_clk_get_s2f_user1_freq();
    case ALT_CLK_EMAC0:
        return alt_clk_get_emac0_freq();
    case ALT_CLK_EMAC1:
        return alt_clk_get_emac1_freq();
    case ALT_CLK_EMAC2:
        return alt_clk_get_emac2_freq();
    case ALT_CLK_EMAC_PTP:
        return alt_clk_get_emac_ptp_freq();
    case ALT_CLK_GPIO:
        return alt_clk_get_gpio_db_freq();
    case ALT_CLK_SDMMC:
        return alt_clk_get_sdmmc_freq();
    case ALT_CLK_PSI_REF:
        return alt_clk_get_psi_ref_freq();
    default:
        return ALT_CLK_ERROR;

    }
}


ALT_STATUS_CODE alt_clk_clock_disable(ALT_CLK_t clk)
{
    switch (clk)
    {
    case ALT_CLK_MPU_PERIPH:
    case ALT_CLK_MPU:
        return alt_write_word(ALT_CLKMGR_MAINPLL_ENR_ADDR, ALT_CLKMGR_MAINPLL_EN_MPUCLKEN_SET_MSK);
    case ALT_CLK_L4_MAIN:
        return alt_write_word(ALT_CLKMGR_MAINPLL_ENR_ADDR, ALT_CLKMGR_MAINPLL_EN_L4MAINCLKEN_SET_MSK);
    case ALT_CLK_L4_MP:
        return alt_write_word(ALT_CLKMGR_MAINPLL_ENR_ADDR, ALT_CLKMGR_MAINPLL_EN_L4MPCLKEN_SET_MSK);
    case ALT_CLK_L4_SP:
        return alt_write_word(ALT_CLKMGR_MAINPLL_ENR_ADDR, ALT_CLKMGR_MAINPLL_EN_L4SPCLKEN_SET_MSK);
    case ALT_CLK_CS_PDBG:
    case ALT_CLK_CS_TRACE:
    case ALT_CLK_CS_AT:
        return alt_write_word(ALT_CLKMGR_MAINPLL_ENR_ADDR, ALT_CLKMGR_MAINPLL_EN_CSCLKEN_SET_MSK);
    case ALT_CLK_CS_TIMER:
        return alt_write_word(ALT_CLKMGR_MAINPLL_ENR_ADDR, ALT_CLKMGR_MAINPLL_EN_CSTIMERCLKEN_SET_MSK);
    case ALT_CLK_S2F_USER0:
        return alt_write_word(ALT_CLKMGR_MAINPLL_ENR_ADDR, ALT_CLKMGR_MAINPLL_EN_S2FUSER0CLKEN_SET_MSK);

    case ALT_CLK_EMAC0:
        return alt_write_word(ALT_CLKMGR_PERPLL_ENR_ADDR, ALT_CLKMGR_PERPLL_EN_EMAC0EN_SET_MSK);
    case ALT_CLK_EMAC1:
        return alt_write_word(ALT_CLKMGR_PERPLL_ENR_ADDR, ALT_CLKMGR_PERPLL_EN_EMAC1EN_SET_MSK);
    case ALT_CLK_EMAC2:
        return alt_write_word(ALT_CLKMGR_PERPLL_ENR_ADDR, ALT_CLKMGR_PERPLL_EN_EMAC2EN_SET_MSK);
    case ALT_CLK_EMAC_PTP:
        return alt_write_word(ALT_CLKMGR_PERPLL_ENR_ADDR, ALT_CLKMGR_PERPLL_EN_EMACPTPEN_SET_MSK);
    case ALT_CLK_GPIO:
        return alt_write_word(ALT_CLKMGR_PERPLL_ENR_ADDR, ALT_CLKMGR_PERPLL_EN_GPIODBEN_SET_MSK);
    case ALT_CLK_SDMMC:
        return alt_write_word(ALT_CLKMGR_PERPLL_ENR_ADDR, ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN_SET_MSK);
    case ALT_CLK_S2F_USER1:
        return alt_write_word(ALT_CLKMGR_PERPLL_ENR_ADDR, ALT_CLKMGR_PERPLL_ENR_S2FUSER1CLKEN_SET_MSK);
    case ALT_CLK_PSI_REF:
        return alt_write_word(ALT_CLKMGR_PERPLL_ENR_ADDR, ALT_CLKMGR_PERPLL_EN_PSICLKEN_SET_MSK);
    case ALT_CLK_USB:
        return alt_write_word(ALT_CLKMGR_PERPLL_ENR_ADDR, ALT_CLKMGR_PERPLL_EN_USBCLKEN_SET_MSK);
    case ALT_CLK_NAND:
        return alt_write_word(ALT_CLKMGR_PERPLL_ENR_ADDR, ALT_CLKMGR_PERPLL_EN_NANDCLKEN_SET_MSK);
    default:
        return ALT_E_BAD_ARG;
    }
}

ALT_STATUS_CODE alt_clk_clock_enable(ALT_CLK_t clk)
{
    switch (clk)
    {
    case ALT_CLK_MPU_PERIPH:
    case ALT_CLK_MPU:
        return alt_write_word(ALT_CLKMGR_MAINPLL_ENS_ADDR, ALT_CLKMGR_MAINPLL_EN_MPUCLKEN_SET_MSK);
    case ALT_CLK_L4_MAIN:
        return alt_write_word(ALT_CLKMGR_MAINPLL_ENS_ADDR, ALT_CLKMGR_MAINPLL_EN_L4MAINCLKEN_SET_MSK);
    case ALT_CLK_L4_MP:
        return alt_write_word(ALT_CLKMGR_MAINPLL_ENS_ADDR, ALT_CLKMGR_MAINPLL_EN_L4MPCLKEN_SET_MSK);
    case ALT_CLK_L4_SP:
        return alt_write_word(ALT_CLKMGR_MAINPLL_ENS_ADDR, ALT_CLKMGR_MAINPLL_EN_L4SPCLKEN_SET_MSK);
    case ALT_CLK_CS_PDBG:
    case ALT_CLK_CS_TRACE:
    case ALT_CLK_CS_AT:
        return alt_write_word(ALT_CLKMGR_MAINPLL_ENS_ADDR, ALT_CLKMGR_MAINPLL_EN_CSCLKEN_SET_MSK);
    case ALT_CLK_CS_TIMER:
        return alt_write_word(ALT_CLKMGR_MAINPLL_ENS_ADDR, ALT_CLKMGR_MAINPLL_EN_CSTIMERCLKEN_SET_MSK);
    case ALT_CLK_S2F_USER0:
        return alt_write_word(ALT_CLKMGR_MAINPLL_ENS_ADDR, ALT_CLKMGR_MAINPLL_EN_S2FUSER0CLKEN_SET_MSK);

    case ALT_CLK_EMAC0:
        return alt_write_word(ALT_CLKMGR_PERPLL_ENS_ADDR, ALT_CLKMGR_PERPLL_EN_EMAC0EN_SET_MSK);
    case ALT_CLK_EMAC1:
        return alt_write_word(ALT_CLKMGR_PERPLL_ENS_ADDR, ALT_CLKMGR_PERPLL_EN_EMAC1EN_SET_MSK);
    case ALT_CLK_EMAC2:
        return alt_write_word(ALT_CLKMGR_PERPLL_ENS_ADDR, ALT_CLKMGR_PERPLL_EN_EMAC2EN_SET_MSK);
    case ALT_CLK_EMAC_PTP:
        return alt_write_word(ALT_CLKMGR_PERPLL_ENS_ADDR, ALT_CLKMGR_PERPLL_EN_EMACPTPEN_SET_MSK);
    case ALT_CLK_GPIO:
        return alt_write_word(ALT_CLKMGR_PERPLL_ENS_ADDR, ALT_CLKMGR_PERPLL_EN_GPIODBEN_SET_MSK);
    case ALT_CLK_SDMMC:
        return alt_write_word(ALT_CLKMGR_PERPLL_ENS_ADDR, ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN_SET_MSK);
    case ALT_CLK_S2F_USER1:
        return alt_write_word(ALT_CLKMGR_PERPLL_ENS_ADDR, ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN_SET_MSK);
    case ALT_CLK_PSI_REF:
        return alt_write_word(ALT_CLKMGR_PERPLL_ENS_ADDR, ALT_CLKMGR_PERPLL_EN_PSICLKEN_SET_MSK);
    case ALT_CLK_USB:
        return alt_write_word(ALT_CLKMGR_PERPLL_ENS_ADDR, ALT_CLKMGR_PERPLL_EN_USBCLKEN_SET_MSK);
    case ALT_CLK_NAND:
        return alt_write_word(ALT_CLKMGR_PERPLL_ENS_ADDR, ALT_CLKMGR_PERPLL_EN_NANDCLKEN_SET_MSK);
    default:
        return ALT_E_BAD_ARG;
    }
}

#define alt_clk_is_enabled_helper(reg, mask) (mask & alt_read_word( reg )) ? ALT_E_TRUE : ALT_E_FALSE

ALT_STATUS_CODE alt_clk_is_enabled(ALT_CLK_t clk)
{
    switch (clk)
    {
    case ALT_CLK_MPU_PERIPH:
    case ALT_CLK_MPU:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_MAINPLL_EN_ADDR, ALT_CLKMGR_MAINPLL_EN_MPUCLKEN_SET_MSK);
    case ALT_CLK_L4_MAIN:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_MAINPLL_EN_ADDR, ALT_CLKMGR_MAINPLL_EN_L4MAINCLKEN_SET_MSK);
    case ALT_CLK_L4_MP:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_MAINPLL_EN_ADDR, ALT_CLKMGR_MAINPLL_EN_L4MPCLKEN_SET_MSK);
    case ALT_CLK_L4_SP:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_MAINPLL_EN_ADDR, ALT_CLKMGR_MAINPLL_EN_L4SPCLKEN_SET_MSK);
    case ALT_CLK_CS_PDBG:
    case ALT_CLK_CS_TRACE:
    case ALT_CLK_CS_AT:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_MAINPLL_EN_ADDR, ALT_CLKMGR_MAINPLL_EN_CSCLKEN_SET_MSK);
    case ALT_CLK_CS_TIMER:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_MAINPLL_EN_ADDR, ALT_CLKMGR_MAINPLL_EN_CSTIMERCLKEN_SET_MSK);
    case ALT_CLK_S2F_USER0:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_MAINPLL_EN_ADDR, ALT_CLKMGR_MAINPLL_EN_S2FUSER0CLKEN_SET_MSK);

    case ALT_CLK_EMAC0:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_PERPLL_EN_ADDR, ALT_CLKMGR_PERPLL_EN_EMAC0EN_SET_MSK);
    case ALT_CLK_EMAC1:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_PERPLL_EN_ADDR, ALT_CLKMGR_PERPLL_EN_EMAC1EN_SET_MSK);
    case ALT_CLK_EMAC2:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_PERPLL_EN_ADDR, ALT_CLKMGR_PERPLL_EN_EMAC2EN_SET_MSK);
    case ALT_CLK_EMAC_PTP:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_PERPLL_EN_ADDR, ALT_CLKMGR_PERPLL_EN_EMACPTPEN_SET_MSK);
    case ALT_CLK_GPIO:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_PERPLL_EN_ADDR, ALT_CLKMGR_PERPLL_EN_GPIODBEN_SET_MSK);
    case ALT_CLK_SDMMC:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_PERPLL_EN_ADDR, ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN_SET_MSK);
    case ALT_CLK_S2F_USER1:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_PERPLL_EN_ADDR, ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN_SET_MSK);
    case ALT_CLK_PSI_REF:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_PERPLL_EN_ADDR, ALT_CLKMGR_PERPLL_EN_PSICLKEN_SET_MSK);
    case ALT_CLK_USB:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_PERPLL_EN_ADDR, ALT_CLKMGR_PERPLL_EN_USBCLKEN_SET_MSK);
    case ALT_CLK_NAND:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_PERPLL_EN_ADDR, ALT_CLKMGR_PERPLL_EN_NANDCLKEN_SET_MSK);
    default:
        return ALT_E_BAD_ARG;
    }
}
