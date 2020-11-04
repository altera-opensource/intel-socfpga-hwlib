/******************************************************************************
*
* Copyright 2014 Altera Corporation. All Rights Reserved.
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
 * $Id: //acds/rel/20.1/embedded/ip/hps/altera_hps/hwlib/src/hwmgr/alt_can.c#1 $
 */

/* Only include this code for Cyclone V / Arria V */
#if defined(soc_cv_av)

#include "alt_can.h"
#include "alt_can_private.h"
#include "alt_reset_manager.h"
#include <stdio.h>
#include <string.h>

#include "socal/alt_sysmgr.h"

/*#define LOGGING */

/* Timeout for reset manager */
#define  ALT_CAN_RESET_TMO_INIT      8192
/* Timeout for disable device */
#define  ALT_CAN_MAX_T_POLL_COUNT    8192
/* Timeout for waiting interrupt */
#define  ALT_CAN_TMO_WAITER          2500000

#define ALT_CAN_PROTO_BASE(canbase)     ((uint8_t *)canbase + ALT_CAN0_PROTOGRP_OFST)
#define ALT_CAN_MSGHAND_BASE(canbase)   ((uint8_t *)canbase + ALT_CAN0_MSGHANDGRP_OFST)
#define ALT_CAN_MSGIF_BASE(canbase)     ((uint8_t *)canbase + ALT_CAN0_MSGIFGRP_OFST)

/*Ranges of the BitTiming parameters */
#define ALT_CAN_BITTIMMING_BRPE_MAX        1023

#define ALT_CAN_BITTIMMING_BRP_MIN         0
#define ALT_CAN_BITTIMMING_BRP_MAX         63

#define ALT_CAN_BITTIMMING_TSEG1_MIN       0
#define ALT_CAN_BITTIMMING_TSEG1_MAX       15

#define ALT_CAN_BITTIMMING_TSEG2_MIN       0
#define ALT_CAN_BITTIMMING_TSEG2_MAX       7

#define ALT_CAN_BITTIMMING_SJW_MIN         0
#define ALT_CAN_BITTIMMING_SJW_MAX         3

#define ALT_CAN_BITTIMMING_BRP_MSK         0x3F
#define ALT_CAN_BITTIMMING_SJW_MSK         0x3
#define ALT_CAN_BITTIMMING_TSEG1_MSK       0xF
#define ALT_CAN_BITTIMMING_TSEG2_MSK       0x7
#define ALT_CAN_BITTIMMING_BRPE_MSK        0xF

static ALT_STATUS_CODE alt_can_is_enabled_helper(ALT_CAN_DEV_t * can_dev);

/*
 *Check whether CAN space is correct.
*/
static ALT_STATUS_CODE alt_can_checking(ALT_CAN_DEV_t * can_dev)
{
    if (!can_dev)
    {
        /*Incorrect pointer */
        return ALT_E_FALSE;
    }

    if (   (can_dev->location != (void *)ALT_CAN_CAN0)
        && (can_dev->location != (void *)ALT_CAN_CAN1))
    {
        /*Incorrect device */
        return ALT_E_FALSE;
    }

    /*Reset CAN module */
    return ALT_E_TRUE;
}

static ALT_STATUS_CODE alt_can_rstmgr_set(ALT_CAN_DEV_t * can_dev)
{
    uint32_t rst_mask = ALT_RSTMGR_PERMODRST_CAN0_SET_MSK;

    /* Assert the appropriate CAN module reset signal via the Reset Manager Peripheral Reset register. */
    switch ((ALT_CAN_CTLR_t)can_dev->location)
    {
    case ALT_CAN_CAN0:
        rst_mask = ALT_RSTMGR_PERMODRST_CAN0_SET_MSK;
        break;
    case ALT_CAN_CAN1:
        rst_mask = ALT_RSTMGR_PERMODRST_CAN1_SET_MSK;
        break;
    default:
        return ALT_E_BAD_ARG;
    }

    alt_setbits_word(ALT_RSTMGR_PERMODRST_ADDR, rst_mask);

    return ALT_E_SUCCESS;
}

/*
 * Reset CAN module by reset manager
*/
static ALT_STATUS_CODE alt_can_rstmgr_strobe(ALT_CAN_DEV_t * can_dev)
{
    uint32_t timeout;
    uint32_t rst_mask = ALT_RSTMGR_PERMODRST_CAN0_SET_MSK;

    /* Assert the appropriate CAN module reset signal via the Reset Manager Peripheral Reset register. */
    switch ((ALT_CAN_CTLR_t)can_dev->location)
    {
    case ALT_CAN_CAN0:
        rst_mask = ALT_RSTMGR_PERMODRST_CAN0_SET_MSK;
        break;
    case ALT_CAN_CAN1:
        rst_mask = ALT_RSTMGR_PERMODRST_CAN1_SET_MSK;
        break;
    default:
        return ALT_E_BAD_ARG;
    }

    alt_setbits_word(ALT_RSTMGR_PERMODRST_ADDR, rst_mask);

    timeout = ALT_CAN_RESET_TMO_INIT;

    /* Wait while CAN module is reseting */
    while (timeout--)
        ;

    /* Deassert the appropriate CAN module reset signal via the Reset Manager Peripheral Reset register. */
    alt_clrbits_word(ALT_RSTMGR_PERMODRST_ADDR, rst_mask);

    return ALT_E_SUCCESS;
}

/*
 *Initialize the specified CAN controller instance for use and return a device
 *handle referencing it.
 * */
ALT_STATUS_CODE alt_can_init(const ALT_CAN_CTLR_t can,
                             ALT_CAN_DEV_t * can_dev)
{
    ALT_CLK_t clk;
    ALT_STATUS_CODE status = ALT_E_SUCCESS;

#ifdef LOGGING
    printf("alt_can_init\n");
#endif

    /* Fail if CAN is not available. */
    if (ALT_SYSMGR_HPSINFO_CAN_GET(alt_read_word(ALT_SYSMGR_HPSINFO_ADDR))
        != ALT_SYSMGR_HPSINFO_CAN_E_CAN_AVAILABLE)
    {
        return ALT_E_BAD_OPERATION;
    }

    /* Save CAN start address to the instance */
    can_dev->location = (void *)can;

    if (alt_can_checking(can_dev) == ALT_E_FALSE)
    {
        return ALT_E_BAD_ARG;
    }

    clk = ((can_dev->location == (void *)ALT_CAN_CAN0) ? ALT_CLK_CAN0 : ALT_CLK_CAN1);
    if (alt_clk_is_enabled(clk) != ALT_E_TRUE)
    {
        return ALT_E_BAD_CLK;
    }

    /* Power cycle the module otherwise if init is called after uninit, the module is held in reset. */
    if (status == ALT_E_SUCCESS)
    {
        status = alt_can_rstmgr_strobe(can_dev);
    }

    /* Reset CAN module */
    if (status == ALT_E_SUCCESS)
    {
        status = alt_can_reset(can_dev);
    }

    /* Enable device
     * TODO [Fred Hsueh]: Convention is not to enable devices after init().
     *   Making this change will affect many tests. */
    if (status == ALT_E_SUCCESS)
    {
        status = alt_can_enable(can_dev);
    }

    return status;
}

/*
 *Reset CAN module
*/
ALT_STATUS_CODE alt_can_reset(ALT_CAN_DEV_t * can_dev)
{
    uint32_t timeout = ALT_CAN_RESET_TMO_INIT;
    uint32_t n;
    bool already_enabled;
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    uint32_t i;
#ifdef LOGGING
    printf("alt_can_reset\n");
#endif
    if (alt_can_checking(can_dev) == ALT_E_FALSE)
    {
        return ALT_E_BAD_ARG;
    }

    already_enabled = (alt_can_is_enabled_helper(can_dev) == ALT_E_TRUE);

    if (already_enabled)
    {
        /* Temporarily disable controller */
        status = alt_can_disable(can_dev);
        if (status != ALT_E_SUCCESS)
        {
            return status;
        }
    }

    /* Reset CAN module by reset manager */
    alt_can_rstmgr_strobe(can_dev);

    alt_can_mailboxes_reset(can_dev);

    /* RAM Initialization */
    alt_setbits_word(ALT_CAN_PROTO_CFR_ADDR(ALT_CAN_PROTO_BASE(can_dev->location)), ALT_CAN_PROTO_CFR_RAMINIT_SET_MSK);

    while ((alt_read_word(ALT_CAN_PROTO_CFR_ADDR(ALT_CAN_PROTO_BASE(can_dev->location))) & ALT_CAN_PROTO_CFR_RAMINIT_SET_MSK)
            && (--timeout));
    if(timeout == 0)
    {
        return ALT_E_TMO;
    }

    /* Enable automatic retransmission */
    alt_clrbits_word(ALT_CAN_PROTO_CCTL_ADDR(ALT_CAN_PROTO_BASE(can_dev->location)), ALT_CAN_PROTO_CCTL_DAR_SET_MSK);

    alt_can_baudrate_set(can_dev, 100000);

    if (already_enabled)
    {
        /* Re-enable controller */
        status = alt_can_enable(can_dev);
    }
    for (n = 0; n < ALT_CAN_MAILBOXES_COUNT; n++)
    {
        can_dev->mailboxes[n].init_done = false;
    }

    /* Invalidating of all message objects */
    for (i = 1; i <= ALT_CAN_MAILBOXES_COUNT; i++)
        alt_can_mailbox_reset(can_dev, ALT_CAN_INTERFACE_WRITE, i);

    /* Clear status, assign to timeout to avoid compiler warning */
    timeout = alt_read_word(ALT_CAN_PROTO_CSTS_ADDR(ALT_CAN_PROTO_BASE(can_dev->location)));


    return status;
}

/*
 *Uninitialize the CAN controller referenced by the can_dev handle.
*/
ALT_STATUS_CODE alt_can_uninit(ALT_CAN_DEV_t * can_dev)
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
#ifdef LOGGING
    printf("alt_can_uninit\n");
