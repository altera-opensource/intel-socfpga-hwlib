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
 * $Id: //acds/main/embedded/ip/hps/armv8/hwlib/include/alt_interrupt.h#1 $
 */

/*!
 * Intel - SoC Interrupt Manager - Secure interface
 */

#ifndef __ALT_INT_H__
#define __ALT_INT_H__

#ifdef __ALT_INT_NS_H__
#error Secure and Non-Secure interrupt API cannot be used together.
#endif

#include "hwlib.h"
#include "alt_int_device.h"

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */
/*!
 * \addtogroup INT_COMMON Interrupt Controller Common Definitions
 *
 * This module contains the definitions common to the Interrupt Controller
 * Low-Level API and Interrupt Controller Manager Interface.
 *
 * @{
 */

/*!
 * This is the CPU target type. It is used to specify a set of CPUs on the
 * system. If only bit 0 is set then it specifies a set of CPUs containing
 * only CPU 0. Multiple CPUs can be specified by setting the appropriate bit
 * up to the number of CPUs on the system.
 */
typedef uint32_t alt_int_cpu_target_t;

/*!
 * This type definition enumerates all the interrupt trigger types.
 */
typedef enum ALT_INT_TRIGGER_e
{
    ALT_INT_TRIGGER_EDGE,
    ALT_INT_TRIGGER_LEVEL,

    /*!
     * Software triggered interrupt. This applies to Software Generated
     * Interrupts (SGI) only, with interrupt IDs 0 - 15.
     */
    ALT_INT_TRIGGER_SOFTWARE,

    /*!
     * All triggering types except for those in the Shared Peripheral Interrupts
     * (SPI) F2S FPGA family interrupts can be determined by the system
     * automatically. In all functions which ask for the triggering type, the
     * ALT_INT_TRIGGER_AUTODETECT can be used to select the correct trigger
     * type for all non F2S interrupt types.
     */
    ALT_INT_TRIGGER_AUTODETECT,

    /*!
     * The interrupt triggering information is not applicable. This is possibly
     * due to querying an invalid interrupt identifier.
     */
    ALT_INT_TRIGGER_NA
} ALT_INT_TRIGGER_t;

/*!
 * This type definition enumerates all the target list filter options. This is
 * used by the trigger Software Generated Interrupt (SGI) feature to issue a
 * SGI to the specified processor(s) in the system. Depending on the target
 * list filter and the target list, interrupts can be routed to any
 * combinations of CPUs.
 */
typedef enum ALT_INT_SGI_TARGET_e
{
    /*!
     * This filter list uses the target list parameter to specify which CPUs
     * to send the interrupt to. If target list is 0, no interrupts are sent.
     */
    ALT_INT_SGI_TARGET_LIST,

    /*!
     * This filter list sends the interrupt all CPUs except the current CPU.
     * The target list parameter is ignored.
     */
    ALT_INT_SGI_TARGET_ALL_EXCL_SENDER,

    /*!
     * This filter list sends the interrupt to the current CPU only. The
     * target list parameter is ignored.
     */
    ALT_INT_SGI_TARGET_SENDER_ONLY
} ALT_INT_SGI_TARGET_t;

/*!
 * The callback to use when an interrupt needs to be serviced.
 *
 * \param       icciar          The Interrupt Controller CPU Interrupt
 *                              Acknowledgement Register value (ICCIAR) value
 *                              corresponding to the current interrupt.
 *
 * \param       context         The user provided context.
 */
typedef void (*alt_int_callback_t)(uint32_t icciar, void * context);

/*!
 * @}
 */

/*!
 * \addtogroup INT_LL Interrupt Controller Low-Level API [Secure]
 *
 * This module defines the Interrupt Low-Level API for accessing, configuring,
 * and controlling interrupts for SoC.
 *
 * The following reference materials was used in the design of this API:
 *  * Cortex&trade;-A53 Technical Reference Manual
 *  * Cortex&trade;-A53 MPCore&reg; Technical Reference Manual
 *  * ARM&reg; Generic Interrupt Controller Architecture, Version 2.0
 *    Architecture Specification
 *
 * @{
 */

/*!
 * \addtogroup INT_LL_DEFINE Interrupt Controller Preprocessor Defines \
 *                           [Secure]
 *
 * This group of APIs configures the compile time options for the Interrupt
 * API or provides information about the Interrupt API. It allows the
 * interrupt API to be integrated with operating systems which already
 * provides interrupt support.
 *
 * @{
 */

