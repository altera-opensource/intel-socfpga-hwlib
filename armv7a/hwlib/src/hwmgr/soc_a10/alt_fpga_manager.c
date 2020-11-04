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
 * $Id: //acds/rel/20.1/embedded/ip/hps/altera_hps/hwlib/src/hwmgr/soc_a10/alt_fpga_manager.c#1 $
 */

#include <stdio.h>
#include <inttypes.h>
#include "alt_fpga_manager.h"
#include <alt_printf.h>
#include "socal/alt_fpgamgr.h"
#include "socal/alt_fpgamgrdata.h"
#include "socal/hps.h"
#include "socal/socal.h"

#if DEBUG_ALT_FPGA_MANAGER
  #define dprintf printf
#else
  #define dprintf null_printf
#endif

/*
 * This is used in the FPGA reconfiguration streaming interface. Because FPGA
 * images are commonly stored on disk, the chunk size is that of the disk size.
 * We cannot choose too large a chunk size because the stack size is fairly
 * small.
 */
#define DISK_SECTOR_SIZE    8192
#define ISTREAM_CHUNK_SIZE  DISK_SECTOR_SIZE

/*
 * Structure that holds the internal global state.
 */
static struct
{
    /* HPS CPU is in control of FPGA block. */
    bool cpu_in_control;

    /* Reset assert active. */
    bool reset_asserted;

} g_fpgaState;

/*
 * FPGA Data Type identifier enum
 */
typedef enum FPGA_DATA_TYPE_e
{
    FPGA_DATA_FULL   = 1,
    FPGA_DATA_LIST   = 2,
    FPGA_DATA_STREAM = 3
} FPGA_DATA_TYPE_t;

/*
 * FPGA Data, for Full Buffer, Buffer List, or IStream configuration
 */
typedef struct FPGA_DATA_s
{
    FPGA_DATA_TYPE_t type;

    union
    {
        /* For FPGA_DATA_FULL */
        struct
        {
            const void * buffer;
            size_t       length;
        } full;

        /* For FPGA_DATA_LIST */
        struct
        {
            const void **  buffer;
            const size_t * length;
            size_t         count;
        } list;

        /* For FPGA_DATA_STREAM */
        struct
        {
            alt_fpga_istream_t callback;
            void *             context;
        } stream;

    } mode;

#if ALT_FPGA_ENABLE_DMA_SUPPORT
    bool use_dma;
    ALT_DMA_CHANNEL_t dma_channel;
#endif

} FPGA_DATA_t;

/*****/

/*
 * Helper function that polls for a certain FPGA state to become active.
 */
static ALT_STATUS_CODE wait_for_fpga_status(ALT_FPGA_STATUS_t state, bool to_be_set, size_t tmo)
{
    if (to_be_set)
    {
        while ((alt_read_word(ALT_FPGAMGR_IMGCFG_STAT_ADDR) & state) == 0)
        {
            --tmo;
            if (tmo == 0)
            {
                return ALT_E_TMO;
            }
        }
    }
    else
    {
        while ((alt_read_word(ALT_FPGAMGR_IMGCFG_STAT_ADDR) & state) != 0)
        {
            --tmo;
            if (tmo == 0)
            {
                return ALT_E_TMO;
            }
        }
    }
            
    return ALT_E_SUCCESS;
}

/*****/