#endif
    if (alt_can_checking(can_dev) == ALT_E_FALSE)
    {
        return ALT_E_BAD_ARG;
    }

    /*Disable CAN controller */
    status = alt_can_int_disable(can_dev, ALT_CAN_INT_GROUP_ALL);

    /*Reset CAN module by reset manager */
    if (status == ALT_E_SUCCESS)
    {
        status = alt_can_rstmgr_set(can_dev);
    }

    return status;
}

/*
 * Configures the baudrate
*/
ALT_STATUS_CODE alt_can_baudrate_set(ALT_CAN_DEV_t * can_dev, const uint32_t bitrate)
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    ALT_STATUS_CODE return_status = ALT_E_SUCCESS;
    ALT_CAN_BITTIME_t bittime = {0};

    bool already_enabled = (alt_can_is_enabled_helper(can_dev) == ALT_E_TRUE);

    if (already_enabled)
    {
        /* Temporarily disable controller */
        status = alt_can_disable(can_dev);
        if (status != ALT_E_SUCCESS)
        {
            return status;
        }
    }

    /* Configuration Change Enable for set bit timing parameters */
    alt_setbits_word(ALT_CAN_PROTO_CCTL_ADDR(ALT_CAN_PROTO_BASE(can_dev->location)), ALT_CAN_PROTO_CCTL_CCE_SET_MSK);

    alt_can_rate_to_bittime(can_dev, bitrate, &bittime);
    return_status = alt_can_bit_timing_set(can_dev, &bittime);

    /* Disable Configuration Changes */
    alt_clrbits_word(ALT_CAN_PROTO_CCTL_ADDR(ALT_CAN_PROTO_BASE(can_dev->location)),
                     ALT_CAN_PROTO_CCTL_CCE_SET_MSK);
    if (already_enabled)
    {
        /* Re-enable controller */
        status = alt_can_enable(can_dev);
        if (status != ALT_E_SUCCESS)
        {
            return status;
         }
    }
    return return_status;
}

/*
 *Sets the configuration of the CAN bit timing
*/
ALT_STATUS_CODE alt_can_bit_timing_set(ALT_CAN_DEV_t *can_dev, ALT_CAN_BITTIME_t * bittime)
{

    if(alt_can_checking(can_dev) == ALT_E_FALSE)
    {
        return ALT_E_BAD_ARG;
    }

    /* To avoid armcc compiler warnings */
    #if ALT_CAN_BITTIMMING_BRP_MIN
    if(bittime->brp < ALT_CAN_BITTIMMING_BRP_MIN)
    {
        return ALT_E_ERROR;
    }
    #endif
    #if ALT_CAN_BITTIMMING_TSEG1_MIN
    if (bittime->tseg1 < ALT_CAN_BITTIMMING_TSEG1_MIN)
    {
        return ALT_E_ERROR;
    }
    #endif
    #if ALT_CAN_BITTIMMING_TSEG2_MIN
    if (bittime->tseg2 < ALT_CAN_BITTIMMING_TSEG2_MIN)
    {
        return ALT_E_ERROR;
    }
    #endif
    #if ALT_CAN_BITTIMMING_SJW_MIN
    if (bittime->sjw < ALT_CAN_BITTIMMING_SJW_MIN)
    {
        return ALT_E_ERROR;
    }
    #endif

    if( (bittime->brp > ALT_CAN_BITTIMMING_BRP_MAX)
        || (bittime->tseg1 > ALT_CAN_BITTIMMING_TSEG1_MAX)
        || (bittime->tseg2 > ALT_CAN_BITTIMMING_TSEG2_MAX)
        || (bittime->sjw > ALT_CAN_BITTIMMING_SJW_MAX)
        || (bittime->brpe > ALT_CAN_BITTIMMING_BRPE_MAX))
    {
        return ALT_E_ERROR;
    }
    alt_write_word(ALT_CAN_PROTO_CBT_ADDR(ALT_CAN_PROTO_BASE(can_dev->location)),
                   ALT_CAN_PROTO_CBT_BRP_SET(bittime->brp)
                 | ALT_CAN_PROTO_CBT_TSEG1_SET(bittime->tseg1)
                 | ALT_CAN_PROTO_CBT_TSEG2_SET(bittime->tseg2)
                 | ALT_CAN_PROTO_CBT_SJW_SET(bittime->sjw)
                 | ALT_CAN_PROTO_CBT_BRPE_SET(bittime->brpe));

    return ALT_E_SUCCESS;
}


/*
 *Gets the current configuration of the CAN bit timing.
*/
ALT_STATUS_CODE alt_can_bit_timing_get(ALT_CAN_DEV_t *can_dev, ALT_CAN_BITTIME_t * bittime)
{
    uint32_t bittime_reg;

    if(alt_can_checking(can_dev) == ALT_E_FALSE)
    {
        return ALT_E_BAD_ARG;
    }

    bittime_reg = alt_read_word(ALT_CAN_PROTO_CBT_ADDR(ALT_CAN_PROTO_BASE(can_dev->location)));

    bittime->brp = ALT_CAN_PROTO_CBT_BRP_GET(bittime_reg);
    bittime->tseg1 = ALT_CAN_PROTO_CBT_TSEG1_GET(bittime_reg);
    bittime->tseg2 = ALT_CAN_PROTO_CBT_TSEG2_GET(bittime_reg);
    bittime->sjw = ALT_CAN_PROTO_CBT_SJW_GET(bittime_reg);
    bittime->brpe = ALT_CAN_PROTO_CBT_BRPE_GET(bittime_reg);

    return ALT_E_SUCCESS;

}

/*
 *Return CAN controller configurations based on speed parameter(Hz).
*/
ALT_STATUS_CODE alt_can_rate_to_bittime(ALT_CAN_DEV_t *can_dev, uint32_t bitrate,
                                        ALT_CAN_BITTIME_t * bittime)
{

    alt_freq_t clock_freq;
    ALT_CLK_t clk = ((can_dev->location == (void *)ALT_CAN_CAN0) ? ALT_CLK_CAN0 : ALT_CLK_CAN1);
    uint32_t rate;
    uint32_t best_error = 1000000000;
    int32_t error = 0;
    uint32_t tsegall;
    uint32_t tseg = 0;
    uint32_t spt_error = 1000;
    uint32_t spt = 0;
    uint32_t sampl_pt;
    ALT_STATUS_CODE status = ALT_E_SUCCESS;

#ifdef LOGGING
    printf("alt_can_bittiming_set\n");
#endif
    if (bitrate == 0)
    {
        return ALT_E_BAD_ARG;
    }

    status = alt_clk_freq_get(clk, &clock_freq);
    if (status != ALT_E_SUCCESS)
    {
        return status;
    }

    if (bitrate > 800000)
        sampl_pt = 750;
    else if (bitrate > 500000)
        sampl_pt = 800;
    else
        sampl_pt = 875;
    
    /*Tseg even = round down
     *odd = round up */

    for (tseg = (ALT_CAN_BITTIMMING_TSEG1_MAX + 1 + ALT_CAN_BITTIMMING_TSEG2_MAX + 1) * 2 + 1;
            tseg >= (ALT_CAN_BITTIMMING_TSEG1_MIN + 1 + ALT_CAN_BITTIMMING_TSEG2_MIN + 1) * 2; tseg--)
    {
        tsegall = 1 + tseg / 2;

        /* Compute all possible tseg choices (tseg=tseg1+tseg2) */
        bittime->brp = clock_freq / (tsegall * bitrate) + tseg % 2;
        if ((bittime->brp < 1) || (bittime->brp > 1024))
            continue;

        /*Bitrate for current brp */
        rate = clock_freq / (bittime->brp * tsegall);
        error = bitrate - rate;
        
        /*Tseg brp biterror */
        if (error < 0)
            error = -error;
        if ((uint32_t)error > best_error)
            continue;
        
        best_error = error;
        
        if (error == 0)
        {
            bittime->tseg2 = (tseg / 2) + 1 - (sampl_pt * ((tseg / 2) + 1)) / 1000;
            if (bittime->tseg2 < ALT_CAN_BITTIMMING_TSEG2_MIN + 1)
                bittime->tseg2 = ALT_CAN_BITTIMMING_TSEG2_MIN + 1;
            if (bittime->tseg2 > ALT_CAN_BITTIMMING_TSEG2_MAX + 1)
                bittime->tseg2 = ALT_CAN_BITTIMMING_TSEG2_MAX + 1;
            
            bittime->tseg1 = (tseg / 2) - bittime->tseg2;
            if (bittime->tseg1 > ALT_CAN_BITTIMMING_TSEG1_MAX + 1)
            {
                bittime->tseg1 = ALT_CAN_BITTIMMING_TSEG1_MAX + 1;
                bittime->tseg2 = tseg - bittime->tseg1;
            }
            
            spt = 1000 * ((tseg / 2) + 1 - bittime->tseg2) / ((tseg / 2) + 1);
            
            error = sampl_pt - spt;
            if (error < 0)
                error = -error;
            if ((uint32_t)error > spt_error)
                continue;
            spt_error = error;
            
        }
        
        if (error == 0)
            break;
    }
    
    bittime->tseg2 = (bittime->tseg2 - 1) & ALT_CAN_BITTIMMING_TSEG2_MSK;
    bittime->tseg1 = (bittime->tseg1 - 1) & ALT_CAN_BITTIMMING_TSEG1_MSK;
    bittime->sjw = 0;
    
    bittime->brpe = ((bittime->brp - 1) >> 6) & ALT_CAN_BITTIMMING_BRPE_MSK;
    bittime->brp = (bittime->brp - 1) & ALT_CAN_BITTIMMING_BRP_MSK;
    
    return status;

}

