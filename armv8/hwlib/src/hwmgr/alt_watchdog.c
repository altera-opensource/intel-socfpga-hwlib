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
 * $Id: //acds/main/embedded/ip/hps/armv8/hwlib/src/hwmgr/alt_watchdog.c#1 $
 */

/******************************************************************************
*
* The Altera SoC FPGA S10 has 4 watchdog timers.
* They are accessable to either MPU.
*
* ****************************************************************************/

#include <stdint.h>
#include <stdbool.h>
#include "socal/hps.h"
#include "socal/socal.h"
#include "socal/alt_rstmgr.h"
#include "socal/alt_wdt.h"
#include "socal/alt_tmr.h"
#include "hwlib.h"
#include "alt_watchdog.h"
#include "alt_clock_manager.h"

/* Useful constants and utilities */

/* This value must be written to the Counter Restart Register of the
 * peripheral watchdog timers to restart them. */
#define WDOG_RESET_KEY          0x00000076

#define ALT_WDOG_RST_WIDTH      8                       /* 8 or more MPU clock cycles */

static __inline void alt_wdog_wait(void* reg, uint32_t cnt)
{
    for (; cnt ; cnt--)
    {
        (void) alt_read_word(reg);
    }
}

/* helper function to check if the watchdog timer id is valid (ALT_WDOG_TIMER_t) */
bool alt_wdog_tmr_id_is_valid(ALT_WDOG_TIMER_t tmr_id)
{
    return (tmr_id == ALT_WDOG0) || (tmr_id == ALT_WDOG0_INIT) ||
           (tmr_id == ALT_WDOG1) || (tmr_id == ALT_WDOG1_INIT) ||
           (tmr_id == ALT_WDOG2) || (tmr_id == ALT_WDOG2_INIT) ||
           (tmr_id == ALT_WDOG3) || (tmr_id == ALT_WDOG3_INIT)      ;
}

/****************************************************************************************/
/* Initialize the watchdog timer module before use                                      */
/****************************************************************************************/

ALT_STATUS_CODE alt_wdog_init(void)
{
    /* put watchdog timer modules into system manager reset if not already there */
    alt_wdog_uninit();
    /* release L4 watchdog timer modules from system reset (w/ four instruction-cycle delay) */
    alt_clrbits_word(ALT_RSTMGR_PER1MODRST_ADDR,
            ALT_RSTMGR_PER1MODRST_WATCHDOG0_SET_MSK |
            ALT_RSTMGR_PER1MODRST_WATCHDOG1_SET_MSK |
            ALT_RSTMGR_PER1MODRST_WATCHDOG2_SET_MSK |
            ALT_RSTMGR_PER1MODRST_WATCHDOG3_SET_MSK );

    return ALT_E_SUCCESS;
}


/****************************************************************************************/
/* Uninitialize the watchdog timer module & return to reset state                        */
/****************************************************************************************/

ALT_STATUS_CODE alt_wdog_uninit(void)
{
    /* put L4 watchdog modules into system manager reset */
    alt_setbits_word(ALT_RSTMGR_PER1MODRST_ADDR,
            ALT_RSTMGR_PER1MODRST_WATCHDOG0_SET_MSK |
            ALT_RSTMGR_PER1MODRST_WATCHDOG1_SET_MSK |
            ALT_RSTMGR_PER1MODRST_WATCHDOG2_SET_MSK |
            ALT_RSTMGR_PER1MODRST_WATCHDOG3_SET_MSK);

    return ALT_E_SUCCESS;
}


/****************************************************************************************/
/* Stops the specified watchdog timer.                                                  */
/****************************************************************************************/