/*!
 * This preprocessor definition determines the total number of interrupts that
 * the Interrupt API should support. The default value is corresponds to the
 * number of interrupts defined in the hardware. Valid values are multiples of
 * 16.
 *
 * This preprocessor definition should not be redefined in the Makefile.
 */
#define ALT_INT_PROVISION_INT_COUNT         (256)

/*!
 * @}
 */

/*!
 * \addtogroup INT_LL_GLOBAL Interrupt Controller Global Interface [Secure]
 *
 * This group of APIs provide access, configuration, and control of the
 * interrupt controller global functions.
 *
 * @{
 */

/*!
 * Performs the initialization steps needed by the interrupt controller
 * system. This should be the first API calls made when using the interrupt
 * controller API.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_int_global_init(void);

/*!
 * Performs the uninitialization steps needed by the interrupt controller
 * system.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_int_global_uninit(void);

/*!
 * Enables all interrupt forwarding from the interrupt controller to
 * the CPU interfaces. In EL3, this will enable the secure interrupts.
 * In all other ELs, it will enable only the nonsecure ones.
 *
 * The interrupt controller monitors all secure interrupt signals and forwards
 * pending interrupts to the processors.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_int_global_enable(void);

/*!
 * Disables all interrupt forwarding from the interrupt controller to
 * the CPU interfaces. In EL3, this will disable the secure interrupts.
 * In all other ELs, it will disable only the nonsecure ones.
 *
 * The interrupt controller ignores all secure interrupt signals and does not
 * forward pending interrupts to the processors.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_int_global_disable(void);

/*!
 * @}
 */

/*!
 * \addtogroup INT_LL_DIST Interrupt Controller Distributor Interface
 *
 * This group of APIs provide access, configuration, and control of the
 * Generic Interrupt Controller (GIC) Distributor interface.
 *
 * @{
 */

/*!
 * Enable the specified interrupt to be forwarded to the CPU interface.
 *
 * For Software Generated Interrupts (SGI) (interrupts 0 - 15) and Private
 * Peripheral Interrupt (PPI) (interrupts 16 - 32), interrupts must be enabled
 * on each CPU that will service the interrupt. This is done by calling this
 * API when executing on that CPU.
 *
 * \param       int_id
 *              The interrupt identifier. All interrupts are valid, 0 - 255
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The given interrupt identifier is invalid.
 */
ALT_STATUS_CODE alt_int_dist_enable(ALT_INT_INTERRUPT_t int_id);

/*!
 * Disables the specified interrupt from being forwarded to the CPU interface.
 *
 * For Software Generated Interrupts (SGI) (interrupts 0 - 15) and Private
 * Peripheral Interrupt (PPI) (interrupts 16 - 32), interrupts must be
 * disabled on each CPU that will no longer service the interrupt. This is
 * done by calling this API when executing on that CPU.
 *
 * \param       int_id
 *              The interrupt identifier. All interrupts are valid, 0 - 255
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The given interrupt identifier is invalid.
 */
ALT_STATUS_CODE alt_int_dist_disable(ALT_INT_INTERRUPT_t int_id);

/*!
 * Return \b true if the specified interrupt is enabled and \b false
 * otherwise.
 *
 * For Software Generated Interrupts (SGI) (interrupts 0 - 15) and Private
 * Peripheral Interrupt (PPI) (interrupts 16 - 32), interrupts must be
 * queried on each CPU that may service the interrupt. This is done by
 * calling this API when executing on that CPU.
 *
 * \param       int_id
 *              The interrupt identifier. All interrupts are valid, 0 - 255
 *
 * \retval      ALT_E_TRUE      Interrupt is enabled.
 * \retval      ALT_E_FALSE     Interrupt is disabled.
 * \retval      ALT_E_BAD_ARG   The given interrupt identifier is invalid.
 */
ALT_STATUS_CODE alt_int_dist_is_enabled(ALT_INT_INTERRUPT_t int_id);


/*!
 * Set the pending status of the specified peripheral interrupt.
 *
 * This API is not valid for Software Generated Interrupts (SGI)
 * (interrupts 0 - 15).
 *
 * For Private Peripheral Interrupt (PPI) (interrupts 16 - 32), pending is set
 * on a per CPU basis. This is done by calling this API when executing on that
 * CPU.
 *
 * \param       int_id
 *              The interrupt identifier. All peripheral interrupts are valid,
 *              16 - 255
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The given interrupt identifier is invalid.
 */
