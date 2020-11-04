/******************************************************************************
*
* Copyright 2013 Altera Corporation. All Rights Reserved.
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
 * $Id: //acds/rel/20.1/embedded/ip/hps/altera_hps/hwlib/include/alt_interrupt_common.h#1 $
 */

#ifndef __ALT_INT_COMMON_H__
#define __ALT_INT_COMMON_H__

#include <stdbool.h>
#include <stddef.h>
#include "hwlib.h"
#include "alt_int_device.h"

#ifdef __cplusplus
extern "C"
{
#endif

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
    /*!
     * Edge triggered interrupt. This applies to Private Peripheral Interrupts
     * (PPI) and Shared Peripheral Interrupts (SPI) only, with interrupt IDs
     * 16 - 1019.
     */
    ALT_INT_TRIGGER_EDGE,

    /*!
     * Level triggered interrupt. This applies to Private Peripheral
     * Interrupts (PPI) and Shared Peripheral Interrupts (SPI) only, with
     * interrupt IDs 16 - 1019.
     */
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
}
ALT_INT_TRIGGER_t;

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
}
ALT_INT_SGI_TARGET_t;

/*!
 * Extracts the CPUID field from the ICCIAR register.
 */
#define ALT_INT_ICCIAR_CPUID_GET(icciar)    ((icciar >> 10) & 0x7)

/*!
 * Extracts the ACKINTID field from the ICCIAR register.
 */
#define ALT_INT_ICCIAR_ACKINTID_GET(icciar) (icciar & 0x3FF)

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

#ifdef __cplusplus
}
#endif

#endif /* __ALT_INT_COMMON_H__ */