ALT_STATUS_CODE alt_wdog_stop(ALT_WDOG_TIMER_t tmr_id)
{
    uint32_t        config;                 /* the current configuration */
    uint32_t        loadreg;                /* current restart value */
    void*           ALT_WDTx_WDT_CR_ADDR;   /* ALT_WDTx_WDT_CR_ADDR of ALT_WDOGx or ALT_WDOGx_INIT */
    void*           ALT_WDTx_WDT_TORR_ADDR; /* ALT_WDTx_WDT_TORR_ADDR of ALT_WDOGx or ALT_WDOGx_INIT */
    uint32_t        ALT_RSTMGR_PER1MODRST_WATCHDOGx_SET_MSK; /* ALT_RSTMGR_PER1MODRST_WATCHDOGx_SET_MSK of ALT_WDOGx or ALT_WDOGx_INIT */

    /* these timers can only be reset by using a system manager reset */
    if ((tmr_id == ALT_WDOG0) || (tmr_id == ALT_WDOG0_INIT))
    {
        ALT_WDTx_WDT_CR_ADDR = ALT_WDT0_WDT_CR_ADDR;
        ALT_WDTx_WDT_TORR_ADDR = ALT_WDT0_WDT_TORR_ADDR;
        ALT_RSTMGR_PER1MODRST_WATCHDOGx_SET_MSK = ALT_RSTMGR_PER1MODRST_WATCHDOG0_SET_MSK;
    }
    else if ((tmr_id == ALT_WDOG1) || (tmr_id == ALT_WDOG1_INIT))
    {
        ALT_WDTx_WDT_CR_ADDR = ALT_WDT1_WDT_CR_ADDR;
        ALT_WDTx_WDT_TORR_ADDR = ALT_WDT1_WDT_TORR_ADDR;
        ALT_RSTMGR_PER1MODRST_WATCHDOGx_SET_MSK = ALT_RSTMGR_PER1MODRST_WATCHDOG1_SET_MSK;
    }
    else if ((tmr_id == ALT_WDOG2) || (tmr_id == ALT_WDOG2_INIT))
    {
        ALT_WDTx_WDT_CR_ADDR = ALT_WDT2_WDT_CR_ADDR;
        ALT_WDTx_WDT_TORR_ADDR = ALT_WDT2_WDT_TORR_ADDR;
        ALT_RSTMGR_PER1MODRST_WATCHDOGx_SET_MSK = ALT_RSTMGR_PER1MODRST_WATCHDOG2_SET_MSK;
    }
    else if ((tmr_id == ALT_WDOG3) || (tmr_id == ALT_WDOG3_INIT))
    {
        ALT_WDTx_WDT_CR_ADDR = ALT_WDT3_WDT_CR_ADDR;
        ALT_WDTx_WDT_TORR_ADDR = ALT_WDT3_WDT_TORR_ADDR;
        ALT_RSTMGR_PER1MODRST_WATCHDOGx_SET_MSK = ALT_RSTMGR_PER1MODRST_WATCHDOG3_SET_MSK;
    }
    else {return  ALT_E_BAD_ARG; }

    config = alt_read_word(ALT_WDTx_WDT_CR_ADDR);      /* read current timer mode */
    loadreg = alt_read_word(ALT_WDTx_WDT_TORR_ADDR);   /* read timer restart values */

    /* assert reset */
    alt_setbits_word(ALT_RSTMGR_PER1MODRST_ADDR, ALT_RSTMGR_PER1MODRST_WATCHDOGx_SET_MSK);

    /* wait */
    alt_wdog_wait(ALT_RSTMGR_PER1MODRST_ADDR, ALT_WDOG_RST_WIDTH);

    /* release peripheral reset signal by clearing bit */
    alt_clrbits_word(ALT_RSTMGR_PER1MODRST_ADDR, ALT_RSTMGR_PER1MODRST_WATCHDOGx_SET_MSK);

    /* restore timer restart value */
    alt_write_word(ALT_WDTx_WDT_TORR_ADDR, loadreg);

    /* restore previous timer mode except timer isn't started */
    alt_write_word(ALT_WDTx_WDT_CR_ADDR, config & ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_CLR_MSK);

    return ALT_E_SUCCESS;
}

/****************************************************************************************/
/* Start the specified watchdog timer.                                                  */
/****************************************************************************************/

ALT_STATUS_CODE alt_wdog_start(ALT_WDOG_TIMER_t tmr_id)
{
    ALT_STATUS_CODE     ret = ALT_E_BAD_ARG;    /* return value */

    if ((tmr_id == ALT_WDOG0) || (tmr_id == ALT_WDOG0_INIT))
    {
        alt_setbits_word(ALT_WDT0_WDT_CR_ADDR, ALT_WDT_WDT_CR_WDT_EN_SET_MSK);
        ret = ALT_E_SUCCESS;
    }
    else if ((tmr_id == ALT_WDOG1) || (tmr_id == ALT_WDOG1_INIT))
    {
        alt_setbits_word(ALT_WDT1_WDT_CR_ADDR, ALT_WDT_WDT_CR_WDT_EN_SET_MSK);
        ret = ALT_E_SUCCESS;
    }
    else if ((tmr_id == ALT_WDOG2) || (tmr_id == ALT_WDOG2_INIT))
    {
        alt_setbits_word(ALT_WDT2_WDT_CR_ADDR, ALT_WDT_WDT_CR_WDT_EN_SET_MSK);
        ret = ALT_E_SUCCESS;
    }
    else if ((tmr_id == ALT_WDOG3) || (tmr_id == ALT_WDOG3_INIT))
    {
        alt_setbits_word(ALT_WDT3_WDT_CR_ADDR, ALT_WDT_WDT_CR_WDT_EN_SET_MSK);
        ret = ALT_E_SUCCESS;
    }
    else {return  ALT_E_BAD_ARG; }

    return  ret;
}


/****************************************************************************************/
/* Returns whether the specified watchdog timer is currently running or not.            */
/****************************************************************************************/

bool alt_wdog_tmr_is_enabled(ALT_WDOG_TIMER_t tmr_id)
{
    bool      ret = false;          /* return value */

    if ((tmr_id == ALT_WDOG0) || (tmr_id == ALT_WDOG0_INIT))
    {
        ret = alt_read_word(ALT_WDT0_WDT_CR_ADDR) & ALT_WDT_WDT_CR_WDT_EN_SET_MSK;
    }
    else if ((tmr_id == ALT_WDOG1) || (tmr_id == ALT_WDOG1_INIT))
    {
        ret = alt_read_word(ALT_WDT1_WDT_CR_ADDR) & ALT_WDT_WDT_CR_WDT_EN_SET_MSK;
    }
    else if ((tmr_id == ALT_WDOG2) || (tmr_id == ALT_WDOG2_INIT))
    {
        ret = alt_read_word(ALT_WDT2_WDT_CR_ADDR) & ALT_WDT_WDT_CR_WDT_EN_SET_MSK;
    }
    else if ((tmr_id == ALT_WDOG3) || (tmr_id == ALT_WDOG3_INIT))
    {
        ret = alt_read_word(ALT_WDT3_WDT_CR_ADDR) & ALT_WDT_WDT_CR_WDT_EN_SET_MSK;
    }

    return  ret;
}


