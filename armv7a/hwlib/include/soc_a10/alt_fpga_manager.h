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
 * $Id: //acds/rel/20.1/embedded/ip/hps/altera_hps/hwlib/include/soc_a10/alt_fpga_manager.h#1 $
 */

#ifndef __ALT_FPGA_MANAGER_H__
#define __ALT_FPGA_MANAGER_H__

#include "hwlib.h"
#include "alt_dma.h"

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

/*!
 * \addtogroup FPGA_MGR_A10 FPGA Manager
 *
 * This module defines the FPGA Manager API for accessing, configuring, and
 * controlling the FPGA fabric and the FPGA/HPS interface. This API is specific
 * to Arria 10 SoC FPGA devices.
 *
 * @{
 */

/*!
 * This preprocessor definition determines if DMA support for FPGA programming
 * is enabled or not. Enabling DMA support enables the following API:
 *  * alt_fpga_configure_dma()
 *  * alt_fpga_configure_list_dma()
 *  * alt_fpga_istream_configure_dma()
 *
 * Please note that DMA support for Arria 10 SoC is not yet mature and may not
 * be functional or tested.
 *
 * To enable DMA support, define ALT_FPGA_ENABLE_DMA_SUPPORT=1 in the Makefile.
 */
#ifndef ALT_FPGA_ENABLE_DMA_SUPPORT
#define ALT_FPGA_ENABLE_DMA_SUPPORT (0)
#endif

/*!
 * This type definition enumerates the available modes for configuring the
 * FPGA.
 */
typedef enum ALT_FPGA_CFG_MODE_e
{
    /*!
     * 16-bit Passive Parallel with Fast power on reset delay; No Design
     * Security; No Data Compression.
     */
    ALT_FPGA_CFG_MODE_PP16_FAST_NOAES_NODC,

    /*!
     * 16-bit Passive Parallel with Fast power on reset delay; With Design
     * Security; No Data Compression.
     */
    ALT_FPGA_CFG_MODE_PP16_FAST_AES_NODC,

    /*!
     * 16-bit Passive Parallel with Fast power on reset delay; No design
     * security; With Data Compression.
     */
    ALT_FPGA_CFG_MODE_PP16_FAST_NOAES_DC,

    /*!
     * 16-bit Passive Parallel with Fast power on reset delay; With design
     * security; With Data Compression.
     */
    ALT_FPGA_CFG_MODE_PP16_FAST_AES_DC,

    /*!
     * 32-bit Passive Parallel with Fast power on reset delay; No Design
     * Security; No Data Compression.
     */
    ALT_FPGA_CFG_MODE_PP32_FAST_NOAES_NODC,

    /*!
     * 32-bit Passive Parallel with Fast power on reset delay; With design
     * security; No Data Comression.
     */
    ALT_FPGA_CFG_MODE_PP32_FAST_AES_NODC,

    /*!
     * 32-bit Passive Parallel with Fast power on reset delay; No design
     * security; With Data Compression. This is the default configuration.
     */
    ALT_FPGA_CFG_MODE_PP32_FAST_NOAES_DC,

    /*!
     * 32-bit Passive Parallel with Fast power on reset delay; With design
     * security; With Data Compression.
     */
    ALT_FPGA_CFG_MODE_PP32_FAST_AES_DC

} ALT_FPGA_CFG_MODE_t;

/*!
 * Initializes the FPGA manager. This should be the first API called when using
 * the FPGA manager API.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_fpga_init(void);

/*!
 * Uninitializes the FPGA manager
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_fpga_uninit(void);

/*!
 * Instructs the CPU core to acquire control of the FPGA control block. Control
 * is required before asserting reset or FPGA configuration is possible.
 *
 * \param       mode
 *              FPGA programming mode for the subsequent images.
 *
 * \retval      ALT_E_SUCCESS       Successful status.
 * \retval      ALT_E_ERROR         Error acquiring control of the FPGA control
 *                                  block. This is likely due to another device
 *                                  on the system controlling the FPGA control
 *                                  block or a repeat call to this API without
 *                                  first being released.
 */
ALT_STATUS_CODE alt_fpga_control_enable(ALT_FPGA_CFG_MODE_t mode);

/*!
 * Instructs the CPU core to release control of the FPGA control block. This
 * API should be called after all FPGA related operations are completed. This
 * will allow another device on the system to configure the FPGA.
 *
 * \retval      ALT_E_SUCCESS       Successful status.
 * \retval      ALT_E_ERROR         Failure status.
 */
ALT_STATUS_CODE alt_fpga_control_disable(void);

