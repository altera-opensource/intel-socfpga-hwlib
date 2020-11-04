/*****************************************************************************
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
*****************************************************************************/

/*
 * $Id: //acds/rel/20.1std/embedded/examples/software/Altera-SoCFPGA-HardwareLib-Timer-AV-ARMCC/leds_av.c#1 $
 */

#include <stdio.h>
#include <inttypes.h>
#include "alt_generalpurpose_io.h"
#include "socal/socal.h"
#include "socal/hps.h"

 #define ALTR_5XS1_GPIO1_LED0                                  (0x00000001) /*GPIO0*/
 #define ALTR_5XS1_GPIO1_LED1                                  (0x00000800) /*GPIO1*/
 #define ALTR_5XS1_GPIO1_LED2                                  (0x00020000) /*GPIO0*/
 #define ALTR_5XS1_GPIO1_LED3                                  (0x00040000) /*GPIO0*/

void setLEDS(uint8_t data)
{
    uint32_t temp;
    data = ~data;
    
    /* PortA drives LED 0,2,3 */
    temp = (data & 1 ? ALTR_5XS1_GPIO1_LED0 : 0) |
        (data & 4 ? ALTR_5XS1_GPIO1_LED2 : 0) |
        (data & 8 ? ALTR_5XS1_GPIO1_LED3 : 0);
    alt_gpio_port_data_write(ALT_GPIO_PORTA, 
        ALTR_5XS1_GPIO1_LED0 |
        ALTR_5XS1_GPIO1_LED2 | 
        ALTR_5XS1_GPIO1_LED3, temp);

    /* Port B drives LED 1 */
    temp = data & 2 ? ALTR_5XS1_GPIO1_LED1 : 0;
    alt_gpio_port_data_write(ALT_GPIO_PORTB, 
        ALTR_5XS1_GPIO1_LED1, temp);
}

ALT_STATUS_CODE setupLEDs(void)
{
    ALT_STATUS_CODE status = ALT_E_SUCCESS;
    /*
     * Init the GPIO system
    */
    status = alt_gpio_init();
    if(status == ALT_E_SUCCESS)
    {
        status = alt_gpio_port_datadir_set(
            ALT_GPIO_PORTA,
            ALTR_5XS1_GPIO1_LED0 |
            ALTR_5XS1_GPIO1_LED2 | ALTR_5XS1_GPIO1_LED3, 
            ALTR_5XS1_GPIO1_LED0 |
            ALTR_5XS1_GPIO1_LED2 | ALTR_5XS1_GPIO1_LED3);
    }
    if(status == ALT_E_SUCCESS)
    {
        status = alt_gpio_port_datadir_set(ALT_GPIO_PORTB, ALTR_5XS1_GPIO1_LED1, ALTR_5XS1_GPIO1_LED1);
    }
    return status;
}

ALT_STATUS_CODE cleanupLEDs(void)
{
    alt_gpio_uninit();
    return ALT_E_SUCCESS;
}