/****************************************************************************************/
/*  Reloads the counter countdown value and restarts the watchdog timer. User can reset */
/*  the timer at any time before timeout. Also known as kicking, petting, feeding,      */
/*  waking, or walking the watchdog. Inherently clears the interrupt as well.           */
/****************************************************************************************/

ALT_STATUS_CODE alt_wdog_reset(ALT_WDOG_TIMER_t tmr_id)
{
    if ((tmr_id == ALT_WDOG0) || (tmr_id == ALT_WDOG0_INIT))
    {
        /* restarts the counter, also clears the watchdog timer interrupt */
        alt_write_word(ALT_WDT0_WDT_CRR_ADDR, WDOG_RESET_KEY);
    }
    else if ((tmr_id == ALT_WDOG1) || (tmr_id == ALT_WDOG1_INIT))
    {
        /* restarts the counter, also clears the watchdog timer interrupt */
        alt_write_word(ALT_WDT1_WDT_CRR_ADDR, WDOG_RESET_KEY);
    }
    else if ((tmr_id == ALT_WDOG2) || (tmr_id == ALT_WDOG2_INIT))
    {
        /* restarts the counter, also clears the watchdog timer interrupt */
        alt_write_word(ALT_WDT2_WDT_CRR_ADDR, WDOG_RESET_KEY);
    }
    else if ((tmr_id == ALT_WDOG3) || (tmr_id == ALT_WDOG3_INIT))
    {
        /* restarts the counter, also clears the watchdog timer interrupt */
        alt_write_word(ALT_WDT3_WDT_CRR_ADDR, WDOG_RESET_KEY);
    }
    else {return  ALT_E_BAD_ARG; }

    return ALT_E_SUCCESS;
}


/****************************************************************************************/
/* Sets the countdown value of the specified timer.                                     */
/****************************************************************************************/

ALT_STATUS_CODE alt_wdog_counter_set(ALT_WDOG_TIMER_t tmr_id, ALT_WDOG_TIMEOUT_t val)
{
    ALT_STATUS_CODE         ret = ALT_E_BAD_ARG;    /* return value */
    uint32_t                regdata;                /* returned data */

    if (val <= ALT_WDOG_USER15_OR_2G)
    {
        if (tmr_id == ALT_WDOG0)
        {
            regdata = alt_read_word(ALT_WDT0_WDT_TORR_ADDR);
            /* set regular timeout value */
            alt_write_word(ALT_WDT0_WDT_TORR_ADDR, (regdata & ALT_WDT_WDT_TORR_TOP_CLR_MSK) | val);
            ret = ALT_E_SUCCESS;
        }
        else if (tmr_id == ALT_WDOG1)
        {
            regdata = alt_read_word(ALT_WDT1_WDT_TORR_ADDR);
            /* set regular timeout value */
            alt_write_word(ALT_WDT1_WDT_TORR_ADDR, (regdata & ALT_WDT_WDT_TORR_TOP_CLR_MSK) | val);
            ret = ALT_E_SUCCESS;
        }
        else if (tmr_id == ALT_WDOG2)
        {
            regdata = alt_read_word(ALT_WDT2_WDT_TORR_ADDR);
            /* set regular timeout value */
            alt_write_word(ALT_WDT2_WDT_TORR_ADDR, (regdata & ALT_WDT_WDT_TORR_TOP_CLR_MSK) | val);
            ret = ALT_E_SUCCESS;
        }
        else if (tmr_id == ALT_WDOG3)
        {
            regdata = alt_read_word(ALT_WDT3_WDT_TORR_ADDR);
            /* set regular timeout value */
            alt_write_word(ALT_WDT3_WDT_TORR_ADDR, (regdata & ALT_WDT_WDT_TORR_TOP_CLR_MSK) | val);
            ret = ALT_E_SUCCESS;
        }
        else if (tmr_id == ALT_WDOG0_INIT)
        {
            regdata = alt_read_word(ALT_WDT0_WDT_TORR_ADDR);
            /* set initial timeout value */
            regdata = (regdata & ALT_WDT_WDT_TORR_TOP_INIT_CLR_MSK) |
                    (val << ALT_WDT_WDT_TORR_TOP_INIT_LSB);
            alt_write_word(ALT_WDT0_WDT_TORR_ADDR, regdata);
            ret = ALT_E_SUCCESS;
        }
        else if (tmr_id == ALT_WDOG1_INIT)
        {
            regdata = alt_read_word(ALT_WDT1_WDT_TORR_ADDR);
            /* set initial timeout value */
            regdata = (regdata & ALT_WDT_WDT_TORR_TOP_INIT_CLR_MSK) |
                    (val << ALT_WDT_WDT_TORR_TOP_INIT_LSB);
            alt_write_word(ALT_WDT1_WDT_TORR_ADDR, regdata);
            ret = ALT_E_SUCCESS;
        }
        else if (tmr_id == ALT_WDOG2_INIT)
        {
            regdata = alt_read_word(ALT_WDT2_WDT_TORR_ADDR);
            /* set initial timeout value */
            regdata = (regdata & ALT_WDT_WDT_TORR_TOP_INIT_CLR_MSK) |
                    (val << ALT_WDT_WDT_TORR_TOP_INIT_LSB);
            alt_write_word(ALT_WDT2_WDT_TORR_ADDR, regdata);
            ret = ALT_E_SUCCESS;
        }
        else if (tmr_id == ALT_WDOG3_INIT)
        {
            regdata = alt_read_word(ALT_WDT3_WDT_TORR_ADDR);
            /* set initial timeout value */
            regdata = (regdata & ALT_WDT_WDT_TORR_TOP_INIT_CLR_MSK) |
                    (val << ALT_WDT_WDT_TORR_TOP_INIT_LSB);
            alt_write_word(ALT_WDT3_WDT_TORR_ADDR, regdata);
            ret = ALT_E_SUCCESS;
        }
        else {return  ALT_E_BAD_ARG; }
    }
    else {return  ALT_E_BAD_ARG; }

    return  ret;
}


