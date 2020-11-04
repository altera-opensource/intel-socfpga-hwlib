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
 * $Id: //acds/rel/20.1/embedded/ip/hps/altera_hps/hwlib/src/hwmgr/soc_a10/alt_clock_manager.c#1 $
 */

#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#include <socal/alt_clkmgr.h>
#include <socal/hps.h>
#include <socal/socal.h>
#include <socal/alt_sysmgr.h>
#include <socal/alt_spim.h>
#include <hwlib.h>
#include <socal/alt_rstmgr.h>
#include <alt_clock_manager.h>
#include <alt_mpu_registers.h>
#include <alt_printf.h>
#include <alt_timers.h>
#include "alt_config.h"


#define ALT_CLKMGR_MPUCLK_OFST        0x0
#define ALT_CLKMGR_MPUCLK_ADDR  ALT_CAST(void *, (ALT_CAST(char *, ALT_CLKMGR_ALTERA_ADDR) + ALT_CLKMGR_MPUCLK_OFST))

#ifdef DEBUG_ALT_CLOCK_MANAGER
  #define dprintf printf
#else
  #define dprintf null_printf
#endif

#ifndef CONFIG_EXT_OSC1_FREQ
#define CONFIG_EXT_OSC1_FREQ    25000000
#endif
#ifndef CONFIG_INTOSC_HS_DIV2
#define CONFIG_INTOSC_HS_DIV2   100000000
#endif
#ifndef CONFIG_FREE_CLK
#define CONFIG_FREE_CLK         100000000
#endif

/* weak */
alt_freq_t osc1_clock = CONFIG_EXT_OSC1_FREQ;
alt_freq_t cb_intosc_hs_div2 = CONFIG_INTOSC_HS_DIV2;
alt_freq_t f2s_free_clk = CONFIG_FREE_CLK;



ALT_STATUS_CODE alt_clk_ext_clk_freq_set(ALT_CLK_t clk,
                                         alt_freq_t freq)
{
    switch(clk)
    {
    case ALT_CLK_OSC1:
        osc1_clock = freq;
        break;
    case ALT_CLK_F2S_FREE_CLK:
        cb_intosc_hs_div2 = freq;
        break;
    case ALT_CLK_INTOSC_HS_DIV2:
        f2s_free_clk = freq;
        break;
    default:
        return ALT_E_BAD_ARG;
    }
    return ALT_E_SUCCESS;
}



