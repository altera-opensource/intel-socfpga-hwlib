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

/*! \file
 *  Altera - S10 SoC Reset Manager
 */

/*
 * $Id: //acds/main/embedded/ip/hps/armv8/hwlib/include/soc_s10/alt_reset_manager.h#1 $
 */

#ifndef __ALT_RESET_MANAGER_H__
#define __ALT_RESET_MANAGER_H__

#ifdef __cplusplus
extern "C"
{
#endif  /* __cplusplus */

#include "hwlib.h"
#include <stdbool.h>

/*! \addtogroup RST_MGR Reset Manager
 *
 * The Reset Manager API defines functions for accessing, configuring, and
 * controlling the HPS reset behavior.
 * @{
 */

/******************************************************************************/
/*! \addtogroup RST_MGR_STATUS Reset Status
 *
 * This functional group provides information on various aspects of SoC reset
 * status and timeout events.
 *
 * @{
 */
 
 /******************************************************************************/
/*!
 * This type definition enumerates the set of reset causes and timeout events.
 * Note the values do not correspond to the actual bit locations.
 */
typedef enum ALT_RESET_EVENT_e
{
    /*! This bit indicates that CS DAP block has been reset. This bit is reset to its reset value on POR, not on warm or cold reset */
    ALT_RESET_EVENT_CSDAPRST            = 0x1,

    /*! indicates if the debug reset has been asserted. This bit is reset to its reset value on POR, not on warm or cold reset.*/
    ALT_RESET_EVENT_DEBUGRST            = 0x2,

    /*! L4 Watchdog3 triggered a hardware sequenced warm reset.*/
    ALT_RESET_EVENT_L4W3DRST            = 0x4,

    /*! L4 Watchdog2 triggered a hardware sequenced warm reset.*/
    ALT_RESET_EVENT_L4WD2RST            = 0x8,
    
    /*! L4 Watchdog1 triggered a hardware sequenced warm reset.*/
    ALT_RESET_EVENT_L4WD1RST            = 0x10,
    
    /*! L4 Watchdog0 triggered a hardware sequenced warm reset.*/
    ALT_RESET_EVENT_L4WD0RST            = 0x20,    

    /*! MPU3 triggered a hardware sequenced warm reset.*/
    ALT_RESET_EVENT_MPU3RST             = 0x40,
    
    /*! MPU2 triggered a hardware sequenced warm reset.*/
    ALT_RESET_EVENT_MPU2RST             = 0x80,
    
    /*! MPU1 triggered a hardware sequenced warm reset.*/
    ALT_RESET_EVENT_MPU1RST             = 0x100,
    
    /*! MPU0 triggered a hardware sequenced warm reset.*/
    ALT_RESET_EVENT_MPU0RST             = 0x200,

    /*! SDM triggered last por reset. This bit is reset to its reset value on POR, not on warm or cold reset.*/
    ALT_RESET_EVENT_SDMLASTPORRST       = 0x400,

    /*! SDM triggered warm reset.*/
    ALT_RESET_EVENT_SDMWARMRST         =  0x800,

    /*! SDM triggered cold reset. This bit is reset to its reset value on POR, not on warm or cold reset.*/
    ALT_RESET_EVENT_SDMCOLDRST         =  0x1000,
    
    /*! This bit indicates SDM that MPU software has asserted reset to core3 by writing to "mpumodrst" register.*/
    ALT_RESET_EVENT_CORE3IRQ            = 0x2000,

    /*! This bit indicates SDM that MPU software has asserted reset to core2 by writing to "mpumodrst" register.*/
    ALT_RESET_EVENT_CORE2IRQ            = 0x4000,

    /*! This bit indicates SDM that MPU software has asserted reset to core1 by writing to "mpumodrst" register.*/
    ALT_RESET_EVENT_CORE1IRQ            = 0x8000,

    /*! This bit indicates SDM that MPU software has asserted reset to core0 by writing to "mpumodrst" register.*/
    ALT_RESET_EVENT_CORE0IRQ            = 0x10000,

    /*! This bit indicates SDM that MPU software has asserted reset to CPU3 by writing to the 'cpupor3' bit of register "coldmodrst".*/
    ALT_RESET_EVENT_CPUPOR3IRQ          = 0x20000,

    /*! This bit indicates SDM that MPU software has asserted reset to CPU2 by writing to the 'cpupor2' bit of register "coldmodrst".*/
    ALT_RESET_EVENT_CPUPOR2IRQ          = 0x40000,

    /*! This bit indicates SDM that MPU software has asserted reset to CPU1 by writing to the 'cpupor1' bit of register "coldmodrst".*/
    ALT_RESET_EVENT_CPUPOR1IRQ          = 0x80000,

    /*! This bit indicates SDM that MPU software has asserted reset to CPU0 by writing to the 'cpupor0' bit of register "coldmodrst".*/
    ALT_RESET_EVENT_CPUPOR0IRQ          = 0x100000

} ALT_RESET_EVENT_t;


/******************************************************************************/
/*!
 * Gets the reset and timeout events that caused the last reset.
 *
 * The ALT_RESET_EVENT_t enumeration values should be used to selectively
 * examine the returned reset cause(s).
 *
 * \returns     A mask of the reset and/or timeout events that caused the last
 *              reset.
 */
uint32_t alt_reset_event_get(void);

/******************************************************************************/
/*!
 * Clears the reset and timeout events that caused the last reset.
 *
 * \param       event_mask
 *              A mask of the selected reset and timeout events to clear in the
 *              Reset Manager \e stat register. The mask selection must be formed
 *              using the ALT_RESET_EVENT_t enumeration values
 *
 * \retval      ALT_E_SUCCESS   The operation was succesful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_reset_event_clear(uint32_t event_mask);

/*! @} */

/******************************************************************************/
/*! \addtogroup RST_MGR_CTRL Reset Control
 *
 * This functional group provides global and selective reset control for the SoC
 * and its constituent modules.
 *
 * @{
 */

/******************************************************************************/
/*!
 * Initiate a reset of cpu 0-3 module as indicated by reset mask.
 * This will cause the CPU core reset signal to be asserted if that CPU is in WFI mode.
 * The Reset Manager hardware will bring the module back out of reset after the appropriate amount of time.
 * All fields are reset by a cold or a warm reset.
 * This function must run in privileged mode.
 *
 * \param       cpu mask
 *              Specifies which cpu(s) to reset.  Bit 0=CPU0 Bit1=CPU1 Bit2=CPU2 Bit3=CPU3
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_cpu_core_reset(uint32_t mask);

/*!
 * Initiate a POR reset of cpu 0-3 module as indicated by reset mask.
 * This will cause the CPU POR reset signal to be asserted if that CPU is in WFI mode.
 * The Reset Manager hardware will bring the module back out of reset after the appropriate amount of time.
 * All fields are only reset by a cold reset.
 * This function must run in privileged mode.
 *
 * \param       cpu mask
 *              Specifies which cpu(s) to reset.  Bit 0=CPU0 Bit1=CPU1 Bit2=CPU2 Bit3=CPU3
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_cpu_por_reset(uint32_t mask);

/*! @} */

/*! @} */

#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_RESET_MGR_H__ */
