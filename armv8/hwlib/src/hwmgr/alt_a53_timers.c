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


#include "alt_a53_timers.h"

/*---------------------------------------------------------*/
/*--------------Non-Secure EL1 Timer Registers-------------*/
/*---------------------------------------------------------*/
/*Control Register*/
uint32_t alt_a53_get_gentimer_nsel1control(void)
{
   uint64_t val = 0;  	
#ifdef ARCH64
   __asm  volatile ("MRS %0, CNTP_CTL_EL0" : "=r" (val) : : "cc");
#else
   __asm  volatile ("MRC p15, 0, %0, c14, c2, 1" : "=r" (val) : : "cc");
#endif
   return val;
}

void  alt_a53_set_gentimer_nsel1control(uint32_t val)
{
#ifdef ARCH64
   uint64_t v = val;
   __asm  volatile ("MSR CNTP_CTL_EL0, %0" :  : "r" (v) : "cc");
#else
   __asm  volatile ("MCR p15, 0, %0, c14, c2, 1" : "=r" (val) : : "cc");
#endif
}



int32_t alt_a53_get_gentimer_nsel1timervalue(void)
{
   int64_t val = 0;
#ifdef ARCH64
   __asm  volatile ("MRS %0, CNTP_TVAL_EL0" : "=r" (val) : : "cc");
#else
   __asm  volatile ("MRC p15, 0, %0, c14, c2, 2" : "=r" (val) : : "cc");
#endif
   return val;
}

void  alt_a53_set_gentimer_nsel1timervalue(int32_t val)
{
#ifdef ARCH64
   int64_t v = val;
   __asm  volatile ("MSR CNTP_TVAL_EL0, %0" :  : "r" (v) : "cc");
#else
   __asm  volatile ("MCR p15, 0, %0, c14, c2, 2" : "=r" (val) : : "cc");
#endif
}


/*CompareValue*/
uint64_t alt_a53_get_gentimer_nsel1comparevalue(void)
{
   uint64_t val = 0;
#ifdef ARCH64
   __asm  volatile ("MRS %0, CNTP_CVAL_EL0" : "=r" (val) : : "cc");
#else
   __asm  volatile ("MRRC p15, 2, %0, r1, c14" : "=r" (val) : : "cc");
#endif
   return val;
}

void  alt_a53_set_gentimer_nsel1comparevalue(uint64_t val)
{
#ifdef ARCH64
   __asm  volatile ("MSR CNTP_CVAL_EL0, %0" :  : "r" (val) : "cc");
#else
   __asm  volatile ("MCRR p15, 2, %0, r1, c14" : "=r" (val) : : "cc");
#endif
}



/*---------------------------------------------------------*/
/*--------------Secure EL1 Timer Registers-----------------*/
/*---------------------------------------------------------*/

/*Control Register*/
uint32_t alt_a53_get_gentimer_sel1control(void)
{
   uint64_t val = 0;
#ifdef ARCH64
   __asm  volatile ("MRS %0, CNTPS_CTL_EL1" : "=r" (val) : : "cc");
#else
   /* N/A aarch32 inline assembly code */
   (void)val;
#endif
   return val;
}

void alt_a53_set_gentimer_sel1control(uint32_t val)
{
#ifdef ARCH64
   uint64_t v = val;
   __asm volatile ("MSR CNTPS_CTL_EL1, %0" :  : "r" (v) : "memory");
#else
   /* N/A aarch32 inline assembly code */
   (void)val;
#endif
}

/*TimerValue*/
int32_t alt_a53_get_gentimer_sel1timervalue(void)
{
   int64_t val = 0;
#ifdef ARCH64
   __asm  volatile ("MRS %0, CNTPS_TVAL_EL1" : "=r" (val) : : "cc");
#else
   /* N/A aarch32 inline assembly code */
   (void)val;
#endif
   return val;
}

void alt_a53_set_gentimer_sel1timervalue(int32_t val){
#ifdef ARCH64
   int64_t v = val;
   __asm  volatile ("MSR CNTPS_TVAL_EL1, %0" :  : "r" (v) : "cc");
#else
   /* N/A aarch32 inline assembly code */
   (void)val;
#endif
}

