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
* alt_reset_manager.c - API for the Altera Stratix 10 SoC FPGA reset manager.
*
******************************************************************************/

/*
 * $Id: //acds/main/embedded/ip/hps/armv8/hwlib/src/hwmgr/soc_s10/alt_reset_manager.c#1 $
 */

#include "socal/socal.h"
#include "socal/hps.h"
#include "socal/alt_rstmgr.h"
#include "alt_reset_manager.h"

uint32_t alt_reset_event_get(void)
{
    uint32_t regval,regval2,event_mask=0;
    
    regval = alt_read_word(ALT_RSTMGR_STAT_ADDR);
    regval2= alt_read_word(ALT_RSTMGR_MPURSTSTAT_ADDR);
     
    if (regval  & (1 << 25))
    {
      event_mask  |= ALT_RESET_EVENT_CSDAPRST;
    }
    if (regval  & (1 << 24)) 
    {
      event_mask  |= ALT_RESET_EVENT_DEBUGRST; 
    }
    if (regval  & (1 << 19)) 
    {
      event_mask  |= ALT_RESET_EVENT_L4W3DRST;
    }
    if (regval  & (1 << 18))
    {
      event_mask  |= ALT_RESET_EVENT_L4WD2RST;  
    }
    if (regval  & (1 << 17))
    {
      event_mask  |= ALT_RESET_EVENT_L4WD1RST; 
    }
    if (regval  & (1 << 16))
    {
      event_mask  |= ALT_RESET_EVENT_L4WD0RST;
    }
    if (regval  & (1 << 11))
    {
      event_mask  |= ALT_RESET_EVENT_MPU3RST; 
    }
    if (regval  & (1 << 10))
    {
      event_mask  |= ALT_RESET_EVENT_MPU2RST; 
    }
    if (regval  & (1 << 9))  
    {
      event_mask  |= ALT_RESET_EVENT_MPU1RST; 
    }
    if (regval  & (1 << 8)) 
    {
      event_mask  |= ALT_RESET_EVENT_MPU0RST; 
    } 
    if (regval  & (1 << 2)) 
    {
      event_mask  |= ALT_RESET_EVENT_SDMLASTPORRST;
    } 
    if (regval  & (1 << 1)) 
    {
      event_mask  |= ALT_RESET_EVENT_SDMWARMRST; 
    } 
    if (regval  & (1 << 0)) 
    {
      event_mask  |= ALT_RESET_EVENT_SDMCOLDRST; 
    } 
    if (regval2 & (1 << 11))
    {
      event_mask  |= ALT_RESET_EVENT_CORE3IRQ;   
    }
    if (regval2 & (1 << 10)) 
    {
      event_mask  |= ALT_RESET_EVENT_CORE2IRQ;   
    }
    if (regval2 & (1 << 9)) 
    {
      event_mask  |= ALT_RESET_EVENT_CORE1IRQ;   
    } 
    if (regval2 & (1 << 8)) 
    {
      event_mask  |= ALT_RESET_EVENT_CORE0IRQ;   
    } 
    if (regval2 & (1 << 3)) 
    {
      event_mask  |= ALT_RESET_EVENT_CPUPOR3IRQ; 
    } 
    if (regval2 & (1 << 2)) 
    {
      event_mask  |= ALT_RESET_EVENT_CPUPOR2IRQ;  
    } 
    if (regval2 & (1 << 1)) 
    {
      event_mask  |= ALT_RESET_EVENT_CPUPOR1IRQ;  
    } 
    if (regval2 & (1 << 0)) 
    {
      event_mask  |= ALT_RESET_EVENT_CPUPOR0IRQ; 
    } 
    
    return event_mask;
}

