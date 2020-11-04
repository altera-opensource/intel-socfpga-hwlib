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

/*
 * $Id: //acds/main/embedded/ip/hps/armv8/hwlib/include/alt_a53_timers.h#1 $
 */

#ifndef ALT_A53_CPU_TIMER_H_
#define ALT_A53_CPU_TIMER_H_

#include    "socal/hps.h"

/*
 *
  Description:
     This is the main header file used for access to Cortex A53 Generic Timer Registers
     for both the AArch 32 and AArch64 State
 *
 */

/*
  Timer Access

    EL1 Physical Timer (Secure/NonSecure)
    Accesible from EL1 modes, when permitted.
    CNTkCTL.EL0PTEN determines whether the regs are accessiable from EL0.

    For Access from EL3 (Monitor Mode) the Value of EL3.NS determines weather to access Secure or Non-Secure Registers
 *
 */

/********************************************/
/********  A53 CPU Timer Defines  ***********/
/********************************************/

/*
 *
#defines for Generic Timer Control Register Bitfields
 *
 */


#define VALUE_SET       (1)
#define VALUE_CLEAR     (0)

/* Hypervisor Control Register */
#define CNT_HYPCTL_EL1PCTEN (1<<0)      /*Controls Physical Counter Accessability from NonSec EL1 and EL0.*/
#define CNT_HYPCTL_EL1PCEN  (1<<1)      /*Controls whether the Physcial Timer Registers are accessible from NonSec EL1 and EL0*/
#define CNT_HYPCTL_ENVTEN   (1<<2)      /*Enables Event Stream From Corresponding Counter*/
#define CNT_HYPCTL_EVNTDIR  (1<<3)      /*Controls Edge on Evenet*/
#define CNT_HYPCTL_EVNTI    (0x0000F0)  /*Bit Select fo Event Stream Generation*/

/*Kernal Control Register*/
#define CNT_KNLCTL_EL0PCTEN (1<<0)      /*Controls whether the physical counter and freq reg is accessible from EL0 Mode*/
#define CNT_KNLCTL_EL0VCTEN (1<<1)      /*Controls whether the virutual counter and frequency Count are Available From EL0*/
#define CNT_KNLCTL_EVNTEN   (1<<2)      /*Enable/Disable Event Stream*/
#define CNT_KNLCTL_EVETDIR  (1<<3)      /*Controls Edge On Event Generation*/
#define CNT_KNLCTL_EVNTI    (0x000000F0)    /*Bit Select for  Event Stream Generation*/
#define CNT_KNLCTL_EL0VTEN  (1<<8)      /*Contols whether the virutal timer regs are accessible from EL0*/
#define CNT_KNLCTL_EL0PTEN  (1<<9)      /*Control Wether the Physical Timer Regs are accessible from EL0
*/
/*Timer Control Registers*/
#define CNT_CTL_ENABLE      (1<<0)      /*Timer Interrupt Enable*/
#define CNT_CTL_IMASK       (1<<1)      /*Timer Interrupt Mask*/
#define CNT_CTL_ISTATUS     (1<<2)      /*Timer Enable Disable*/

/*Conter Timer ID Registers*/
#define CNT_FRAME7      (0xF0000000)
#define CNT_FRAME6      (0x0F000000)
#define CNT_FRAME5      (0x00F00000)
#define CNT_FRAME4      (0x000F0000)
#define CNT_FRAME3      (0x0000F000)
#define CNT_FRAME2      (0x00000F00)
#define CNT_FRAME1      (0x000000F0)
#define CNT_FRAME0      (0x0000000F)

#define CNT_DBGH        (1<<1)          /*Controls if Counter is Halted or Not in Debug Mode*/

/* Non Secure Access Register*/
#define CNT_NS0         (1<<0)          /*Control Weather Frames CNTBaseN and CNTEL0BaseN are accessible by Non-Sec Accesses*/
#define CNT_NS1         (1<<1)
#define CNT_NS1         (1<<1)
#define CNT_NS2         (1<<2)
#define CNT_NS3         (1<<3)
#define CNT_NS4         (1<<4)
#define CNT_NS5         (1<<5)
#define CNT_NS6         (1<<6)
#define CNT_NS7         (1<<7)

/*Counter Control Register*/
#define CNT_HDBG        (1<<1)          /*Halt On Debug*/


/********************************************/
/**** A53 CPU Timer Function Prototypes******/
/********************************************/
uint32_t alt_a53_get_gentimer_nsel1control(void);
void  alt_a53_set_gentimer_nsel1control(uint32_t val);
int32_t alt_a53_get_gentimer_nsel1timervalue(void);
void  alt_a53_set_gentimer_nsel1timervalue(int32_t val);
uint64_t alt_a53_get_gentimer_nsel1comparevalue(void);
void  alt_a53_set_gentimer_nsel1comparevalue(uint64_t val);

uint32_t alt_a53_get_gentimer_sel1control(void);
void alt_a53_set_gentimer_sel1control(uint32_t val);
int32_t alt_a53_get_gentimer_sel1timervalue(void);
void alt_a53_set_gentimer_sel1timervalue(int32_t val);
uint64_t alt_a53_get_gentimer_sel1comparevalue(void);
void alt_a53_set_gentimer_sel1comparevalue(uint64_t val);


uint32_t alt_a53_get_gentimer_nsel2control(void);
void alt_a53_set_gentimer_nsel2control(uint32_t val);
int32_t alt_a53_get_gentimer_nsel2timervalue(void);
void alt_a53_set_gentimer_nsel2timervalue(int32_t val);
uint64_t alt_a53_get_gentimer_nsel2comparevalue(void);
void alt_a53_set_gentimer_nsel2comparevalue(uint64_t val);


uint32_t alt_a53_get_gentimer_virtcontrol(void);
void alt_a53_set_gentimer_virtcontrol(uint32_t val);
int32_t alt_a53_get_gentimer_virttimervalue(void);
void alt_a53_set_gentimer_virttimervalue(int32_t val);
uint64_t alt_a53_get_gentimer_virtcomparevalue(void);
void alt_a53_set_gentimer_virtcomparevalue(int64_t val);


uint32_t alt_a53_get_cntrtimerkernel_control(void);
void alt_a53_set_cntrtimerkernel_control(int32_t val);
	
uint32_t alt_a53_get_cntrtimer_freq(void);
void alt_a53_set_cntrtimer_freq(int32_t val);

uint32_t alt_a53_get_cntrtimer_phycnt(void);
uint32_t alt_a53_get_cntrtimer_vircnt(void);

void alt_a53_isb(void);

#endif      /* End of ALT_A53_CPU_TIMER_H_ */