/*
 *Enable test mode of the CAN controller and set type of it.
*/
ALT_STATUS_CODE alt_can_test_mode_enable(ALT_CAN_DEV_t *can_dev, ALT_CAN_TEST_TYPE_t type)
{
    uint32_t silent;
    uint32_t lback;
#ifdef LOGGING
    printf("alt_can_test_mode_enable\n");
#endif
    if (alt_can_checking(can_dev) == ALT_E_FALSE)
    {
        return ALT_E_BAD_ARG;
    }

    alt_replbits_word(ALT_CAN_PROTO_CCTL_ADDR(ALT_CAN_PROTO_BASE(can_dev->location)),
                    ALT_CAN_PROTO_CCTL_TEST_SET_MSK,
                    ALT_CAN_PROTO_CCTL_TEST_SET(ALT_CAN_PROTO_CCTL_TEST_E_TESTMOD));

    silent = ((type == ALT_CAN_TEST_SILENT || type == ALT_CAN_TEST_MIXED) 
                                                    ? ALT_CAN_PROTO_CTR_SILENT_E_SILENT
                                                    : ALT_CAN_PROTO_CTR_SILENT_E_NORMAL);
    lback = ((type == ALT_CAN_TEST_LOOP_BACK || type == ALT_CAN_TEST_MIXED) 
                                                    ? ALT_CAN_PROTO_CTR_LBACK_E_END
                                                    : ALT_CAN_PROTO_CTR_LBACK_E_DISD);

    alt_write_word(ALT_CAN_PROTO_CTR_ADDR(ALT_CAN_PROTO_BASE(can_dev->location)),
                    ALT_CAN_PROTO_CTR_SILENT_SET(silent)
                    | ALT_CAN_PROTO_CTR_LBACK_SET(lback));

    return ALT_E_SUCCESS;
}

/*
 *Disables test mode of the CAN controller.
*/
ALT_STATUS_CODE alt_can_test_mode_disable(ALT_CAN_DEV_t *can_dev)
{
#ifdef LOGGING
    printf("alt_can_test_mode_disable\n");
#endif
    if (alt_can_checking(can_dev) == ALT_E_FALSE)
    {
        return ALT_E_BAD_ARG;
    }

    alt_write_word(ALT_CAN_PROTO_CTR_ADDR(ALT_CAN_PROTO_BASE(can_dev->location)),
                    ALT_CAN_PROTO_CTR_SILENT_SET(ALT_CAN_PROTO_CTR_SILENT_E_NORMAL)
                    | ALT_CAN_PROTO_CTR_LBACK_SET(ALT_CAN_PROTO_CTR_LBACK_E_DISD));

    return ALT_E_SUCCESS;
}

/*
 *Returns ALT_E_TRUE if the test mode of the CAN controller is enabled.
*/
ALT_STATUS_CODE alt_can_test_mode_is_enabled(ALT_CAN_DEV_t *can_dev, ALT_CAN_TEST_TYPE_t * type)
{
    uint32_t test_reg;
    bool silent;
    bool lback;

    if ((alt_can_checking(can_dev) == ALT_E_FALSE) || (type == NULL))
    {
        return ALT_E_BAD_ARG;
    }

    test_reg = alt_read_word(ALT_CAN_PROTO_CTR_ADDR(ALT_CAN_PROTO_BASE(can_dev->location)));
    silent = (ALT_CAN_PROTO_CTR_SILENT_GET(test_reg)== ALT_CAN_PROTO_CTR_SILENT_E_SILENT);
    lback = (ALT_CAN_PROTO_CTR_LBACK_SET(test_reg) == ALT_CAN_PROTO_CTR_LBACK_E_END);

    if (!silent && !lback)
    {
        return ALT_E_FALSE;
    }
    else if (silent && !lback)
    {
        *type = ALT_CAN_TEST_SILENT;
    }
    else if (!silent && lback)
    {
        *type = ALT_CAN_TEST_LOOP_BACK;
    }
    else if (silent && lback)
    {
        *type = ALT_CAN_TEST_MIXED;
    }
    
    return ALT_E_TRUE;
}

/*
 *Sets the message object parameters of the CAN controller.
*/
ALT_STATUS_CODE alt_can_if_cmd_set(ALT_CAN_DEV_t * can_dev, ALT_CAN_INTERFACE_t if_index,
                                            uint32_t msg_obj_num, ALT_CAN_MSG_PARAM_t * cmd_params)
{
#ifdef LOGGING
    printf("alt_can_if_cmd_set\n");
#endif
    alt_write_word(ALT_CAN_MSGIF_IFCMR_ADDR(ALT_CAN_MSGIF_BASE(can_dev->location), if_index),
              ALT_CAN_MSGIF_IFCMR_AUTOINC_SET(cmd_params->auto_inc)
            | ALT_CAN_MSGIF_IFCMR_ARB_SET(cmd_params->arbitration)
            | ALT_CAN_MSGIF_IFCMR_CLRAUTOINC_SET(cmd_params->clr_auto_inc)
            | ALT_CAN_MSGIF_IFCMR_CLRINTPND_SET(cmd_params->clr_int_pnd)
            | ALT_CAN_MSGIF_IFCMR_CTL_SET(cmd_params->control)
            | ALT_CAN_MSGIF_IFCMR_DATAA_SET(cmd_params->data_A)
            | ALT_CAN_MSGIF_IFCMR_DATAB_SET(cmd_params->data_B)
            | ALT_CAN_MSGIF_IFCMR_DMAACT_SET(cmd_params->DMA_active)
            | ALT_CAN_MSGIF_IFCMR_MSK_SET(cmd_params->mask)
            | ALT_CAN_MSGIF_IFCMR_TXRQSTNEWDAT_SET(cmd_params->tx_rqst_new_dat)
            | ALT_CAN_MSGIF_IFCMR_WR1RD0_SET(cmd_params->write)
            | ALT_CAN_MSGIF_IFCMR_MONUM_SET(msg_obj_num));

    return ALT_E_SUCCESS;
}

/*
 *Sets the message object mask of the CAN controller.
*/
ALT_STATUS_CODE alt_can_if_mask_set(ALT_CAN_DEV_t * can_dev, ALT_CAN_INTERFACE_t if_index,
                                        ALT_CAN_MSG_MSK_t * ctrl)
{
#ifdef LOGGING
    printf("alt_can_if_mask_set\n");
#endif
    alt_write_word(ALT_CAN_MSGIF_IFMSK_ADDR(ALT_CAN_MSGIF_BASE(can_dev->location), if_index),
              ALT_CAN_MSGIF_IFMSK_MSK_SET(ctrl->mask)
            | ALT_CAN_MSGIF_IFMSK_MDIR_SET(ctrl->direction)
            | ALT_CAN_MSGIF_IFMSK_MXTD_SET(ctrl->extended));

    return ALT_E_SUCCESS;
}

/*
 *Gets the message object mask of the CAN controller.
*/
ALT_STATUS_CODE alt_can_if_mask_get(ALT_CAN_DEV_t * can_dev, ALT_CAN_INTERFACE_t if_index,
                                        ALT_CAN_MSG_MSK_t *mask_param)
{
    uint32_t mask_reg;
#ifdef LOGGING
    printf("alt_can_if_arb_get\n");
#endif
    if (alt_can_checking(can_dev) == ALT_E_FALSE || !mask_param )
    {
        return ALT_E_BAD_ARG;
    }

    mask_reg = alt_read_word(ALT_CAN_MSGIF_IFMSK_ADDR(ALT_CAN_MSGIF_BASE(can_dev->location), if_index));

    mask_param->mask = ALT_CAN_MSGIF_IFMSK_MSK_GET(mask_reg);
    mask_param->direction = ALT_CAN_MSGIF_IFMSK_MDIR_GET(mask_reg);
    mask_param->extended = ALT_CAN_MSGIF_IFMSK_MXTD_GET(mask_reg);

    return ALT_E_SUCCESS;
}

/*
 *Sets the message object arbitration of the CAN controller.
*/
ALT_STATUS_CODE alt_can_if_arb_set(ALT_CAN_DEV_t * can_dev, ALT_CAN_INTERFACE_t if_index,
                                        ALT_CAN_MSG_ARB_t * arb_param)
{
#ifdef LOGGING
    printf("alt_can_if_arb_set\n");
#endif
    alt_write_word(ALT_CAN_MSGIF_IFARB_ADDR(ALT_CAN_MSGIF_BASE(can_dev->location), if_index),
              ALT_CAN_MSGIF_IFARB_ID_SET(arb_param->id)
            | ALT_CAN_MSGIF_IFARB_DIR_SET(arb_param->direction)
            | ALT_CAN_MSGIF_IFARB_XTD_SET(arb_param->extended)
            | ALT_CAN_MSGIF_IFARB_MSGVAL_SET(arb_param->valid));

    return ALT_E_SUCCESS;
}

/*
 *Gets the message object arbitration of the CAN controller.
*/
ALT_STATUS_CODE alt_can_if_arb_get(ALT_CAN_DEV_t * can_dev, ALT_CAN_INTERFACE_t if_index,
                                        ALT_CAN_MSG_ARB_t *arb_param)
{
    uint32_t arb_reg;
#ifdef LOGGING
    printf("alt_can_if_arb_get\n");
#endif
    if (alt_can_checking(can_dev) == ALT_E_FALSE || !arb_param )
    {
        return ALT_E_BAD_ARG;
    }

    arb_reg = alt_read_word(ALT_CAN_MSGIF_IFARB_ADDR(ALT_CAN_MSGIF_BASE(can_dev->location), if_index));

    arb_param->id = ALT_CAN_MSGIF_IFARB_ID_GET(arb_reg);
    arb_param->direction = ALT_CAN_MSGIF_IFARB_DIR_GET(arb_reg);
    arb_param->extended = ALT_CAN_MSGIF_IFARB_XTD_GET(arb_reg);
    arb_param->valid = ALT_CAN_MSGIF_IFARB_MSGVAL_GET(arb_reg);

    return ALT_E_SUCCESS;
}