ALT_STATUS_CODE alt_reset_event_clear(uint32_t event_mask)
{
    uint32_t regval=0,regval2=0;
    
    if (event_mask & ALT_RESET_EVENT_CSDAPRST)   
    {
      regval  |= (1 << 25); 
    }
    if (event_mask & ALT_RESET_EVENT_DEBUGRST)   
    {
      regval  |= (1 << 24);
    }
    if (event_mask & ALT_RESET_EVENT_L4W3DRST)   
    {
      regval  |= (1 << 19);
    }
    if (event_mask & ALT_RESET_EVENT_L4WD2RST)   
    {
      regval  |= (1 << 18); 
    }
    if (event_mask & ALT_RESET_EVENT_L4WD1RST)   
    {
      regval  |= (1 << 17);
    }
    if (event_mask & ALT_RESET_EVENT_L4WD0RST)   
    {
      regval  |= (1 << 16);
    }  
    if (event_mask & ALT_RESET_EVENT_MPU3RST)     
    {
      regval  |= (1 << 11); 
    }
    if (event_mask & ALT_RESET_EVENT_MPU2RST)     
    {
      regval  |= (1 << 10); 
    }
    if (event_mask & ALT_RESET_EVENT_MPU1RST)    
    {
      regval  |= (1 << 9);  
    }
    if (event_mask & ALT_RESET_EVENT_MPU0RST)     
    {
      regval  |= (1 << 8); 
    }
    if (event_mask & ALT_RESET_EVENT_SDMLASTPORRST)
    {
      regval  |= (1 << 2);
    }
    if (event_mask & ALT_RESET_EVENT_SDMWARMRST)  
    {
      regval  |= (1 << 1); 
    }
    if (event_mask & ALT_RESET_EVENT_SDMCOLDRST)  
    {
      regval  |= (1 << 0); 
    }
    if (event_mask & ALT_RESET_EVENT_CORE3IRQ)   
    {
      regval2 |= (1 << 11);
    }
    if (event_mask & ALT_RESET_EVENT_CORE2IRQ)   
    {
      regval2 |= (1 << 10);
    }
    if (event_mask & ALT_RESET_EVENT_CORE1IRQ)    
    {
      regval2 |= (1 << 9); 
    }
    if (event_mask & ALT_RESET_EVENT_CORE0IRQ)    
    {
      regval2 |= (1 << 8); 
    }
    if (event_mask & ALT_RESET_EVENT_CPUPOR3IRQ)   
    {
      regval2 |= (1 << 3); 
    }
    if (event_mask & ALT_RESET_EVENT_CPUPOR2IRQ)  
    {
      regval2 |= (1 << 2); 
    }
    if (event_mask & ALT_RESET_EVENT_CPUPOR1IRQ) 
    {
      regval2 |= (1 << 1); 
    }
    if (event_mask & ALT_RESET_EVENT_CPUPOR0IRQ) 
    {
      regval2 |= (1 << 0); 
    }
    
    if (regval != 0)
    {
      alt_write_word(ALT_RSTMGR_STAT_ADDR, regval);
    }
    if (regval2 != 0)
    {
      alt_write_word(ALT_RSTMGR_MPURSTSTAT_ADDR, regval2);
    }    
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_cpu_core_reset(uint32_t mask)
{
    uint32_t set_mask = 0;

    if (mask & 1)
    {
      set_mask |= ALT_RSTMGR_MPUMODRST_CORE0_SET_MSK;
    }
    if (mask & 2)
    {
      set_mask |= ALT_RSTMGR_MPUMODRST_CORE1_SET_MSK;
    }
    if (mask & 4)
    {
      set_mask |= ALT_RSTMGR_MPUMODRST_CORE2_SET_MSK;
    }
    if (mask & 8)
    {
      set_mask |= ALT_RSTMGR_MPUMODRST_CORE3_SET_MSK;
    }    
    
    alt_write_word(ALT_RSTMGR_MPUMODRST_ADDR, set_mask);
    
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_cpu_por_reset(uint32_t mask)
{
    uint32_t set_mask = 0;

    if (mask & 1)
    {
      set_mask |= ALT_RSTMGR_COLDMODRST_CPUPOR0_SET_MSK;
    }
    if (mask & 2)
    {
      set_mask |= ALT_RSTMGR_COLDMODRST_CPUPOR1_SET_MSK;
    }
    if (mask & 4)
    {
      set_mask |= ALT_RSTMGR_COLDMODRST_CPUPOR2_SET_MSK;
    }
    if (mask & 8)
    {
      set_mask |= ALT_RSTMGR_COLDMODRST_CPUPOR3_SET_MSK;
    }    
    
    alt_write_word(ALT_RSTMGR_COLDMODRST_ADDR, set_mask);
    
    return ALT_E_SUCCESS;
}