ALT_STATUS_CODE alt_int_dist_pending_set(ALT_INT_INTERRUPT_t int_id);

/*!
 * Clear the pending status of the specified peripheral interrupt.
 *
 * This API is not valid for Software Generated Interrupts (SGI)
 * (interrupts 0 - 15).
 *
 * For Private Peripheral Interrupt (PPI) (interrupts 16 - 32), pending is
 * cleared on a per CPU basis. This is done by calling this API when executing
 * on that CPU.
 *
 * \param       int_id
 *              The interrupt identifier. All interrupts are valid, 16 - 255
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The given interrupt identifier is invalid.
 */
ALT_STATUS_CODE alt_int_dist_pending_clear(ALT_INT_INTERRUPT_t int_id);

/*!
 * Returns \b true if the specified interrupt is pending or active and
 * pending, otherwise returns \b false.
 *
 * For Software Generated Interrupts (SGI) (interrupts 0 - 15) and Private
 * Peripheral Interrupt (PPI) (interrupts 16 - 32), is pending is queried on a
 * per CPU basis. This is done by calling this API when executing on that CPU.
 *
 * \param       int_id
 *              The interrupt identifier. All interrupts are valid, 0 - 255
 *
 * \retval      ALT_E_TRUE      The specified interrupt is pending or active
 *                              and pending.
 * \retval      ALT_E_FALSE     The specified interrupt is not pending and is
 *                              not active and pending.
 * \retval      ALT_E_BAD_ARG   The given interrupt identifier is invalid.
 */
ALT_STATUS_CODE alt_int_dist_is_pending(ALT_INT_INTERRUPT_t int_id);

/*!
 * Returns \b true if the specified interrupt is active or active and pending,
 * otherwise returns \b false.
 *
 * For Software Generated Interrupts (SGI) (interrupts 0 - 15) and Private
 * Peripheral Interrupt (PPI) (interrupts 16 - 32), is active is queried on a
 * per CPU basis. This is done by calling this API when executing on that CPU.
 *
 * \param       int_id
 *              The interrupt identifier. All interrupts are valid, 0 - 255
 *
 * \retval      ALT_E_TRUE      The specified interrupt is active or active
 *                              and pending.
 * \retval      ALT_E_FALSE     The specified interrupt is not active and is
 *                              not active and pending.
 * \retval      ALT_E_BAD_ARG   The given interrupt identifier is invalid.
 */
ALT_STATUS_CODE alt_int_dist_is_active(ALT_INT_INTERRUPT_t int_id);


/*!
 * Get the priority field value of the specified interrupt.
 *
 * Higher priority corresponds to a lower priority field value.
 *
 * For Software Generated Interrupts (SGI) (interrupts 0 - 15) and Private
 * Peripheral Interrupt (PPI) (interrupts 16 - 32), priority is queried on a
 * per CPU basis. This is done by calling this API when executing on that CPU.
 *
 * \param       int_id
 *              The interrupt identifier. All interrupts are valid, 0 - 255
 *
 * \param       priority
 *              [out] Pointer to an output parameter that contains the
 *              interrupt priority.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The given interrupt identifier is invalid.
 */
ALT_STATUS_CODE alt_int_dist_priority_get(ALT_INT_INTERRUPT_t int_id,
                                          uint32_t * priority);

/*!
 * Sets the priority field value of the specified interrupt.
 *
 * Higher priority corresponds to a lower priority field value.
 *
 * For Software Generated Interrupts (SGI) (interrupts 0 - 15) and Private
 * Peripheral Interrupt (PPI) (interrupts 16 - 32), priority is set on a per
 * CPU basis. This is done by calling this API when executing on that CPU.
 *
 * \param       int_id
 *              The interrupt identifier. All interrupts are valid, 0 - 255
 *
 * \param       priority
 *              The interrupt priority. Valid values are 0 - 255.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The given interrupt identifier and / or
 *                              priority value is invalid.
 */
ALT_STATUS_CODE alt_int_dist_priority_set(ALT_INT_INTERRUPT_t int_id, 
                                          uint32_t priority);


