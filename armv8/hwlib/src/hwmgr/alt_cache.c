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

#include "alt_cache.h"

#define DEBUG_ALT_CACHE
#ifdef DEBUG_ALT_CACHE
#include <stdio.h>
#include <inttypes.h>
#define dprintf printf
#else
#define dprintf(...)
#endif


#define ALT_CPU_SCTLR_I_SET_MSK  (1 << 12)
#define ALT_CPU_SCTLR_C_SET_MSK  (1 <<  2)
#define ALT_CPU_SCTLR_M_SET_MSK  (1 <<  0)

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
    __asm("MCR p15, 0, %[val], c1, c0, 0" : : [val] "r" (val));
#elif __aarch64__
    __asm("MSR sctlr_el3, %[val]\n" : : [val] "r" ((uintptr_t)val));
    __asm("ISB\n");

#endif
}

/*
 * alt_cache_system_*()
 */

ALT_STATUS_CODE alt_cache_system_enable(void)
{
    return alt_cache_cpu_enable_all();
}

ALT_STATUS_CODE alt_cache_system_disable(void)
{
    return alt_cache_cpu_disable_all();
}

ALT_STATUS_CODE alt_cache_system_data_invalidate(void * va, size_t length)
{
    return alt_cache_cpu_data_invalidate(va, length);
}

ALT_STATUS_CODE alt_cache_system_data_clean(void * va, size_t length)
{
    return alt_cache_cpu_data_clean(va, length);
}

ALT_STATUS_CODE alt_cache_system_data_purge(void * va, size_t length)
{
    return alt_cache_cpu_data_purge(va, length);
}

/*
 * alt_cache_cpu_{enable,disable}_all()
 */

