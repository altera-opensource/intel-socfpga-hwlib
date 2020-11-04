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
 *  Altera - SoC FPGA System Manager
 */

/*
 * $Id: //acds/main/embedded/ip/hps/armv8/hwlib/include/soc_s10/alt_system_manager.h#1 $
 */

#ifndef __ALT_SYSTEM_MANAGER_H__
#define __ALT_SYSTEM_MANAGER_H__

#ifdef __cplusplus
extern "C"
{
#endif  /* __cplusplus */

#include "hwlib.h"

/******************************************************************************/
/*! \addtogroup SYS_MGR System Manager
 *
 * The System Manager API defines functions for control of system operation and
 * for other modules requiring external control as part of system integration.
 * 
 * The major functional APIs include:
 * * HPS I/O configuration and pin muxing
 * * External control of other modules
 * * Control and status of ECC
 * * Fault injection for ECC and parity errors.
 * @{
 */

/******************************************************************************/
/*! \addtogroup SYS_MGR_FPGA_INTERFACE FPGA Interface Group
 *
 * These functions provide enable/disable control and operational status of the
 * signal interfaces between the FPGA and HPS.  Selective enabling/disabling of
 * interfaces may be required under the following scenarios:
 * * Interfaces that are associated with an HPS module but that are not disabled
 *   when the HPS module associated with the interface is put into reset.
 * * An HPS module accepts signals from the FPGA and those signals might
 *   otherwise interfere with the normal operation of the HPS module.
 * @{
 */

/******************************************************************************/
/*!
 * This type definition enumerates the FPGA to HPS signal interfaces controlled
 * by the functions in this API group.
 */
typedef enum ALT_FPGA_INTERFACE_e
{
    ALT_FPGA_INTERFACE_CTMTRIGGER,  /*!< Used to disable the FPGA Fabric from sending
                                     *   triggers to HPS debug logic.  Note that this
                                     *   doesn't prevent the HPS debug logic from sending 
                                     *   triggers to the FPGA Fabric.
                                     */                     
    ALT_FPGA_INTERFACE_STMEVENT,    /*!< Used to disable the STM event interface. This 
                                     * interface allows logic in the FPGA fabric to trigger 
                                     * events to the STM debug module in the HPS.
                                     */
    ALT_FPGA_INTERFACE_DBGAPB,      /*!< Used to disable the debug APB interface. This 
                                     * interface allows the HPS debug logic to communicate
                                     * with debug APB slaves in the FPGA fabric.
                                     */                
    ALT_FPGA_INTERFACE_TRACEOUT,    /*!< Gates the isolator of CoreSight.
                                     */
    ALT_FPGA_INTERFACE_TRACEIN,     /*!< Gates the isolator of TPIU.
                                     */                                     
    ALT_FPGA_INTERFACE_SPIM_1,      /*!< Used to disable signals from the FPGA fabric to
                                     * the SPI master modules that could potentially interfere
                                     * with their normal operation.  The array index corresponds 
                                     * to the SPI master module instance.
                                     */
    ALT_FPGA_INTERFACE_SPIM_0,      /*!< Used to disable signals from the FPGA fabric to
                                     * the SPI master modules that could potentially interfere
                                     * with their normal operation.  The array index corresponds 
                                     * to the SPI master module instance.
                                     */
    ALT_FPGA_INTERFACE_SDMMC,       /*!< Used to disable signals from the FPGA fabric to the 
                                     * SD/MMC controller module that could potentially interfere 
                                     * with its normal operation.
                                     */
    ALT_FPGA_INTERFACE_NAND,        /*!< Used to disable signals from the FPGA fabric to the 
                                     * NAND flash controller module that could potentially interfere 
                                     * with its normal operation.
                                     */
    ALT_FPGA_INTERFACE_EMAC_2_SWITCH, /*!< EMAC FPGA interface switch Enable
                                     */
    ALT_FPGA_INTERFACE_EMAC_2,       /*!< Used to disable signals from the FPGA fabric to the EMAC 
                                     * modules that could potentially interfere with their normal
                                     * operation. The array index corresponds to the EMAC module instance.
                                     */
    ALT_FPGA_INTERFACE_EMAC_1_SWITCH, /*!< EMAC FPGA interface switch Enable
                                     */
    ALT_FPGA_INTERFACE_EMAC_1,       /*!< Used to disable signals from the FPGA fabric to the EMAC 
                                     * modules that could potentially interfere with their normal
                                     * operation. The array index corresponds to the EMAC module instance.
                                     */    
    ALT_FPGA_INTERFACE_EMAC_0_SWITCH, /*!< EMAC FPGA interface switch Enable
                                     */
    ALT_FPGA_INTERFACE_EMAC_0       /*!< Used to disable signals from the FPGA fabric to the EMAC 
                                     * modules that could potentially interfere with their normal
                                     * operation. The array index corresponds to the EMAC module instance.
                                     */            
                                    
} ALT_FPGA_INTERFACE_t;

/******************************************************************************/
/*!
 * Disables the specified FPGA to HPS signal interface.
 *
 * Isolates and disables the designated FPGA/HPS signal interface. User is
 * responsible for determining that the interface is inactive before disabling
 * it.
 *
 * \param       intfc
 *              The interface to disable.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The \e intfc argument designates an invalid
 *                              FPGA/HPS signal interface.
 */
ALT_STATUS_CODE alt_fpga_interface_disable(ALT_FPGA_INTERFACE_t intfc);

/******************************************************************************/
/*!
 * Enables the specified FPGA to HPS signal interface.
 *
 * \param       intfc
 *              The interface to enable.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The \e intfc argument designates an invalid
 *                              FPGA/HPS signal interface.
 */
ALT_STATUS_CODE alt_fpga_interface_enable(ALT_FPGA_INTERFACE_t intfc);

/******************************************************************************/
/*!
 * Return whether the specified FPGA/HPS signal interface is enabled or not.
 *
 * \param       intfc
 *              The interface to enable.
 *
 * \retval      ALT_E_TRUE      The interface is enabled.
 * \retval      ALT_E_FALSE     The interface is not enabled.
 * \retval      ALT_E_BAD_ARG   The \e intfc argument designates an invalid
 *                              FPGA/HPS signal interface.
 */
ALT_STATUS_CODE alt_fpga_interface_is_enabled(ALT_FPGA_INTERFACE_t intfc);

/*! @} */

/*! @} */

#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SYS_MGR_H__ */
