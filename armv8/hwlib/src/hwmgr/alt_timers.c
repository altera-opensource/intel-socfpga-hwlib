/******************************************************************************
*
* Copyright 2017 Altera Corporation. All Rights Reserved.
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
*  There are eight on-chip general purpose timers. All eight timers are available
*  to each CPU.\n\n
*  There are four types of timers available:
*     - Four general-purpose countdown timers available to CPU0, CPU1, CPU2, CPU3
*     or the  FPGA.\n
*     - Each CPU has a private GP EL1 Non-secure physical timer available only to 
*     itself.\n
*     - Each CPU has a private GP EL1 Secure physical timer available only to 
*     itself.\n
*     - Each CPU has a private GP EL2 physical timer available only to itself.\n
*     - Each CPU has a private virtual timer available only to itself.\n
*     Each type has a somewhat different HW interface This API presents the same
*     external interface for each.
*
******************************************************************************/

/*
 * $Id: //acds/main/embedded/ip/hps/armv8/hwlib/src/hwmgr/alt_timers.c#2 $
 */


#include    <stdint.h>
#include    <stdbool.h>
#include    "socal/hps.h"
#include    "socal/socal.h"
#include    "socal/alt_tmr.h"
#include    "socal/alt_rstmgr.h"
#include    "hwlib.h"

#include    "alt_timers.h"
#include    "alt_a53_timers.h"

#include    "alt_clock_manager.h"                    /* for getting clock bus frequency */

#if !defined(EXECUTION_LEVEL3) && !defined(EXECUTION_LEVEL2)
    #error "Expecting definition of EXECUTION_LEVEL3 or EXECUTION_LEVEL2"
#endif

#ifdef soc_s10
    #define ALT_RSTMGR_PERMODRST_ADDR               ALT_RSTMGR_PER1MODRST_ADDR
    #define ALT_RSTMGR_PERMODRST_OSC1TMR0_SET_MSK   ALT_RSTMGR_PER1MODRST_L4SYSTIMER0_SET_MSK
    #define ALT_RSTMGR_PERMODRST_OSC1TMR1_SET_MSK   ALT_RSTMGR_PER1MODRST_L4SYSTIMER1_SET_MSK
    #define ALT_RSTMGR_PERMODRST_SPTMR0_SET_MSK     ALT_RSTMGR_PER1MODRST_SPTIMER0_SET_MSK
    #define ALT_RSTMGR_PERMODRST_SPTMR1_SET_MSK     ALT_RSTMGR_PER1MODRST_SPTIMER1_SET_MSK

    #define ALT_OSC1TMR0_TMR1CTLREG_ADDR            ALT_TMR_SYS0_TIMER1CONTROLREG_ADDR
    #define ALT_OSC1TMR1_TMR1CTLREG_ADDR            ALT_TMR_SYS1_TIMER1CONTROLREG_ADDR
    #define ALT_OSC1TMR0_TMR1LDCOUNT_ADDR           ALT_TMR_SYS0_TIMER1LOADCOUNT_ADDR
    #define ALT_OSC1TMR1_TMR1LDCOUNT_ADDR           ALT_TMR_SYS1_TIMER1LOADCOUNT_ADDR
    #define ALT_OSC1TMR0_TMR1CURVAL_ADDR            ALT_TMR_SYS0_TIMER1CURRENTVAL_ADDR
    #define ALT_OSC1TMR1_TMR1CURVAL_ADDR            ALT_TMR_SYS1_TIMER1CURRENTVAL_ADDR
    #define ALT_OSC1TMR0_TMRSEOI_ADDR               ALT_TMR_SYS0_TIMERSEOI_ADDR
    #define ALT_OSC1TMR1_TMRSEOI_ADDR               ALT_TMR_SYS1_TIMERSEOI_ADDR
    #define ALT_OSC1TMR0_TMR1INTSTAT_ADDR           ALT_TMR_SYS0_TIMER1INTSTAT_ADDR
    #define ALT_OSC1TMR1_TMR1INTSTAT_ADDR           ALT_TMR_SYS1_TIMER1INTSTAT_ADDR
    #define ALT_OSC1TMR0_TMR1EOI_ADDR               ALT_TMR_SYS0_TIMER1EOI_ADDR
    #define ALT_OSC1TMR1_TMR1EOI_ADDR               ALT_TMR_SYS1_TIMER1EOI_ADDR

    #define ALT_SPTMR0_TMR1CTLREG_ADDR              ALT_TMR_SP0_TIMER1CONTROLREG_ADDR
    #define ALT_SPTMR1_TMR1CTLREG_ADDR              ALT_TMR_SP1_TIMER1CONTROLREG_ADDR
    #define ALT_SPTMR0_TMR1LDCOUNT_ADDR             ALT_TMR_SP0_TIMER1LOADCOUNT_ADDR
    #define ALT_SPTMR1_TMR1LDCOUNT_ADDR             ALT_TMR_SP1_TIMER1LOADCOUNT_ADDR
    #define ALT_SPTMR0_TMR1CURVAL_ADDR              ALT_TMR_SP0_TIMER1CURRENTVAL_ADDR
    #define ALT_SPTMR1_TMR1CURVAL_ADDR              ALT_TMR_SP1_TIMER1CURRENTVAL_ADDR
    #define ALT_SPTMR0_TMRSEOI_ADDR                 ALT_TMR_SP0_TIMERSEOI_ADDR
    #define ALT_SPTMR1_TMRSEOI_ADDR                 ALT_TMR_SP1_TIMERSEOI_ADDR
    #define ALT_SPTMR0_TMR1INTSTAT_ADDR             ALT_TMR_SP0_TIMER1INTSTAT_ADDR
    #define ALT_SPTMR1_TMR1INTSTAT_ADDR             ALT_TMR_SP1_TIMER1INTSTAT_ADDR
    #define ALT_SPTMR0_TMR1EOI_ADDR                 ALT_TMR_SP0_TIMER1EOI_ADDR
    #define ALT_SPTMR1_TMR1EOI_ADDR                 ALT_TMR_SP1_TIMER1EOI_ADDR
#endif  /* soc_s10 */


/*
 *
 * CPU private timer function prototypes. 
 *
 *     These function will be introduced later in the fle. 
 *
 */
ALT_STATUS_CODE alt_cpu_tmr_is_running(ALT_GPT_TIMER_t);

ALT_STATUS_CODE  alt_cpu_tmr_counter_set(ALT_GPT_TIMER_t, uint64_t);

uint64_t alt_cpu_tmr_counter_get(ALT_GPT_TIMER_t);

uint64_t alt_cpu_tmr_reset_value_get(ALT_GPT_TIMER_t);

ALT_STATUS_CODE  alt_cpu_tmr_start(ALT_GPT_TIMER_t);

ALT_STATUS_CODE alt_cpu_tmr_stop(ALT_GPT_TIMER_t);

ALT_STATUS_CODE alt_cpu_tmr_int_disable(ALT_GPT_TIMER_t); 

ALT_STATUS_CODE alt_cpu_tmr_int_enable(ALT_GPT_TIMER_t); 

bool alt_cpu_tmr_int_is_enabled(ALT_GPT_TIMER_t);

ALT_STATUS_CODE alt_cpu_tmr_int_clear_pending(ALT_GPT_TIMER_t);

uint64_t alt_cpu_tmr_int_is_pending(ALT_GPT_TIMER_t); 

ALT_STATUS_CODE alt_cpu_tmr_is_autoinc_mode(ALT_GPT_TIMER_t);

ALT_STATUS_CODE alt_cpu_tmr_prescaler_set(ALT_GPT_TIMER_t, uint32_t);

uint32_t alt_cpu_tmr_prescaler_get(ALT_GPT_TIMER_t);

bool alt_cpu_tmr_mode_set(ALT_GPT_TIMER_t, uint32_t);


/****************************************************************************************/
/* alt_gpt_all_tmr_uninit() uninitializes the general-purpose timer modules             */
/****************************************************************************************/

ALT_STATUS_CODE alt_gpt_all_tmr_uninit(void)
{
        /* put the L4 general-purpose timer modules into system manager reset */
    alt_setbits_word(ALT_RSTMGR_PER1MODRST_ADDR,
                     ALT_RSTMGR_PER1MODRST_L4SYSTIMER0_SET_MSK 
	           | ALT_RSTMGR_PER1MODRST_L4SYSTIMER1_SET_MSK 
                   | ALT_RSTMGR_PER1MODRST_SPTIMER0_SET_MSK 
	           | ALT_RSTMGR_PER1MODRST_SPTIMER1_SET_MSK);

        /* put the local ARM private timer into reset manually */
    alt_a53_set_gentimer_nsel1control(0);

#if defined(EXECUTION_LEVEL3)
    alt_a53_set_gentimer_sel1control(0);
#endif

    alt_a53_set_gentimer_nsel2control(0);

    alt_a53_set_gentimer_virtcontrol(0);

    return ALT_E_SUCCESS;
}