/*
 *Sets the message object control of the CAN controller.
*/
ALT_STATUS_CODE alt_can_if_msg_ctrl_set(ALT_CAN_DEV_t * can_dev, ALT_CAN_INTERFACE_t if_index,
                                                ALT_CAN_MSG_IFMCTR_t *ctrl)
{
#ifdef LOGGING
    printf("alt_can_if_msg_ctrl_set\n");
#endif
    alt_write_word(ALT_CAN_MSGIF_IFMCTR_ADDR(ALT_CAN_MSGIF_BASE(can_dev->location), if_index),
              ALT_CAN_MSGIF_IFMCTR_DLC_SET(ctrl->data_len)
            | ALT_CAN_MSGIF_IFMCTR_EOB_SET(ctrl->block_end)
            | ALT_CAN_MSGIF_IFMCTR_INTPND_SET(ctrl->int_pending)
            | ALT_CAN_MSGIF_IFMCTR_NEWDAT_SET(ctrl->new_data)
            | ALT_CAN_MSGIF_IFMCTR_RMTEN_SET(ctrl->remote)
            | ALT_CAN_MSGIF_IFMCTR_RXIE_SET(ctrl->rx_int)
            | ALT_CAN_MSGIF_IFMCTR_TXIE_SET(ctrl->tx_int)
            | ALT_CAN_MSGIF_IFMCTR_TXRQST_SET(ctrl->tx_rqst)
            | ALT_CAN_MSGIF_IFMCTR_UMSK_SET(ctrl->accept_mask));

    return ALT_E_SUCCESS;
}

/*
 *Gets the message object control of the CAN controller.
*/
ALT_STATUS_CODE alt_can_if_msg_ctrl_get(ALT_CAN_DEV_t * can_dev, ALT_CAN_INTERFACE_t if_index,
                                        ALT_CAN_MSG_IFMCTR_t *ctrl)
{
    uint32_t ctr_reg;
#ifdef LOGGING
    printf("alt_can_if_arb_get\n");
#endif
    if (alt_can_checking(can_dev) == ALT_E_FALSE || !ctrl )
    {
        return ALT_E_BAD_ARG;
    }

    ctr_reg = alt_read_word(ALT_CAN_MSGIF_IFMCTR_ADDR(ALT_CAN_MSGIF_BASE(can_dev->location), if_index));

    ctrl->data_len = ALT_CAN_MSGIF_IFMCTR_DLC_GET(ctr_reg);
    ctrl->block_end = ALT_CAN_MSGIF_IFMCTR_EOB_GET(ctr_reg);
    ctrl->int_pending = ALT_CAN_MSGIF_IFMCTR_INTPND_GET(ctr_reg);
    ctrl->new_data = ALT_CAN_MSGIF_IFMCTR_NEWDAT_GET(ctr_reg);
    ctrl->remote = ALT_CAN_MSGIF_IFMCTR_RMTEN_GET(ctr_reg);
    ctrl->rx_int = ALT_CAN_MSGIF_IFMCTR_RXIE_GET(ctr_reg);
    ctrl->tx_int = ALT_CAN_MSGIF_IFMCTR_TXIE_GET(ctr_reg);
    ctrl->tx_rqst = ALT_CAN_MSGIF_IFMCTR_TXRQST_GET(ctr_reg);
    ctrl->accept_mask = ALT_CAN_MSGIF_IFMCTR_UMSK_GET(ctr_reg);

    return ALT_E_SUCCESS;
}

/*
 *Sends 8 data bytes to the CAN controller.
*/
ALT_STATUS_CODE alt_can_if_data_set(ALT_CAN_DEV_t * can_dev, ALT_CAN_INTERFACE_t if_index,
                                        uint32_t dataA, uint32_t dataB)
{
#ifdef LOGGING
    printf("alt_can_if_data_set\n");
#endif
    if (alt_can_checking(can_dev) == ALT_E_FALSE)
    {
        return ALT_E_BAD_ARG;
    }

    alt_write_word(ALT_CAN_MSGIF_IFDB_ADDR(ALT_CAN_MSGIF_BASE(can_dev->location), if_index), dataB);
    alt_write_word(ALT_CAN_MSGIF_IFDA_ADDR(ALT_CAN_MSGIF_BASE(can_dev->location), if_index), dataA);
    return ALT_E_SUCCESS;
}

/*
 *Gets 8 data bytes from the CAN controller.
*/
ALT_STATUS_CODE alt_can_if_data_get(ALT_CAN_DEV_t * can_dev, ALT_CAN_INTERFACE_t if_index,
                                        uint32_t * dataA, uint32_t * dataB)
{
#ifdef LOGGING
    printf("alt_can_if_data_get\n");
#endif
    if (alt_can_checking(can_dev) == ALT_E_FALSE || !dataA || !dataB)
    {
        return ALT_E_BAD_ARG;
    }

    *dataA = alt_read_word(ALT_CAN_MSGIF_IFDA_ADDR(ALT_CAN_MSGIF_BASE(can_dev->location), if_index)); /*  no, its normal packet with data*/
    *dataB = alt_read_word(ALT_CAN_MSGIF_IFDB_ADDR(ALT_CAN_MSGIF_BASE(can_dev->location), if_index));
    return ALT_E_SUCCESS;
}

/*
 *Put Message Object to mailbox from interface registers.
*/
ALT_STATUS_CODE alt_can_message_put(ALT_CAN_DEV_t *can_dev,
                                    ALT_CAN_INTERFACE_t if_index,
                                    uint32_t msg_obj_num,
                                    ALT_CAN_MSG_PARAM_t * cmd_params)
{
    uint32_t timeout = ALT_CAN_RESET_TMO_INIT;
    
#ifdef LOGGING
    printf("alt_can_message_put\n");
#endif
    
    if (cmd_params == NULL)
    {
        return ALT_E_BAD_ARG;
    }
    
    cmd_params->write = true;
    alt_can_if_cmd_set(can_dev, if_index, msg_obj_num, cmd_params);

    /*As per specs, after writing the message object number in the IF command register 
     *the transfer b/w interface register and message RAM must be complete in 12 CAN-CLK period. */
    /* Wait while CAN module is reseting */
    while (alt_can_message_is_busy(can_dev, if_index) && --timeout);

    if(timeout)
    {
        return ALT_E_SUCCESS;
    }
    else
    {
        return ALT_E_ERROR;
    }
}

/*
 *Get Message Object from mailbox to interface registers.
*/
ALT_STATUS_CODE alt_can_message_get(ALT_CAN_DEV_t *can_dev,
                                    ALT_CAN_INTERFACE_t if_index,
                                    uint32_t msg_obj_num,
                                    ALT_CAN_MSG_PARAM_t * cmd_params)
{
    uint32_t timeout;
#ifdef LOGGING
    printf("alt_can_message_get\n");
#endif

    if ((msg_obj_num < 1) || (msg_obj_num > ALT_CAN_MAILBOXES_COUNT) || (cmd_params == NULL))
    {
        return ALT_E_BAD_ARG;
    }
    
    cmd_params->write = false;
    alt_can_if_cmd_set(can_dev, if_index, msg_obj_num, cmd_params);

    /*As per specs, after writing the message object number in the IF command register 
     *the transfer b/w interface register and message RAM must be complete in 12 CAN-CLK period. */
    timeout = ALT_CAN_RESET_TMO_INIT;
    
    /*Wait while CAN module is reseting */
    while (alt_can_message_is_busy(can_dev, if_index) && --timeout);

    if(timeout)
    {
        return ALT_E_SUCCESS;
    }
    else
    {
        return ALT_E_ERROR;
    }
}

/*
 *Return ALT_E_TRUE if specifier message in specifier interface is busy.
*/
ALT_STATUS_CODE alt_can_message_is_busy(ALT_CAN_DEV_t *can_dev, ALT_CAN_INTERFACE_t if_index)
{
#ifdef LOGGING
    printf("alt_can_message_is_busy\n");
#endif
    if (alt_can_checking(can_dev) == ALT_E_FALSE)
    {
        return ALT_E_BAD_ARG;
    }

    if ( ALT_CAN_MSGIF_IFCMR_BUSY_GET(alt_read_word(ALT_CAN_MSGIF_IFCMR_ADDR(ALT_CAN_MSGIF_BASE(can_dev->location), if_index))))
    {
#ifdef LOGGING
        printf("alt_can_message_is_busy : TRUE\n");
#endif
        return ALT_E_TRUE;
    }
    else
    {
#ifdef LOGGING
        printf("alt_can_message_is_busy : FALSE\n");
#endif
        return ALT_E_FALSE;
    }
}

/*
 *Reset specified mailbox.
*/
ALT_STATUS_CODE alt_can_mailbox_reset(ALT_CAN_DEV_t * can_dev,
                                      ALT_CAN_INTERFACE_t if_index,
                                      uint32_t msg_obj_num)
{
#ifdef LOGGING
    printf("alt_can_mailbox_reset\n");
#endif
    ALT_STATUS_CODE status = ALT_E_SUCCESS;

    ALT_CAN_MSG_PARAM_t msg_param = {0};
    ALT_CAN_MSG_IFMCTR_t ctrl = {0};
    ALT_CAN_MSG_ARB_t arb_param = {0};

    /*Clear arbitration and control of mailbox */
    alt_can_if_arb_set(can_dev, if_index, &arb_param);
    alt_can_if_msg_ctrl_set(can_dev, if_index, &ctrl);

    /*Change state of mailbox */
    msg_param.arbitration = true;
    msg_param.control = true;
    
    status = alt_can_message_put(can_dev, if_index, msg_obj_num, &msg_param);
    return status;

}