/*!
 * Returns \b true if the HPS currently has control of the FPGA control block
 * and \b false otherwise.
 *
 * \retval      true                HPS has control of the FPGA control block.
 * \retval      false               HPS does not have control of the FPGA
 *                                  control block.
 */
bool alt_fpga_control_is_enabled(void);

/*!
 * Assert and hold the FPGA in reset.
 *
 * This function asserts and holds the FPGA in reset. Any FPGA configuration is
 * cleared. The FPGA must be reconfigured to resume operation.
 *
 * The FPGA is reset by the assertion of the nCONFIG signal. The signal remains
 * asserted until alt_fgpa_reset_deassert() is called.
 *
 * \retval      ALT_E_SUCCESS           Successful status.
 * \retval      ALT_E_FPGA_PWR_OFF      FPGA is not powered on.
 * \retval      ALT_E_FPGA_NO_SOC_CTRL  SoC software is not in control of the
 *                                      FPGA. Use alt_fpga_control_enable() to
 *                                      gain control.
 */
ALT_STATUS_CODE alt_fpga_reset_assert(void);

/*!
 * Deassert and release the FPGA from reset.
 *
 * This function deasserts the FPGA from reset. The FPGA must be reconfigured to
 * resume operation.
 *
 * The FPGA is reset by the deassertion of the nCONFIG signal.
 *
 * \retval      ALT_E_SUCCESS           Successful status.
 * \retval      ALT_E_FPGA_PWR_OFF      FPGA is not powered on.
 * \retval      ALT_E_FPGA_NO_SOC_CTRL  SoC software is not in control of the
 *                                      FPGA. Use alt_fpga_control_enable() to
 *                                      gain control.
 */
ALT_STATUS_CODE alt_fpga_reset_deassert(void);

/*!
 * This type definition enumerates the status conditions for the FPGA Control
 * Block (CB).
 */
typedef enum ALT_FPGA_STATUS_e
{
    /*!
     * CRC Error detected while in usermode.
     */
    ALT_FPGA_STATUS_F2S_CRC_ERROR      = 1 <<  0,

    /*!
     * Early usermode signal from CSS. This can be used by software to
     * determine status when HPS is configured the shared IOs via sending the
     * POF to the CSS.
     */
    ALT_FPGA_STATUS_F2S_EARLY_USERMODE = 1 <<  1,

    /*!
     * Usermode status. Asserted only when the FPGA has finally entered
     * usermode.
     */
    ALT_FPGA_STATUS_F2S_USERMODE       = 1 <<  2,

    /*!
     * Driven enable of \b initdone signal.
     */
    ALT_FPGA_STATUS_F2S_INITDONE_OE    = 1 <<  3,

    /*!
     * Sampled pin value of \b nstatus signal. This can be overridden by an
     * external device.
     */
    ALT_FPGA_STATUS_F2S_NSTATUS_PIN    = 1 <<  4,

    /*!
     * Driven enable of \b nstatus signal.
     */
    ALT_FPGA_STATUS_F2S_NSTATUS_OE     = 1 <<  5,

    /*!
     * Sampled pin value of \b condone signal. This can be overridden by an
     * external devices.
     */
    ALT_FPGA_STATUS_F2S_CONDONE_PIN    = 1 <<  6,

    /*!
     * Driven enable of \b condone signal from CSS.
     */
    ALT_FPGA_STATUS_F2S_CONDONE_OE     = 1 <<  7,

    /*!
     * Configuration via PCIe (CVP) done indicator.
     */
    ALT_FPGA_STATUS_F2S_CVP_CONF_DONE  = 1 <<  8,

    /*!
     * Partial Reconfiguration (PR) ready.
     */
    ALT_FPGA_STATUS_F2S_PR_READY       = 1 <<  9,

    /*!
     * Partial Reconfiguration (PR) done.
     */
    ALT_FPGA_STATUS_F2S_PR_DONE        = 1 << 10,

    /*!
     * Partial Reconfiguration (PR) error.
     */
    ALT_FPGA_STATUS_F2S_PR_ERROR       = 1 << 11,

    /*!
     * Sampled pin value of \b nconfig signal.
     */
    ALT_FPGA_STATUS_F2S_NCONFIG_PIN    = 1 << 12,

    /*!
     * Chip select output driven from CSS block.
     */
    ALT_FPGA_STATUS_F2S_NCEO_OE        = 1 << 13,

    /*!
     * Sampled pin value of MSEL[0].
     */
    ALT_FPGA_STATUS_F2S_MSEL0          = 1 << 16,

    /*!
     * Sampled pin value of MSEL[1].
     */
    ALT_FPGA_STATUS_F2S_MSEL1          = 1 << 17,

    /*!
     * Sampled pin value of MSEL[2].
     */
    ALT_FPGA_STATUS_F2S_MSEL2          = 1 << 18,

    /*!
     * FIFO Empty status of the FPGA image configuration FIFO.
     */
    ALT_FPGA_STATUS_IMGCFG_FIFOEMPTY   = 1 << 24,

    /*!
     * FIFO Full status of the FPGA image configuration FIFO.
     */
    ALT_FPGA_STATUS_IMGCFG_FIFOFULL    = 1 << 25,

    /*!
     * JTAG Master Session Status.
     */
    ALT_FPGA_STATUS_JTAGM              = 1 << 28,

    /*!
     * EMR valid bit.
     */
    ALT_FPGA_STATUS_EMR                = 1 << 29

} ALT_FPGA_STATUS_t;

