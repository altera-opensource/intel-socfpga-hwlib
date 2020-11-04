/******************************************************************************
 *
 * Copyright 2015 Altera Corporation. All Rights Reserved.
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
#ifndef __ALT_CLK_MGR_H__
#define __ALT_CLK_MGR_H__

#include "hwlib.h"

typedef uint32_t alt_freq_t;

/* ------------------------------------------------------------------
// Clock Source Frequency
// ------------------------------------------------------------------ */
typedef struct {
  uint32_t  clk_freq_of_eosc1;
  uint32_t  clk_freq_of_f2h_free;
  uint32_t  clk_freq_of_cb_intosc_ls;
} CLOCK_SOURCE_CONFIG;

/* ------------------------------------------------------------------
// clock_manager.mainpll
// ------------------------------------------------------------------ */
typedef struct {
  uint32_t  vco0_psrc;
  uint32_t  vco1_denom;
  uint32_t  vco1_numer;
  uint32_t  mpuclk_cnt;
  uint32_t  mpuclk_src;
  uint32_t  nocclk_cnt;
  uint32_t  nocclk_src;
  uint32_t  cntr2clk_cnt;
  uint32_t  cntr3clk_cnt;
  uint32_t  cntr4clk_cnt;
  uint32_t  cntr5clk_cnt;
  uint32_t  cntr6clk_cnt;
  uint32_t  cntr7clk_cnt;
  uint32_t  cntr7clk_src;
  uint32_t  cntr8clk_cnt;
  uint32_t  cntr9clk_cnt;
  uint32_t  cntr9clk_src;
  uint32_t  cntr15clk_cnt;
  uint32_t  nocdiv_l4mainclk;
  uint32_t  nocdiv_l4mpclk;
  uint32_t  nocdiv_l4spclk;
  uint32_t  nocdiv_csatclk;
  uint32_t  nocdiv_cstraceclk;
  uint32_t  nocdiv_cspdbgclk;
} CLOCK_MANAGER_MAIN_PLL_CONFIG;

/* ------------------------------------------------------------------
// clock_manager.perpll
// ------------------------------------------------------------------ */
typedef struct {
  uint32_t  vco0_psrc;
  uint32_t  vco1_denom;
  uint32_t  vco1_numer;
  uint32_t  cntr2clk_cnt;
  uint32_t  cntr2clk_src;
  uint32_t  cntr3clk_cnt;
  uint32_t  cntr3clk_src;
  uint32_t  cntr4clk_cnt;
  uint32_t  cntr4clk_src;
  uint32_t  cntr5clk_cnt;
  uint32_t  cntr5clk_src;
  uint32_t  cntr6clk_cnt;
  uint32_t  cntr6clk_src;
  uint32_t  cntr7clk_cnt;
  uint32_t  cntr8clk_cnt;
  uint32_t  cntr8clk_src;
  uint32_t  cntr9clk_cnt;
  uint32_t  emacctl_emac0sel;
  uint32_t  emacctl_emac1sel;
  uint32_t  emacctl_emac2sel;
  uint32_t  gpiodiv_gpiodbclk;
} CLOCK_MANAGER_PER_PLL_CONFIG;

/* ------------------------------------------------------------------
// clock_manager.alteragrp
// ------------------------------------------------------------------ */
typedef struct {
  uint32_t  mpuclk;
  uint32_t  nocclk;
} CLOCK_MANAGER_ALTERA_GRP_CONFIG;

/* ------------------------------------------------------------------
// clock_manager
// ------------------------------------------------------------------ */

typedef struct {
  CLOCK_MANAGER_MAIN_PLL_CONFIG    mainpll;
  CLOCK_MANAGER_PER_PLL_CONFIG     perpll;
  CLOCK_MANAGER_ALTERA_GRP_CONFIG  alteragrp;
} CLOCK_MANAGER_CONFIG;

/* ==================================================================
// Functions Definition
// ================================================================== */

ALT_STATUS_CODE
alt_clkmgr_config(
  CLOCK_MANAGER_CONFIG*  cfg,
  CLOCK_SOURCE_CONFIG* inclks
  );


typedef enum ALT_CLK
{
    ALT_CLK_OSC1,
    ALT_CLK_F2S_FREE_CLK,
    ALT_CLK_INTOSC_HS_DIV2,
    ALT_CLK_MAIN_PLL,
    ALT_CLK_PERIPHERAL_PLL,
    ALT_CLK_MPU,
    ALT_CLK_MPU_PERIPH,
    ALT_CLK_MPU_L2_RAM,
    ALT_CLK_L3_MAIN,
    ALT_CLK_L4_SYS_FREE,
    ALT_CLK_L4_MAIN,
    ALT_CLK_L4_MP,
    ALT_CLK_L4_SP,
    ALT_CLK_CS_TIMER,
    ALT_CLK_CS_AT,
    ALT_CLK_CS_PDBG,
    ALT_CLK_CS_TRACE,
    ALT_CLK_S2F_USER0,
    ALT_CLK_S2F_USER1,
    ALT_CLK_HMC_PLL_REF,
    ALT_CLK_EMAC0,
    ALT_CLK_EMAC1,
    ALT_CLK_EMAC2,
    ALT_CLK_EMAC_PTP,
    ALT_CLK_GPIO,
    ALT_CLK_SDMMC,

    ALT_CLK_USB,
    ALT_CLK_SPIM,
    ALT_CLK_NAND,
    ALT_CLK_QSPI,

    ALT_CLK_UNKNOWN
} ALT_CLK_t;