ALT_STATUS_CODE alt_clk_freq_get_osc1(alt_freq_t *pfreq)
{
    *pfreq = (uint64_t) osc1_clock;
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_clk_freq_get_cb_intosc_hs_div2_clk(alt_freq_t *pfreq)
{
    if(cb_intosc_hs_div2)
    {
        *pfreq = cb_intosc_hs_div2;
        return ALT_E_SUCCESS;
    }
    return ALT_E_ERROR;
}

ALT_STATUS_CODE alt_clk_freq_get_f2s_free_clk(alt_freq_t *pfreq)
{
    if(f2s_free_clk)
    {
        *pfreq = f2s_free_clk;
        return ALT_E_SUCCESS;
    }
    return ALT_E_ERROR;
}

/***************************************************************
                Functions to retreive frequencies of devices
***************************************************************/
ALT_STATUS_CODE alt_clk_freq_get_main_pll(alt_freq_t *pfreq)
{
   ALT_STATUS_CODE ret = ALT_E_SUCCESS;
   uint64_t freq64;
   alt_freq_t freq;
   uint32_t vco1;
   /* Note - we don't check that we're locked */

   /* Step 1 - what is the clock source freq? */
   uint32_t vco0 = alt_read_word(ALT_CLKMGR_MAINPLL_VCO0_ADDR);
   switch(ALT_CLKMGR_MAINPLL_VCO0_PSRC_GET(vco0))
   {
       case ALT_CLKMGR_MAINPLL_VCO0_PSRC_E_EOSC1:
           ret = alt_clk_freq_get_osc1(&freq);
           break;
       case ALT_CLKMGR_MAINPLL_VCO0_PSRC_E_INTOSC:
           ret = alt_clk_freq_get_cb_intosc_hs_div2_clk(&freq);
           break;
       case ALT_CLKMGR_MAINPLL_VCO0_PSRC_E_F2S:/* f2s_free */
           ret = alt_clk_freq_get_f2s_free_clk(&freq);
           break;
       default:
           return ALT_E_ERROR;
   }

   if(ret != ALT_E_SUCCESS)
       return ret;
   freq64 = freq;

   /* Step 2 - scale according to num/denom */
   vco1 = alt_read_word(ALT_CLKMGR_MAINPLL_VCO1_ADDR);
   freq64 *= (ALT_CLKMGR_MAINPLL_VCO1_NUMER_GET(vco1) + 1);
   freq64 /= (ALT_CLKMGR_MAINPLL_VCO1_DENOM_GET(vco1) + 1);

   *pfreq = (alt_freq_t) freq64;
   return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_clk_freq_get_peri_pll(alt_freq_t *pfreq)
{
   ALT_STATUS_CODE ret = ALT_E_SUCCESS;
   uint64_t freq64;
   alt_freq_t freq = 0;
   uint32_t vco1;

   /* Note - we don't check that we're locked */

   /* Step 1 - what is the clock source freq? */
   uint32_t vco0 = alt_read_word(ALT_CLKMGR_PERPLL_VCO0_ADDR);
   switch(ALT_CLKMGR_PERPLL_VCO0_PSRC_GET(vco0))
   {
       case ALT_CLKMGR_PERPLL_VCO0_PSRC_E_EOSC1:
           ret = alt_clk_freq_get_osc1(&freq);
           break;
       case ALT_CLKMGR_PERPLL_VCO0_PSRC_E_MAIN:
           alt_clk_freq_get_main_pll(&freq);
           /* There is no bypass for c15 to check for */
           freq /= (1 + alt_read_word(ALT_CLKMGR_MAINPLL_CNTR15CLK_ADDR));
           break;
       case ALT_CLKMGR_PERPLL_VCO0_PSRC_E_INTOSC:
           ret = alt_clk_freq_get_cb_intosc_hs_div2_clk(&freq);
           break;
       case ALT_CLKMGR_PERPLL_VCO0_PSRC_E_F2S:/* f2s_free */
           ret = alt_clk_freq_get_f2s_free_clk(&freq);
           break;
       default:
           return ALT_E_ERROR;
   }

   if(ret != ALT_E_SUCCESS)
       return ret;
   freq64 = freq;

   /* Step 2 - scale according to num/denom */
   vco1 = alt_read_word(ALT_CLKMGR_PERPLL_VCO1_ADDR);
   freq64 *= (ALT_CLKMGR_PERPLL_VCO1_NUMER_GET(vco1) + 1);
   freq64 /= (ALT_CLKMGR_PERPLL_VCO1_DENOM_GET(vco1) + 1);

   *pfreq = (alt_freq_t) freq64;
   return ALT_E_SUCCESS;
}

/********************************************************************
* alt_clk_freq_get_device - common function for alt_clk_freq_get_emac
*     and alt_clk_freq_get_emacb or alt_clk_freq_get_emac_ptp
* params- 
*     src_in_main:  is the src field in main? Otherwise its in periph
*     _enable_mask: The mask for the enable bit for the device
*     _pll_reg:     The register that indicates the peri_pll counter
*                      for this device
*     _main_reg:    The register that indicates the main_pll counter
*                      for this device
*     _bypass_mask: The mask for the bypass bit for this device
*
********************************************************************/

static ALT_STATUS_CODE alt_clk_freq_get_device(alt_freq_t *pfreq,
                                      uint32_t src_in_main,
                                      uint32_t _enable_mask,
                                      uint32_t _bypass_mask,
                                      uint32_t *src_register,
                                      uint32_t *_pll_reg,
                                      uint32_t pll_shift,
                                      uint32_t *_main_reg,
                                      uint32_t main_shift)
{
    alt_freq_t freq;
    uint32_t temp;
    ALT_STATUS_CODE ret;

    if(src_in_main)
        temp = alt_read_word(ALT_CLKMGR_MAINPLL_EN_ADDR);
    else
        temp = alt_read_word(ALT_CLKMGR_PERPLL_EN_ADDR);

    if((_enable_mask != 0) &&
       (0 == (_enable_mask & temp)))
    {
        *pfreq = 0;/* device disabled */
        return ALT_E_SUCCESS;
    }

    if(src_in_main)
        temp = alt_read_word(ALT_CLKMGR_MAINPLL_BYPASS_ADDR);
    else
        temp = alt_read_word(ALT_CLKMGR_PERPLL_BYPASS_ADDR);

    if(temp & _bypass_mask)
    {
        return alt_clk_freq_get_osc1(pfreq);
    }
    switch(ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_GET(alt_read_word(src_register)))
    {
        case ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_OSC1:
            return alt_clk_freq_get_osc1(pfreq);
        case ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_MAIN:
            ret = alt_clk_freq_get_main_pll(&freq);
            if(ret != ALT_E_SUCCESS)
                return ret;
            temp = alt_read_word(_main_reg)>>main_shift;
            *pfreq = freq/(1 + ALT_CLKMGR_MAINPLL_CNTR2CLK_CNT_GET(temp));
            break;
        case ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_PERI:
            ret = alt_clk_freq_get_peri_pll(&freq);
            if(ret != ALT_E_SUCCESS)
                return ret;
            temp = alt_read_word(_pll_reg)>>pll_shift;
            *pfreq = freq/(1 + ALT_CLKMGR_PERPLL_CNTR2CLK_CNT_GET(temp));
            break;
        case ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_INTOSC:
            ret = alt_clk_freq_get_cb_intosc_hs_div2_clk(&freq);
            break;
        case ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_E_FPGA:
            alt_clk_freq_get_f2s_free_clk(&freq);
            /* This value has to come from quartus */
            break;
        default:
           return ALT_E_ERROR;
    }
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_clk_freq_get_mpu(alt_freq_t *pfreq)
{
    /* Step 1 - check the mainpllgrp.mpuclk->src for source
    // Step 2 - check bypass */

    ALT_STATUS_CODE ret;
    ret = alt_clk_freq_get_device(pfreq,
        1,
        ALT_CLKMGR_MAINPLL_EN_MPUCLKEN_SET_MSK,
        ALT_CLKMGR_MAINPLL_BYPASS_MPU_SET_MSK,
        ALT_CLKMGR_MAINPLL_MPUCLK_ADDR,
        ALT_CLKMGR_ALTERA_ADDR, ALT_CLKMGR_NOCCLK_PERICNT_LSB, /* No ALT_CLKMGR_MPUCLK_PERICNT_LSB defined*/
        ALT_CLKMGR_ALTERA_ADDR, 0);
    return ret;
}

ALT_STATUS_CODE alt_clk_freq_get_mpu_periph(alt_freq_t *pfreq)
{
    ALT_STATUS_CODE ret;
    ret = alt_clk_freq_get_mpu(pfreq);
    *pfreq/=4;
    return ret;
}

ALT_STATUS_CODE alt_clk_freq_get_mpu_l2ram(alt_freq_t *pfreq)
{
    ALT_STATUS_CODE ret;
    ret = alt_clk_freq_get_mpu(pfreq);
    *pfreq/=2;
    return ret;
}

/* Same as noc_clock */
ALT_STATUS_CODE alt_clk_freq_get_l3_main_free(alt_freq_t *pfreq)
{
    ALT_STATUS_CODE ret;
    ret = alt_clk_freq_get_device(pfreq,
        1,
        0, /* Always Enabled! */
        ALT_CLKMGR_MAINPLL_BYPASS_NOC_SET_MSK,
        ALT_CLKMGR_MAINPLL_NOCCLK_ADDR,
        ALT_CLKMGR_NOCCLK_ADDR, ALT_CLKMGR_NOCCLK_PERICNT_LSB,
        ALT_CLKMGR_NOCCLK_ADDR, 0
        );
    return ret;
}

ALT_STATUS_CODE alt_clk_freq_get_l4_sys_free(alt_freq_t *pfreq)
{
    ALT_STATUS_CODE ret;
    ret = alt_clk_freq_get_l3_main_free(pfreq);
    *pfreq/=4;
    return ret;
}

ALT_STATUS_CODE alt_clk_freq_get_l4_main(alt_freq_t *pfreq)
{
    ALT_STATUS_CODE 
    ret = alt_clk_freq_get_l3_main_free(pfreq);
    *pfreq/=(1 << ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK_GET(
                   alt_read_word(ALT_CLKMGR_MAINPLL_NOCDIV_ADDR)));
    return ret;
}

ALT_STATUS_CODE alt_clk_freq_get_l4_mp(alt_freq_t *pfreq)
{
    ALT_STATUS_CODE ret;
    ret = alt_clk_freq_get_l3_main_free(pfreq);
    *pfreq/=(1 << ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK_GET(
                   alt_read_word(ALT_CLKMGR_MAINPLL_NOCDIV_ADDR)));
    return ret;
}

ALT_STATUS_CODE alt_clk_freq_get_l4_sp(alt_freq_t *pfreq)
{
    ALT_STATUS_CODE ret;
    ret = alt_clk_freq_get_l3_main_free(pfreq);
    *pfreq/=(1 << ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK_GET(
                   alt_read_word(ALT_CLKMGR_MAINPLL_NOCDIV_ADDR)));
    return ret;
}

ALT_STATUS_CODE alt_clk_freq_get_cs_timer(alt_freq_t *pfreq)
{
    ALT_STATUS_CODE ret;
    ret = alt_clk_freq_get_l3_main_free(pfreq);
    *pfreq/=(1 << ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK_GET(
                   alt_read_word(ALT_CLKMGR_MAINPLL_NOCDIV_ADDR)));
    return ret;
}

ALT_STATUS_CODE alt_clk_freq_get_cs_at(alt_freq_t *pfreq)
{
    ALT_STATUS_CODE ret;
    ret = alt_clk_freq_get_l3_main_free(pfreq);
    *pfreq/=(1 << ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK_GET(
                   alt_read_word(ALT_CLKMGR_MAINPLL_NOCDIV_ADDR)));
    return ret;
}

ALT_STATUS_CODE alt_clk_freq_get_cs_pdbg(alt_freq_t *pfreq)
{
    ALT_STATUS_CODE ret;
    ret = alt_clk_freq_get_cs_timer(pfreq);
    *pfreq/=(1 << ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK_GET(
                   alt_read_word(ALT_CLKMGR_MAINPLL_NOCDIV_ADDR)));
    return ret;
}

ALT_STATUS_CODE alt_clk_freq_get_cs_trace(alt_freq_t *pfreq)
{
    ALT_STATUS_CODE ret;
    ret = alt_clk_freq_get_cs_timer(pfreq);
    *pfreq/=(1 << ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK_GET(
                   alt_read_word(ALT_CLKMGR_MAINPLL_NOCDIV_ADDR)));
    return ret;
}









/********************************************************************
* alt_clk_freq_get_emac - common function for alt_clk_freq_get_emac0
*     and alt_clk_freq_get_emac1
* params- 
*   enable_mask - either ALT_CLKMGR_PERPLL_EN_EMAC0EN_SET_MSK or
*                        ALT_CLKMGR_PERPLL_EN_EMAC1EN_SET_MSK
*   select_mask - either ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_SET_MSK or
*                        ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_SET_MSK    
********************************************************************/

static ALT_STATUS_CODE alt_clk_freq_get_emac01(alt_freq_t *pfreq,
                                      uint32_t enable_mask,
                                      uint32_t select_mask)
{
    /* Step 1 - Check emac0_en */

    if(alt_read_word(ALT_CLKMGR_PERPLL_EMACCTL_ADDR) & select_mask)
    { /* EmacB */
        return alt_clk_freq_get_device(pfreq,
                   0,
                   enable_mask,
                   ALT_CLKMGR_PERPLL_BYPASS_EMACB_SET_MSK,
                   ALT_CLKMGR_PERPLL_CNTR3CLK_ADDR,
                   ALT_CLKMGR_PERPLL_CNTR3CLK_ADDR, 0,
                   ALT_CLKMGR_MAINPLL_CNTR3CLK_ADDR, 0
                   );
    }
    else
    { /* EmacA */
        return alt_clk_freq_get_device(pfreq,
                   0,
                   enable_mask,
                   ALT_CLKMGR_PERPLL_BYPASS_EMACA_SET_MSK,
                   ALT_CLKMGR_PERPLL_CNTR2CLK_ADDR,
                   ALT_CLKMGR_PERPLL_CNTR2CLK_ADDR, 0,
                   ALT_CLKMGR_MAINPLL_CNTR2CLK_ADDR, 0
                   );
    }
}


ALT_STATUS_CODE alt_clk_freq_get_emac0(alt_freq_t *pfreq)
{
    return alt_clk_freq_get_emac01(pfreq,
        ALT_CLKMGR_PERPLL_EN_EMAC0EN_SET_MSK,
        ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_SET_MSK);
}

ALT_STATUS_CODE alt_clk_freq_get_emac1(alt_freq_t *pfreq)
{
    return alt_clk_freq_get_emac01(pfreq,
        ALT_CLKMGR_PERPLL_EN_EMAC1EN_SET_MSK,
        ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_SET_MSK);
}

ALT_STATUS_CODE alt_clk_freq_get_emac2(alt_freq_t *pfreq)
{
    return alt_clk_freq_get_emac01(pfreq,
        ALT_CLKMGR_PERPLL_EN_EMAC2EN_SET_MSK,
        ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_SET_MSK);
}

ALT_STATUS_CODE alt_clk_freq_get_emac_ptp(alt_freq_t *pfreq)
{
    return alt_clk_freq_get_device(pfreq,
        0,
        ALT_CLKMGR_PERPLL_EN_EMACPTPEN_SET_MSK,
        ALT_CLKMGR_PERPLL_BYPASS_EMACPTP_SET_MSK,
        ALT_CLKMGR_PERPLL_CNTR4CLK_ADDR,
        ALT_CLKMGR_PERPLL_CNTR4CLK_ADDR, 0,
        ALT_CLKMGR_MAINPLL_CNTR4CLK_ADDR, 0
        );
}

ALT_STATUS_CODE alt_clk_freq_get_gpio(alt_freq_t *pfreq)
{
    ALT_STATUS_CODE ret;
    ret = alt_clk_freq_get_device(pfreq,
        0,
        ALT_CLKMGR_PERPLL_EN_GPIODBEN_SET_MSK,
        ALT_CLKMGR_PERPLL_BYPASS_GPIODB_SET_MSK,
        ALT_CLKMGR_PERPLL_CNTR5CLK_ADDR,
        ALT_CLKMGR_PERPLL_CNTR5CLK_ADDR, 0,
        ALT_CLKMGR_MAINPLL_CNTR5CLK_ADDR, 0
        );
   /* GPIO has an extra external divider */
   *pfreq/=(1 + ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK_GET(
               alt_read_word(ALT_CLKMGR_PERPLL_GPIODIV_ADDR)));
   return ret;
}

ALT_STATUS_CODE alt_clk_freq_get_sdmmc(alt_freq_t *pfreq)
{
    return alt_clk_freq_get_device(pfreq,
        0,
        ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN_SET_MSK,
        ALT_CLKMGR_PERPLL_BYPASS_SDMMC_SET_MSK,
        ALT_CLKMGR_PERPLL_CNTR6CLK_ADDR,
        ALT_CLKMGR_PERPLL_CNTR6CLK_ADDR, 0,
        ALT_CLKMGR_MAINPLL_CNTR6CLK_ADDR, 0
        );
}

ALT_STATUS_CODE alt_clk_freq_get_qspi(alt_freq_t *pfreq)
{
    return alt_clk_freq_get_l4_main(pfreq);
}

ALT_STATUS_CODE alt_clk_freq_get_spim0(alt_freq_t *pfreq)
{
    ALT_STATUS_CODE ret;
    ret = alt_clk_freq_get_l4_main(pfreq);
    *pfreq/=alt_read_word(ALT_SPIM0_BAUDR_ADDR);
    return ret;
}

ALT_STATUS_CODE alt_clk_freq_get_spim1(alt_freq_t *pfreq)
{
    ALT_STATUS_CODE ret;
    ret = alt_clk_freq_get_l4_main(pfreq);
    *pfreq/=alt_read_word(ALT_SPIM1_BAUDR_ADDR);
    return ret;
}

ALT_STATUS_CODE alt_clk_freq_get_s2f_user0(alt_freq_t *pfreq)
{
    return alt_clk_freq_get_device(pfreq,
        1,
        ALT_CLKMGR_MAINPLL_EN_S2FUSER0CLKEN_SET_MSK,
        ALT_CLKMGR_MAINPLL_BYPASS_S2FUSER0_SET_MSK,
        ALT_CLKMGR_MAINPLL_CNTR7CLK_ADDR,
        ALT_CLKMGR_PERPLL_CNTR7CLK_ADDR, 0,
        ALT_CLKMGR_MAINPLL_CNTR7CLK_ADDR, 0
        );
}

ALT_STATUS_CODE alt_clk_freq_get_s2f_user1(alt_freq_t *pfreq)
{
    return alt_clk_freq_get_device(pfreq,
        0,
        ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN_SET_MSK,
        ALT_CLKMGR_PERPLL_BYPASS_S2FUSER1_SET_MSK,
        ALT_CLKMGR_PERPLL_CNTR8CLK_ADDR,
        ALT_CLKMGR_PERPLL_CNTR8CLK_ADDR, 0,
        ALT_CLKMGR_MAINPLL_CNTR8CLK_ADDR, 0
        );
}

ALT_STATUS_CODE alt_clk_freq_get_hmc(alt_freq_t *pfreq)
{
    return alt_clk_freq_get_device(pfreq,
        1,
        0,
        ALT_CLKMGR_MAINPLL_BYPASS_HMCPLLREF_SET_MSK,
        ALT_CLKMGR_MAINPLL_CNTR9CLK_ADDR,
        ALT_CLKMGR_PERPLL_CNTR9CLK_ADDR, 0,
        ALT_CLKMGR_MAINPLL_CNTR9CLK_ADDR, 0
        );
}


/*
// alt_clk_freq_get() returns the output frequency of the specified clock.
*/
ALT_STATUS_CODE alt_clk_freq_get(ALT_CLK_t clk, alt_freq_t* freq)
{
    ALT_STATUS_CODE ret = ALT_E_SUCCESS; /*SALT_E_BAD_ARG;*/

    if (freq == NULL)
    {
        return ret;
    }

    switch (clk)
    {
        /* External Inputs */
    case ALT_CLK_OSC1:
        ret = alt_clk_freq_get_osc1(freq);
        break;
    case ALT_CLK_F2S_FREE_CLK:
        ret = alt_clk_freq_get_f2s_free_clk(freq);
        break;
    case ALT_CLK_INTOSC_HS_DIV2:
        ret = alt_clk_freq_get_cb_intosc_hs_div2_clk(freq);
        break;
    case ALT_CLK_MAIN_PLL:
        ret = alt_clk_freq_get_main_pll(freq);
        break;
    case ALT_CLK_PERIPHERAL_PLL:
        ret = alt_clk_freq_get_peri_pll(freq);
        break;
    case ALT_CLK_MPU:
        ret = alt_clk_freq_get_mpu(freq);
        break;
    case ALT_CLK_MPU_PERIPH:
        ret = alt_clk_freq_get_mpu_periph(freq);
        break;
    case ALT_CLK_MPU_L2_RAM:
        ret = alt_clk_freq_get_mpu_l2ram(freq);
        break;

    case ALT_CLK_L3_MAIN:
        alt_clk_freq_get_l3_main_free(freq);
        break;
    case ALT_CLK_L4_SYS_FREE:
        alt_clk_freq_get_l4_sys_free(freq);
        break;
    case ALT_CLK_L4_MAIN:
        alt_clk_freq_get_l4_main(freq);
        break;
    case ALT_CLK_L4_MP:
        alt_clk_freq_get_l4_mp(freq);
        break;
    case ALT_CLK_L4_SP:
        alt_clk_freq_get_l4_sp(freq);
        break;

    case ALT_CLK_CS_TIMER:
        alt_clk_freq_get_cs_timer(freq);
        break;
    case ALT_CLK_CS_AT:
        alt_clk_freq_get_cs_at(freq);
        break;
    case ALT_CLK_CS_PDBG:
        alt_clk_freq_get_cs_pdbg(freq);
        break;
    case ALT_CLK_CS_TRACE:
        alt_clk_freq_get_cs_trace(freq);
        break;

    case ALT_CLK_S2F_USER0:
        alt_clk_freq_get_s2f_user0(freq);
        break;
    case ALT_CLK_S2F_USER1:
        alt_clk_freq_get_s2f_user1(freq);
        break;
    case ALT_CLK_HMC_PLL_REF:
        alt_clk_freq_get_hmc(freq);
        break;
    case ALT_CLK_EMAC0:
        alt_clk_freq_get_emac0(freq);
        break;
    case ALT_CLK_EMAC1:
        alt_clk_freq_get_emac1(freq);
        break;
    case ALT_CLK_EMAC2:
        alt_clk_freq_get_emac2(freq);
        break;
    case ALT_CLK_EMAC_PTP:
        alt_clk_freq_get_emac_ptp(freq);
        break;
    case ALT_CLK_GPIO:
        alt_clk_freq_get_gpio(freq);
        break;
    case ALT_CLK_SDMMC:
        alt_clk_freq_get_sdmmc(freq);
        break;
    case ALT_CLK_QSPI:
        alt_clk_freq_get_qspi(freq);
        break;
    default:
        ret = ALT_E_BAD_ARG;
        break;

    }   /* end of switch-case construct */

    return ret;
}



static __inline ALT_STATUS_CODE alt_clk_clock_disable_helper(void *reg, uint32_t mask)
{
    alt_write_word(reg, mask);
    return ALT_E_SUCCESS;
}


ALT_STATUS_CODE alt_clk_clock_disable(ALT_CLK_t clk)
{
    switch (clk)
    {
        /* External Inputs */
    case ALT_CLK_MPU:
        return alt_clk_clock_disable_helper(ALT_CLKMGR_MAINPLL_ENR_ADDR, ALT_CLKMGR_MAINPLL_EN_MPUCLKEN_SET_MSK);

    case ALT_CLK_L4_MAIN:
        return alt_clk_clock_disable_helper(ALT_CLKMGR_MAINPLL_ENR_ADDR, ALT_CLKMGR_MAINPLL_EN_L4MAINCLKEN_SET_MSK);
    case ALT_CLK_L4_MP:
        return alt_clk_clock_disable_helper(ALT_CLKMGR_MAINPLL_ENR_ADDR, ALT_CLKMGR_MAINPLL_EN_L4MPCLKEN_SET_MSK);
    case ALT_CLK_L4_SP:
        return alt_clk_clock_disable_helper(ALT_CLKMGR_MAINPLL_ENR_ADDR, ALT_CLKMGR_MAINPLL_EN_L4SPCLKEN_SET_MSK);

    case ALT_CLK_CS_TIMER:
        return alt_clk_clock_disable_helper(ALT_CLKMGR_MAINPLL_ENR_ADDR, ALT_CLKMGR_MAINPLL_EN_CSTMRCLKEN_SET_MSK);
    case ALT_CLK_CS_AT:
        return alt_clk_clock_disable_helper(ALT_CLKMGR_MAINPLL_ENR_ADDR, ALT_CLKMGR_MAINPLL_EN_CSCLKEN_SET_MSK);

    case ALT_CLK_S2F_USER0:
        return alt_clk_clock_disable_helper(ALT_CLKMGR_MAINPLL_ENR_ADDR, ALT_CLKMGR_MAINPLL_EN_S2FUSER0CLKEN_SET_MSK);
    case ALT_CLK_S2F_USER1:
        return alt_clk_clock_disable_helper(ALT_CLKMGR_PERPLL_ENR_ADDR, ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN_SET_MSK);
    case ALT_CLK_HMC_PLL_REF:
        return alt_clk_clock_disable_helper(ALT_CLKMGR_MAINPLL_ENR_ADDR, ALT_CLKMGR_MAINPLL_EN_HMCPLLREFCLKEN_SET_MSK);
    case ALT_CLK_EMAC0:
        return alt_clk_clock_disable_helper(ALT_CLKMGR_PERPLL_ENR_ADDR, ALT_CLKMGR_PERPLL_EN_EMAC0EN_SET_MSK);
    case ALT_CLK_EMAC1:
        return alt_clk_clock_disable_helper(ALT_CLKMGR_PERPLL_ENR_ADDR, ALT_CLKMGR_PERPLL_EN_EMAC1EN_SET_MSK);
    case ALT_CLK_EMAC2:
        return alt_clk_clock_disable_helper(ALT_CLKMGR_PERPLL_ENR_ADDR, ALT_CLKMGR_PERPLL_EN_EMAC2EN_SET_MSK);
    case ALT_CLK_EMAC_PTP:
        return alt_clk_clock_disable_helper(ALT_CLKMGR_PERPLL_ENR_ADDR, ALT_CLKMGR_PERPLL_EN_EMACPTPEN_SET_MSK);
    case ALT_CLK_GPIO:
        return alt_clk_clock_disable_helper(ALT_CLKMGR_PERPLL_ENR_ADDR, ALT_CLKMGR_PERPLL_EN_GPIODBEN_SET_MSK);
    case ALT_CLK_SDMMC:
        return alt_clk_clock_disable_helper(ALT_CLKMGR_PERPLL_ENR_ADDR, ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN_SET_MSK);

    case ALT_CLK_USB:
        return alt_clk_clock_disable_helper(ALT_CLKMGR_PERPLL_ENR_ADDR, ALT_CLKMGR_PERPLL_EN_USBCLKEN_SET_MSK);
    case ALT_CLK_SPIM:
        return alt_clk_clock_disable_helper(ALT_CLKMGR_PERPLL_ENR_ADDR, ALT_CLKMGR_PERPLL_EN_SPIMCLKEN_SET_MSK);
    case ALT_CLK_NAND:
        return alt_clk_clock_disable_helper(ALT_CLKMGR_PERPLL_ENR_ADDR, ALT_CLKMGR_PERPLL_EN_NANDCLKEN_SET_MSK);
    case ALT_CLK_QSPI:
        return alt_clk_clock_disable_helper(ALT_CLKMGR_PERPLL_ENR_ADDR, ALT_CLKMGR_PERPLL_EN_QSPICLKEN_SET_MSK);
    default:
        return ALT_E_BAD_ARG;
    }   /* end of switch-case construct */
}

static __inline ALT_STATUS_CODE alt_clk_clock_enable_helper(void *reg, uint32_t mask)
{
    alt_write_word(reg, mask);
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_clk_clock_enable(ALT_CLK_t clk)
{
    switch (clk)
    {
        /* External Inputs */
    case ALT_CLK_MPU:
        return alt_clk_clock_enable_helper(ALT_CLKMGR_MAINPLL_ENS_ADDR, ALT_CLKMGR_MAINPLL_EN_MPUCLKEN_SET_MSK);

    case ALT_CLK_L4_MAIN:
        return alt_clk_clock_enable_helper(ALT_CLKMGR_MAINPLL_ENS_ADDR, ALT_CLKMGR_MAINPLL_EN_L4MAINCLKEN_SET_MSK);
    case ALT_CLK_L4_MP:
        return alt_clk_clock_enable_helper(ALT_CLKMGR_MAINPLL_ENS_ADDR, ALT_CLKMGR_MAINPLL_EN_L4MPCLKEN_SET_MSK);
    case ALT_CLK_L4_SP:
        return alt_clk_clock_enable_helper(ALT_CLKMGR_MAINPLL_ENS_ADDR, ALT_CLKMGR_MAINPLL_EN_L4SPCLKEN_SET_MSK);

    case ALT_CLK_CS_TIMER:
        return alt_clk_clock_enable_helper(ALT_CLKMGR_MAINPLL_ENS_ADDR, ALT_CLKMGR_MAINPLL_EN_CSTMRCLKEN_SET_MSK);
    case ALT_CLK_CS_AT:
        return alt_clk_clock_enable_helper(ALT_CLKMGR_MAINPLL_ENS_ADDR, ALT_CLKMGR_MAINPLL_EN_CSCLKEN_SET_MSK);

    case ALT_CLK_S2F_USER0:
        return alt_clk_clock_enable_helper(ALT_CLKMGR_MAINPLL_ENS_ADDR, ALT_CLKMGR_MAINPLL_EN_S2FUSER0CLKEN_SET_MSK);
    case ALT_CLK_S2F_USER1:
        return alt_clk_clock_enable_helper(ALT_CLKMGR_PERPLL_ENS_ADDR, ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN_SET_MSK);
    case ALT_CLK_HMC_PLL_REF:
        return alt_clk_clock_enable_helper(ALT_CLKMGR_MAINPLL_ENS_ADDR, ALT_CLKMGR_MAINPLL_EN_HMCPLLREFCLKEN_SET_MSK);
    case ALT_CLK_EMAC0:
        return alt_clk_clock_enable_helper(ALT_CLKMGR_PERPLL_ENS_ADDR, ALT_CLKMGR_PERPLL_EN_EMAC0EN_SET_MSK);
    case ALT_CLK_EMAC1:
        return alt_clk_clock_enable_helper(ALT_CLKMGR_PERPLL_ENS_ADDR, ALT_CLKMGR_PERPLL_EN_EMAC1EN_SET_MSK);
    case ALT_CLK_EMAC2:
        return alt_clk_clock_enable_helper(ALT_CLKMGR_PERPLL_ENS_ADDR, ALT_CLKMGR_PERPLL_EN_EMAC2EN_SET_MSK);
    case ALT_CLK_EMAC_PTP:
        return alt_clk_clock_enable_helper(ALT_CLKMGR_PERPLL_ENS_ADDR, ALT_CLKMGR_PERPLL_EN_EMACPTPEN_SET_MSK);
    case ALT_CLK_GPIO:
        return alt_clk_clock_enable_helper(ALT_CLKMGR_PERPLL_ENS_ADDR, ALT_CLKMGR_PERPLL_EN_GPIODBEN_SET_MSK);
    case ALT_CLK_SDMMC:
        return alt_clk_clock_enable_helper(ALT_CLKMGR_PERPLL_ENS_ADDR, ALT_CLKMGR_PERPLL_EN_SDMMCCLKEN_SET_MSK);

    case ALT_CLK_USB:
        return alt_clk_clock_enable_helper(ALT_CLKMGR_PERPLL_ENS_ADDR, ALT_CLKMGR_PERPLL_EN_USBCLKEN_SET_MSK);
    case ALT_CLK_SPIM:
        return alt_clk_clock_enable_helper(ALT_CLKMGR_PERPLL_ENS_ADDR, ALT_CLKMGR_PERPLL_EN_SPIMCLKEN_SET_MSK);
    case ALT_CLK_NAND:
        return alt_clk_clock_enable_helper(ALT_CLKMGR_PERPLL_ENS_ADDR, ALT_CLKMGR_PERPLL_EN_NANDCLKEN_SET_MSK);
    case ALT_CLK_QSPI:
        return alt_clk_clock_enable_helper(ALT_CLKMGR_PERPLL_ENS_ADDR, ALT_CLKMGR_PERPLL_EN_QSPICLKEN_SET_MSK);
    default:
        return ALT_E_BAD_ARG;
    }   /* end of switch-case construct */
}

static __inline ALT_STATUS_CODE alt_clk_is_enabled_helper(void *reg, uint32_t mask)
{
  if(mask & alt_read_word( reg ))
      return ALT_E_TRUE;
  else
      return ALT_E_FALSE;
}

ALT_STATUS_CODE alt_clk_is_enabled(ALT_CLK_t clk)
{
    switch (clk)
    {
        /* External Inputs */
    case ALT_CLK_MPU:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_MAINPLL_EN_ADDR, ALT_CLKMGR_MAINPLL_EN_MPUCLKEN_SET_MSK);

    case ALT_CLK_L4_MAIN:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_MAINPLL_EN_ADDR, ALT_CLKMGR_MAINPLL_EN_L4MAINCLKEN_SET_MSK);
    case ALT_CLK_L4_MP:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_MAINPLL_EN_ADDR, ALT_CLKMGR_MAINPLL_EN_L4MPCLKEN_SET_MSK);
    case ALT_CLK_L4_SP:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_MAINPLL_EN_ADDR, ALT_CLKMGR_MAINPLL_EN_L4SPCLKEN_SET_MSK);

    case ALT_CLK_CS_TIMER:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_MAINPLL_EN_ADDR, ALT_CLKMGR_MAINPLL_EN_CSTMRCLKEN_SET_MSK);
    case ALT_CLK_CS_AT:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_MAINPLL_EN_ADDR, ALT_CLKMGR_MAINPLL_EN_CSCLKEN_SET_MSK);

    case ALT_CLK_S2F_USER0:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_MAINPLL_EN_ADDR, ALT_CLKMGR_MAINPLL_EN_S2FUSER0CLKEN_SET_MSK);
    case ALT_CLK_S2F_USER1:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_PERPLL_EN_ADDR, ALT_CLKMGR_PERPLL_EN_S2FUSER1CLKEN_SET_MSK);
    case ALT_CLK_HMC_PLL_REF:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_MAINPLL_EN_ADDR, ALT_CLKMGR_MAINPLL_EN_HMCPLLREFCLKEN_SET_MSK);
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

    case ALT_CLK_USB:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_PERPLL_EN_ADDR, ALT_CLKMGR_PERPLL_EN_USBCLKEN_SET_MSK);
    case ALT_CLK_SPIM:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_PERPLL_EN_ADDR, ALT_CLKMGR_PERPLL_EN_SPIMCLKEN_SET_MSK);
    case ALT_CLK_NAND:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_PERPLL_EN_ADDR, ALT_CLKMGR_PERPLL_EN_NANDCLKEN_SET_MSK);
    case ALT_CLK_QSPI:
        return alt_clk_is_enabled_helper(ALT_CLKMGR_PERPLL_EN_ADDR, ALT_CLKMGR_PERPLL_EN_QSPICLKEN_SET_MSK);
    default:
        return ALT_E_BAD_ARG;
    }   /* end of switch-case construct */
}