/*!
 * Gets the current status conditions that are active.
 *
 * \retval      Mask of logically OR'ed \ref ALT_FPGA_STATUS_t values that are
 *              active.
 */
uint32_t alt_fpga_status_get(void);

/*!
 * Type definition for the callback function prototype used by the FPGA Manager
 * to read configuration bitstream data from a user defined input source
 * stream.
 *
 * The purpose of this callback function declaration is to provide a prototype
 * for a user defined method of sequentially reading FPGA configuration
 * bitstream data from an arbitrary input source. Example input sources include
 * a file resident on a file system, a network stream socket, or a fixed
 * address block in flash memory. The only requirement on the input source is
 * that it is capable of supplying consecutive blocks of data of the requested
 * size from the FPGA configuration bitstream as demanded by the FPGA Manager.
 *
 * During FPGA configuration, the FPGA Manager periodically calls the user
 * defined callback function to fetch the next \e buf_len consecutive
 * configuration data bytes from the user defined input stream. The callback
 * function fills the FPGA Manager supplied buffer \e buf with up to the next
 * \e buf_len bytes of configuration bitsteam data as read from the input
 * source stream. The callback function returns the number of configuration
 * bytes read into \e buf or 0 upon reaching the end of the configuration
 * bitstream data.
 *
 * If an error occurs on the configuration bitstream input source, then the
 * callback function should return an error code value less than 0.
 *
 * \param       buf
 *              A pointer to a buffer to fill with FPGA configuration bitstream
 *              data bytes.
 *
 * \param       len
 *              The length of the input buffer \e buf in bytes. The number of
 *              FPGA configuration bitstream data bytes copied into \e buf
 *              should not exceed \e buf_len.
 *
 * \param       user_data
 *              A 32-bit data word for passing user defined data. The content
 *              of this parameter is user defined. The FPGA Manager merely
 *              forwards the \e user_data value when it invokes the callback.
 *
 * \retval      >0      The number of bytes returned in buf.
 * \retval      =0      The end of the input stream has been reached.
 * \retval      <0      An error occurred on the input stream.
 */
typedef int32_t (*alt_fpga_istream_t)(void * buf, size_t len, void * user_data);

/*!
 * \addtogroup FPGA_MGR_CFG_FULL FPGA Full Configuration
 *
 * These functions manage full configuration of the FPGA fabric from HPS
 * software.
 *
 * @{
 */

/*!
 * Perform a full configuration of the FPGA from the specified configuration
 * bitstream located in addressable memory.
 *
 * \param       buf
 *              A pointer to a buffer containing FPGA configuration bitstream
 *              data.
 *
 * \param       len
 *              The length of the configuration bitstream data in bytes.
 *
 * \retval      ALT_E_SUCCESS           FPGA configuration was successful.
 * \retval      ALT_E_FPGA_CFG          FPGA configuration error detected.
 * \retval      ALT_E_FPGA_CRC          FPGA CRC error detected.
 * \retval      ALT_E_FPGA_PWR_OFF      FPGA is not powered on.
 * \retval      ALT_E_FPGA_NO_SOC_CTRL  SoC software is not in control of the
 *                                      FPGA. Use alt_fpga_control_enable() to
 *                                      gain control.
 */
ALT_STATUS_CODE alt_fpga_configure(const void * buf,
                                   size_t len);

