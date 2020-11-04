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
 * $Id: //acds/main/embedded/ip/hps/armv8/hwlib/include/alt_watchdog.h#1 $
 */

#ifndef __ALT_WDOG_H__
#define __ALT_WDOG_H__

#include "hwlib.h"

#ifdef __cplusplus
extern "C" {
#endif  /* __cplusplus */

/*! \addtogroup WDOG_MGR Watchdog Timer Manager API
 *
 * This module defines the Watchdog Timer Manager API for accessing, configuring, and
 * controlling the HPS Watchdog Timer resources.
 *
 *
A typical initialization might be:
\verbatim
ALT_STATUS_CODE ret;
ret = alt_wdog_int_clear(ALT_WDOG0);
if (ret == ALT_E_SUCCESS) {ret = alt_wdog_counter_set(ALT_WDOG0, ALT_WDOG_USER15_OR_2G); }
if (ret == ALT_E_SUCCESS) {ret = alt_wdog_response_mode_set(ALT_WDOG0, ALT_WDOG_WARM_RESET); }
if (ret == ALT_E_SUCCESS) {ret = alt_wdog_start(ALT_WDOG0); }
\endverbatim

Then periodically (before it runs out) call this function to restart the watchdog:
\verbatim
alt_wdog_reset(ALT_WDOG0);
\endverbatim

If the interrupt is enabled in the interrupt manager and is triggered, it can be
cleared like this:
\verbatim
alt_wdog_int_clear(ALT_WDOG0);
\endverbatim

If the interrupt is not enabled in the interrupt manager, you can still poll to
see if it hit zero and clear any pending interrupts like this:
\verbatim
alt_wdog_int_if_pending_clear(ALT_WDOG0);
\endverbatim
 *
 * @{
 */
/******************************************************************************/

/*!
 * This type definition enumerates the names of the timers managed by
 * the Watchdog Timers Manager.
 */
typedef enum ALT_WDOG_TIMER_e {
    /* OSC1 Clock Group */
    /*!
     * \b watchdog_timer0 - Connected to the L4_sys bus clocked by l4_sys_free_clk.
     * Counter values are limited to powers of two between 16 and 31
     * and there is no prescaler.
     */
    ALT_WDOG0,

    /*!
     * \b watchdog_timer1 - Connected to the L4_sys bus clocked by l4_sys_free_clk.
     * Counter values are limited to powers of two between 16 and 31
     * and there is no prescaler.
     */
    ALT_WDOG1,

    /*!
     * \b watchdog_timer2 - Connected to the L4_sys bus clocked by l4_sys_free_clk.
     * Counter values are limited to powers of two between 16 and 31
     * and there is no prescaler.
     */
    ALT_WDOG2,

    /*!
     * \b watchdog_timer3 - Connected to the L4_sys bus clocked by l4_sys_free_clk.
     * Counter values are limited to powers of two between 16 and 31
     * and there is no prescaler.
     */
    ALT_WDOG3,

    /*!
     * \b watchdog_init_timer0 - This is for the initial timout only (not
     * necessarily immediately after system restart), watchdog_timer0 is then
     * used for all subsequent timeouts. Connected to the L4_sys bus clocked
     * by l4_sys_free_clk.
     * Counter values are limited to powers of two between 16 and 31 and
     * there is no prescaler.
     */
    ALT_WDOG0_INIT,

    /*!
     * \b watchdog_init_timer1 - This is for the initial timout only (not
     * necessarily immediately after system restart), watchdog_timer1 is then
     * used for all subsequent timeouts. Connected to the L4_sys bus clocked
     * by l4_sys_free_clk.
     * Counter values are limited to powers of two  between 16 and 31 and
     * there is no prescaler.
     */
    ALT_WDOG1_INIT,

    /*!
     * \b watchdog_init_timer2 - This is for the initial timout only (not
     * necessarily immediately after system restart), watchdog_timer2 is then
     * used for all subsequent timeouts. Connected to the L4_sys bus clocked
     * by l4_sys_free_clk.
     * Counter values are limited to powers of two between 16 and 31 and
     * there is no prescaler.
     */
    ALT_WDOG2_INIT,

    /*!
     * \b watchdog_init_timer3 - This is for the initial timout only (not
     * necessarily immediately after system restart), watchdog_timer3 is then
     * used for all subsequent timeouts. Connected to the L4_sys bus clocked
     * by l4_sys_free_clk.
     * Counter values are limited to powers of two between 16 and 31 and
     * there is no prescaler.
     */
    ALT_WDOG3_INIT

} ALT_WDOG_TIMER_t;

/******************************************************************************/
/*!
 * This type definition enumerates the encoded countdown values that \b ALT_WATCHDOGx and \b ALT_WATCHDOGx_INITIAL
 * can be set to use.
 */
typedef enum ALT_WDOG_TIMEOUT_e {
    /*!
     * \b ALT_WDOG_USER0_OR_64K - Timeout = 65,536 l4_sys_free_clk periods.
     */
    ALT_WDOG_USER0_OR_64K,

    /*!
     * \b ALT_WDOG_USER1_OR_128K - Timeout = 131,072 l4_sys_free_clk periods.
     */
    ALT_WDOG_USER1_OR_128K,

    /*!
     * \b ALT_WDOG_USER2_OR_256K - Timeout = 262,144 l4_sys_free_clk periods.
     */
    ALT_WDOG_USER2_OR_256K,

    /*!
     * \b ALT_WDOG_USER3_OR_512K - Timeout = 524,288 l4_sys_free_clk periods.
     */
    ALT_WDOG_USER3_OR_512K,

    /*!
     * \b ALT_WDOG_USER4_OR_1M - Timeout = 1,048,576 l4_sys_free_clk periods.
     */
    ALT_WDOG_USER4_OR_1M,

    /*!
     * \b ALT_WDOG_USER5_OR_2M - Timeout = 2,097,152 l4_sys_free_clk periods.
     */
    ALT_WDOG_USER5_OR_2M,

    /*!
     * \b ALT_WDOG_USER6_OR_4M - Timeout = 4,194,304 l4_sys_free_clk periods.
     */
    ALT_WDOG_USER6_OR_4M,

    /*!
     * \b ALT_WDOG_USER7_OR_8M - Timeout = 8,388,608 l4_sys_free_clk periods.
     */
    ALT_WDOG_USER7_OR_8M,

    /*!
     * \b ALT_WDOG_USER8_OR_16M - Timeout = 16,777,216 l4_sys_free_clk periods.
     */
    ALT_WDOG_USER8_OR_16M,

    /*!
     * \b ALT_WDOG_USER9_OR_32M - Timeout = 33,554,432 l4_sys_free_clk periods.
     */
    ALT_WDOG_USER9_OR_32M,

    /*!
     * \b ALT_WDOG_USER10_OR_64M - Timeout = 67,108,864 l4_sys_free_clk periods.
     */
    ALT_WDOG_USER10_OR_64M,

    /*!
     * \b ALT_WDOG_USER11_OR_128M - Timeout = 134,217,728 l4_sys_free_clk periods.
     */
    ALT_WDOG_USER11_OR_128M,

    /*!
     * \b ALT_WDOG_USER12_OR_256M - Timeout = 268,435,456 l4_sys_free_clk periods.
     */
    ALT_WDOG_USER12_OR_256M,

    /*!
     * \b ALT_WDOG_USER13_OR_512M - Timeout = 536,870,912 l4_sys_free_clk periods.
     */
    ALT_WDOG_USER13_OR_512M,

    /*!
     *
     * \b ALT_WDOG_USER14_OR_1G - Timeout = 1,073,741,824 l4_sys_free_clk periods.
     */
    ALT_WDOG_USER14_OR_1G,

    /*!
     * \b ALT_WDOG_USER15_OR_2G - Timeout = 2,147,483,648 l4_sys_free_clk periods.
     */
    ALT_WDOG_USER15_OR_2G
} ALT_WDOG_TIMEOUT_t;

/******************************************************************************/
/*!
 * This type definition enumerates the reset types that the watchdog
 * timers can be set to trigger.
 */
typedef enum ALT_WDOG_RESET_TYPE_e {
    /*!
     * \b Unkown - For indicating an error
     */
    ALT_WDOG_UNKNOWN,

    /*!
     * \b Reset -  For \b ALT_WATCHDOGx or \b ALT_WATCHDOGx_INITIAL,
     * if the counter reaches zero without being
     * reset, generate a system-wide warm reset request.
     * This is the default mode out of reset. \n
     */
    ALT_WDOG_WARM_RESET,

    /*!
     * \b Interrupt_First - When the counter reaches zero without being
     * reset, generate an interrupt. For \b ALT_WATCHDOGx or \b ALT_WATCHDOGx_INITIAL, if the
     * interrupt is not cleared by the time a second timeout occurs, then
     * generate a system warm reset request. \n
     */
    ALT_WDOG_INT_THEN_RESET

} ALT_WDOG_RESET_TYPE_t;

/******************************************************************************/
/*! \addtogroup WDOG_STATUS Watchdog Timer Enable, Disable, Restart, Status
 *
 * This functional group contains the basic functions to control and manage
 * the watchdog timers.
 *
 * @{
 */
/******************************************************************************/
/*!
 * Initialize the watchdog timer module before use
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_wdog_init(void);

/******************************************************************************/
/*!
 * Uninitialize the watchdog timer module & return to reset state
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_wdog_uninit(void);

/******************************************************************************/
/*!
 * Stop the specified watchdog timer. This function will use Reset Manager to
 * reset the specified watchdog timer.
 *
 * \param       tmr_id
 *              The watchdog timer identifier.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   Tried to stop an invalid watchdog timer.
 */
ALT_STATUS_CODE alt_wdog_stop(ALT_WDOG_TIMER_t tmr_id);

/******************************************************************************/
/*!
 * Start the specified watchdog timer.
 *
 * \param       tmr_id
 *              The watchdog timer identifier.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   Tried to enable an invalid watchdog timer.
 */
ALT_STATUS_CODE alt_wdog_start(ALT_WDOG_TIMER_t tmr_id);

/******************************************************************************/
/*!
 * Returns whether the specified watchdog timer is currently running or not.
 *
 * \param       tmr_id
 *              The watchdog timer identifier.
 *
 * \retval      TRUE            The timer is currently running.
 * \retval      FALSE           The timer is currently not running.
 */
bool alt_wdog_tmr_is_enabled(ALT_WDOG_TIMER_t tmr_id);

/******************************************************************************/
/*!
 * Reloads the counter countdown value, clears the timer interrupt, and
 * restarts the watchdog timer. User can reset the timer at any time before
 * timeout. This is also known as kicking, petting, feeding, waking, or
 * walking the watchdog. \n If the timer is reset while stopped, it remains
 * stopped, the timer reset value is reloaded and the countdown will start
 * from there when it is started. The timer configuration is retained.
 *
 * \param       tmr_id
 *              The watchdog timer identifier.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   Tried to reset an invalid watchdog timer.
 */
ALT_STATUS_CODE alt_wdog_reset(ALT_WDOG_TIMER_t tmr_id);

/*! @} */
/******************************************************************************/
/*! \addtogroup WDOG_COUNTERS Watchdog Timer Counter Configuration
 *
 *
 * This functional group implements setting, configuring and reading
 * the counters of the watchdog timers.
 *
 * @{
 */
/******************************************************************************/
/*! Sets the countdown value of the specified timer.
 *  For tmr_id = \b ALT_WATCHDOGx or \b ALT_WATCHDOGx_INITIAL
 *  This is an encoded power-of-two value such that 2**(16 + val). \n
 *  If this value is set before the watchdog timer is started, then this
 *  value is used from the start. If this value is set after the timer
 *  has been started, it takes effect when the timer rolls over or the next
 *  time it is started.
 *
 * \param       tmr_id
 *              The watchdog timer identifier.
 *
 * \param       val
 *              The counter value to load. It is the ALT_WDOG_TIMEOUT_t data.
 *              min is ALT_WDOG_USER0_OR_64K.
 *              max is ALT_WDOG_USER15_OR_2G
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   Tried to write an invalid watchdog timer or
 *                                 timeout value.
 */
ALT_STATUS_CODE alt_wdog_counter_set(ALT_WDOG_TIMER_t tmr_id, ALT_WDOG_TIMEOUT_t val);

/******************************************************************************/
/*!
 * Returns the current counter value of the specified timer.
 *
 * \param       tmr_id
 *              The watchdog timer identifier.
 *
 *
 * \retval      uint32_t   The current 32-bit counter value.
 */
uint32_t alt_wdog_counter_get_current(ALT_WDOG_TIMER_t tmr_id);

/******************************************************************************/
/*!
 * Returns the current counter value of the specified timer, as measured in
 * milliseconds.
 *
 * \param       tmr_id
 *              The watchdog timer identifier.
 *
 *
 * \retval      uint32_t   The current 32-bit counter value (in milliseconds).
 */
uint32_t alt_wdog_counter_get_curtime_millisecs(ALT_WDOG_TIMER_t tmr_id);

/******************************************************************************/
/*!
 * Returns the initial counter value of the specified timer as a 32-bit
 * integer value. This is the value that will be reloaded when the timer
 * is reset or restarted. For the timers where this value is set as an
 * encoded powers-of-two between 16 and 31, the value is converted into the
 * equivalent binary value before returning it. \n
 *
 * \param       tmr_id
 *              The watchdog timer identifier.
 *
 * \retval      uint32_t   The current 32-bit counter value.
 *              0           Indicates an error.
 */
uint32_t alt_wdog_counter_get_init(ALT_WDOG_TIMER_t tmr_id);

/******************************************************************************/
/*!
 * Returns the initial value of the specified timer in nanoseconds.
 * This is the value that will be reloaded when the timer is reset or
 * restarted. This call returns a more precise result than
 * alt_wdog_counter_get_inittime_millisecs(), but as an unsigned 64-bit
 * integer.
 *
 * \param       tmr_id
 *              The watchdog timer identifier.
 *
 * \retval      uint64_t   The currently-selected watchdog delay time (in
 *              nanoseconds).
 */
uint64_t alt_wdog_counter_get_inittime_nanosecs(ALT_WDOG_TIMER_t tmr_id);

/******************************************************************************/
/*!
 * Returns the initialized value of the specified timer in milliseconds.
 * This is the value that will be reloaded when the timer is reset or
 * restarted. This call returns a 32-bit unsigned integer, though is
 * less precise than alt_wdog_counter_get_inittime_nanosecs().
 *
 * \param       tmr_id
 *              The watchdog timer identifier.
 *
 * \retval      uint32_t   The currently-selected watchdog delay time (in
 *              milliseconds).
 *              0           Indicates an error.
*/
uint32_t alt_wdog_counter_get_inittime_millisecs(ALT_WDOG_TIMER_t tmr_id);

/******************************************************************************/
/*!
 * Returns the maximum possible counter value of the specified timer as a
 * 32-bit value. For the timers where this value is encoded (as
 * powers-of-two between 16 and 31), the encoded value is converted into the
 * equivalent binary value before returning it.
 *
 * \param       tmr_id
 *              The watchdog timer identifier.
 *
 * \retval      uint32_t   The current 32-bit counter value.
 */
uint32_t alt_wdog_counter_get_max(ALT_WDOG_TIMER_t tmr_id);

/******************************************************************************/
/*!
 * Returns the maximum possible delay time of the specified timer specified in
 * nanoseconds. This call returns a more precise reading of the counter than
 * alt_wdog_counter_get_max_millisecs(), though in an unsigned 64-bit integer.
 *
 * \param       tmr_id
 *              The watchdog timer identifier.
 *
 * \retval      uint64_t   The maximum delay time before timeout (in
 *              nanoseconds).
 */
uint64_t alt_wdog_counter_get_max_nanosecs(ALT_WDOG_TIMER_t tmr_id);


/******************************************************************************/
/*!
 * Returns the maximum possible delay time of the specified timer specified in
 * milliseconds. This call returns a 32-bit unsigned integer, though is less
 * precise than alt_wdog_counter_get_max_nanosecs().
 *
 * \param       tmr_id
 *              The watchdog timer identifier.
 *
 * \retval      uint32_t   The maximum delay time before timeout (in
 *              milliseconds).
 */
uint32_t alt_wdog_counter_get_max_millisecs(ALT_WDOG_TIMER_t tmr_id);

/*! @} */
/******************************************************************************/
/*! \addtogroup WDOG_INTS Watchdog Timer Interrupt Management
 *
 *
 * This functional group implements management of the interrupts
 *  of the watchdog timers.
 *
 * @{
 */
/******************************************************************************/

/******************************************************************************/
/*!
 * Returns the status of the interrupt of the specified watchdog timer module
 * but does not clear it. Return \b TRUE if the interrupt of the specified
 * general purpose timer module is pending and \b FALSE otherwise.
 *
 * \param       tmr_id
 *              The timer identifier.
 *
 * \retval      TRUE            The timer interrupt is currently pending.
 * \retval      FALSE           The timer interrupt is not currently pending.
 */
bool alt_wdog_int_is_pending(ALT_WDOG_TIMER_t tmr_id);

/******************************************************************************/
/*!
 * Returns the state of the interrupt of the specified watchdog timer module.
 *
 * \param       tmr_id
 *              The timer identifier.
 *
 * \retval      TRUE            The timer interrupt is currently pending.
 * \retval      FALSE           The timer interrupt is not currently pending.
 */
bool alt_wdog_int_is_enabled(ALT_WDOG_TIMER_t tmr_id);

/******************************************************************************/
/*!
 * Clears the pending status of the interrupt of the specified watchdog
 * timer module.
 *
 * \param       tmr_id
 *              The timer identifier.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_wdog_int_clear(ALT_WDOG_TIMER_t tmr_id);

/******************************************************************************/
/*!
 * Returns the status of the interrupt of the specified watchdog timer module
 * and also clears it. Return \b TRUE if the interrupt of the specified
 * timer module is pending and \b FALSE otherwise.
 *
 * \param       tmr_id
 *              The timer identifier.
 *
 * \retval      TRUE            The timer interrupt was pending.
 * \retval      FALSE           The timer interrupt was not pending.
 */
bool alt_wdog_int_if_pending_clear(ALT_WDOG_TIMER_t tmr_id);

/******************************************************************************/
/*!
 * Sets the timeout response mode of the specified watchdog timer.
 * For \b ALT_WATCHDOGx or \b ALT_WATCHDOGx_INITIAL,
 * the options are to generate a system reset or to generate an interrupt and then
 * generate a system reset if the interrupt is not cleared by the next time
 * the watchdog timer counter rolls over.\n
 *
 * \param       tmr_id
 *              The timer identifier.
 *
 * \param       type
 *              \b ALT_WDOG_WARM_RESET - reset the core immediately. \n\n
 *              \b ALT_WDOG_INT_THEN_RESET - raise an interrupt. If the interrupt
 *              is not cleared before the timer counts down
 *              to zero again, reset the CPU cores. \n
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   Specified an incorrect timer or an unsupported
 *                              response mode for the specified timer.
 */
ALT_STATUS_CODE alt_wdog_response_mode_set(ALT_WDOG_TIMER_t tmr_id,
                                           ALT_WDOG_RESET_TYPE_t type);

/******************************************************************************/
/*!
 * Returns the response mode of the specified timer.
 *
 * \param       tmr_id
 *              The timer identifier.
 *
 * \retval      ALT_WDOG_WARM_RESET - reset the core immediately. \n
 * \retval      ALT_WDOG_INT_THEN_RESET - Raise an interrupt. If the interrupt is not
 *              cleared before timer wraps around again, reset the CPU cores. \n
 * \retval      ALT_WDOG_UNKNOWN - The operation failed or invalid watchdog timer id.
 */
ALT_WDOG_RESET_TYPE_t alt_wdog_response_mode_get(ALT_WDOG_TIMER_t tmr_id);


/******************************************************************************/
/*!
 * Returns the component code of the watchdog timer module. \n
 *
 * \param       tmr_id
 *              The timer identifier.
 *
 * \retval      uint32_t      The component code of the module.
 *                            It should be 0x44570120.
 *
 */
uint32_t alt_wdog_compcode_get(ALT_WDOG_TIMER_t tmr_id);

/******************************************************************************/
/*!
 * Returns the version code of the watchdog timer module.
 *
 * \param       tmr_id
 *              The timer identifier.
 *
 * \retval      uint32_t      The encoded revision number of the module.
 *
 */
uint32_t alt_wdog_ver_get(ALT_WDOG_TIMER_t tmr_id);


/******************************************************************************/

/*! @} */
/*! @} */
#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_WDOG_H__ */
