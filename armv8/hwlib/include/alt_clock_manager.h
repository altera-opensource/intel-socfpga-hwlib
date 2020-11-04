/******************************************************************************
 *
 * Copyright 2015,2017 Altera Corporation. All Rights Reserved.
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

typedef uint64_t alt_freq_t;
#define ALT_CLK_ERROR ((alt_freq_t)(0))

/* ==================================================================
// Functions Definition
// ================================================================== */

typedef enum ALT_CLK
{
    ALT_CLK_OSC1,
    ALT_CLK_F2S_FREE_CLK,
    ALT_CLK_INTOSC,
    ALT_CLK_MPU,
    ALT_CLK_MPU_PERIPH,
    ALT_CLK_MPU_CCU,
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
    ALT_CLK_EMAC0,
    ALT_CLK_EMAC1,
    ALT_CLK_EMAC2,
    ALT_CLK_EMAC_PTP,
    ALT_CLK_GPIO,
    ALT_CLK_SDMMC,
    ALT_CLK_PSI_REF,
    ALT_CLK_USB,
    ALT_CLK_NAND,
    ALT_CLK_UNKNOWN
} ALT_CLK_t;

/******************************************************************************/
/*!
 * alt_clk_get_freq - returns the frequency for a single clock group
 *
 * \param       clk
 *                  The clock who's frequencies you wish to know
 * \retval      
 * \retval      ALT_E_ERROR   - An error occured during this operation
 */

alt_freq_t alt_clk_get_freq(ALT_CLK_t clk);



/******************************************************************************/
/*!
 * alt_clkmgr_get_*_freq - gets the frequency of a clock. These values could be
 *     determined by alt_clkmgr_get_group_freq, but calling these functions
 *     directly can lead to reduced binary sizes
 */
alt_freq_t alt_clk_get_osc1_freq(void);
alt_freq_t alt_clk_get_cb_intosc_freq(void);
alt_freq_t alt_clk_get_f2s_free_freq(void);
alt_freq_t alt_clk_get_mpu_freq(void);
alt_freq_t alt_clk_get_mpu_periph_freq(void);
alt_freq_t alt_clk_get_mpu_ccu_freq(void);
alt_freq_t alt_clk_get_noc_freq(void);
alt_freq_t alt_clk_get_l3_main_free_freq(void);
alt_freq_t alt_clk_get_l4_sys_free_freq(void);
alt_freq_t alt_clk_get_l4_main_freq(void);
alt_freq_t alt_clk_get_l4_mp_freq(void);
alt_freq_t alt_clk_get_l4_sp_freq(void);
alt_freq_t alt_clk_get_cs_timer_freq(void);
alt_freq_t alt_clk_get_cs_at_freq(void);
alt_freq_t alt_clk_get_cs_pdbg_freq(void);
alt_freq_t alt_clk_get_cs_trace_freq(void);
alt_freq_t alt_clk_get_nand_freq(void);
alt_freq_t alt_clk_get_usb_freq(void);
alt_freq_t alt_clk_get_emac0_freq(void);
alt_freq_t alt_clk_get_emac1_freq(void);
alt_freq_t alt_clk_get_emac2_freq(void);
alt_freq_t alt_clk_get_emac_ptp_freq(void);
alt_freq_t alt_clk_get_gpio_db_freq(void);
alt_freq_t alt_clk_get_sdmmc_freq(void);
alt_freq_t alt_clk_get_sdmmc_freq(void);
alt_freq_t alt_clk_get_s2f_user0_freq(void);
alt_freq_t alt_clk_get_s2f_user1_freq(void);
alt_freq_t alt_clk_get_psi_ref_freq(void);

/******************************************************************************/
/*!
 * Disable the specified clock. Once the clock is disabled, its clock signal does
 * not propagate to its clocked elements.
 *
 * Note: The function only can be executed at EL3.
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
 * propagates to its elements.
 *
 * Note: The function only can be executed at EL3.
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