/*!
 * Perform a full configuration of the FPGA from the specified list of
 * configuration bitstream(s) located in addressable memory.
 *
 * \param       buf_list
 *              A pointer to an array of buffer(s) containing the FPGA
 *              configuration bitstream data.
 *
 * \param       len_list
 *              A pointer to an array of length(s) corresponding to the
 *              configuration bitstream data length in bytes.
 *
 * \param       list_count
 *              The number of items in \b buf_list and \b len_list.
 *
 * \retval      ALT_E_SUCCESS           FPGA configuration was successful.
 * \retval      ALT_E_FPGA_CFG          FPGA configuration error detected.
 * \retval      ALT_E_FPGA_CRC          FPGA CRC error detected.
 * \retval      ALT_E_FPGA_PWR_OFF      FPGA is not powered on.
 * \retval      ALT_E_FPGA_NO_SOC_CTRL  SoC software is not in control of the
 *                                      FPGA. Use alt_fpga_control_enable() to
 *                                      gain control.
 */
ALT_STATUS_CODE alt_fpga_configure_list(const void ** buf_list,
                                        const size_t * len_list,
                                        size_t list_count);


#if ALT_FPGA_ENABLE_DMA_SUPPORT

/*!
 * Perform a full configuration of the FPGA from the specified configuration
 * bitstream located in addressable memory using the DMA engine. Using DMA can
 * have a large performance benefit in FPGA programming time.
 *
 * The DMA subsystem must be initialized and the DMA channel allocated before
 * using this API.
 *
 * \param       buf
 *              A pointer to a buffer containing FPGA configuration bitstream
 *              data.
 *
 * \param       len
 *              The length of the configuration bitstream data in bytes.
 *
 * \param       dma_channel
 *              DMA channel to use for performing configuration.
 *
 * \retval      ALT_E_SUCCESS           FPGA configuration was successful.
 * \retval      ALT_E_FPGA_CFG          FPGA configuration error detected.
 * \retval      ALT_E_FPGA_CRC          FPGA CRC error detected.
 * \retval      ALT_E_FPGA_PWR_OFF      FPGA is not powered on.
 * \retval      ALT_E_FPGA_NO_SOC_CTRL  SoC software is not in control of the
 *                                      FPGA. Use alt_fpga_control_enable() to
 *                                      gain control.
 * \retval      ALT_E_BAD_ARG           The user provided buffer is unaligned
 *                                      to the 32-bit boundary.
 */
ALT_STATUS_CODE alt_fpga_configure_dma(const void * buf,
                                       size_t len,
                                       ALT_DMA_CHANNEL_t dma_channel);

/*!
 * Perform a full configuration of the FPGA from the specified list of
 * configuration bitstream(s) located in addressable memory using the DMA
 * engine. Using DMA can have a large performance benefit in FPGA programming
 * time.
 *
 * The DMA subsystem must be initialized and the DMA channel allocated before
 * using this API.
 *
 * \param       buf_list
 *              A pointer to an array of buffer(s) containing the FPGA
 *              configuration bitstream data.
 *
 * \param       len_list
 *              A pointer to an array of length(s) corresponding to the
 *              configuration bitstream data length in bytes.
 *
 * \param       list_count
 *              The number of items in \b buf_list and \b len_list.
 *
 * \param       dma_channel
 *              DMA channel to use for performing configuration.
 *
 * \retval      ALT_E_SUCCESS           FPGA configuration was successful.
 * \retval      ALT_E_FPGA_CFG          FPGA configuration error detected.
 * \retval      ALT_E_FPGA_CRC          FPGA CRC error detected.
 * \retval      ALT_E_FPGA_PWR_OFF      FPGA is not powered on.
 * \retval      ALT_E_FPGA_NO_SOC_CTRL  SoC software is not in control of the
 *                                      FPGA. Use alt_fpga_control_enable() to
 *                                      gain control.
 * \retval      ALT_E_BAD_ARG           The user provided buffer is unaligned
 *                                      to the 32-bit boundary.
 */
ALT_STATUS_CODE alt_fpga_configure_list_dma(const void ** buf_list,
                                            const size_t * len_list,
                                            size_t list_count,
                                            ALT_DMA_CHANNEL_t dma_channel);

#endif

/*!
 * Perform a full configuration of the FPGA from the user defined configuration
 * bitstream input source.
 *
 * \param       cfg_stream
 *              A pointer to a callback function used to consecutively read
 *              configuration bitstream data from a user defined input stream.
 *
 * \param       user_data
 *              A 32-bit user defined data word. The content of this parameter
 *              is user defined. The FPGA Manager merely forwards the \e
 *              user_data value when it invokes the \e cfg_stream callback.
 *
 * \retval      ALT_E_SUCCESS           FPGA configuration FPGA was successful.
 * \retval      ALT_E_FPGA_CFG          FPGA configuration error detected.
 * \retval      ALT_E_FPGA_CRC          FPGA CRC error detected.
 * \retval      ALT_E_FPGA_CFG_STM      An error occurred on the FPGA
 *                                      configuration bitstream input source.
 * \retval      ALT_E_FPGA_PWR_OFF      FPGA is not powered on.
 * \retval      ALT_E_FPGA_NO_SOC_CTRL  SoC software is not in control of the
 *                                      FPGA. Use alt_fpga_control_enable() to
 *                                      gain control.
 */
