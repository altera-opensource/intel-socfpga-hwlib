/******************************************************************************
*
* Copyright 2013,2017 Altera Corporation. All Rights Reserved.
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
 * $Id: //acds/main/embedded/ip/hps/armv8/hwlib/src/hwmgr/alt_interrupt.c#1 $
 */

#include <stdio.h>
#include <inttypes.h>
#include "alt_interrupt.h"
#include "socal/socal.h"
#include "hwlib.h"
#include "socal/hps.h"
#include "socal/alt_gic.h"

#include <alt_printf.h>
#ifdef DEBUG_ALT_INTERRUPT
  #define dprintf printf
#else
  #define dprintf null_printf
#endif

/* Interrupt attribute(s) flags */

typedef enum INT_FLAG_e
{
    INT_FLAG_IMPLEMENTED = 0x01
}
INT_FLAG_t;

typedef struct INT_DISPATCH_s
{
    alt_int_callback_t callback;
    void *             context;
} INT_DISPATCH_t;

/* Interrupt dispatch information
 / Total number of interrupts = SGI (16) + PPI (16) + SPI count (224) 
 */

static INT_DISPATCH_t alt_int_dispatch[ALT_INT_PROVISION_INT_COUNT];
static uint8_t alt_int_flag[ALT_INT_PROVISION_INT_COUNT];

/* Number of CPU(s) in system */
static uint32_t alt_int_count_cpu;
/* Number of interrupts in system, rounded up to nearest 32 */
static uint32_t alt_int_count_int;

/* ASM functions */
extern void clear_sctlr_vbit(void);

extern int alt_interrupt_vector;

/* Forward Declarations */
void alt_int_handler_irq(void);

