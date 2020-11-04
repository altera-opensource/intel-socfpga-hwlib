/******************************************************************************
*
* Copyright 2015-2017 Altera Corporation. All Rights Reserved.
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
* alt_system_manager.c - API for the Altera SoC FPGA system manager
*
******************************************************************************/

/*
 * $Id: //acds/main/embedded/ip/hps/armv8/hwlib/src/hwmgr/soc_s10/alt_system_manager.c#1 $
 */

#include "alt_system_manager.h"
#include "socal/alt_sysmgr.h"
#include "socal/socal.h"
#include "socal/hps.h"
#include "hwlib.h"


ALT_STATUS_CODE alt_fpga_interface_enable(ALT_FPGA_INTERFACE_t intfc)
{
    switch (intfc)
    {
    case ALT_FPGA_INTERFACE_CTMTRIGGER:
        return alt_setbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_1_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER_SET_MSK);

    case ALT_FPGA_INTERFACE_STMEVENT:
        return alt_setbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_1_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT_SET_MSK);

    case ALT_FPGA_INTERFACE_DBGAPB:
        return alt_setbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_1_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB_SET_MSK);

    case ALT_FPGA_INTERFACE_TRACEOUT:
        return alt_setbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_1_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT_SET_MSK);

    case ALT_FPGA_INTERFACE_TRACEIN:
        return alt_setbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_1_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN_SET_MSK);

    case ALT_FPGA_INTERFACE_SPIM_1:
        return alt_setbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_2_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1_SET_MSK);
                                
    case ALT_FPGA_INTERFACE_SPIM_0:
        return alt_setbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_2_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0_SET_MSK);                                

    case ALT_FPGA_INTERFACE_SDMMC:
        return alt_setbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_2_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC_SET_MSK);

    case ALT_FPGA_INTERFACE_NAND:
        return alt_setbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_2_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND_SET_MSK);

    case ALT_FPGA_INTERFACE_EMAC_2_SWITCH:
        return alt_setbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_3_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH_SET_MSK);
                                
    case ALT_FPGA_INTERFACE_EMAC_2:
        return alt_setbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_3_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SET_MSK);        

    case ALT_FPGA_INTERFACE_EMAC_1_SWITCH:
        return alt_setbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_3_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH_SET_MSK);
                                
    case ALT_FPGA_INTERFACE_EMAC_1:
        return alt_setbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_3_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SET_MSK);        

    case ALT_FPGA_INTERFACE_EMAC_0_SWITCH:
        return alt_setbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_3_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH_SET_MSK);
                                
    case ALT_FPGA_INTERFACE_EMAC_0:
        return alt_setbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_3_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SET_MSK);                                        

    default:
        return ALT_E_BAD_ARG;
    }
}

ALT_STATUS_CODE alt_fpga_interface_disable(ALT_FPGA_INTERFACE_t intfc)
{
    switch (intfc)
    {
    case ALT_FPGA_INTERFACE_CTMTRIGGER:
        return alt_clrbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_1_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER_SET_MSK);

    case ALT_FPGA_INTERFACE_STMEVENT:
        return alt_clrbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_1_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT_SET_MSK);

    case ALT_FPGA_INTERFACE_DBGAPB:
        return alt_clrbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_1_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB_SET_MSK);

    case ALT_FPGA_INTERFACE_TRACEOUT:
        return alt_clrbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_1_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT_SET_MSK);

    case ALT_FPGA_INTERFACE_TRACEIN:
        return alt_clrbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_1_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN_SET_MSK);

    case ALT_FPGA_INTERFACE_SPIM_1:
        return alt_clrbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_2_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1_SET_MSK);
                                
    case ALT_FPGA_INTERFACE_SPIM_0:
        return alt_clrbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_2_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0_SET_MSK);                                

    case ALT_FPGA_INTERFACE_SDMMC:
        return alt_clrbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_2_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC_SET_MSK);

    case ALT_FPGA_INTERFACE_NAND:
        return alt_clrbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_2_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND_SET_MSK);

    case ALT_FPGA_INTERFACE_EMAC_2_SWITCH:
        return alt_clrbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_3_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH_SET_MSK);
                                
    case ALT_FPGA_INTERFACE_EMAC_2:
        return alt_clrbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_3_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SET_MSK);        

    case ALT_FPGA_INTERFACE_EMAC_1_SWITCH:
        return alt_clrbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_3_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH_SET_MSK);
                                
    case ALT_FPGA_INTERFACE_EMAC_1:
        return alt_clrbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_3_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SET_MSK);        

    case ALT_FPGA_INTERFACE_EMAC_0_SWITCH:
        return alt_clrbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_3_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH_SET_MSK);
                                
    case ALT_FPGA_INTERFACE_EMAC_0:
        return alt_clrbits_word(ALT_SYSMGR_CORE_FPGAINTF_EN_3_ADDR,
                                ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SET_MSK);        

    default:
        return ALT_E_BAD_ARG;
    }
}

