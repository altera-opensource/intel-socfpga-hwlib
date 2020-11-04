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

/******************************************************************************
*
* alt_bridge_manager.c - API for the Altera SoC FPGA bridge manager.
*
******************************************************************************/

/*
 * $Id: //acds/rel/20.1/embedded/ip/hps/altera_hps/hwlib/src/hwmgr/soc_a10/alt_bridge_manager.c#1 $
 */

#include <stddef.h>
#include <string.h>
#include "socal/hps.h"
#include "socal/socal.h" 
#include "hwlib.h"
#include <stdio.h>
#include "alt_bridge_manager.h"
#include "alt_fpga_manager.h"
#include "socal/alt_rstmgr.h"

/******************************************************************************/
/* ALT_STATUS_CODE alt_bridge_fpga_is_ready(ALT_BRIDGE_t bridge)              */
/******************************************************************************/
ALT_STATUS_CODE alt_bridge_fpga_is_ready (ALT_BRIDGE_t bridge)
{
    uint32_t fpga_status;

    /* unused argument. It is for not breaking existing application.*/
    (void)bridge;

    /* NOTE: Beyond checking that the FPGA is configured, there are no HPS control
     * and status mechanisms available to check whether any clocks are enabled. */

    /* Check that FPGA is powered on.  In CV there was a specific method for this,
     * but in A10 we check if the FPGA manager has finished initializing. */
    fpga_status = alt_fpga_status_get();
    if ((fpga_status & ALT_FPGA_STATUS_F2S_INITDONE_OE) == ALT_FPGA_STATUS_F2S_INITDONE_OE)
    {
        return ALT_E_FPGA_PWR_OFF;
    }

    /* Check that FPGA has been configured and is in USER mode. */
    
    if ((fpga_status & ALT_FPGA_STATUS_F2S_USERMODE) != ALT_FPGA_STATUS_F2S_USERMODE)
    {
        return ALT_E_FPGA_NOT_USER_MODE;
    }

    return ALT_E_SUCCESS;
}

/******************************************************************************/
/* ALT_STATUS_CODE alt_bridge_init(ALT_BRIDGE_t bridge)                       */
/******************************************************************************/
ALT_STATUS_CODE alt_bridge_init(ALT_BRIDGE_t bridge)
{
    uint32_t bridge_reset_mask = 0;

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
    /* Note: The F2S bridge has not yet been tested on A10 */
    else if (bridge == ALT_BRIDGE_F2S)
    {
        bridge_reset_mask = (ALT_RSTMGR_BRGMODRST_F2SSDRAM0_SET_MSK
                            | ALT_RSTMGR_BRGMODRST_F2SSDRAM1_SET_MSK
                            | ALT_RSTMGR_BRGMODRST_F2SSDRAM2_SET_MSK);
    }
    else
    {
        return ALT_E_BAD_ARG;
    }

    /* Place and hold the specified bridge in reset. */
    alt_setbits_word(ALT_RSTMGR_BRGMODRST_ADDR, bridge_reset_mask);

    if (alt_bridge_fpga_is_ready(bridge) != ALT_E_SUCCESS)
    {            
        return ALT_E_TMO;
    }

    /* Release the bridge from reset. */
    alt_clrbits_word(ALT_RSTMGR_BRGMODRST_ADDR, bridge_reset_mask);

    return ALT_E_SUCCESS;

}

/******************************************************************************/
/* ALT_STATUS_CODE alt_bridge_uninit(ALT_BRIDGE_t bridge)                     */
/******************************************************************************/
ALT_STATUS_CODE alt_bridge_uninit(ALT_BRIDGE_t bridge)
{
    uint32_t bridge_reset_mask = 0;

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
    /* Note: The F2S bridge has not yet been tested on A10 */
    else if (bridge == ALT_BRIDGE_F2S)
    {
        bridge_reset_mask = (ALT_RSTMGR_BRGMODRST_F2SSDRAM0_SET_MSK
                            | ALT_RSTMGR_BRGMODRST_F2SSDRAM1_SET_MSK
                            | ALT_RSTMGR_BRGMODRST_F2SSDRAM2_SET_MSK);
    }
    else
    {
        return ALT_E_BAD_ARG;
    }

    if ((alt_read_word(ALT_RSTMGR_BRGMODRST_ADDR) & bridge_reset_mask) != bridge_reset_mask)
    {
        /* Place and hold the bridge in reset. */
        alt_setbits_word(ALT_RSTMGR_BRGMODRST_ADDR, bridge_reset_mask);
    }
    
    return ALT_E_SUCCESS;

}