/*!
 * Get the processor target list for the specified interrupt.
 *
 * For Software Generated Interrupts (SGI) (interrupts 0 - 15) and Private
 * Peripheral Interrupt (PPI) (interrupts 16 - 32), get target will return a
 * set corresponding to the current CPU.
 *
 * \param       int_id
 *              The interrupt identifier. All interrupts are valid, 0 - 255
 *
 * \param       target
 *              [out] Pointer to an output parameter that contains the set of
 *              CPU(s) servicing the interrupt.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The given interrupt identifier is invalid.
 */
ALT_STATUS_CODE alt_int_dist_target_get(ALT_INT_INTERRUPT_t int_id,
                                        alt_int_cpu_target_t * target);

/*!
 * Sets the the list of processors that the interrupt is sent to if it is
 * asserted. This function is only valid for Shared Peripheral Interrupts
 * (SPI).
 *
 * \param       int_id
 *              The interrupt identifier. Only SPI are valid, 32 - 255
 *
 * \param       target
 *              The set of CPUs which will handle the interrupt.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The given interrupt identifier and / or target
 *                              list is invalid.
 */
ALT_STATUS_CODE alt_int_dist_target_set(ALT_INT_INTERRUPT_t int_id,
                                        alt_int_cpu_target_t target);


/*!
 * Get the configured trigger type for the specified Private Peripheral
 * Interrupt (PPI) or Shared Peripheral Interrupt (SPI).
 *
 * For PPI (interrupts 16 - 32), triggering is queried on a per CPU basis.
 * This is done by calling this API when executing on that CPU.
 *
 * \param       int_id
 *              The interrupt identifier. Only PPI and SPI are valid,
 *              16 - 255
 *
 * \param       trigger_type
 *              [out] Pointer to an output parameter that contains the trigger
 *              type of the interrupt.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The given interrupt identifier is invalid.
 */
ALT_STATUS_CODE alt_int_dist_trigger_get(ALT_INT_INTERRUPT_t int_id,
                                         ALT_INT_TRIGGER_t * trigger_type);

/*!
 * Sets the trigger type for the specified interrupt Private Peripheral
 * Interrupt (PPI) or Shared Peripheral Interrupt (SPI).
 *
 * For PPI (interrupts 16 - 32), triggering is set on a per CPU basis. This is
 * done by calling this API when executing on that CPU.
 *
 * \param       int_id
 *              The interrupt identifier. Only PPI and SPI are valid,
 *              16 - 255
 *
 * \param       trigger_type
 *              A parameter value which specifies the type of triggering to
 *              configure the given interrupt as.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The given interrupt identifier and / or other
 *                              configuration is invalid.
 */
ALT_STATUS_CODE alt_int_dist_trigger_set(ALT_INT_INTERRUPT_t int_id,
                                         ALT_INT_TRIGGER_t trigger_type);

/*!
 * @}
 */

/*!
 * \addtogroup INT_LL_SGI Software Generated Interrupts [Secure]
 *
 * Software Generated Interrupts (SGI)
 *
 * An SGI can specify multiple processors in its target list. The target list
 * may be further refined by a target filter that designates:
 *  * interrupting only the processor that initiates the SGI
 *  * interrupting all processors other than the one that initiates the SGI
 *  * interrupting the processor initiating the SGI
 * 
 * SGIs from different processors use the same interrupt IDs. Therefore, any
 * target processor can receive SGIs with the same interrupt ID from different
 * processors. On the CPU interface of the target processor, the pending
 * status of each of these interrupts is independent of the pending status of
 * any other interrupt, but only one interrupt with this ID can be active.
 * Reading the Interrupt Controller CPU Interrupt Acknowledge Register
 * (ICCIAR) for an SGI returns both the interrupt ID and the CPU ID of the
 * processor that generated the interrupt, uniquely identifying the interrupt.
 * In a multiprocessor implementation, the interrupt priority of each SGI 
 * interrupt ID is defined independently for each CPU interface. This means
 * that, for each CPU interface, all SGIs with a particular interrupt ID that
 * are pending on that interface have the same priority and must be handled
 * serially.
 *
 * @{
 */

/*!
 * Triggers the generation of a Software Generated Interrupts (SGI).
 *
 * \param       int_id
 *              The interrupt identifier to send. Only SGI are valid,
 *              0 - 15.
 *
 * \param       target_filter - see ALT_INT_SGI_TARGET_t for details
 *
 * \param       target_list
 *              The set of CPUs which will receive the interrupt.
 *
 * \param       secure_only
 *              If \b true, then send the SGI to the target processor(s) only if
 *              the SGI is configured as Secure on that interface. If \b false,
 *              then send the SGI to the target processor(s) only if the SGI is
 *              configured as Non-Secure on that interface.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The given interrupt identifier, target filter,
 *                              and / or target list is invalid.
 */
