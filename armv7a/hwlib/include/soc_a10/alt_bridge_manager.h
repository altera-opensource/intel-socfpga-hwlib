/******************************************************************************
*
* Copyright 2015 Altera Corporation. All Rights Reserved.
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
 *  Altera - Arria 10 SoC FPGA FPGA/HPS Bridge Management
 */

/*
 * $Id: //acds/rel/20.1/embedded/ip/hps/altera_hps/hwlib/include/soc_a10/alt_bridge_manager.h#1 $
 */

#ifndef __ALT_BRIDGE_MANAGER_H__
#define __ALT_BRIDGE_MANAGER_H__

#ifdef __cplusplus
extern "C"
{
#endif  /* __cplusplus */

#include "hwlib.h"

/******************************************************************************/
/*! \addtogroup ALT_BRIDGE AXI Bridge Manager
 *
 * The functions in this group manage access, configuration, and control of the
 * AXI bridges between the FPGA and HPS.
 * 
 * @{
 */

/******************************************************************************/
/*!
 * This type definition enumerates the AXI bridge interfaces between the FPGA
 * and HPS.
 */
typedef enum ALT_BRIDGE_e
{
    ALT_BRIDGE_F2H,             /*!< FPGA-to-HPS AXI bridge providing a
                                 *   high-performance, statically configurable
                                 *   width interface that gives the FPGA the
                                 *   ability to:
                                 *   * master transactions to slaves in the HPS
                                 *   * have full visibility into the HPS address space
                                 *   * access the coherent memory interface (ACP)
                                 *
                                 *   The width (32/64/128 bits) of this bridge
                                 *   is statically configurable at design time
                                 *   using \e Quartus.
                                 */
    ALT_BRIDGE_H2F,             /*!< HPS-to-FPGA AXI bridge providing a
                                 *   statically configurable width,
                                 *   high-performance master interface to the
                                 *   FPGA fabric. The bridge provides a 1GB
                                 *   address space and gives any master in the
                                 *   HPS system access to logic, peripherals,
                                 *   and memory implemented in the FPGA.
                                 */
    ALT_BRIDGE_LWH2F,            /*!< Lightweight HPS-to-FPGA AXI bridge
                                 *   providing a secondary, fixed-width, smaller
                                 *   address space, lower-performance master
                                 *   interface to the FPGA fabric. The bridge
                                 *   provides a 2MB address space and gives any
                                 *   master in the HPS access to logic,
                                 *   peripherals, and memory implemented in the
                                 *   FPGA fabric. The bridge master exposed to
                                 *   the FPGA fabric has a fixed data width of
                                 *   32 bits.
                                 *
                                 *   The bridge provides clock crossing logic to
                                 *   allow the logic in the FPGA to run
                                 *   asynchronous to the HPS. The bridge
                                 *   simplifies the process of connecting the
                                 *   HPS to soft logic. Soft logic can even be
                                 *   designed to support only a subset of the
                                 *   full AXI protocol that the bridge
                                 *   supports. Use the lightweight HPS-to-FPGA
                                 *   bridge for high-latency, low-bandwidth
                                 *   traffic, such as memory-mapped register
                                 *   accesses of FPGA peripherals. This approach
                                 *   diverts traffic from the high-performance
                                 *   HPS-to-FPGA bridge, which can improve
                                 *   overall performance.
                                 */
    ALT_BRIDGE_F2S              /*!< FPGA-to-SDRAM bridge providing the FPGA
                                 *   access to the SDRAM normally associated
                                 *   with the HPS. Enabling and disabling this
                                 *   bridge affects all ports on the SDRAM
                                 *   front end connecting to the FPGA.
                                 *
                                 *   There are precautions necessary when
                                 *   enabling this bridge. There should be no
                                 *   SDRAM access within the MPU while the
                                 *   bridge is being initialized. The behaviour
                                 *   when there are SDRAM IO is undefined and
                                 *   will probably hang / reset the MPU. Thus
                                 *   it is advisible to quiesce interrupts,
                                 *   disable the MMU, wait for all DMA to
                                 *   complete, pause any new DMA operations,
                                 *   etc. There no precaution for uninitalizing
                                 *   this bridge.
                                 *
                                 *   The restriction on MMU may be lifted in a
                                 *   future release.
                                 */
} ALT_BRIDGE_t;

/******************************************************************************/
/*!
 * Bridge status function to determine whether the
 * FPGA is ready to begin transactions across the bridge interface.
 *
 * Any return value other than ALT_E_SUCCESS will be interpreted by the
 * alt_bridge_init() bridge initialization function as an indication that the
 * FPGA is not ready to commence bridge interface transactions.
 *
 * \param       bridge
 *              The bridge interface to check for readiness.
 *
 * \retval      ALT_E_SUCCESS   The FPGA is ready to commence bridge interface 
 *                              transactions.
 * \retval      ALT_E_ERROR     An error has occurred. The FPGA is not ready to
 *                              commence bridge interface transactions.
 * \retval      ALT_E_TMO       The FPGA failed to signal a ready to commence
 *                              bridge interface transactions indication before
 *                              the response timeout period expired.
 */
ALT_STATUS_CODE alt_bridge_fpga_is_ready(ALT_BRIDGE_t bridge);

/******************************************************************************/
/*!
 * Initialize the bridge for bus transactions by bringing up the interface in a
 * safe, controlled sequence.
 *
 * The following actions are performed as part of the process of initializing
 * the bridge interface for transactions:
 *
 * * Sets and holds bridge interface in reset.
 * * Ensures that the bridge interface is ready by asserting that:
 *   - FPGA is powered and configured (i.e. in USER mode).
 *   - Bridge interface clock is ready and stable.
 *   - FPGA soft IP is ready for transactions across the bridge interface.
 * * Releases bridge interface from reset.
 *
 * NOTE: The F2S bridge reset has not yet been tested on A10
 *
 * \param       bridge
 *              The bridge interface to initialize.
 *
 * retval      ALT_E_SUCCESS   The operation was succesful.
 * retval      ALT_E_TMO     The operation timed out.
 * retval      ALT_E_BAD_ARG  Invalid bridge operation specified.
 */
ALT_STATUS_CODE alt_bridge_init(ALT_BRIDGE_t bridge);

/******************************************************************************/
/*!
 * Uninitialize the bridge by tearing down the interface in a safe and
 * controlled sequence.
 *
 * The process of taking down the bridge interface entails:
 * * Processor waits for the completion of outstanding transactions on the AXI
 *   bridge. Note, that HPS has no mechanism to track outstanding AXI transactions;
 *   this needs to be provided by the customer design.
 * * Places and holds the bridge interface in reset.
 *
 * NOTE: The F2S bridge reset has not yet been tested on A10
 *
 * \param       bridge
 *              The bridge interface to uninitialize.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_BAD_ARG   Invalid bridge parameter.
 */
ALT_STATUS_CODE alt_bridge_uninit(ALT_BRIDGE_t bridge);

/*! @} */

#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_BRIDGE_MANAGER_H__ */