/****************************************************************************************/
/* Returns the current counter value of the specified timer.                            */
/****************************************************************************************/

uint32_t alt_wdog_counter_get_current(ALT_WDOG_TIMER_t tmr_id)
{
    uint32_t     ret = 0;           /* return value */

    if ((tmr_id == ALT_WDOG0) || (tmr_id == ALT_WDOG0_INIT))
    {
        ret = alt_read_word(ALT_WDT0_WDT_CCVR_ADDR);
    }
    else if ((tmr_id == ALT_WDOG1) || (tmr_id == ALT_WDOG1_INIT))
    {
        ret = alt_read_word(ALT_WDT1_WDT_CCVR_ADDR);
    }
    else if ((tmr_id == ALT_WDOG2) || (tmr_id == ALT_WDOG2_INIT))
    {
        ret = alt_read_word(ALT_WDT2_WDT_CCVR_ADDR);
    }
    else if ((tmr_id == ALT_WDOG3) || (tmr_id == ALT_WDOG3_INIT))
    {
        ret = alt_read_word(ALT_WDT3_WDT_CCVR_ADDR);
    }

    return ret;
}


/****************************************************************************************/
/* Returns the current counter value of the specified timer, as measured in             */
/* milliseconds.                                                                        */
/****************************************************************************************/

uint32_t alt_wdog_counter_get_curtime_millisecs(ALT_WDOG_TIMER_t tmr_id)
{
    uint32_t        time = 0;           /* return value */
    uint64_t        bigtime;            /* temp for math */
    alt_freq_t      freq;               /* clock frequency */

    if (alt_wdog_tmr_id_is_valid(tmr_id))
    {
        freq = alt_clk_get_l4_sys_free_freq();          /* get clock frequency */

        if (freq != 0)
        {
            time = alt_wdog_counter_get_current(tmr_id);    /* get current counter value */
            if (time != 0)
            {
                /* the current time period is not counted, only whole periods are counted */
                bigtime = (uint64_t) time;
                bigtime *= ALT_MILLISECS_IN_A_SEC;
                bigtime /= freq;          /* cycles-per-second becomes milliseconds-per-cycle */
                time = (bigtime > (uint64_t) UINT32_MAX) ? 0 : (uint32_t) bigtime;
            }
        }
    }

    return  time;   /* zero always indicates an error for the time */
}


/* see the return value range calculations below at alt_wdog_counter_get_inittime_millisecs(). */

/****************************************************************************************/
/* Returns the initial counter value of the specified timer as a 32-bit integer         */
/* value. This is the value that will be reloaded when the timer is reset or restarted. */
/* For the timers where this value is set as an encoded powers-of-two between 16 and    */
/* 31, the value is converted into the equivalent binary value before returning it.     */
/****************************************************************************************/

uint32_t alt_wdog_counter_get_init(ALT_WDOG_TIMER_t tmr_id)
{
    uint32_t                ret = 0;        /*    value to return */

    if (tmr_id == ALT_WDOG0)
    {
        ret = ALT_WDT_WDT_TORR_TOP_GET(alt_read_word(ALT_WDT0_WDT_TORR_ADDR));
        ret = (ret >  ALT_WDT_WDT_TORR_TOP_E_USER15_OR_2G) ? 0 : ALT_TWO_TO_POW(16) << ret;
    }
    else if (tmr_id == ALT_WDOG1)
    {
        ret = ALT_WDT_WDT_TORR_TOP_GET(alt_read_word(ALT_WDT1_WDT_TORR_ADDR));
        ret = (ret >  ALT_WDT_WDT_TORR_TOP_E_USER15_OR_2G) ? 0 : ALT_TWO_TO_POW(16) << ret;
    }
    else if (tmr_id == ALT_WDOG2)
    {
        ret = ALT_WDT_WDT_TORR_TOP_GET(alt_read_word(ALT_WDT2_WDT_TORR_ADDR));
        ret = (ret >  ALT_WDT_WDT_TORR_TOP_E_USER15_OR_2G) ? 0 : ALT_TWO_TO_POW(16) << ret;
    }
    else if (tmr_id == ALT_WDOG3)
    {
        ret = ALT_WDT_WDT_TORR_TOP_GET(alt_read_word(ALT_WDT3_WDT_TORR_ADDR));
        ret = (ret >  ALT_WDT_WDT_TORR_TOP_E_USER15_OR_2G) ? 0 : ALT_TWO_TO_POW(16) << ret;
    }
    else if (tmr_id == ALT_WDOG0_INIT)
    {
        ret = ALT_WDT_WDT_TORR_TOP_INIT_GET(alt_read_word(ALT_WDT0_WDT_TORR_ADDR));
        ret = (ret >  ALT_WDT_WDT_TORR_TOP_INIT_E_USER15_OR_2G) ? 0 : ALT_TWO_TO_POW(16) << ret;
    }
    else if (tmr_id == ALT_WDOG1_INIT)
    {
        ret = ALT_WDT_WDT_TORR_TOP_INIT_GET(alt_read_word(ALT_WDT1_WDT_TORR_ADDR));
        ret = (ret >  ALT_WDT_WDT_TORR_TOP_INIT_E_USER15_OR_2G) ? 0 : ALT_TWO_TO_POW(16) << ret;
    }
    else if (tmr_id == ALT_WDOG2_INIT)
    {
        ret = ALT_WDT_WDT_TORR_TOP_INIT_GET(alt_read_word(ALT_WDT2_WDT_TORR_ADDR));
        ret = (ret >  ALT_WDT_WDT_TORR_TOP_INIT_E_USER15_OR_2G) ? 0 : ALT_TWO_TO_POW(16) << ret;
    }
    else if (tmr_id == ALT_WDOG3_INIT)
    {
        ret = ALT_WDT_WDT_TORR_TOP_INIT_GET(alt_read_word(ALT_WDT3_WDT_TORR_ADDR));
        ret = (ret >  ALT_WDT_WDT_TORR_TOP_INIT_E_USER15_OR_2G) ? 0 : ALT_TWO_TO_POW(16) << ret;
    }

    return  ret;
}