ALT_STATUS_CODE alt_fpga_istream_configure(alt_fpga_istream_t cfg_stream,
                                           void * user_data);

#if ALT_FPGA_ENABLE_DMA_SUPPORT

/*!
 * Perform a full configuration of the FPGA from the user defined configuration
 * bitstream input source using the DMA engine. Using DMA can have a large
 * performance benefit in FPGA programming time.
 *
 * The DMA subsystem must be initialized and the DMA channel allocated before
 * using this API.
 *
 * \param       cfg_stream
 *              A pointer to a callback function used to consecutively read
 *              configuration bitstream data from a user defined input stream.
 *
 * \param       user_data
 *              A 32-bit user defined data word. The content of this parameter
 *              is user defined. The FPGA Manager merely forwards the \e
 *              user_data value when it invokes the \e cfg_stream callback.
 *
 * \param       dma_channel
 *              DMA channel to use for performing configuration.
 *
 * \retval      ALT_E_SUCCESS           FPGA configuration FPGA was successful.
 * \retval      ALT_E_FPGA_CFG          FPGA configuration error detected.
 * \retval      ALT_E_FPGA_CRC          FPGA CRC error detected.
 * \retval      ALT_E_FPGA_CFG_STM      An error occurred on the FPGA
 *                                      configuration bitstream input source.
 * \retval      ALT_E_FPGA_PWR_OFF      FPGA is not powered on.
 * \retval      ALT_E_FPGA_NO_SOC_CTRL  SoC software is not in control of the
 *                                      FPGA. Use alt_fpga_control_enable() to
 *                                      gain control.
 * \retval      ALT_E_BAD_ARG           The user provided buffer is unaligned
 *                                      to the 32-bit boundary.
 */
ALT_STATUS_CODE alt_fpga_istream_configure_dma(alt_fpga_istream_t cfg_stream,
                                               void * user_data,
                                               ALT_DMA_CHANNEL_t dma_channel);

#endif

/*!
 * @}
 */

/*!
 * @}
 */

/*!
 * \addtogroup FPGA_MGR_INT FPGA Manager Interrupt Control
 *
 * The functions in ths group provide management of interrupts originating from
 * the FPGA Manager.
 *
 * The following interrupt request (IRQ) signal is sourced from the FPGA
 * Manager:
 *
 *  * \b gpio_intr_flag
 *
 * @{
 */

/*!
 * Enable the FPGA Manager to interrupt on status condition(s) identified in
 * the mask. To clear the interrupting condition, call
 * alt_fpga_int_clear().
 *
 * \param       mask
 *              Specifies the status conditions to enable as the interrupt
 *              source contributor(s). \e mask is a mask of logically OR'ed
 *              \ref ALT_FPGA_STATUS_t values that designates the conditions to
 *              enable.
 *
 * \retval      ALT_E_SUCCESS           Successful status.
 * \retval      ALT_E_BAD_ARG           Specified mask includes invalid status
 *                                      condition(s).
 * \retval      ALT_E_FPGA_PWR_OFF      FPGA is not powered on.
 */
ALT_STATUS_CODE alt_fpga_int_enable(uint32_t mask);

/*!
 * Disable the FPGA Manager to interrupt status condition(s) identified in the
 * mask.
 *
 * \param       mask
 *              Specifies the status conditions to disable as the interrupt
 *              source contributor(s). \e mask is a mask of logically OR'ed
 *              \ref ALT_FPGA_STATUS_t values that designates the conditions to
 *              disable.
 *
 * \retval      ALT_E_SUCCESS           Successful status.
 * \retval      ALT_E_BAD_ARG           Specified mask includes invalid status
 *                                      condition(s).
 * \retval      ALT_E_FPGA_PWR_OFF      FPGA is not powered on.
 */
ALT_STATUS_CODE alt_fpga_int_disable(uint32_t mask);

/*!
 * Gets the current status conditions contributing to the interrupt generation.
 * Only enabled status conditions will be returned. To query all active status
 * condition(s), call alt_fpga_status_get(). To clear the current interrupt
 * generation, call alt_fpga_int_clear().
 *
 * \retval      Mask of logically OR'ed \ref ALT_FPGA_STATUS_t values that are
 *              enabled and contributiong to the interrupt generation.
 */