/********************************************************************
* alt_clk_config
********************************************************************/

ALT_STATUS_CODE
alt_clkmgr_config(
  CLOCK_MANAGER_CONFIG*  cfg,
  CLOCK_SOURCE_CONFIG* inclks
  )
{
  uint32_t time;
  uint32_t data32;
  uint32_t clkStep;
  uint32_t clk100;

  /* ----------------------
   / Background Information:
   / ----------------------
   / Hardware-Managed clock V.S. Software-Managed clock
   /
   / A Hardware-Managed clock,
   / are automatically transitioned by the hardware to ensure glitch-free operation.
   /
   / List of Hardware-Managed clock:
   / mainpllgrp.en
   / Bit0 mpuclken     - mpu_clk, mpu_l2ram_clk  and mpu_periph_clk
   / Bit1 l4mainclken  - l4_main_clk
   / Bit2 l4mpclken    - l4_mp_clk
   / Bit3 l4spclken    - l4_sp_clk
   / Bit4 csclken      - cs_at_clk, cs_pdbg_clk, and cs_trace_clk
   / Bit5 cstimerclken - cs_timer_clk
   /
   / A Software-Managed clock,
   / software is responsible for gating off the clock,
   / waiting for a PLL lock if required, and gating the clock back on.
   /
   / List of Software-Managed clock:
   / mainpllgrp.en
   / Bit6 s2fuser0clken  - s2f_user0_clk
   / Bit7 hmcpllrefclken - hmc_pll_ref_clk
   / perpllgrp - all clocks in Peripheral PLL group are Software-Managed.
   /
   / Each clock group has EN, ENS, ENR register
   / ENS - Write One to Set corresonding fields in Enable Register
   / ENR - Write One to Clear corresponding fields in Enable Register.
  */
  if(inclks)
  {
    osc1_clock = inclks->clk_freq_of_eosc1;
    cb_intosc_hs_div2 = inclks->clk_freq_of_cb_intosc_ls;
    f2s_free_clk = inclks->clk_freq_of_f2h_free;
  }

  alt_clrbits_word(ALT_RSTMGR_PER1MODRST_ADDR,
                   ALT_RSTMGR_PER1MODRST_L4SYSTMR0_SET_MSK);

  alt_gpt_all_tmr_init();
  /* Set the OSC1 freq in clkmgr */

  alt_gpt_mode_set(ALT_GPT_OSC1_TMR0, ALT_GPT_RESTART_MODE_PERIODIC);
  alt_gpt_counter_set(ALT_GPT_OSC1_TMR0, 0x100000);
  alt_gpt_tmr_start(ALT_GPT_OSC1_TMR0);
  time = alt_gpt_counter_get(ALT_GPT_OSC1_TMR0);

  /* Disable mainpllgrp's software-managed clock */
  alt_write_word (ALT_CLKMGR_MAINPLL_ENR_ADDR,
               ALT_CLKMGR_MAINPLL_ENR_S2FUSER0CLKEN_SET_MSK |
               ALT_CLKMGR_MAINPLL_ENR_HMCPLLREFCLKEN_SET_MSK);

  /* Disable perpllgrp's software-managed clock */
  alt_write_word (ALT_CLKMGR_PERPLL_ENR_ADDR,
               ALT_CLKMGR_PERPLL_ENR_RESET);

  /* Bypass Register has bypass, bypassS (set), bypassR (clear)
     Bypassed all mainpllgrp's clocks */
  alt_write_word (ALT_CLKMGR_MAINPLL_BYPASSS_ADDR,
               ALT_CLKMGR_MAINPLL_BYPASSS_RESET);

  /* Bypassed all perpllgrp's clocks */
  alt_write_word (ALT_CLKMGR_PERPLL_BYPASSS_ADDR,
               ALT_CLKMGR_PERPLL_BYPASSS_RESET);

  /* vco0 of mainpllgrp */
  data32 = alt_read_word (ALT_CLKMGR_CLKMGR_STAT_ADDR);

  /* Is secure clock if the source of boot_clk is cb_intosc_hs_div2_clk. */
  if (ALT_CLKMGR_CLKMGR_STAT_BOOTCLKSRC_GET(data32) == 1) {
    /* Secure boot_clk */
    alt_write_word (ALT_CLKMGR_MAINPLL_VCO0_ADDR,
                 ALT_CLKMGR_MAINPLL_VCO0_RESET |
                 ALT_CLKMGR_MAINPLL_VCO0_REGEXTSEL_SET(1) |
                 ALT_CLKMGR_MAINPLL_VCO0_PSRC_SET(ALT_CLKMGR_MAINPLL_VCO0_PSRC_E_INTOSC));
  } else {
    /* Non-Secure boot_clk */
    alt_write_word (ALT_CLKMGR_MAINPLL_VCO0_ADDR,
                 ALT_CLKMGR_MAINPLL_VCO0_RESET |
                 ALT_CLKMGR_MAINPLL_VCO0_REGEXTSEL_SET(1) |
                 ALT_CLKMGR_MAINPLL_VCO0_PSRC_SET(cfg->mainpll.vco0_psrc));
  }
  /* vco0 of perpllgrp */
  alt_write_word (ALT_CLKMGR_PERPLL_VCO0_ADDR,
               ALT_CLKMGR_PERPLL_VCO0_RESET |
               ALT_CLKMGR_PERPLL_VCO0_REGEXTSEL_SET(1) |
               ALT_CLKMGR_PERPLL_VCO0_PSRC_SET(cfg->perpll.vco0_psrc));


  /*
     vco1 - Initialize denominator counter settings.
     vco1 of mainpllgrp

     Workaround for voltage drop-
       If we just set the clock for vco1 and the new clock is > 1200 MHz then
         there is a chance that the sudden increased current pull could drop the
         voltage on vcc to the point where the chip glitches (usually resets).
       The workaround is to increase the voltage to 900 Mhz, then increase it 
         100Mhz at a time until you acheive the correct voltage

     Explaination of fuzzy math:
        The output mainpll clock = osc1_clock * (numerator+1)/(2*(denominator+1))
        The 2 in the denominator is is a fixed dividor.

        cfg->mainll.vco1_numer * osc1_clock / cfg->mainpll.vco1_denom >? 1200000000

        If we divide by sides by osc1_clock then we a value around 3.6, which would be 
        rounded off giving (.6)/(3.6) = 17% error

        Instead, we can take our 100 MHz and multiply by 32, and divide the osc1_clk by 2048.
        This results in an error of our osc1_clk up to (2047/~25000000) = ~0.00818%. The 
        result is around 150000 giving us a error of (1/~150000) = ~0.00068%. Both are
        reasonable errors.
           We can then multiply this 100Mhz value by 12 and divide by (32*2048) to get the numerator
           for 1.2GHz or multiply by 9 and divide by (32*2048) to get the starting 900MHz value.

        65536 * cfg->mainll.vco1_numer / cfg->mainpll.vco1_denom >? (3200000000/ (sc1_clock/2048))) 

        Next we multiply by cfg->mainpll.vco1_denom. Since max denom = 63, we are safe from
        overflow. Finally, we divide by 65536, giving us the numerator value that would result
        in 1200 MHz. If we exceed that, then we need to ramp up
  */
  clk100 = (3200000000u / (osc1_clock>>11)) * (1 + cfg->mainpll.vco1_denom ) * 2; /* /32k */

  if(cfg->mainpll.vco1_numer + 1 > (clk100 * 9)>>16) /* Are we going to a value > 1.2 GHz? */
  {
    clkStep = 9 * clk100; /* 900MHz */
    do
    {
        alt_write_word(ALT_CLKMGR_MAINPLL_VCO1_ADDR,
                     ALT_CLKMGR_MAINPLL_VCO1_DENOM_SET(cfg->mainpll.vco1_denom) |
                     ALT_CLKMGR_MAINPLL_VCO1_NUMER_SET((clkStep>>16) - 1));
        clkStep += clk100;
        /* sleep 5 ms for voltages to return to level */
        time = alt_gpt_counter_get(ALT_GPT_OSC1_TMR0);
        alt_gpt_delay_ns(ALT_GPT_OSC1_TMR0, time, 5000);
    } while(cfg->mainpll.vco1_numer > (clkStep >> 16 ) - 1);
  }
  alt_write_word(ALT_CLKMGR_MAINPLL_VCO1_ADDR,
                   ALT_CLKMGR_MAINPLL_VCO1_DENOM_SET(cfg->mainpll.vco1_denom) |
                   ALT_CLKMGR_MAINPLL_VCO1_NUMER_SET(cfg->mainpll.vco1_numer));

  /* sleep 5 ms for voltages to return to level */
  time = alt_gpt_counter_get(ALT_GPT_OSC1_TMR0);
  alt_gpt_delay_ns(ALT_GPT_OSC1_TMR0, time, 5000);

  /* vco1 of perpllgrp */
  alt_write_word(ALT_CLKMGR_PERPLL_VCO1_ADDR,
                   ALT_CLKMGR_PERPLL_VCO1_DENOM_SET(cfg->perpll.vco1_denom) |
                   ALT_CLKMGR_PERPLL_VCO1_NUMER_SET(cfg->perpll.vco1_numer));

  /* #############################################################
     Give enough time for software-managed clock to be reset    */
  time = alt_gpt_counter_get(ALT_GPT_OSC1_TMR0);
  alt_gpt_delay_ns(ALT_GPT_OSC1_TMR0, time, 5000);

  /* ############################################################# */

  /* Power up Bandgap and Analog Circuitry */
  alt_clrbits_word(ALT_CLKMGR_MAINPLL_VCO0_ADDR,
             ALT_CLKMGR_MAINPLL_VCO0_PWRDN_SET_MSK |
             ALT_CLKMGR_MAINPLL_VCO0_BGPWRDN_SET_MSK);
  alt_clrbits_word(ALT_CLKMGR_PERPLL_VCO0_ADDR,
             ALT_CLKMGR_PERPLL_VCO0_PWRDN_SET_MSK |
             ALT_CLKMGR_PERPLL_VCO0_BGPWRDN_SET_MSK);

  /* #############################################################
     Give enough time for Bandgap and Analog Circuitry to power up */
  time = alt_gpt_counter_get(ALT_GPT_OSC1_TMR0);
  alt_gpt_delay_ns(ALT_GPT_OSC1_TMR0, time, 7000);

  /* ############################################################# */

  /* -----------------------------------------
   / Set Enable' bit and the 'External Regulator Input Select' together
   / It is strongly recommended to select the external regulator while the PLL is not enabled (in reset),
   / and then disable the external regulater once the PLL becomes enabled.
   / Software should simulateously update the 'Enable' bit and the 'External Regulator Input Select'
   / in the same write access to the VCO register.
   / When the 'Enable' bit is clear, the 'External Regulator Input Select' should be set, and vice versa.
   / mainpllgrp 
  */
  data32 = alt_read_word(ALT_CLKMGR_MAINPLL_VCO0_ADDR);
  alt_write_word(ALT_CLKMGR_MAINPLL_VCO0_ADDR,
                (data32 & ~ALT_CLKMGR_MAINPLL_VCO0_REGEXTSEL_SET_MSK)
                 | ALT_CLKMGR_MAINPLL_VCO0_EN_SET_MSK);

  /* perpllgrp */
  data32 = alt_read_word(ALT_CLKMGR_PERPLL_VCO0_ADDR);
  alt_write_word(ALT_CLKMGR_PERPLL_VCO0_ADDR,
                 (data32 & ~ALT_CLKMGR_PERPLL_VCO0_REGEXTSEL_SET_MSK)
                 | ALT_CLKMGR_PERPLL_VCO0_EN_SET_MSK);

  /* alteragrp.nocclk */
  alt_write_word (ALT_CLKMGR_MPUCLK_ADDR,
               cfg->alteragrp.mpuclk);
  alt_write_word (ALT_CLKMGR_NOCCLK_ADDR,
               cfg->alteragrp.nocclk);

  /* Main PLL Clock Source and Counters/Divider
     ------------------------------------------
     mainpll.c0 - pll0_mpu_base_clk */
  alt_write_word (ALT_CLKMGR_MAINPLL_MPUCLK_ADDR,
               ALT_CLKMGR_MAINPLL_MPUCLK_CNT_SET(cfg->mainpll.mpuclk_cnt) |
               ALT_CLKMGR_MAINPLL_MPUCLK_SRC_SET(cfg->mainpll.mpuclk_src));
  /* mainpll.c1 - pll0_noc _base_clk */
  alt_write_word (ALT_CLKMGR_MAINPLL_NOCCLK_ADDR,
               ALT_CLKMGR_MAINPLL_NOCCLK_CNT_SET(cfg->mainpll.nocclk_cnt) |
               ALT_CLKMGR_MAINPLL_NOCCLK_SRC_SET(cfg->mainpll.nocclk_src));
  /* mainpll.c2 - pll0_emaca_clk */
  alt_write_word (ALT_CLKMGR_MAINPLL_CNTR2CLK_ADDR,
               ALT_CLKMGR_MAINPLL_CNTR2CLK_CNT_SET(cfg->mainpll.cntr2clk_cnt));
  /* mainpll.c3 - pll0_emacb_clk */
  alt_write_word (ALT_CLKMGR_MAINPLL_CNTR3CLK_ADDR,
               ALT_CLKMGR_MAINPLL_CNTR3CLK_CNT_SET(cfg->mainpll.cntr3clk_cnt));
  /* mainpll.c4 - pll0_emac_ptp_clk */
  alt_write_word (ALT_CLKMGR_MAINPLL_CNTR4CLK_ADDR,
               ALT_CLKMGR_MAINPLL_CNTR4CLK_CNT_SET(cfg->mainpll.cntr4clk_cnt));
  /* mainpll.c5 - pll0_gpio_db_clk */
  alt_write_word (ALT_CLKMGR_MAINPLL_CNTR5CLK_ADDR,
               ALT_CLKMGR_MAINPLL_CNTR5CLK_CNT_SET(cfg->mainpll.cntr5clk_cnt));
  /* mainpll.c6 - pll0_sdmmc_clk */
  alt_write_word (ALT_CLKMGR_MAINPLL_CNTR6CLK_ADDR,
               ALT_CLKMGR_MAINPLL_CNTR6CLK_CNT_SET(cfg->mainpll.cntr6clk_cnt));
  /* mainpll.c7 - pll0_h2f_user0_clk (A.K.A. s2f_user0_clk) */
  alt_write_word (ALT_CLKMGR_MAINPLL_CNTR7CLK_ADDR,
               ALT_CLKMGR_MAINPLL_CNTR7CLK_CNT_SET(cfg->mainpll.cntr7clk_cnt) |
               ALT_CLKMGR_MAINPLL_CNTR7CLK_SRC_SET(cfg->mainpll.cntr7clk_src));
  /* mainpll.c8 - pll0_h2f_user1_clk (A.K.A. s2f_user1_clk) */
  alt_write_word (ALT_CLKMGR_MAINPLL_CNTR8CLK_ADDR,
               ALT_CLKMGR_MAINPLL_CNTR8CLK_CNT_SET(cfg->mainpll.cntr8clk_cnt));
  /* mainpll.c9 - pll0_hmc_pll_ref_clk */
  alt_write_word (ALT_CLKMGR_MAINPLL_CNTR9CLK_ADDR,
               ALT_CLKMGR_MAINPLL_CNTR9CLK_CNT_SET(cfg->mainpll.cntr9clk_cnt) |
               ALT_CLKMGR_MAINPLL_CNTR9CLK_SRC_SET(cfg->mainpll.cntr9clk_src));
  /* mainpll.c15 - periph_ref_clk
   * Comment out because C15 input for PLL1 is not supported (2014.12.15 A10_5v4.PDF) */
  alt_write_word (ALT_CLKMGR_MAINPLL_CNTR15CLK_ADDR,
               ALT_CLKMGR_MAINPLL_CNTR15CLK_CNT_SET(cfg->mainpll.cntr15clk_cnt));
  /*mainpll's NoC Clocks's divider */
  alt_write_word (ALT_CLKMGR_MAINPLL_NOCDIV_ADDR,
               ALT_CLKMGR_MAINPLL_NOCDIV_L4MAINCLK_SET(cfg->mainpll.nocdiv_l4mainclk) |
               ALT_CLKMGR_MAINPLL_NOCDIV_L4MPCLK_SET(cfg->mainpll.nocdiv_l4mpclk) |
               ALT_CLKMGR_MAINPLL_NOCDIV_L4SPCLK_SET(cfg->mainpll.nocdiv_l4spclk) |
               ALT_CLKMGR_MAINPLL_NOCDIV_CSATCLK_SET(cfg->mainpll.nocdiv_csatclk) |
               ALT_CLKMGR_MAINPLL_NOCDIV_CSTRACECLK_SET(cfg->mainpll.nocdiv_cstraceclk) |
               ALT_CLKMGR_MAINPLL_NOCDIV_CSPDBGCLK_SET(cfg->mainpll.nocdiv_cspdbgclk));

  /* Peripheral PLL Clock Source and Counters/Divider
     ------------------------------------------------
     perpll.c2 - pll1_emaca_clk 
  */
  alt_write_word (ALT_CLKMGR_PERPLL_CNTR2CLK_ADDR,
               ALT_CLKMGR_PERPLL_CNTR2CLK_CNT_SET(cfg->perpll.cntr2clk_cnt) |
               ALT_CLKMGR_PERPLL_CNTR2CLK_SRC_SET(cfg->perpll.cntr2clk_src));
  /* perpll.c3 - pll1_emacb_clk */
  alt_write_word (ALT_CLKMGR_PERPLL_CNTR3CLK_ADDR,
               ALT_CLKMGR_PERPLL_CNTR3CLK_CNT_SET(cfg->perpll.cntr3clk_cnt) |
               ALT_CLKMGR_PERPLL_CNTR3CLK_SRC_SET(cfg->perpll.cntr3clk_src));
  /* perpll.c4 - pll1_emac_ptp_clk */
  alt_write_word (ALT_CLKMGR_PERPLL_CNTR4CLK_ADDR,
               ALT_CLKMGR_PERPLL_CNTR4CLK_CNT_SET(cfg->perpll.cntr4clk_cnt) |
               ALT_CLKMGR_PERPLL_CNTR4CLK_SRC_SET(cfg->perpll.cntr4clk_src));
  /* perpll.c5 - pll1_gpio_db_clk */
  alt_write_word (ALT_CLKMGR_PERPLL_CNTR5CLK_ADDR,
               ALT_CLKMGR_PERPLL_CNTR5CLK_CNT_SET(cfg->perpll.cntr5clk_cnt) |
               ALT_CLKMGR_PERPLL_CNTR5CLK_SRC_SET(cfg->perpll.cntr5clk_src));
  /* perpll.c6 - pll1_sdmmc_clk */
  alt_write_word (ALT_CLKMGR_PERPLL_CNTR6CLK_ADDR,
               ALT_CLKMGR_PERPLL_CNTR6CLK_CNT_SET(cfg->perpll.cntr6clk_cnt) |
               ALT_CLKMGR_PERPLL_CNTR6CLK_SRC_SET(cfg->perpll.cntr6clk_src));
  /* perpll.c7 - pll1_h2f_user0_clk (A.K.A. s2f_user0_clk) */
  alt_write_word (ALT_CLKMGR_PERPLL_CNTR7CLK_ADDR,
               ALT_CLKMGR_PERPLL_CNTR7CLK_CNT_SET(cfg->perpll.cntr7clk_cnt));
  /* perpll.c8 - pll1_h2f_user1_clk (A.K.A. s2f_user1_clk) */
  alt_write_word (ALT_CLKMGR_PERPLL_CNTR8CLK_ADDR,
               ALT_CLKMGR_PERPLL_CNTR8CLK_CNT_SET(cfg->perpll.cntr8clk_cnt) |
               ALT_CLKMGR_PERPLL_CNTR8CLK_SRC_SET(cfg->perpll.cntr8clk_src));
  /* perpll.c9 - pll1_hmc_pll_ref_clk */
  alt_write_word (ALT_CLKMGR_PERPLL_CNTR9CLK_ADDR,
               ALT_CLKMGR_PERPLL_CNTR9CLK_CNT_SET(cfg->perpll.cntr9clk_cnt));

  /* Select EMAC clock source */
  alt_write_word (ALT_CLKMGR_PERPLL_EMACCTL_ADDR,
               ALT_CLKMGR_PERPLL_EMACCTL_EMAC0SEL_SET(cfg->perpll.emacctl_emac0sel) |
               ALT_CLKMGR_PERPLL_EMACCTL_EMAC1SEL_SET(cfg->perpll.emacctl_emac1sel) |
               ALT_CLKMGR_PERPLL_EMACCTL_EMAC2SEL_SET(cfg->perpll.emacctl_emac2sel));

  /* Init GPIO De-bounce Clock Divider */
  alt_write_word (ALT_CLKMGR_PERPLL_GPIODIV_ADDR,
               ALT_CLKMGR_PERPLL_GPIODIV_GPIODBCLK_SET(cfg->perpll.gpiodiv_gpiodbclk));

  /* #############################################################
     Wait until both the Main PLL and the Peripheral PLL is locked */
  do {
    data32 = alt_read_word (ALT_CLKMGR_CLKMGR_STAT_ADDR);
  } while ((ALT_CLKMGR_CLKMGR_STAT_MAINPLLLOCKED_GET(data32) == 0) ||
           (ALT_CLKMGR_CLKMGR_STAT_PERPLLLOCKED_GET(data32) == 0));
  /* ############################################################# */


  /* Now PLL is locked, but before releasing Bypass,
     All Output Counter Reset must be set and cleared by software for correct clock operation.
     mainpll - Assert 'outresetall' */
  alt_setbits_word(ALT_CLKMGR_MAINPLL_VCO0_ADDR,
            ALT_CLKMGR_MAINPLL_VCO0_OUTRSTALL_SET_MSK);
  /* perpll - Assert 'outresetall' */
  alt_setbits_word(ALT_CLKMGR_PERPLL_VCO0_ADDR,
            ALT_CLKMGR_PERPLL_VCO0_OUTRSTALL_SET_MSK);
  /* mainpll - Deassert 'outresetall' */
  alt_clrbits_word(ALT_CLKMGR_MAINPLL_VCO0_ADDR,
             ALT_CLKMGR_MAINPLL_VCO0_OUTRSTALL_SET_MSK);
  /* perpll - Deassert 'outresetall' */
  alt_clrbits_word(ALT_CLKMGR_PERPLL_VCO0_ADDR,
             ALT_CLKMGR_PERPLL_VCO0_OUTRSTALL_SET_MSK);


  /* Release all PLL from Bypass and then clear Clock Manager's Bootmode bit
     Note: Bypass Register has bypass, bypassS (set), bypassR (clear) */

  /* =============================================================
     Release from Bypass all mainpllgrp's clocks */
  alt_write_word (ALT_CLKMGR_MAINPLL_BYPASSR_ADDR,
               ALT_CLKMGR_MAINPLL_BYPASSR_RESET);
  /* Immediately following writes to
     CTRL.BOOTMODE, MAINPLLGRP.BYPASS.MPU or MAINPLLGRP.BYPASS.NOC register bits
     SW should wait 0.5 usecs and then poll this BUSY bit until it is IDLE
     before proceeding with any other register writes in the Clock Manager.
  */
  time = alt_gpt_counter_get(ALT_GPT_OSC1_TMR0);
  alt_gpt_delay_ns(ALT_GPT_OSC1_TMR0, time, 500);

  do {
    data32 = alt_read_word (ALT_CLKMGR_CLKMGR_STAT_ADDR);
  } while ((ALT_CLKMGR_CLKMGR_STAT_BUSY_GET(data32) != ALT_CLKMGR_CLKMGR_STAT_BUSY_E_IDLE));
  /* ============================================================= */


  /* =============================================================
     Release from Bypass all perpllgrp's clocks */
  alt_write_word (ALT_CLKMGR_PERPLL_BYPASSR_ADDR,
               ALT_CLKMGR_PERPLL_BYPASSR_RESET);
  /* Immediately following writes to
   / CTRL.BOOTMODE, MAINPLLGRP.BYPASS.MPU or MAINPLLGRP.BYPASS.NOC register bits
   / SW should wait 0.5 usecs and then poll this BUSY bit until it is IDLE
   / before proceeding with any other register writes in the Clock Manager.
  */
  time = alt_gpt_counter_get(ALT_GPT_OSC1_TMR0);
  alt_gpt_delay_ns(ALT_GPT_OSC1_TMR0, time, 500);

  do {
    data32 = alt_read_word (ALT_CLKMGR_CLKMGR_STAT_ADDR);
  } while ((ALT_CLKMGR_CLKMGR_STAT_BUSY_GET(data32) != ALT_CLKMGR_CLKMGR_STAT_BUSY_E_IDLE));
  /* ============================================================= */


  /* =============================================================
   / Clear Clock Manager's Bootmode bit 
  */
  alt_clrbits_word (ALT_CLKMGR_CLKMGR_CTL_ADDR,
             ALT_CLKMGR_CLKMGR_CTL_BOOTMOD_SET_MSK);

  /* Immediately following writes to
     CTRL.BOOTMODE, MAINPLLGRP.BYPASS.MPU or MAINPLLGRP.BYPASS.NOC register bits
     SW should wait 0.5 usecs and then poll this BUSY bit until it is IDLE
     before proceeding with any other register writes in the Clock Manager.
  */
  time = alt_gpt_counter_get(ALT_GPT_OSC1_TMR0);
  alt_gpt_delay_ns(ALT_GPT_OSC1_TMR0, time, 500);

  do {
    data32 = alt_read_word (ALT_CLKMGR_CLKMGR_STAT_ADDR);
  } while ((ALT_CLKMGR_CLKMGR_STAT_BUSY_GET(data32) != ALT_CLKMGR_CLKMGR_STAT_BUSY_E_IDLE));
  /* ============================================================= */

  /* Enable mainpllgrp's software-managed clock */
  alt_write_word (ALT_CLKMGR_MAINPLL_ENS_ADDR,
               ALT_CLKMGR_MAINPLL_ENS_S2FUSER0CLKEN_SET_MSK |
               ALT_CLKMGR_MAINPLL_ENS_HMCPLLREFCLKEN_SET_MSK);

  /* Enable perpllgrp's software-managed clock */
  alt_write_word (ALT_CLKMGR_PERPLL_ENS_ADDR,
               ALT_CLKMGR_PERPLL_ENS_RESET);

  /* Clear all interrupt status register, loss lock and slip bits might set during configuration */
  alt_write_word (ALT_CLKMGR_CLKMGR_INTR_ADDR,
               ALT_CLKMGR_CLKMGR_INTR_MAINPLLLOST_SET_MSK |
               ALT_CLKMGR_CLKMGR_INTR_PERPLLLOST_SET_MSK |
               ALT_CLKMGR_CLKMGR_INTR_MAINPLLRFSLIP_SET_MSK |
               ALT_CLKMGR_CLKMGR_INTR_PERPLLRFSLIP_SET_MSK |
               ALT_CLKMGR_CLKMGR_INTR_MAINPLLFBSLIP_SET_MSK |
               ALT_CLKMGR_CLKMGR_INTR_PERPLLFBSLIP_SET_MSK |
               ALT_CLKMGR_CLKMGR_INTR_MAINPLLACHIEVED_SET_MSK |
               ALT_CLKMGR_CLKMGR_INTR_PERPLLACHIEVED_SET_MSK);
    return ALT_E_SUCCESS;
}