/*
 *Setup specified mailbox for receiving data with specified param.
*/
static ALT_STATUS_CODE alt_can_message_recv_setup(ALT_CAN_DEV_t *can_dev,
                                                  ALT_CAN_INTERFACE_t if_index,
                                                  uint32_t msg_obj_num,
                                                  uint32_t mask,
                                                  uint32_t id,
                                                  ALT_CAN_MSG_IFMCTR_t *ctrl)
{

    ALT_CAN_MSG_ARB_t         arb_param = {0};
    ALT_CAN_MSG_PARAM_t     cmd_params = {0};
    ALT_CAN_MSG_MSK_t       msk_param = {0};

    ALT_CAN_MAILBOX_PARAM_t * mailbox;      /* Instantitate Mailbox Param */

#ifdef LOGGING
    printf("alt_can_message_recv_setup\n");
#endif
    ALT_STATUS_CODE status = ALT_E_SUCCESS;

    /* Initialize Mailbox */
    mailbox = &(can_dev->mailboxes[msg_obj_num-1]);

    /*Set filter for receive */
    msk_param.mask = mask;
    msk_param.direction = true;     /* Use Message Direction Bit for Acceptance Filtering */
    msk_param.extended = true;      /* Use Extended Identifier bits for Acceptance Filtering */

    status = alt_can_if_mask_set(can_dev, if_index, &msk_param);
    if(status != ALT_E_SUCCESS)
    {
        return status;
    }


    /*Set arbitration of mailbox (direction = 0/read) */
    arb_param.id = id;                              /* 28 bit CAN id*/
    arb_param.valid = true;                         /* Mark Message Object as Valid */
    arb_param.extended = mailbox->extend;           /* Extended Messaging Dependent on Mailbox Setup */
    arb_param.direction = !mailbox->transfer_mode;  /* Store Message in Message Object on Recieve */

    /* printf(arb_param.id); */
    /* printf("arb_param.id = %x\n", (unsigned int) arb_param.id); */
    /* printf("arb_param.valid = %x\n", (unsigned int) arb_param.valid); */
    /* printf("arb_param.extended = %x\n", (unsigned int) arb_param.extended); */
    /* printf("arb_param.direction = %x\n", (unsigned int) arb_param.direction); */

    status = alt_can_if_arb_set(can_dev, if_index, &arb_param);
    if(status != ALT_E_SUCCESS)
    {
        return status;
    }


    /*Set control parameters */
    status = alt_can_if_msg_ctrl_set(can_dev, if_index, ctrl);
    if(status != ALT_E_SUCCESS)
    {
        return status;
    }

    /*Put message object to mailbox */
    cmd_params.mask = true;                 /* Transfer IF Mask Bits to Message Objects */
    cmd_params.control = true;              /* Transfer IF Control Bits to Message Objects */
    cmd_params.arbitration = true;          /* Transfer IF Arbiration Bits to Message Object */
    cmd_params.data_A = true;               /* Transfer Data Bytes to IF DA  */
    cmd_params.data_B = true;               /* Transfre Data Bytes to IF DB  */
    status = alt_can_message_put(can_dev, if_index, msg_obj_num, &cmd_params);

    return status;

}

/*
 *Disable the specified CAN controller interrupt status conditions identified in
 *the mask.
 * */
ALT_STATUS_CODE alt_can_int_disable(ALT_CAN_DEV_t * can_dev, const uint8_t mask)
{
    uint32_t set_mask;
#ifdef LOGGING
    printf("alt_can_int_disable\n");
#endif
    if (alt_can_checking(can_dev) == ALT_E_FALSE)
    {
        return ALT_E_BAD_ARG;
    }

    set_mask = ALT_CAN_PROTO_CCTL_MIL_SET((bool)(mask & ALT_CAN_INT_GROUP_MSG_LINE))
        | ALT_CAN_PROTO_CCTL_SIE_SET((bool)(mask & ALT_CAN_INT_GROUP_STATUS))
        | ALT_CAN_PROTO_CCTL_EIE_SET((bool)(mask & ALT_CAN_INT_GROUP_ERROR))
        | ALT_CAN_PROTO_CCTL_ILE_SET((bool)(mask & ALT_CAN_INT_GROUP_MOD_LINE));
        
    alt_clrbits_word(ALT_CAN_PROTO_CSTS_ADDR(ALT_CAN_PROTO_BASE(can_dev->location)), set_mask);

    return ALT_E_SUCCESS;
}

/*
 *Enable the specified CAN controller interrupt status conditions identified in
 *the mask.
 * */
ALT_STATUS_CODE alt_can_int_enable(ALT_CAN_DEV_t *can_dev, const uint8_t mask)
{
    uint32_t set_mask;
#ifdef LOGGING
    printf("alt_can_int_enable\n");
#endif
    if (alt_can_checking(can_dev) == ALT_E_FALSE)
    {
        return ALT_E_BAD_ARG;
    }

    set_mask = ALT_CAN_PROTO_CCTL_MIL_SET((bool)(mask & ALT_CAN_INT_GROUP_MSG_LINE))
        | ALT_CAN_PROTO_CCTL_SIE_SET((bool)(mask & ALT_CAN_INT_GROUP_STATUS))
        | ALT_CAN_PROTO_CCTL_EIE_SET((bool)(mask & ALT_CAN_INT_GROUP_ERROR))
        | ALT_CAN_PROTO_CCTL_ILE_SET((bool)(mask & ALT_CAN_INT_GROUP_MOD_LINE));
        
    alt_setbits_word(ALT_CAN_PROTO_CCTL_ADDR(ALT_CAN_PROTO_BASE(can_dev->location)), set_mask);

    return ALT_E_SUCCESS;
}

/*
 *Gets the interrupt identifier of the CAN instance.
*/
ALT_STATUS_CODE alt_can_int_ident_get(ALT_CAN_DEV_t *can_dev, uint32_t * interrupt)
{
#ifdef LOGGING
    printf("alt_can_int_ident_get\n");
#endif
    if (alt_can_checking(can_dev) == ALT_E_FALSE)
    {
        return ALT_E_BAD_ARG;
    }

    *interrupt = ALT_CAN_PROTO_CIR_INTID_GET(alt_read_word(ALT_CAN_PROTO_CIR_ADDR(ALT_CAN_PROTO_BASE(can_dev->location))));
    return ALT_E_SUCCESS;

}

/*
 *Returns the current value of the CAN controller status interrupt register
*/
ALT_STATUS_CODE alt_can_int_status_get(ALT_CAN_DEV_t *can_dev)
{
#ifdef LOGGING
    printf("alt_can_int_status_get\n");
#endif
    if (alt_can_checking(can_dev) == ALT_E_FALSE)
    {
        return ALT_E_BAD_ARG;
    }

    if (ALT_CAN_PROTO_CIR_STATINT_GET(alt_read_word(ALT_CAN_PROTO_CIR_ADDR(ALT_CAN_PROTO_BASE(can_dev->location)))))
    {
        return ALT_E_TRUE;
    }
    else
    {
        return ALT_E_FALSE;
    }
}

/*
 *Gets the current status of the CAN controller.
*/
ALT_STATUS_CODE alt_can_status_get(ALT_CAN_DEV_t *can_dev, ALT_CAN_STATUS_t * status)
{
    uint32_t stat_reg;
#ifdef LOGGING
    printf("alt_can_status_get\n");
#endif
    if (alt_can_checking(can_dev) == ALT_E_FALSE || !status)
    {
        return ALT_E_BAD_ARG;
    }

    stat_reg = alt_read_word(ALT_CAN_PROTO_CSTS_ADDR(ALT_CAN_PROTO_BASE(can_dev->location)));

    status->last_err_code = (ALT_CAN_LAST_ERROR_t)ALT_CAN_PROTO_CSTS_LEC_GET(stat_reg);
    status->tx_success = ALT_CAN_PROTO_CSTS_TXOK_GET(stat_reg);
    status->rx_success = ALT_CAN_PROTO_CSTS_RXOK_GET(stat_reg);
    status->err_passive = ALT_CAN_PROTO_CSTS_EPASS_GET(stat_reg);
    status->warning = ALT_CAN_PROTO_CSTS_EWARN_GET(stat_reg);
    status->bus_off = ALT_CAN_PROTO_CSTS_BOFF_GET(stat_reg);
    status->par_error = ALT_CAN_PROTO_CSTS_PER_GET(stat_reg);

    return ALT_E_SUCCESS;
}

/*
 *Reset all mailboxes (uninitialize all mailboxes).
*/
ALT_STATUS_CODE alt_can_mailboxes_reset(ALT_CAN_DEV_t *can_dev)
{
#ifdef LOGGING
    printf("alt_can_mailboxes_reset\n");
#endif

    uint32_t msg_obj_num;
    /*Reset all message objects */
    for (msg_obj_num = 1; msg_obj_num <= ALT_CAN_MAILBOXES_COUNT; msg_obj_num++) 
    {
        ALT_CAN_MAILBOX_PARAM_t * mailbox = &(can_dev->mailboxes[msg_obj_num-1]);
        alt_can_mailbox_reset(can_dev, ALT_CAN_INTERFACE_WRITE, msg_obj_num);

        mailbox->init_done = false;
    }
    
    /*Reset CAN status */
    alt_write_word(ALT_CAN_PROTO_CSTS_ADDR(ALT_CAN_PROTO_BASE(can_dev->location)),
                                                    ALT_CAN_PROTO_CSTS_LEC_E_NOCHANGE);
    

    return ALT_E_SUCCESS;
}