/****************************************************************************************/
/* alt_gpt_all_tmr_init() initializes the general-purpose timer modules                 */
/****************************************************************************************/

ALT_STATUS_CODE alt_gpt_all_tmr_init(void)
{
        /* put general-purpose timer modules into system manager reset if not already there */
    alt_gpt_all_tmr_uninit();
        /* release general-purpose timer modules from system reset (w/ two-instruction delay) */
    alt_clrbits_word(ALT_RSTMGR_PER1MODRST_ADDR,
                     ALT_RSTMGR_PER1MODRST_L4SYSTIMER0_SET_MSK 
		   | ALT_RSTMGR_PER1MODRST_L4SYSTIMER1_SET_MSK 
                   | ALT_RSTMGR_PER1MODRST_SPTIMER0_SET_MSK 
		   | ALT_RSTMGR_PER1MODRST_SPTIMER1_SET_MSK);

        /* nothing to do for the local ARM private timer */
    return ALT_E_SUCCESS;
}


/****************************************************************************************/
/*  alt_gpt_tmr_stop() stops the countdown or countup of the specified timer.           */
/****************************************************************************************/

ALT_STATUS_CODE alt_gpt_tmr_stop(ALT_GPT_TIMER_t tmr_id)
{
    ALT_STATUS_CODE     ret = ALT_E_ERROR;      /* Return value */
    uint32_t            regmask;                /* data mask */
    volatile uint32_t   *regaddr;               /* register address */

    if (((tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)    /* Local Private Timer for this CPU */
      || (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)     /* Local Private Timer for this CPU */
      || (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR)    /* Local Private Timer for this CPU */
      || (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR)))      /* Local Private Timer for this CPU */
    {
	ret = alt_cpu_tmr_stop(tmr_id);
    }
    else
    {
        if (tmr_id == ALT_GPT_OSC1_TMR0)            /* Timer 0 on the OSC1 bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SYS0_TIMER1CONTROLREG_ADDR;
            regmask = ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_CLR_MSK;
        }
        else if (tmr_id == ALT_GPT_OSC1_TMR1)       /* Timer 1 on the OSC1 bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SYS1_TIMER1CONTROLREG_ADDR;
            regmask = ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_CLR_MSK;
        }
        else if (tmr_id == ALT_GPT_SP_TMR0)         /* Timer 0 on the SP bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SP0_TIMER1CONTROLREG_ADDR;
            regmask = ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_CLR_MSK;
        }
        else if (tmr_id == ALT_GPT_SP_TMR1)         /* Timer 1 on the SP bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SP1_TIMER1CONTROLREG_ADDR;
            regmask = ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_CLR_MSK;
        }
        else { return ALT_E_BAD_ARG; }              /* none of the above */

        alt_write_word(regaddr, alt_read_word(regaddr) & regmask);
        ret = ALT_E_SUCCESS;
    }
    return ret;
}


/****************************************************************************************/
/*  alt_gpt_tmr_start() starts the countdown or countup of the specified timer.         */
/****************************************************************************************/

ALT_STATUS_CODE alt_gpt_tmr_start(ALT_GPT_TIMER_t tmr_id)
{
    ALT_STATUS_CODE     ret = ALT_E_ERROR;          /* Return value */
    uint32_t            regmask;                    /* data mask */
    volatile uint32_t   *regaddr;                   /* register address */

    if (((tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)    /* Local Private Timer for this CPU */
      || (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)     /* Local Private Timer for this CPU */
      || (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR)            /* Local Private Timer for this CPU */
      || (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR)))      /* Local Private Timer for this CPU */
    {
	ret = alt_cpu_tmr_start(tmr_id);
    }
    else
    {
        if (tmr_id == ALT_GPT_OSC1_TMR0)            /* Timer 0 on the OSC1 bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SYS0_TIMER1CONTROLREG_ADDR;
            regmask = ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_SET_MSK;
        }
        else if (tmr_id == ALT_GPT_OSC1_TMR1)       /* Timer 1 on the OSC1 bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SYS1_TIMER1CONTROLREG_ADDR;
            regmask = ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_SET_MSK;
        }
        else if (tmr_id == ALT_GPT_SP_TMR0)         /* Timer 0 on the SP bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SP0_TIMER1CONTROLREG_ADDR;
            regmask = ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_SET_MSK;
        }
        else if (tmr_id == ALT_GPT_SP_TMR1)         /* Timer 1 on the SP bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SP1_TIMER1CONTROLREG_ADDR;
            regmask = ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_SET_MSK;
        }
        else { return ALT_E_BAD_ARG; }              /* none of the above */

        alt_setbits_word(regaddr, regmask);
        ret = ALT_E_SUCCESS;
    }
    return ret;
}


/****************************************************************************************/
/* alt_gpt_tmr_is_running() checks and returns the status of the specified timer,       */
/* i.e. whether running or not.                                                         */
/****************************************************************************************/

ALT_STATUS_CODE alt_gpt_tmr_is_running(ALT_GPT_TIMER_t tmr_id)
{
    ALT_STATUS_CODE     ret = ALT_E_ERROR;  /* Return value */
    uint32_t            regdata;            /* temp value to read */
    uint32_t            regmask;            /* data mask */
    volatile uint32_t   *regaddr;           /* register address */

    if (((tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)    /* Local Private Timer for this CPU */
      || (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)     /* Local Private Timer for this CPU */
      || (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR)            /* Local Private Timer for this CPU */
      || (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR)))      /* Local Private Timer for this CPU */
    {
	ret = alt_cpu_tmr_is_running(tmr_id);
    }
    else
    {	
	if (tmr_id == ALT_GPT_OSC1_TMR0)            /*Timer 0 on the OSC1 bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SYS0_TIMER1CONTROLREG_ADDR;
            regmask = ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_SET_MSK;
        }
        else if (tmr_id == ALT_GPT_OSC1_TMR1)       /*Timer 1 on the OSC1 bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SYS1_TIMER1CONTROLREG_ADDR;
            regmask = ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_SET_MSK;
        }
        else if (tmr_id == ALT_GPT_SP_TMR0)         /*Timer 0 on the SP bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SP0_TIMER1CONTROLREG_ADDR;
            regmask = ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_SET_MSK;
        }
        else if (tmr_id == ALT_GPT_SP_TMR1)         /*Timer 1 on the SP bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SP1_TIMER1CONTROLREG_ADDR;
            regmask = ALT_TMR_TIMER1CONTROLREG_TIMER_ENABLE_SET_MSK;
        }
        else { return ALT_E_BAD_ARG; }              /* none of the above */

        regdata = alt_read_word(regaddr);
        ret = (regdata & regmask) ? ALT_E_TRUE : ALT_E_FALSE;
    }

    return ret;
}


/****************************************************************************************/
/*                                                                                      */
/* alt_gpt_tmr_reset() just stops and restarts the specified timer, causing it to       */
/* reset and start its count over again.                                                */
/*                                                                                      */
/****************************************************************************************/

ALT_STATUS_CODE alt_gpt_tmr_reset(ALT_GPT_TIMER_t tmr_id)
{
    ALT_STATUS_CODE     ret = ALT_E_SUCCESS;

    if (alt_gpt_tmr_is_running(tmr_id)) { ret = alt_gpt_tmr_stop(tmr_id); }
                /* stop the timer */
    if (ret == ALT_E_SUCCESS) { ret = alt_gpt_tmr_start(tmr_id); }
                /* restart timer again from the beginning */
    if (ret == ALT_E_SUCCESS) { ret = alt_gpt_int_clear_pending(tmr_id); }
               /* clear out any pending interrupts for this timer */
    
    return    ret;
}


/****************************************************************************************/
/* alt_gpt_counter_set() sets the value of the specified timer. If the timer is         */
/* currently running, it is stopped first.                                              */
/****************************************************************************************/