/****************************************************************************************/
/* Returns the initial value of the specified timer in nanoseconds. This is the         */
/* value that will be reloaded when the timer is reset or restarted.                    */
/****************************************************************************************/

uint64_t alt_wdog_counter_get_inittime_nanosecs(ALT_WDOG_TIMER_t tmr_id)
{
    uint64_t    time = 0;
    alt_freq_t  freq;

    if (alt_wdog_tmr_id_is_valid(tmr_id))
    {
        /* get clock frequency */
        freq = alt_clk_get_l4_sys_free_freq();

        if (freq != 0)
        {
            time = (uint64_t) alt_wdog_counter_get_init(tmr_id);     /* get reset value */
            if (time != 0)
            {
                time += 1;
                time *= ALT_NANOSECS_IN_A_SEC;
                time /= freq;              /* cycles-per-second becomes nanoseconds per cycle */
            }
        }
    }

    return  time;   /* zero always indicates an error for an init time */
}


/*  For reviewers:
 * minimum clock divider for peripheral watchdogs is 2**16 = (65,536 = 0x00010000)
 * maximum clock divider for peripheral watchdogs is 2**31 = (2,147,483,648 = 0x8000 0000)
 * multiply that by the number of nanoseconds in a second (1,000,000,000) =
 *              4,096,000,000,000 (0x0000 03B9 ACA0 0000) to 2,147,483,648,000,000,000 (0x1DCD 6500 0000 0000)
 * so the countdown time with the slowest l4_sp_clk (625 kHz) =
 *              6,553,600 nS (0x0064 0000) to 3,435,973,836,800 nS (0x0000 0320 0000 0000 nS)
 * and with the fastest l4_sp_clk (100 MHz) =
 *              40,960 ns (0xA000) to 21,474,836,480 nS (0x0000 0005 0000 0000 nS)
 */

/****************************************************************************************/
/* Returns the initial value of the specified timer in milliseconds. This is the        */
/* value that will be reloaded when the timer is reset or restarted.This call           */
/* returns a 32-bit unsigned integer, though is less precise than                       */
/* alt_wdog_counter_get_inittime_nanosecs().                                            */
/****************************************************************************************/

uint32_t alt_wdog_counter_get_inittime_millisecs(ALT_WDOG_TIMER_t tmr_id)
{
    uint32_t        time = 0;
    alt_freq_t      freq;
    uint64_t        bigtime;

    if (alt_wdog_tmr_id_is_valid(tmr_id))
    {
        freq = alt_clk_get_l4_sys_free_freq();          /* get clock frequency */

        if (freq != 0)
        {
            time = alt_wdog_counter_get_init(tmr_id);    /* get reset value */
            if (time != 0)
            {
                bigtime = ((uint64_t) time) + 1;
                bigtime *= ALT_MILLISECS_IN_A_SEC;                         /* scale value */
                bigtime /= freq;              /* cycles-per-second becomes milliseconds per cycle */
                time = (bigtime > (uint64_t) UINT32_MAX) ? 0 : (uint32_t) bigtime;
            }
        }
    }

    return  time;   /* zero always indicates an error for an init time */
}


/*  For reviewers:
 * minimum clock divider for peripheral watchdogs is 2**16 = (65,536 = 0x00010000)
 * maximum clock divider for peripheral watchdogs is 2**31 = (2,147,483,648 = 0x8000 0000)
 * multiply that by the number of milliseconds in a second (1,000) =
 *              65,536,000 (0x3E8 0000) to 2,147,483,648,000 (0x01F4 0000 0000)
 * so the countdown time with the slowest l4_sp_clk (625 kHz) =
 *                  104 mS (0x0068) to 3,435,973 mS (0x0034 6DC5 mS)
 * and with the fastest l4_sp_clk (100 MHz) = 0 mS to 21,474 mS (0x0000 53E2 mS)
 */

/****************************************************************************************/
/* Returns the maximum possible counter value of the specified timer as a 32-bit value. */
/* For the timers where this value is encoded (as powers-of-two between 16 and 31), the */
/* encoded value is converted into the equivalent binary value before returning it.     */
/****************************************************************************************/