/*Send frame (up to 8 bytes) to mailbox */
static ALT_STATUS_CODE alt_can_next_frame_send(ALT_CAN_DEV_t *can_dev,
                                               uint32_t msg_obj_num,
                                               uint32_t dataA,
                                               uint32_t dataB)
{
    ALT_CAN_MSG_IFMCTR_t ctrl = { 0 };
    ALT_CAN_MSG_PARAM_t cmd_params = {0};
#ifdef LOGGING
    printf("alt_can_next_frame_send");
#endif
    ALT_CAN_MAILBOX_PARAM_t * mailbox = &(can_dev->mailboxes[msg_obj_num-1]);

    /*If not remote transmission request direction is false */
    bool dir = (!(mailbox->remote));
    /*If receive message with extended id, set extend bit */
    bool extend = (mailbox->extend);
    /*If standard id shift id 18 bit left */
    uint32_t msg_id = ((extend) ? mailbox->id : (mailbox->id << 18));

    /*Set new arbitration parameters */
    ALT_CAN_MSG_ARB_t arb_param = {0};
    arb_param.id = msg_id;
    arb_param.direction = dir;
    arb_param.extended = extend;
    arb_param.valid = true;
    alt_can_if_arb_set(can_dev, ALT_CAN_INTERFACE_WRITE, &arb_param);

    /*Write dataA and data to interface */
    alt_write_word(ALT_CAN_MSGIF_IFDB_ADDR(ALT_CAN_MSGIF_BASE(can_dev->location), ALT_CAN_INTERFACE_WRITE), dataB);
    alt_write_word(ALT_CAN_MSGIF_IFDA_ADDR(ALT_CAN_MSGIF_BASE(can_dev->location), ALT_CAN_INTERFACE_WRITE), dataA);
    
    /*Configure message object */
    if (mailbox->fifo_mode == ALT_CAN_FIFO_MODE_SINGLE_MSG
     || mailbox->fifo_mode == ALT_CAN_FIFO_MODE_BUFFER_LAST) 
    {
        ctrl.block_end = true;
    } 
    else 
    {
        ctrl.block_end = false;
    }
    /*Transmit Interrupt Enable */
    ctrl.tx_int = true;
    /*The transmission of this Message Object is requested */
    ctrl.tx_rqst = true;
    /*Send New Data */
    ctrl.new_data = true;
    /*Set frame size */
    ctrl.data_len = mailbox->dlc;
    alt_can_if_msg_ctrl_set(can_dev, ALT_CAN_INTERFACE_WRITE, &ctrl);

    /*Put message data into mailbox */
    cmd_params.arbitration = true;
    cmd_params.mask = true;
    cmd_params.control = true;
    cmd_params.tx_rqst_new_dat = true;
    cmd_params.data_A = true;
    cmd_params.data_B = true;
    alt_can_message_put(can_dev, ALT_CAN_INTERFACE_WRITE, msg_obj_num, &cmd_params);
    
    return ALT_E_SUCCESS;
}


/*Receive frame (up to 8 bytes) from mailbox */
static ALT_STATUS_CODE alt_can_next_frame_recv(ALT_CAN_DEV_t *can_dev, 
                                               uint32_t msg_obj_num,
                                               uint32_t *dataA,
                                               uint32_t *dataB,
                                               uint32_t *bytes_received)
{
#ifdef LOGGING
    printf("alt_can_next_frame_recv\n");
#endif

    ALT_CAN_MAILBOX_PARAM_t *mailbox = &(can_dev->mailboxes[msg_obj_num-1]);

    uint32_t arb_val;
    uint32_t mctl_val;
    uint32_t mctrl_reg_val;
    
    /* Gets Message object */
    ALT_CAN_MSG_PARAM_t cmd_params = {0};
    cmd_params.arbitration = true;
    cmd_params.mask = true;
    cmd_params.control = true;
    cmd_params.data_A = true;
    cmd_params.data_B = true;
    alt_can_message_get(can_dev, ALT_CAN_INTERFACE_READ, msg_obj_num, &cmd_params);
    
    mctrl_reg_val = alt_read_word(ALT_CAN_MSGIF_IFMCTR_ADDR(ALT_CAN_MSGIF_BASE(can_dev->location), ALT_CAN_INTERFACE_READ));

    /*If new data is present read it */
    if (mctrl_reg_val & ALT_CAN_MSGIF_IF1MCTR_NEWDAT_SET_MSK)
    {
        ALT_CAN_MSG_PARAM_t cmd_params = {0};
        uint32_t id_mask_set;
        uint32_t id_set;

        /*Read the params from the message object */
        arb_val = alt_read_word(ALT_CAN_MSGIF_IFARB_ADDR(ALT_CAN_MSGIF_BASE(can_dev->location), ALT_CAN_INTERFACE_READ));
        mctl_val = alt_read_word(ALT_CAN_MSGIF_IFMCTR_ADDR(ALT_CAN_MSGIF_BASE(can_dev->location), ALT_CAN_INTERFACE_READ));

        /*Check extended id and save it */
        if (arb_val & ALT_CAN_MSGIF_IF1ARB_XTD_SET_MSK)
        {
            mailbox->id = ALT_CAN_MSGIF_IFARB_ID_GET(arb_val);
            mailbox->extend = true;
        }
        else
        {
            mailbox->id = (arb_val >> 18) & 0x7FF;
        }

        /*Check Remote Enable */
        if (mctl_val & ALT_CAN_MSGIF_IFMCTR_RMTEN_SET_MSK) 
        {
            
            mailbox->remote = true; 
        }
        else
        {
            if (bytes_received)
            {
                *bytes_received = ALT_CAN_MSGIF_IFMCTR_DLC_GET(mctl_val);
            }
            /*If remote disable than read data */
            *dataA = alt_read_word(ALT_CAN_MSGIF_IFDA_ADDR(ALT_CAN_MSGIF_BASE(can_dev->location), ALT_CAN_INTERFACE_READ)); /*  no, its normal packet with data*/
            *dataB = alt_read_word(ALT_CAN_MSGIF_IFDB_ADDR(ALT_CAN_MSGIF_BASE(can_dev->location), ALT_CAN_INTERFACE_READ));
        }

        id_mask_set = mailbox->mask;
        id_set = mailbox->id;
        if(!mailbox->extend)
        {
            id_mask_set = id_mask_set << 18;
            id_set = id_set << 18;
        }

        if (mailbox->fifo_mode == ALT_CAN_FIFO_MODE_SINGLE_MSG)
        {
            /*Setup next receive mailbox */
            ALT_CAN_MSG_IFMCTR_t ctrl = { 0 };
            ctrl.rx_int = true;
            ctrl.accept_mask = true;
            ctrl.block_end = true;
            alt_can_message_recv_setup(can_dev, ALT_CAN_INTERFACE_WRITE, msg_obj_num,
                    id_mask_set, id_set, &ctrl);
        }

        /*If the CPU has lost a message reset control register */
        if (mctrl_reg_val & ALT_CAN_MSGIF_IFMCTR_MSGLST_SET_MSK)
        {
            ALT_CAN_MSG_PARAM_t cmd_params_put = {0};
            ALT_CAN_MSG_PARAM_t cmd_params_get = {0};
            cmd_params_get.arbitration = true;
            cmd_params_get.mask = true;
            cmd_params_get.control = true;
            cmd_params_get.data_A = true;
            cmd_params_get.data_B = true;
            alt_can_message_get(can_dev, ALT_CAN_INTERFACE_READ, msg_obj_num,&cmd_params_get);
            
            alt_write_word(ALT_CAN_MSGIF_IFCMR_ADDR(ALT_CAN_MSGIF_BASE(can_dev->location), ALT_CAN_INTERFACE_WRITE), 0);
            
            cmd_params_put.control = true;/* transfer Control Bits */
            alt_can_message_put(can_dev, ALT_CAN_INTERFACE_WRITE, msg_obj_num, &cmd_params_put);
        }
        
        /*Reset new data, interrupt pending and message lost bits */
        alt_write_word(ALT_CAN_MSGIF_IFMCTR_ADDR(ALT_CAN_MSGIF_BASE(can_dev->location), ALT_CAN_INTERFACE_WRITE),
                       mctrl_reg_val & ~(ALT_CAN_MSGIF_IFMCTR_MSGLST_SET_MSK
                                | ALT_CAN_MSGIF_IFMCTR_INTPND_SET_MSK 
                                | ALT_CAN_MSGIF_IFMCTR_NEWDAT_SET_MSK));
        
        cmd_params.control = true;
        alt_can_message_put(can_dev, ALT_CAN_INTERFACE_WRITE, msg_obj_num, &cmd_params);
        if (mailbox->fifo_mode != ALT_CAN_FIFO_MODE_SINGLE_MSG)
        {
            alt_can_mailbox_reset(can_dev, ALT_CAN_INTERFACE_WRITE, msg_obj_num);
        }

    }
    return ALT_E_SUCCESS;
}


/*
 *Initialize mailbox for transfer with specified parameters.
*/
ALT_STATUS_CODE alt_can_mailbox_init(ALT_CAN_DEV_t *can_dev,
        uint32_t msg_obj_num, 
        uint32_t id, 
        uint32_t id_mask,
        ALT_CAN_TMOD_t transfer_mode, 
        ALT_CAN_FIFO_MODE_t fifo_mode) 
{

    ALT_STATUS_CODE status = ALT_E_SUCCESS;

    ALT_CAN_MAILBOX_PARAM_t * mailbox;

    ALT_CAN_MSG_IFMCTR_t ctrl = {0};

#ifdef LOGGING
    printf("alt_can_mailbox_init\n");
#endif

    if ((msg_obj_num < 1) || (msg_obj_num > ALT_CAN_MAILBOXES_COUNT))
    {
        return ALT_E_BAD_ARG;
    }

    mailbox = &(can_dev->mailboxes[msg_obj_num-1]);


    if (mailbox->init_done)
    {
        return ALT_E_ERROR;
    }

    if (id <= 0)
    {
        return ALT_E_ERROR;
    }


    /*Set specified parameters for mailbox */
    mailbox->id = id;
    mailbox->mask = id_mask;
    mailbox->remote = false;
    mailbox->extend = false;
    mailbox->transfer_mode = transfer_mode;
    can_dev->mailboxes[msg_obj_num-1].dlc = 8;
    mailbox->fifo_mode = fifo_mode;

    /*Reset specified mailbox */
    status = alt_can_mailbox_reset(can_dev, ALT_CAN_INTERFACE_WRITE, msg_obj_num);
    if (status != ALT_E_SUCCESS)
    {
        return status;
    }


    /*If init mailbox for read, setup this mailbox for read */
    if (transfer_mode == ALT_CAN_TMOD_RX)
    {
            ctrl.rx_int = true;
            ctrl.accept_mask = true;

         if (fifo_mode == ALT_CAN_FIFO_MODE_SINGLE_MSG
         || fifo_mode == ALT_CAN_FIFO_MODE_BUFFER_LAST)
        {
            ctrl.block_end = true;
        }
        else
        {
            ctrl.block_end = false;
        }
        status = alt_can_message_recv_setup(can_dev, ALT_CAN_INTERFACE_WRITE,
                msg_obj_num, id_mask << 18, id << 18, &ctrl);
        if (status != ALT_E_SUCCESS)
        {
            return status;
        }
    }
    else{

    }


    /*Initialization was done */
    mailbox->init_done = true;
    return status;

}