ALT_STATUS_CODE alt_gpt_counter_set(ALT_GPT_TIMER_t tmr_id, uint32_t val)
{
    ALT_STATUS_CODE      ret = ALT_E_ERROR;           /* Return value */
    volatile uint32_t    *regaddr;                    /* register address */


    if (alt_gpt_tmr_is_running(tmr_id))
    {
        alt_gpt_tmr_stop(tmr_id);                     /* If timer is currently running, stop it */
    }

    if (((tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)      /* Local Private Timer for this CPU */
      || (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)       /* Local Private Timer for this CPU */
      || (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR)              /* Local Private Timer for this CPU */
      || (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR)))        /* Local Private Timer for this CPU */
    {
	ret = alt_cpu_tmr_counter_set(tmr_id, val);
    }
    else 
    {
	if (tmr_id == ALT_GPT_OSC1_TMR0)        /* Timer 0 on the OSC1 bus */
    	{
            regaddr = (volatile uint32_t *) ALT_TMR_SYS0_TIMER1LOADCOUNT_ADDR;
        }
        else if (tmr_id == ALT_GPT_OSC1_TMR1)   /* Timer 1 on the OSC1 bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SYS1_TIMER1LOADCOUNT_ADDR;
        }
        else if (tmr_id == ALT_GPT_SP_TMR0)     /* Timer 0 on the SP bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SP0_TIMER1LOADCOUNT_ADDR;
        }
        else if (tmr_id == ALT_GPT_SP_TMR1)     /* Timer 1 on the SP bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SP1_TIMER1LOADCOUNT_ADDR;
        }
        else { return ALT_E_BAD_ARG; }          /* none of the above */

        alt_write_word(regaddr, val);
        ret = ALT_E_SUCCESS;
    }
    return    ret;
}


/****************************************************************************************/
/* alt_gpt_counter_get() returns the current value of the specified timer, whether      */
/* running or not. Note that the global timer counts up and for the global timer, this  */
/* function does NOT return a value that indicates how long until the next interrupt.   */
/****************************************************************************************/

uint64_t alt_gpt_counter_get(ALT_GPT_TIMER_t tmr_id)
{
    uint64_t            ret = 0;                /* value to return */
    volatile uint32_t   *regaddr;               /* register address */


    if (((tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)/* Local Private Timer for this CPU */
      || (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR) /* Local Private Timer for this CPU */
      || (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR)/* Local Private Timer for this CPU */
      || (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR)))  /* Local Private Timer for this CPU */
    {
	ret = alt_cpu_tmr_counter_get(tmr_id);
    }
    else
    {
	if (tmr_id == ALT_GPT_OSC1_TMR0)   /* Timer 0 on the OSC1 bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SYS0_TIMER1CURRENTVAL_ADDR;
        }
        else if (tmr_id == ALT_GPT_OSC1_TMR1)   /* Timer 1 on the OSC1 bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SYS1_TIMER1CURRENTVAL_ADDR;
        }
        else if (tmr_id == ALT_GPT_SP_TMR0)     /* Timer 0 on the SP bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SP0_TIMER1CURRENTVAL_ADDR;
        }
        else if (tmr_id == ALT_GPT_SP_TMR1)     /* Timer 1 on the SP bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SP1_TIMER1CURRENTVAL_ADDR;
        }
        else { return 0; }                      /* none of the above */

    	ret = (uint64_t)alt_read_word(regaddr);
    } 
    return ret;
}

/****************************************************************************************/
/* alt_gpt_timer_clk_source_get() gets the clk source for a given timer                        */
/****************************************************************************************/
ALT_CLK_t  alt_gpt_timer_clk_source_get(ALT_GPT_TIMER_t tmr_id)
{
    ALT_CLK_t clk = ALT_CLK_UNKNOWN;

    if  ((tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)   /* Local Private Timer for this CPU */
      || (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)    /* Local Private Timer for this CPU */
      || (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR)   /* Local Private Timer for this CPU */
      || (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR))      /* Local Private Timer for this CPU */
    {
	clk = ALT_CLK_MPU_PERIPH;
    }
    else
    {
	if (tmr_id == ALT_GPT_OSC1_TMR0)           /* Timer 0 on the OSC1 bus */
        {
            clk = ALT_CLK_OSC1;
        }
        else if (tmr_id == ALT_GPT_OSC1_TMR1)      /* Timer 1 on the OSC1 bus */
        {
            clk = ALT_CLK_OSC1;
        }
        else if (tmr_id == ALT_GPT_SP_TMR0)        /* Timer 0 on the SP bus */
        {
            clk = ALT_CLK_L4_SP;
        } 
        else if (tmr_id == ALT_GPT_SP_TMR1)        /* Timer 1 on the SP bus */
        {
            clk = ALT_CLK_L4_SP;
        }
        else { return ALT_CLK_UNKNOWN; }                         /* none of the above */
    }
    return clk; 
}

/****************************************************************************************/
/* alt_gpt_curtime_get_kernl() is the basis of the next four functions.                   */
/****************************************************************************************/

static uint64_t alt_gpt_curtime_get_kernl(ALT_GPT_TIMER_t tmr_id, uint32_t mult)
{
     uint64_t           time = 0;               /* value to return */
     ALT_CLK_t          clk = ALT_CLK_UNKNOWN; 
     uint32_t           pres, freq;
     volatile uint32_t  *regaddr;               /* register address */

     clk = alt_gpt_timer_clk_source_get(tmr_id); 
     if (clk == ALT_CLK_UNKNOWN) return 0;

     pres = alt_gpt_prescaler_get(tmr_id);
     if (pres <= UINT8_MAX)
     {
    	if  (tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)     /* Local Private Timer for this CPU */
    	{
	    time = alt_a53_get_gentimer_nsel1timervalue();
    	}
    	else if (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)  /* Local Timer for this CPU, if it is in gpt mode */
    	{
	    time = alt_a53_get_gentimer_sel1timervalue();
    	}
    	else if (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR) /* Local Timer for this CPU, if it is in gpt mode */
    	{
	    time = alt_a53_get_gentimer_nsel2timervalue();
    	}
    	else if (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR)     /* Local Timer for this CPU, if it is in gpt mode */
    	{
	    time = alt_a53_get_gentimer_virttimervalue();
	}
        else
	{
	    if (tmr_id == ALT_GPT_OSC1_TMR0)           /* Timer 0 on the OSC1 bus */
            {
                regaddr = (volatile uint32_t *) ALT_TMR_SYS0_TIMER1CURRENTVAL_ADDR;
            }
            else if (tmr_id == ALT_GPT_OSC1_TMR1)      /* Timer 1 on the OSC1 bus */
            {
                regaddr = (volatile uint32_t *) ALT_TMR_SYS1_TIMER1CURRENTVAL_ADDR;
            }
            else if (tmr_id == ALT_GPT_SP_TMR0)        /* Timer 0 on the SP bus */
            {
                regaddr = (volatile uint32_t *) ALT_TMR_SP0_TIMER1CURRENTVAL_ADDR;
	    } 
            else if (tmr_id == ALT_GPT_SP_TMR1)        /* Timer 1 on the SP bus */
            {
                regaddr = (volatile uint32_t *) ALT_TMR_SP1_TIMER1CURRENTVAL_ADDR;
            }
            else { return 0; }                         /* none of the above */
         
            time = alt_read_word(regaddr);
        }


        freq = (uint32_t)alt_clk_get_freq(clk);

	if (freq == 0) freq = 1;
            
	time /= freq;

        time *= (pres + 1);
                 /* ARM can usually do a 32x64 bit multiply faster than a 64x64 bit multiply */
        time *= mult;

                 /* remaining count divided by cycles-per-second becomes seconds,
                  * milliseconds, microseconds, or nanoseconds remaining */
#ifdef ARCH64 
        time = (time > UINT64_MAX) ? 0xFFFFFFFFFFFFFFFF : (uint64_t) time;
#endif
     }
     return time;
}


/****************************************************************************************/
/* alt_gpt_curtime_get() returns the current time until the specified timer counts      */
/* down to zero, measured in seconds.                                                   */
/****************************************************************************************/

uint64_t alt_gpt_curtime_get(ALT_GPT_TIMER_t tmr_id)
{
    return alt_gpt_curtime_get_kernl(tmr_id, 1);
}


/****************************************************************************************/
/* alt_gpt_curtime_get() returns the current time until the specified timer counts      */
/* down to zero, measured in milliseconds.                                              */
/****************************************************************************************/

uint64_t alt_gpt_curtime_millisecs_get(ALT_GPT_TIMER_t tmr_id)
{
    return alt_gpt_curtime_get_kernl(tmr_id, ALT_MILLISECS_IN_A_SEC);
}


/****************************************************************************************/
/* alt_gpt_curtime_get() returns the current time until the specified timer counts      */
/* down to zero, measured in microseconds.                                              */
/****************************************************************************************/

uint64_t alt_gpt_curtime_microsecs_get(ALT_GPT_TIMER_t tmr_id)
{
    return alt_gpt_curtime_get_kernl(tmr_id, ALT_MICROSECS_IN_A_SEC);
}