ALT_STATUS_CODE alt_fpga_init(void)
{
    g_fpgaState.cpu_in_control = false;
    g_fpgaState.reset_asserted = false;

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_fpga_uninit(void)
{
    if (g_fpgaState.cpu_in_control)
    {
        alt_fpga_control_disable();
    }

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_fpga_control_enable(ALT_FPGA_CFG_MODE_t mode)
{
    if (!g_fpgaState.cpu_in_control)
    {
        uint32_t mask = 0;
        
        /*
         * Step 1:
         * Verify MSEL is 000 or 001.
         */

        dprintf("FPGA[ctrl:en]: === Step 1 ===\n");

        switch (alt_read_word(ALT_FPGAMGR_IMGCFG_STAT_ADDR)
                & (ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL0_SET_MSK | ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL1_SET_MSK | ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL2_SET_MSK))
        {
        case 0:
        case ALT_FPGAMGR_IMGCFG_STAT_F2S_MSEL0_SET_MSK:
            break;

        default:
            dprintf("FPGA[1]: MSEL not set to 000 or 001.\n");
            return ALT_E_ERROR;
        }

        dprintf("FPGA[ctrl:en]: === Step 2 ===\n");

        switch (mode)
        {
        case ALT_FPGA_CFG_MODE_PP16_FAST_NOAES_NODC:
            mask = ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_SET(ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_E_PPX16)
                | ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_SET(ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_E_X1);
            break;
        case ALT_FPGA_CFG_MODE_PP16_FAST_AES_NODC:
            mask = ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_SET(ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_E_PPX16)
                | ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_SET(ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_E_X2);
            break;
        case ALT_FPGA_CFG_MODE_PP16_FAST_NOAES_DC:
            mask = ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_SET(ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_E_PPX16)
                | ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_SET(ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_E_X4);
            break;
        case ALT_FPGA_CFG_MODE_PP16_FAST_AES_DC:
            mask = ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_SET(ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_E_PPX16)
                | ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_SET(ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_E_X4);
            break;
        case ALT_FPGA_CFG_MODE_PP32_FAST_NOAES_NODC:
            mask = ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_SET(ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_E_PPX32)
                | ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_SET(ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_E_X1);
            break;
        case ALT_FPGA_CFG_MODE_PP32_FAST_AES_NODC:
            mask = ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_SET(ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_E_PPX32)
                | ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_SET(ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_E_X4);
            break;
        case ALT_FPGA_CFG_MODE_PP32_FAST_NOAES_DC:
            mask = ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_SET(ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_E_PPX32)
                | ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_SET(ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_E_X8);
            break;
        case ALT_FPGA_CFG_MODE_PP32_FAST_AES_DC:
            mask = ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_SET(ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_E_PPX32)
                | ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_SET(ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_E_X8);
            break;
        }

        alt_replbits_word(ALT_FPGAMGR_IMGCFG_CTL_02_ADDR,
                          ALT_FPGAMGR_IMGCFG_CTL_02_CFGWIDTH_SET_MSK | ALT_FPGAMGR_IMGCFG_CTL_02_CDRATIO_SET_MSK,
                          mask);

        /*
         * Step 3:
         * Verify no other devices are interfering with programming.
         // Verify: F2S_NCONFIG_PIN = 1
         // Verify: F2S_NSTATUS_PIN = 1
         */

        dprintf("FPGA[ctrl:en]: === Step 3 ===\n");

        if ((alt_read_word(ALT_FPGAMGR_IMGCFG_STAT_ADDR) & (ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN_SET_MSK | ALT_FPGAMGR_IMGCFG_STAT_F2S_NCFG_PIN_SET_MSK))
            != (ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN_SET_MSK | ALT_FPGAMGR_IMGCFG_STAT_F2S_NCFG_PIN_SET_MSK))
        {
            dprintf("FPGA[3]: Error: F2S_NCONFIG_PIN != 1 or F2S_NSTATUS_PIN != 1.\n");
            return ALT_E_ERROR;
        }

        /*
         * Step 4:
         * Deassert signal drives before taking over those overrides.
         // Write: ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE = 1
         // Write: ALT_FPGAMGR_IMGCFG_CTL_01_S2F_PR_REQUEST = 0
         // Write: ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_DATA = 0
         // Write: ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_CTL = 0
         // Write: ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG = 1
         // Write: ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NSTAT_OE = 0
         // Write: ALT_FPGAMGR_IMGCFG_CTL_00_S2F_CONDONE_OE = 0
         */

        dprintf("FPGA[ctrl:en]: === Step 4 ===\n");

        alt_replbits_word(ALT_FPGAMGR_IMGCFG_CTL_01_ADDR,
                          ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE_SET_MSK | ALT_FPGAMGR_IMGCFG_CTL_01_S2F_PR_REQUEST_SET_MSK,
                          ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE_SET_MSK);
        
        alt_replbits_word(ALT_FPGAMGR_IMGCFG_CTL_02_ADDR,
                          ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_DATA_SET_MSK | ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_CTL_SET_MSK,
                          0);

        alt_replbits_word(ALT_FPGAMGR_IMGCFG_CTL_00_ADDR,
                          ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG_SET_MSK | ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NSTAT_OE_SET_MSK | ALT_FPGAMGR_IMGCFG_CTL_00_S2F_CONDONE_OE_SET_MSK,
                          ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG_SET_MSK);

        /*
         * Step 5:
         * Enable overrides for DATA / DCLK / NCONFIG.
         // Write: ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NEN_CFG = 0
         // Write: ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NCFG = 0
         *
         * Disable overrides for NSTATUS / CONF_DONE.
         // Write: ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NSTAT = 1
         // Write: ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_CONDONE = 1
         */

        dprintf("FPGA[ctrl:en]: === Step 5 ===\n");
        
        alt_clrbits_word(ALT_FPGAMGR_IMGCFG_CTL_01_ADDR, ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NEN_CFG_SET_MSK);
        alt_clrbits_word(ALT_FPGAMGR_IMGCFG_CTL_00_ADDR, ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NCFG_SET_MSK);
        
        alt_setbits_word(ALT_FPGAMGR_IMGCFG_CTL_00_ADDR,
                         ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NSTAT_SET_MSK | ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_CONDONE_SET_MSK);

        /*
         * Step 6:
         * Drive chip select.
         // Write: ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE = 0
         */
        
        dprintf("FPGA[ctrl:en]: === Step 6 ===\n");

        alt_clrbits_word(ALT_FPGAMGR_IMGCFG_CTL_01_ADDR, ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE_SET_MSK);

        /*
         * Step 7:
         * Repeat step 3, just in case.
         */

        dprintf("FPGA[ctrl:en]: === Step 7 ===\n");
        
        if ((alt_read_word(ALT_FPGAMGR_IMGCFG_STAT_ADDR) & (ALT_FPGA_STATUS_F2S_NSTATUS_PIN | ALT_FPGA_STATUS_F2S_NCONFIG_PIN))
            != (ALT_FPGA_STATUS_F2S_NSTATUS_PIN | ALT_FPGA_STATUS_F2S_NCONFIG_PIN))
        {
            dprintf("FPGA[7]: Error: F2S_NCONFIG_PIN != 1 or F2S_NSTATUS_PIN != 1.\n");
            return ALT_E_ERROR;
        }
        
        /*
         * Mark state as in control.
         */
        g_fpgaState.cpu_in_control = true;
    }

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_fpga_control_disable(void)
{
    if (g_fpgaState.cpu_in_control)
    {
        if (g_fpgaState.reset_asserted)
        {
            /*
             * Borrowed from Step 8b. Disable reset of FPGA.
             */
            
            dprintf("FPGA[ctrl:dis]: === Step 8b ===\n");
            
            alt_setbits_word(ALT_FPGAMGR_IMGCFG_CTL_00_ADDR, ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG_SET_MSK);

            g_fpgaState.reset_asserted = false;
        }
        
        /*
         * Step 15:
         * Disable chip select.
         // Write: ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE = 1
         */

        dprintf("FPGA[ctrl:dis]: === Step 15 ===\n");

        alt_setbits_word(ALT_FPGAMGR_IMGCFG_CTL_01_ADDR, ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE_SET_MSK);

        /*
         * Step 16:
         * Disable overrides for DATA / DCLK / NCONFIG
         // Write: ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NEN_CFG = 1
         // Write: ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NCFG = 1
         */

        dprintf("FPGA[ctrl:dis]: === Step 16 ===\n");

        alt_setbits_word(ALT_FPGAMGR_IMGCFG_CTL_01_ADDR, ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NEN_CFG_SET_MSK);
        alt_setbits_word(ALT_FPGAMGR_IMGCFG_CTL_00_ADDR, ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NCFG_SET_MSK);
        
        /*
         * Mark state as not in control.
         */
        
        g_fpgaState.cpu_in_control = false;
    }

    return ALT_E_SUCCESS;
}

bool alt_fpga_control_is_enabled(void)
{
    return g_fpgaState.cpu_in_control;
}

ALT_STATUS_CODE alt_fpga_reset_assert(void)
{
    if (!alt_fpga_control_is_enabled())
    {
        /* HPS not in control. */
        return ALT_E_FPGA_NO_SOC_CTRL;
    }
    else if (g_fpgaState.reset_asserted)
    {
        /* Reset already asserted. */
        return ALT_E_SUCCESS;
    }
    else
    {
        g_fpgaState.reset_asserted = true;
        
        /*
         * Borrowed from FPGA configuration, step 8a.
         */

        dprintf("FPGA[rst:en]: === Step 8a ===\n");
        
        alt_clrbits_word(ALT_FPGAMGR_IMGCFG_CTL_00_ADDR, ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG_SET_MSK);

        return wait_for_fpga_status(ALT_FPGA_STATUS_F2S_NSTATUS_PIN, false, 1000);
    }
}

ALT_STATUS_CODE alt_fpga_reset_deassert(void)
{
    if (!alt_fpga_control_is_enabled())
    {
        /* HPS not in control. */
        return ALT_E_FPGA_NO_SOC_CTRL;
    }
    else if (!g_fpgaState.reset_asserted)
    {
        /* Reset already unasserted. */
        return ALT_E_SUCCESS;
    }
    else
    {
        g_fpgaState.reset_asserted = false;
        
        /*
         * Borrowed from FPGA configuration, step 8b.
         */

        dprintf("FPGA[rst:dis]: === Step 8b ===\n");
        
        alt_setbits_word(ALT_FPGAMGR_IMGCFG_CTL_00_ADDR, ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG_SET_MSK);

        return wait_for_fpga_status(ALT_FPGA_STATUS_F2S_NSTATUS_PIN, true, 1000);
    }
}

uint32_t alt_fpga_status_get(void)
{
    return alt_read_word(ALT_FPGAMGR_IMGCFG_STAT_ADDR);
}

/*
 * Helper function which handles writing data to the AXI bus.
 */
static ALT_STATUS_CODE alt_fpga_internal_writeaxi(const void * bufferv, uint32_t length
#if ALT_FPGA_ENABLE_DMA_SUPPORT
                                                  ,
                                                  bool use_dma, ALT_DMA_CHANNEL_t dma_channel
#endif
    )
{
    const char * buffer = bufferv;
    
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    const uint32_t * buffer_end_32 = (const uint32_t *) (buffer + (length & ~0x3));

#if ALT_FPGA_ENABLE_DMA_SUPPORT
    if (use_dma)
    {
        /* A10 DMA support for FPGA as a peripheral is not implemented. */
        dprintf("FPGA[AXI]: DMA support not implemented.\n");
        (void)dma_channel;
        status = ALT_E_ERROR;
    }
    else
#endif
    {
        const uint32_t * buffer_32 = (const uint32_t *) buffer;

        /* Write out as many complete 32-bit chunks. */
        while (length >= sizeof(uint32_t))
        {
            alt_write_word(ALT_FPGAMGRDATA_ADDR, *buffer_32);
            ++buffer_32;
            length -= sizeof(uint32_t);
        }
    }

    /* Write out remaining non 32-bit aligned chunk. */
    if ((status == ALT_E_SUCCESS) && (length & 0x3))
    {
        dprintf("FPGA[AXI]: PIO unaligned data ...\n");

        switch (length & 0x3)
        {
        case 3:
            alt_write_word(ALT_FPGAMGRDATA_ADDR, *buffer_end_32 & 0x00ffffff);
            break;
        case 2:
            alt_write_word(ALT_FPGAMGRDATA_ADDR, *buffer_end_32 & 0x0000ffff);
            break;
        case 1:
            alt_write_word(ALT_FPGAMGRDATA_ADDR, *buffer_end_32 & 0x000000ff);
            break;
        default:
            /* This will never happen. */
            break;
        }
    }

    return status;
}

static ALT_STATUS_CODE alt_fpga_internal_configure_idata(FPGA_DATA_t * fpga_data)
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;

    /*
     * Step 10:
     * Send POF / SOF data
     * Program in ALT_FPGAMGRDATA_ADDR
     * Optionally read and confirm LT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN = 1, else restart from step 1.
     */

    if (status == ALT_E_SUCCESS)
    {
        /*
         * This is the largest configuration image possible for the largest Arria 10
         * SoC device with some generous padding added.
         * Experimental values:
         *  - Compressed   : 15 MiB.
         *  - Uncompressed : 31 MiB.
         */
        uint32_t data_limit = 36 * 1024 * 1024;

        dprintf("FPGA[cfg]: === Step 10 ===\n");
        /* Print this here or else istream will cause this to be printed many times. */
        dprintf("FPGA[AXI]: PIO aligned data ...\n");

        if (fpga_data->type == FPGA_DATA_FULL)
        {
            if (fpga_data->mode.full.length > data_limit)
            {
                status = ALT_E_FPGA_CFG;
            }
            else
            {
                status = alt_fpga_internal_writeaxi(fpga_data->mode.full.buffer, fpga_data->mode.full.length
#if ALT_FPGA_ENABLE_DMA_SUPPORT
                                                    ,
                                                    fpga_data->use_dma, fpga_data->dma_channel
#endif
                    );
            }
        }
        else if (fpga_data->type == FPGA_DATA_LIST)
        {
            /* Flag if processing has encountered an uint32_t unaligned segment.
               If so, that must be the last segment. */
            bool unaligned_segment = false;

            size_t i;
            for (i = 0; i < fpga_data->mode.list.count; ++i)
            {
                const void * buffer = fpga_data->mode.list.buffer[i];
                size_t       length = fpga_data->mode.list.length[i];

                if (length > data_limit)
                {
                    dprintf("FPGA[10][list]: Data limit breached; infinite loop or invalid image likely.\n");
                    status = ALT_E_FPGA_CFG;
                }
                else if (unaligned_segment)
                {
                    dprintf("FPGA[10][list]: Previous segment unaligned; RBF segment corruption likely.\n");
                    status = ALT_E_FPGA_CFG;
                }
                else
                {
                    status = alt_fpga_internal_writeaxi(buffer, length
#if ALT_FPGA_ENABLE_DMA_SUPPORT
                                                        ,
                                                        fpga_data->use_dma, fpga_data->dma_channel
#endif
                        );

                    data_limit -= length;

                    if (length & (sizeof(uint32_t) - 1))
                    {
                        unaligned_segment = true;
                    }
                }

                if (status != ALT_E_SUCCESS)
                {
                    break;
                }
            }
        }
        else if (fpga_data->type == FPGA_DATA_STREAM)
        {
            /* Flag if processing has encountered an uint32_t unaligned segment.
               If so, that must be the last segment. */
            bool unaligned_segment = false;

            uint32_t buffer[ISTREAM_CHUNK_SIZE / sizeof(uint32_t)];
            int32_t cb_status = 0; /* Callback status */

            do
            {
                cb_status = fpga_data->mode.stream.callback(buffer, sizeof(buffer), fpga_data->mode.stream.context);

                if (cb_status < 0)
                {
                    /* A problem occurred when streaming data from the source. */
                    status = ALT_E_FPGA_CFG_STM;
                }
                else if ((uint32_t)cb_status > sizeof(buffer))
                {
                    /* Callback data overflows buffer space. */
                    status = ALT_E_FPGA_CFG_STM;
                }
                else if (cb_status == 0)
                {
                    /* End of IStream data. */
                    break;
                }
                else if ((uint32_t)cb_status > data_limit)
                {
                    /* Limit hit for the largest permissible data stream. */
                    status = ALT_E_FPGA_CFG_STM;
                }
                else if (unaligned_segment)
                {
                    dprintf("FPGA[10][stream]: Previous segment unaligned; previous segment invalid.\n");
                    status = ALT_E_FPGA_CFG;
                }
                else
                {
                    /* Copy in configuration data. */
                    status = alt_fpga_internal_writeaxi(buffer, cb_status
#if ALT_FPGA_ENABLE_DMA_SUPPORT
                                                        ,
                                                        fpga_data->use_dma, fpga_data->dma_channel
#endif
                        );

                    data_limit -= cb_status;

                    if (cb_status & (sizeof(uint32_t) - 1))
                    {
                        unaligned_segment = true;
                    }
                }

                if (status != ALT_E_SUCCESS)
                {
                    break;
                }

            } while (cb_status > 0);
        }
        else
        {
            dprintf("FPGA[10]: Invalid programming request type.\n");
            status = ALT_E_ERROR;
        }
    }

    /*
     * Step 11:
     * Wait for ConfigCompletion
     // Wait: ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN = 1 or ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN = 0.
     // If ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN = 0: goto step 1.
     // If ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN = 1: configuration passed. yay!
     */

    if (status == ALT_E_SUCCESS)
    {
        int i = 10000;

        dprintf("FPGA[cfg]: === Step 11 === (starting i = %d).\n", i);

        do
        {
            uint32_t imgcfg = alt_read_word(ALT_FPGAMGR_IMGCFG_STAT_ADDR);

            if (!(imgcfg & ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN_SET_MSK))
            {
                dprintf("FPGA[11]: Error: F2S_NSTAT_PIN = 0.\n");
                status = ALT_E_ERROR;
                break;
            }
            else if (imgcfg & ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN_SET_MSK)
            {
                /* yay! */
                break;
            }

        } while (--i);

        if (i == 0)
        {
            dprintf("FPGA[11]: Timeout waiting for config completion result.\n");
            status = ALT_E_TMO;
        }
        else
        {
            dprintf("FPGA[11]: i = %d.\n", i);
        }
    }

    /*
     * Step 12:
     * Write dclkcnt = 0xf.
     // Write: ALT_FPGAMGR_DCLKCNT_ADDR = 0xf.
     // Wait: ALT_FPGAMGR_DCLKSTAT_ADDR = 1.
     */

    if (status == ALT_E_SUCCESS)
    {
        int i = 10000;
        dprintf("FPGA[cfg]: === Step 12 === (starting i = %d).\n", i);

        /* Clear the DCLKSTAT.dcntdone before starting. */
        if (alt_read_word(ALT_FPGAMGR_DCLKSTAT_ADDR))
        {
            alt_write_word(ALT_FPGAMGR_DCLKSTAT_ADDR, ALT_FPGAMGR_DCLKSTAT_DCNTDONE_SET_MSK);
        }

        alt_write_word(ALT_FPGAMGR_DCLKCNT_ADDR, 0xf);

        /* Now poll until DCLKSTAT.dcntdone = 1*/ 
        while ((alt_read_word(ALT_FPGAMGR_DCLKSTAT_ADDR) & ALT_FPGAMGR_DCLKSTAT_DCNTDONE_SET_MSK) == 0)
        {
            if (!--i)
            {
                dprintf("FPGA[12]: Timeout waiting for DCLKSTAT.DCNTDONE.\n");
                status = ALT_E_TMO;
                break;
            }
        }

        if (i != 0)
        {
            /* Cleanup DCLKSTAT.dcntdone status. */
            alt_write_word(ALT_FPGAMGR_DCLKSTAT_ADDR, ALT_FPGAMGR_DCLKSTAT_DCNTDONE_SET_MSK);
            dprintf("FPGA[12]: i = %d.\n", i);
        }
    }

    /*
     * Step 13:
     * Wait for initialization sequence to complete.
     // Wait: ALT_FPGAMGR_IMGCFG_STAT_F2S_USERMOD = 1
     */

    if (status == ALT_E_SUCCESS)
    {
        dprintf("FPGA[cfg]: === Step 13 ===\n");

        status = wait_for_fpga_status(ALT_FPGA_STATUS_F2S_USERMODE, true, 10000);

        if (status != ALT_E_SUCCESS)
        {
            dprintf("FPGA[13]: Timeout waiting for F2S_USERMOD = 1.\n");
        }
    }

    return status;
}

static ALT_STATUS_CODE alt_fpga_internal_configure(FPGA_DATA_t * fpga_data)
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;

    /* HPS should be on control before configuration. */
    if (g_fpgaState.cpu_in_control == false)
    {
        dprintf("FPGA[cfg]: precondition not met: CPU not in control.\n");
        return ALT_E_FPGA_NO_SOC_CTRL;
    }

    /* FPGA should not be in reset before attempting configuration. */
    if (g_fpgaState.reset_asserted)
    {
        dprintf("FPGA[cfg]: precondition not met: FPGA reset asserted.\n");
        return ALT_E_ERROR;
    }

    /*
     * Step 1:
     * Verify MSEL is 000 or 001.
     */

    dprintf("FPGA[cfg]: === Step 1 === (skipped due to precondition)\n");

    /*
     * Step 2:
     * Determine the CFGWIDTH and CDRATIO from the programming mode and write to HW.
     */

    dprintf("FPGA[cfg]: === Step 2 === (skipped due to precondition)\n");

    /*
     * Step 3:
     * Verify no other devices are interfering with programming.
     */

    dprintf("FPGA[cfg]: === Step 3 === (skipped due to precondition)\n");

    /*
     * Step 4:
     * Deassert signal drives before taking over those overrides.
     */

    dprintf("FPGA[cfg]: === Step 4 === (skipped due to precondition)\n");

    /*
     * Step 5:
     * Enable overrides for DATA / DCLK / NCONFIG.
     * Disable overrides for NSTATUS / CONF_DONE.
     */

    dprintf("FPGA[cfg]: === Step 5 === (skipped due to precondition)\n");

    /*
     * Step 6:
     * Drive chip select.
     */

    dprintf("FPGA[cfg]: === Step 6 === (skipped due to precondition)\n");

    /*
     * Step 7:
     * Repeat step 3, just in case.
     */

    dprintf("FPGA[cfg]: === Step 7 === (skipped due to precondition)\n");

    /*
     * Step 8:
     * Reset the configuration.
     // Write: ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG = 0
     // Wait: ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN = 0
     *
     // Write: ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG = 1
     // Wait: ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN = 1
     *
     // Verify: ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN = 0
     // Verify: ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_OE = 1
     */

    dprintf("FPGA[cfg]: === Step 8 ===\n");

    alt_clrbits_word(ALT_FPGAMGR_IMGCFG_CTL_00_ADDR, ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG_SET_MSK);
    status = wait_for_fpga_status(ALT_FPGA_STATUS_F2S_NSTATUS_PIN, false, 100000);
    /* Handle any error conditions after reset request has been withdrawn.
       This is to avoid bailing out with reset assert requested. */
    
    alt_setbits_word(ALT_FPGAMGR_IMGCFG_CTL_00_ADDR, ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NCFG_SET_MSK);

    /* This is the error handler from above, step 8a. */
    if (status != ALT_E_SUCCESS)
    {
        dprintf("FPGA[8]: Error: Timeout waiting for F2S_NSTAT_PIN = 0.\n");
        return ALT_E_FPGA_CFG;
    }
    
    status = wait_for_fpga_status(ALT_FPGA_STATUS_F2S_NSTATUS_PIN, true, 100000);

    if (status != ALT_E_SUCCESS)
    {
        dprintf("FPGA[8]: Error: Timeout waiting for F2S_NSTAT_PIN = 1.\n");
        return ALT_E_FPGA_CFG;
    }

    if ((alt_read_word(ALT_FPGAMGR_IMGCFG_STAT_ADDR) & (ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN_SET_MSK | ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_OE_SET_MSK))
        != ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_OE_SET_MSK)
    {
        dprintf("FPGA[8]: Error: F2S_CONDONE_PIN != 0 or F2S_CONDONE_OE != 1.\n");
        return ALT_E_ERROR;
    }

    /*
     * Step 9:
     * Enable DCLK and DATA path.
     // Write: ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_DATA = 1
     // Write: ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_CTL = 1
     */

    dprintf("FPGA[cfg]: === Step 9 ===\n");

    alt_setbits_word(ALT_FPGAMGR_IMGCFG_CTL_02_ADDR,
                     ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_DATA_SET_MSK | ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_CTL_SET_MSK);

    /*
     * Helper function for Steps 10 - 13.
     */

    status = alt_fpga_internal_configure_idata(fpga_data);

    /*
     * Step 14:
     * Stop DATA and DCLK path.
     // Write: ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_DATA = 0
     // Write: ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_CTL = 0
     */

    dprintf("FPGA[cfg]: === Step 14 ===\n");

    alt_clrbits_word(ALT_FPGAMGR_IMGCFG_CTL_02_ADDR,
                     ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_DATA_SET_MSK | ALT_FPGAMGR_IMGCFG_CTL_02_EN_CFG_CTL_SET_MSK);
    
    /*
     * Step 15:
     * Disable chip select.
     // Write: ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NCE = 1
     */

    dprintf("FPGA[cfg]: === Step 15 === (skipped due to post condition)\n");

    /*
     * Step 16:
     * Disable overrides for DATA / DCLK / NCONFIG
     // Write: ALT_FPGAMGR_IMGCFG_CTL_01_S2F_NEN_CFG = 1
     // Write: ALT_FPGAMGR_IMGCFG_CTL_00_S2F_NEN_NCFG = 1
     */

    dprintf("FPGA[cfg]: === Step 16 === (skipped due to post condition)\n");
    
    /*
     * Step 17:
     * Final check.
     // Verify: ALT_FPGAMGR_IMGCFG_STAT_F2S_USERMOD = 1
     // Verify: ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN = 1
     // Verify: ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN = 1
     */

    if (status == ALT_E_SUCCESS)
    {
        dprintf("FPGA[cfg]: === Step 17 ===\n");

        if ((alt_read_word(ALT_FPGAMGR_IMGCFG_STAT_ADDR) & (ALT_FPGAMGR_IMGCFG_STAT_F2S_USERMOD_SET_MSK | ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN_SET_MSK | ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN_SET_MSK))
            != (ALT_FPGAMGR_IMGCFG_STAT_F2S_USERMOD_SET_MSK | ALT_FPGAMGR_IMGCFG_STAT_F2S_NSTAT_PIN_SET_MSK | ALT_FPGAMGR_IMGCFG_STAT_F2S_CONDONE_PIN_SET_MSK))
        {
            dprintf("FPGA[17]: Error: F2S_USERMOD != 1 or F2S_NSTAT_PIN != 1 or F2S_CONDONE_PIN != 1.\n");
            return ALT_E_ERROR;
        }
    }

    return status;
}

ALT_STATUS_CODE alt_fpga_configure(const void * buf,
                                   size_t len)
{
    FPGA_DATA_t fpga_data;
    fpga_data.type             = FPGA_DATA_FULL;
    fpga_data.mode.full.buffer = buf;
    fpga_data.mode.full.length = len;

#if ALT_FPGA_ENABLE_DMA_SUPPORT
    fpga_data.use_dma          = false;
#endif

    return alt_fpga_internal_configure(&fpga_data);
}

ALT_STATUS_CODE alt_fpga_configure_list(const void ** buf_list,
                                        const size_t * len_list,
                                        size_t list_count)
{
    FPGA_DATA_t fpga_data;
    fpga_data.type             = FPGA_DATA_LIST;
    fpga_data.mode.list.buffer = buf_list;
    fpga_data.mode.list.length = len_list;
    fpga_data.mode.list.count  = list_count;

#if ALT_FPGA_ENABLE_DMA_SUPPORT
    fpga_data.use_dma          = false;
#endif

    return alt_fpga_internal_configure(&fpga_data);
}

#if ALT_FPGA_ENABLE_DMA_SUPPORT

ALT_STATUS_CODE alt_fpga_configure_dma(const void * buf,
                                       size_t len,
                                       ALT_DMA_CHANNEL_t dma_channel)
{
    FPGA_DATA_t fpga_data;
    fpga_data.type             = FPGA_DATA_FULL;
    fpga_data.mode.full.buffer = buf;
    fpga_data.mode.full.length = len;
    fpga_data.use_dma          = true;
    fpga_data.dma_channel      = dma_channel;

    return alt_fpga_internal_configure(&fpga_data);
}

ALT_STATUS_CODE alt_fpga_configure_list_dma(const void ** buf_list,
                                            const size_t * len_list,
                                            size_t list_count,
                                            ALT_DMA_CHANNEL_t dma_channel)
{
    FPGA_DATA_t fpga_data;
    fpga_data.type             = FPGA_DATA_LIST;
    fpga_data.mode.list.buffer = buf_list;
    fpga_data.mode.list.length = len_list;
    fpga_data.mode.list.count  = list_count;
    fpga_data.use_dma          = true;
    fpga_data.dma_channel      = dma_channel;

    return alt_fpga_internal_configure(&fpga_data);
}

#endif

ALT_STATUS_CODE alt_fpga_istream_configure(alt_fpga_istream_t cfg_stream,
                                           void * user_data)
{
    FPGA_DATA_t fpga_data;
    fpga_data.type = FPGA_DATA_STREAM;
    fpga_data.mode.stream.callback = cfg_stream;
    fpga_data.mode.stream.context  = user_data;

#if ALT_FPGA_ENABLE_DMA_SUPPORT
    fpga_data.use_dma              = false;
#endif

    return alt_fpga_internal_configure(&fpga_data);
}

#if ALT_FPGA_ENABLE_DMA_SUPPORT

ALT_STATUS_CODE alt_fpga_istream_configure_dma(alt_fpga_istream_t cfg_stream,
                                               void * user_data,
                                               ALT_DMA_CHANNEL_t dma_channel)
{
    FPGA_DATA_t fpga_data;
    fpga_data.type = FPGA_DATA_STREAM;
    fpga_data.mode.stream.callback = cfg_stream;
    fpga_data.mode.stream.context  = user_data;
    fpga_data.use_dma              = true;
    fpga_data.dma_channel          = dma_channel;

    return alt_fpga_internal_configure(&fpga_data);
}

#endif

ALT_STATUS_CODE alt_fpga_int_enable(uint32_t mask)
{
    /* Writing 0 will cause the interrupt to be unmasked. */
    alt_clrbits_word(ALT_FPGAMGR_INTR_MSK_ADDR, mask);

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_fpga_int_disable(uint32_t mask)
{
    /* Writing 1 will cause the interrupt to be masked. */
    alt_setbits_word(ALT_FPGAMGR_INTR_MSK_ADDR, mask);

    return ALT_E_SUCCESS;
}

uint32_t alt_fpga_int_get(void)
{
    return alt_read_word(ALT_FPGAMGR_INTR_MSKED_STAT_ADDR);
}

ALT_STATUS_CODE alt_fpga_int_clear(uint32_t mask)
{
    alt_write_word(ALT_FPGAMGR_INTR_MSKED_STAT_ADDR, mask);

    return ALT_E_SUCCESS;
}

uint32_t alt_fpga_gpi_read(uint32_t mask)
{
    if (mask == 0)
    {
        return 0;
    }

    return alt_read_word(ALT_FPGAMGR_GPI_ADDR) & mask;
}

ALT_STATUS_CODE alt_fpga_gpo_write(uint32_t mask, uint32_t value)
{
    if (mask != 0)
    {
        alt_replbits_word(ALT_FPGAMGR_GPO_ADDR, mask, value);
    }

    return ALT_E_SUCCESS;
}