/*
 *Initialize mailbox for transfer with specified parameters with Extneded IDs
*/
ALT_STATUS_CODE alt_can_mailbox_ext_id_init(ALT_CAN_DEV_t *can_dev,
        uint32_t msg_obj_num, 
        uint32_t id, 
        uint32_t id_mask,
        ALT_CAN_TMOD_t transfer_mode, 
        ALT_CAN_FIFO_MODE_t fifo_mode) 
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    ALT_CAN_MAILBOX_PARAM_t * mailbox;

#ifdef LOGGING
    printf("alt_can_mailbox_init\n");
#endif
    
    if ((msg_obj_num < 1) || (msg_obj_num > ALT_CAN_MAILBOXES_COUNT))
    {
        return ALT_E_BAD_ARG;
    }
    
    mailbox = &(can_dev->mailboxes[msg_obj_num-1]);
    
    if (mailbox->init_done)
    {
        return ALT_E_ERROR;
    }
    
    if (id <= 0)
    {
        return ALT_E_ERROR;
    }

    /*Set specified parameters for mailbox */
    mailbox->id = id;
    mailbox->mask = id_mask;
    mailbox->remote = false;
    mailbox->extend = true;
    mailbox->transfer_mode = transfer_mode;
    mailbox->dlc = 8;
    mailbox->fifo_mode = fifo_mode;

    /*Reset specified mailbox */
    status = alt_can_mailbox_reset(can_dev, ALT_CAN_INTERFACE_WRITE, msg_obj_num);
    if (status != ALT_E_SUCCESS)
    {
        return status;
    }

    /*If init mailbox for read, setup this mailbox for read */
    if (mailbox->transfer_mode == ALT_CAN_TMOD_RX)
    {
        ALT_CAN_MSG_IFMCTR_t ctrl = {0};
        ctrl.rx_int = true;
        ctrl.accept_mask = true;
        if (mailbox->fifo_mode == ALT_CAN_FIFO_MODE_SINGLE_MSG
         || mailbox->fifo_mode == ALT_CAN_FIFO_MODE_BUFFER_LAST) 
        {
            ctrl.block_end = true;
        }
        else
        {
            ctrl.block_end = false;
        }
        status = alt_can_message_recv_setup(can_dev, ALT_CAN_INTERFACE_WRITE,
                msg_obj_num, mailbox->mask, mailbox->id, &ctrl);
        if (status != ALT_E_SUCCESS)
        {
            return status;
        }
    }

    /*Initialization was done */
    mailbox->init_done = true;
    return status;

}


/*
 *Uninitialize mailbox for transfer with specified parameters.
*/
ALT_STATUS_CODE alt_can_mailbox_uninit(ALT_CAN_DEV_t *can_dev,
                                       uint32_t msg_obj_num)
{
#ifdef LOGGING
    printf("alt_can_mailbox_uninit\n");
#endif

    if ((msg_obj_num < 1) || (msg_obj_num > ALT_CAN_MAILBOXES_COUNT))
    {
        return ALT_E_BAD_ARG;
    }
    
    can_dev->mailboxes[msg_obj_num-1].init_done = false;

    return alt_can_mailbox_reset(can_dev, ALT_CAN_INTERFACE_WRITE, msg_obj_num);

}

/*
 *Read one frame of the data (size of frame is filled in).
*/
ALT_STATUS_CODE alt_can_frame_read(ALT_CAN_DEV_t *can_dev, 
                                   uint32_t msg_obj_num,
                                   void * buffer,
                                   uint32_t* frame_size)
{
    ALT_CAN_MAILBOX_PARAM_t * mailbox;
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    
    uint8_t *data = (uint8_t *) buffer;
    uint32_t int_status;
    uint32_t timeout;

    uint32_t dataA = 0;
    uint32_t dataB = 0;
    uint32_t i;


    if ((msg_obj_num < 1) || (msg_obj_num > ALT_CAN_MAILBOXES_COUNT))
    {
        return ALT_E_BAD_ARG;
    }
    
    mailbox = &(can_dev->mailboxes[msg_obj_num-1]);

    if (mailbox->transfer_mode != ALT_CAN_TMOD_RX
        && mailbox->init_done == true)
    {
        return ALT_E_ERROR;
    }

    if (frame_size)
    {
        *frame_size = 0;
    }
    timeout = ALT_CAN_TMO_WAITER;

    /* Wait for interrupt from read mailbox */
    do
    {
        /* Get Interrupt ID */
        int_status = ALT_CAN_PROTO_CIR_INTID_GET(alt_read_word(ALT_CAN_PROTO_CIR_ADDR(ALT_CAN_PROTO_BASE(can_dev->location))));
        
        if(int_status != msg_obj_num && int_status != 0)
        {
            /* If interrupt from unexpected mailbox reset it */
            status = alt_can_mailbox_reset(can_dev, ALT_CAN_INTERFACE_WRITE, int_status);
            if (status != ALT_E_SUCCESS)
            {
                return status;
            }
            int_status = 0;
        }
    } while (int_status == 0 && --timeout);

    if (timeout == 0) 
    {
        return ALT_E_TMO;
    }

    /*If it is expected interrupt then read data */
    status = alt_can_next_frame_recv(can_dev, msg_obj_num, &dataA, &dataB, frame_size);
    if(status != ALT_E_SUCCESS)
    {
        return status;
    }

    /*Write received data to buffer */
    for (i = 0; i < mailbox->dlc; i++)
    {
        if (i < 4)
            data[i] = dataA >> (mailbox->dlc * i);
        else
            data[i] = dataB >> (mailbox->dlc * (i - 4));
    }

    return status;
}

/*
 *Write one frame of the data (size of frame = data length code).
*/
ALT_STATUS_CODE alt_can_frame_write(ALT_CAN_DEV_t *can_dev,
                                    uint32_t msg_obj_num,
                                    void * buffer)
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    ALT_CAN_MAILBOX_PARAM_t * mailbox;
    
    uint8_t *data = (uint8_t *) buffer;

    uint32_t dataA = 0;
    uint32_t dataB = 0;
    uint32_t int_status;
    uint32_t timeout;
    uint32_t i;

#ifdef LOGGING
    printf("alt_can_frame_write\n");
#endif

    if ((msg_obj_num < 1) || (msg_obj_num > ALT_CAN_MAILBOXES_COUNT))
    {
        return ALT_E_BAD_ARG;
    }
    
    mailbox = &(can_dev->mailboxes[msg_obj_num-1]);

    if (mailbox->transfer_mode != ALT_CAN_TMOD_TX
        && mailbox->init_done == true)
    {
        return ALT_E_ERROR;
    }

    /*Write send data to data variable */
    for (i = 0; i < mailbox->dlc; i++)
    {
        if (i < 4)
            dataA |= (data[i] << (mailbox->dlc * i));
        else
            dataB |= (data[i] << (mailbox->dlc * (i - 4)));
    }

    /*Send frame to bus */
    
    status = alt_can_next_frame_send(can_dev, msg_obj_num, dataA, dataB);
    if(status != ALT_E_SUCCESS)
    {
        return status;
    }

    timeout = ALT_CAN_TMO_WAITER;
    /*Wait for interrupt from write mailbox */
    do
    {
        /*If interrupt from unexpected mailbox reset status */
        int_status = ALT_CAN_PROTO_CIR_INTID_GET(alt_read_word(ALT_CAN_PROTO_CIR_ADDR(ALT_CAN_PROTO_BASE(can_dev->location))));
        if(int_status != msg_obj_num)
        {
            int_status = 0;
        }
    }
    while (int_status == 0 && --timeout);
    if(timeout== 0)
    {
        return ALT_E_TMO;
    }

    /*Interrupt from write mailbox is success reset current mailbox */
    int_status = ALT_CAN_PROTO_CIR_INTID_GET(alt_read_word(ALT_CAN_PROTO_CIR_ADDR(ALT_CAN_PROTO_BASE(can_dev->location))));
    if(int_status == msg_obj_num)
    {
        alt_can_mailbox_reset(can_dev, ALT_CAN_INTERFACE_WRITE, int_status);
    }

    /*Interrupt from write mailbox is success */
    return status;
}

/*
 * Read array of the data. If bytes_to_read is 0, read one frame and return.
 * If bytes_to_read is non-zero, keep reading until all data requested
 * is obtained.
 * */
ALT_STATUS_CODE alt_can_data_read(ALT_CAN_DEV_t *can_dev, 
                                  uint32_t msg_obj_num,
                                  void * buffer,
                                  uint32_t bytes_to_read,
                                  uint32_t *bytes_read)
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    
    uint8_t *data = (uint8_t *) buffer;
    uint32_t data_left = bytes_to_read;
    uint32_t int_status;
    uint32_t timeout;

    uint32_t frame_size = 0;
    uint32_t dataA = 0;
    uint32_t dataB = 0;
    ALT_CAN_MAILBOX_PARAM_t * mailbox;
    uint32_t i;

#ifdef LOGGING
    printf("alt_can_data_read\n");