/****************************************************************************************/
/* alt_gpt_curtime_get() returns the current time until the specified timer counts      */
/* down to zero, measured in microseconds.                                              */
/****************************************************************************************/

uint64_t alt_gpt_curtime_nanosecs_get(ALT_GPT_TIMER_t tmr_id)
{
    return alt_gpt_curtime_get_kernl(tmr_id, ALT_NANOSECS_IN_A_SEC);
}

/****************************************************************************************/
/* alt_gpt_delay_ns() - This will stall for "delay" nanoseconds after the passed in "time" using */
/* the given timer. This allows you to call alt_gpt_counter_get(), perform work, then call */
/* this function to insure that the proper amount of time has passed since the first call */
/* Note: if you wait too long between calling alt_gpt_count_get(), the counter may loop, */
/*   causing timing to be wrong */
/****************************************************************************************/

uint32_t alt_gpt_delay_ns(ALT_GPT_TIMER_t tmr_id, uint32_t start_counter, uint32_t nanoseconds)
{
    uint32_t prescaler = alt_gpt_prescaler_get(tmr_id);
    uint32_t ns_as_counter32;
    ALT_CLK_t clk;
    uint64_t ns_as_counter64 = nanoseconds;
    uint32_t freq;
    uint32_t stop_time, curtime, prior_curtime;

    /* Step 1 - convert tmr_id to clk id */
    clk = alt_gpt_timer_clk_source_get(tmr_id); 
    if (clk == ALT_CLK_UNKNOWN) return 0;

    freq = (uint32_t)alt_clk_get_freq(clk);

    /* convert nanoseconds to counter ticks */
    ns_as_counter64 *= freq;
    ns_as_counter64 /= (prescaler + 1);
    ns_as_counter64 /= (1000000000);
    ns_as_counter32 = (uint32_t) (1 + ns_as_counter64);

    /* Normally, we would just subtract ns_as_counter64 from start_counter,
       however, if that would give a negative number then we have an issue.
       To resolve this, we'll wait for start_counter to go down to 0, and
       reset. Then we'll subtract the amount of time that passed from ns_ascounter32.
       We'll keep doing this until start_counter > ns_as_counter32 */

    while(start_counter < ns_as_counter32)
    {
        /* Wait for loop around */
        while(start_counter > alt_gpt_counter_get(tmr_id))
            ;
        ns_as_counter32 -= start_counter;
        /* Should be at reset value */
        start_counter = alt_gpt_counter_get(tmr_id);
        if(ns_as_counter32 > start_counter)
        {
            /* This is so that we can loop multiple times */
            while(start_counter ==  alt_gpt_counter_get(tmr_id))
                ;
        }
    }
    stop_time = start_counter - ns_as_counter32;
    /* At this point, start_counter > ns_ascounter32, we can simply wait to
       count down to stop_time */

    curtime = alt_gpt_counter_get(tmr_id);
    do
    {
      prior_curtime = curtime;
      curtime = alt_gpt_counter_get(tmr_id);
    }while(stop_time <= curtime &&    /* we passed below our target */
           curtime <= prior_curtime); /* or we loop around */

    return 0;
}


/****************************************************************************************/
/* alt_gpt_counter_get() returns the value that the specified timer would reset to,     */
/* independent of the current value of the counter.                                     */
/****************************************************************************************/

 uint32_t alt_gpt_reset_value_get(ALT_GPT_TIMER_t tmr_id)
{
    uint32_t            ret = 0;                /* Return value */
    volatile uint32_t   *regaddr;               /* register address */

    if  ((tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)   /* Local Private Timer for this CPU */
      || (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)    /* Local Private Timer for this CPU */
      || (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR)           /* Local Private Timer for this CPU */
      || (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR))      /* Local Private Timer for this CPU */
    {

	ret = alt_cpu_tmr_reset_value_get(tmr_id);
    }
    else 
    {
        if (tmr_id == ALT_GPT_OSC1_TMR0)            /* Timer 0 on the OSC1 bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SYS0_TIMER1LOADCOUNT_ADDR;
        }
        else if (tmr_id == ALT_GPT_OSC1_TMR1)       /* Timer 1 on the OSC1 bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SYS1_TIMER1LOADCOUNT_ADDR;
        }
        else if (tmr_id == ALT_GPT_SP_TMR0)         /* Timer 0 on the SP bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SP0_TIMER1LOADCOUNT_ADDR;
        }
        else if (tmr_id == ALT_GPT_SP_TMR1)         /* Timer 1 on the SP bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SP1_TIMER1LOADCOUNT_ADDR;
        }
        else { return ret;}                         /* none of the above */

        ret = alt_read_word(regaddr);
    }
    return ret;
}


/****************************************************************************************/
/* alt_gpt_maxcounter_get() returns the maximum possible value that the specified timer */
/* could be set to reset or restart to.                                                 */
/****************************************************************************************/

uint32_t alt_gpt_maxcounter_get(ALT_GPT_TIMER_t tmr_id)
{
    uint32_t    ret = 0;                           /* Return value */

    if ((tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)    /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)     /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR)    /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR)        /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_OSC1_TMR0)              /* Timer 0 on the OSC1 bus */
     || (tmr_id == ALT_GPT_OSC1_TMR1)              /* Timer 1 on the OSC1 bus */
     || (tmr_id == ALT_GPT_SP_TMR0)                /* Timer 0 on the SP bus */
     || (tmr_id == ALT_GPT_SP_TMR1))               /* Timer 1 on the SP bus */
    {
	ret = (uint32_t)(-1);
        /* ret = ALT_CPU_PRIV_TMR_MAX; */
    }
    return    ret;
}


/****************************************************************************************/
/* alt_gpt_prescaler_set() sets the value of the prescaler field of the specified       */
/* timer, which is one less than the actual counter value. Valid input = 0-255 and any  */
/* larger value causes an error. It also throws an error if the timer is currently      */
/* running.                                                                             */
/****************************************************************************************/

ALT_STATUS_CODE alt_gpt_prescaler_set(ALT_GPT_TIMER_t tmr_id, uint32_t val)
{
    ALT_STATUS_CODE         ret = ALT_E_ERROR;      /* value to return */

    if  ((tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)    /* Local Private Timer for this CPU */
      || (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)     /* Local Private Timer for this CPU */
      || (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR)    /* Local Private Timer for this CPU */
      || (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR))       /* Local Private Timer for this CPU */
    {
        ret = alt_cpu_tmr_prescaler_set(tmr_id, val);
    }

    return ret;
}


/****************************************************************************************/
/* alt_gpt_prescaler_get() returns the value of the prescaler setting of the specified  */
/* timer, which is one less than the actual scaler value. Valid output = 0-255.         */
/****************************************************************************************/

uint32_t alt_gpt_prescaler_get(ALT_GPT_TIMER_t tmr_id)
{
    uint32_t        ret = 0;                        /* value to return */

    if ((tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)    /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)     /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR)    /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR))       /* Local Private Timer for this CPU */
    {
        ret = alt_cpu_tmr_prescaler_get(tmr_id);
    }

    return ret;                                     /* Returns zero for the other timers */
}


 /****************************************************************************************/
/* alt_gpt_freq_get() returns the integer portion of the frequency that the             */
/* selected timer will rollover at, measured in Hertz.                                  */
/****************************************************************************************/

uint32_t alt_gpt_freq_get(ALT_GPT_TIMER_t tmr_id)
{
    uint32_t        freq = 0;                   /* return value */
    uint64_t        divd, bigfreq;              /* math */
    ALT_CLK_t       clk;                        /* clock type */


    clk = alt_gpt_timer_clk_source_get(tmr_id); 
    if (clk == ALT_CLK_UNKNOWN) return 0;

    freq = (uint32_t)alt_clk_get_freq(clk);

        bigfreq = (uint64_t) freq;
        divd = ((((uint64_t) alt_gpt_reset_value_get(tmr_id)) + 1) *
                    ((uint64_t) (alt_gpt_prescaler_get(tmr_id)) + 1));
            /* Convert the reset value to 64-bit before the addition to avoid a potential */
            /* rollover to zero. But add one to the prescaler value before the conversion */
            /* to 64-bit -- no potential for rollover  and integer addition is faster */
	
	if (divd ==0) divd = 1;
        bigfreq /= divd;
        freq = (bigfreq > UINT32_MAX) ? 0 : (uint32_t) bigfreq;
    
    return freq;
}


/****************************************************************************************/
/* alt_gpt_time_get_kernl() is the root function of the next three functions            */
/* definitions.                                                                         */
/****************************************************************************************/

