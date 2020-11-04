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

/*
 * $Id: //acds/rel/20.1/embedded/ip/hps/altera_hps/hwlib/include/soc_a10/alt_ecc.h#1 $
 */

#ifndef __ALT_ECC_H__
#define __ALT_ECC_H__

#include "hwlib.h"

#ifdef __cplusplus
extern "C"
{
#endif  /* __cplusplus */

/*!
 * \addtogroup ALT_ECC_A10 Error Correcting Code (ECC) Management for Arria 10 SoC
 *
 * This module provides programmatic access and control of the Error-Correcting
 * Code (ECC) protection features for the embedded RAM blocks in HPS peripherals.
 *
 * ECC protection can be enabled or disabled for each of the following HPS
 * peripheral embedded RAM blocks:
 *  * L2 Cache Data RAM
 *  * On-chip RAM (OCRAM)
 *  * USB 2.0 OTG Controllers
 *  * Ethernet Media Access Controllers (EMAC)
 *  * NAND Flash Controller
 *  * Quad SPI (QSPI) Flash Controller
 *  * SD/MMC Controller
 *  * DMA Controller
 *
 * All ECC protected peripherals support detection of single bit, correctable
 * errors and double bit, non-correctable errors.
 *
 * With the exception of L2 cache data RAM, each of the ECC protected memories
 * generates single and double bit interrupts to the global interrupt controller
 * (GIC) and sets error status condition bits in the ECC Manager. The L2 cache
 * interrupt only generates single and double bit interrupts to the global
 * interrupt controller (GIC) - no error status conditions are set in the ECC
 * Manager.
 *
 * When ECC protection is enabled, RAM data should first be written before ever
 * being read. Otherwise the ECC syndrome encoding bits for each memory location
 * probably contain random uninitialized data that will result in spurious ECC
 * errors. A utility function is provided to guarantee proper initialization is
 * performed on a memory block once ECC is enabled.
 *
 * Fault injection capabilities for single, correctable errors and double,
 * non-correctable errors are provided for test purposes.
 *
 * @{
 */
    
/*!
 * This type enumerates the ECC protected RAM blocks embedded in HPS peripherals.
 */
typedef enum ALT_ECC_RAM_ENUM_e
{
    ALT_ECC_RAM_L2_DATA =  1,       /*!< L2 Cache Data RAM. */
    ALT_ECC_RAM_OCRAM   =  2,       /*!< On-chip RAM. */
    ALT_ECC_RAM_USB0    =  3,       /*!< USB0 Controller RAM. */
    ALT_ECC_RAM_USB1    =  4,       /*!< USB1 Controller RAM. */
    ALT_ECC_RAM_EMAC0   =  5,       /*!< EMAC0 Receive/Transmit Data FIFO Buffer RAMs. */
    ALT_ECC_RAM_EMAC1   =  6,       /*!< EMAC1 Receive/Transmit Data FIFO Buffer RAMs. */
    ALT_ECC_RAM_EMAC2   =  7,       /*!< EMAC2 Receive/Transmit Data FIFO Buffer RAMs. */
    ALT_ECC_RAM_DMA     =  8,       /*!< DMA Controller RAM. */
    ALT_ECC_RAM_NAND    =  9,       /*!< NAND Controller Buffer, Read FIFO, Write FIFO RAMs. */
    ALT_ECC_RAM_QSPI    = 10,       /*!< QSPI Controller RAM. */
    ALT_ECC_RAM_SDMMC   = 11        /*!< SD/MMC Controller Port A and Port B RAMs. */
} ALT_ECC_RAM_ENUM_t;

/*!
 * This type definition enumerates the ECC status conditions for each of the HPS
 * embedded RAM blocks.
 *
 * The enumerations serve as masks for the ECC status conditions monitored
 * in each of the individual embedded RAM blocks. If ECC protection is enabled on
 * the selected RAM block, then a mask bit corresponding to the type of ECC error
 * is set to 1 if the error occurs.
 *
 * Additionally, when any of these ECC error conditions occur, then an ECC interrupt
 * signal is asserted.
 *
 * Interrupt sources are cleared by calling alt_ecc_status_clear(). The ECC
 * interrupt sources are enabled by calling alt_ecc_status_int_enable(). This
 * causes the selected RAM block ECC status to contribute to the
 * \b ALT_INT_INTERRUPT_SERR_GLOBAL and \b ALT_INT_INTERRUPT_DERR_GLOBAL interrupt
 * generation.
 */

typedef enum ALT_ECC_STATUS_e
{
    ALT_ECC_STATUS_L2_BYTE_WR = 0x1,         /*!< L2 cache ECC protection bits are
                                              *   not valid because a cache write
                                              *   violated data width and/or
                                              *   alignment requirements.
                                              */
    ALT_ECC_STATUS_L2_SERR = 0x2,            /*!< L2 Cache
                                              *   ECC single bit, correctable error status.
                                              */
    ALT_ECC_STATUS_L2_DERR = 0x4,            /*!< L2 Cache
                                              *   ECC double bit, non-correctable error status.
                                              */

    ALT_ECC_STATUS_OCRAM_SERR = 0x1,         /*!< On-chip RAM
                                              *   ECC single bit, correctable error status.
                                              */
    ALT_ECC_STATUS_OCRAM_DERR = 0x2,         /*!< On-chip RAM
                                              *   ECC double bit, non-correctable error status.
                                              */

    ALT_ECC_STATUS_USB0_SERR = 0x1,          /*!< USB0 Controller
                                              *   ECC single bit, correctable error status.
                                              */
    ALT_ECC_STATUS_USB0_DERR = 0x2,          /*!< USB0 Controller
                                              *   ECC double bit, non-correctable error status.
                                              */

    ALT_ECC_STATUS_USB1_SERR = 0x1,          /*!< USB1 Controller
                                              *   ECC single bit, correctable error status.
                                              */
    ALT_ECC_STATUS_USB1_DERR = 0x2,          /*!< USB1 Controller
                                              *   ECC double bit, non-correctable error status.
                                              */

    ALT_ECC_STATUS_EMAC0_TX_FIFO_SERR = 0x1, /*!< EMAC0 Transmit Data FIFO Buffer
                                              *   ECC single bit, correctable error status.
                                              */
    ALT_ECC_STATUS_EMAC0_TX_FIFO_DERR = 0x2, /*!< EMAC0 Transmit Data FIFO Buffer
                                              *   ECC double bit, non-correctable error status.
                                              */

    ALT_ECC_STATUS_EMAC0_RX_FIFO_SERR = 0x4, /*!< EMAC0 Receive Data FIFO Buffer
                                              *   ECC single bit, correctable error status.
                                              */
    ALT_ECC_STATUS_EMAC0_RX_FIFO_DERR = 0x8, /*!< EMAC0 Receive Data FIFO Buffer
                                              *   ECC double bit, non-correctable error status.
                                              */
    ALT_ECC_STATUS_EMAC1_TX_FIFO_SERR = 0x1, /*!< EMAC1 Transmit Data FIFO Buffer
                                              *   ECC single bit, correctable error status.
                                              */
    ALT_ECC_STATUS_EMAC1_TX_FIFO_DERR = 0x2, /*!< EMAC1 Transmit Data FIFO Buffer
                                              *   ECC double bit, non-correctable error status.
                                              */

    ALT_ECC_STATUS_EMAC1_RX_FIFO_SERR = 0x4, /*!< EMAC1 Receive Data FIFO Buffer
                                              *   ECC single bit, correctable error status.
                                              */
    ALT_ECC_STATUS_EMAC1_RX_FIFO_DERR = 0x8, /*!< EMAC1 Receive Data FIFO Buffer
                                              *   ECC double bit, non-correctable error status.
                                              */

    ALT_ECC_STATUS_EMAC2_TX_FIFO_SERR = 0x1, /*!< EMAC2 Transmit Data FIFO Buffer
                                              *   ECC single bit, correctable error status.
                                              */
    ALT_ECC_STATUS_EMAC2_TX_FIFO_DERR = 0x2, /*!< EMAC2 Transmit Data FIFO Buffer
                                              *   ECC double bit, non-correctable error status.
                                              */

    ALT_ECC_STATUS_EMAC2_RX_FIFO_SERR = 0x4, /*!< EMAC2 Receive Data FIFO Buffer
                                              *   ECC single bit, correctable error status.
                                              */
    ALT_ECC_STATUS_EMAC2_RX_FIFO_DERR = 0x8, /*!< EMAC2 Receive Data FIFO Buffer
                                              *   ECC double bit, non-correctable error status.
                                              */

    ALT_ECC_STATUS_DMA_SERR = 0x1,           /*!< DMA Controller
                                              *   ECC single bit, correctable error status.
                                              */
    ALT_ECC_STATUS_DMA_DERR = 0x2,           /*!< DMA Controller
                                              *   ECC double bit, non-correctable error status.
                                              */
    ALT_ECC_STATUS_NAND_BUFFER_SERR = 0x1,   /*!< NAND Controller Buffer RAM
                                              *   ECC single bit, correctable error status.
                                              */
    ALT_ECC_STATUS_NAND_BUFFER_DERR = 0x2,   /*!< NAND Controller Buffer RAM
                                              *   ECC double bit, non-correctable error status.
                                              */

    ALT_ECC_STATUS_NAND_WR_FIFO_SERR = 0x4,  /*!< NAND Controller Write FIFO
                                              *   ECC single bit, correctable error status.
                                              */
    ALT_ECC_STATUS_NAND_WR_FIFO_DERR = 0x8,  /*!< NAND Controller Write FIFO
                                              *   ECC double bit, non-correctable error status.
                                              */

    ALT_ECC_STATUS_NAND_RD_FIFO_SERR = 0x10, /*!< NAND Controller Read FIFO
                                              *   ECC single bit, correctable error status.
                                              */
    ALT_ECC_STATUS_NAND_RD_FIFO_DERR = 0x20, /*!< NAND Controller Read FIFO
                                              *   ECC double bit, non-correctable error status.
                                              */

    ALT_ECC_STATUS_QSPI_SERR = 0x1,          /*!< QSPI Controller
                                              *   ECC single bit, correctable error status.
                                              */
    ALT_ECC_STATUS_QSPI_DERR = 0x2,          /*!< QSPI Controller
                                              *   ECC double bit, non-correctable error status.
                                              */

    ALT_ECC_STATUS_SDMMC_PORT_A_SERR = 0x1,  /*!< SD/MMC Controller Port A
                                              *   ECC single bit, correctable error status.
                                              */
    ALT_ECC_STATUS_SDMMC_PORT_A_DERR = 0x2,  /*!< SD/MMC Controller Port A
                                              *   ECC double bit, non-correctable error status.
                                              */

    ALT_ECC_STATUS_SDMMC_PORT_B_SERR = 0x4,  /*!< SD/MMC Controller Port B
                                              *   ECC single bit, correctable error status.
                                              */
    ALT_ECC_STATUS_SDMMC_PORT_B_DERR = 0x8   /*!< SD/MMC Controller Port B
                                              *   ECC double bit, non-correctable error status.
                                              */
} ALT_ECC_STATUS_t;

/*****/

/*!
 * Initializes the ECC subsystem. This API should be called before any other
 * ECC related operation.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Error status.
 */
ALT_STATUS_CODE alt_ecc_init(void);

/*!
 * Uninitializes the ECC subsystem. This API should be called after all other
 * ECC related operation.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Error status.
 */
ALT_STATUS_CODE alt_ecc_uninit(void);
    
/*!
 * Initializes and starts ECC protection for the specified embedded RAM block.
 *
 * This function performs any necessary initialization on the embedded RAM block
 * for the specified peripheral.  The decision on whether to enable ECC protection
 * for the peripheral embedded RAM block should be made before commencing normal
 * operational use of the peripheral. Ideally, ECC protection for a peripheral
 * should be enabled immediately after calling the peripheral's initialization
 * function and calling the alt_ecc_init() function designating the applicable
 * peripheral embedded RAM block.
 *
 * For example, the proper initialization sequence for enabling ECC for the QSPI
 * controller embedded RAM block is:
\verbatim
    alt_qspi_init();                    // Initialize the QSPI controller.
    alt_qspi_enable();                  // Enable the QSPI controller.
    alt_ecc_init();                     // Initialize the ECC subsystem.
    alt_ecc_start(ALT_ECC_RAM_QSPI);    // Bring up ECC protection for QSPI.
\endverbatim
 *
 * NOTE: The contents of the embedded RAM block are overwritten during
 * initialization. This should not normally present a problem as the presumption
 * is that this routine is called as part of the peripheral's initialization
 * sequence. As well, any special RAM configurations may be overwritten as part
 * of the initialization. Particularly, the L2 data RAM may alter the lockdown
 * settings.
 *
 * \param       ram_block
 *              The RAM block to initialize.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The \e ram_block argument is invalid.
 * \retval      ALT_E_TMO       Timeout initializing RAM block contents.
 */
ALT_STATUS_CODE alt_ecc_start(ALT_ECC_RAM_ENUM_t ram_block);

/*!
 * Stops and Uninitializes ECC protection for the specified embedded RAM block.
 *
 * \param       ram_block
 *              The RAM block to uninitialize.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The \e ram_block argument is invalid.
 */
ALT_STATUS_CODE alt_ecc_stop(ALT_ECC_RAM_ENUM_t ram_block);

/*!
 * Returns ALT_E_TRUE if the specified RAM block is enabled for ECC protection and
 * ALT_E_FALSE otherwise.
 *
 * \param       ram_block
 *              The RAM block to check for ECC protection enablement.
 *
 * \retval      ALT_E_TRUE      ECC protection is enabled.
 * \retval      ALT_E_FALSE     ECC protection is not enabled.
 * \retval      ALT_E_BAD_ARG   The \e ram_block argument is invalid.
 */
ALT_STATUS_CODE alt_ecc_is_enabled(ALT_ECC_RAM_ENUM_t ram_block);

/*****/

/*!
 * Returns an ECC error status bit mask for the specified RAM block.
 *
 * The returned bit mask reflects the ECC status conditions for the specified RAM
 * block.
 *
 * \param       ram_block
 *              The RAM block to return the ECC error status mask for.
 *
 * \param       status
 *              [out] An ECC status condition bit mask is returned indicating the
 *              single bit, correctable (SERR) and/or double bit, non-correctable
 *              error (DERR) conditions set for the specified RAM block. A set (1)
 *              bit indicates an error detection for the corresponding ECC error
 *              type mask.
 *
 * \retval      ALT_E_TRUE      ECC protection is enabled.
 * \retval      ALT_E_FALSE     ECC protection is not enabled.
 * \retval      ALT_E_BAD_ARG   The \e ram_block argument is invalid.
 */
ALT_STATUS_CODE alt_ecc_status_get(ALT_ECC_RAM_ENUM_t ram_block,
                                   uint32_t * status);

/*!
 * Scans the status of all ECC enabled RAM blocks and reports an active ECC
 * status and the associated RAM block.
 *
 * \param       ram_block
 *              [out] A RAM block that has status to report.
 *
 * \param       status
 *              [out] An ECC status condition bit mask is returned indicating
 *              the single bit, correctable (SERR) and/or double bit,
 *              non-correctable error (DERR) conditions set for the specified
 *              RAM block. A set (1) bit indicates an error detection for the
 *              corresponding ECC error type mask.
 *
 * \retval      ALT_E_ERROR     No RAM blocks have ECC status to report. The
 *                              output values for \b ram_block and \b status
 *                              should be ignored.
 * \retval      ALT_E_SUCCESS   
 */
ALT_STATUS_CODE alt_ecc_status_get_next(ALT_ECC_RAM_ENUM_t * ram_block,
                                        uint32_t * status);

/*!
 * Clears the selected ECC error conditions for the specified RAM block.
 *
 * A bit mask is returned containing indications of any single bit, correctable
 * (SERR) and/or double bit, non-correctable error (DERR) occurrences for the
 * specified RAM block. A 1 indicates an error detection of the corresponding
 * error type mask position.
 *
 * \param       ram_block
 *              The RAM block to clear the ECC error condition statuses for.
 *
 * \param       ecc_mask
 *              A bit mask specification of the ECC error condition statuses (\ref
 *              ALT_ECC_STATUS_t) to clear.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     An invalid \e ecc_mask was specified.
 * \retval      ALT_E_BAD_ARG   Either the \e ram_block or \e ecc_mask argument
 *                              is invalid.
 */
ALT_STATUS_CODE alt_ecc_status_clear(ALT_ECC_RAM_ENUM_t ram_block,
                                     uint32_t ecc_mask);

/*!
 * Enables the particular RAM block ECC status to trigger the system interrupt
 * \b ALT_INT_INTERRUPT_SERR_GLOBAL and \b ALT_INT_INTERRUPT_DERR_GLOBAL
 * generation.
 *
 * \param       ram_block
 *              The RAM block to clear the ECC error condition statuses for.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     Failure status.
 * \retval      ALT_E_BAD_ARG   The \e ram_block is invalid.
 */
ALT_STATUS_CODE alt_ecc_status_int_enable(ALT_ECC_RAM_ENUM_t ram_block);

/*!
 * Disables the particular RAM block ECC status from triggering the system
 * interrupt \b ALT_INT_INTERRUPT_SERR_GLOBAL and
 * \b ALT_INT_INTERRUPT_DERR_GLOBAL generation.
 *
 * \param       ram_block
 *              The RAM block to clear the ECC error condition statuses for.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     Failure status.
 * \retval      ALT_E_BAD_ARG   The \e ram_block is invalid.
 */
ALT_STATUS_CODE alt_ecc_status_int_disable(ALT_ECC_RAM_ENUM_t ram_block);

/*!
 * Injects a single bit, correctable error into the specified ECC protected RAM
 * block for test purposes. For RAM blocks which have mutliple RAM sub-blocks,
 * all sub-blocks are injected. This affects the EMAC0, EMAC1, EMAC2, NAND, and
 * SDMMC.
 *
 * ECC protection is required to be enabled on the RAM block.
 *
 * For error injection into L2, this API may alter the memory cached state in
 * L1 and L2.
 *
 * \param       ram_block
 *              The RAM block to inject the ECC error into.
 *
 * \param       location
 *              For L2, this speicifies the virtual address of a cache line
 *              where the error will be injected. For all other ROM blocks,
 *              this parameter specifies the index into the protected memory.
 *              The maximum value value varies depending on the size and
 *              organization of that memory.
 *
 * \param       mem_size
 *              For SDMMC, this specifies how much of the memory will written
 *              and read. For all other RAM blocks, it is not used.
 *
 * \retval      ALT_E_SUCCESS           The operation was successful.
 * \retval      ALT_E_ERROR             The operation failed.
 * \retval      ALT_E_BAD_ARG           The \e ram_block argument is invalid or
 *                                      \e location in valid for the specified
 *                                      RAM.
 * \retval      ALT_E_BAD_OPERATION     ECC is not enabled on the specified RAM
 *                                      block.
 */
ALT_STATUS_CODE alt_ecc_serr_inject(ALT_ECC_RAM_ENUM_t ram_block,
                                    uintptr_t location, uint32_t mem_size);

/*!
 * Injects a double bit, non-correctable error into the specified ECC protected
 * RAM block for test purposes. For RAM blocks which have mutliple RAM
 * sub-blocks, all sub-blocks are injected. This affects the EMAC0, EMAC1,
 * EMAC2, NAND, and SDMMC.
 *
 * ECC protection is required to be enabled on the RAM block.
 *
 * For error injection into L2, this API may alter the memory cached state in
 * L1 and L2.
 *
 * \param       ram_block
 *              The RAM block to disable ECC protection for.
 *
 * \param       location
 *              For L2, this speicifies the virtual address of a cache line
 *              where the error will be injected. For all other ROM blocks,
 *              this parameter specifies the index into the protected memory.
 *              The maximum value value varies depending on the size and
 *              organization of that memory.
 *
 * \param       mem_size
 *              For SDMMC, this specifies how much of the memory will be written
 *              and read. For all other RAM blocks, it is not used.
 *
 * \retval      ALT_E_SUCCESS           The operation was successful.
 * \retval      ALT_E_ERROR             The operation failed.
 * \retval      ALT_E_BAD_ARG           The \e ram_block argument is invalid or
 *                                      \e location in valid for the specified
 *                                      RAM.
 * \retval      ALT_E_BAD_OPERATION     ECC is not enabled on the specified RAM
 *                                      block.
 */
ALT_STATUS_CODE alt_ecc_derr_inject(ALT_ECC_RAM_ENUM_t ram_block,
                                    uintptr_t location, uint32_t mem_size);
    
/*!
 * @}
 */
    
#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif /* __ALT_ECC_H__ */