ALT_STATUS_CODE alt_int_sgi_trigger(ALT_INT_INTERRUPT_t int_id,
                                    ALT_INT_SGI_TARGET_t target_filter,
                                    alt_int_cpu_target_t target_list,
                                    bool secure_only);

/*!
 * @}
 */

/*!
 * \addtogroup INT_LL_CPU Interrupt Controller CPU Interface [Secure]
 *
 * This group of APIs provide access, configuration, and control of the
 * individual CPU interfaces.
 *
 * @{
 */

/*!
 * Performs the initialization steps needed by the interrupt controller CPU
 * interface. This should be the first CPU API call made when using the CPU
 * interface.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_int_cpu_init(void);

/*!
 * Performs the uninitialization steps needed by the interrupt controller CPU
 * interface.
 */
ALT_STATUS_CODE alt_int_cpu_uninit(void);

/*!
 * Causes the CPU to monitor both irq and fiq interrupt signals 
 * and forwards pending interrupts to the processors. In EL3, this 
 * will enable secure interrupts.
 */
ALT_STATUS_CODE alt_int_cpu_enable(void);

/*!
 * Causes the CPU to monitor irq interrupt signals and forwards 
 * pending interrupts to the processors. In EL3, this will enable 
 * secure interrupts.
 */
ALT_STATUS_CODE alt_int_cpu_enable_irq(void);

/*!
 * Causes the CPU to monitor fiq interrupt signals and forwards 
 * pending interrupts to the processors. In EL3, this will enable 
 * secure interrupts.
 */
ALT_STATUS_CODE alt_int_cpu_enable_fiq(void);

/*!
 * Causes the CPU interface to ignore both irq and fiq interrupts.
 */
void alt_int_cpu_disable(void);

/*!
 * Causes the CPU interface to ignore irq interrupts.
 */
void alt_int_cpu_disable_irq(void);

/*!
 * Causes the CPU interface to ignore fiq interrupts.
 */
 void alt_int_cpu_disable_fiq(void);


/*!
 * Gets the interrupt priority mask for the current CPU. Only
 * interrupts with a higher priority than the priority mask can be forwarded
 * to the CPU. In EL3, this will only apply to secure interrupts
 *
 * \returns     The interrupt priority mask used to determine interrupt
 *              preemption.
 */
uint32_t alt_int_cpu_priority_mask_get(void);

/*!
 * Sets the interrupt priority mask for the current CPU. Only
 * interrupts with a higher priority than the priority mask can be forwarded
 * to the CPU. In EL3, this will only apply to secure interrupts
 *
 * \param       priority_mask
 *              The interrupt priority mask is the group priority needed to
 *              instruct the GIC to preempt lower priority interrupt. The
 *              valid range for this value is 0 - 255.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The given priority mask is invalid.
 */
ALT_STATUS_CODE alt_int_cpu_priority_mask_set(uint32_t priority_mask);

/*! 
 * Returns the binary point for the given CPU. In EL3, this will 
 * refer only to the secure interrupts.
 * See alt_int_cpu_binary_point_set for details
 *
 * \returns     The configured binary point value.
 */
uint32_t alt_int_cpu_binary_point_get(void);

/*!
 * Sets the binary point value for the current CPU. In EL3, this will 
 * refer only to the secure interrupts.
 *
 * This set the number of least-significant-bits in the priority to ignore.
 * This is useful in IRQ implementations that support preemption to split
 * the priority into subgroups. However, our implementation does not use this
 *
 * \param       binary_point
 *              The binary point to use. The valid range for the value is
 *              0 - 7.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The given binary point value is invalid.
 */
ALT_STATUS_CODE alt_int_cpu_binary_point_set(uint32_t binary_point);

/*!
 * @}
 */

/*!
 * \addtogroup INT_LL_ISR Interrupt Service Routine [Secure]
 *
 * This group of APIs performs Interrupt Service Routine (ISR) related
 * functions.
 *
 * @{
 */