static uint32_t alt_gpt_time_get_kernl(ALT_GPT_TIMER_t tmr_id, uint32_t mult)
{
    uint32_t            freq, time = 0;
    uint64_t            bigtime;
    ALT_CLK_t           clk;


    clk = alt_gpt_timer_clk_source_get(tmr_id); 
    if (clk == ALT_CLK_UNKNOWN) return 0;

    freq = (uint32_t)alt_clk_get_freq(clk);
    if (freq == 0) freq = 1;

    bigtime = ((((uint64_t) alt_gpt_reset_value_get(tmr_id)) + 1) *
                            ((uint64_t) (alt_gpt_prescaler_get(tmr_id)) + 1));
           /* Convert the reset value to 64-bit before the addition to avoid a potential
            * rollover to zero. But add one to the prescaler value before the conversion
            * to 64-bit -- no potential for rollover and integer addition is faster */

    bigtime *= (uint64_t) mult;
    bigtime /= (uint64_t) freq;
    time = (bigtime > UINT32_MAX) ? 0xFFFFFFFF : (uint32_t) bigtime;

    return time;
}


/****************************************************************************************/
/* alt_gpt_time_get() returns the currently-selected timeout period of the selected     */
/* timer, measured in seconds.                                                          */
/****************************************************************************************/

uint64_t alt_gpt_time_get(ALT_GPT_TIMER_t tmr_id)
{
    return alt_gpt_time_get_kernl(tmr_id, 1);
}

/****************************************************************************************/
/* alt_gpt_time_get() returns the currently-selected timeout period of the selected     */
/* timer, measured in milliseconds.                                                     */
/****************************************************************************************/

uint64_t alt_gpt_time_millisecs_get(ALT_GPT_TIMER_t tmr_id)
{
    return alt_gpt_time_get_kernl(tmr_id, ALT_MILLISECS_IN_A_SEC);
}


/****************************************************************************************/
/* alt_gpt_time_get() returns the currently-selected timeout period of the selected     */
/* timer, measured in microseconds.                                                     */
/****************************************************************************************/

uint64_t alt_gpt_time_microsecs_get(ALT_GPT_TIMER_t tmr_id)
{
    return alt_gpt_time_get_kernl(tmr_id, ALT_MICROSECS_IN_A_SEC);
}


/****************************************************************************************/
/* alt_gpt_maxtime_get_kernl() is the basis for the next two functions                  */
/****************************************************************************************/

static uint64_t alt_gpt_maxtime_get_kernl(ALT_GPT_TIMER_t tmr_id, uint32_t mult)
{
    uint64_t            time = 0;
    uint32_t            freq;
    uint64_t            bigtime;
    ALT_CLK_t           clk;


    clk = alt_gpt_timer_clk_source_get(tmr_id);
    freq = (uint32_t)alt_clk_get_freq(clk);
    if (freq == 0)
        return 0;

    bigtime = (((uint64_t) alt_gpt_maxcounter_get(tmr_id)) + 1)
                         * ((uint64_t) (alt_gpt_prescaler_get(tmr_id)) + 1);
    bigtime /= (uint64_t) freq;
    bigtime *= (uint64_t) mult;                 /*scale the output */
#ifdef ARCH64
    time = (bigtime > UINT64_MAX) ? 0xFFFFFFFFFFFFFFFF : (uint64_t) bigtime;
#else
    time = (uint64_t) bigtime;
#endif

    return time;
}


/****************************************************************************************/
/* alt_gpt_maxtime_get() returns the maximum available timeout period of the selected   */
/* timer, measured in seconds.                                                          */
/****************************************************************************************/

uint64_t alt_gpt_maxtime_get(ALT_GPT_TIMER_t tmr_id)
{
    return alt_gpt_maxtime_get_kernl(tmr_id, 1);
}


/****************************************************************************************/
/* alt_gpt_maxtime_millisecs_get() returns the maximum available timeout period of the  */
/* selected timer, measured in milliseconds.                                            */
/****************************************************************************************/

uint64_t alt_gpt_maxtime_millisecs_get(ALT_GPT_TIMER_t tmr_id)
{
    return alt_gpt_maxtime_get_kernl(tmr_id, ALT_MILLISECS_IN_A_SEC);
}


/****************************************************************************************/
/* alt_gpt_int_disable() disables the interrupt of the specified timer. It returns a    */
/* status code showing the result of the operation.                                     */
/****************************************************************************************/

ALT_STATUS_CODE alt_gpt_int_disable(ALT_GPT_TIMER_t tmr_id)
{
    ALT_STATUS_CODE     ret = ALT_E_ERROR;          /* Return value */
    volatile uint32_t   *regaddr;                   /* register address */


    if ((tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)    /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)     /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR)    /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR))       /* Local Private Timer for this CPU */
    {
        ret = alt_cpu_tmr_int_disable(tmr_id); 
    }
    else
    {
        if (tmr_id == ALT_GPT_OSC1_TMR0)           /* Timer 0 on the OSC1 bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SYS0_TIMER1CONTROLREG_ADDR;

        }
        else if (tmr_id == ALT_GPT_OSC1_TMR1)      /* Timer 1 on the OSC1 bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SYS1_TIMER1CONTROLREG_ADDR;
        }
        else if (tmr_id == ALT_GPT_SP_TMR0)        /* Timer 0 on the SP bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SP0_TIMER1CONTROLREG_ADDR;
        }
        else if (tmr_id == ALT_GPT_SP_TMR1)        /* Timer 1 on the SP bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SP1_TIMER1CONTROLREG_ADDR;
        }
        else { return    ALT_E_BAD_ARG; }          /* none of the above */

        alt_setbits_word(regaddr, ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK_SET_MSK);
        ret = ALT_E_SUCCESS;
    }

    alt_cpu_tmr_int_clear_pending(tmr_id);         /* Clear any pending ints */
    return    ret;
}


/****************************************************************************************/
/* alt_gpt_int_enable() enables the interrupt of the specified timer. It returns a      */
/* status code showing the result of the operation.                                     */
/****************************************************************************************/

ALT_STATUS_CODE alt_gpt_int_enable(ALT_GPT_TIMER_t tmr_id)
{
    ALT_STATUS_CODE     ret = ALT_E_ERROR;  /* Return value */
    volatile uint32_t   *regaddr;           /* register address */


    if ((tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)    /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)     /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR)            /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR))       /* Local Private Timer for this CPU */
    {
        ret = alt_cpu_tmr_int_enable(tmr_id); 
    }
    else
    {
        if (tmr_id == ALT_GPT_OSC1_TMR0)           /* Timer 0 on the OSC1 bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SYS0_TIMER1CONTROLREG_ADDR;
        }
        else if (tmr_id == ALT_GPT_OSC1_TMR1)      /* Timer 1 on the OSC1 bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SYS1_TIMER1CONTROLREG_ADDR;
        }
        else if (tmr_id == ALT_GPT_SP_TMR0)        /* Timer 0 on the SP bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SP0_TIMER1CONTROLREG_ADDR;
        }
        else if (tmr_id == ALT_GPT_SP_TMR1)        /* Timer 1 on the SP bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SP1_TIMER1CONTROLREG_ADDR;
        }
        else { return    ALT_E_BAD_ARG; }          /* none of the above */

        alt_clrbits_word(regaddr, ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK_SET_MSK);
        ret = ALT_E_SUCCESS;
    }
    return    ret;
}


/****************************************************************************************/
/* alt_gpt_int_is_enabled() returns whether or not the interrupt of the specified       */
/* timer is enabled or not.                                                             */
/****************************************************************************************/

bool alt_gpt_int_is_enabled(ALT_GPT_TIMER_t tmr_id)
{
    bool                ret = false;            /* Return value */
    volatile uint32_t   *regaddr;               /* register address */


    if ((tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)    /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)     /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR)    /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR))       /* Local Private Timer for this CPU */
    {
        ret = alt_cpu_tmr_int_is_enabled(tmr_id); 
    }
    else
    {
        if (tmr_id == ALT_GPT_OSC1_TMR0)        /* Timer 0 on the OSC1 bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SYS0_TIMER1CONTROLREG_ADDR;
        }
        else if (tmr_id == ALT_GPT_OSC1_TMR1)   /* Timer 1 on the OSC1 bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SYS1_TIMER1CONTROLREG_ADDR;
        }
        else if (tmr_id == ALT_GPT_SP_TMR0)     /* Timer 0 on the SP bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SP0_TIMER1CONTROLREG_ADDR;
        }
        else if (tmr_id == ALT_GPT_SP_TMR1)     /* Timer 1 on the SP bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SP1_TIMER1CONTROLREG_ADDR;
        }
        else { return ret; }                    /* none of the above */

        ret = (alt_read_word(regaddr) & ALT_TMR_TIMER1CONTROLREG_TIMER_INTERRUPT_MASK_SET_MSK) ? false : true;
                    /* this is inverted from the private timer above */
    }
    return ret;
}


