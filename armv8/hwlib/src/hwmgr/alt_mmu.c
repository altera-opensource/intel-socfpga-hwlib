/*****************************************************************************
*
* Copyright 2014-2017 Altera Corporation. All Rights Reserved.
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
#include "alt_mmu.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

#define ALT_CPU_SCTLR_I_SET_MSK (1 << 12)
#define ALT_CPU_SCTLR_C_SET_MSK (1 << 2)
#define ALT_CPU_SCTLR_M_SET_MSK (1 << 0)

/* MMU SCTLR */
static uint32_t sctlr_get_helper(void)
{
    volatile uint64_t sctlr;

#if __arm__
    __asm("MRC p15, 0, %[sctlr], c1, c0, 0" : [sctlr] "=r" (sctlr));
#elif __aarch64__
    __asm("MRS %[sctlr], sctlr_el3\n" : [sctlr] "=r" (sctlr));
#endif

    return sctlr;
}

static void sctlr_set_helper(uint32_t sctlr)
{

     volatile uint64_t val = sctlr;
#if __arm__
    __asm("MCR p15, 0, %[val], c1, c0, 0" : : [val] "r" ((uintptr_t)val));
#elif __aarch64__
    __asm("MSR sctlr_el3, %[val]\n" : : [val] "r" ((uintptr_t)val));
    __asm("ISB");
    
#endif
}