/*CompareValue*/
uint64_t alt_a53_get_gentimer_sel1comparevalue(void)
{
   uint64_t val = 0;
#ifdef ARCH64
   __asm  volatile ("MRS %0, CNTPS_CVAL_EL1" : "=r" (val) : : "cc");
#else
   /* N/A aarch32 inline assembly code */
   (void)val;
#endif
   return val;
}

void alt_a53_set_gentimer_sel1comparevalue(uint64_t val)
{
#ifdef ARCH64
   __asm  volatile ("MSR CNTPS_CVAL_EL1, %0" :  : "r" (val) : "cc");
#else
   /* N/A aarch32 inline assembly code */
   (void)val;
#endif
}


/*---------------------------------------------------------*/
/*----------------Non-Secure EL2 Timer Registers-----------*/
/*---------------------------------------------------------*/

/*Control Register*/
uint32_t alt_a53_get_gentimer_nsel2control(void)
{
    uint64_t val = 0;
#ifdef ARCH64
    __asm  volatile ("MRS %0, CNTHP_CTL_EL2" : "=r" (val) : : "cc");
#else
    /* N/A aarch32 inline assembly code */
    (void)val;
#endif
    return val;
}

void alt_a53_set_gentimer_nsel2control(uint32_t val){

    uint64_t v = val;
#ifdef ARCH64
    __asm  volatile ("MSR CNTHP_CTL_EL2, %0" : : "r" (v) : "cc");
#else
    /* N/A aarch32 inline assembly code */
    (void)v;
#endif
}


/*TimerValue*/
int32_t alt_a53_get_gentimer_nsel2timervalue(void)
{
    int64_t val = 0;
#ifdef ARCH64

   __asm  volatile ("MRS %0, CNTHP_TVAL_EL2" : "=r" (val) : : "cc");
#else
   /* N/A aarch32 inline assembly code */
   (void)val;
#endif
   return val;
}

void alt_a53_set_gentimer_nsel2timervalue(int32_t val)
{
    int64_t v = val;
#ifdef ARCH64
    __asm  volatile ("MSR CNTHP_TVAL_EL2, %0" :  : "r" (v) : "cc");
#else
    /* N/A aarch32 inline assembly code */
    (void)v;
#endif
}


/*CompareValue*/
uint64_t alt_a53_get_gentimer_nsel2comparevalue(void)
{

    uint64_t val = 0;
#ifdef ARCH64
    __asm  volatile ("MRS %0, CNTHP_CVAL_EL2" : "=r" (val) : : "cc");
#else
   /* N/A aarch32 inline assembly code */
    (void)val;
#endif
   return val;
}

void alt_a53_set_gentimer_nsel2comparevalue(uint64_t val)
{
#ifdef ARCH64
   __asm  volatile ("MSR CNTHP_CVAL_EL2, %0" :  : "r" (val) : "cc");
#else
   /* N/A aarch32 inline assembly code */
   (void)val;
#endif
}


/*---------------------------------------------------------*/
/*---------------Virtual Timer Registers-------------------*/
/*---------------------------------------------------------*/

/*Control Register*/
uint32_t alt_a53_get_gentimer_virtcontrol(void)
{
   uint64_t val = 0;
#ifdef ARCH64
   __asm  volatile ("MRS %0, CNTV_CTL_EL0" : "=r" (val) : : "cc");
#else
   __asm  volatile ("MRC p15, 0, %0, c14, c3, 1" : "=r" (val) : : "cc");
#endif
   return val;
}

void alt_a53_set_gentimer_virtcontrol(uint32_t val)
{
#ifdef ARCH64
   uint64_t v = val;
   __asm  volatile ("MSR CNTV_CTL_EL0, %0" :  : "r" (v) : "cc");
#else
   __asm  volatile ("MCR p15, 0, %0, c14, c3, 1" : "=r" (val) : : "cc");
#endif
}

