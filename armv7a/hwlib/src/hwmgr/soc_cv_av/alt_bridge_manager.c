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
 * $Id: //acds/rel/20.1std/embedded/ip/hps/altera_hps/hwlib/src/hwmgr/soc_cv_av/alt_bridge_manager.c#1 $
 */

#include <stddef.h>
#include <string.h>
#include "alt_bridge_manager.h"
#include "alt_clock_manager.h"
#include "alt_fpga_manager.h"
#include "socal/hps.h"
#include "socal/socal.h"
#include "socal/alt_rstmgr.h"
#include "socal/alt_sdr.h"
#include "alt_safec.h"

#include <stdio.h>

#if ALT_BRIDGE_PROVISION_F2S_SUPPORT

#include "alt_cache.h"

extern void alt_bridge_init_f2s_helper(void);

static ALT_STATUS_CODE alt_bridge_init_f2s(alt_bridge_fpga_is_ready_t fpga_is_ready,
                                           void * user_arg)
{
    bool l1_i_enabled;
    bool l1_b_enabled;
    /* Because code cannot be executing out of SDRAM, copy the init F2S routine
     * to OCRAM and run from there. But first, make a dry (simulated) if caches
     * are enabled so that the caching system will prepopulate and avoid a
     * possible problematic I-cache populate or TLB walk. */

    /* Save the portion of the OCRAM that we'll be using. It will be restored
     * afterwards. It's difficult to determine the size of the code at runtime
     * but this should suffice. */

    char buffer[40];

    /* ARMCC does not allow function addresses to be casted to a memory type.
     * This structure will work around the compiler restriction. */
    typedef void (*helper_t)(void);
    union
    {
        void *   data;
        helper_t func;
    }
    alias;

    if (fpga_is_ready != NULL)
    {
        ALT_STATUS_CODE fpga_ready_status = fpga_is_ready(user_arg);
        if (fpga_ready_status != ALT_E_SUCCESS)
        {
            /* Return the value of the non successful status code as returned from
             * the user defined callback function. */
            return fpga_ready_status;
        }
    }

    memcpy_s(buffer, sizeof(buffer),ALT_OCRAM_ADDR, sizeof(buffer));

    /* Copy the helper routine into OCRAM. */
    alias.func = alt_bridge_init_f2s_helper;
    memcpy_s(ALT_OCRAM_ADDR, sizeof(buffer),alias.data, sizeof(buffer));

    /* Disable L1 instruction and branch predictor caches. */
    l1_i_enabled = alt_cache_l1_instruction_is_enabled();
    l1_b_enabled = alt_cache_l1_branch_is_enabled();
    if (l1_i_enabled)
    {
        alt_cache_l1_instruction_disable();
    }
    if (l1_b_enabled)
    {
        alt_cache_l1_branch_disable();
    }

    /* Run the helper out of OCRAM. */
    alias.data = ALT_OCRAM_ADDR;
    alias.func();

    /* Reenable L1 instruction and branch predictor caches. */
    if (l1_i_enabled)
    {
        alt_cache_l1_instruction_enable();
    }
    if (l1_b_enabled)
    {
        alt_cache_l1_branch_enable();
    }

    /* Restore the previous contents of OCRAM. */
    memcpy_s(ALT_OCRAM_ADDR, sizeof(buffer), buffer, sizeof(buffer));

    /* Enable all ports on the SDRAM controller. */
    alt_write_word(ALT_SDR_CTL_FPGAPORTRST_ADDR, ALT_SDR_CTL_FPGAPORTRST_PORTRSTN_SET_MSK);

    return ALT_E_SUCCESS;
}

static ALT_STATUS_CODE alt_bridge_uninit_f2s(alt_bridge_teardown_handshake_t handshake,
                                             void* user_arg)
{
    if (handshake != NULL)
    {
        ALT_STATUS_CODE handshake_status = handshake(user_arg);
        if (handshake_status != ALT_E_SUCCESS)
        {
            /* Return the value of the non successful status code as returned from
             * the user defined callback function. */
            return handshake_status;
        }
    }

    alt_write_word(ALT_SDR_CTL_FPGAPORTRST_ADDR, 0);

    return ALT_E_SUCCESS;
}
#endif