/****************************************************************************************/
/* alt_gpt_int_clear_pending() clears the interrupt of the specified timer.             */
/****************************************************************************************/


ALT_STATUS_CODE alt_gpt_int_clear_pending(ALT_GPT_TIMER_t tmr_id)
{
    ALT_STATUS_CODE     ret = ALT_E_ERROR;         /* Return status */

    if ((tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)    /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)     /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR)    /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR))       /* Local Private Timer for this CPU */
    {
        ret = alt_cpu_tmr_int_clear_pending(tmr_id); 
    }
    else
    {
        if (tmr_id == ALT_GPT_OSC1_TMR0)            /* Timer 0 on the OSC1 bus */
        {
            (void) alt_read_word(ALT_TMR_SYS0_TIMER1EOI_ADDR);
                /* Clear Osc1 Timer 0 interrupts by reading the timers EOI register
                 * adding the void cast tells armcc not to throw a error for this usage */
        }
        else if (tmr_id == ALT_GPT_OSC1_TMR1)       /* Timer 1 on the OSC1 bus */
        {
            (void) alt_read_word(ALT_TMR_SYS1_TIMER1EOI_ADDR);
                /* Clear Osc1 Timer 1 interrupts by reading the timers EOI register */
        }
        else if (tmr_id == ALT_GPT_SP_TMR0)         /* Timer 0 on the SP bus */
        {
            (void) alt_read_word(ALT_TMR_SP0_TIMER1EOI_ADDR);
                /* Clear SP Timer 0 interrupts by reading the timers EOI register */
        }
        else if (tmr_id == ALT_GPT_SP_TMR1)         /* Timer 1 on the SP bus */
        {
            (void) alt_read_word(ALT_TMR_SP1_TIMER1EOI_ADDR);
                /* Clear SP Timer 1 interrupts by reading the timers EOI register */
        }
        else { return ALT_E_BAD_ARG; }              /* none of the above */

        ret = ALT_E_SUCCESS;
    }
    return    ret;
}


/****************************************************************************************/
/* alt_gpt_int_is_pending() returns whether or not the interrupt of the specified       */
/* timer is pending or not.                                                             */
/****************************************************************************************/

ALT_STATUS_CODE alt_gpt_int_is_pending(ALT_GPT_TIMER_t tmr_id)
{
    ALT_STATUS_CODE     ret = ALT_E_ERROR;      /* Return status */
    uint32_t            regmask;                /* data mask */
    volatile uint32_t   *regaddr;               /* register address */

    if ((tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)    /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)     /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR)    /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR))       /* Local Private Timer for this CPU */
    {
        ret = alt_cpu_tmr_int_is_pending(tmr_id);
    }
    else
    {
        if (tmr_id == ALT_GPT_OSC1_TMR0)           /* Timer 0 on the OSC1 bus */
        {
            regaddr = (uint32_t *) ALT_TMR_SYS0_TIMER1INTSTAT_ADDR;
            regmask = ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT_SET_MSK;
        }
        else if (tmr_id == ALT_GPT_OSC1_TMR1)      /* Timer 1 on the OSC1 bus */
        {
            regaddr = (uint32_t *) ALT_TMR_SYS1_TIMER1INTSTAT_ADDR;
            regmask = ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT_SET_MSK;
        }
        else if (tmr_id == ALT_GPT_SP_TMR0)        /* Timer 0 on the SP bus */
        {
            regaddr = (uint32_t *) ALT_TMR_SP0_TIMER1INTSTAT_ADDR;
            regmask = ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT_SET_MSK;
        }
        else if (tmr_id == ALT_GPT_SP_TMR1)        /* Timer 1 on the SP bus */
        {
            regaddr = (uint32_t *) ALT_TMR_SP1_TIMER1INTSTAT_ADDR;
            regmask = ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT_SET_MSK;
        }
        else { return    ALT_E_BAD_ARG; }          /* none of the above */

        ret = (alt_read_word(regaddr) & regmask) ? ALT_E_TRUE : ALT_E_FALSE;

    }
    return    ret;
}


/****************************************************************************************/
/* alt_gpt_int_if_pending_clear() clears the interrupt of the specified timer and also  */
/* returns whether it was pending before being cleared or not.                          */
/****************************************************************************************/

ALT_STATUS_CODE alt_gpt_int_if_pending_clear(ALT_GPT_TIMER_t tmr_id)
{
    ALT_STATUS_CODE     ret = ALT_E_FALSE;         /* Return status */

    if ((tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)    /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)     /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR)    /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR))       /* Local Private Timer for this CPU */
    {
        ret = alt_cpu_tmr_int_clear_pending(tmr_id);
    }
    else
    {
        if (tmr_id == ALT_GPT_OSC1_TMR0)           /* Timer 0 on the OSC1 bus */
        {
            if (alt_read_word(ALT_TMR_SYS0_TIMER1INTSTAT_ADDR) & ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT_SET_MSK)
            {
                alt_read_word(ALT_TMR_SYS0_TIMER1EOI_ADDR);
                    /* Clear Osc1 Timer 0 interrupts by reading the timer1 EOI register
                     * adding the void cast tells armcc not to throw a error for this usage */
                ret = ALT_E_TRUE;
            }
        }
        else if (tmr_id == ALT_GPT_OSC1_TMR1)      /* Timer 1 on the OSC1 bus */
        {
            if (alt_read_word(ALT_TMR_SYS1_TIMER1INTSTAT_ADDR) & ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT_SET_MSK)
            {
                alt_read_word(ALT_TMR_SYS1_TIMER1EOI_ADDR);
                    /* Clear Osc1 Timer 1 interrupts by reading the timer1 EOI register */
                ret = ALT_E_TRUE;
            }

        }
        else if (tmr_id == ALT_GPT_SP_TMR0)        /* Timer 0 on the SP bus */
        {
            if (alt_read_word(ALT_TMR_SP0_TIMER1INTSTAT_ADDR) & ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT_SET_MSK)
            {
                 (void) alt_read_word(ALT_TMR_SP0_TIMER1EOI_ADDR);
                    /* Clear SP Timer 0 interrupts by reading the timer1 EOI register */
                ret = ALT_E_TRUE;
            }
        }
        else if (tmr_id == ALT_GPT_SP_TMR1)        /* Timer 1 on the SP bus */
        {
            if (alt_read_word(ALT_TMR_SP1_TIMER1INTSTAT_ADDR) & ALT_TMR_TIMER1INTSTAT_TIMER1INTSTAT_SET_MSK)
            {
                (void) alt_read_word(ALT_TMR_SP1_TIMER1EOI_ADDR);
                /* Clear SP Timer 1 interrupts by reading the timer1 EOI register */
                ret = ALT_E_TRUE;
            }
        }
        else { ret = ALT_E_BAD_ARG; }              /* none of the above */
    }
    return    ret;
}


/****************************************************************************************/
/* alt_gpt_mode_set() sets the reset mode (rollover or oneshot) of the specified timer. */
/****************************************************************************************/

ALT_STATUS_CODE alt_gpt_mode_set(ALT_GPT_TIMER_t tmr_id, ALT_GPT_RESTART_MODE_t mode)
{
    int32_t             ret = ALT_E_ERROR;      /* Return value */
    uint32_t            regdata;                /* value to read */
    volatile uint32_t   *regaddr;               /* register address */


    if ((mode == ALT_GPT_RESTART_MODE_ONESHOT) || (mode == ALT_GPT_RESTART_MODE_PERIODIC))
    {
    	if ((tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)     /* Local Private Timer for this CPU */
    	 || (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)      /* Local Private Timer for this CPU */
    	 || (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR)     /* Local Private Timer for this CPU */
	 || (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR))        /* Local Private Timer for this CPU */
        {
            ret = alt_cpu_tmr_mode_set(tmr_id, mode);
        }
        else
        {
            if (tmr_id == ALT_GPT_OSC1_TMR0)            /* Timer 0 on the OSC1 bus */
            {
                regaddr = (volatile uint32_t *) ALT_TMR_SYS0_TIMER1CONTROLREG_ADDR;
            }
            else if (tmr_id == ALT_GPT_OSC1_TMR1)       /* Timer 1 on the OSC1 bus */
            {
                regaddr = (volatile uint32_t *) ALT_TMR_SYS1_TIMER1CONTROLREG_ADDR;
            }
            else if (tmr_id == ALT_GPT_SP_TMR0)         /* Timer 0 on the SP bus */
            {
                regaddr = (volatile uint32_t *) ALT_TMR_SP0_TIMER1CONTROLREG_ADDR;
            }
            else if (tmr_id == ALT_GPT_SP_TMR1)         /* Timer 1 on the SP bus */
            {
                regaddr = (volatile uint32_t *) ALT_TMR_SP1_TIMER1CONTROLREG_ADDR;
            }
            else { return    ALT_E_BAD_ARG; }           /* none of the above */

            regdata = alt_read_word(regaddr);
            regdata =  (mode == ALT_GPT_RESTART_MODE_ONESHOT) ?
                    regdata & ALT_TMR_TIMER1CONTROLREG_TIMER_MODE_CLR_MSK:
                    regdata | ALT_TMR_TIMER1CONTROLREG_TIMER_MODE_SET_MSK;
                    /* Peripheral timers are opposite polarity as the private timer */
            alt_write_word(regaddr, regdata);
            ret = ALT_E_SUCCESS;
        }
    }
    else { ret = ALT_E_BAD_ARG; }

    return    ret;
}