ALT_STATUS_CODE alt_fpga_interface_is_enabled(ALT_FPGA_INTERFACE_t intfc)
{
    switch (intfc)
    {
    case ALT_FPGA_INTERFACE_CTMTRIGGER:
        return ((alt_read_word(ALT_SYSMGR_CORE_FPGAINTF_EN_1_ADDR) &
                                ALT_SYSMGR_CORE_FPGAINTF_EN_1_CTMTRIGGER_SET_MSK) != 0)
            ? ALT_E_TRUE : ALT_E_FALSE;

    case ALT_FPGA_INTERFACE_STMEVENT:
        return ((alt_read_word(ALT_SYSMGR_CORE_FPGAINTF_EN_1_ADDR) &
                                ALT_SYSMGR_CORE_FPGAINTF_EN_1_STMEVENT_SET_MSK) != 0)
            ? ALT_E_TRUE : ALT_E_FALSE;

    case ALT_FPGA_INTERFACE_DBGAPB:
        return ((alt_read_word(ALT_SYSMGR_CORE_FPGAINTF_EN_1_ADDR) &
                                ALT_SYSMGR_CORE_FPGAINTF_EN_1_DBGAPB_SET_MSK) != 0)
            ? ALT_E_TRUE : ALT_E_FALSE;

    case ALT_FPGA_INTERFACE_TRACEOUT:
        return ((alt_read_word(ALT_SYSMGR_CORE_FPGAINTF_EN_1_ADDR) &
                                ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEOUT_SET_MSK) != 0)
            ? ALT_E_TRUE : ALT_E_FALSE;

    case ALT_FPGA_INTERFACE_TRACEIN:
        return ((alt_read_word(ALT_SYSMGR_CORE_FPGAINTF_EN_1_ADDR) &
                                ALT_SYSMGR_CORE_FPGAINTF_EN_1_TRACEIN_SET_MSK) != 0)
            ? ALT_E_TRUE : ALT_E_FALSE;

    case ALT_FPGA_INTERFACE_SPIM_1:
        return ((alt_read_word(ALT_SYSMGR_CORE_FPGAINTF_EN_2_ADDR) &
                                ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_1_SET_MSK) != 0)
            ? ALT_E_TRUE : ALT_E_FALSE;
                                
    case ALT_FPGA_INTERFACE_SPIM_0:
        return ((alt_read_word(ALT_SYSMGR_CORE_FPGAINTF_EN_2_ADDR) &
                                ALT_SYSMGR_CORE_FPGAINTF_EN_2_SPIM_0_SET_MSK) != 0)
            ? ALT_E_TRUE : ALT_E_FALSE;                                

    case ALT_FPGA_INTERFACE_SDMMC:
        return ((alt_read_word(ALT_SYSMGR_CORE_FPGAINTF_EN_2_ADDR) &
                                ALT_SYSMGR_CORE_FPGAINTF_EN_2_SDMMC_SET_MSK) != 0)
            ? ALT_E_TRUE : ALT_E_FALSE;

    case ALT_FPGA_INTERFACE_NAND:
        return ((alt_read_word(ALT_SYSMGR_CORE_FPGAINTF_EN_2_ADDR) &
                                ALT_SYSMGR_CORE_FPGAINTF_EN_2_NAND_SET_MSK) != 0)
            ? ALT_E_TRUE : ALT_E_FALSE;

    case ALT_FPGA_INTERFACE_EMAC_2_SWITCH:
        return ((alt_read_word(ALT_SYSMGR_CORE_FPGAINTF_EN_3_ADDR) &
                                ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SWITCH_SET_MSK) != 0)
            ? ALT_E_TRUE : ALT_E_FALSE;
                                
    case ALT_FPGA_INTERFACE_EMAC_2:
        return ((alt_read_word(ALT_SYSMGR_CORE_FPGAINTF_EN_3_ADDR) &
                                ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_2_SET_MSK) != 0)
            ? ALT_E_TRUE : ALT_E_FALSE;        

    case ALT_FPGA_INTERFACE_EMAC_1_SWITCH:
        return ((alt_read_word(ALT_SYSMGR_CORE_FPGAINTF_EN_3_ADDR) &
                                ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SWITCH_SET_MSK) != 0)
            ? ALT_E_TRUE : ALT_E_FALSE;
                                
    case ALT_FPGA_INTERFACE_EMAC_1:
        return ((alt_read_word(ALT_SYSMGR_CORE_FPGAINTF_EN_3_ADDR) &
                                ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_1_SET_MSK) != 0)
            ? ALT_E_TRUE : ALT_E_FALSE;        

    case ALT_FPGA_INTERFACE_EMAC_0_SWITCH:
        return ((alt_read_word(ALT_SYSMGR_CORE_FPGAINTF_EN_3_ADDR) &
                                ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SWITCH_SET_MSK) != 0)
            ? ALT_E_TRUE : ALT_E_FALSE;
                                
    case ALT_FPGA_INTERFACE_EMAC_0:
        return ((alt_read_word(ALT_SYSMGR_CORE_FPGAINTF_EN_3_ADDR) &
                                ALT_SYSMGR_CORE_FPGAINTF_EN_3_EMAC_0_SET_MSK) != 0)
            ? ALT_E_TRUE : ALT_E_FALSE;        
    default:
        return ALT_E_BAD_ARG;
    }
}