uint32_t alt_wdog_counter_get_max(ALT_WDOG_TIMER_t tmr_id)
{
    uint32_t                ret = 0;        /* return value */

    if (alt_wdog_tmr_id_is_valid(tmr_id))
    {
        ret = ((uint32_t) ALT_TWO_TO_POW(16)) << ALT_WDOG_USER15_OR_2G;
    }

    return  ret;    /* zero always indicates an error */
}


/****************************************************************************************/
/* Returns the maximum possible delay time of the specified timer specified in          */
/* nanoseconds.This call returns a more precise reading of the counter than             */
/* alt_wdog_counter_get_max_millisecs(), though in an unsigned 64-bit integer.          */
/****************************************************************************************/

uint64_t alt_wdog_counter_get_max_nanosecs(ALT_WDOG_TIMER_t tmr_id)
{
    uint64_t    time = 0;
    alt_freq_t  freq;

    if (alt_wdog_tmr_id_is_valid(tmr_id))
    {
        freq = alt_clk_get_l4_sys_free_freq();      /* get clock frequency */

        if (freq != 0)
        {
            time = (uint64_t) alt_wdog_counter_get_max(tmr_id);     /* get maximum reset value */
            if (time != 0)
            {
                time += 1;
                time *= ALT_NANOSECS_IN_A_SEC;
                time /= freq;               /*cycles-per-second becomes nanoseconds-per-cycle */
            }
        }
    }

    return  time;   /* zero always indicates an error */
}



/****************************************************************************************/
/* Returns the maximum possible delay time of the specified timer specified in          */
/* milliseconds.This call returns a 32-bit unsigned integer, though is less precise than*/
/* alt_wdog_counter_get_max_nanosecs().                                                 */
/****************************************************************************************/

uint32_t alt_wdog_counter_get_max_millisecs(ALT_WDOG_TIMER_t tmr_id)
{
    uint32_t        time = 0;
    alt_freq_t      freq;
    uint64_t        bigtime;


    if (alt_wdog_tmr_id_is_valid(tmr_id))
    {
        freq = alt_clk_get_l4_sys_free_freq();          /* get clock frequency */

        if (freq != 0)
        {
            time = alt_wdog_counter_get_max(tmr_id);     /* get reset value */
            if (time != 0)
            {
                bigtime = ((uint64_t) time) + 1;
                bigtime *= ALT_MILLISECS_IN_A_SEC;
                bigtime /= freq;              /*cycles-per-second becomes milliseconds-per-cycle */
                time = (bigtime > (uint64_t) UINT32_MAX) ? 0 : (uint32_t) bigtime;
            }
        }
    }

    return  time;   /* zero always indicates an error */
}

/****************************************************************************************/
/* Returns the status of the interrupt of the specified watchdog timer module but does  */
/* not clear it. Return TRUE if the interrupt of the specified timer    */
/* module is pending and FALSE otherwise.                                               */
/****************************************************************************************/

bool alt_wdog_int_is_pending(ALT_WDOG_TIMER_t tmr_id)
{
    bool        ret = false;            /*return value */

    if ((tmr_id == ALT_WDOG0) || (tmr_id == ALT_WDOG0_INIT))
    {
        ret = alt_read_word(ALT_WDT0_WDT_STAT_ADDR) & ALT_WDT_WDT_STAT_WDT_STAT_SET_MSK;
    }
    else if ((tmr_id == ALT_WDOG1) || (tmr_id == ALT_WDOG1_INIT))
    {
        ret = alt_read_word(ALT_WDT1_WDT_STAT_ADDR) & ALT_WDT_WDT_STAT_WDT_STAT_SET_MSK;
    }
    else if ((tmr_id == ALT_WDOG2) || (tmr_id == ALT_WDOG2_INIT))
    {
        ret = alt_read_word(ALT_WDT2_WDT_STAT_ADDR) & ALT_WDT_WDT_STAT_WDT_STAT_SET_MSK;
    }
    else if ((tmr_id == ALT_WDOG3) || (tmr_id == ALT_WDOG3_INIT))
    {
        ret = alt_read_word(ALT_WDT3_WDT_STAT_ADDR) & ALT_WDT_WDT_STAT_WDT_STAT_SET_MSK;
    }

    return ret;
}


/****************************************************************************************/
/* Returns the state of the interrupt of the specified watchdog timer module.           */
/****************************************************************************************/

bool alt_wdog_int_is_enabled(ALT_WDOG_TIMER_t tmr_id)
{
    bool        ret = false;            /*return value */

    if ((tmr_id == ALT_WDOG0) || (tmr_id == ALT_WDOG0_INIT))
    {
        /* if these timers are running, their interrupt is enabled */
        ret = alt_read_word(ALT_WDT0_WDT_CR_ADDR) & ALT_WDT_WDT_CR_WDT_EN_SET_MSK;
    }
    else if ((tmr_id == ALT_WDOG1) || (tmr_id == ALT_WDOG1_INIT))
    {
        /* if these timers are running, their interrupt is enabled */
        ret = alt_read_word(ALT_WDT1_WDT_CR_ADDR) & ALT_WDT_WDT_CR_WDT_EN_SET_MSK;
    }
    else if ((tmr_id == ALT_WDOG2) || (tmr_id == ALT_WDOG2_INIT))
    {
        /* if these timers are running, their interrupt is enabled */
        ret = alt_read_word(ALT_WDT2_WDT_CR_ADDR) & ALT_WDT_WDT_CR_WDT_EN_SET_MSK;
    }
    else if ((tmr_id == ALT_WDOG3) || (tmr_id == ALT_WDOG3_INIT))
    {
        /* if these timers are running, their interrupt is enabled */
        ret = alt_read_word(ALT_WDT3_WDT_CR_ADDR) & ALT_WDT_WDT_CR_WDT_EN_SET_MSK;
    }

    return ret;
}