/*!
 * Registers a callback for the specified secure interrupt for the CPU
 * interface.
 *
 * This API only registers a callback for secure interrupts. If a callback is
 * registered for a non-secure interrupt, the behaviour is undefined.
 *
 * \param       int_id
 *              The interrupt identifier to register the handler for. All
 *              defined interrupts are valid, 0 - 255
 *
 * \param       callback
 *              The callback to use when the given interrupt is issued.
 *
 * \param       context
 *              The callback context to use for the above callback. When the
 *              callback is issued, this parameter will be provided to the
 *              callback.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_int_isr_register(ALT_INT_INTERRUPT_t int_id,
                                     alt_int_callback_t callback,
                                     void * context);

/*!
 * Unregisters the callback for the specified secure interrupt for the CPU
 * interface.
 *
 * This API only unregisters a callback for secure interrupts. If a callback
 * is unregistered for a non-secure interrupt, the behaviour is undefined.
 *
 * \param       int_id
 *              The interrupt identifier to register the handler for. All
 *              defined interrupts are valid, 0 - 255
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_int_isr_unregister(ALT_INT_INTERRUPT_t int_id);

/*!
 * @}
 */

/*!
 * \addtogroup INT_LL_UTIL Interrupt Utility Functions [Secure]
 *
 * This group of APIs provide utilities to query the system properties.
 *
 * @{
 */

/*!
 * Gets the number of CPUs in the system.
 *
 * \returns     The CPU count of the system.
 */
uint32_t alt_int_util_cpu_count(void);

/*!
 * Gets the number of supported interrupts in the system.
 *
 * \returns     The supported interrupt count of the system.
 */
uint32_t alt_int_util_int_count(void);


/*!
 * Gets the CPU identifier of the current CPU.
 *
 * \returns     The ID of the current CPUs 
 */

uint32_t    alt_int_util_get_current_cpu(void);


/*!
 * Gets the interrupt mask for the current CPU.
 *
 * \returns     1 << alt_int_util_get_current_cpu()
 */
alt_int_cpu_target_t alt_int_util_cpu_current(void);

/*!
 * Sets the vector table for a given CPU. Note that doing this will cause
 * the alt_int_isr_register callbacks to cease functioning
 *
 * \param   vector_table
 *          The address of the new vector table. See alt_interruptXX.S for
 *          an example of the format for the vector table
 */
void set_vector_table(void *vector_table);

/*!
 * @}
 */

 
 #ifdef __arm__ /* 32 bit */

/*!
 * Set the Stack to be used by the irq exception
 */
 void alt_int_fixup_irq_stack(uint32_t stack);
/*!
 * Set the Stack to be used by the irq exception
 */
 void alt_int_fixup_fiq_stack(uint32_t stack);
/*!
 * Set the Stack to be used by the irq exception
 */
 void alt_int_fixup_abt_stack(uint32_t stack);
/*!
 * Set the Stack to be used by the irq exception
 */
 void alt_int_fixup_und_stack(uint32_t stack);
/*!
 * Set the Stack to be used by the irq exception
 */
 void alt_int_set_vector(uint32_t vector);
 #endif
 
 
 #ifdef EXECUTION_LEVEL3
/*!
 * \addtogroup Trustzone (EL3) Specific Functions
  * @{
 */
 
 /*!
 * This function is only available in EL3. It enables the nonsecure 
 * interrupts to be forwarded to the CPU interfaces.
 *
 * The interrupt controller monitors all non-secure interrupt signals and
 * forwards pending interrupts to the processors.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_int_global_enable_ns(void);

/*!
 * Disables all non-secure interrupt forwarding from the interrupt controller to
 * the CPU interfaces using the secure interface.
 *
 * The interrupt controller ignores all non-secure interrupt signals and does
 * not forward pending interrupts to the processors.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_int_global_disable_ns(void);

/*!
 * In EL3, this will enable both secure and non-secure interrupts to be
 * forwarded from the distributor to the CPU interfaces. This function should
 * only be used in EL3.
 *
 * The interrupt controller monitors all secure and non-secure interrupt
 * signals and forwards pending interrupts to the processors.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_int_global_enable_all(void);

/*!
 * In EL3, this will disable both secure and non-secure interrupts to be
 * forwarded from the distributor to the CPU interfaces. This function should
 * only be used in EL3.
 *
 * The interrupt controller ignores all secure and non-secure interrupt
 * signals and does not forward pending interrupts to the processors.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_int_global_disable_all(void);

/*!
 * This function configures an interrupt as Secure access only (default state)
 *
 * \param       int_id
 *              The interrupt identifier. All interrupts are valid, 0 - 255
 *              See alt_int_device.h for interrupt numbers.
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The given interrupt identifier is invalid.
 */