ALT_STATUS_CODE alt_int_global_init()
{
    int i;
#ifdef VIRT_PLATFORM
    /* Virtual Platform doesn't properly emulate the GIC */
    alt_int_count_cpu = 4;
    alt_int_count_int = 256;

    for(i = 0; i < ALT_INT_PROVISION_INT_COUNT; i++)
    {
        alt_int_dispatch[i].callback = 0;
        alt_int_dispatch[i].context  = 0;
        alt_int_flag[i] = INT_FLAG_IMPLEMENTED;
    }
#else
    uint32_t icdictr;
    icdictr = alt_read_word(ALT_GIC_DIST_GICD_TYPER_ADDR);
    alt_int_count_cpu = ((icdictr >> 5) & 0x7) + 1;
    alt_int_count_int = ((icdictr & 0x1F) + 1) << 5;

    /* Initialize the callback and context array
     / Initialize interrupt flags array */
    for (i = 0; i < ALT_INT_PROVISION_INT_COUNT; ++i)
    {
        alt_int_dispatch[i].callback = 0;
        alt_int_dispatch[i].context  = 0;
        alt_int_flag[i] = 0;
    }

    /* Some preloaders enable interrupts but do not properly cleanup. This
     / will prevent interrupts from occuring when execution is handed off from
     / the preloader. */
    alt_int_global_disable();

    /* Discover all interrupts that are implemented in hardware. */
    for (i = 0; i < (ALT_INT_PROVISION_INT_COUNT / 32); ++i)
    {
        int j;
        uint32_t value;
        /* Set the whole bank to be enabled. */
        alt_write_word((uint8_t *)ALT_GIC_DIST_GICD_ISENABLER0_ADDR + i * sizeof(uint32_t), 0xffffffff);

        /* Read it back to see which bits stick. */
        value = alt_read_word((uint8_t *)ALT_GIC_DIST_GICD_ISENABLER0_ADDR + i * sizeof(uint32_t));
        for (j = 0; j < 32; ++j)
        {
            if (((1 << j) & value) != 0)
            {
                alt_int_flag[i * 32 + j] |= INT_FLAG_IMPLEMENTED;
            }
        }

        /* Clear the whole bank to be disabled. */
        alt_write_word((uint8_t *)ALT_GIC_DIST_GICD_ICENABLER0_ADDR + i * sizeof(uint32_t), 0xffffffff);
    }
#endif
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_int_global_uninit()
{
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_int_global_enable()
{
    alt_setbits_word(ALT_GIC_DIST_GICD_CTLR_ADDR, 0x1);
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_int_global_disable()
{
    alt_clrbits_word(ALT_GIC_DIST_GICD_CTLR_ADDR, 0x1);
    return ALT_E_SUCCESS;
}


ALT_STATUS_CODE alt_int_dist_enable(ALT_INT_INTERRUPT_t int_id)
{
    uint32_t regoffset   = int_id >> 5;
    uint32_t regbitshift = int_id & 0x1F;
    if ((uint32_t)int_id >= ALT_INT_PROVISION_INT_COUNT)
    {
        return ALT_E_BAD_ARG;
    }
    if ((alt_int_flag[int_id] & INT_FLAG_IMPLEMENTED) == 0)
    {
        return ALT_E_BAD_ARG;
    }
    alt_write_word((uint8_t *)ALT_GIC_DIST_GICD_ISENABLER0_ADDR + regoffset * sizeof(uint32_t), 1 << regbitshift);
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_int_dist_disable(ALT_INT_INTERRUPT_t int_id)
{
    uint32_t regoffset   = int_id >> 5;
    uint32_t regbitshift = int_id & 0x1F;

    if ((uint32_t)int_id >= ALT_INT_PROVISION_INT_COUNT)
    {
        return ALT_E_BAD_ARG;
    }
    if ((alt_int_flag[int_id] & INT_FLAG_IMPLEMENTED) == 0)
    {
        return ALT_E_BAD_ARG;
    }
    alt_write_word((uint8_t *)ALT_GIC_DIST_GICD_ICENABLER0_ADDR + regoffset * sizeof(uint32_t), 1 << regbitshift);
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_int_dist_is_enabled(ALT_INT_INTERRUPT_t int_id)
{
    uint32_t regoffset   = int_id >> 5;
    uint32_t regbitshift = int_id & 0x1F;
    uint32_t icdisprn;
    if ((uint32_t)int_id >= ALT_INT_PROVISION_INT_COUNT)
    {   /* Interrupts on the GIC is disabled by default. */
        return ALT_E_BAD_ARG;
    }
    if ((alt_int_flag[int_id] & INT_FLAG_IMPLEMENTED) == 0)
    {   /* Interrupts on the GIC is disabled by default. */
        return ALT_E_FALSE;
    }
    icdisprn = alt_read_word((uint8_t *)ALT_GIC_DIST_GICD_ISENABLER0_ADDR + regoffset * sizeof(uint32_t));
    return ((icdisprn >> regbitshift) & 1) ? ALT_E_TRUE : ALT_E_FALSE;
}

ALT_STATUS_CODE alt_int_dist_pending_set(ALT_INT_INTERRUPT_t int_id)
{
    uint32_t regoffset   = int_id >> 5;
    uint32_t regbitshift = int_id & 0x1F;

    if ((uint32_t)int_id >= ALT_INT_PROVISION_INT_COUNT || 
        (uint32_t)int_id < 16 || 
        (alt_int_flag[int_id] & INT_FLAG_IMPLEMENTED) == 0)
    {
        return ALT_E_BAD_ARG;
    }
    alt_write_word((uint8_t *)ALT_GIC_DIST_GICD_ISPENDR0_ADDR + regoffset * sizeof(uint32_t), 1 << regbitshift);

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_int_dist_pending_clear(ALT_INT_INTERRUPT_t int_id)
{
    uint32_t regoffset   = int_id >> 5;
    uint32_t regbitshift = int_id & 0x1F;
    
    if ((uint32_t)int_id >= ALT_INT_PROVISION_INT_COUNT || 
        (uint32_t)int_id < 16 || 
        (alt_int_flag[int_id] & INT_FLAG_IMPLEMENTED) == 0)
    {
        return ALT_E_BAD_ARG;
    }
    alt_write_word((uint8_t *)ALT_GIC_DIST_GICD_ICPENDR0_ADDR + regoffset * sizeof(uint32_t), 1 << regbitshift);
    return ALT_E_SUCCESS;

}

ALT_STATUS_CODE alt_int_dist_is_pending(ALT_INT_INTERRUPT_t int_id)
{
    uint32_t regoffset   = int_id >> 5;
    uint32_t regbitshift = int_id & 0x1F;
    uint32_t icdisprn;
    if ((uint32_t)int_id >= ALT_INT_PROVISION_INT_COUNT)
    {
        /* Interrupts on the GIC is not pending by default. */
        return ALT_E_BAD_ARG;
    }
    if ((alt_int_flag[int_id] & INT_FLAG_IMPLEMENTED) == 0)
    {
        /* Interrupts on the GIC is not pending by default. */
        return ALT_E_FALSE;
    }
    icdisprn = alt_read_word((uint8_t *)ALT_GIC_DIST_GICD_ICPENDR0_ADDR + regoffset * sizeof(uint32_t));
    return  (( (icdisprn >> regbitshift) & 1) != 0) ? ALT_E_TRUE : ALT_E_FALSE;
}

ALT_STATUS_CODE alt_int_dist_is_active(ALT_INT_INTERRUPT_t int_id)
{
    uint32_t regoffset   = int_id >> 5;
    uint32_t regbitshift = int_id & 0x1F;
    uint32_t icdabrn;
    
    if ((uint32_t)int_id >= ALT_INT_PROVISION_INT_COUNT)
    {
        /* Interrupts on the GIC is not active by default, so report false. */
        return ALT_E_BAD_ARG;
    }
    if ((alt_int_flag[int_id] & INT_FLAG_IMPLEMENTED) == 0)
    {
        /* Interrupts on the GIC is not active by default, so report false. */
        return ALT_E_FALSE;
    }
    icdabrn = alt_read_word((uint8_t *)ALT_GIC_DIST_GICD_ISACTIVER0_ADDR + regoffset * sizeof(uint32_t));
    if ((icdabrn & (1 << regbitshift)) != 0)
    {
        return ALT_E_TRUE;
    }
    else
    {
        return ALT_E_FALSE;
    }
}

ALT_STATUS_CODE alt_int_dist_priority_get(ALT_INT_INTERRUPT_t int_id,
                                          uint32_t * priority)
{
    uint32_t regoffset;
    uint8_t icdiprn;
    if ((uint32_t)int_id >= ALT_INT_PROVISION_INT_COUNT)
    {
        /* Interrupts on the GIC have a default priority of 0. */
        return ALT_E_BAD_ARG;
    }
    if ((alt_int_flag[int_id] & INT_FLAG_IMPLEMENTED) == 0)
    {
        /* Interrupts on the GIC have a default priority of 0. */
        *priority = 0;
        return ALT_E_SUCCESS;
    }
    regoffset = int_id;
    icdiprn = alt_read_byte((uint8_t *)ALT_GIC_DIST_GICD_IPRIORITYR0_ADDR + regoffset * sizeof(uint8_t));

    *priority = icdiprn;
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_int_dist_priority_set(ALT_INT_INTERRUPT_t int_id, 
                                          uint32_t priority)
{
    uint32_t regoffset = int_id;

    if ((uint32_t)int_id >= ALT_INT_PROVISION_INT_COUNT ||
        (alt_int_flag[int_id] & INT_FLAG_IMPLEMENTED) == 0 ||
        priority > 255)
    {
        return ALT_E_BAD_ARG;
    }    
    alt_write_byte((uint8_t *)ALT_GIC_DIST_GICD_IPRIORITYR0_ADDR + regoffset * sizeof(uint8_t), (uint8_t)priority);
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_int_dist_target_get(ALT_INT_INTERRUPT_t int_id,
                                        alt_int_cpu_target_t * target)
{
    uint32_t regoffset = int_id;
    if ((uint32_t)int_id >= ALT_INT_PROVISION_INT_COUNT)
    {
        return ALT_E_BAD_ARG;
    }
    if ((alt_int_flag[int_id] & INT_FLAG_IMPLEMENTED) == 0)
    {
        *target = 0;
        return ALT_E_SUCCESS;
    }
    *target = alt_read_byte((uint8_t *)ALT_GIC_DIST_GICD_ITARGETSR0_ADDR + regoffset * sizeof(uint8_t));    
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_int_dist_target_set(ALT_INT_INTERRUPT_t int_id,
                                        alt_int_cpu_target_t target)
{
    uint32_t regoffset = int_id;
    if (((uint32_t)int_id >= ALT_INT_PROVISION_INT_COUNT) ||
        (alt_int_flag[int_id] & INT_FLAG_IMPLEMENTED) == 0 ||
        (int_id < 32) ||
        (target >= (1 << alt_int_count_cpu)) )
    {
        return ALT_E_BAD_ARG;
    }
    alt_write_byte((uint8_t *)ALT_GIC_DIST_GICD_ITARGETSR0_ADDR + regoffset * sizeof(uint8_t), target);
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_int_dist_trigger_get(ALT_INT_INTERRUPT_t int_id,
                                         ALT_INT_TRIGGER_t * trigger)
{
    uint32_t regoffset   = int_id >> 4;
    uint32_t regbitshift = ((int_id & 0x0F) * 2) + 1;
    uint32_t regval;
    
    if ((uint32_t) int_id >= ALT_INT_PROVISION_INT_COUNT)
    {
        return ALT_E_BAD_ARG;
    }
    if ((alt_int_flag[int_id] & INT_FLAG_IMPLEMENTED) == 0)
    {
        *trigger = ALT_INT_TRIGGER_NA;
        return ALT_E_SUCCESS;
    }
    if (int_id < 16)
    {
        *trigger = ALT_INT_TRIGGER_SOFTWARE;
        return ALT_E_SUCCESS;
    }

    regval = alt_read_word((uint8_t *)ALT_GIC_DIST_GICD_ICFGR0_ADDR + regoffset * sizeof(uint32_t));
    if ((regval & (1 << regbitshift)) == 0)
    {
        *trigger = ALT_INT_TRIGGER_LEVEL;
    }
    else
    {
        *trigger = ALT_INT_TRIGGER_EDGE;
    }
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_int_dist_trigger_set(ALT_INT_INTERRUPT_t int_id,
                                         ALT_INT_TRIGGER_t trigger_type)
{
    uint32_t regoffset   = int_id >> 4;
    uint32_t regbitshift = ((int_id & 0x0F) * 2) + 1;

    if ((uint32_t)int_id >= ALT_INT_PROVISION_INT_COUNT ||
        (alt_int_flag[int_id] & INT_FLAG_IMPLEMENTED) == 0)
    {
        return ALT_E_BAD_ARG;
    }
    if (int_id < 16)
    {
        if (   (trigger_type == ALT_INT_TRIGGER_AUTODETECT)
            || (trigger_type == ALT_INT_TRIGGER_SOFTWARE))
        {
            return ALT_E_SUCCESS;
        }
        else
        {
            return ALT_E_BAD_ARG;
        }
    }

    if (trigger_type == ALT_INT_TRIGGER_AUTODETECT)
    {
        if      (int_id <=  31)  { trigger_type = ALT_INT_TRIGGER_EDGE;  } /* PPI */
        else if (int_id <=  48)  { trigger_type = ALT_INT_TRIGGER_LEVEL; } /* 32-39   SDM
                                                                              40-48   SCP  */
        else if (int_id <=  112) { /* do nothing */                      } /* 49-112  FPGA Interrupts */
        else                     { trigger_type = ALT_INT_TRIGGER_LEVEL; } /* 113-121 DMAC
                                                                              122-124 EMAC 0-2
                                                                              125-126 USB 0/1
                                                                              127     DD4 protocol
                                                                              128     SDMMC
                                                                              129     NAND
                                                                              131-134 SPI0-3
                                                                              135-139 I2C0-4
                                                                              140-141 UART0/1
                                                                              142-144 GPIO0-2
                                                                              145-146 Timer0/1
                                                                              147-148 OSC0/1
                                                                              149-150 WDOG0/1
                                                                              151     Clock Manager
                                                                              152     Reset Manager
                                                                              153-156 Coresight
                                                                              157-158 WDOG2/3
                                                                              160-201 SMMU-500
                                                                              202     System Monitor*/
    }

    switch (trigger_type)
    {
    case ALT_INT_TRIGGER_LEVEL:
        alt_clrbits_word((uint8_t *)ALT_GIC_DIST_GICD_ICFGR0_ADDR + regoffset * sizeof(uint32_t), 1 << regbitshift);
        break;
    case ALT_INT_TRIGGER_EDGE:
        alt_setbits_word((uint8_t *)ALT_GIC_DIST_GICD_ICFGR0_ADDR + regoffset * sizeof(uint32_t), 1 << regbitshift);
        break;
    default:
        return ALT_E_BAD_ARG;
    }
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_int_sgi_trigger(ALT_INT_INTERRUPT_t int_id,
                                    ALT_INT_SGI_TARGET_t target_filter,
                                    alt_int_cpu_target_t target_list,
                                    bool secure_only)
{
    /* See GIC 1.0, section 4.3.13. */

    if (target_list >= (1 << alt_int_count_cpu))
    {
        return ALT_E_BAD_ARG;
    }
    else if ((uint32_t)int_id < 16)
    {
        uint32_t filterbits;
        uint32_t sattmask = 0;

        switch (target_filter)
        {
        case ALT_INT_SGI_TARGET_LIST:
            filterbits = 0x0 << 24;
            break;
        case ALT_INT_SGI_TARGET_ALL_EXCL_SENDER:
            filterbits = 0x1 << 24;
            break;
        case ALT_INT_SGI_TARGET_SENDER_ONLY:
            filterbits = 0x2 << 24;
            break;
        default:
            return ALT_E_BAD_ARG;
        }

        if (!secure_only)
        {
            sattmask = 1 << 15;
        }

        alt_write_word(ALT_GIC_DIST_GICD_SGIR_ADDR, int_id | sattmask | (target_list << 16) | filterbits); /* icdsgir */

        return ALT_E_SUCCESS;
    }
    else
    {
        return ALT_E_BAD_ARG;
    }
}

ALT_STATUS_CODE alt_int_cpu_init()
{
    ALT_STATUS_CODE status;
    
    /* Setup the Vector Interrupt Table */
    /* set SCTLR.V to 0. This enables the vbar
     / Set the vector interrupt table (VBAR) to use alt_interrupt_vector */
#ifdef ARCH32
     clear_sctlr_vbit();
#endif
    alt_setbits_word(ALT_GIC_CPUIF_GICC_CTLR_ADDR, 1);
    set_vector_table(&alt_interrupt_vector);
    
    /* Setup the priority mask and binary point defaults.
     / This will allow all interrupts to have sufficient priority to be
     / forwarded to the CPUs. */

    status = alt_int_cpu_priority_mask_set(0xff); 
    if (status != ALT_E_SUCCESS)
    {
        return status;
    }
    status = alt_int_cpu_binary_point_set(0);
    if (status != ALT_E_SUCCESS)
    {
        return status;
    }

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_int_cpu_uninit()
{
    alt_clrbits_word(ALT_GIC_CPUIF_GICC_CTLR_ADDR, 1);
    return ALT_E_SUCCESS;
}

uint32_t alt_int_cpu_priority_mask_get()
{
    uint32_t iccpmr = alt_read_word(ALT_GIC_CPUIF_GICC_PMR_ADDR);
    return iccpmr;
}

ALT_STATUS_CODE alt_int_cpu_priority_mask_set(uint32_t priority_mask)
{
    if (priority_mask < 256)
    {
        alt_write_word(ALT_GIC_CPUIF_GICC_PMR_ADDR, priority_mask);
        return ALT_E_SUCCESS;
    }
    else
    {
        return ALT_E_BAD_ARG;
    }
}

uint32_t alt_int_cpu_binary_point_get()
{
    uint32_t iccbpr = alt_read_word(ALT_GIC_CPUIF_GICC_BPR_ADDR);
    return iccbpr;
}

ALT_STATUS_CODE alt_int_cpu_binary_point_set(uint32_t binary_point)
{
    if (binary_point < 8)
    {
        alt_write_word(ALT_GIC_CPUIF_GICC_BPR_ADDR, binary_point); /* iccbpr */
        return ALT_E_SUCCESS;
    }
    else
    {
        return ALT_E_BAD_ARG;
    }
}

ALT_STATUS_CODE alt_int_isr_register(ALT_INT_INTERRUPT_t int_id,
                                     alt_int_callback_t callback,
                                     void * context)
{
    if ((uint32_t)int_id < ALT_INT_PROVISION_INT_COUNT)
    {
        alt_int_dispatch[int_id].callback = callback;
        alt_int_dispatch[int_id].context  = context;
        return ALT_E_SUCCESS;
    }
    else
    {
        return ALT_E_BAD_ARG;
    }
}

ALT_STATUS_CODE alt_int_isr_unregister(ALT_INT_INTERRUPT_t int_id)
{
    if ((uint32_t)int_id < ALT_INT_PROVISION_INT_COUNT)
    {
        alt_int_dispatch[int_id].callback = 0;
        alt_int_dispatch[int_id].context  = 0;
        return ALT_E_SUCCESS;
    }
    else
    {
        return ALT_E_BAD_ARG;
    }
}

uint32_t alt_int_util_cpu_count(void)
{
    uint32_t icdictr;
    if(alt_int_count_cpu)
    {
      return alt_int_count_cpu;
    }
    icdictr = alt_read_word(ALT_GIC_DIST_GICD_TYPER_ADDR);
    return alt_int_count_cpu = ((icdictr >> 5) & 0x7) + 1;
}

uint32_t alt_int_util_int_count(void)
{
    uint32_t icdictr;
    if(alt_int_count_int)
    {
      return alt_int_count_int;
    }
    icdictr = alt_read_word(ALT_GIC_DIST_GICD_TYPER_ADDR);
    return alt_int_count_int = ((icdictr & 0x1F) + 1) << 5;
}

alt_int_cpu_target_t alt_int_util_cpu_current(void)
{
    return 1 << alt_int_util_get_current_cpu();
}


#define ALT_INT_ICCIAR_ACKINTID_GET(x) ((x)&0x3FF)

void alt_int_handler_irq(void)
{
    uint32_t icciar = alt_read_word(ALT_GIC_CPUIF_GICC_IAR_ADDR);
    uint32_t ackintid = ALT_INT_ICCIAR_ACKINTID_GET(icciar);

    if (ackintid < ALT_INT_PROVISION_INT_COUNT)
    {
        if (alt_int_dispatch[ackintid].callback)
        {
            alt_int_dispatch[ackintid].callback(icciar, alt_int_dispatch[ackintid].context);
        }
    }
    else
    {
        /* Report error. */
        /*dprintf("INT[ISR]: Unhandled interrupt ID = 0x%" PRIx32 ".\n", ackintid);*/
    }
    alt_write_word(ALT_GIC_CPUIF_GICC_EOIR_ADDR, icciar);
}


#ifdef EXECUTION_LEVEL3

ALT_STATUS_CODE alt_int_global_enable_ns()
{
    alt_setbits_word(ALT_GIC_DIST_GICD_CTLR_ADDR, 0x2);
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_int_global_disable_ns()
{
    alt_clrbits_word(ALT_GIC_DIST_GICD_CTLR_ADDR, 0x2);
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_int_global_enable_all()
{
    alt_setbits_word(ALT_GIC_DIST_GICD_CTLR_ADDR, 0x3);
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_int_global_disable_all()
{
    alt_clrbits_word(ALT_GIC_DIST_GICD_CTLR_ADDR, 0x3);
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_int_dist_secure_enable(ALT_INT_INTERRUPT_t int_id)
{
    uint32_t regoffset   = int_id >> 5;
    uint32_t regbitshift = int_id & 0x1F;
    if ((uint32_t)int_id >= ALT_INT_PROVISION_INT_COUNT)
    {
        return ALT_E_BAD_ARG;
    }
    if ((alt_int_flag[int_id] & INT_FLAG_IMPLEMENTED) == 0)
    {
        return ALT_E_BAD_ARG;
    }
    alt_clrbits_word((uint8_t *)ALT_GIC_CPUIF_GICC_NSAPR0_ADDR + regoffset * sizeof(uint32_t), 1 << regbitshift);
    alt_clrbits_word((uint8_t *)ALT_GIC_DIST_GICD_IGROUPR0_ADDR + regoffset * sizeof(uint32_t), 1 << regbitshift);
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_int_dist_secure_disable(ALT_INT_INTERRUPT_t int_id)
{
    uint32_t regoffset   = int_id >> 5;
    uint32_t regbitshift = int_id & 0x1F;
    if ((uint32_t)int_id >= ALT_INT_PROVISION_INT_COUNT)
    {
        return ALT_E_BAD_ARG;
    }
    if ((alt_int_flag[int_id] & INT_FLAG_IMPLEMENTED) == 0)
    {
        return ALT_E_BAD_ARG;
    }
    alt_setbits_word((uint8_t *)ALT_GIC_CPUIF_GICC_NSAPR0_ADDR + regoffset * sizeof(uint32_t), 1 << regbitshift);
    alt_setbits_word((uint8_t *)ALT_GIC_DIST_GICD_IGROUPR0_ADDR + regoffset * sizeof(uint32_t), 1 << regbitshift);
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_int_dist_is_secure(ALT_INT_INTERRUPT_t int_id)
{
    uint32_t regoffset   = int_id >> 5;
    uint32_t regbitshift = int_id & 0x1F;
    uint32_t icdisprn;
    
    if ((uint32_t)int_id >= ALT_INT_PROVISION_INT_COUNT)
    {   /* Because interrupts are by default after reset secure, return the
         / default security state. */
        return ALT_E_BAD_ARG;
    }
    if ((alt_int_flag[int_id] & INT_FLAG_IMPLEMENTED) == 0)
    {   /* Because interrupts are by default after reset secure, return the
         / default security state. */
        return ALT_E_TRUE;
    }
    icdisprn = alt_read_word((uint8_t *)ALT_GIC_CPUIF_GICC_NSAPR0_ADDR + regoffset * sizeof(uint32_t));
    return  (0 == ((icdisprn >> regbitshift) & 1)) ? ALT_E_TRUE : ALT_E_FALSE;
}

ALT_STATUS_CODE alt_int_cpu_enable_ns()
{
    alt_setbits_word(ALT_GIC_CPUIF_GICC_CTLR_ADDR, 0x2);
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_int_cpu_disable_ns()
{
    alt_clrbits_word(ALT_GIC_CPUIF_GICC_CTLR_ADDR, 0x2);
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_int_cpu_enable_all()
{
    alt_setbits_word(ALT_GIC_CPUIF_GICC_CTLR_ADDR, 0x3);
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_int_cpu_disable_all()
{
    alt_clrbits_word(ALT_GIC_CPUIF_GICC_CTLR_ADDR, 0x3);
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_int_cpu_config_get(bool* use_secure_binary_point,
                                       bool* use_FIQ_for_secure_interrupts,
                                       bool* allow_secure_ack_all_interrupts)
{
    uint32_t iccicr = alt_read_word(ALT_GIC_CPUIF_GICC_CTLR_ADDR);

    if (use_secure_binary_point)
    {
        *use_secure_binary_point = (iccicr & (1 << 4)) != 0;
    }
    if (use_FIQ_for_secure_interrupts)
    {
        *use_FIQ_for_secure_interrupts = (iccicr & (1 << 3)) != 0;
    }
    if (allow_secure_ack_all_interrupts)
    {
        *allow_secure_ack_all_interrupts = (iccicr & (1 << 2)) != 0;
    }

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_int_cpu_config_set(bool use_secure_binary_point,
                                       bool use_FIQ_for_secure_interrupts,
                                       bool allow_secure_ack_all_interrupts)
{
    uint32_t iccicr = alt_read_word(ALT_GIC_CPUIF_GICC_CTLR_ADDR);

    if (use_secure_binary_point)
    {
        iccicr |= 1 << 4;
    }
    else
    {
        iccicr &= ~(1 << 4);
    }

    if (use_FIQ_for_secure_interrupts)
    {
        iccicr |= 1 << 3;
    }
    else
    {
        iccicr &= ~(1 << 3);
    }

    if (allow_secure_ack_all_interrupts)
    {
        iccicr |= 1 << 2;
    }
    else
    {
        iccicr &= ~(1 << 2);
    }

    alt_write_word(ALT_GIC_CPUIF_GICC_CTLR_ADDR, iccicr);

    return ALT_E_SUCCESS;
}

uint32_t alt_int_cpu_binary_point_get_ns()
{
    uint32_t iccabpr = alt_read_word(ALT_GIC_CPUIF_GICC_ABPR_ADDR);
    return iccabpr;
}

ALT_STATUS_CODE alt_int_cpu_binary_point_set_ns(uint32_t binary_point)
{
    if (binary_point < 8)
    {
        alt_write_word(ALT_GIC_CPUIF_GICC_ABPR_ADDR, binary_point); /* iccabpr */
        return ALT_E_SUCCESS;
    }
    else
    {
        return ALT_E_BAD_ARG;
    }
}

#endif
