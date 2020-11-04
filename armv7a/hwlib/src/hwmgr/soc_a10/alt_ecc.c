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
 * $Id: //acds/rel/20.1/embedded/ip/hps/altera_hps/hwlib/src/hwmgr/soc_a10/alt_ecc.c#1 $
 */

#include <stdio.h>
#include <inttypes.h>
#include "alt_cache.h"
#include "alt_ecc.h"
#include "alt_mmu.h"
#include "alt_sdmmc.h"
#include "alt_qspi.h"
#include "socal/alt_ecc_dmac.h"
#include "socal/alt_ecc_emac0_rx_ecc.h"
#include "socal/alt_ecc_emac0_tx_ecc.h"
#include "socal/alt_ecc_emac1_rx_ecc.h"
#include "socal/alt_ecc_emac1_tx_ecc.h"
#include "socal/alt_ecc_emac2_rx_ecc.h"
#include "socal/alt_ecc_emac2_tx_ecc.h"
#include "socal/alt_ecc_nand.h"
#include "socal/alt_ecc_nandr.h"
#include "socal/alt_ecc_nandw.h"
#include "socal/alt_ecc_ocram_ecc.h"
#include "socal/alt_ecc_otg0_ecc.h"
#include "socal/alt_ecc_otg1_ecc.h"
#include "socal/alt_ecc_qspi.h"
#include "socal/alt_ecc_sdmmc.h"
#include "socal/alt_sysmgr.h"
#include "socal/hps.h"
#include "socal/socal.h"
#include "alt_printf.h"

#ifdef DEBUG_ALT_ECC
  #define dprintf printf
#else
  #define dprintf null_printf
#endif

static struct
{
    /*
     * Bit mask of all ECC enabled RAM blocks. This is used to assist
     * alt_ecc_status_get_next()'s implementation performance.
     * Bit 0 is used to flag that init() was called.
     */
    uint32_t ecc_enabled;

} g_eccState = { 0 };

static char block[(64 + 32) * 1024] __attribute__ ((aligned (ALT_MMU_SMALL_PAGE_SIZE)));

/*****/