ALT_STATUS_CODE alt_int_dist_secure_enable(ALT_INT_INTERRUPT_t int_id);

/*!
 * This function configures an interrupt to be non-secure accessible
 *
 * \param       int_id
 *              The interrupt identifier. All interrupts are valid, 0 - 255
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The given interrupt identifier is invalid.
 */
ALT_STATUS_CODE alt_int_dist_secure_disable(ALT_INT_INTERRUPT_t int_id);

/*!
 * Returns \b true if the specified interrupt is accessible from non-secure 
 * domains, and \b false otherwise.
 *
 * \param       int_id
 *              The interrupt identifier. All interrupts are valid, 0 - 255
 *
 * \retval      ALT_E_TRUE      Interrupt is Secure.
 * \retval      ALT_E_FALSE     Interrupt is Non-Secure.
 * \retval      ALT_E_BAD_ARG   The given interrupt identifier is invalid.
 */
ALT_STATUS_CODE  alt_int_dist_is_secure(ALT_INT_INTERRUPT_t int_id);

/*!
 * In EL3, this will cause the CPU to monitor non-secure 
 * interrupt signals and forwards pending interrupts to calling processor.
 * This function should not be called in EL0-2
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_int_cpu_enable_ns(void);

/*!
 * In EL3, this will cause the CPU to ignore non-secure
 * interrupt signals.
 * This function should not be called in EL0-2
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_int_cpu_disable_ns(void);

/*!
 * In EL3, this will cause the CPU to monitor all interrupt signals 
 * and forwards pending interrupts to calling processor.
 * This function should not be called in EL0-2
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_int_cpu_enable_all(void);

/*!
 * In EL3, this will cause the CPU to ignore all interrupt signals.
 * This function should not be called in EL0-2
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_int_cpu_disable_all(void);


/*!
 * Gets the configuration of the secure signaling interface between the GIC 
 * and the CPU. This can only be used while in secure mode (EL3)
 *
 * Secure acknowledgement for all interrupts
 * -----------------------------------------
 * When in the secure mode, modifying the non-secure states can be seen as
 * undesirable. One area which this may be problematic is the secure read of
 * the Interrupt Controller CPU Interrupt Acknowledgement Register (ICCIAR)
 * when the next pending interrupt is a non-secure. To prevent this scenario,
 * the CPU can be configured to return a special interrupt ID (1022) and leave
 * the non-secure interrupt in the pending state.
 *
 * \param       use_secure_binary_point
 *              [out] Pointer to an output parameter that contains whether the
 *              Secure Binary Point Register is used for both secure and
 *              non-secure interrupts.  
 *              If \b true then use
 *                  Secure Binary Point Register is used for both 
 *                      Secure and Non-secure interrupts. 
 *              If \b false then use:
 *                   Secure Binary Point Register for secure interrupts 
 *                   Non-secure Binary Point Register for non-secure interrupts.
 *
 * \param       use_FIQ_for_secure_interrupts
 *              [out] Pointer to an output parameter that upon return will contain 
 *              whether Secure interrupts use the FIQ signal or not.  
 *              If \b true:
 *                  The FIQ signal is used to signal Secure interrupts
 *              If \b false:
 *                  The IRQ signal is used to signal Secure interrupts
 *              In either case, non-secure interrupts will use IRQ
 *
 * \param       allow_secure_ack_all_interrupts
 *              [out] Pointer to an output parameter that upon return will contain
 *              whether or not a Secure acknowledgement of a Non-Secure interrupt is 
 *              completed or not.  
 *              If \b true:
 *                  A Secure acknowledgement of the non-secure interrupt
 *                  is completed and the Interrupt ID of the Non-secure
 *                  interrupt is returned. 
 *              If \b false:
 *                  A Secure acknowledgement of the interrupt is not completed 
 *                  and the Interrupt ID of 1022
 *              is returned.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_int_cpu_config_get(bool* use_secure_binary_point,
                                       bool* use_FIQ_for_secure_interrupts,
                                       bool* allow_secure_ack_all_interrupts);

/*!
 * Sets the configuration of the secure signaling interface between the GIC and the
 * CPU. This can only be used while in secure mode (EL3)
 *
 * Secure Binary Point for Preemption
 * ----------------------------------
 * The binary point is the point at which the priority value fields split 
 * into two parts, the group priority field and the subpriority field. The 
 * group priority field is used to determine interrupt preemption.
 *
 * On systems where secure and non-secure interrupts coexist, preemption can
 * be determined by using the secure binary point for secure interrupts and
 * the non-secure binary point for non-secure interrupts, or by using the 
 * secure binary point for both secure and non-secure interrupts.
 *
 * FIQ for Secure Interrupts
 * -------------------------
 * FIQ or Fast Interrupt reQqest is a special interrupt signal specific to ARM
 * CPUs. The CPU supports two interrupt signals for interrupts, the IRQ and
 * FIQ. The FIQ is a separate interrupt signal which has lower latency and
 * different preemption characteristics than regular interrupts.
 *
 * Secure acknowledgement for all interrupts
 * -----------------------------------------
 * When in the secure mode, modifying the non-secure states can be seen as
 * undesirable. One area which this may be problematic is the secure read of
 * the Interrupt Controller CPU Interrupt Acknowledgement Register (ICCIAR)
 * when the next pending interrupt is a non-secure. To prevent this scenario,
 * the CPU can be configured to return a special interrupt ID (1022) and leave
 * the non-secure interrupt in the pending state.
 *
 * \param       use_secure_binary_point
 *              If \b true:
 *                  Use the Secure Binary Point Register for both
 *                  secure and non-secure interrupts. 
 *              If \b false:
 *                  Use Secure Binary Point Register for secure interrupts and 
 *                  Non-Secure Binary Point Register for non-secure interrupts.
 *
 * \param       use_FIQ_for_secure_interrupts
 *              If \b true:
 *                  Signal secure interrupts using the FIQ signal
 *              If \b false: 
 *                  Signal secure interrupts using the IRQ signal.
 *
 * \param       allow_secure_ack_all_interrupts
 *              Controls whether a secure acknowledgement of an interrupt, when
 *              the highest priority pending interrupt is non-secure, causes the
 *              CPU interface to acknowledge the interrupt. If \b true then a
 *              secure acknowledgement of the interrupt is not completed and the
 *              Interrupt ID of the Non-secure interrupt is returned. If \b
 *              false then a secure acknowledgement of the interrupt is not
 *              completed and the Interrupt ID of 1022 is returned.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_int_cpu_config_set(bool use_secure_binary_point,
                                       bool use_FIQ_for_secure_interrupts,
                                       bool allow_secure_ack_all_interrupts);

/*!
 * In EL3, this function returns the binary point value used for non-secure 
 * interrupts for the current CPU. For details on binary point, see 
 * alt_int_cpu_binary_point_set
 * 
 * \returns     The configured binary point value.
 */