ALT_STATUS_CODE alt_cache_cpu_enable_all(void)
{
    alt_cache_cpu_instruction_enable();
    alt_cache_cpu_data_enable();
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_cache_cpu_disable_all(void)
{
    alt_cache_cpu_data_disable();
    alt_cache_cpu_instruction_disable();
    return ALT_E_SUCCESS;
}

/*
 * alt_cache_cpu_{data,instruction}_*()
 */

ALT_STATUS_CODE alt_cache_cpu_instruction_enable(void)
{
    uint32_t sctlr = sctlr_get_helper();
    if ((sctlr & ALT_CPU_SCTLR_I_SET_MSK) == 0)
    {
        alt_cache_cpu_instruction_invalidate();
        sctlr |= ALT_CPU_SCTLR_I_SET_MSK;
        sctlr_set_helper(sctlr);
    }

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_cache_cpu_instruction_disable(void)
{
    uint32_t sctlr = sctlr_get_helper();

    sctlr &= ~ALT_CPU_SCTLR_I_SET_MSK;
    sctlr_set_helper(sctlr);

    return ALT_E_SUCCESS;
}


bool alt_cache_cpu_instruction_is_enabled(void)
{
    return (sctlr_get_helper() & ALT_CPU_SCTLR_I_SET_MSK) != 0;
}

ALT_STATUS_CODE alt_cache_cpu_instruction_invalidate(void)
{
#if __arm__
    __asm("MCR p15, 0, r0, c7, c1, 0\n");
#elif __aarch64__
    __asm("IC IALLU\n");
#endif

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_cache_cpu_data_enable(void)
{
    uint32_t sctlr = sctlr_get_helper();
    if ((sctlr & ALT_CPU_SCTLR_C_SET_MSK) == 0)
    {
        alt_cache_lx_data_invalidate_all();
        sctlr |= ALT_CPU_SCTLR_C_SET_MSK;
        sctlr_set_helper(sctlr);
    }

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_cache_cpu_data_disable(void)
{
    uint32_t sctlr = sctlr_get_helper();
    if ((sctlr & ALT_CPU_SCTLR_C_SET_MSK) != 0)
    {
        alt_cache_lx_data_clean_all();
        sctlr &= ~ALT_CPU_SCTLR_C_SET_MSK;
        sctlr_set_helper(sctlr);
    }

    return ALT_E_SUCCESS;
}

bool alt_cache_cpu_data_is_enabled(void)
{
    return (sctlr_get_helper() & ALT_CPU_SCTLR_C_SET_MSK) != 0;
}

ALT_STATUS_CODE alt_cache_cpu_data_invalidate(void * va, size_t length)
{
    uintptr_t addr = (uintptr_t)va;

    /*
     * Verify preconditions:
     *  - address and length are on the cache boundaries
     */
    if ((addr & (ALT_CACHE_LINE_SIZE - 1)) != 0)
    {
        return ALT_E_BAD_ARG;
    }
    if ((length & (ALT_CACHE_LINE_SIZE - 1)) != 0)
    {
        return ALT_E_BAD_ARG;
    }

    dprintf("CACHE[cpuD]: invalidate: addr = 0x%" PRIxPTR "x; length = 0x%" PRIxPTR "x.\n", addr, length);

    while (length)
    {
#if __arm__
        __asm("MCR p15, 0, %[addr], c7, c6, 1" : : [addr] "r" (addr));
#elif __aarch64__
        __asm("DC IVAC, %[addr]\n" : : [addr] "r" (addr) );
#endif
        addr   += ALT_CACHE_LINE_SIZE;
        length -= ALT_CACHE_LINE_SIZE;
    }

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_cache_cpu_data_clean(void * va, size_t length)
{
    uintptr_t addr = (uintptr_t)va;

    /*
     * Verify preconditions:
     *  - address and length are on the cache boundaries
     */
    if ((addr & (ALT_CACHE_LINE_SIZE - 1)) != 0)
    {
        return ALT_E_BAD_ARG;
    }
    if ((length & (ALT_CACHE_LINE_SIZE - 1)) != 0)
    {
        return ALT_E_BAD_ARG;
    }

    dprintf("CACHE[cpuD]: clean: addr = 0x%" PRIxPTR "x; length = 0x%" PRIxPTR "x.\n", addr, length);

    while (length)
    {
#if __arm__
        __asm("MCR p15, 0, %[addr], c7, c10, 1" : : [addr] "r" (addr));
#elif __aarch64__
        __asm("DC CVAC, %[addr]\n" : : [addr] "r" (addr));
#endif
        addr   += ALT_CACHE_LINE_SIZE;
        length -= ALT_CACHE_LINE_SIZE;
    }

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_cache_cpu_data_purge(void * va, size_t length)
{
    uintptr_t addr = (uintptr_t)va;

    /*
     * Verify preconditions:
     *  - address and length are on the cache boundaries
     */
    if ((addr & (ALT_CACHE_LINE_SIZE - 1)) != 0)
    {
        return ALT_E_BAD_ARG;
    }
    if ((length & (ALT_CACHE_LINE_SIZE - 1)) != 0)
    {
        return ALT_E_BAD_ARG;
    }

    dprintf("CACHE[cpuD]: purge: addr = 0x%" PRIxPTR "x; length = 0x%" PRIxPTR "x.\n", addr, length);

    while (length)
    {
#if __arm__
        __asm("MCR p15, 0, %[addr], c7, c14, 1" : : [addr] "r" (addr));
#elif __aarch64__
        __asm("DC CIVAC, %[addr]\n" : : [addr] "r" (addr));
#endif
        addr   += ALT_CACHE_LINE_SIZE;
        length -= ALT_CACHE_LINE_SIZE;
    }

    return ALT_E_SUCCESS;
}

/*
 * alt_cache_{level,l1,lx}_*_all()
 */

/*
 * This is the CLIDR_EL1 values for this implementation of Cortex-A53.
 * To clear to the Level of Unification Uniprocessor, clear L1.
 * To clear to the Level of Coherency, clear L1 and L2.
 */
#define CLIDR_LOUU  (1)
#define CLIDR_LOC   (2)

/*
 * CCSIDR_EL1 values:
 *  - L1I : 0x700FE01A => sets = 0x07f; assoc = 0x1; line = 0x2
 *  - L1D : 0x201FE00A => sets = 0x0ff; assoc = 0x3; line = 0x2
 *  - L2  : 0x707FE07A => sets = 0x3ff, assoc = 0xf, line = 0x2
 * Sets  : Number of sets - 1.
 * Assoc : Associativity of cache - 1.
 * Line  : log2(words in cache line) - 2.
 *
 * Source: Cortex-A53 MPCore TRM (ARM DDI 0500G), section 4.5.20.
 * Stratix 10 SoC has 32 KiB L1D, 32 KiB L1I, and 1024 KiB L2.
 */

#define CCSIDR_L1D_S  (8)
#define CSSIDR_L1D_A  (2)
#define CSSIDR_L1D_L  (6)

#define CSSIDR_L2_S   (10)
#define CSSIDR_L2_A   (4)
#define CSSIDR_L2_L   (6)

static ALT_STATUS_CODE alt_cache_level_invalidate_all(int cachelevel)
{
    int level;
    int way;
    int set;

    for (level = 0; level < cachelevel; ++level)
    {
        int L, A, S;

        if (level == 0)
        {
            L = CSSIDR_L1D_L;
            A = CSSIDR_L1D_A;
            S = CCSIDR_L1D_S;
        }
        else /* if (level == 1) */
        {
            L = CSSIDR_L2_L;
            A = CSSIDR_L2_A;
            S = CSSIDR_L2_S;
        }

        for (way = 0; way < (1 << A); ++way)
        {
            for (set = 0; set < (1 << S); ++set)
            {
                uintptr_t way_set_info = 0;

                way_set_info |= level << 1;
                way_set_info |= way << (32 - A);
                way_set_info |= set << L;

#if __arm__
                __asm("MCR p15, 0, %[way_set_info], c7, c6, 2" : : [way_set_info] "r" (way_set_info));
#elif __aarch64__
                __asm("DC ISW, %[way_set_info]\n" : : [way_set_info] "r" (way_set_info));
#endif
            }
        }

        /* Ensure all cache maintenance operations complete on current level. */
        __asm("dsb sy\n");
    }

    return ALT_E_SUCCESS;
}

static ALT_STATUS_CODE alt_cache_level_clean_all(int cachelevel)
{
    int level;
    int way;
    int set;

    for (level = 0; level < cachelevel; ++level)
    {
        int L, A, S;

        if (level == 0)
        {
            L = CSSIDR_L1D_L;
            A = CSSIDR_L1D_A;
            S = CCSIDR_L1D_S;
        }
        else /* if (level == 1) */
        {
            L = CSSIDR_L2_L;
            A = CSSIDR_L2_A;
            S = CSSIDR_L2_S;
        }

        for (way = 0; way < (1 << A); ++way)
        {
            for (set = 0; set < (1 << S); ++set)
            {
                uintptr_t way_set_info = 0;

                way_set_info |= level << 1;
                way_set_info |= way << (32 - A);
                way_set_info |= set << L;

#if __arm__
                __asm("MCR p15, 0, %[way_set_info], c7, c10, 2" : : [way_set_info] "r" (way_set_info));
#elif __aarch64__
                __asm("DC CSW, %[way_set_info]\n" : : [way_set_info] "r" (way_set_info));
#endif
            }
        }

        /* Ensure all cache maintenance operations complete on current level. */
        __asm("dsb sy\n");
    }

    return ALT_E_SUCCESS;
}

static ALT_STATUS_CODE alt_cache_level_purge_all(int cachelevel)
{
    int level;
    int way;
    int set;

    for (level = 0; level < cachelevel; ++level)
    {
        int L, A, S;

        if (level == 0)
        {
            L = CSSIDR_L1D_L;
            A = CSSIDR_L1D_A;
            S = CCSIDR_L1D_S;
        }
        else /* if (level == 1) */
        {
            L = CSSIDR_L2_L;
            A = CSSIDR_L2_A;
            S = CSSIDR_L2_S;
        }

        for (way = 0; way < (1 << A); ++way)
        {
            for (set = 0; set < (1 << S); ++set)
            {
                uintptr_t way_set_info = 0;

                way_set_info |= level << 1;
                way_set_info |= way << (32 - A);
                way_set_info |= set << L;

#if __arm__
                __asm("MCR p15, 0, %[way_set_info], c7, c14, 2" : : [way_set_info] "r" (way_set_info));
#elif __aarch64__
                __asm("DC CISW, %[way_set_info]\n" : : [way_set_info] "r" (way_set_info));
#endif
            }
        }

        /* Ensure all cache maintenance operations complete on current level. */
        __asm("dsb sy\n");
    }

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_cache_l1_data_invalidate_all(void)
{
    return alt_cache_level_invalidate_all(CLIDR_LOUU);
}

ALT_STATUS_CODE alt_cache_l1_data_clean_all(void)
{
    return alt_cache_level_clean_all(CLIDR_LOUU);
}

ALT_STATUS_CODE alt_cache_l1_data_purge_all(void)
{
    return alt_cache_level_purge_all(CLIDR_LOUU);
}

ALT_STATUS_CODE alt_cache_lx_data_invalidate_all(void)
{
    return alt_cache_level_invalidate_all(CLIDR_LOC);
}

ALT_STATUS_CODE alt_cache_lx_data_clean_all(void)
{
    return alt_cache_level_clean_all(CLIDR_LOC);
}

ALT_STATUS_CODE alt_cache_lx_data_purge_all(void)
{
    return alt_cache_level_purge_all(CLIDR_LOC);
}
