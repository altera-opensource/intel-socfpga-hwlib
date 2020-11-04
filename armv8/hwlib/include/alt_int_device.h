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

/*
 * $Id: //acds/main/embedded/ip/hps/armv8/hwlib/include/alt_int_device.h#1 $
 */

#ifndef __ALT_INT_DEVICE_H__
#define __ALT_INT_DEVICE_H__

#ifdef __cplusplus
extern "C"
{
#endif

/*!
 * This type definition enumerates all the interrupt identification types.
 */
typedef enum ALT_INT_INTERRUPT_e
{
    /*!<
     * Software Generated Interrupts (SGI), 0 - 15.
     *  * All interrupts in this group are software triggered.
     */
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

    ALT_INT_INTERRUPT_SDM_IRQ0 = 32,
    ALT_INT_INTERRUPT_SDM_IRQ1 = 33,
    ALT_INT_INTERRUPT_SDM_IRQ2 = 34,
    ALT_INT_INTERRUPT_SDM_IRQ3 = 35,
    ALT_INT_INTERRUPT_SDM_IRQ4 = 36,
    ALT_INT_INTERRUPT_SDM_IRQ5 = 37,
    ALT_INT_INTERRUPT_SDM_IRQ6 = 38,
    ALT_INT_INTERRUPT_SDM_IRQ7 = 39,
    
    ALT_INT_INTERRUPT_SCP_IRQ0 = 40,
    ALT_INT_INTERRUPT_SCP_IRQ1 = 41,
    ALT_INT_INTERRUPT_SCP_IRQ2 = 42,
    ALT_INT_INTERRUPT_SCP_IRQ3 = 43,
    ALT_INT_INTERRUPT_SCP_IRQ4 = 44,
    ALT_INT_INTERRUPT_SCP_IRQ5 = 45,
    ALT_INT_INTERRUPT_SCP_IRQ6 = 46,
    ALT_INT_INTERRUPT_SCP_IRQ7 = 47,

    /*!<
     * System Manager SERR_Global interrupt. This interrupt combines the
     * following items: ddr_serr, dma_serr, emac0_tx_serr, emac0_rx_serr,
     * emac1_tx_serr, emac1_rx_serr, emac2_tx_serr, emac2_rx_serr, usb0_serr,
     * usb1_serr, sdmmc_porta_serr, sdmmc_portb_serr, nandr_serr, nandw_serr,
     * nande_serr, ram_serr.
     *  * This interrupt is level triggered.
     */
    ALT_INT_INTERRUPT_SERR_GLOBAL = 48,

    /*!<
     * Interrupt request from the FPGA logic, 0 - 63.
     *  * Trigger type depends on the implementation in the FPGA.
     */

    ALT_INT_INTERRUPT_F2S_FPGA_IRQ0 = 49,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ1 = 50,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ2 = 51,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ3 = 52,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ4 = 53,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ5 = 54,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ6 = 55,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ7 = 56,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ8 = 57,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ9 = 58,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ10 = 59,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ11 = 60,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ12 = 61,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ13 = 62,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ14 = 63,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ15 = 64,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ16 = 65,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ17 = 66,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ18 = 67,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ19 = 68,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ20 = 69,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ21 = 70,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ22 = 71,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ23 = 72,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ24 = 73,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ25 = 74,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ26 = 75,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ27 = 76,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ28 = 77,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ29 = 78,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ30 = 79,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ31 = 80,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ32 = 81,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ33 = 82,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ34 = 83,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ35 = 84,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ36 = 85,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ37 = 86,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ38 = 87,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ39 = 88,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ40 = 89,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ41 = 90,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ42 = 91,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ43 = 92,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ44 = 93,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ45 = 94,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ46 = 95,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ47 = 96,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ48 = 97,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ49 = 98,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ50 = 99,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ51 = 100,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ52 = 101,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ53 = 102,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ54 = 103,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ55 = 104,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ56 = 105,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ57 = 106,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ58 = 107,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ59 = 108,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ60 = 109,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ61 = 110,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ62 = 111,
    ALT_INT_INTERRUPT_F2S_FPGA_IRQ63 = 112,

    /*!<
     * Interrupts sourced from the DMA Controller.
     *  * All interrupts in this group are level triggered.
     */

    ALT_INT_INTERRUPT_DMA_IRQ0      = 113, /*!< # */
    ALT_INT_INTERRUPT_DMA_IRQ1      = 114, /*!< # */
    ALT_INT_INTERRUPT_DMA_IRQ2      = 115, /*!< # */
    ALT_INT_INTERRUPT_DMA_IRQ3      = 116, /*!< # */
    ALT_INT_INTERRUPT_DMA_IRQ4      = 117, /*!< # */
    ALT_INT_INTERRUPT_DMA_IRQ5      = 118, /*!< # */
    ALT_INT_INTERRUPT_DMA_IRQ6      = 119, /*!< # */
    ALT_INT_INTERRUPT_DMA_IRQ7      = 120, /*!< # */
    ALT_INT_INTERRUPT_DMA_IRQ_ABORT = 121,

    /*!<
     * Interrupts from EMAC 0 - 3. This interrupt combines the sbd_intr_o,
     * lpi_intr_o, and pmt_intr_o items of the respective EMAC controller.
     *  * All interrupts in this group are level triggered.
     */
    ALT_INT_INTERRUPT_EMAC0_IRQ = 122, /*!< # */
    ALT_INT_INTERRUPT_EMAC1_IRQ = 123, /*!< # */
    ALT_INT_INTERRUPT_EMAC2_IRQ = 124,
    
    /*!<
     * Interrupts from USB 0 - 1.
     *  * All interrupts in this group are level triggered.
     */
    ALT_INT_INTERRUPT_USB0_IRQ = 125, /*!< # */
    ALT_INT_INTERRUPT_USB1_IRQ = 126,
    
    /*!<
     * SDRAM scheduler interrupt.
     *  * This interrupt is level triggered.
     */
    ALT_INT_INTERRUPT_HMC_ERROR = 127,
    

    /*!<
     * SDMMC, and NAND interrupts respectively.
     *  * All interrupts in this group are level triggered.
     */
    ALT_INT_INTERRUPT_SDMMC_IRQ = 128, /*!< # */
    ALT_INT_INTERRUPT_NAND_IRQ  = 129, /*!< # */
    /*ALT_INT_INTERRUPT_QSPI_IRQ  = 130, QSPI IRQ has been Removed as all 
                                        QSPI accesses must go through the SDM*/
    
    /*!<
     * SPI 0 - 1 slave and SPI 2 - 3 master interrupts. This interrupt combines
     * the following items: ssi_txe_intr, ssi_txo_intr, ssi_rxf_intr,
     * ssi_rxo_intr, ssi_rxu_intr, and ssi_mst_intr.
     *  * All interrupts in this group are level triggered.
     */
    ALT_INT_INTERRUPT_SPI0_IRQ = 131, /*!< # */
    ALT_INT_INTERRUPT_SPI1_IRQ = 132, /*!< # */
    ALT_INT_INTERRUPT_SPI2_IRQ = 133, /*!< # */
    ALT_INT_INTERRUPT_SPI3_IRQ = 134,

    /*!<
     * I2C 0 - 4 interrupts. This interrupt combines the following items:
     * ic_rx_under_intr, ic_rx_full_intr, ic_tx_over_intr, ic_tx_empty_intr,
     * ic_rd_req_intr, ic_tx_abrt_intr, ic_rx_done_intr, ic_activity_intr,
     * ic_stop_det_intr, ic_start_det_intr, and ic_gen_call_intr.
     * I2C2 can be used with EMAC0, I2C3 can be used with EMAC1, and I2C4 can
     * be used with EMAC2.
     *  * All interrupts in this group are level triggered.
     */
    ALT_INT_INTERRUPT_I2C0_IRQ = 135, /*!< # */
    ALT_INT_INTERRUPT_I2C1_IRQ = 136, /*!< # */
    ALT_INT_INTERRUPT_I2C2_IRQ = 137, /*!< # */
    ALT_INT_INTERRUPT_I2C3_IRQ = 138, /*!< # */
    ALT_INT_INTERRUPT_I2C4_IRQ = 139,

    /*!<
     * UART 0 - 1 interrupts.
     *  * All interrupts in this group are level triggered.
     */
    ALT_INT_INTERRUPT_UART0 = 140, /*!< # */
    ALT_INT_INTERRUPT_UART1 = 141,

    /*!<
     * GPIO 0 - 2 interrupts.
     *  * All interrupts in this group are level triggered.
     */
    ALT_INT_INTERRUPT_GPIO0 = 142, /*!< # */
    ALT_INT_INTERRUPT_GPIO1 = 143, /*!< # */
    ALT_INT_INTERRUPT_GPIO2 = 144,

    /*!<
     * Timer interrupts.
     *  * All interrupts in this group are level triggered.
     */
    ALT_INT_INTERRUPT_TIMER_L4SP_0_IRQ = 145, /*!< # */
    ALT_INT_INTERRUPT_TIMER_L4SP_1_IRQ = 146, /*!< # */
    ALT_INT_INTERRUPT_TIMER_OSC1_0_IRQ = 147, /*!< # */
    ALT_INT_INTERRUPT_TIMER_OSC1_1_IRQ = 148,

    /*!<
     * Watchdog 0 - 1 interrupts.
     *  * All interrupts in this group are level triggered.
     */
    ALT_INT_INTERRUPT_WDOG0_IRQ = 149, /*!< # */
    ALT_INT_INTERRUPT_WDOG1_IRQ = 150, /*!< # */
    ALT_INT_INTERRUPT_WDOG2_IRQ = 157, /*!< # */
    ALT_INT_INTERRUPT_WDOG3_IRQ = 158,

    /*!<
     * Clock, Reset, and FPGA Manager interrupts.
     *  * All interrupts in this group are level triggered.
     */
    ALT_INT_INTERRUPT_CLKMGR_IRQ   = 151, /*!< # */
    ALT_INT_INTERRUPT_RESTMGR_IRQ  = 152,
    
    /*!<
     * CoreSight nCTIIRQ[0] and nCTIIRQ[1] interrupts.
     *  * All interrupts in this group are level triggered.
     */
    ALT_INT_INTERRUPT_NCTIIRQ0 = 153, /*!< # */
    ALT_INT_INTERRUPT_NCTIIRQ1 = 154, /*!< # */
    ALT_INT_INTERRUPT_NCTIIRQ2 = 155, /*!< # */
    ALT_INT_INTERRUPT_NCTIIRQ3 = 156,

    /* INT 157,158 are WDOG2/3 above */
    /* INT 159 is not connected */
    /*!< System Memory Management Unit (SMMU) interrupts */
    /*!< SMMU Global Fault Interrupts, for secure on nonsecure 
         These can be cleanred by writing 0xFFFFFFFF to the 
         Secure/Non-Secure Global Fault Status Registers */
    
    ALT_INT_INTERRUPT_GLOBAL_FLT_S    = 160,/*!< # */
    ALT_INT_INTERRUPT_GLOBAL_FLT_NS   = 161,
    
    /*!< SMMU TBU performance counter overflow interrupts
        These interrupts are generated by the Translation 
        Buffer Unit (TBU) of the SMMU. They can be cleared
        by writing a 1 to the corresponding bit of the 
        performance counter overflow register */
    ALT_INT_INTERRUPT_FPGA_TBU = 162,
    ALT_INT_INTERRUPT_DMA_TBU  = 163,
    ALT_INT_INTERRUPT_EMAC_TBU = 164,
    ALT_INT_INTERRUPT_IO_TBU   = 165,
    ALT_INT_INTERRUPT_SCP_TBU  = 166,
    
    /* INT 167 is not connected */
    /*!< SMMU context interrupts
      _NS and _S are logical ORs of all the CXT# interrupts
      that are Non-Secure/Secure. To clear them write 
      0xFFFFFFFF to the Fault status register of the faulting 
      context, followed by a write to a resume register
    */
    ALT_INT_INTERRUPT_CXT_NS = 168,
    ALT_INT_INTERRUPT_CXT_S  = 169,
    ALT_INT_INTERRUPT_CXT0   = 170,
    ALT_INT_INTERRUPT_CXT1   = 171,
    ALT_INT_INTERRUPT_CXT2   = 172,
    ALT_INT_INTERRUPT_CXT3   = 173,
    ALT_INT_INTERRUPT_CXT4   = 174,
    ALT_INT_INTERRUPT_CXT5   = 175,
    ALT_INT_INTERRUPT_CXT6   = 176,
    ALT_INT_INTERRUPT_CXT7   = 177,
    ALT_INT_INTERRUPT_CXT8   = 178,
    ALT_INT_INTERRUPT_CXT9   = 179,
    ALT_INT_INTERRUPT_CXT10  = 180,
    ALT_INT_INTERRUPT_CXT11  = 181,
    ALT_INT_INTERRUPT_CXT12  = 182,
    ALT_INT_INTERRUPT_CXT13  = 183,
    ALT_INT_INTERRUPT_CXT14  = 184,
    ALT_INT_INTERRUPT_CXT15  = 185,
    ALT_INT_INTERRUPT_CXT16  = 186,
    ALT_INT_INTERRUPT_CXT17  = 187,
    ALT_INT_INTERRUPT_CXT18  = 188,
    ALT_INT_INTERRUPT_CXT19  = 189,
    ALT_INT_INTERRUPT_CXT20  = 190,
    ALT_INT_INTERRUPT_CXT21  = 191,
    ALT_INT_INTERRUPT_CXT22  = 192,
    ALT_INT_INTERRUPT_CXT23  = 193,
    ALT_INT_INTERRUPT_CXT24  = 194,
    ALT_INT_INTERRUPT_CXT25  = 195,
    ALT_INT_INTERRUPT_CXT26  = 196,
    ALT_INT_INTERRUPT_CXT27  = 197,
    ALT_INT_INTERRUPT_CXT28  = 198,
    ALT_INT_INTERRUPT_CXT29  = 199,
    ALT_INT_INTERRUPT_CXT30  = 200,
    ALT_INT_INTERRUPT_CXT31  = 201,
    
    /*!< System Monitor  interrupts 
    */
    ALT_INT_INTERRUPT_SYS_MON0  = 202,
    ALT_INT_INTERRUPT_SYS_MON1  = 203,
    ALT_INT_INTERRUPT_SYS_MON2  = 204,
    ALT_INT_INTERRUPT_SYS_MON3  = 205,
    ALT_INT_INTERRUPT_SYS_MON4  = 206,
    ALT_INT_INTERRUPT_SYS_MON5  = 207,
    ALT_INT_INTERRUPT_SYS_MON6  = 208,
    ALT_INT_INTERRUPT_SYS_MON7  = 209,
    ALT_INT_INTERRUPT_SYS_MON8  = 210,
    ALT_INT_INTERRUPT_SYS_MON9  = 211,
    ALT_INT_INTERRUPT_SYS_MON10 = 212,
    ALT_INT_INTERRUPT_SYS_MON11 = 213
    
} ALT_INT_INTERRUPT_t;

#ifdef __cplusplus
}
#endif

#endif /* __ALT_INT_DEVICE_H__ */