ALT_STATUS_CODE alt_ecc_init(void)
{
    g_eccState.ecc_enabled = (1 << 0);

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_ecc_uninit(void)
{
    int i;
    for (i = 1; i < 12; ++i)
    {
        if (g_eccState.ecc_enabled & (1 << i))
        {
            alt_ecc_stop((ALT_ECC_RAM_ENUM_t)i);
        }
    }

    g_eccState.ecc_enabled = 0;

    return ALT_E_SUCCESS;
}

/*****/

__attribute__((weak)) ALT_STATUS_CODE alt_cache_l2_ecc_start(__attribute__((unused))void * block, __attribute__((unused))size_t size)
{
    return ALT_E_SUCCESS;
}

static ALT_STATUS_CODE alt_ocram_ecc_start(void);

__attribute__((weak)) ALT_STATUS_CODE alt_dma_ecc_start(void)
{
    return ALT_E_SUCCESS;
}

__attribute__((weak)) ALT_STATUS_CODE alt_qspi_ecc_start(void)
{
    return ALT_E_SUCCESS;
}

__attribute__((weak)) ALT_STATUS_CODE alt_sdmmc_ecc_start(void)
{
    return ALT_E_SUCCESS;
}

__attribute__((weak)) ALT_STATUS_CODE alt_sdmmc_write(__attribute__((unused))ALT_SDMMC_CARD_INFO_t *card_info, __attribute__((unused))void *dest, __attribute__((unused))void *src,  __attribute__((unused))const size_t size)
{
    return ALT_E_SUCCESS;
}

__attribute__((weak)) ALT_STATUS_CODE alt_sdmmc_read(__attribute__((unused))ALT_SDMMC_CARD_INFO_t *card_info, __attribute__((unused))void *dest,  __attribute__((unused))void *src, __attribute__((unused))const size_t size)
{
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_ecc_start(ALT_ECC_RAM_ENUM_t ram_block)
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;

    if (!(g_eccState.ecc_enabled & (1 << 0)))
    {
        dprintf("ECC[start]: Global init not done.\n");
        return ALT_E_ERROR;
    }

    if (g_eccState.ecc_enabled & (1 << ram_block))
    {
        /* ECC already enabled on requested block. */
        return ALT_E_SUCCESS;
    }

    /*****/

    switch (ram_block)
    {
    case ALT_ECC_RAM_L2_DATA:
        dprintf("ECC[start]: Starting L2.\n");
        status = alt_cache_l2_ecc_start(block, sizeof(block));
        break;

    case ALT_ECC_RAM_OCRAM:
        status = alt_ocram_ecc_start();
        break;

    case ALT_ECC_RAM_DMA:
        status = alt_dma_ecc_start();
        break;

    case ALT_ECC_RAM_QSPI:
        dprintf("ECC[start]: Starting QSPI.\n");
        status = alt_qspi_ecc_start();
        break;

    case ALT_ECC_RAM_SDMMC:
        dprintf("ECC[start]: Starting SDMMC.\n");
        status = alt_sdmmc_ecc_start();
        break;

    case ALT_ECC_RAM_USB0:
    case ALT_ECC_RAM_USB1:
    case ALT_ECC_RAM_EMAC0:
    case ALT_ECC_RAM_EMAC1:
    case ALT_ECC_RAM_EMAC2:
    case ALT_ECC_RAM_NAND:
        
        return ALT_E_ERROR;

    default:
        return ALT_E_BAD_ARG;
    }

    if (status == ALT_E_SUCCESS)
    {
        g_eccState.ecc_enabled |= (1 << ram_block);
    }

    return status;
}

ALT_STATUS_CODE alt_ecc_stop(ALT_ECC_RAM_ENUM_t ram_block)
{
    switch (ram_block)
    {
    case ALT_ECC_RAM_L2_DATA:
        alt_write_word(ALT_SYSMGR_MPU_CTL_L2_ECC_ADDR, 0);
        break;

    case ALT_ECC_RAM_OCRAM:
        alt_write_word(ALT_ECC_OCRAM_ECC_CTL_ADDR, 0);
        break;

    case ALT_ECC_RAM_USB0:
        alt_write_word(ALT_ECC_OTG0_ECC_CTL_ADDR, 0);
        break;

    case ALT_ECC_RAM_USB1:
        alt_write_word(ALT_ECC_OTG1_ECC_CTL_ADDR, 0);
        break;

    case ALT_ECC_RAM_EMAC0:
        alt_write_word(ALT_ECC_EMAC0_RX_ECC_CTL_ADDR, 0);
        alt_write_word(ALT_ECC_EMAC0_TX_ECC_CTL_ADDR, 0);
        break;

    case ALT_ECC_RAM_EMAC1:
        alt_write_word(ALT_ECC_EMAC1_RX_ECC_CTL_ADDR, 0);
        alt_write_word(ALT_ECC_EMAC1_TX_ECC_CTL_ADDR, 0);
        break;

    case ALT_ECC_RAM_EMAC2:
        alt_write_word(ALT_ECC_EMAC2_RX_ECC_CTL_ADDR, 0);
        alt_write_word(ALT_ECC_EMAC2_TX_ECC_CTL_ADDR, 0);
        break;

    case ALT_ECC_RAM_DMA:
        alt_write_word(ALT_ECC_DMAC_CTL_ADDR, 0);
        break;

    case ALT_ECC_RAM_NAND:
        alt_write_word(ALT_ECC_NAND_CTL_ADDR,  0);
        alt_write_word(ALT_ECC_NANDR_CTL_ADDR, 0);
        alt_write_word(ALT_ECC_NANDW_CTL_ADDR, 0);
        break;

    case ALT_ECC_RAM_QSPI:
        alt_write_word(ALT_ECC_QSPI_CTL_ADDR, 0);
        break;

    case ALT_ECC_RAM_SDMMC:
        alt_write_word(ALT_ECC_SDMMC_CTL_ADDR, 0);
        break;

    default:
        return ALT_E_BAD_ARG;
    }

    g_eccState.ecc_enabled &= ~(1 << ram_block);

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_ecc_is_enabled(ALT_ECC_RAM_ENUM_t ram_block)
{
    switch (ram_block)
    {
    case ALT_ECC_RAM_L2_DATA:
    case ALT_ECC_RAM_OCRAM:
    case ALT_ECC_RAM_USB0:
    case ALT_ECC_RAM_USB1:
    case ALT_ECC_RAM_EMAC0:
    case ALT_ECC_RAM_EMAC1:
    case ALT_ECC_RAM_EMAC2:
    case ALT_ECC_RAM_DMA:
    case ALT_ECC_RAM_NAND:
    case ALT_ECC_RAM_QSPI:
    case ALT_ECC_RAM_SDMMC:
        if (g_eccState.ecc_enabled & (1 << ram_block))
        {
            return ALT_E_TRUE;
        }
        else
        {
            return ALT_E_FALSE;
        }

    default:
        return ALT_E_BAD_ARG;
    }
}

ALT_STATUS_CODE alt_ecc_status_get(ALT_ECC_RAM_ENUM_t ram_block,
                                   uint32_t * status)
{
    bool enabled = (g_eccState.ecc_enabled & (1 << ram_block)) != 0;
    *status = 0;

    switch (ram_block)
    {
    case ALT_ECC_RAM_L2_DATA:
        if (enabled)
        {
            uint32_t l2info   = alt_read_word(ALT_SYSMGR_MPU_STAT_L2_ECC_ADDR);
            uint32_t l2status = 0;

            if (l2info & ALT_SYSMGR_MPU_STAT_L2_ECC_SERR_PENDING_SET_MSK)
            {
                l2status |= ALT_ECC_STATUS_L2_SERR;
            }
            if (l2info & ALT_SYSMGR_MPU_STAT_L2_ECC_MERR_PENDING_SET_MSK)
            {
                l2status |= ALT_ECC_STATUS_L2_DERR;
            }
            *status = l2status;
        }
        break;

    case ALT_ECC_RAM_OCRAM:
        if (enabled)
        {
            uint32_t ocramstatus = 0;
            uint32_t intstat = alt_read_word(ALT_ECC_OCRAM_ECC_INTSTAT_ADDR);
            if (intstat & ALT_ECC_OCRAM_ECC_INTSTAT_SERRPENA_SET_MSK)
            {
                ocramstatus |= ALT_ECC_STATUS_OCRAM_SERR;
            }
            if (intstat & ALT_ECC_OCRAM_ECC_INTSTAT_DERRPENA_SET_MSK)
            {
                ocramstatus |= ALT_ECC_STATUS_OCRAM_DERR;
            }
            *status = ocramstatus;
        }
        break;

    case ALT_ECC_RAM_USB0:
        if (enabled)
        {
            uint32_t otg0status = 0;
            uint32_t intstat = alt_read_word(ALT_ECC_OTG0_ECC_INTSTAT_ADDR);

            if (intstat & ALT_ECC_OTG0_ECC_INTSTAT_SERRPENA_SET_MSK)
            {
                otg0status |= ALT_ECC_STATUS_USB0_SERR;
            }
            if (intstat & ALT_ECC_OTG0_ECC_INTSTAT_DERRPENA_SET_MSK)
            {
                otg0status |= ALT_ECC_STATUS_USB0_DERR;
            }

            *status = otg0status;
        }
        break;

    case ALT_ECC_RAM_USB1:
        if (enabled)
        {
            uint32_t otg1status = 0;
            uint32_t intstat = alt_read_word(ALT_ECC_OTG1_ECC_INTSTAT_ADDR);

            if (intstat & ALT_ECC_OTG1_ECC_INTSTAT_SERRPENA_SET_MSK)
            {
                otg1status |= ALT_ECC_STATUS_USB1_SERR;
            }
            if (intstat & ALT_ECC_OTG1_ECC_INTSTAT_DERRPENA_SET_MSK)
            {
                otg1status |= ALT_ECC_STATUS_USB1_DERR;
            }

            *status = otg1status;
        }
        break;

    case ALT_ECC_RAM_EMAC0:
        if (enabled)
        {
            uint32_t emac0status = 0;
            uint32_t rxintstat = alt_read_word(ALT_ECC_EMAC0_RX_ECC_INTSTAT_ADDR);
            uint32_t txintstat = alt_read_word(ALT_ECC_EMAC0_TX_ECC_INTSTAT_ADDR);

            if (rxintstat & ALT_ECC_EMAC0_RX_ECC_INTSTAT_SERRPENA_SET_MSK)
            {
                emac0status |= ALT_ECC_STATUS_EMAC0_RX_FIFO_SERR;
            }
            if (rxintstat & ALT_ECC_EMAC0_RX_ECC_INTSTAT_DERRPENA_SET_MSK)
            {
                emac0status |= ALT_ECC_STATUS_EMAC0_RX_FIFO_DERR;
            }
            if (txintstat & ALT_ECC_EMAC0_TX_ECC_INTSTAT_SERRPENA_SET_MSK)
            {
                emac0status |= ALT_ECC_STATUS_EMAC0_TX_FIFO_SERR;
            }
            if (txintstat & ALT_ECC_EMAC0_TX_ECC_INTSTAT_DERRPENA_SET_MSK)
            {
                emac0status |= ALT_ECC_STATUS_EMAC0_TX_FIFO_DERR;
            }

            *status = emac0status;
        }
        break;

    case ALT_ECC_RAM_EMAC1:
        if (enabled)
        {
            uint32_t emac1status = 0;
            uint32_t rxintstat = alt_read_word(ALT_ECC_EMAC1_RX_ECC_INTSTAT_ADDR);
            uint32_t txintstat = alt_read_word(ALT_ECC_EMAC1_TX_ECC_INTSTAT_ADDR);

            if (rxintstat & ALT_ECC_EMAC1_RX_ECC_INTSTAT_SERRPENA_SET_MSK)
            {
                emac1status |= ALT_ECC_STATUS_EMAC1_RX_FIFO_SERR;
            }
            if (rxintstat & ALT_ECC_EMAC1_RX_ECC_INTSTAT_DERRPENA_SET_MSK)
            {
                emac1status |= ALT_ECC_STATUS_EMAC1_RX_FIFO_DERR;
            }
            if (txintstat & ALT_ECC_EMAC1_TX_ECC_INTSTAT_SERRPENA_SET_MSK)
            {
                emac1status |= ALT_ECC_STATUS_EMAC1_TX_FIFO_SERR;
            }
            if (txintstat & ALT_ECC_EMAC1_TX_ECC_INTSTAT_DERRPENA_SET_MSK)
            {
                emac1status |= ALT_ECC_STATUS_EMAC1_TX_FIFO_DERR;
            }

            *status = emac1status;
        }
        break;

    case ALT_ECC_RAM_EMAC2:
        if (enabled)
        {
            uint32_t emac2status = 0;
            uint32_t rxintstat = alt_read_word(ALT_ECC_EMAC2_RX_ECC_INTSTAT_ADDR);
            uint32_t txintstat = alt_read_word(ALT_ECC_EMAC2_TX_ECC_INTSTAT_ADDR);

            if (rxintstat & ALT_ECC_EMAC2_RX_ECC_INTSTAT_SERRPENA_SET_MSK)
            {
                emac2status |= ALT_ECC_STATUS_EMAC2_RX_FIFO_SERR;
            }
            if (rxintstat & ALT_ECC_EMAC2_RX_ECC_INTSTAT_DERRPENA_SET_MSK)
            {
                emac2status |= ALT_ECC_STATUS_EMAC2_RX_FIFO_DERR;
            }
            if (txintstat & ALT_ECC_EMAC2_TX_ECC_INTSTAT_SERRPENA_SET_MSK)
            {
                emac2status |= ALT_ECC_STATUS_EMAC2_TX_FIFO_SERR;
            }
            if (txintstat & ALT_ECC_EMAC2_TX_ECC_INTSTAT_DERRPENA_SET_MSK)
            {
                emac2status |= ALT_ECC_STATUS_EMAC2_TX_FIFO_DERR;
            }

            *status = emac2status;
        }
        break;

    case ALT_ECC_RAM_DMA:
        if (enabled)
        {
            uint32_t dmastatus = 0;
            uint32_t intstat = alt_read_word(ALT_ECC_DMAC_INTSTAT_ADDR);

            if (intstat & ALT_ECC_DMAC_INTSTAT_SERRPENA_SET_MSK)
            {
                dmastatus |= ALT_ECC_STATUS_DMA_SERR;
            }
            if (intstat & ALT_ECC_DMAC_INTSTAT_DERRPENA_SET_MSK)
            {
                dmastatus |= ALT_ECC_STATUS_DMA_DERR;
            }

            *status = dmastatus;
        }
        break;

    case ALT_ECC_RAM_NAND:
        if (enabled)
        {
            uint32_t nandstatus = 0;
            uint32_t bintstat = alt_read_word(ALT_ECC_NAND_INTSTAT_ADDR);
            uint32_t wintstat = alt_read_word(ALT_ECC_NANDW_INTSTAT_ADDR);
            uint32_t rintstat = alt_read_word(ALT_ECC_NANDR_INTSTAT_ADDR);

            if (bintstat & ALT_ECC_NAND_INTSTAT_SERRPENA_SET_MSK)
            {
                nandstatus |= ALT_ECC_STATUS_NAND_BUFFER_SERR;
            }
            if (bintstat & ALT_ECC_NAND_INTSTAT_DERRPENA_SET_MSK)
            {
                nandstatus |= ALT_ECC_STATUS_NAND_BUFFER_DERR;
            }
            if (wintstat & ALT_ECC_NANDW_INTSTAT_SERRPENA_SET_MSK)
            {
                nandstatus |= ALT_ECC_STATUS_NAND_WR_FIFO_SERR;
            }
            if (wintstat & ALT_ECC_NANDW_INTSTAT_DERRPENA_SET_MSK)
            {
                nandstatus |= ALT_ECC_STATUS_NAND_WR_FIFO_DERR;
            }
            if (rintstat & ALT_ECC_NANDR_INTSTAT_SERRPENA_SET_MSK)
            {
                nandstatus |= ALT_ECC_STATUS_NAND_RD_FIFO_SERR;
            }
            if (rintstat & ALT_ECC_NANDR_INTSTAT_DERRPENA_SET_MSK)
            {
                nandstatus |= ALT_ECC_STATUS_NAND_RD_FIFO_DERR;
            }

            *status = nandstatus;
        }
        break;

    case ALT_ECC_RAM_QSPI:
        if (enabled)
        {
            uint32_t qspistatus = 0;
            uint32_t intstat = alt_read_word(ALT_ECC_QSPI_INTSTAT_ADDR);

            if (intstat & ALT_ECC_QSPI_INTSTAT_SERRPENA_SET_MSK)
            {
                qspistatus |= ALT_ECC_STATUS_QSPI_SERR;
            }
            if (intstat & ALT_ECC_QSPI_INTSTAT_DERRPENA_SET_MSK)
            {
                qspistatus |= ALT_ECC_STATUS_QSPI_DERR;
            }

            *status = qspistatus;
        }
        break;

    case ALT_ECC_RAM_SDMMC:
        if (enabled)
        {
            uint32_t sdmmcstatus = 0;
            uint32_t intstat = alt_read_word(ALT_ECC_SDMMC_INTSTAT_ADDR);

            if (intstat & ALT_ECC_SDMMC_INTSTAT_SERRPENA_SET_MSK)
            {
                sdmmcstatus |= ALT_ECC_STATUS_SDMMC_PORT_A_SERR;
            }
            if (intstat & ALT_ECC_SDMMC_INTSTAT_DERRPENA_SET_MSK)
            {
                sdmmcstatus |= ALT_ECC_STATUS_SDMMC_PORT_A_DERR;
            }
            if (intstat & ALT_ECC_SDMMC_INTSTAT_SERRPENB_SET_MSK)
            {
                sdmmcstatus |= ALT_ECC_STATUS_SDMMC_PORT_B_SERR;
            }
            if (intstat & ALT_ECC_SDMMC_INTSTAT_DERRPENB_SET_MSK)
            {
                sdmmcstatus |= ALT_ECC_STATUS_SDMMC_PORT_B_DERR;
            }

            *status = sdmmcstatus;
        }
        break;

    default:
        return ALT_E_BAD_ARG;
    }

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_ecc_status_get_next(ALT_ECC_RAM_ENUM_t * ram_block,
                                        uint32_t * status)
{
    /*
     * Read the SERR and DERR status.
     */
    uint32_t serr = alt_read_word(ALT_SYSMGR_ECC_INTSTAT_SERR_ADDR);
    uint32_t derr = alt_read_word(ALT_SYSMGR_ECC_INTSTAT_DERR_ADDR);
    uint32_t active = serr | derr;

    /*
     * Maps the bits in the System Manager hardware field to HWLibs ECC block.
     */
    static int map[] =
    {
        ALT_ECC_RAM_L2_DATA, /* bit 0 */
        ALT_ECC_RAM_OCRAM,   /* bit 1 */
        ALT_ECC_RAM_USB0,    /* bit 2 */
        ALT_ECC_RAM_USB1,    /* bit 3 */
        ALT_ECC_RAM_EMAC0,   /* bit 4, EMAC0_RX */
        ALT_ECC_RAM_EMAC0,   /* bit 5, EMAC0_TX */
        ALT_ECC_RAM_EMAC1,   /* bit 6, EMAC1_RX */
        ALT_ECC_RAM_EMAC1,   /* bit 7, EMAC1_TX */
        ALT_ECC_RAM_EMAC2,   /* bit 8, EMAC2_RX */
        ALT_ECC_RAM_EMAC2,   /* bit 9, EMAC2_TX */
        ALT_ECC_RAM_DMA,     /* bit 10 */
        ALT_ECC_RAM_NAND,    /* bit 11, NAND_BUF */
        ALT_ECC_RAM_NAND,    /* bit 12, NAND_WR */
        ALT_ECC_RAM_NAND,    /* bit 13, NAND_RD */
        ALT_ECC_RAM_QSPI,    /* bit 14 */
        ALT_ECC_RAM_SDMMC,   /* bit 15, SDMMCA */
        ALT_ECC_RAM_SDMMC    /* bit 16, SDMMCB */
        /* bit 17, DDR0 */
        /* bit 18, DDR1 */
    };

    int i;
    for (i = 0; i < 17; ++i)
    {
        if (active & (1 << i))
        {
            int block = map[i];
            *ram_block = (ALT_ECC_RAM_ENUM_t)block;
            return alt_ecc_status_get((ALT_ECC_RAM_ENUM_t)block, status);
        }
    }

    return ALT_E_ERROR;
}

ALT_STATUS_CODE alt_ecc_status_clear(ALT_ECC_RAM_ENUM_t ram_block,
                                     uint32_t ecc_mask)
{
    uint32_t mask = 0;

    if (ecc_mask == 0)
    {
        /* No status to clear. */
        return ALT_E_SUCCESS;
    }

    switch (ram_block)
    {
    case ALT_ECC_RAM_L2_DATA:
        if (ecc_mask & ALT_ECC_STATUS_L2_SERR)
        {
            mask |= ALT_SYSMGR_MPU_CLR_L2_ECC_SERR_SET_MSK;
        }
        if (ecc_mask & ALT_ECC_STATUS_L2_DERR)
        {
            mask |= ALT_SYSMGR_MPU_CLR_L2_ECC_MERR_SET_MSK;
        }
        alt_write_word(ALT_SYSMGR_MPU_CLR_L2_ECC_ADDR, mask);
        break;

    case ALT_ECC_RAM_OCRAM:
        if (ecc_mask & ALT_ECC_STATUS_OCRAM_SERR)
        {
            mask |= ALT_ECC_OCRAM_ECC_INTSTAT_SERRPENA_SET_MSK;
        }
        if (ecc_mask & ALT_ECC_STATUS_OCRAM_DERR)
        {
            mask |= ALT_ECC_OCRAM_ECC_INTSTAT_DERRPENA_SET_MSK;
        }
        alt_write_word(ALT_ECC_OCRAM_ECC_INTSTAT_ADDR, mask);
        break;

    case ALT_ECC_RAM_DMA:
        if (ecc_mask & ALT_ECC_STATUS_DMA_SERR)
        {
            mask |= ALT_ECC_DMAC_INTSTAT_SERRPENA_SET_MSK;
        }
        if (ecc_mask & ALT_ECC_STATUS_DMA_DERR)
        {
            mask |= ALT_ECC_DMAC_INTSTAT_DERRPENA_SET_MSK;
        }
        alt_write_word(ALT_ECC_DMAC_INTSTAT_ADDR, mask);
        break;

    case ALT_ECC_RAM_SDMMC:
        if (ecc_mask & ALT_ECC_STATUS_SDMMC_PORT_A_SERR)
        {
            mask |= ALT_ECC_SDMMC_INTSTAT_SERRPENA_SET_MSK;
        }
        
        if (ecc_mask & ALT_ECC_STATUS_SDMMC_PORT_A_DERR)
        {
            mask |= ALT_ECC_SDMMC_INTSTAT_DERRPENA_SET_MSK;
        }

        if (ecc_mask & ALT_ECC_STATUS_SDMMC_PORT_B_SERR)
        {
            mask |= ALT_ECC_SDMMC_INTSTAT_SERRPENB_SET_MSK;
        }

        if (ecc_mask & ALT_ECC_STATUS_SDMMC_PORT_B_DERR)
        {
            mask |= ALT_ECC_SDMMC_INTSTAT_DERRPENB_SET_MSK;
        }

        alt_write_word(ALT_ECC_SDMMC_INTSTAT_ADDR, mask);
        break;

    case ALT_ECC_RAM_QSPI:
        if (ecc_mask & ALT_ECC_STATUS_QSPI_SERR)
        {
            mask |= ALT_ECC_QSPI_INTSTAT_SERRPENA_SET_MSK;
        }

        if (ecc_mask & ALT_ECC_STATUS_QSPI_DERR)
        {
            mask |= ALT_ECC_QSPI_INTSTAT_DERRPENA_SET_MSK;
        }

        alt_write_word(ALT_ECC_QSPI_INTSTAT_ADDR, mask);
        break;

    case ALT_ECC_RAM_USB0:
    case ALT_ECC_RAM_USB1:
    case ALT_ECC_RAM_EMAC0:
    case ALT_ECC_RAM_EMAC1:
    case ALT_ECC_RAM_EMAC2:
    case ALT_ECC_RAM_NAND:
        return ALT_E_ERROR;
    default:
        return ALT_E_BAD_ARG;
    }

    return ALT_E_SUCCESS;
}

static ALT_STATUS_CODE alt_ecc_status_int_endis_helper(ALT_ECC_RAM_ENUM_t ram_block, void * addr)
{
    uint32_t mask = 0;

    switch (ram_block)
    {
    case ALT_ECC_RAM_L2_DATA:
        mask = ALT_SYSMGR_ECC_INTMSK_SET_L2_SET_MSK;
        break;

    case ALT_ECC_RAM_OCRAM:
        mask = ALT_SYSMGR_ECC_INTMSK_SET_OCRAM_SET_MSK;
        break;

    case ALT_ECC_RAM_USB0:
        mask = ALT_SYSMGR_ECC_INTMSK_SET_USB0_SET_MSK;
        break;

    case ALT_ECC_RAM_USB1:
        mask = ALT_SYSMGR_ECC_INTMSK_SET_USB1_SET_MSK;
        break;

    case ALT_ECC_RAM_EMAC0:
        mask = ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_RX_SET_MSK | ALT_SYSMGR_ECC_INTMSK_SET_EMAC0_TX_SET_MSK;
        break;

    case ALT_ECC_RAM_EMAC1:
        mask = ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_RX_SET_MSK | ALT_SYSMGR_ECC_INTMSK_SET_EMAC1_TX_SET_MSK;
        break;

    case ALT_ECC_RAM_EMAC2:
        mask = ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_RX_SET_MSK | ALT_SYSMGR_ECC_INTMSK_SET_EMAC2_TX_SET_MSK;
        break;

    case ALT_ECC_RAM_DMA:
        mask = ALT_SYSMGR_ECC_INTMSK_SET_DMA_SET_MSK;
        break;

    case ALT_ECC_RAM_NAND:
        mask = ALT_SYSMGR_ECC_INTMSK_SET_NAND_BUF_SET_MSK | ALT_SYSMGR_ECC_INTMSK_SET_NAND_WR_SET_MSK | ALT_SYSMGR_ECC_INTMSK_SET_NAND_RD_SET_MSK;
        break;

    case ALT_ECC_RAM_QSPI:
        mask = ALT_SYSMGR_ECC_INTMSK_SET_QSPI_SET_MSK;
        break;

    case ALT_ECC_RAM_SDMMC:
        mask = ALT_SYSMGR_ECC_INTMSK_SET_SDMMCA_SET_MSK | ALT_SYSMGR_ECC_INTMSK_SET_SDMMCB_SET_MSK;
        break;

    default:
        return ALT_E_BAD_ARG;
    }

    alt_write_word(addr, mask);
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_ecc_status_int_enable(ALT_ECC_RAM_ENUM_t ram_block)
{
    return alt_ecc_status_int_endis_helper(ram_block, ALT_SYSMGR_ECC_INTMSK_CLR_ADDR);
}


ALT_STATUS_CODE alt_ecc_status_int_disable(ALT_ECC_RAM_ENUM_t ram_block)
{
    return alt_ecc_status_int_endis_helper(ram_block, ALT_SYSMGR_ECC_INTMSK_SET_ADDR);
}

__attribute__((weak)) ALT_STATUS_CODE alt_cache_l1_data_clean(__attribute__((unused))void * vaddress, __attribute__((unused))size_t length)
{
    return ALT_E_SUCCESS;
}

__attribute__((weak)) ALT_STATUS_CODE alt_cache_l1_data_invalidate(__attribute__((unused))void * vaddress, __attribute__((unused))size_t length)
{
    return ALT_E_SUCCESS;
}

__attribute__((weak)) ALT_STATUS_CODE alt_cache_l1_data_purge(__attribute__((unused))void * vaddress, __attribute__((unused))size_t length)
{
    return ALT_E_SUCCESS;
}


static ALT_STATUS_CODE alt_ecc_l2_inject(bool derr, char * addr)
{
#define BLOCK_CACHE_LINE_COUNT 1
#define BLOCK_UINT32T_COUNT    (BLOCK_CACHE_LINE_COUNT * ALT_CACHE_LINE_SIZE / sizeof(uint32_t))

    uint32_t i;
    uint32_t value[BLOCK_UINT32T_COUNT];

    alt_cache_l1_data_purge(addr, BLOCK_CACHE_LINE_COUNT * ALT_CACHE_LINE_SIZE);
    
    for (i = 0; i < BLOCK_UINT32T_COUNT; ++i)
    {
        value[i] = alt_read_word(addr + i * sizeof(uint32_t));
    }

    /*****/

    if (derr)
    {
        alt_write_word(ALT_SYSMGR_MPU_CTL_L2_ECC_ADDR,
                         ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_EN_SET_MSK
                       | ALT_SYSMGR_MPU_CTL_L2_ECC_ECC_EN_SET_MSK
                       | ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE_SET(ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE_E_DOUBLE_BIT));
    }
    else
    {
        alt_write_word(ALT_SYSMGR_MPU_CTL_L2_ECC_ADDR,
                         ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_EN_SET_MSK
                       | ALT_SYSMGR_MPU_CTL_L2_ECC_ECC_EN_SET_MSK
                       | ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE_SET(ALT_SYSMGR_MPU_CTL_L2_ECC_INJ_TYPE_E_SINGLE_BIT));
    }

    __asm("dsb");
    __asm("isb");

    for (i = 0; i < BLOCK_UINT32T_COUNT; i += 4)
    {
        alt_write_word(addr + i * sizeof(uint32_t), value[i]);
    }

    alt_cache_l1_data_purge(addr, BLOCK_CACHE_LINE_COUNT * ALT_CACHE_LINE_SIZE);

    alt_write_word(ALT_SYSMGR_MPU_CTL_L2_ECC_ADDR, ALT_SYSMGR_MPU_CTL_L2_ECC_ECC_EN_SET_MSK);

    __asm("dsb");
    __asm("isb");

    /* dprintf("ECC[injx][L2]: ALT_SYSMGR_MPU_CTL_L2_ECC_ADDR => 0x%" PRIx32 ".\n", alt_read_word(ALT_SYSMGR_MPU_CTL_L2_ECC_ADDR)); */

    return ALT_E_SUCCESS;
}

static void alt_ecc_ocram_inject(bool derr, uint32_t addr)
{
    /* OCRAM is organized as 64x32768. Thus only 64-bits of data is relevant. */
    uint32_t data0;
    uint32_t data1;
    uint32_t ecc0;
    uint32_t ecc1;

    dprintf("ECC[injx][OCRAM]: Injecting %s to 0x%" PRIx32 ".\n", (derr ? "DERR" : "SERR"), addr);

    /* Set the address to obtain data from and read data. For now, pick the first byte in the RAM. */
    alt_write_word(ALT_ECC_OCRAM_ECC_ECC_ADDRBUS_ADDR, addr);

    /* Set the Data and ECC override access control for read and start access. */
    alt_write_word(ALT_ECC_OCRAM_ECC_ECC_DBYTECTL_ADDR, 0xff);
    alt_write_word(ALT_ECC_OCRAM_ECC_ECC_ACCCTL_ADDR,
                     ALT_ECC_OCRAM_ECC_ECC_ACCCTL_DATAOVR_SET_MSK
                   | ALT_ECC_OCRAM_ECC_ECC_ACCCTL_ECCOVR_SET_MSK);
    alt_write_word(ALT_ECC_OCRAM_ECC_ECC_STARTACC_ADDR,
                   ALT_ECC_OCRAM_ECC_ECC_STARTACC_ENBUSA_SET_MSK);

    /* Read out the data and ECC bits. */
    data0 = alt_read_word(ALT_ECC_OCRAM_ECC_ECC_RDATA0BUS_ADDR);
    data1 = alt_read_word(ALT_ECC_OCRAM_ECC_ECC_RDATA1BUS_ADDR);
    ecc0  = alt_read_word(ALT_ECC_OCRAM_ECC_ECC_RDATAECC0BUS_ADDR);
    ecc1  = alt_read_word(ALT_ECC_OCRAM_ECC_ECC_RDATAECC1BUS_ADDR);

    dprintf("ECC[injx][OCRAM]: Data [0-1] = 0x%" PRIx32 " 0x%" PRIx32 ".\n",
            data0, data1);
    dprintf("ECC[injx][OCRAM]: ECC  [0-1] = 0x%" PRIx32 " 0x%" PRIx32 ".\n",
            ecc0, ecc1);

    /* Update the data by 1 bit but don't touch the ECC. */
    if (data0 & 0x1)
    {
        data0 &= ~0x1;
    }
    else
    {
        data0 |= 0x1;
    }

    if (derr)
    {
        if (data0 & 0x2)
        {
            data0 &= ~0x2;
        }
        else
        {
            data0 |= 0x2;
        }
    }

    /* Inject SERR by writing out the Data and ECC for above address. */
    alt_write_word(ALT_ECC_OCRAM_ECC_ECC_WDATA0BUS_ADDR,    data0);
    alt_write_word(ALT_ECC_OCRAM_ECC_ECC_WDATA1BUS_ADDR,    data1);
    alt_write_word(ALT_ECC_OCRAM_ECC_ECC_WDATAECC0BUS_ADDR, ecc0);
    alt_write_word(ALT_ECC_OCRAM_ECC_ECC_WDATAECC1BUS_ADDR, ecc1);

    /* Set the Data and ECC override access control for write and start access. */
    alt_write_word(ALT_ECC_OCRAM_ECC_ECC_ACCCTL_ADDR,
                     ALT_ECC_OCRAM_ECC_ECC_ACCCTL_DATAOVR_SET_MSK
                   | ALT_ECC_OCRAM_ECC_ECC_ACCCTL_ECCOVR_SET_MSK
                   | ALT_ECC_OCRAM_ECC_ECC_ACCCTL_RDWR_SET_MSK);
    alt_write_word(ALT_ECC_OCRAM_ECC_ECC_STARTACC_ADDR,
                   ALT_ECC_OCRAM_ECC_ECC_STARTACC_ENBUSA_SET_MSK);

    /* Done! */
}

static void alt_ecc_dma_inject(bool derr, uint32_t addr)
{
    /* OCRAM is organized as 64x512. Thus only 64-bits of data is relevant. */
    uint32_t data0;
    uint32_t data1;
    uint32_t ecc0;
    uint32_t ecc1;

    dprintf("ECC[injx][DMA]: Injecting %s to 0x%" PRIx32 ".\n", (derr ? "DERR" : "SERR"), addr);

    /* Set the address to obtain data from and read data. For now, pick the first byte in the RAM. */
    alt_write_word(ALT_ECC_DMAC_ECC_ADDRBUS_ADDR, addr);

    /* Set the Data and ECC override access control for read and start access. */
    alt_write_word(ALT_ECC_DMAC_ECC_DBYTECTL_ADDR, 0xff);
    alt_write_word(ALT_ECC_DMAC_ECC_ACCCTL_ADDR,
                     ALT_ECC_DMAC_ACCCTL_DATAOVR_SET_MSK
                   | ALT_ECC_DMAC_ACCCTL_ECCOVR_SET_MSK);
    alt_write_word(ALT_ECC_DMAC_ECC_STARTACC_ADDR,
                   ALT_ECC_DMAC_STARTACC_ENBUSA_SET_MSK);

    /* Read out the data and ECC bits. */
    data0 = alt_read_word(ALT_ECC_DMAC_ECC_RDATA0BUS_ADDR);
    data1 = alt_read_word(ALT_ECC_DMAC_ECC_RDATA1BUS_ADDR);
    ecc0  = alt_read_word(ALT_ECC_DMAC_ECC_RDATAECC0BUS_ADDR);
    ecc1  = alt_read_word(ALT_ECC_DMAC_ECC_RDATAECC1BUS_ADDR);

    dprintf("ECC[injx][DMA]: Data [0-1] = 0x%" PRIx32 " 0x%" PRIx32 ".\n",
            data0, data1);
    dprintf("ECC[injx][DMA]: ECC  [0-1] = 0x%" PRIx32 " 0x%" PRIx32 ".\n",
            ecc0, ecc1);

    /* Update the data by 1 bit but don't touch the ECC. */
    if (data0 & 0x1)
    {
        data0 &= ~0x1;
    }
    else
    {
        data0 |= 0x1;
    }

    if (derr)
    {
        if (data0 & 0x2)
        {
            data0 &= ~0x2;
        }
        else
        {
            data0 |= 0x2;
        }
    }

    /* Inject SERR by writing out the Data and ECC for above address. */
    alt_write_word(ALT_ECC_DMAC_ECC_WDATA0BUS_ADDR,    data0);
    alt_write_word(ALT_ECC_DMAC_ECC_WDATA1BUS_ADDR,    data1);
    alt_write_word(ALT_ECC_DMAC_ECC_WDATAECC0BUS_ADDR, ecc0);
    alt_write_word(ALT_ECC_DMAC_ECC_WDATAECC1BUS_ADDR, ecc1);

    /* Set the Data and ECC override access control for write and start access. */
    alt_write_word(ALT_ECC_DMAC_ECC_ACCCTL_ADDR,
                     ALT_ECC_DMAC_ACCCTL_DATAOVR_SET_MSK
                   | ALT_ECC_DMAC_ACCCTL_ECCOVR_SET_MSK
                   | ALT_ECC_DMAC_ACCCTL_RDWR_SET_MSK);
    alt_write_word(ALT_ECC_DMAC_ECC_STARTACC_ADDR,
                   ALT_ECC_DMAC_STARTACC_ENBUSA_SET_MSK);

    /* Done! */
}

#define TEST_BUF_SIZE 512

static void alt_ecc_sdmmc_inject(bool derr, uint32_t addr, __attribute__((unused))uint32_t block_size)
{
    /* SDMMC is organized as 32xXXX. Only 32-bits of data is relevant. */
    uint32_t data0;
    char buffer_write[TEST_BUF_SIZE];
    uint32_t i;
    ALT_SDMMC_CARD_INFO_t card_info;

    dprintf("ECC[injx][SDMMC]: Injecting %s to 0x%" PRIx32 ".\n", (derr ? "DERR" : "SERR"), addr);

    /*
     * Enable SERR to interrupt.
     */
    alt_write_word(ALT_ECC_SDMMC_ERRINTEN_ADDR,
                   ALT_ECC_SDMMC_ERRINTEN_SERRINTEN_SET_MSK);

    /* Enable Data Byte control */
    alt_write_word(ALT_ECC_SDMMC_ECC_DBYTECTL_ADDR, ALT_ECC_SDMMC_DBYTECTL_DBEN_SET_MSK);

    /* Set the Data and ECC override access control for read and start access. */
    dprintf("ECC[injx][SDMMC]: Set Data and ECC Overide access.\n");
    alt_write_word(ALT_ECC_SDMMC_ECC_ACCCTL_ADDR,
                     ALT_ECC_SDMMC_ACCCTL_DATAOVR_SET_MSK
                   | ALT_ECC_SDMMC_ACCCTL_ECCOVR_SET_MSK);

    /* Set up the test memory to be written */
    for (i = 0; i < TEST_BUF_SIZE; i++)
    {
        buffer_write[i] = 0;
    }

    alt_sdmmc_write(&card_info, (uint32_t *)addr, buffer_write, sizeof(buffer_write));

    if (derr == 0)
    {
        data0 = 0x01;
    }
    else
    {
        data0 = 0x11;
    }

    /* Write the error to the ECC databus and set the address */
    alt_write_word(ALT_ECC_SDMMC_ECC_WDATA0BUS_ADDR, data0);
    alt_write_word(ALT_ECC_SDMMC_ECC_ADDRBUS_ADDR, addr);

    /* Set dataoverride, eccoverride, and write */
    dprintf("ECC[injx][SDMMC]: Set ECC to write the error.\n");
    alt_write_word(ALT_ECC_SDMMC_ECC_ACCCTL_ADDR,
                    ALT_ECC_SDMMC_ACCCTL_DATAOVR_SET_MSK
                   | ALT_ECC_SDMMC_ACCCTL_ECCOVR_SET_MSK
                   | ALT_ECC_SDMMC_ACCCTL_RDWR_SET_MSK);

    /* Enable the ECC to access the memory we wrote */
    alt_write_word(ALT_ECC_SDMMC_ECC_STARTACC_ADDR,
                   ALT_ECC_SDMMC_STARTACC_ENBUSA_SET_MSK);

    dprintf("INFO: Starting read, this should generate the SERR interrupt\n");

    alt_sdmmc_read(&card_info, buffer_write, (uint32_t *)addr, sizeof(buffer_write));

    /* Done */
}

static void alt_ecc_qspi_inject(bool derr)
{
    /*
     * Enable SERR to interrupt.
     */
    alt_write_word(ALT_ECC_QSPI_ERRINTEN_ADDR,
                   ALT_ECC_QSPI_ERRINTEN_SERRINTEN_SET_MSK);

    if (derr == false)
    {
        /* Use QSPI Test SERR Interrupt for now */
        alt_write_word(ALT_ECC_QSPI_INTTEST_ADDR, ALT_ECC_QSPI_INTTEST_TSERRA_SET_MSK);
    }
    else
    {
        /* Use QSPI Test DERR Interrupt for now */
        alt_write_word(ALT_ECC_QSPI_INTTEST_ADDR, ALT_ECC_QSPI_INTTEST_TDERRA_SET_MSK);
    }
} 

ALT_STATUS_CODE alt_ecc_serr_inject(ALT_ECC_RAM_ENUM_t ram_block, uintptr_t location, uint32_t mem_size)
{
    bool enabled = (g_eccState.ecc_enabled & (1 << ram_block)) != 0;

    switch (ram_block)
    {
    case ALT_ECC_RAM_L2_DATA:
        if (enabled)
        {
            if (location & (ALT_CACHE_LINE_SIZE - 1))
            {
                return ALT_E_ERROR;
            }

            alt_ecc_l2_inject(false, (void *)location);
        }
        else
        {
            dprintf("ECC[injs][L2]: Not enabled.\n");
        }
        break;

    case ALT_ECC_RAM_OCRAM:
        if (enabled)
        {
            alt_ecc_ocram_inject(false, location);
        }
        else
        {
            dprintf("ECC[injs][OCRAM]: Not enabled.\n");
        }
        break;

    case ALT_ECC_RAM_DMA:
        if (enabled)
        {
            alt_ecc_dma_inject(false, location);
        }
        else
        {
            dprintf("ECC[injs][DMA]: Not enabled.\n");
        }
        break;

    case ALT_ECC_RAM_SDMMC:
        if (enabled)
        {
            alt_ecc_sdmmc_inject(false, location, mem_size);
        }
        else
        {
            dprintf("ECC[injs][SDMMC]: Not enabled.\n");
        }
        break;

    case ALT_ECC_RAM_QSPI:
        if (enabled)
        {
            alt_ecc_qspi_inject(false);
        }
        else
        {
            dprintf("ECC[injs][QSPI]: Not enabled.\n");
        }
        break;

    case ALT_ECC_RAM_USB0:
    case ALT_ECC_RAM_USB1:
    case ALT_ECC_RAM_EMAC0:
    case ALT_ECC_RAM_EMAC1:
    case ALT_ECC_RAM_EMAC2:
    case ALT_ECC_RAM_NAND:
    default:
        return ALT_E_BAD_ARG;
    }

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_ecc_derr_inject(ALT_ECC_RAM_ENUM_t ram_block, uintptr_t location, uint32_t mem_size)
{
    bool enabled = (g_eccState.ecc_enabled & (1 << ram_block)) != 0;

    switch (ram_block)
    {
    case ALT_ECC_RAM_L2_DATA:
        if (enabled)
        {
            if (location & (ALT_CACHE_LINE_SIZE - 1))
            {
                return ALT_E_ERROR;
            }

            alt_ecc_l2_inject(true, (void *)location);
        }
        else
        {
            dprintf("ECC[injd][L2]: Not enabled.\n");
        }
        break;

    case ALT_ECC_RAM_OCRAM:
        if (enabled)
        {
            alt_ecc_ocram_inject(true, location);
        }
        else
        {
            dprintf("ECC[injd][OCRAM]: Not enabled.\n");
        }
        break;

    case ALT_ECC_RAM_DMA:
        if (enabled)
        {
            alt_ecc_dma_inject(true, location);
        }
        else
        {
            dprintf("ECC[injd][DMA]: Not enabled.\n");
        }
        break;

    case ALT_ECC_RAM_QSPI:
        if (enabled)
        {
            alt_ecc_qspi_inject(true);
        }
        else
        {
            dprintf("ECC[injd][QSPI]: Not enabled.\n");
        }
        break;

    case ALT_ECC_RAM_SDMMC:
        if (enabled)
        {
            alt_ecc_sdmmc_inject(true, location, mem_size);
        }
        else
        {
            dprintf("ECC[injs][SDMMC]: Not enabled.\n");
        }
        break;

    case ALT_ECC_RAM_USB0:
    case ALT_ECC_RAM_USB1:
    case ALT_ECC_RAM_EMAC0:
    case ALT_ECC_RAM_EMAC1:
    case ALT_ECC_RAM_EMAC2:
    case ALT_ECC_RAM_NAND:
        return ALT_E_ERROR;
    default:
        return ALT_E_BAD_ARG;
    }

    return ALT_E_SUCCESS;
}

/*****/

static ALT_STATUS_CODE alt_ocram_ecc_start(void)
{
    int i = 0;

    dprintf("ECC[start][OCRAM]: Starting ...\n");

    /*
     * Start ECC memory initialization and wait for it to complete.
     * NOTE: This needs to be done before.
     */

    alt_write_word(ALT_ECC_OCRAM_ECC_CTL_ADDR,
                   ALT_ECC_OCRAM_ECC_CTL_INITA_SET_MSK);

    while (!(alt_read_word(ALT_ECC_OCRAM_ECC_INITSTAT_ADDR) & ALT_ECC_OCRAM_ECC_INITSTAT_INITCOMPLETEA_SET_MSK))
    {
        i++;
        if (i == 100000)
        {
            return ALT_E_TMO;
        }
    }
    dprintf("ECC[start][OCRAM]: i = %d.\n", i);

    /*
     * Enable ECC on OCRAM.
     * Disable Slave Error on DERR
     */
    alt_write_word(ALT_ECC_OCRAM_ECC_CTL_ADDR,
                   ALT_ECC_OCRAM_ECC_CTL_ECC_EN_SET_MSK | ALT_ECC_OCRAM_ECC_CTL_ECC_SLVERR_DIS_SET_MSK);


    /*
     * Enable SERR to interrupt
     */
    alt_write_word(ALT_ECC_OCRAM_ECC_ERRINTEN_ADDR,
                   ALT_ECC_OCRAM_ECC_ERRINTEN_SERRINTEN_SET_MSK);

    /*
     * Clear any pending interrupts.
    alt_write_word(ALT_ECC_OCRAM_ECC_INTSTAT_ADDR, 0);
     */

    return ALT_E_SUCCESS;
}