uint32_t alt_int_cpu_binary_point_get_ns(void);

/*!
 * In EL3, this function sets the binary point value used for non-secure 
 * interrupts for the current CPU. For details on binary point, see 
 * alt_int_cpu_binary_point_set
 *
 * \param       binary_point
 *              The binary point to use. The valid range for the value is
 *              0 - 7.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The given binary point value is invalid.
 */
ALT_STATUS_CODE alt_int_cpu_binary_point_set_ns(uint32_t binary_point);

/*
 * Set the stack for el0 (userspace)
 * Can be called from EL1, EL2, or EL3
 */
void alt_int_set_stack_el0(uint64_t stack_ptr);    
 
/*
 * Set the stack for el1 (kernel space)
 * Must be called from EL2/3
 */
void alt_int_set_stack_el1(uint64_t stack_ptr);

/*
 * Set the stack for el2 (hypervisor)
 * Must be called from EL3
 */
void alt_int_set_stack_el2(uint64_t stack_ptr);

/*
 * Sets the vector table for el1 64 bit. Must be called 
 * from EL1/2/3. For example of the format for this vector 
 * table, see alt_interrupt_vector in alt_interrupt64.S
 */
void alt_int_set_vector_el1(uint64_t vector);

/*
 * Sets the vector table for el2. Must be called from EL2/3.
 * For example of the format for this vector 
 * table, see alt_interrupt_vector in alt_interrupt64.S
 */
extern void alt_int_set_vector_el2(uint64_t vector);
/*
 * Sets the vector table for el3. Must be called from EL3
 * For example of the format for this vector 
 * table, see alt_interrupt_vector in alt_interrupt64.S
 */
extern void alt_int_set_vector_el3(uint64_t vector);

/*!
 * @}
 */
#endif 

/*!
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif /* __ALT_INT_H__ */