#endif
    if ((msg_obj_num < 1) || (msg_obj_num > ALT_CAN_MAILBOXES_COUNT))
    {
        return ALT_E_BAD_ARG;
    }

    mailbox = &(can_dev->mailboxes[msg_obj_num-1]);

    if (mailbox->transfer_mode != ALT_CAN_TMOD_RX
        && mailbox->init_done == true)
    {
        return ALT_E_ERROR;
    }

    if (bytes_read)
    {
        *bytes_read = 0;
    }
    
    do
    {
        dataA = 0;
        dataB = 0;

        timeout = ALT_CAN_TMO_WAITER;
        /*Wait for interrupt from read mailbox */
        do
        {
            int_status = ALT_CAN_PROTO_CIR_INTID_GET(alt_read_word(ALT_CAN_PROTO_CIR_ADDR(ALT_CAN_PROTO_BASE(can_dev->location))));
            if(int_status != msg_obj_num && int_status != 0)
            {
                /*If interrupt from unexpected mailbox reset it */
                status = alt_can_mailbox_reset(can_dev, ALT_CAN_INTERFACE_WRITE, int_status);
                if (status != ALT_E_SUCCESS) 
                {
                    return status;
                }
                int_status = 0;
            }
        }
        while (int_status == 0 && --timeout);
        if(timeout== 0)
        {
            return ALT_E_TMO;
        }
        
        /*If it is expected interrupt then read data */
        status = alt_can_next_frame_recv(can_dev, msg_obj_num, &dataA, &dataB, &frame_size);
        if(status != ALT_E_SUCCESS)
        {
            return status;
        }
        if (bytes_read)
        {
            *bytes_read += frame_size;
        }
        
        /*Write received data to buffer */
        for (i = 0; i < frame_size; i++)
        {
            if (i < 4)
                data[i] = dataA >> (8 * i);
            else
                data[i] = dataB >> (8 * (i - 4));
        }

        if (data_left >= frame_size)
        {
            data_left -= frame_size;
            data += frame_size;
        }
    } while (data_left);

    return status;
}


/*
 *Write array of the data.
*/
ALT_STATUS_CODE alt_can_data_write(ALT_CAN_DEV_t *can_dev,
                                   uint32_t msg_obj_num,
                                   void * buffer,
                                   uint32_t size)
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    ALT_CAN_MAILBOX_PARAM_t * mailbox;

    uint8_t *data = (uint8_t *) buffer;
    uint32_t data_left = size;
    uint32_t int_status;
    uint32_t timeout;

    uint32_t frame_size;
    uint32_t dataA, dataB;
    uint32_t i;

#ifdef LOGGING
    printf("alt_can_data_write\n");
#endif

    if ((msg_obj_num < 1) || (msg_obj_num > ALT_CAN_MAILBOXES_COUNT))
    {
        return ALT_E_BAD_ARG;
    }
    mailbox = &(can_dev->mailboxes[msg_obj_num-1]);

    if (mailbox->transfer_mode != ALT_CAN_TMOD_TX
        && mailbox->init_done == true)
    {
        return ALT_E_ERROR;
    }

    while (data_left > 0)
    {
        dataA = 0;
        dataB = 0;
        frame_size = data_left;
        /*Max size of every frame is equal DLC or less */
        if (frame_size > mailbox->dlc)
        {
            frame_size = mailbox->dlc;
        }
        else
        {
            mailbox->dlc = frame_size;
        }
        
        /*Write send data from buffer to data variables for write to register */
        for (i = 0; i < frame_size; i++)
        {
            if (i < 4)
                dataA |= (data[i] << (8 * i));
            else
                dataB |= (data[i] << (8 * (i - 4)));
        }

        /*Send frame to bus */

        status = alt_can_next_frame_send(can_dev, msg_obj_num, dataA, dataB);
        if(status != ALT_E_SUCCESS)
        {
            return status;
        }

        timeout = ALT_CAN_TMO_WAITER;
        /*Wait for interrupt from write mailbox */
        do
        {
            /*If interrupt from unexpected mailbox reset status */
            int_status = ALT_CAN_PROTO_CIR_INTID_GET(alt_read_word(ALT_CAN_PROTO_CIR_ADDR(ALT_CAN_PROTO_BASE(can_dev->location))));
            if(int_status != msg_obj_num)
            {
                int_status = 0;
            }
        }
        while (int_status == 0 && --timeout);
        if(timeout== 0)
        {
            return ALT_E_TMO;
        }

        data_left -= frame_size;
        data += frame_size;

        /*Interrupt from write mailbox is success reset current mailbox */
        int_status = ALT_CAN_PROTO_CIR_INTID_GET(alt_read_word(ALT_CAN_PROTO_CIR_ADDR(ALT_CAN_PROTO_BASE(can_dev->location))));
        if(int_status == msg_obj_num)
        {
            alt_can_mailbox_reset(can_dev, ALT_CAN_INTERFACE_WRITE, int_status);
        }
        /* Resume default dlc */
        mailbox->dlc = 8;
    }

    
    return status;
}

/*
 * Disables the CAN controller.
*/
ALT_STATUS_CODE alt_can_disable(ALT_CAN_DEV_t *can_dev)
{
    uint32_t timeout = ALT_CAN_RESET_TMO_INIT;

    if (alt_can_checking(can_dev) == ALT_E_FALSE)
    {
        return ALT_E_BAD_ARG;
    }

    /* If CAN controller is already disabled, return with success */
    if (alt_can_is_enabled_helper(can_dev) == ALT_E_FALSE)
    {
        return ALT_E_SUCCESS;
    }
    
    /* Start initialization by setting Init */
    alt_setbits_word(ALT_CAN_PROTO_CCTL_ADDR(ALT_CAN_PROTO_BASE(can_dev->location)),
                                                    ALT_CAN_PROTO_CCTL_INIT_SET_MSK);

    /* Waiting for start initialization */
    while ((!alt_read_word(ALT_CAN_PROTO_CCTL_ADDR(ALT_CAN_PROTO_BASE(can_dev->location)))
                           & ALT_CAN_PROTO_CCTL_INIT_SET_MSK)
            && (--timeout));
    if(timeout == 0)
    {
        return ALT_E_TMO;
    }
    return ALT_E_SUCCESS;
}

/*
 * Enables the CAN controller.
*/
ALT_STATUS_CODE alt_can_enable(ALT_CAN_DEV_t *can_dev)
{
    uint32_t timeout = ALT_CAN_RESET_TMO_INIT;
#ifdef LOGGING
    printf("alt_can_enable\n");
#endif
    if (alt_can_checking(can_dev) == ALT_E_FALSE)
    {
        return ALT_E_BAD_ARG;
    }

    /* If CAN controller is already enabled, return with success */
    if (alt_can_is_enabled_helper(can_dev) == ALT_E_TRUE)
    {
        return ALT_E_SUCCESS;
    }

    /* Clear the init bit */
    alt_clrbits_word(ALT_CAN_PROTO_CCTL_ADDR(ALT_CAN_PROTO_BASE(can_dev->location)),
                     ALT_CAN_PROTO_CCTL_INIT_SET_MSK);

    /* Wait for complete of initialization */
    while ((alt_read_word(ALT_CAN_PROTO_CCTL_ADDR(ALT_CAN_PROTO_BASE(can_dev->location)))
                          & ALT_CAN_PROTO_CCTL_INIT_SET_MSK)
           && --timeout);
    if(timeout == 0)
    {
        return ALT_E_TMO;
    }

    return ALT_E_SUCCESS;
}

/*
 * Check whether CAN controller is enabled
*/
static ALT_STATUS_CODE alt_can_is_enabled_helper(ALT_CAN_DEV_t * can_dev)
{
    if (alt_read_word(ALT_CAN_PROTO_CCTL_ADDR(ALT_CAN_PROTO_BASE(can_dev->location)))
                          & ALT_CAN_PROTO_CCTL_INIT_SET_MSK)
    {
        return ALT_E_FALSE;
    }
    else
    {
        return ALT_E_TRUE;
    }
}

/*
 * Return ALT_E_TRUE if the CAN controller is enabled, ALT_E_FALSE otherwise.
*/
ALT_STATUS_CODE alt_can_is_enabled(ALT_CAN_DEV_t * can_dev)
{
#ifdef LOGGING
    printf("alt_can_is_enabled\n");
#endif
    if (alt_can_checking(can_dev) == ALT_E_FALSE)
    {
        return ALT_E_BAD_ARG;
    }

    return alt_can_is_enabled_helper(can_dev);
}

/*
 * Fill in CEC of the CAN controller.
*/
ALT_STATUS_CODE alt_can_error_counter_get(ALT_CAN_DEV_t *can_dev,  ALT_CAN_ERROR_COUNTER_t* counter)
{
#ifdef LOGGING
    printf("alt_can_error_counter_get\n");
#endif
    if (alt_can_checking(can_dev) == ALT_E_FALSE)
    {
        return ALT_E_BAD_ARG;
    }

    counter->tx_error_counter =
            ALT_CAN_PROTO_CERC_TEC_GET(alt_read_word(ALT_CAN_PROTO_CERC_ADDR(ALT_CAN_PROTO_BASE(can_dev->location))));
    counter->rx_error_counter =
            ALT_CAN_PROTO_CERC_REC_GET(alt_read_word(ALT_CAN_PROTO_CERC_ADDR(ALT_CAN_PROTO_BASE(can_dev->location))));
    counter->rx_above_passive =
            ALT_CAN_PROTO_CERC_RP_GET(alt_read_word(ALT_CAN_PROTO_CERC_ADDR(ALT_CAN_PROTO_BASE(can_dev->location))));

    return ALT_E_SUCCESS;
}


#ifdef LOGGING
void log_mem(ALT_CAN_DEV_t * can_dev)
{
    uint32_t address;
    for (address = (uint32_t)can_dev->location;
        address <= (uint32_t)ALT_CAN_MSGIF_IFDB_ADDR(ALT_CAN_MSGIF_BASE(can_dev->location), ALT_CAN_INTERFACE_WRITE);
        address += 4)
    {
        uint32_t data = alt_read_word(address);
        printf(" address 0x%08X : data 0x%08X\n", (unsigned int) address, (unsigned int) data);
    }
}
#endif

#else /* defined soc_cv_av */

/* For products that do not have this functionality, include
 * a simple typedef so that the module will compile.
 * Some compilers (armcc) complain without a simple yet unused declaration.
 */

typedef int alt_can_null_typedef_for_compiler;

#endif /* defined soc_cv_av */