/****************************************************************************************/
/* Clears the pending status of the interrupt of the specified watchdog timer module.   */
/****************************************************************************************/

ALT_STATUS_CODE alt_wdog_int_clear(ALT_WDOG_TIMER_t tmr_id)
{
    if ((tmr_id == ALT_WDOG0) || (tmr_id == ALT_WDOG0_INIT))
    {
        /* clear int by reading from end-of-interrupt register
         * adding the void cast tells armcc not to throw a error for this usage */
        (void) alt_read_word(ALT_WDT0_WDT_EOI_ADDR);
    }
    else if ((tmr_id == ALT_WDOG1) || (tmr_id == ALT_WDOG1_INIT))
    {
        /* clear int by reading from end-of-interrupt register
         * adding the void cast tells armcc not to throw a error for this usage */
        (void) alt_read_word(ALT_WDT1_WDT_EOI_ADDR);
    }
    else if ((tmr_id == ALT_WDOG2) || (tmr_id == ALT_WDOG2_INIT))
    {
        /* clear int by reading from end-of-interrupt register
         * adding the void cast tells armcc not to throw a error for this usage */
        (void) alt_read_word(ALT_WDT2_WDT_EOI_ADDR);
    }
    else if ((tmr_id == ALT_WDOG3) || (tmr_id == ALT_WDOG3_INIT))
    {
        /* clear int by reading from end-of-interrupt register
         * adding the void cast tells armcc not to throw a error for this usage */
        (void) alt_read_word(ALT_WDT3_WDT_EOI_ADDR);
    }
    else {return  ALT_E_BAD_ARG; }

    return ALT_E_SUCCESS;
}


/****************************************************************************************/
/* Returns the status of the interrupt of the specified watchdog timer module and also  */
/* clears it. Return TRUE if the interrupt of the specified general purpose timer       */
/* module is pending and FALSE otherwise.                                               */
/****************************************************************************************/

bool alt_wdog_int_if_pending_clear(ALT_WDOG_TIMER_t tmr_id)
{
    uint32_t                ret = false;    /*    value to return */

    if ((tmr_id == ALT_WDOG0) || (tmr_id == ALT_WDOG0_INIT))
    {
        ret = alt_read_word(ALT_WDT0_WDT_STAT_ADDR) & ALT_WDT_WDT_STAT_WDT_STAT_SET_MSK;
        if (ret)
        {
            /* clear int by reading from end-of-interrupt register
             * adding the void cast tells armcc not to throw a error for this usage */
            (void) alt_read_word(ALT_WDT0_WDT_EOI_ADDR);
       }
    }
    else if ((tmr_id == ALT_WDOG1) || (tmr_id == ALT_WDOG1_INIT))
    {
        ret = alt_read_word(ALT_WDT1_WDT_STAT_ADDR) & ALT_WDT_WDT_STAT_WDT_STAT_SET_MSK;
        if (ret)
        {
            /* clear int by reading from end-of-interrupt register
             * adding the void cast tells armcc not to throw a error for this usage */
            (void) alt_read_word(ALT_WDT1_WDT_EOI_ADDR);
        }
    }
    else if ((tmr_id == ALT_WDOG2) || (tmr_id == ALT_WDOG2_INIT))
    {
        ret = alt_read_word(ALT_WDT2_WDT_STAT_ADDR) & ALT_WDT_WDT_STAT_WDT_STAT_SET_MSK;
        if (ret)
        {
            /* clear int by reading from end-of-interrupt register
             * adding the void cast tells armcc not to throw a error for this usage */
            (void) alt_read_word(ALT_WDT2_WDT_EOI_ADDR);
       }
    }
    else if ((tmr_id == ALT_WDOG3) || (tmr_id == ALT_WDOG3_INIT))
    {
        ret = alt_read_word(ALT_WDT3_WDT_STAT_ADDR) & ALT_WDT_WDT_STAT_WDT_STAT_SET_MSK;
        if (ret)
        {
            /* clear int by reading from end-of-interrupt register
             * adding the void cast tells armcc not to throw a error for this usage */
            (void) alt_read_word(ALT_WDT3_WDT_EOI_ADDR);
        }
    }

    return  ret;
}


/****************************************************************************************/
/* Sets the timeout response mode of the specified watchdog timer. The options          */
/* are to generate a system reset or to generate an interrupt and then generate a       */
/* system reset if the interrupt is not cleared by the next time the watchdog timer     */
/* counter rolls over.                                                                  */
/****************************************************************************************/