/*TimerValue*/
int32_t alt_a53_get_gentimer_virttimervalue(void)
{
   int64_t val = 0;
#ifdef ARCH64
   __asm  volatile ("MRS %0, CNTV_TVAL_EL0" : "=r" (val) : : "cc");
#else
   __asm  volatile ("MRC p15, 0, %0, c14, c3, 0" : "=r" (val) : : "cc");
#endif
   return val;
}

void alt_a53_set_gentimer_virttimervalue(int32_t val)
{
#ifdef ARCH64
   int64_t v = val;
   __asm  volatile ("MSR CNTV_TVAL_EL0, %0" :  : "r" (v) : "cc");
#else
   __asm  volatile ("MCR p15, 0, %0, c14, c3, 0" : "=r" (val) : : "cc");
   /* N/A aarch32 inline assembly code */
#endif
}

/*CompareValue*/
uint64_t alt_a53_get_gentimer_virtcomparevalue(void)
{
   uint64_t val = 0;
#ifdef ARCH64
   __asm  volatile ("MRS %0, CNTV_CVAL_EL0" : "=r" (val) : : "cc");
#else
   __asm  volatile ("MRRC p15, 3, %0, r1, c14" : "=r" (val) : : "cc");
#endif
   return val;
}

void alt_a53_set_gentimer_virtcomparevalue(int64_t val)
{
#ifdef ARCH64
   __asm  volatile ("MSR CNTV_CVAL_EL0, %0" :  : "r" (val) : "cc");
#else
   __asm  volatile ("MCRR p15, 3, %0, r1, c14" : "=r" (val) : : "cc");
#endif
}


/*Counter timer kernel control register*/
uint32_t alt_a53_get_cntrtimerkernel_control(void)
{
   uint64_t val = 0;
#ifdef ARCH64
   __asm  volatile ("MRS %0, CNTKCTL_EL1" : "=r" (val) : : "cc");
#else
   __asm  volatile ("MRC p15, 0, %0, c14, c1, 0" : "=r" (val) : : "cc");
#endif
   return val;
}

void alt_a53_set_cntrtimerkernel_control(int32_t val)
{
#ifdef ARCH64
   uint64_t v = val;
   __asm  volatile ("MSR CNTKCTL_EL1, %0" :  : "r" (v) : "cc");
#else
   __asm  volatile ("MCR p15, 0, %0, c14, c1, 0" : "=r" (val) : : "cc");
#endif
}


/*Counter timer frequency register*/
uint32_t alt_a53_get_cntrtimer_freq(void)
{
   uint64_t val = 0;
#ifdef ARCH64
   __asm  volatile ("MRS %0, CNTFRQ_EL0" : "=r" (val) : : "cc");
#else
   __asm  volatile ("MRC p15, 0, %0, c14, c0, 0" : "=r" (val) : : "cc");
#endif
   return val;
}

void alt_a53_set_cntrtimer_freq(int32_t val)
{
#ifdef ARCH64
   uint64_t v = val;
   __asm  volatile ("MSR CNTFRQ_EL0, %0" :  : "r" (v) : "cc");
#else
   __asm  volatile ("MCR p15, 0, %0, c14, c0, 0" : "=r" (val) : : "cc");
#endif
}


/*Counter timer physical count register*/
uint32_t alt_a53_get_cntrtimer_phycnt(void)
{
   uint64_t val = 0;
#ifdef ARCH64
   __asm  volatile ("MRS %0, CNTPCT_EL0" : "=r" (val) : : "cc");
#else
   __asm  volatile ("MRRC p15, 0, %0, r1, c14" : "=r" (val) : : "cc");
#endif
   return val;
}


/*Counter timer virtual count register*/
uint32_t alt_a53_get_cntrtimer_vircnt(void)
{
   uint64_t val = 0;
#ifdef ARCH64
   __asm  volatile ("MRS %0, CNTVCT_EL0" : "=r" (val) : : "cc");
#else
   __asm  volatile ("MRRC p15, 1, %0, r1, c14" : "=r" (val) : : "cc");
#endif
   return val;
}

void alt_a53_isb(void)
{	
   __asm volatile ("ISB" : : :);
}