ALT_STATUS_CODE alt_bridge_init(ALT_BRIDGE_t bridge,
                                alt_bridge_fpga_is_ready_t fpga_is_ready,
                                void* user_arg)
{
    ALT_FPGA_STATE_t fpga_state;
    uint32_t bridge_reset_mask = 0;

#if ALT_BRIDGE_PROVISION_F2S_SUPPORT
    if (bridge == ALT_BRIDGE_F2S)
    {
        return alt_bridge_init_f2s(fpga_is_ready, user_arg);
    }
#endif

    /* Validate the bridge parameter and set the appropriate bridge reset mask. */
    if (bridge == ALT_BRIDGE_LWH2F)
    {
        bridge_reset_mask = ALT_RSTMGR_BRGMODRST_LWH2F_SET_MSK;
    }
    else if (bridge == ALT_BRIDGE_H2F)
    {
        bridge_reset_mask = ALT_RSTMGR_BRGMODRST_H2F_SET_MSK;
    }
    else if (bridge == ALT_BRIDGE_F2H)
    {
        bridge_reset_mask = ALT_RSTMGR_BRGMODRST_F2H_SET_MSK;
    }
    else
    {
        /* Invalid bridge argument specified. */
        return ALT_E_BAD_ARG;
    }

    /* Place and hold the specified bridge in reset. */
    alt_setbits_word(ALT_RSTMGR_BRGMODRST_ADDR, bridge_reset_mask);

    /* Validate that bridge clock(s) are configured and stable. Perform the
     * clock checks prior other validations that might depend on clocks being
     * checked (e.g. FPGA manager dependency on ALT_CLK_L4_MP). */

    /* l4_mp_clk is required for all bridges. */
    if (alt_clk_is_enabled(ALT_CLK_L4_MP) != ALT_E_TRUE)
    {
        return ALT_E_BAD_CLK;
    }

    /* Although a stable l3_main_clk is required for H2F and F2H bridges, the
     * l3_main_clk is not gated and it runs directly from the Main PLL C1 output
     * so if this code is executing it effectively means that this clock is stable
     * and hence there are no meaningful validation checks that software can perform
     * on the ALT_CLK_L3_MAIN. */

    /* lws2f_axi_clk is required for LWH2F bridge and clocks all LWH2F AXI transactions.
     * s2f_axi_clk is required for H2F bridge and clocks all H2F AXI transactions.
     * f2s_axi_clk is required for F2H bridge and clocks all F2H AXI transactions.
     *
     * NOTE: All of these clocks are sourced from the FPGA and provided to the HPS.
     *       The FPGA must be configured to drive these clocks. Beyond checking that
     *       the FPGA is configured, there are no HPS control and status mechanisms
     *       available to check the operational status of these clocks. */

    /* Check that FPGA is powered on. */
    fpga_state = alt_fpga_state_get();
    if (fpga_state == ALT_FPGA_STATE_POWER_OFF)
    {
        return ALT_E_FPGA_PWR_OFF;
    }

    /* Check that FPGA has been configured and is in USER mode. */
    if (fpga_state != ALT_FPGA_STATE_USER_MODE)
    {
        return ALT_E_FPGA_NOT_USER_MODE;
    }

    /* If specified, invoke user defined callback function to determine whether the
     * FPGA is ready to commence bridge interface transactions. If no user defined
     * callback function is specified then proceed on the assumption that the FPGA
     * is ready to commence bridge transactions. */
    if (fpga_is_ready != NULL)
    {
        ALT_STATUS_CODE fpga_ready_status = fpga_is_ready(user_arg);
        if (fpga_ready_status != ALT_E_SUCCESS)
        {
            /* Return the value of the non successful status code as returned from
             * the user defined callback function. */
            return fpga_ready_status;
        }
    }

    /* Release the bridge from reset. */
    alt_clrbits_word(ALT_RSTMGR_BRGMODRST_ADDR, bridge_reset_mask);

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_bridge_uninit(ALT_BRIDGE_t bridge,
                                  alt_bridge_teardown_handshake_t handshake,
                                  void* user_arg)
{
    uint32_t bridge_reset_mask = 0;

#if ALT_BRIDGE_PROVISION_F2S_SUPPORT
    if (bridge == ALT_BRIDGE_F2S)
    {
        return alt_bridge_uninit_f2s(handshake, user_arg);
    }
#endif

    /* Validate the bridge parameter and set the appropriate bridge reset mask. */
    if (bridge == ALT_BRIDGE_LWH2F)
    {
        bridge_reset_mask = ALT_RSTMGR_BRGMODRST_LWH2F_SET_MSK;
    }
    else if (bridge == ALT_BRIDGE_H2F)
    {
        bridge_reset_mask = ALT_RSTMGR_BRGMODRST_H2F_SET_MSK;
    }
    else if (bridge == ALT_BRIDGE_F2H)
    {
        bridge_reset_mask = ALT_RSTMGR_BRGMODRST_F2H_SET_MSK;
    }
    else
    {
        /* Invalid bridge argument specified. */
        return ALT_E_BAD_ARG;
    }

    if ((alt_read_word(ALT_RSTMGR_BRGMODRST_ADDR) & bridge_reset_mask) == bridge_reset_mask)
    {
        /* The bridge is already in reset and therefore considered uninitialized. */
        return ALT_E_SUCCESS;
    }

    /* If specified, invoke user defined callback function to perform the tear-down
     * handshake notification protocol with the FPGA. If no user defined callback
     * function is specified then proceed without performing any tear-down handshake
     * notification protocol with the FPGA. */
    if (handshake != NULL)
    {
        ALT_STATUS_CODE handshake_status = handshake(user_arg);
        if (handshake_status != ALT_E_SUCCESS)
        {
            /* Return the value of the non successful status code as returned from
             * the user defined callback function. */
            return handshake_status;
        }
    }

    /* Place and hold the bridge in reset. */
    alt_setbits_word(ALT_RSTMGR_BRGMODRST_ADDR, bridge_reset_mask);

    return ALT_E_SUCCESS;
}