uint32_t        alt_fpga_int_get(void);

/*!
 * Clears the interrupt status condition(s) identified in the mask.
 *
 * \param       mask
 *              Specifies the status conditions to clear as the interrupt
 *              source contributor(s). \e mask is a mask of logically OR'ed
 *              \ref ALT_FPGA_STATUS_t values that designates the conditions to
 *              disable.
 *
 * \retval      ALT_E_SUCCESS           Successful status.
 * \retval      ALT_E_BAD_ARG           Specified mask includes invalid status
 *                                      condition(s).
 * \retval      ALT_E_FPGA_PWR_OFF      FPGA is not powered on.

 */
ALT_STATUS_CODE alt_fpga_int_clear(uint32_t mask);

/*!
 * @}
 */

/*!
 * \addtogroup FPGA_MGR_GPIO SoC to FPGA General Purpose I/O Signals
 *
 * These functions provide a simple, low-latency, low-performance signal
 * interface between the SoC and the FPGA.  There is a General Purpose Output
 * (GPO) register that provides a path to drive up to 32 signals from the SoC
 * to the FPGA.  There is a General Purpose Input (GPI) register that provides
 * a path to read up to 32 signals driven from the FPGA to the SoC.
 *
 * @{
 */

/*!
 * This type definition enumerates the signal mask selections for the General
 * Purpose Input (GPI) signals driven from the FPGA to the SoC.
 */
typedef enum ALT_FPGA_GPI_e
{
    /*! Signal driven to the FPGA fabric on f2s_gp[0] */
    ALT_FPGA_GPI_0  = (int32_t)(1UL <<  0),

    /*! Signal driven to the FPGA fabric on f2s_gp[1] */
    ALT_FPGA_GPI_1  = (int32_t)(1UL <<  1),

    /*! Signal driven to the FPGA fabric on f2s_gp[2] */
    ALT_FPGA_GPI_2  = (int32_t)(1UL <<  2),

    /*! Signal driven to the FPGA fabric on f2s_gp[3] */
    ALT_FPGA_GPI_3  = (int32_t)(1UL <<  3),

    /*! Signal driven to the FPGA fabric on f2s_gp[4] */
    ALT_FPGA_GPI_4  = (int32_t)(1UL <<  4),

    /*! Signal driven to the FPGA fabric on f2s_gp[5] */
    ALT_FPGA_GPI_5  = (int32_t)(1UL <<  5),

    /*! Signal driven to the FPGA fabric on f2s_gp[6] */
    ALT_FPGA_GPI_6  = (int32_t)(1UL <<  6),

    /*! Signal driven to the FPGA fabric on f2s_gp[7] */
    ALT_FPGA_GPI_7  = (int32_t)(1UL <<  7),

    /*! Signal driven to the FPGA fabric on f2s_gp[8] */
    ALT_FPGA_GPI_8  = (int32_t)(1UL <<  8),

    /*! Signal driven to the FPGA fabric on f2s_gp[9] */
    ALT_FPGA_GPI_9  = (int32_t)(1UL <<  9),

    /*! Signal driven to the FPGA fabric on f2s_gp[10] */
    ALT_FPGA_GPI_10 = (int32_t)(1UL << 10),

    /*! Signal driven to the FPGA fabric on f2s_gp[11] */
    ALT_FPGA_GPI_11 = (int32_t)(1UL << 11),

    /*! Signal driven to the FPGA fabric on f2s_gp[12] */
    ALT_FPGA_GPI_12 = (int32_t)(1UL << 12),

    /*! Signal driven to the FPGA fabric on f2s_gp[13] */
    ALT_FPGA_GPI_13 = (int32_t)(1UL << 13),

    /*! Signal driven to the FPGA fabric on f2s_gp[14] */
    ALT_FPGA_GPI_14 = (int32_t)(1UL << 14),

    /*! Signal driven to the FPGA fabric on f2s_gp[15] */
    ALT_FPGA_GPI_15 = (int32_t)(1UL << 15),

    /*! Signal driven to the FPGA fabric on f2s_gp[16] */
    ALT_FPGA_GPI_16 = (int32_t)(1UL << 16),

    /*! Signal driven to the FPGA fabric on f2s_gp[17] */
    ALT_FPGA_GPI_17 = (int32_t)(1UL << 17),

    /*! Signal driven to the FPGA fabric on f2s_gp[18] */
    ALT_FPGA_GPI_18 = (int32_t)(1UL << 18),

    /*! Signal driven to the FPGA fabric on f2s_gp[19] */
    ALT_FPGA_GPI_19 = (int32_t)(1UL << 19),

    /*! Signal driven to the FPGA fabric on f2s_gp[20] */
    ALT_FPGA_GPI_20 = (int32_t)(1UL << 20),

    /*! Signal driven to the FPGA fabric on f2s_gp[21] */
    ALT_FPGA_GPI_21 = (int32_t)(1UL << 21),

    /*! Signal driven to the FPGA fabric on f2s_gp[22] */
    ALT_FPGA_GPI_22 = (int32_t)(1UL << 22),

    /*! Signal driven to the FPGA fabric on f2s_gp[23] */
    ALT_FPGA_GPI_23 = (int32_t)(1UL << 23),

    /*! Signal driven to the FPGA fabric on f2s_gp[24] */
    ALT_FPGA_GPI_24 = (int32_t)(1UL << 24),

    /*! Signal driven to the FPGA fabric on f2s_gp[25] */
    ALT_FPGA_GPI_25 = (int32_t)(1UL << 25),

    /*! Signal driven to the FPGA fabric on f2s_gp[26] */
    ALT_FPGA_GPI_26 = (int32_t)(1UL << 26),

    /*! Signal driven to the FPGA fabric on f2s_gp[27] */
    ALT_FPGA_GPI_27 = (int32_t)(1UL << 27),

    /*! Signal driven to the FPGA fabric on f2s_gp[28] */
    ALT_FPGA_GPI_28 = (int32_t)(1UL << 28),

    /*! Signal driven to the FPGA fabric on f2s_gp[29] */
    ALT_FPGA_GPI_29 = (int32_t)(1UL << 29),

    /*! Signal driven to the FPGA fabric on f2s_gp[30] */
    ALT_FPGA_GPI_30 = (int32_t)(1UL << 30),

    /*! Signal driven to the FPGA fabric on f2s_gp[31] */
    ALT_FPGA_GPI_31 = (int32_t)(1UL << 31)

} ALT_FPGA_GPI_t;