/******************************************************************************/
/*!
 * alt_clkmgr_get_*_freq - returns the frequency for a single clock group
 *
 * \param       clk
 *                  The clock who's frequencies you wish to know
 * \param       p_freq_khz
 *                  pointer to uint32_t that will contain the frequency of the
 *                       group clock
 *                  if NULL, this will be ignored
 * \retval      ALT_E_SUCCESS - Values are correct
 * \retval      ALT_E_ERROR   - An error occured during this operation
 */

ALT_STATUS_CODE alt_clk_freq_get(ALT_CLK_t clk, uint32_t *p_freq_khz);



/******************************************************************************/
/*!
 * alt_clkmgr_get_*_freq - gets the frequency of a clock. These values could be
 *     determined by alt_clkmgr_get_group_freq, but calling these functions
 *     directly can lead to reduced binary sizes
 *
 * \param       freq - the frequency of the osc1 clock
 */
ALT_STATUS_CODE alt_clk_freq_get_osc1(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_cb_intosc_hs_div2_clk(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_f2s_free_clk(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_main_pll(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_peri_pll(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_mpu(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_mpu_periph(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_mpu_l2ram(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_l3_main_free(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_l4_sys_free(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_l4_main(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_l4_mp(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_l4_sp(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_cs_timer(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_cs_at(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_cs_pdbg(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_cs_trace(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_emac0(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_emac1(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_emac2(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_emac_ptp(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_gpio(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_sdmmc(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_qspi(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_s2f_user0(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_s2f_user1(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_hmc(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_spim0(alt_freq_t *pfreq);
ALT_STATUS_CODE alt_clk_freq_get_spim1(alt_freq_t *pfreq);


/******************************************************************************/
/*!
 * Set the external clock frequency value.
 *
 * The function is used to specify the frequency of the external clock source as
 * a measure of Hz. The supplied frequency should be within the Fmin and Fmax
 * values allowed for the external clock source.
 *
 * \param       clk
 *              The external clock source. Valid external clocks are
 *              * \e ALT_CLK_OSC1
 *              * \e ALT_CLK_F2S_FREE_CLK
 *              * \e ALT_CLK_INTOSC_HS_DIV2
 *
 * \param       freq
 *              The frequency of the external clock in Hz.
 *
 * \retval      ALT_E_SUCCESS   The operation was succesful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   A bad argument value was passed. Either the \e clk
 *                              argument is bad or not a valid external clock
 *                              source
 * \retval      ALT_E_ARG_RANGE The frequency value violates the range constraints
 *                              for the specified clock.

 */
ALT_STATUS_CODE alt_clk_ext_clk_freq_set(ALT_CLK_t clk,
                                         alt_freq_t freq);

/******************************************************************************/
/*!
 * Disable the specified clock. Once the clock is disabled, its clock signal does
 * not propogate to its clocked elements.
 *
 * \param       clk
 *              The clock to disable.
 *
 * \retval      ALT_E_SUCCESS   The operation was succesful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The \e clk argument designates a non gated clock
 *                              value.
 */
ALT_STATUS_CODE alt_clk_clock_disable(ALT_CLK_t clk);

/******************************************************************************/
/*!
 * Enable the specified clock. Once the clock is enabled, its clock signal
 * propogates to its elements.
 *
 * \param       clk
 *              The clock to enable.
 *
 * \retval      ALT_E_SUCCESS   The operation was succesful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The \e clk argument designates a non gated clock
 *                              value.
 */
ALT_STATUS_CODE alt_clk_clock_enable(ALT_CLK_t clk);

/******************************************************************************/
/*!
 * Return whether the specified clock is enabled or not.
 *
 * \param       clk
 *              The clock to check whether enabled or not.
 *
 * \retval      ALT_E_TRUE      The clock is enabled.
 * \retval      ALT_E_FALSE     The clock is not enabled.
 * \retval      ALT_E_BAD_ARG   The \e clk argument designates a non gated clock
 *                              value.
 */
ALT_STATUS_CODE alt_clk_is_enabled(ALT_CLK_t clk);

#endif /* #ifndef __ALT_CLK_MGR_H__ */