/* MMU Enable/Disable */
ALT_STATUS_CODE alt_mmu_enable(void)
{
    uint32_t sctlr;

    alt_mmu_tlb_invalidate();

    sctlr = sctlr_get_helper();
    sctlr |= ALT_CPU_SCTLR_M_SET_MSK;
    sctlr_set_helper(sctlr);

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_mmu_disable(void)
{
    uint32_t sctlr = sctlr_get_helper();
    if (sctlr & ALT_CPU_SCTLR_C_SET_MSK)
    {
       printf("WARN[MMU]: mmu_disable(): Data cache still active.\n");
    }
    sctlr &= ~ALT_CPU_SCTLR_M_SET_MSK;
    sctlr_set_helper(sctlr);

    return ALT_E_SUCCESS;
}

/* TLB Invalidate */
ALT_STATUS_CODE alt_mmu_tlb_invalidate(void)
{
#if __arm__
    __asm("MCR p15, 0, r0, c8, c3, 0\n");
#elif __aarch64__
    __asm("tlbi alle3\n");
    __asm("DSB ISH\n");
    __asm("ISB\n");
#endif
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_mmu_tlb_invalidate_is(void)
{
#if __arm__
    __asm("MCR p15, 0, r0, c8, c7, 0\n");
#elif __aarch64__
    __asm("tlbi alle3is\n");
#endif
    return ALT_E_SUCCESS;
}

/*
* VMSAv8-32 only supports 4KiB granules.
* VMSAv8-64 supports 4KiB, 16KiB and 64KiB granules.
*/
ALT_MMU_GRANULE_INFO_t granule_4KiB =
{
    512,           /* entries per table */
    {              /* block_size */
        0,               /* L0, 512 GiB */
        1ul << 30,       /* L1, 1 GiB */
        1ul << 21,       /* L2, 2 MiB */
        1ul << 12        /* L3, 4 KiB */
    },
    {              /* table_span */
#if __arm__
        0,               /* L0 table does not exist in AArch32 */
#elif __aarch64__
        1ul << 39,       /* L0 table entries span 512 GiB */
#endif
        1ul << 30,       /* L1 table entries span 1 GiB */
        1ul << 21,       /* L2 table entries span 2 MiB */
        1ul << 12        /* L3 table entries span 4 KiB */
    },
     0,
     0
};

#if __aarch64__

ALT_MMU_GRANULE_INFO_t granule_16KiB =
{
    2048,
    {
        0,         /* L0, no blocks */
        0,         /* L1, no blocks */
        1ul << 25, /* L2, 32 MiB */
        1ul << 14  /* L3, 16 KiB */
    },
    {
        1ul << 47, /* L0 table entries span 128 TiB */
        1ul << 36, /* L1 table entries span 64 GiB */
        1ul << 25, /* L2 table entries span 32 MiB */
        1ul << 14  /* L3 table entries span 16 KiB */
    },
     0,
     0
};

ALT_MMU_GRANULE_INFO_t granule_64KiB =
{
    8192,
    {
        0,         /* L0, no blocks */
        0,         /* L1, no blocks */
        1ul << 29, /* L2, 512 MiB */
        1ul << 16  /* L3, 64 KiB */
    },
    {
        0,         /* L0 table entries never exist with 64 KiB granules */
        1ul << 42, /* L1 table entries span 4 TiB */
        1ul << 29, /* L2 table entries span 512 MiB */
        1ul << 16  /* L3 table entries span 64 KiB */
    },
     0,
     0
};

#endif

typedef struct
{
    const ALT_MMU_MEM_REGION_t * data;
    size_t count;
    size_t cursor;
}
ALT_MMU_VA_SPACE_REGION_INFO_t;

typedef struct
{
    char * addr;
    size_t size;
    size_t allocated;
}

ALT_MMU_VA_SPACE_MEMORY_INFO_t;

/* This Function is used to determine the Starting Page Level, Granule Size, and Initial entry for all the
   regions. It also populates translation table parameters based upon desired translation table configuration */
ALT_STATUS_CODE alt_mmu_configure_granule(const ALT_MMU_TCR_INFO_t * ttbconfig)
{
     /* Instantiate Local Pointer to Granule Information */
    ALT_MMU_GRANULE_INFO_t * granule_info;

    unsigned t0sz;
    t0sz = ttbconfig->t0sz;                            /* Get Current T0Sz from Translation Configuration*/

#if __arm__
    /*
     * VMSAv8-32 only supports 4 KiB granule sizes.
     * See: ARMv8-A section G4.2.3.
     */

    granule_info = &granule_4KiB;          /* Get 4KB Granule Space */

    /*
     * NOTE: Initial lookup level documented in:
     *   ARMv8-A section G4.6.7, "Translation table walks, when using the VMSAv8-32 Long-descriptor
     *                            translation table format"
     *   search: "Determining the required initial lookup level for stage 1 translations"
     */

    if (t0sz < 2)
    {
        granule_info->level   = 1;
        granule_info->entries = 1 << ((32 - t0sz) - 30);
    }
    else if (t0sz < 8)
    {
        granule_info->level   = 2;
        granule_info->entries = 1 << ((32 - t0sz) - 21);
    }
    else
    {
        /* Out of range */
        return ALT_E_ERROR;
    }

#elif __aarch64__

    /* Ensure t0Sz is valid range */
    if ((t0sz < 16) || (t0sz >= 40))
    {
        return 0;
    }

    switch (ttbconfig->tg0)
    {
     case ALT_MMU_TCR_TG0_4KiB:

        granule_info = &granule_4KiB;

        /*
         * NOTE: Initial lookup level for 4KiB granules documented in:
         *   ARMv8-A section D4.2.5, table D4-11.
         */
        if (t0sz < 25)
        {
            granule_info->level   = 0;
            granule_info->entries = 1 << ((64 - t0sz) - 39);
        }
        else if (t0sz < 34)
        {
            granule_info->level   = 1;
            granule_info->entries = 1 << ((64 - t0sz) - 30);
        }
        else /* if (t0sz < 40) */
        {
            granule_info->level   = 2;
            granule_info->entries = 1 << ((64 - t0sz) - 21);
        }
        break;

     case ALT_MMU_TCR_TG0_16KiB:

        granule_info = &granule_16KiB;

        /*
         * NOTE: Initial lookup level for 16KiB granules documented in:
         *   ARMv8-A section D4.2.5, table D4-14.
         */
        if (t0sz < 17)
        {
            granule_info->level   = 0;
            granule_info->entries = 1 << ((64 - t0sz) - 47);
        }
        else if (t0sz < 28)
        {
            granule_info->level   = 1;
            granule_info->entries = 1 << ((64 - t0sz) - 36);
        }
        else if (t0sz < 39)
        {
            granule_info->level   = 2;
            granule_info->entries = 1 << ((64 - t0sz) - 25);
        }
        else /* if (t0sz < 40) */
        {
            granule_info->level   = 3;
            granule_info->entries = 1 << ((64 - t0sz) - 14);
        }
        break;

     case ALT_MMU_TCR_TG0_64KiB:
        granule_info = &granule_64KiB;
        /*
         * NOTE: Initial lookup level for 64KiB granules documented in:
         *   ARMv8-A section D4.2.5, table D4-17.
         */
        if (t0sz < 22)
        {
            granule_info->level   = 1;
            granule_info->entries = 1 << ((64 - t0sz) - 42);
        }
        else if (t0sz < 35)
        {
            granule_info->level   = 2;
            granule_info->entries = 1 << ((64 - t0sz) - 29);
        }
        else /* if (t0sz < 40) */
        {
            granule_info->level   = 3;
            granule_info->entries = 1 << ((64 - t0sz) - 16);
        }
        break;

    default:
        break;
    }

#endif

    return 0;
}

size_t alt_mmu_va_space_storage_required(const ALT_MMU_MEM_REGION_t *   regions,                 /* Pointer to Base Memory Region */
                                         size_t                         regions_count,           /* Number of Memory Regions */
                                         const ALT_MMU_GRANULE_INFO_t *    granule_info,            /* Pointer to Granule Information */
                                         const ALT_MMU_TCR_INFO_t *        ttbconfig)
{
    size_t i = 0;      /* Region Count */

    uint64_t current_level = 0;
    uint64_t current_block_size = 0;
    uint64_t tables_required = 0;
    uint64_t table_count = 0;
    uint64_t table_index = 0;

    uint64_t va    = (uint64_t) regions[i].va;
    uint64_t pa    = (uint64_t) regions[i].pa;
    uint64_t size  = (uint64_t) regions[i].size;

    bool region_allocated = FALSE;

    /* Get Starting Level of Tranlation */
    current_level = granule_info->level;

    /* Get Block Size for current level */
    current_block_size = granule_info->table_span[current_level];

    for(i=0; i<regions_count; i++)
    {
        /* Loop Through Regions to allocate Table Descriptors */

        /* Reset Variables for Current Region */
        region_allocated = FALSE;
        current_level = 0;                      /* Reset Current Level */
        tables_required = 0;                    /* Reset Table Required for Current Region */
        table_index = 0;

        /* Get Physical and Virtual Address, and size for the current region */
        va    = (uint64_t) regions[i].va;
        pa    = (uint64_t) regions[i].pa;
        size  = (uint64_t) regions[i].size;

        /* Allocate Table Descriptors until Entire Region has been allocated */
        while(!region_allocated)
        {
            /* Get Block Size of current Level Table */
            current_block_size = granule_info->table_span[current_level];

            if(size < current_block_size)
            {
                /* Region Size is less than current level Block size */

                current_level++;         /* Move to Next Level Table */
                tables_required++;       /* Increment Number of Tables Required */

                /* Check for overflow condition where VA would require two lower level tables instead of one */
                table_index = ((va / granule_info->table_span[current_level]) % granule_info->descriptor_count);

                if( ((size/granule_info->table_span[current_level]) + table_index) > granule_info->descriptor_count )
                {
                    tables_required++;
                }
            }
            else if (size == current_block_size)
            {
                /* Region Size is equal to current block size */
                /*Check to ensure that Block Descriptors is allowed at this level , otherwise generate a new table if necessary*/

            #if __arm__
                /* Short Descriptor Format */
                 /* Long Descritptor Format */
                (void)ttbconfig;

            #elif __aarch64__
                switch(ttbconfig->tg0)
                {
                    case ALT_MMU_TCR_TG0_4KiB:
                        /* 4KB Granule Does not support block entry at Level 0 */
                        if(current_level == 0)
                        {
                            current_level++;
                            tables_required++;
                        }
                        break;

                    case ALT_MMU_TCR_TG0_16KiB:
                        /* 16 KB Granule Does not support block entry at Level 0 -or- Level 1 */

                        if(current_level == 0)
                        {
                            /*Level 0 does not support Block Translation */
                            current_level++;
                            tables_required++;

                        }
                        else if(current_level == 1)
                        {
                            /*Level 1 does not support Block Translation*/
                            current_level++;
                            tables_required++;
                        }
                        break;

                    case ALT_MMU_TCR_TG0_64KiB:
                        /* 64 KB Granule does not support block entires at Level 0 -or- Level 1 */

                        if(current_level ==0 )
                        {
                            current_level++;
                            tables_required++;
                        }
                        else if (current_level == 1)
                        {
                            current_level++;
                            tables_required++;
                        }
                        break;

                    default:
                        break;
                }
            #endif

                /* Mark Region as Allocated */
                region_allocated = TRUE;

            }
            else
            {
                /* Region Size is greater than current level block size */
                size -= current_block_size;
                va += current_block_size;
                pa += current_block_size;
            }

        } /* End of Region Allocation */

        /* Store Tables Required for Current Region */
        table_count+= tables_required;

    } /* End of Region */

    return (size_t) (table_count+1);
}

#if __arm__

static uint64_t alt_mmu_vmsav8_32_long_gen_table_descriptor(uint64_t * ttbsub)
{
    /*
     * NOTE [ARM]: Table format documented at:
     *   ARMv8-A, section G4.5, figure G4-10.
     * NOTE [AArch64]: Table format for all granule sizes documented at:
     *   ARMv8-A, section D4.3.1, figure D4-15.
     */

    return
          ALT_MMU_VMSAV8_32_LONG_TTB_TYPE_SET(ALT_MMU_VMSAV8_32_LONG_TTB_TYPE_E_PAGE)
        | (uint64_t)ttbsub
        | ALT_MMU_VMSAV8_32_LONG_TABLE_XNTABLE_SET(0)
        | ALT_MMU_VMSAV8_32_LONG_TABLE_APTABLE_SET(0)
        | ALT_MMU_VMSAV8_32_LONG_TABLE_NSTABLE_SET(0);
}

static uint64_t alt_mmu_vmsav8_32_long_gen_fault_descriptor(const ALT_MMU_MEM_REGION_t * region)
{
    /*
     * We place the VA into the entry so it is easier to debug later.
     */

    return
         ALT_MMU_VMSAV8_32_LONG_TTB_TYPE_SET(ALT_MMU_VMSAV8_32_LONG_TTB_TYPE_E_FAULT)
        | (uintptr_t)region->va;
}

static uint64_t alt_mmu_vmsav8_32_long_gen_block_descriptor(const ALT_MMU_MEM_REGION_t * region)
{
    return
          ALT_MMU_VMSAV8_32_LONG_TTB_TYPE_SET(ALT_MMU_VMSAV8_32_LONG_TTB_TYPE_E_BLOCK)
        | ALT_MMU_VMSAV8_32_LONG_BLOCK_ATTR_INDEX_SET(region->attrindex)
        | ALT_MMU_VMSAV8_32_LONG_BLOCK_NS_SET(region->security)
        | ALT_MMU_VMSAV8_32_LONG_BLOCK_AP_SET(region->access)
        | ALT_MMU_VMSAV8_32_LONG_BLOCK_SH_SET(region->shareable)
        | ALT_MMU_VMSAV8_32_LONG_BLOCK_AF_SET(1)
        | region->pa
        | ALT_MMU_VMSAV8_32_LONG_BLOCK_XN_SET(region->execute);
}

static uint64_t alt_mmu_vmsav8_32_long_gen_page_descriptor(const ALT_MMU_MEM_REGION_t * region)
{
    return
          ALT_MMU_VMSAV8_32_LONG_TTB_TYPE_SET(ALT_MMU_VMSAV8_32_LONG_TTB_TYPE_E_PAGE)
        | ALT_MMU_VMSAV8_32_LONG_BLOCK_ATTR_INDEX_SET(region->attrindex)
        | ALT_MMU_VMSAV8_32_LONG_BLOCK_NS_SET(region->security)
        | ALT_MMU_VMSAV8_32_LONG_BLOCK_AP_SET(region->access)
        | ALT_MMU_VMSAV8_32_LONG_BLOCK_SH_SET(region->shareable)
        | ALT_MMU_VMSAV8_32_LONG_BLOCK_AF_SET(1)
        | region->pa
        | ALT_MMU_VMSAV8_32_LONG_BLOCK_XN_SET(region->execute);
}

#elif __aarch64__

static uint64_t alt_mmu_vmsav8_64_gen_table_descriptor(uint64_t * ttbsub)
{
    /*
     * NOTE [ARM]: Table format documented at:
     *   ARMv8-A, section G4.5, figure G4-10.
     * NOTE [AArch64]: Table format for all granule sizes documented at:
     *   ARMv8-A, section D4.3.1, figure D4-15.
     */

    return
          ALT_MMU_VMSAV8_64_TTB_TYPE_SET(ALT_MMU_VMSAV8_64_TTB_TYPE_E_TABLE)
        | ALT_MMU_VMSAV8_64_TTB_ADDR_4KB((uint64_t)ttbsub )
        | ALT_MMU_VMSAV8_64_TABLE_XNTABLE_SET(0)
        | ALT_MMU_VMSAV8_64_TABLE_APTABLE_SET(0)
        | ALT_MMU_VMSAV8_64_TABLE_NSTABLE_SET(0);
}

static uint64_t alt_mmu_vmsav8_64_gen_fault_descriptor(const ALT_MMU_MEM_REGION_t * region)
{
    /*
     * We place the VA into the entry so it is easier to debug later.
     */
    return
          ALT_MMU_VMSAV8_64_TTB_TYPE_SET(ALT_MMU_VMSAV8_64_TTB_TYPE_E_FAULT)
        | (uintptr_t)region->va;
}

static uint64_t alt_mmu_vmsav8_64_gen_block_descriptor(const ALT_MMU_MEM_REGION_t * region, const uint64_t pa)
{
    return
          ALT_MMU_VMSAV8_64_TTB_TYPE_SET(ALT_MMU_VMSAV8_64_TTB_TYPE_E_BLOCK)
        | ALT_MMU_VMSAV8_64_BLOCK_ATTR_INDEX_SET(region->attrindex)
        | ALT_MMU_VMSAV8_64_BLOCK_NS_SET(region->security)
        | ALT_MMU_VMSAV8_64_BLOCK_AP_SET(region->access)
        | ALT_MMU_VMSAV8_64_BLOCK_SH_SET(region->shareable)
        | ALT_MMU_VMSAV8_64_BLOCK_AF_SET(1)
        | ALT_MMU_VMSAV8_64_TTB_ADDR_4KB(pa)
        | ALT_MMU_VMSAV8_64_BLOCK_XN_SET(region->execute);
}


static uint64_t alt_mmu_vmsav8_64_gen_page_descriptor(const ALT_MMU_MEM_REGION_t * region, const uint64_t pa)
{
    return
          ALT_MMU_VMSAV8_64_TTB_TYPE_SET(ALT_MMU_VMSAV8_64_TTB_TYPE_E_PAGE)
        | ALT_MMU_VMSAV8_64_BLOCK_ATTR_INDEX_SET(region->attrindex)
        | ALT_MMU_VMSAV8_64_BLOCK_NS_SET(region->security)
        | ALT_MMU_VMSAV8_64_BLOCK_AP_SET(region->access)
        | ALT_MMU_VMSAV8_64_BLOCK_SH_SET(region->shareable)
        | ALT_MMU_VMSAV8_64_BLOCK_AF_SET(1)
        | ALT_MMU_VMSAV8_64_TTB_ADDR_4KB(pa)
        | ALT_MMU_VMSAV8_64_BLOCK_XN_SET(region->execute);
}


#endif

ALT_STATUS_CODE alt_mmu_va_space_create(const ALT_MMU_MEM_REGION_t * 	          regions,            /* Pointer to Base Memory Region */
                                         size_t 						regions_count,           /* Number of Memory Regions */
                                         const ALT_MMU_GRANULE_INFO_t *    granule_info,            /* Pointer to Granule Information */
                                         const ALT_MMU_TCR_INFO_t *        ttbconfig,               /* Pointer to Translation Control Register Config */
                                         alt_mmu_ttb_alloc_t               ttb_alloc,               /* Pointer to Memory Allocation Function */
                                         void *                            memPool)
{

    size_t i = 0;      /* Region Count */
    size_t j = 0;
    uint64_t current_level = 0;
    uint64_t current_block_size = 0;
    uint64_t table_index = 0;
    uint64_t descriptor = 0;

    size_t table_size = 0;

    /* Get Local Pointers to Translation Tables */
    uint64_t* orig_translation_table  = NULL;
    uint64_t* cur_translation_table   = NULL;
    uint64_t* next_translation_table  = NULL;
    uint64_t* entry_pointer = NULL;

    bool region_allocated = FALSE;

    uint64_t va    = (uint64_t) regions[i].va;
    uint64_t pa    = (uint64_t) regions[i].pa;
    uint64_t size  = regions[i].size;

    /* Get Starting Level of VA Tranlation Table required for T0Sz */
    current_level = granule_info->level;

    /* Get Block Size of Current Level */
    current_block_size = granule_info->table_span[current_level];

    /* Determine Table Size based on Granule Info */
    table_size = (granule_info->descriptor_count * sizeof(uint64_t));

    /* Call Memory Allocated to the lowest level table */
    orig_translation_table = ttb_alloc((size_t) table_size, (size_t) table_size, (void *) memPool);

    /* Mark All Entires as Fault Descriptors */
    entry_pointer = orig_translation_table;
    for(j=0; j < granule_info->descriptor_count; j++)
    {
        #if __arm__
            *entry_pointer++ = alt_mmu_vmsav8_32_long_gen_fault_descriptor(&regions[0]);
        #elif __aarch64__
            *entry_pointer++ = alt_mmu_vmsav8_64_gen_fault_descriptor(&regions[0]);
        #endif

    }

    /* Loop Through Regions and generate Tables */
    for(i=0; i<regions_count; i++)
    {

        current_level = 0;                                /*Reset Current Level */
        cur_translation_table = orig_translation_table;   /*Reset Translation Table Pointer to beginning translation table */

        /* Mark Region as Unallocated */
        region_allocated = FALSE;

        /* Get Physical and Virtual Address, and size for the current region */
        va    = (uint64_t) regions[i].va;              /* Get Region Count Starting Virtual Address */
        pa    = (uint64_t) regions[i].pa;              /* Get Region Physical Address Mapping */
        size  = regions[i].size;            /* Get Region Size */

        while(!region_allocated)
        {
            /* Get Block Size of Current Level Table */
            current_block_size = granule_info->table_span[current_level];

            if(size < current_block_size)
            {
                #if __arm__

                    /* Short Descriptor Format */
                    /* Long Descritptor Format */
                    /* pending */
                    descriptor = alt_mmu_vmsav8_32_long_gen_table_descriptor(next_translation_table);

                #elif __aarch64__
                    /* Region size is smaller than current block size */

                    /* Get Starting Descriptor Index within Current Table */
                    table_index = ((va / current_block_size) % granule_info->descriptor_count);

                    /*Move Table Pointer to correct Index for current table */
                    entry_pointer = cur_translation_table;
                    entry_pointer += table_index;

                    /* Check to see if Table Descriptor Already Exists, if so use it */
                    if((*entry_pointer & ALT_MMU_VMSAV8_64_TTB_TYPE_E_TABLE) == ALT_MMU_VMSAV8_64_TTB_TYPE_E_TABLE) {
                        next_translation_table = (uint64_t*) ALT_MMU_VMSAV8_64_TTB_ADDR_4KB(*entry_pointer);
                    }
                    else
                    {
                        /* Current Descriptor is unused-> Allocate a new Table Descriptor */
                        next_translation_table = ttb_alloc((size_t) table_size, (size_t) table_size, (void *) memPool);

                        /* Generate Table Descriptor for the Next Level Table */
                        descriptor = alt_mmu_vmsav8_64_gen_table_descriptor(next_translation_table);
                        *entry_pointer = descriptor;

                        /* Initialize Next Level Tables with Fault Entires */
                        entry_pointer = next_translation_table;
                        for(j=0; j < granule_info->descriptor_count; j++)
                        {
                            *entry_pointer++ = alt_mmu_vmsav8_64_gen_fault_descriptor(&regions[i]);
                        }
                    }

                    /* Move to Next Level */
                    current_level++;

                    /* Get Table Index of Next Level Entry */
                    table_index = ((va / granule_info->table_span[current_level]) % granule_info->descriptor_count);

                    /* Generate A Second Lower Level Table if Virtual Address Spills over into next table */
                    if( ((size/granule_info->table_span[current_level]) + table_index) > granule_info->descriptor_count )
                    {
                        /* Point to Next Index within Current Table */
                        entry_pointer = ++cur_translation_table;

                        /* Check to see if Next Level Table Descriptor Already Exists */
                        if((*entry_pointer & ALT_MMU_VMSAV8_64_TTB_TYPE_E_TABLE) == ALT_MMU_VMSAV8_64_TTB_TYPE_E_TABLE)
                        {
                            next_translation_table = (uint64_t*) ALT_MMU_VMSAV8_64_TTB_ADDR_4KB(*entry_pointer);
                        }
                        else
                        {
                            /* Current Descriptor is not a table entry -> Generate a New Table & Associated Descriptor */
                            next_translation_table = ttb_alloc((size_t) table_size, (size_t) table_size, (void *) memPool);

                            /* Initialize Next Level Tables with Fault Entires */
                            entry_pointer = next_translation_table;
                            for(j=0; j < granule_info->descriptor_count; j++)
                            {
                                *entry_pointer++ = ALT_MMU_VMSAV8_64_TTB_TYPE_SET(ALT_MMU_VMSAV8_64_TTB_TYPE_E_FAULT);
                            }

                            /* Populate Table Entry */
                            descriptor = alt_mmu_vmsav8_64_gen_table_descriptor(next_translation_table);
                            *entry_pointer = descriptor;
                        }
                        /* Reset Translation Table Point to Original */
                        cur_translation_table--;
                        cur_translation_table =  (uint64_t*) ALT_MMU_VMSAV8_64_TTB_ADDR_4KB(*cur_translation_table);
                    }
                    else
                    {
                         /* Update to Next Level Table */
                        cur_translation_table = next_translation_table;
                    }
                #endif

            }

            else if (size == current_block_size)
            {
                /* Region size is the same size as current level table block size */

            #if __arm__

                /* Short Descriptor Format */
                /* Long Descritptor Format */
                (void)ttbconfig;

            #elif __aarch64__

                switch(ttbconfig->tg0)
                {
                    case ALT_MMU_TCR_TG0_4KiB:

                        /* Get the Index with in the Current Table of the Virtual Address */
                        table_index = ((va / current_block_size) % granule_info->descriptor_count);

                        /*Get Pointer to Address to beginning of Current Translation Table */
                        entry_pointer = cur_translation_table;

                        /*Update Pointer to Point to Required Index */
                        entry_pointer += (table_index);

                        /*Does not support block entry at Level 0 */
                        if(current_level == 0)
                        {
                            /*Block Entry is not supported as Current Level -> Generate a Table Descriptor to Next Level */

                            /* Check to see if Next Level Table Descriptor Already Exists */
                            if((*entry_pointer & ALT_MMU_VMSAV8_64_TTB_TYPE_E_TABLE) == ALT_MMU_VMSAV8_64_TTB_TYPE_E_TABLE)
                            {
                                next_translation_table = (uint64_t*) ALT_MMU_VMSAV8_64_TTB_ADDR_4KB(*entry_pointer);
                            }
                            else
                            {
                                /* Current Descriptor is not a table entry -> Generate a New Table & Associated Descriptor */
                                next_translation_table = ttb_alloc((size_t) table_size, (size_t) table_size, (void *) memPool);

                                /* Initialize Next Level Tables with Fault Entires */
                                entry_pointer = next_translation_table;
                                for(j=0; j < granule_info->descriptor_count; j++){
                                    *entry_pointer++ = ALT_MMU_VMSAV8_64_TTB_TYPE_SET(ALT_MMU_VMSAV8_64_TTB_TYPE_E_FAULT);
                                }

                                /* Move to Next Level */
                                current_level++;

                                /* Populate Table Descriptor */
                                descriptor = alt_mmu_vmsav8_64_gen_table_descriptor(next_translation_table);
                            }
                        }
                        else
                        {
                            /*Generate Block or Page Descriptor for the Current Table*/
                            if(current_level < 3)
                            {
                                descriptor = alt_mmu_vmsav8_64_gen_block_descriptor(&regions[i], pa);
                            }
                            else
                            {
                                descriptor = alt_mmu_vmsav8_64_gen_page_descriptor(&regions[i], pa);
                            }

                            /* Adjust the Size for the next iteration */
                            size -= current_block_size;

                            /* Increment Virtual Address for Next iteration */
                            va += current_block_size;
                            pa += current_block_size;
                        }

                        /* Populate Entry */
                        *entry_pointer = descriptor;

                        break;

                    case ALT_MMU_TCR_TG0_16KiB:
                        /*  Does not support block entry at Level 0 and Level 1 */

                        if(current_level == 0){
                            /*Level 0 does not support Block Translation*/
                        }else if(current_level == 1){
                            /*Level 1 does not support Block Translation*/
                        }else{
                            /*Should Not Get Here*/
                        }

                        break;

                    case ALT_MMU_TCR_TG0_64KiB:

                        if(current_level ==0 ){
                            /*Level 0 Look up is not supported*/
                        }else if (current_level == 1){
                            /*First Level Does not support block entires, Add Subtable Descriptor, and Add total Number of Descriptors for next Level*/
                        }else{
                            /*Should not get here*/
                        }
                        break;

                    default:
                        break;

                }
            #endif
                region_allocated = TRUE;

            }
            else
            {
                /*Size is greather than current block size, which means we need to add at leaset one block descriptor, and adjust the size of the region*/

                /*Get the Index within current table that the descriptor needs to fit into*/
                table_index = ((va / current_block_size) % granule_info->descriptor_count);

                /*Generate Block or Page Descriptor for the Current Table*/
                #if __arm__
                    if(current_level < 3)
                    {
                        descriptor = alt_mmu_vmsav8_32_long_gen_block_descriptor(&regions[i]);
                    }else{
                        descriptor = alt_mmu_vmsav8_32_long_gen_page_descriptor(&regions[i]);
                    }
                #elif __aarch64__
                    if(current_level < 3)
                    {
                        descriptor = alt_mmu_vmsav8_64_gen_block_descriptor(&regions[i], pa);
                    }else{
                        descriptor = alt_mmu_vmsav8_64_gen_page_descriptor(&regions[i], pa);
                    }
                #endif
                /*Get Pointer to Address to beginning of Current Translation Table */
                entry_pointer = cur_translation_table;

                /*Update Pointer to Point to Required Index*/
                entry_pointer += (table_index);

                *entry_pointer = descriptor;

                /*Adjust the Size for the next block*/
                size -= current_block_size;

                /*Increment Virtual Address for Next Block Descriptor Address*/
                va += current_block_size;
                pa += current_block_size;

                /*Check for Rollover into next region*/
                if( ( (va / current_block_size) % granule_info->descriptor_count) == 0 )
                {
                    cur_translation_table = next_translation_table;
                }
            }
        } /*Region ALlocated */
    }    /*Regions Loop*/

    return 0;
}

#if __arm__

    #define ALT_CPU_TTBCR_EAE_SET(value)   ((value & 0x1) << 31)
    #define ALT_CPU_TTBCR_SH1_SET(value)   ((value & 0x3) << 28)
    #define ALT_CPU_TTBCR_ORGN1_SET(value) ((value & 0x3) << 26)
    #define ALT_CPU_TTBCR_IRGN1_SET(value) ((value & 0x3) << 24)
    #define ALT_CPU_TTBCR_EPD1_SET(value)  ((value & 0x1) << 23)
    #define ALT_CPU_TTBCR_A1_SET(value)    ((value & 0x1) << 22)
    #define ALT_CPU_TTBCR_T1SZ_SET(value)  ((value & 0x7) << 16)
    #define ALT_CPU_TTBCR_SH0_SET(value)   ((value & 0x3) << 12)
    #define ALT_CPU_TTBCR_ORGN0_SET(value) ((value & 0x3) << 10)
    #define ALT_CPU_TTBCR_IRGN0_SET(value) ((value & 0x3) << 8)
    #define ALT_CPU_TTBCR_EPD0_SET(value)  ((value & 0x1) << 7)
    #define ALT_CPU_TTBCR_T0SZ_SET(value)  ((value & 0x7) << 0)

    #define ALT_CPU_MAIR0_ATTRx_SET(index, value) (((value) & 0xff) << (8 * ((index) - 0)))
    #define ALT_CPU_MAIR1_ATTRx_SET(index, value) (((value) & 0xff) << (8 * ((index) - 4)))

#elif __aarch64__

    #define ALT_CPU_TCR_RES1_SET_MSK ((1 << 31) | (1 << 23))
    #define ALT_CPU_TCR_TBI_SET(value)    ((value & 0x1)  << 20)
    #define ALT_CPU_TCR_PS_SET(value)     ((value & 0x7)  << 16)
    #define ALT_CPU_TCR_TG0_SET(value)    ((value & 0x3)  << 14)
    #define ALT_CPU_TCR_SH0_SET(value)    ((value & 0x3)  << 12)
    #define ALT_CPU_TCR_ORGN0_SET(value)  ((value & 0x3)  << 10)
    #define ALT_CPU_TCR_IRGN0_SET(value)  ((value & 0x3)  << 8)
    #define ALT_CPU_TCR_T0SZ_SET(value)   ((value & 0x3f) << 0)

    #define ALT_CPU_MAIR_ATTRx_SET(index, value) (((uint64_t)(value) & 0xff) << (8 * (index)))

#endif

ALT_STATUS_CODE alt_mmu_va_space_enable(const uint64_t * ttb1,
                                        const ALT_MMU_TCR_INFO_t *ttbconfig,
                                        const ALT_MMU_MAIR_t * mair_info)
{

#if __arm__

    uint32_t ttbcr_value;
    uint32_t mair0_value, mair1_value;
    uint32_t ttbr0_hi_value, ttbr0_lo_value;
    /*
     * Parameter validation
     */
    if (ttbconfig->eae == false)
    {
        return ALT_E_ERROR;
    }

    if (ttbconfig->t0sz > 7)
    {
        /* Out of range */
        printf("ERROR: %s:%d: Invalid t0sz %d.\n", __FILE__, __LINE__, ttbconfig->t0sz);
        return ALT_E_ERROR;
    }

    /*
     * Update TTBCR, MAIR0, MAIR1, TTBR0
     */

    /*
     * For SH0 and SH1, use inner shareable, the most performant option.
     * For ORGN0, IRGN0, ORGN1, and IRGN1 use 1, Write-Back Read-Allocate Write-Allocate cacheable.
     */
    ttbcr_value = ALT_CPU_TTBCR_EAE_SET(1) |
                  ALT_CPU_TTBCR_SH1_SET(ALT_MMU_TTB_SH_INNER_SHAREABLE) |
                  ALT_CPU_TTBCR_ORGN1_SET(1) |
                  ALT_CPU_TTBCR_IRGN1_SET(1) |
                  ALT_CPU_TTBCR_EPD1_SET(0) |
                  ALT_CPU_TTBCR_A1_SET(0) |
                  ALT_CPU_TTBCR_T1SZ_SET(0) |
                  ALT_CPU_TTBCR_SH0_SET(ALT_MMU_TTB_SH_INNER_SHAREABLE) |
                  ALT_CPU_TTBCR_ORGN0_SET(1) |
                  ALT_CPU_TTBCR_IRGN0_SET(1) |
                  ALT_CPU_TTBCR_EPD0_SET(0) |
                  ALT_CPU_TTBCR_T0SZ_SET(ttbconfig->t0sz);

    __asm("MCR p15, 0, %[ttbcr_value], c2, c0, 2\n" : : [ttbcr_value] "r" (ttbcr_value)); /* Write Rt to TTBCR */

    mair0_value = ALT_CPU_MAIR0_ATTRx_SET(0, mair_info->mair[0]) |
                  ALT_CPU_MAIR0_ATTRx_SET(1, mair_info->mair[1]) |
                  ALT_CPU_MAIR0_ATTRx_SET(2, mair_info->mair[2]) |
                  ALT_CPU_MAIR0_ATTRx_SET(3, mair_info->mair[3]);

    __asm("MCR p15, 0, %[mair0_value], c10, c2, 0\n" : : [mair0_value] "r" (mair0_value)); /* Write Rt to MAIR0 */

    mair1_value = ALT_CPU_MAIR1_ATTRx_SET(4, mair_info->mair[4]) |
                  ALT_CPU_MAIR1_ATTRx_SET(5, mair_info->mair[5]) |
                  ALT_CPU_MAIR1_ATTRx_SET(6, mair_info->mair[6]) |
                  ALT_CPU_MAIR1_ATTRx_SET(7, mair_info->mair[7]);

    __asm("MCR p15, 0, %[mair1_value], c10, c2, 1\n" : : [mair1_value] "r" (mair1_value)); /* Write Rt to MAIR1 */

    ttbr0_hi_value = 0;
    ttbr0_lo_value = (uintptr_t)ttb1;

    __asm("MCRR p15, 0, %[ttbr0_lo_value], %[ttbr0_hi_value], c2\n"
          : : [ttbr0_lo_value] "r" (ttbr0_lo_value), [ttbr0_hi_value] "r" (ttbr0_hi_value)); /* Write Rt to TTBR0[31:0] and Rt2 to TTBR0[63:32]*/

#elif __aarch64__

    uint32_t tcr_value;				/* Instantiate TCR Value */
    uint64_t mair_value;			     /* Instantiate MAIR Value */
    
    /*
     * Parameter validation
     */

    if (ttbconfig->tbi == true)
    {
        /* Return True is Top Byte is used in Address Calculation */
        return ALT_E_ERROR;
    }

    if ((ttbconfig->t0sz < 16) || (ttbconfig->t0sz >= 40))
    {
        /* Out of range */
        printf("ERROR: %s:%d: Invalid t0sz %d.\n", __FILE__, __LINE__, ttbconfig->t0sz);
        return ALT_E_ERROR;
    }

    /*
     * Update TCR, MAIR, TTRB0
     */

    /*
     * For SH0, use inner shareable, the most performant option.
     * For ORGN0 and IRGN0, use 1, Write-Back Read-Allocate Write-Allocate cacheable.
     */
    tcr_value = ALT_CPU_TCR_RES1_SET_MSK |
                ALT_CPU_TCR_TBI_SET(ttbconfig->tbi) |
                ALT_CPU_TCR_PS_SET(ttbconfig->ps) |
                ALT_CPU_TCR_TG0_SET(ttbconfig->tg0) |
                ALT_CPU_TCR_SH0_SET(ALT_MMU_TTB_SH_INNER_SHAREABLE) |
                ALT_CPU_TCR_ORGN0_SET(1) |
                ALT_CPU_TCR_IRGN0_SET(1) |
                ALT_CPU_TCR_T0SZ_SET(ttbconfig->t0sz);

    __asm("msr tcr_el3, %[tcr_value]\n" : : [tcr_value] "r" ((uintptr_t)tcr_value));

    mair_value = ALT_CPU_MAIR_ATTRx_SET(0, mair_info->mair[0]) |
                 ALT_CPU_MAIR_ATTRx_SET(1, mair_info->mair[1]) |
                 ALT_CPU_MAIR_ATTRx_SET(2, mair_info->mair[2]) |
                 ALT_CPU_MAIR_ATTRx_SET(3, mair_info->mair[3]) |
                 ALT_CPU_MAIR_ATTRx_SET(4, mair_info->mair[4]) |
                 ALT_CPU_MAIR_ATTRx_SET(5, mair_info->mair[5]) |
                 ALT_CPU_MAIR_ATTRx_SET(6, mair_info->mair[6]) |
                 ALT_CPU_MAIR_ATTRx_SET(7, mair_info->mair[7]);

    __asm("msr mair_el3, %[mair_value]\n" : : [mair_value] "r" (mair_value));

    __asm("msr ttbr0_el3, %[ttbr0_value]\n" : : [ttbr0_value] "r" (*ttb1));

#endif

    /*
     * Enable MMU (implicitly invalidates TLBs)
     */

    return alt_mmu_enable();
}

/***/

#define ALT_CPU_PAR_F_SET_MSK           (0x1ul)
#define ALT_CPU_PAR_ATTR_GET(value)     (((value) >> 56) & 0xff)
#define ALT_CPU_PAR_PA_GET(value)       (((value) >> 0) & 0x0000fffffffff000)
#define ALT_CPU_PAR_FST_GET(value)      (((value) >> 1) & 0x3f)

uint64_t alt_mmu_va_to_pa(const void * va, ALT_MMU_ATTR_t * attr, uint32_t * dfsc)
{
    uint64_t pa = 0;

#if __arm__

    uint32_t pa_lo, pa_hi;

    /*
     * ARM: Use ATS1CPR [Address Translate Stage 1 Current state PL1 Read]; See ARMv7-A,R, section B4.2.4.
     * Read the PAR (64-bit)
     */
    __asm("mcr p15, 0, %[va], c7, c8, 0\n"
          "isb\n"
          "MRRC p15,0, %[pa_lo], %[pa_hi], c7\n"
          : [pa_lo] "=r" (pa_lo), [pa_hi] "=r" (pa_hi)
          : [va] "r"  (va)); /* Read PAR[31:0] into Rt and PAR[63:32] into Rt2 */

    pa = ((uint64_t)pa_hi << 32) | pa_lo;

#elif __aarch64__

    /*
     * AArch64: Use the AT S1E3R, (Address Translate Stage 1 EL3 Read)
     * Query the results from PAR_EL1 (Physical Address Register)
     */

    __asm("AT S1E3R, %[va]\n"
          "ISB\n"
          "MRS %[pa], PAR_EL1\n"
          : [pa] "=r" (pa)
          : [va] "r"  (va));

#endif

    if (pa & ALT_CPU_PAR_F_SET_MSK)
    {
        /*
         * Fault detected.
         *
         *
         * bit [9] "S": (0 => fault in stage 1 translation; 1 => fault in stage 2 translation)
         * bit [8] "PTW": (1 => stage 2 fault during a stage 1 translation table walk)
         * bits [6:1] "FST": Fault Status Code see Data Abort ESR encoding.
         */

        /* Break out FST and place it in [5:0] of esr. */
        *dfsc = ALT_CPU_PAR_FST_GET(pa);

        return 0;
    }
    else
    {
        *dfsc = 0;

        *attr = ALT_CPU_PAR_ATTR_GET(pa);

        /* Combine PAR.PA with the lower 12 bits of the provided VA to create the complete translation. */
        pa = ALT_CPU_PAR_PA_GET(pa) | ((uintptr_t)va & 0xffful);

        return pa;
    }
}