/****************************************************************************************/
/* alt_gpt_mode_get() returns the mode setting of the specified timer.                  */
/****************************************************************************************/

int32_t alt_gpt_mode_get(ALT_GPT_TIMER_t tmr_id)
{
    int32_t             ret = ALT_E_BAD_ARG;        /* Return value */
    volatile uint32_t   *regaddr;                   /* register address */


    if ((tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)     /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)      /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR)     /* Local Private Timer for this CPU */
     || (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR))        /* Local Private Timer for this CPU */
    {
        ret = alt_cpu_tmr_is_autoinc_mode(tmr_id) ? ALT_GPT_RESTART_MODE_PERIODIC : ALT_GPT_RESTART_MODE_ONESHOT;
    }
    else
    {
        if (tmr_id == ALT_GPT_OSC1_TMR0)            /* Timer 0 on the OSC1 bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SYS0_TIMER1CONTROLREG_ADDR;
        }
        else if (tmr_id == ALT_GPT_OSC1_TMR1)       /* Timer 1 on the OSC1 bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SYS1_TIMER1CONTROLREG_ADDR;
        }
        else if (tmr_id == ALT_GPT_SP_TMR0)         /* Timer 0 on the SP bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SP0_TIMER1CONTROLREG_ADDR;
        }
        else if (tmr_id == ALT_GPT_SP_TMR1)         /* Timer 1 on the SP bus */
        {
            regaddr = (volatile uint32_t *) ALT_TMR_SP1_TIMER1CONTROLREG_ADDR;
        }
        else { return ret; }                        /* none of the above */

        ret = (alt_read_word(regaddr) & ALT_TMR_TIMER1CONTROLREG_TIMER_MODE_SET_MSK)
                ? ALT_GPT_RESTART_MODE_PERIODIC : ALT_GPT_RESTART_MODE_ONESHOT;
    }
    return    ret;
}



/*
 *  
 * The following code are new code for S10 A53 CPU timer 
 *  
 */

ALT_STATUS_CODE alt_cpu_tmr_is_running(ALT_GPT_TIMER_t tmr_id)
{
    ALT_STATUS_CODE ret = ALT_E_SUCCESS;
    uint32_t ctrl = 0;
    
    if  (tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)     /* Local Private Timer for this CPU */
    {
	ctrl = alt_a53_get_gentimer_nsel1control();
    }
    else if (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)  /* Local Timer for this CPU, if it is in gpt mode */
    {
       	ctrl = alt_a53_get_gentimer_sel1control(); 
    }
    else if (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR) /* Local Timer for this CPU, if it is in gpt mode */
    {
	ctrl =  alt_a53_get_gentimer_nsel2control();
    }
    else if (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR)     /* Local Timer for this CPU, if it is in gpt mode */
    {
	ctrl =  alt_a53_get_gentimer_virtcontrol();
    }

    ret = (ctrl & CNT_CTL_ENABLE) ? ALT_E_SUCCESS : ALT_E_ERROR; 

    return ret;
}

ALT_STATUS_CODE  alt_cpu_tmr_counter_set(ALT_GPT_TIMER_t tmr_id, uint64_t val)
{
    ALT_STATUS_CODE	ret = ALT_E_SUCCESS;

    if  (tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)     /* Local Private Timer for this CPU */
    {
	 alt_a53_set_gentimer_nsel1timervalue(val);
    }
    else if (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)  /* Local Timer for this CPU, if it is in gpt mode */
    {
       	 alt_a53_set_gentimer_sel1timervalue(val); 
    }
    else if (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR) /* Local Timer for this CPU, if it is in gpt mode */
    {	    
	 alt_a53_set_gentimer_nsel2timervalue(val);
    }
    else if (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR)     /* Local Timer for this CPU, if it is in gpt mode */
    {
	 alt_a53_set_gentimer_virttimervalue(val);
    }

    return ret;
}

uint64_t alt_cpu_tmr_counter_get(ALT_GPT_TIMER_t tmr_id)
{
    uint64_t ret = 0;

    if  (tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)     /* Local Private Timer for this CPU */
    {
	 ret = alt_a53_get_gentimer_nsel1timervalue();
    }
    else if (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)  /* Local Timer for this CPU, if it is in gpt mode */
    {
 	 ret = alt_a53_get_gentimer_sel1timervalue();
    }
    else if (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR) /* Local Timer for this CPU, if it is in gpt mode */
    {
	 ret = alt_a53_get_gentimer_nsel2timervalue();
    }
    else if (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR)     /* Local Timer for this CPU, if it is in gpt mode */
    {
	 ret = alt_a53_get_gentimer_virttimervalue();
    }

    return ret;
}

uint64_t alt_cpu_tmr_reset_value_get(ALT_GPT_TIMER_t tmr_id)
{
    uint64_t ret = 0;

    if  (tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)     /* Local Private Timer for this CPU */
    {
         ret = alt_a53_get_gentimer_nsel1comparevalue();
    }
    else if  (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR) /* Local Private Timer for this CPU */
    {
         ret = alt_a53_get_gentimer_sel1comparevalue();
    }
    else if  (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR)/* Local Private Timer for this CPU */
    {
         ret = alt_a53_get_gentimer_nsel2comparevalue();
    }
    else if  (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR)    /* Local Private Timer for this CPU */
    {
         ret = alt_a53_get_gentimer_virtcomparevalue();
    }

    return ret;
}

ALT_STATUS_CODE  alt_cpu_tmr_start(ALT_GPT_TIMER_t tmr_id)
{
    ALT_STATUS_CODE	ret = ALT_E_SUCCESS;

    uint64_t ctrl = 0;

    if (tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)      /* No Secure Timer */
    {
        ctrl = alt_a53_get_gentimer_nsel1control();
        ctrl |= CNT_CTL_ENABLE;
        alt_a53_set_gentimer_nsel1control(ctrl);
    }
    else if (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)  /* Local Timer for this CPU, if it is in gpt mode */
    {
        ctrl = alt_a53_get_gentimer_sel1control();
        ctrl |= CNT_CTL_ENABLE;
        alt_a53_set_gentimer_sel1control(ctrl);
    }
    else if (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR) /* Local Timer for this CPU, if it is in gpt mode */
    {
        ctrl = alt_a53_get_gentimer_nsel2control();
        ctrl |= CNT_CTL_ENABLE;
        alt_a53_set_gentimer_nsel2control(ctrl);
    }
    else if (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR)     /* Local Timer for this CPU, if it is in gpt mode */
    {
        ctrl = alt_a53_get_gentimer_virtcontrol();
        ctrl |= CNT_CTL_ENABLE;
        alt_a53_set_gentimer_virtcontrol(ctrl);
    }

    return ret;
}

ALT_STATUS_CODE alt_cpu_tmr_stop(ALT_GPT_TIMER_t tmr_id)
{
    ALT_STATUS_CODE ret = ALT_E_SUCCESS;
    uint64_t ctrl = 0;

    if (tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)      /* No Secure Timer */
    {
        ctrl = alt_a53_get_gentimer_nsel1control();
        ctrl &= ~CNT_CTL_ENABLE;
        alt_a53_set_gentimer_nsel1control(ctrl);
    }
    else if (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)  /* Local Timer for this CPU, if it is in gpt mode */
    {
        ctrl = alt_a53_get_gentimer_sel1control();
        ctrl &= ~CNT_CTL_ENABLE;
        alt_a53_set_gentimer_sel1control(ctrl);
    }
    else if (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR) /* Local Timer for this CPU, if it is in gpt mode */
    {
        ctrl = alt_a53_get_gentimer_nsel2control();
        ctrl &= ~CNT_CTL_ENABLE;
        alt_a53_set_gentimer_nsel2control(ctrl);
    }
    else if (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR)     /* Local Timer for this CPU, if it is in gpt mode */
    {
        ctrl = alt_a53_get_gentimer_virtcontrol();
	ctrl &= ~CNT_CTL_ENABLE;
        alt_a53_set_gentimer_virtcontrol(ctrl);
    }

    return ret;
}

