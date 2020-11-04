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
 * $Id: //acds/rel/20.1/embedded/ip/hps/altera_hps/hwlib/include/soc_a10/alt_int_device.h#1 $
 */

#ifndef __ALT_INT_DEVICE_H__
#define __ALT_INT_DEVICE_H__

#ifdef __cplusplus
extern "C"
{
#endif

/*!
 * This type definition enumerates all the interrupt identification types.
 *
 * \internal
 * Source: Altera Arria 10 Hard Processor System Technical Reference Manual, table 9-3 "GIC Interrupt Map".
 * \endinternal
 */
typedef enum ALT_INT_INTERRUPT_e
{
    ALT_INT_INTERRUPT_SGI0  =  0, /*!< # */
    ALT_INT_INTERRUPT_SGI1  =  1, /*!< # */
    ALT_INT_INTERRUPT_SGI2  =  2, /*!< # */
    ALT_INT_INTERRUPT_SGI3  =  3, /*!< # */
    ALT_INT_INTERRUPT_SGI4  =  4, /*!< # */
    ALT_INT_INTERRUPT_SGI5  =  5, /*!< # */
    ALT_INT_INTERRUPT_SGI6  =  6, /*!< # */
    ALT_INT_INTERRUPT_SGI7  =  7, /*!< # */
    ALT_INT_INTERRUPT_SGI8  =  8, /*!< # */
    ALT_INT_INTERRUPT_SGI9  =  9, /*!< # */
    ALT_INT_INTERRUPT_SGI10 = 10, /*!< # */
    ALT_INT_INTERRUPT_SGI11 = 11, /*!< # */
    ALT_INT_INTERRUPT_SGI12 = 12, /*!< # */
    ALT_INT_INTERRUPT_SGI13 = 13, /*!< # */
    ALT_INT_INTERRUPT_SGI14 = 14, /*!< # */
    ALT_INT_INTERRUPT_SGI15 = 15,
    /*!<
     * Software Generated Interrupts (SGI), 0 - 15.
     *  * All interrupts in this group are software triggered.
     */

    ALT_INT_INTERRUPT_PPI_TIMER_GLOBAL   = 27, /*!< # */
    ALT_INT_INTERRUPT_PPI_TIMER_PRIVATE  = 29, /*!< # */
    ALT_INT_INTERRUPT_PPI_TIMER_WATCHDOG = 30,
    /*!<
     * Private Peripheral Interrupts (PPI) for the Global Timer, per CPU
     * private timer, and watchdog timer.
     *  * All interrupts in this group are edge triggered.
     */

    ALT_INT_INTERRUPT_DERR_GLOBAL = 32,
    /*!<
     * System Manager DERR_Global interrupt. This interrupt combines the
     * following items: ddr_derr, dma_derr, emac0_tx_derr, emac0_rx_derr,
     * emac1_tx_derr, emac1_rx_derr, emac2_tx_derr, emac2_rx_derr, usb0_derr,
     * usb1_derr, sdmmc_porta_derr, sdmmc_portb_derr, nandr_derr, nandw_derr,
     * nande_derr, qspi_derr, ram_derr, and l2_derr.
     *  * This interrupt is level triggered.
     */

    ALT_INT_INTERRUPT_CPUX_PARITYFAIL = 33,
    /*!<
     * System Manager cpux_parityfail interrupt. This interrupt combines the
     * following items: cpu0_parityfail_BTAC, cpu0_parityfail_GHB,
     * cpu0_parityfail_I_Tag, cpu0_parityfail_I_Data, cpu0_parityfail_TLB,
     * cpu0_parityfail_D_Outer, cpu0_parityfail_D_Tag, cpu0_parityfail_D_Data,
     * cpu1_parityfail_BTAC, cpu1_parityfail_GHB, cpu1_parityfail_I_Tag,
     * cpu1_parityfail_I_Data, cpu1_parityfail_TLB, cpu1_parityfail_D_Outer,
     * cpu1_parityfail_D_Tag, cpu1_parityfail_D_Data, scu_parityfail0, and
     * scu_parityfail1.
     *  * This interrupt is level triggered.
     */

    ALT_INT_INTERRUPT_SERR_GLOBAL = 34,
    /*!<
     * System Manager SERR_Global interrupt. This interrupt combines the
     * following items: ddr_serr, dma_serr, emac0_tx_serr, emac0_rx_serr,
     * emac1_tx_serr, emac1_rx_serr, emac2_tx_serr, emac2_rx_serr, usb0_serr,
     * usb1_serr, sdmmc_porta_serr, sdmmc_portb_serr, nandr_serr, nandw_serr,
     * nande_serr, qspi_serr, ram_serr, and l2_serr.
     *  * This interrupt is level triggered.
     */

    ALT_INT_INTERRUPT_CPU0_DEFLAGS0 = 35, /*!< # */
    ALT_INT_INTERRUPT_CPU0_DEFLAGS1 = 36, /*!< # */
    ALT_INT_INTERRUPT_CPU0_DEFLAGS2 = 37, /*!< # */
    ALT_INT_INTERRUPT_CPU0_DEFLAGS3 = 38, /*!< # */
    ALT_INT_INTERRUPT_CPU0_DEFLAGS4 = 39, /*!< # */
    ALT_INT_INTERRUPT_CPU0_DEFLAGS5 = 40, /*!< # */
    ALT_INT_INTERRUPT_CPU0_DEFLAGS6 = 41, /*!< # */
    ALT_INT_INTERRUPT_CPU1_DEFLAGS0 = 42, /*!< # */
    ALT_INT_INTERRUPT_CPU1_DEFLAGS1 = 43, /*!< # */
    ALT_INT_INTERRUPT_CPU1_DEFLAGS2 = 44, /*!< # */
    ALT_INT_INTERRUPT_CPU1_DEFLAGS3 = 45, /*!< # */
    ALT_INT_INTERRUPT_CPU1_DEFLAGS4 = 46, /*!< # */
    ALT_INT_INTERRUPT_CPU1_DEFLAGS5 = 47, /*!< # */
    ALT_INT_INTERRUPT_CPU1_DEFLAGS6 = 48,
    /*!<
     * CPU0 and CPU1 deflag interrupts.
     *  * All interrupts in this group are level triggered.
     */

    ALT_INT_INTERRUPT_SCU_EV_ABORT = 49,
    /*!<
     * SCU interrupts.
     *  * This interrupt is edge triggered.
     */

    ALT_INT_INTERRUPT_L2_COMBINED_IRQ = 50,
    /*!<
     * L2 Combined interrupt. This interrupt combines the following items:
     * DECERRINTR, ECNTRINTR, ERRRDINTR, ERRRTINTR, ERRWDINTR, ERRWTINTR,
     * PARRDINTR, PARRTINTR, and SLVERRINTR.
     *  * This interrupt is level triggered.
     */

    ALT_INT_INTERRUPT_F2S_FPGA_IRQ0  =  51, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ1  =  52, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ2  =  53, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ3  =  54, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ4  =  55, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ5  =  56, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ6  =  57, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ7  =  58, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ8  =  59, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ9  =  60, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ10 =  61, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ11 =  62, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ12 =  63, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ13 =  64, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ14 =  65, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ15 =  66, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ16 =  67, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ17 =  68, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ18 =  69, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ19 =  70, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ20 =  71, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ21 =  72, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ22 =  73, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ23 =  74, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ24 =  75, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ25 =  76, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ26 =  77, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ27 =  78, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ28 =  79, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ29 =  80, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ30 =  81, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ31 =  82, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ32 =  83, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ33 =  84, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ34 =  85, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ35 =  86, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ36 =  87, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ37 =  88, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ38 =  89, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ39 =  90, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ40 =  91, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ41 =  92, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ42 =  93, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ43 =  94, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ44 =  95, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ45 =  96, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ46 =  97, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ47 =  98, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ48 =  99, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ49 = 100, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ50 = 101, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ51 = 102, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ52 = 103, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ53 = 104, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ54 = 105, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ55 = 106, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ56 = 107, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ57 = 108, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ58 = 109, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ59 = 110, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ60 = 111, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ61 = 112, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ62 = 113, /*!< # */
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ63 = 114,
    /*!<
     * Interrupt request from the FPGA logic, 0 - 63.
     *  * Trigger type depends on the implementation in the FPGA.
     */

    ALT_INT_INTERRUPT_DMA_IRQ0      = 115, /*!< # */
    ALT_INT_INTERRUPT_DMA_IRQ1      = 116, /*!< # */
    ALT_INT_INTERRUPT_DMA_IRQ2      = 117, /*!< # */
    ALT_INT_INTERRUPT_DMA_IRQ3      = 118, /*!< # */
    ALT_INT_INTERRUPT_DMA_IRQ4      = 119, /*!< # */
    ALT_INT_INTERRUPT_DMA_IRQ5      = 120, /*!< # */
    ALT_INT_INTERRUPT_DMA_IRQ6      = 121, /*!< # */
    ALT_INT_INTERRUPT_DMA_IRQ7      = 122, /*!< # */
    ALT_INT_INTERRUPT_DMA_IRQ_ABORT = 123,
    /*!<
     * Interrupts sourced from the DMA Controller.
     *  * All interrupts in this group are level triggered.
     */

    ALT_INT_INTERRUPT_EMAC0_IRQ = 124, /*!< # */
    ALT_INT_INTERRUPT_EMAC1_IRQ = 125, /*!< # */
    ALT_INT_INTERRUPT_EMAC2_IRQ = 126,
    /*!<
     * Interrupts from EMAC 0 - 3. This interrupt combines the sbd_intr_o,
     * lpi_intr_o, and pmt_intr_o items of the respective EMAC controller.
     *  * All interrupts in this group are level triggered.
     */

    ALT_INT_INTERRUPT_USB0_IRQ = 127, /*!< # */
    ALT_INT_INTERRUPT_USB1_IRQ = 128,
    /*!<
     * Interrupts from USB 0 - 1.
     *  * All interrupts in this group are level triggered.
     */

    ALT_INT_INTERRUPT_HMC_ERROR = 129,
    /*!<
     * SDRAM scheduler interrupt.
     *  * This interrupt is level triggered.
     */

    ALT_INT_INTERRUPT_SDMMC_IRQ = 130, /*!< # */
    ALT_INT_INTERRUPT_NAND_IRQ  = 131, /*!< # */
    ALT_INT_INTERRUPT_QSPI_IRQ  = 132,
    /*!<
     * SDMMC, NAND, and QSPI interrupts respectively.
     *  * All interrupts in this group are level triggered.
     */

    ALT_INT_INTERRUPT_SPI0_IRQ = 133, /*!< # */
    ALT_INT_INTERRUPT_SPI1_IRQ = 134, /*!< # */
    ALT_INT_INTERRUPT_SPI2_IRQ = 135, /*!< # */
    ALT_INT_INTERRUPT_SPI3_IRQ = 136,
    /*!<
     * SPI 0 - 1 slave and SPI 2 - 3 master interrupts. This interrupt combines
     * the following items: ssi_txe_intr, ssi_txo_intr, ssi_rxf_intr,
     * ssi_rxo_intr, ssi_rxu_intr, and ssi_mst_intr.
     *  * All interrupts in this group are level triggered.
     */

    ALT_INT_INTERRUPT_I2C0_IRQ = 137, /*!< # */
    ALT_INT_INTERRUPT_I2C1_IRQ = 138, /*!< # */
    ALT_INT_INTERRUPT_I2C2_IRQ = 139, /*!< # */
    ALT_INT_INTERRUPT_I2C3_IRQ = 140, /*!< # */
    ALT_INT_INTERRUPT_I2C4_IRQ = 141,
    /*!<
     * I2C 0 - 4 interrupts. This interrupt combines the following items:
     * ic_rx_under_intr, ic_rx_full_intr, ic_tx_over_intr, ic_tx_empty_intr,
     * ic_rd_req_intr, ic_tx_abrt_intr, ic_rx_done_intr, ic_activity_intr,
     * ic_stop_det_intr, ic_start_det_intr, and ic_gen_call_intr.
     * I2C2 can be used with EMAC0, I2C3 can be used with EMAC1, and I2C4 can
     * be used with EMAC2.
     *  * All interrupts in this group are level triggered.
     */

    ALT_INT_INTERRUPT_UART0 = 142, /*!< # */
    ALT_INT_INTERRUPT_UART1 = 143,
    /*!<
     * UART 0 - 1 interrupts.
     *  * All interrupts in this group are level triggered.
     */

    ALT_INT_INTERRUPT_GPIO0 = 144, /*!< # */
    ALT_INT_INTERRUPT_GPIO1 = 145, /*!< # */
    ALT_INT_INTERRUPT_GPIO2 = 146,
    /*!<
     * GPIO 0 - 2 interrupts.
     *  * All interrupts in this group are level triggered.
     */

    ALT_INT_INTERRUPT_TIMER_L4SP_0_IRQ = 147, /*!< # */
    ALT_INT_INTERRUPT_TIMER_L4SP_1_IRQ = 148, /*!< # */
    ALT_INT_INTERRUPT_TIMER_OSC1_0_IRQ = 149, /*!< # */
    ALT_INT_INTERRUPT_TIMER_OSC1_1_IRQ = 150,
    /*!<
     * Timer interrupts.
     *  * All interrupts in this group are level triggered.
     */

    ALT_INT_INTERRUPT_WDOG0_IRQ = 151, /*!< # */
    ALT_INT_INTERRUPT_WDOG1_IRQ = 152,
    /*!<
     * Watchdog 0 - 1 interrupts.
     *  * All interrupts in this group are level triggered.
     */

    ALT_INT_INTERRUPT_CLKMGR_IRQ   = 153, /*!< # */
    ALT_INT_INTERRUPT_RESTMGR_IRQ  = 154, /*!< # */
    ALT_INT_INTERRUPT_FPGA_MAN_IRQ = 155,
    /*!<
     * Clock, Reset, and FPGA Manager interrupts.
     *  * All interrupts in this group are level triggered.
     */

    ALT_INT_INTERRUPT_NCTIIRQ0 = 156, /*!< # */
    ALT_INT_INTERRUPT_NCTIIRQ1 = 157,
    /*!<
     * CoreSight nCTIIRQ[0] and nCTIIRQ[1] interrupts.
     *  * All interrupts in this group are level triggered.
     */

    ALT_INT_INTERRUPT_SEC_MGR_INTR = 158,
    /*!<
     * Security Manager interrupts.
     *  * This interrupt is level triggered.
     */

    ALT_INT_INTERRUPT_DATABWERR = 159
    /*!<
     * L2-Cache DATABWERR interrupt.
     *  * This interrupt is edge triggered.
     */

} ALT_INT_INTERRUPT_t;

#ifdef __cplusplus
}
#endif

#endif /* __ALT_INT_DEVICE_H__ */