ALT_STATUS_CODE alt_wdog_response_mode_set(ALT_WDOG_TIMER_t tmr_id, ALT_WDOG_RESET_TYPE_t type)
{
    ALT_STATUS_CODE       ret = ALT_E_BAD_ARG;        /* return value */
    void *                ALT_WDTx_WDT_CR_ADDR;       /* ALT_WDTx_WDT_CR_ADDR of ALT_WDOGx or ALT_WDOGx_INIT */


    if ((tmr_id == ALT_WDOG0) || (tmr_id == ALT_WDOG0_INIT))
    {
        ALT_WDTx_WDT_CR_ADDR = ALT_WDT0_WDT_CR_ADDR;
    }
    else if ((tmr_id == ALT_WDOG1) || (tmr_id == ALT_WDOG1_INIT))
    {
        ALT_WDTx_WDT_CR_ADDR = ALT_WDT1_WDT_CR_ADDR;
    }
    else if ((tmr_id == ALT_WDOG2) || (tmr_id == ALT_WDOG2_INIT))
    {
        ALT_WDTx_WDT_CR_ADDR = ALT_WDT2_WDT_CR_ADDR;
    }
    else if ((tmr_id == ALT_WDOG3) || (tmr_id == ALT_WDOG3_INIT))
    {
        ALT_WDTx_WDT_CR_ADDR = ALT_WDT3_WDT_CR_ADDR;
    }
    else { return ALT_E_BAD_ARG; }

    if (type == ALT_WDOG_WARM_RESET)
    {
        alt_clrbits_word(ALT_WDTx_WDT_CR_ADDR, ALT_WDT_WDT_CR_RMOD_SET_MSK);
        ret = ALT_E_SUCCESS;
    }
    else if (type == ALT_WDOG_INT_THEN_RESET)
    {
        alt_setbits_word(ALT_WDTx_WDT_CR_ADDR, ALT_WDT_WDT_CR_RMOD_SET_MSK);
        ret = ALT_E_SUCCESS;
    }
    else { return ALT_E_BAD_ARG; }

    return  ret;            /* rejects a bad tmr_id argument/type argument combination */
}


/****************************************************************************************/
/* Returns the response mode of the specified timer.                                    */
/****************************************************************************************/

ALT_WDOG_RESET_TYPE_t alt_wdog_response_mode_get(ALT_WDOG_TIMER_t tmr_id)
{
    ALT_WDOG_RESET_TYPE_t       ret = ALT_E_BAD_ARG;     /* return value */
    uint32_t                    regdata;                 /* read value */

    if ((tmr_id == ALT_WDOG0) || (tmr_id == ALT_WDOG0_INIT))
    {
        regdata = alt_read_word(ALT_WDT0_WDT_CR_ADDR);
    }
    else if ((tmr_id == ALT_WDOG1) || (tmr_id == ALT_WDOG1_INIT))
    {
        regdata = alt_read_word(ALT_WDT1_WDT_CR_ADDR);
    }
    else if ((tmr_id == ALT_WDOG2) || (tmr_id == ALT_WDOG2_INIT))
    {
        regdata = alt_read_word(ALT_WDT2_WDT_CR_ADDR);
    }
    else if ((tmr_id == ALT_WDOG3) || (tmr_id == ALT_WDOG3_INIT))
    {
        regdata = alt_read_word(ALT_WDT3_WDT_CR_ADDR);
    }
    else {return  ALT_WDOG_UNKNOWN; }

    ret = (regdata & ALT_WDT_WDT_CR_RMOD_SET_MSK) ? ALT_WDOG_INT_THEN_RESET : ALT_WDOG_WARM_RESET;

    return  ret;
}


/****************************************************************************************/
/* Returns the component code of the watchdog timer module.                             */
/****************************************************************************************/

uint32_t alt_wdog_compcode_get(ALT_WDOG_TIMER_t tmr_id)
{
    uint32_t    component = 0;                  /* component code of the module */

    if ((tmr_id == ALT_WDOG0) || (tmr_id == ALT_WDOG0_INIT))
    {
        component = alt_read_word(ALT_WDT0_WDT_COMP_TYPE_ADDR);
    }
    else if ((tmr_id == ALT_WDOG1) || (tmr_id == ALT_WDOG1_INIT))
    {
        component = alt_read_word(ALT_WDT1_WDT_COMP_TYPE_ADDR);
    }
    else if ((tmr_id == ALT_WDOG2) || (tmr_id == ALT_WDOG2_INIT))
    {
        component = alt_read_word(ALT_WDT2_WDT_COMP_TYPE_ADDR);
    }
    else if ((tmr_id == ALT_WDOG3) || (tmr_id == ALT_WDOG3_INIT))
    {
        component = alt_read_word(ALT_WDT3_WDT_COMP_TYPE_ADDR);
    }

    return  component;
}


/****************************************************************************************/
/* Returns the version code of the watchdog timer module.                               */
/****************************************************************************************/

uint32_t alt_wdog_ver_get(ALT_WDOG_TIMER_t tmr_id)
{
    uint32_t    ver = 0;                  /* revision code of the module */

    if ((tmr_id == ALT_WDOG0) || (tmr_id == ALT_WDOG0_INIT))
    {
        ver = alt_read_word(ALT_WDT0_WDT_COMP_VERSION_ADDR);
    }
    else if ((tmr_id == ALT_WDOG1) || (tmr_id == ALT_WDOG1_INIT))
    {
        ver = alt_read_word(ALT_WDT1_WDT_COMP_VERSION_ADDR);
    }
    else if ((tmr_id == ALT_WDOG2) || (tmr_id == ALT_WDOG2_INIT))
    {
        ver = alt_read_word(ALT_WDT2_WDT_COMP_VERSION_ADDR);
    }
    else if ((tmr_id == ALT_WDOG3) || (tmr_id == ALT_WDOG3_INIT))
    {
        ver = alt_read_word(ALT_WDT3_WDT_COMP_VERSION_ADDR);
    }

    return  ver;
}


/****************************************************************************************/