ALT_STATUS_CODE alt_cpu_tmr_int_disable(ALT_GPT_TIMER_t tmr_id) 
{
    ALT_STATUS_CODE ret = ALT_E_SUCCESS;
    uint64_t ctrl = 0;

    if (tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)  /* No Secure Timer */
    {
        ctrl = alt_a53_get_gentimer_nsel1control();
        ctrl &= ~CNT_CTL_IMASK;
        alt_a53_set_gentimer_nsel1control(ctrl);
    }
    else if (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)  /* Local Timer for this CPU, if it is in gpt mode */
    {
        ctrl = alt_a53_get_gentimer_sel1control();
        ctrl &= ~CNT_CTL_IMASK;
        alt_a53_set_gentimer_sel1control(ctrl);
    }
    else if (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR) /* Local Timer for this CPU, if it is in gpt mode */
    {
        ctrl = alt_a53_get_gentimer_nsel2control();
	ctrl &= ~CNT_CTL_IMASK;
        alt_a53_set_gentimer_nsel2control(ctrl);
    }
    else if (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR)     /* Local Timer for this CPU, if it is in gpt mode */
    {
        ctrl = alt_a53_get_gentimer_virtcontrol();
	ctrl &= ~CNT_CTL_IMASK;
        alt_a53_set_gentimer_virtcontrol(ctrl);
    }
  
    return ret;
}

ALT_STATUS_CODE alt_cpu_tmr_int_enable(ALT_GPT_TIMER_t tmr_id) 
{
    ALT_STATUS_CODE ret = ALT_E_SUCCESS;
    uint64_t ctrl = 0;

    if (tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)  /* No Secure Timer */
    {
       ctrl = alt_a53_get_gentimer_nsel1control();
       ctrl |= CNT_CTL_IMASK;
       alt_a53_set_gentimer_nsel1control(ctrl);
    }
    else if (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)  /* Local Timer for this CPU, if it is in gpt mode */
    {
       ctrl = alt_a53_get_gentimer_sel1control();
       ctrl |= CNT_CTL_IMASK;
       alt_a53_set_gentimer_sel1control(ctrl);
    }
    else if (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR) /* Local Timer for this CPU, if it is in gpt mode */
    {
       ctrl = alt_a53_get_gentimer_nsel2control();
       ctrl |= CNT_CTL_IMASK;
       alt_a53_set_gentimer_nsel2control(ctrl);
    }
    else if (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR)    /* Local Timer for this CPU, if it is in gpt mode */
    {
       ctrl = alt_a53_get_gentimer_virtcontrol();
       ctrl |= CNT_CTL_IMASK;
       alt_a53_set_gentimer_virtcontrol(ctrl);
    }
  
    return ret;
}

bool alt_cpu_tmr_int_is_enabled(ALT_GPT_TIMER_t tmr_id) 
{
    bool ret = false;
    uint64_t ctrl = 0;

    if (tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)     /* No Secure Timer */
    {
       ctrl = alt_a53_get_gentimer_nsel1control();
       if (ctrl & CNT_CTL_IMASK)
           ret = true;
    }
    else if (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR) /* Local Timer for this CPU, if it is in gpt mode */
    {
       ctrl = alt_a53_get_gentimer_sel1control();
       if (ctrl & CNT_CTL_IMASK)
           ret = true;
    }
    else if (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR)/* Local Timer for this CPU, if it is in gpt mode */
    {
       ctrl = alt_a53_get_gentimer_nsel2control();
       if (ctrl & CNT_CTL_IMASK)
           ret = true;
    }
    else if (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR)    /* Local Timer for this CPU, if it is in gpt mode */
    {
       ctrl = alt_a53_get_gentimer_virtcontrol();
       if (ctrl & CNT_CTL_IMASK)
           ret = true;
    }
 
    return ret;
}

uint64_t alt_cpu_tmr_int_is_pending(ALT_GPT_TIMER_t tmr_id) 
{
    uint64_t ctrl = 0, ret = 0;

    if (tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)  /* No Secure Timer */
    {
       ctrl = alt_a53_get_gentimer_nsel1control();
       ret  = ctrl & CNT_CTL_ISTATUS;
    }
    else if (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)  /* Local Timer for this CPU, if it is in gpt mode */
    {
       ctrl = alt_a53_get_gentimer_sel1control();
       ret  = ctrl & CNT_CTL_ISTATUS;
    }
    else if (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR) /* Local Timer for this CPU, if it is in gpt mode */
    {
       ctrl = alt_a53_get_gentimer_nsel2control();
       ret  = ctrl & CNT_CTL_ISTATUS;
    }
    else if (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR)     /* Local Timer for this CPU, if it is in gpt mode */
    {
       ctrl = alt_a53_get_gentimer_virtcontrol();
       ret  = ctrl & CNT_CTL_ISTATUS;
    }
 
    ret = (ret >> CNT_CTL_ISTATUS);
  
    return ret;
}

ALT_STATUS_CODE alt_cpu_tmr_int_clear_pending(ALT_GPT_TIMER_t tmr_id) 
{
    ALT_STATUS_CODE ret = ALT_E_SUCCESS;
    uint64_t ctrl = 0;

    if (tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)  /* No Secure Timer */
    {
       ctrl = alt_a53_get_gentimer_nsel1control();
       ctrl |= CNT_CTL_ISTATUS;
       alt_a53_set_gentimer_nsel1control(ctrl);
    }
    else if (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)  /* Local Timer for this CPU, if it is in gpt mode */
    {
       ctrl = alt_a53_get_gentimer_sel1control();
       ctrl |= CNT_CTL_ISTATUS;
       alt_a53_set_gentimer_sel1control(ctrl);
    }
    else if (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR)/* Local Timer for this CPU, if it is in gpt mode */
    {
       ctrl = alt_a53_get_gentimer_nsel2control();
       ctrl |= CNT_CTL_ISTATUS;
       alt_a53_set_gentimer_nsel2control(ctrl);
    }
    else if (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR)    /* Local Timer for this CPU, if it is in gpt mode */
    {
       ctrl = alt_a53_get_gentimer_virtcontrol();
       ctrl |= CNT_CTL_ISTATUS;
       alt_a53_set_gentimer_virtcontrol(ctrl);
    }
 

    return ret;
}

ALT_STATUS_CODE alt_cpu_tmr_is_autoinc_mode(ALT_GPT_TIMER_t tmr_id)
{
    ALT_STATUS_CODE	ret = ALT_E_SUCCESS;

    return ret;
}

ALT_STATUS_CODE alt_cpu_tmr_prescaler_set(ALT_GPT_TIMER_t tmr_id, uint32_t val)
{
    ALT_STATUS_CODE	ret = ALT_E_SUCCESS;
  
    return ret;
}

uint32_t alt_cpu_tmr_prescaler_get(ALT_GPT_TIMER_t tmr_id)
{
    return 0;
}

bool alt_cpu_tmr_mode_set(ALT_GPT_TIMER_t tmr_id, uint32_t val)
{
    bool ret = false;
    uint64_t ctrl = 0;

    if (tmr_id == ALT_GPT_CPU_ES1_NSECURE_TMR)      /* No Secure Timer */
    {
       ctrl = alt_a53_get_gentimer_nsel1control();
       if (ctrl & CNT_CTL_ENABLE)
	       ret = true;
    }
    else if (tmr_id == ALT_GPT_CPU_ES1_SECURE_TMR)  /* Local Timer for this CPU, if it is in gpt mode */
    {
       ctrl = alt_a53_get_gentimer_sel1control();
       if (ctrl & CNT_CTL_ENABLE)
	       ret = true;
    }
    else if (tmr_id == ALT_GPT_CPU_EL2_NSECURE_TMR) /* Local Timer for this CPU, if it is in gpt mode */
    {
       ctrl = alt_a53_get_gentimer_nsel2control();
       if (ctrl & CNT_CTL_ENABLE)
	       ret = true;
    }
    else if (tmr_id == ALT_GPT_CPU_VIRTUAL_TMR)     /* Local Timer for this CPU, if it is in gpt mode */
    {
       ctrl = alt_a53_get_gentimer_virtcontrol();
       if (ctrl & CNT_CTL_ENABLE)
	       ret = true;
    }
 

    return ret;
}



