/*****************************************************************************
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
*****************************************************************************/

/*
 * $Id: //acds/rel/20.1/embedded/examples/software/Altera-SoCFPGA-HardwareLib-Timer-A10-GNU/leds_a10.c#1 $
 */

#include <alt_printf.h>
#include <socal/hps.h>
#include <socal/socal.h>
#include <socal/alt_pinmux.h>
#include <socal/alt_rstmgr.h>
#include <alt_spi.h>

void setLEDS(uint8_t data);

static void spin (unsigned int loop) {
    volatile unsigned int i = loop;
    for(; i != 0; i--);
}
/*
// Data patterns (for 8-bit transfers)
*/
#define A10SYCON_RDCPLDREV   0x01    /* Read CPLD Revision */
#define A10SYCON_WRLED       0x02    /* Write the LED */
#define A10SYCON_RDLED       0x03    /* Read the LED */
#define A10SYCON_RDPB        0x05    /* Read the Pushbutton/DIP */
#define A10SYCON_WRPBFLG     0x06    /* Write(Clear) the Pushbutton flag */
#define A10SYCON_RDPBFLG     0x07    /* Read the Pushbutton flag */
#define A10SYCON_RDPGD1      0x09    /* Read Power Good 1 */
#define A10SYCON_RDPGD2      0x0B    /* Read Power Good 2 */
#define A10SYCON_RDPGD3      0x0D    /* Read Power Good 3 */
#define A10SYCON_RDFMCA      0x0F    /* Read FMCA/B Power Enable */

ALT_SPI_DEV_t spi_dev;

/*
// Configure the master interface.
*/
ALT_STATUS_CODE setupLEDs(void)
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    ALT_SPI_CONFIG_t    spi_config;
    ALT_SPIM_raw_t *spi = (ALT_SPIM_raw_t*)ALT_SPIM1_ADDR;

    /* Release the SPI from reset */
    alt_clrbits_word(ALT_RSTMGR_PER0MODRST_ADDR, ALT_RSTMGR_PER0MODRST_SPIM1_SET_MSK);

    status = alt_spi_init(ALT_SPI_SPIM1, &spi_dev);

    if (status != ALT_E_SUCCESS)
        return status;

    /* Ensure both interfaces are disabled before configuring */
    status = alt_spi_disable(&spi_dev);
    if (status != ALT_E_SUCCESS)
        return status;
    
    spi_config.frame_size           = ALT_SPI_DFS_8BIT;
    spi_config.frame_format         = ALT_SPI_FRF_SPI;/* Motorola protocol */
    spi_config.clk_phase            = ALT_SPI_SCPH_TOGGLE_START;
    spi_config.clk_polarity         = ALT_SPI_SCPOL_INACTIVE_HIGH;
    spi_config.transfer_mode        = ALT_SPI_TMOD_TXRX;
    spi_config.slave_output_enable  = false;
    spi_config.loopback_mode        = false;    
    status = alt_spi_config_set(&spi_dev, &spi_config);
    if (status != ALT_E_SUCCESS)
        return status;

    status = alt_spi_divider_set(&spi_dev, 400);
    if (status != ALT_E_SUCCESS)
        return status;

    status = alt_spi_tx_fifo_threshold_set(&spi_dev, 1);
    if (status != ALT_E_SUCCESS)
        return status;
    status = alt_spi_rx_fifo_threshold_set(&spi_dev, 1);
    if (status != ALT_E_SUCCESS)
        return status;

    status = alt_spi_int_disable(&spi_dev, ALT_SPI_STATUS_ALL);
    if (status != ALT_E_SUCCESS)
        return status;
    
    alt_setbits_word((uint32_t *) &(spi->ser), 1);
    
    /* Enable the master interface and put data in the transmit
    // FIFO.  Data transmits immediately thereafter. */
    status = alt_spi_enable(&spi_dev);
    
    setLEDS(0);
    
    return status;
}

/* This function writes 1 byte of data out on the serial port and
// returns 1 byte of data. */
void setLEDS(uint8_t data)
{
    uint16_t fifodata;
    int testfail;
    int count;
    
    data = ~(data<<4);

    /* Write it out. */
    alt_spi_tx_fifo_enq(&spi_dev, A10SYCON_WRLED);
    alt_spi_tx_fifo_enq(&spi_dev, data);

    testfail = 1;
    for(count=0; count<5000; count++)
    {
        /* If FIFO is empty, all transactions were sent */
        if(alt_spi_tx_fifo_is_empty(&spi_dev))
        {
            testfail = 0;
            break;
        }
    }

    spin(1000);
    /* If OK, Read the result */
    if (!testfail) 
    {
        /* The first byte is garbage */
        alt_spi_rx_fifo_deq(&spi_dev, &fifodata);
        /* This is the interesting data */
        alt_spi_rx_fifo_deq(&spi_dev, &fifodata);
    }
}

ALT_STATUS_CODE cleanupLEDs(void)
{
    /*
    // Disable SPIm1 ports when complete, but not before having
    // checked since disabling the peripheral clears the FIFOs!
    */
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    
    status = alt_spi_disable(&spi_dev);
    return status;
}