/*!
 * Reads the General Purpose Input (GPI) register value.
 *
 * Returns the GPI register value that is the masked selection of the 32 \b
 * f2s_gp signal values driven by the FPGA. The \e mask may be defined by the
 * logical OR of \ref ALT_FPGA_GPI_t values.
 *
 * NOTE: If the FPGA is not in User Mode then the value of this register
 *       undefined.
 *
 * \param       mask
 *              The set of signals (where mask bits equal one) to read.  Other
 *              signals values (where mask bits equal zero) are returned as 0.
 *
 * \returns     Returns the GPI register value that is the masked selection of
 *              the 32 \b f2s_gp signals from the FPGA.
 */
uint32_t alt_fpga_gpi_read(uint32_t mask);

/*!
 * This type definition enumerates the signal mask selections for the General
 * Purpose Output (GPO) signals driven from the SoC to the FPGA.
 */
typedef enum ALT_FPGA_GPO_e
{
    /*! Signal driven from the FPGA fabric on s2f_gp[0] */
    ALT_FPGA_GPO_0  = (int32_t)(1UL <<  0),

    /*! Signal driven from the FPGA fabric on s2f_gp[1] */
    ALT_FPGA_GPO_1  = (int32_t)(1UL <<  1),

    /*! Signal driven from the FPGA fabric on s2f_gp[2] */
    ALT_FPGA_GPO_2  = (int32_t)(1UL <<  2),

    /*! Signal driven from the FPGA fabric on s2f_gp[3] */
    ALT_FPGA_GPO_3  = (int32_t)(1UL <<  3),

    /*! Signal driven from the FPGA fabric on s2f_gp[4] */
    ALT_FPGA_GPO_4  = (int32_t)(1UL <<  4),

    /*! Signal driven from the FPGA fabric on s2f_gp[5] */
    ALT_FPGA_GPO_5  = (int32_t)(1UL <<  5),

    /*! Signal driven from the FPGA fabric on s2f_gp[6] */
    ALT_FPGA_GPO_6  = (int32_t)(1UL <<  6),

    /*! Signal driven from the FPGA fabric on s2f_gp[7] */
    ALT_FPGA_GPO_7  = (int32_t)(1UL <<  7),

    /*! Signal driven from the FPGA fabric on s2f_gp[8] */
    ALT_FPGA_GPO_8  = (int32_t)(1UL <<  8),

    /*! Signal driven from the FPGA fabric on s2f_gp[9] */
    ALT_FPGA_GPO_9  = (int32_t)(1UL <<  9),

    /*! Signal driven from the FPGA fabric on s2f_gp[10] */
    ALT_FPGA_GPO_10 = (int32_t)(1UL << 10),

    /*! Signal driven from the FPGA fabric on s2f_gp[11] */
    ALT_FPGA_GPO_11 = (int32_t)(1UL << 11),

    /*! Signal driven from the FPGA fabric on s2f_gp[12] */
    ALT_FPGA_GPO_12 = (int32_t)(1UL << 12),

    /*! Signal driven from the FPGA fabric on s2f_gp[13] */
    ALT_FPGA_GPO_13 = (int32_t)(1UL << 13),

    /*! Signal driven from the FPGA fabric on s2f_gp[14] */
    ALT_FPGA_GPO_14 = (int32_t)(1UL << 14),

    /*! Signal driven from the FPGA fabric on s2f_gp[15] */
    ALT_FPGA_GPO_15 = (int32_t)(1UL << 15),

    /*! Signal driven from the FPGA fabric on s2f_gp[16] */
    ALT_FPGA_GPO_16 = (int32_t)(1UL << 16),

    /*! Signal driven from the FPGA fabric on s2f_gp[17] */
    ALT_FPGA_GPO_17 = (int32_t)(1UL << 17),

    /*! Signal driven from the FPGA fabric on s2f_gp[18] */
    ALT_FPGA_GPO_18 = (int32_t)(1UL << 18),

    /*! Signal driven from the FPGA fabric on s2f_gp[19] */
    ALT_FPGA_GPO_19 = (int32_t)(1UL << 19),

    /*! Signal driven from the FPGA fabric on s2f_gp[20] */
    ALT_FPGA_GPO_20 = (int32_t)(1UL << 20),

    /*! Signal driven from the FPGA fabric on s2f_gp[21] */
    ALT_FPGA_GPO_21 = (int32_t)(1UL << 21),

    /*! Signal driven from the FPGA fabric on s2f_gp[22] */
    ALT_FPGA_GPO_22 = (int32_t)(1UL << 22),

    /*! Signal driven from the FPGA fabric on s2f_gp[23] */
    ALT_FPGA_GPO_23 = (int32_t)(1UL << 23),

    /*! Signal driven from the FPGA fabric on s2f_gp[24] */
    ALT_FPGA_GPO_24 = (int32_t)(1UL << 24),

    /*! Signal driven from the FPGA fabric on s2f_gp[25] */
    ALT_FPGA_GPO_25 = (int32_t)(1UL << 25),

    /*! Signal driven from the FPGA fabric on s2f_gp[26] */
    ALT_FPGA_GPO_26 = (int32_t)(1UL << 26),

    /*! Signal driven from the FPGA fabric on s2f_gp[27] */
    ALT_FPGA_GPO_27 = (int32_t)(1UL << 27),

    /*! Signal driven from the FPGA fabric on s2f_gp[28] */
    ALT_FPGA_GPO_28 = (int32_t)(1UL << 28),

    /*! Signal driven from the FPGA fabric on s2f_gp[29] */
    ALT_FPGA_GPO_29 = (int32_t)(1UL << 29),

    /*! Signal driven from the FPGA fabric on s2f_gp[30] */
    ALT_FPGA_GPO_30 = (int32_t)(1UL << 30),

    /*! Signal driven from the FPGA fabric on s2f_gp[31] */
    ALT_FPGA_GPO_31 = (int32_t)(1UL << 31)

} ALT_FPGA_GPO_t;

/*!
 * Writes the General Purpose Output (GPO) register value.
 *
 * Writes the GPO data outputs with the specified values. The GPO drives the 32
 * \b s2f_gp signal values to the FPGA. Output signals are only written if
 * their corresponding mask bits are set.
 *
 * NOTE: If the FPGA is not in User Mode then the effect of this operation is
 *       undefined.
 *
 * \param       mask
 *              The set of signals (where mask bits equal one) to write.  Other
 *              signals (where mask bits equal zero) are not changed. The \e
 *              mask may be defined by the logical OR of \ref ALT_FPGA_GPO_t
 *              values.
 *
 * \param       value
 *              The 32-bit aggregate GPO register value. Values for the
 *              corressponding signal bits specified in the \e mask are written
 *              to the FPGA signals.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     The write failed.
 */
ALT_STATUS_CODE alt_fpga_gpo_write(uint32_t mask, uint32_t value);

/*!
 * @}
 */

/*!
 * @}
 */

#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif /* __ALT_FPGA_MANAGER_H__ */
