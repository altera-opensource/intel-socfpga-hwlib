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


#ifndef __ALT_MMU_H__
#define __ALT_MMU_H__

#include "hwlib.h"

#ifdef __cplusplus
extern "C"
{
#endif  /* __cplusplus */

/*!
 * \addtogroup ALT_MMU MMU Management API
 *
 * This module defines an API for configuring and managing the Cortex-A53 MMU.
 *
 * For a complete understanding of the possible configurations and operation of
 * the MMU, consult the following references:
 *  * <em>ARM Architecture Reference Manual ARMv8-A (ARM DDI 0487A), Chapter D4
 *    AArch64 Virtual Memory System Architecture</em>
 *  * <em>ARM Cortex-A53 MPCore Processor Technical Reference Manual
 *    (ARM DDI 0500G), Chapter 5 Memory Management Unit</em>
 *
 * @{
 */

/*!
 * This type enumerates the options for Shareability (SH) properties in translation
 * table descriptors. This control determines whether the addressed region is
 * Shareable memory (and if so, which type) or not. Device memory is always outer
 * shareable.
 */
typedef enum ALT_MMU_TTB_SH_e
{
    ALT_MMU_TTB_SH_NON_SHAREABLE   = 0, /*!< Non-Shareable address map   */
    ALT_MMU_TTB_SH_OUTER_SHAREABLE = 2, /*!< Outer Shareable address map */
    ALT_MMU_TTB_SH_INNER_SHAREABLE = 3  /*!< Inner Shareable address map */

} ALT_MMU_TTB_SH_t;

/*!
 * This type enumerates the options for Non-Secure (NS) controls in translation
 * table descriptors. This control specifies whether memory accesses made from the
 * secure state translate physical address in the secure or non-secure address
 * map. The value of the NS bit in the first level page table descriptor applies
 * to all entries in the corresponding second-level translation table.
 */
typedef enum ALT_MMU_TTB_NS_e
{
    ALT_MMU_TTB_NS_SECURE     = 0,      /*!< Secure address map     */
    ALT_MMU_TTB_NS_NON_SECURE = 1       /*!< Non-Secure address map */

} ALT_MMU_TTB_NS_t;

/*!
 * This type enumerates the options for Execute Never (XN) controls in translation
 * table descriptors that determine whether the processor can execute instructions
 * from the addressed region.
 */
typedef enum ALT_MMU_TTB_XN_e
{
    ALT_MMU_TTB_XN_DISABLE    = 0,      /*!< Instructions can be executed from
                                         *   this memory region.
                                         */
    ALT_MMU_TTB_XN_ENABLE     = 1       /*!< Instructions cannot be executed from
                                         *   this memory region. A permission
                                         *   fault is generated if an attempt to
                                         *   execute an instruction from this
                                         *   memory region. However, if using the
                                         *   short-descriptor translation table
                                         *   format, the fault is generated only
                                         *   if the access is to memory in the
                                         *   client domain.
                                         */
} ALT_MMU_TTB_XN_t;

/*!
 * This type enumerates the Access Permissions that can be specified for a memory
 * region.
 *
 * Memory access control is defined using access permission bits in translation
 * table descriptors that control access to the corresponding memory region.
 *
 * The HWLIB uses the long-descriptor translation table format for defining
 * the access permissions where two bits, AP[2:1], define the access
 * permissions. AP[0] defines the access flag, which is not used.
 *
 * The following table provides a summary of the enumerations, AP bit encodings,
 * and access permission descriptions for this type.
 *
 *  Enumeration         | AP Value | Privileged Access    | Other Access
 * :--------------------|:---------|:---------------------|:--------------------
 *  ALT_MMU_AP_RW_NONE  | 00x      | Read / Write Access  | No Access
 *  ALT_MMU_AP_RW_RW    | 01x      | Read / Write Access  | Read / Write Access
 *  ALT_MMU_AP_RO_NONE  | 10x      | Read-Only Access     | No Access
 *  ALT_MMU_AP_RO_RO    | 11x      | Read-Only Access     | Read-Only Access
 *
 * \internal
 * In AArch32 mode, SCTLR.AFE behaves as if set to 1 if in long mode (TTBCR.EAE = 1).
 * See ARMv8-A, section G6.2.117.
 * \endinternal
 */
typedef enum ALT_MMU_AP_e
{
    ALT_MMU_AP_RW_NONE = 0, /*!< Access with Privileged RW, other no access. */
    ALT_MMU_AP_RW_RW   = 1, /*!< Access with Privileged RW, other RW. */
    ALT_MMU_AP_RO_NONE = 2, /*!< Access with Privileged RO, other no access. */
    ALT_MMU_AP_RO_RO   = 3  /*!< Access with Privileged RO, other RO. */

} ALT_MMU_AP_t;

/*!
 * This definition matches the MAIR (Memory Attribute Indirection Register).
 *
 * When the top nibble of MAIR is 0000, the memory being described is Device
 * Memory. Otherwise it is Normal Memory.
 *
 * The following table provides the device memory attributes for the lower
 * nibble. n is for the not prefix, G is for Gathering, R for Recombining, and
 * E for Early write acknolwedgement. Please consult the ARMv8-A
 * (ARM DDI 0487A) for more details of these parameters. Combinations not
 * described have unpredictable behavior.
 *
 *  MAIR[3:0]  | Device Memory
 * :-----------|:--------------
 *  0000       | Device nGnRnE
 *  0100       | Device nGnRE
 *  1000       | Device nGRE
 *  1100       | Device GRE
 *
 * When the top nibble of MAIR is not 0000, the memory being described is
 * Normal Memory.
 *
 * The following table provides the normal memory attributes for the upper
 * nibble. When the bit definition mentions RW, the R and W bits applies to
 * the outer Read and Write allocation policy respectively where 0 is no
 * allocate and 1 is allocate. To complete the definition of MAIR, another
 * table is provided for bottom nibble.
 *
 *  MAIR[7:4]        | Normal Memory Outer Attribute
 * :-----------------|:----------------------------------
 *  00RW, RW not 00  | Outer Write-Through transient
 *  0100             | Outer Non-Cacheable
 *  01RW, RW not 00  | OUter Write-Back transient
 *  10RW             | Outer Write-Through non-transient
 *  11RW             | Outer Write-Back non-transient
 *
 * The following table provides the normal memory attributes for the lower
 * nibble. When the bit definition mentions RW, the R and W bits applies to
 * the inner Read and Write allocation policy respectively where 0 is no
 * allocate and 1 is allocate.
 *
 *  MAIR[3:0]        | Normal Memory Inner Attribute
 * :-----------------|:------------------------------------------
 *  00RW, RW not 00  | Inner Write-Through transient
 *  0100             | Inner Non-Cacheable
 *  01RW, RW not 00  | Inner Write-Back transient
 *  1000             | Inner Write-Through non-transient (RW=00)
 *  10RW, RW not 00  | Inner Write-Through non-transient
 *  1100             | Inner Write-Back non-transient (RW=00)
 *  11RW, RW not 00  | Inner Write-Back non-transient
 *
 * \internal
 * This is documented in ARMv8-A (ARM DDI 0487A.k):
 *  - for AArch64: section D7.2.65
 * It should be the same for AArch32 modes if TTBCR.EAE = 1, which will be a requirment in this API.
 * \endinternal
 */
typedef uint8_t ALT_MMU_ATTR_t;

/*!
 * This structure provides the MAIR values used for progrmaming the MMU.
 * ALT_MMU_MEM_REGION_t::attrindex is an index into this array to provide the
 * memory attributes.
 *
 * \internal
 * This is documented in ARMv8-A (ARM DDI 0487A.k):
 *  - for AArch64: section D7.2.65
 *  - for AArch32: section G6.2.100, G6.2.101
 * \endinternal
 */
typedef struct ALT_MMU_MAIR_s
{
    ALT_MMU_ATTR_t mair[8];  /*!< The MAIR definition array. */

} ALT_MMU_MAIR_t;

#if __arm__

/*!
 * This type defines a structure for specifying the TTBCR (Translation Table
 * Base  Control Register) parameters for creating the virtual memory setup in
 * AArch32 mode. Physical Address Size is always 1 TiB (40-bits) and uses the
 * 4-KiB granule.
 */
typedef struct ALT_MMU_TTBCR_s
{
    bool     eae;  /*!< Extended Address Enable. Always set to true. */
    unsigned t0sz; /*!< Virtual Memory Size as defined by the formula 2^(32-x).
                    *   Valid values are 0 - 7.  Set to 0 for 32-bits virtual
                    *   address space.
                    */
} ALT_MMU_TTBCR_t;

#elif __aarch64__

/*!
 * This type enumerates the options for the TCR (Translation Control Register)
 * PS (Physical Address Size).
 */
typedef enum ALT_MMU_TCR_PS_e
{
    ALT_MMU_TCR_PS_4GiB   = 0, /*!< Physical Address Size of 4 GiB (32-bits). */
    ALT_MMU_TCR_PS_64GiB  = 1, /*!< Physical Address Size of 64 GiB (36-bits). */
    ALT_MMU_TCR_PS_1TiB   = 2, /*!< Physical Address Size of 1 TiB (40-bits). */
    ALT_MMU_TCR_PS_4TiB   = 3, /*!< Physical Address Size of 4 TiB (42-bits). */
    ALT_MMU_TCR_PS_16TiB  = 4, /*!< Physical Address Size of 16 TiB (44-bits). */
    ALT_MMU_TCR_PS_256TiB = 5  /*!< Physical Address Size of 256 TiB (48-bits). */

} ALT_MMU_TCR_PS_t;

/*!
 * This type enumerates the options for the TCR (Translation Control Register)
 * tg0 (Translation Granule size of TTBR0).
 */
typedef enum ALT_MMU_TCR_TG0_e
{
    ALT_MMU_TCR_TG0_4KiB  = 0, /*!< Granule size of 4 KiB. */
    ALT_MMU_TCR_TG0_16KiB = 2, /*!< Granule size of 16 KiB. */
    ALT_MMU_TCR_TG0_64KiB = 1  /*!< Granule size of 64 KiB. */

} ALT_MMU_TCR_TG0_t;

/*!
 * This type defines a structure for specifying the TCR (Translation Control
 * Register) parameters for creating the virtual memory setup in AArch64 mode.
 */
typedef struct ALT_MMU_TCR_s
{
    bool              tbi;  /*!< Top Byte Ignore. Always set to false. */
    ALT_MMU_TCR_PS_t  ps;   /*!< Physical Address Size. */
    ALT_MMU_TCR_TG0_t tg0;  /*!< Granule Size. */
    unsigned          t0sz; /*!< Virtual Memory Size as defined by the formula
                             *   2^(64-x). Valid values are 16 - 39. Common
                             *   values are 32 for 32-bits and 24 for 40-bits.
                             */
} ALT_MMU_TCR_t;

#endif

#define FALSE       0
#define TRUE        1

#if __arm__
    /* Short Descriptor Format */
    /* Long Descriptor Format */
     #define ALT_MMU_VMSAV8_32_LONG_TTB_TYPE_E_FAULT                  (0x0)  /* Fault Entry */
     #define ALT_MMU_VMSAV8_32_LONG_TTB_TYPE_E_BLOCK                  (0x1)  /* Block Entry */
     #define ALT_MMU_VMSAV8_32_LONG_TTB_TYPE_E_TABLE                  (0x3)  /* Table Entry */
     #define ALT_MMU_VMSAV8_32_LONG_TTB_TYPE_E_PAGE                   (0x3)  /* Page Entry */
     #define ALT_MMU_VMSAV8_32_LONG_TTB_TYPE_SET(value)               (((uint64_t)(value) & 0x3) << 0)

     /* Upper Attributes for Table Descriptors */
     #define ALT_MMU_VMSAV8_32_LONG_TABLE_PXNTABLE_SET(value)         (((uint64_t)(value) & 0x1) << 59)
     #define ALT_MMU_VMSAV8_32_LONG_TABLE_XNTABLE_SET(value)          (((uint64_t)(value) & 0x1) << 60)
     #define ALT_MMU_VMSAV8_32_LONG_TABLE_APTABLE_SET(value)          (((uint64_t)(value) & 0x3) << 61)
     #define ALT_MMU_VMSAV8_32_LONG_TABLE_NSTABLE_SET(value)          (((uint64_t)(value) & 0x1) << 63)

     /* Upper Attributes for Block and Page Descriptors */
     #define ALT_MMU_VMSAV8_32_LONG_BLOCK_XN_SET(value)               (((uint64_t)(value) & 0x1) << 54)
     #define ALT_MMU_VMSAV8_32_LONG_BLOCK_PXN_SET(value)              (((uint64_t)(value) & 0x1) << 53)
     #define ALT_MMU_VMSAV8_32_LONG_BLOCK_CONT_SET(value)             (((uint64_t)(value) & 0x1) << 52)

     /* Lower Attributes for Block and Page Descriptors */
     #define ALT_MMU_VMSAV8_32_LONG_BLOCK_NG_SET(value)               (((uint64_t)(value) & 0x3) << 9)
     #define ALT_MMU_VMSAV8_32_LONG_BLOCK_AF_SET(value)               (((uint64_t)(value) & 0x3) << 9)
     #define ALT_MMU_VMSAV8_32_LONG_BLOCK_SH_SET(value)               (((uint64_t)(value) & 0x3) << 9)
     #define ALT_MMU_VMSAV8_32_LONG_BLOCK_AP_SET(value)               (((uint64_t)(value) & 0x6) << 5)  /* AP is a bit different. The block only has AP[2:1]. */
     #define ALT_MMU_VMSAV8_32_LONG_BLOCK_NS_SET(value)               (((uint64_t)(value) & 0x1) << 5)
     #define ALT_MMU_VMSAV8_32_LONG_BLOCK_ATTR_INDEX_SET(value)       (((uint64_t)(value) & 0x7) << 2)

#elif __aarch64__

     #define ALT_MMU_VMSAV8_64_TTB_TYPE_E_FAULT                  (0x0)  /* Fault Entry */
     #define ALT_MMU_VMSAV8_64_TTB_TYPE_E_BLOCK                  (0x1)  /* Block Entry */
     #define ALT_MMU_VMSAV8_64_TTB_TYPE_E_TABLE                  (0x3)  /* Table Entry */
     #define ALT_MMU_VMSAV8_64_TTB_TYPE_E_PAGE                   (0x3)  /* Page Entry */
     #define ALT_MMU_VMSAV8_64_TTB_TYPE_SET(value)               (((uint64_t)(value) & 0x3) << 0)

     /* Upper Attributes for Table Descriptors */
     #define ALT_MMU_VMSAV8_64_TABLE_PXNTABLE_SET(value)         (((uint64_t)(value) & 0x1) << 59)
     #define ALT_MMU_VMSAV8_64_TABLE_XNTABLE_SET(value)          (((uint64_t)(value) & 0x1) << 60)
     #define ALT_MMU_VMSAV8_64_TABLE_APTABLE_SET(value)          (((uint64_t)(value) & 0x3) << 61)
     #define ALT_MMU_VMSAV8_64_TABLE_NSTABLE_SET(value)          (((uint64_t)(value) & 0x1) << 63)

     /* Upper Attributes for Block and Page Descriptors */
     #define ALT_MMU_VMSAV8_64_BLOCK_XN_SET(value)               (((uint64_t)(value) & 0x1) << 54)
     #define ALT_MMU_VMSAV8_64_BLOCK_PXN_SET(value)              (((uint64_t)(value) & 0x1) << 53)
     #define ALT_MMU_VMSAV8_64_BLOCK_CONT_SET(value)             (((uint64_t)(value) & 0x1) << 52)

     /* Lower Attributes for Block and Page Descriptors */
     #define ALT_MMU_VMSAV8_64_BLOCK_NG_SET(value)               (((uint64_t)(value) & 0x1) << 11)
     #define ALT_MMU_VMSAV8_64_BLOCK_AF_SET(value)               (((uint64_t)(value) & 0x1) << 10)
     #define ALT_MMU_VMSAV8_64_BLOCK_SH_SET(value)               (((uint64_t)(value) & 0x3) << 8)
     #define ALT_MMU_VMSAV8_64_BLOCK_AP_SET(value)               (((uint64_t)(value) & 0x3) << 6)  /* AP is a bit different. The block only has AP[2:1]. */
     #define ALT_MMU_VMSAV8_64_BLOCK_NS_SET(value)               (((uint64_t)(value) & 0x1) << 5)
     #define ALT_MMU_VMSAV8_64_BLOCK_ATTR_INDEX_SET(value)       (((uint64_t)(value) & 0x7) << 2)

     #define GEN_MAIR_INDEX(index, value) (((value) & 0xff) << (8 * index))

     /* Strongly ordered memory:
       - no Gather, no Reorder, no Early write acknowledgements. */
     #define MAIR_ATTR_DEVICE_nGnRnE (0x00)

     /* Device memory:
       - no Gather, no Reorder, Early write acknowledgements. This is suitable for performant device memory. */
     #define MAIR_ATTR_DEVICE_nGnRE  (0x04)

     /* Cacheable memory, most performant options:
       - Inner and Outer are: Write Back Allocate for Reads and Writes. */
     #define OUTER_WB       (1 << 6) /* Write back */
     #define OUTER_NONTRANS (1 << 7) /* non-transient (hint to the cache, ignored on Cortex-A53) */
     #define OUTER_WALLOC   (1 << 4) /* Write allocate */
     #define OUTER_RALLOC   (1 << 5) /* Read allocate */
     #define INNER_WB       (1 << 2)
     #define INNER_NONTRANS (1 << 3)
     #define INNER_WALLOC   (1 << 0)
     #define INNER_RALLOC   (1 << 1)

     #define MAIR_ATTR_MEMORY_IO_WBRWA (OUTER_WB | OUTER_NONTRANS | OUTER_WALLOC | OUTER_RALLOC | INNER_WB | INNER_NONTRANS | INNER_WALLOC | INNER_RALLOC)

     /* Default MAIR attribute */
     #define MAIR_ATTR_DEFAULT  MAIR_ATTR_DEVICE_nGnRnE

     #define ALT_MMU_VMSAV8_64_TTB_ADDR_4KB(value)     ( ((uint64_t)(value) & 0x00007FFFFFFFFF000) )
     #define ALT_MMU_VMSAV8_64_TTB_ADDR_16KB(value)    ( ((uint64_t)(value) & 0x00007FFFFFFFFC000) )
     #define ALT_MMU_VMSAV8_64_TTB_ADDR_64KB(value)    ( ((uint64_t)(value) & 0x00007FFFFFFFF0000) )
#endif

/*!
 * Invalidate the entire unified TLB.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 */
ALT_STATUS_CODE alt_mmu_tlb_invalidate(void);

/*!
 * Invalidate the entire unified TLB in the inner shareable domain.
 *
 * This function applies the unified TLB invalidation operation across all
 * processors in the same inner shareable domain.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 */
ALT_STATUS_CODE alt_mmu_tlb_invalidate_is(void);

/*!
 * Enable operation of the MMU.
 *
 * This function only enables the MMU. It does not perform any of the necessary
 * prerequisite configuration of the MMU.
 *
 * Before this function is called, the MMU configuration should have been
 * established. This means:
 * * The MMU translation table(s) configured.
 * * The translation control register (TCR) configured.
 * * The Memory Attribute Indirection Register (MAIR) configured.
 * * The values of the TTRB0 (and TTBR1 if applicable) set to the translation
 *   table base addresses.
 * * The TLBs, caches, and branch predication buffers invalidated.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 */
ALT_STATUS_CODE alt_mmu_enable(void);

/*!
 * Disable operation of the MMU.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 */
ALT_STATUS_CODE alt_mmu_disable(void);

/*!
 * This type defines a structure for specifying the properties of a virtual
 * address range called a memory region. The structure defines fields to specify
 * the virtual to physical address mapping, the access permissions, the
 * shareability, the ordering, and the cacheability properties of a particular
 * memory region that comprises a virtual address space.
 */
typedef struct ALT_MMU_MEM_REGION_s
{
    void *                 va;        /*!< The beginning virtual address for the memory
                                       *   region. The address must be aligned to the granule
                                       *   size used for the translation.
                                       */
    uint64_t               pa;       /*!< The beginning physical address mapping for the
                                       *   virtual address of the memory region. The address
                                       *   must be aligned to the granule size used for the
                                       *   translation if the region is not a fault. If region
                                       *   is a fault, this parameter is ignored.
                                       */
    size_t                 size;      /*!< The size of the memory region in bytes. The size
                                       *   must be a multiple of tne granule size used for the
                                       *   translation.
                                       */
    bool                   fault;     /*!< If the region is a fault region. */
    ALT_MMU_AP_t           access;    /*!< The access permissions for the memory region. */
    unsigned               attrindex; /*!< The memory region attributes. These attributes
                                       *   determine the memory type (ordering), cache
                                       *   policy, and as a possible side effect, the
                                       *   shareablity of the memory region.
                                       */
    ALT_MMU_TTB_SH_t       shareable; /*!< The shareability of the memory region. */
    ALT_MMU_TTB_XN_t       execute;   /*!< Whether instructions can be executed from this
                                       *   memory region.
                                       */
    ALT_MMU_TTB_NS_t       security;  /*!< Controls whether address translations made from
                                       *   the secure state translate physical address in
                                       *   the secure or non-secure address map.
                                       */
} ALT_MMU_MEM_REGION_t;

/* Holds Information about the Translation Table Format that are dependent on
   Desired Page Size, and the desired span of the Input Address (Virtual Address)
   that is configured for Address Translation */
typedef struct
{
    unsigned  descriptor_count;              /* Number of Translation Table Descriptors in Table */
    uintptr_t block_size[4];                 /* Block size per Level. */
    uintptr_t table_span[4];                 /* Table entry spans per Level. */
    unsigned  level;                         /* Starting Level of a Translation Table Walk (based on T0sZ) */
    unsigned  entries;                       /* Number of Translation Table Entries Required to Span entire Virtual Address Range (based on T0sZ*/
} ALT_MMU_GRANULE_INFO_t;

extern ALT_MMU_GRANULE_INFO_t granule_4KiB;
extern ALT_MMU_GRANULE_INFO_t granule_16KiB;
extern ALT_MMU_GRANULE_INFO_t granule_64KiB;

/*!
 * Type definition for a user defined function that allocates storage for MMU
 * translation tables. This memory is intended to be used by
 * alt_mmu_va_space_create() to allocate the TTBR0. alt_mmu_va_space_create()
 * allocates all the space required with one single call and divides the space
 * up internally.
 *
 * The function returns a \e size block of memory. The returned pointer must
 * be a 4 KiB (2^12), 16 KiB (2^14), or 64 KiB (2^16) for 4 KiB, 16 KiB, or 64
 * KiB granule sizes respectively.
 *
 * \param       size
 *              The size in bytes of the storage request. The value will be
 *              same reported by alt_mmu_va_space_storage_required() if
 *              non-zero, given the same set of memory regions.
 *
 * \param       align
 *              The size in bytes of the required alignment for the
 *              translation table granule being used.
 *
 * \param       context
 *              A user provided context for the allocator function.
 *
 * \returns     A 16 KiB aligned pointer to the allocated memory or NULL if the
 *              storage request cannot be satisfied.
 *
 * \internal
 * Alignment requirments for tables documented in ARMv8-A, section D4.3.1. See
 * figure D4-15.
 * \endinternal
 */
typedef void* (*alt_mmu_ttb_alloc_t)(size_t size, size_t align, void * context);

/*!
 * This type defines the typed used to define which structure
 * defines the MMU Translation Table Control Register. 
 */
#if __arm__
typedef  ALT_MMU_TTBCR_t    ALT_MMU_TCR_INFO_t;
#elif __aarch64__
typedef  ALT_MMU_TCR_t      ALT_MMU_TCR_INFO_t;
#endif

ALT_STATUS_CODE alt_mmu_configure_granule(const ALT_MMU_TCR_INFO_t * ttbconfig);

/*!
 * Returns the number of tables required for the translation 
 * tables that implement the virtual address space defined by the array of memory 
 * region descriptors.
 *
 * This function does not allocate any actual storage but merely computes the
 * amount of storage that would be required by the MMU translation tables created
 * for the specified virtual address space.
 *
 * \param       regions
 *              A pointer to an array of memory region descriptors that define the
 *              virtual address space.
 *
 * \param       regions_count
 *              The number of memory region descriptors in the \e mem_regions
 *              array.
 *
 * \param       granule_info
 *              Pagetable configuration information conveyed in the Translation
 *              Table Base Control Register.
 *
 * \param       ttb_config
 *              Pagetable configuration information conveyed in the Translation
 *              Control Register.
 *
 * \returns     The number of Translation Tables required for the MMU translation
 *              tables described by the virtual address space specfication, or
 *              zero if an error has occurred.
 */

size_t alt_mmu_va_space_storage_required(const ALT_MMU_MEM_REGION_t * regions,
                                         size_t regions_count,
                                         const ALT_MMU_GRANULE_INFO_t * granule_info,
                                         const ALT_MMU_TCR_INFO_t *        ttbconfig);


/*!
 * Creates the MMU translation tables needed to implement the virtual address
 * space defined by the memory region descriptors.
 *
 * The address space defined by the memory regions should describe the entire
 * virtual address range configured by \e ttbcr_info (AArch32) or \e tcr_info
 * (AArch64) and have no overlapping virtual address ranges.
 *
 * In AArch32 mode, the largest region that can be specified by a single region
 * is 2 GiB. Use multiple entries to describe a larger memory region.
 *
 * In AArch64 mode, there is no equivalent restriction. The largest region that
 * can be described is the physical address size parameter specified in
 * \e tcr_info.
 *
 * \param       regions
 *              A pointer to an array of memory region descriptors that define the
 *              virtual address space.
 *
 * \param       regions_count
 *              The number of memory region descriptors in the \e regions array.
 *
 * \param       granule_info
 *              Pagetable configuration information conveyed in the Translation
 *              Table Base Control Register. (AArch32 only)
 *
 * \param       ttbconfig
 *              Pagetable configuration information conveyed in the Translation
 *              Control Register. (AArch64 only)
 *
 * \param       ttb_alloc
 *              A pointer to a user defined function used for allocating storage
 *              for translation tables.
 *
 * \param       memPool
 *              Pointer Pool of Available Memory to hold Dynamically Allocated
 *              Translation Tables
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 *
 * \internal
 * Re: AArch32's 2 GiB limit:
 * This is needed because a full 4 GiB ALT_MMU_MEM_REGION_t::size parameter is 0, which looks like an error.
 * This is not a restriction in AArch64 because the PS does not match the full 64-bit PA addressable space.
 * \endinternal
 */

ALT_STATUS_CODE alt_mmu_va_space_create(const ALT_MMU_MEM_REGION_t *       regions,                 /* Pointer to Base Memory Region */
                                         size_t                            regions_count,           /* Number of Memory Regions */
                                         const ALT_MMU_GRANULE_INFO_t *    granule_info,            /* Pointer to Granule Information */
                                         const ALT_MMU_TCR_INFO_t *        ttbconfig,               /* Pointer to Translation Control Register Config */
                                         alt_mmu_ttb_alloc_t               ttb_alloc,
                                         void *                            memPool);                 /* Pointer to Memory Pool */

/*
 * Enables the virtual address space described by the MMU translation table \e
 * ttb1.
 *
 * This function actualizes the virtual address space rooted a the MMU first level
 * translation table \e ttb1. The function performs the following steps to enable
 * the virtual address space:
 *  * Configure the Translation Table Base Control Register (TTBCR) (AArch32)
 *    or Translation Control Register (TCR) (AArch64) to use a single table.
 *  * Configure the Memory Attribute Indirection Register (MAIR) 0 and 1
 *    (MAIR0, MAIR1) (AArch32) or MAIR (AArch64).
 *  * Set Translation Table Base Register (TTBR0) to \e ttb1.
 *  * Invalidate TLB.
 *  * Enable MMU.
 *
 * \param       ttb1
 *              The base address of a initial translation table.
 *
 * \param       ttbcr_info
 *              Pagetable configuration information conveyed in the Translation
 *              Table Base Control Register. (AArch32 only)
 *
 * \param       tcr_info
 *              Pagetable configuration information conveyed in the Translation
 *              Control Register. (AArch64 only)
 *
 * \param       mair_info
 *              Memory Attribute Indirection Register information.
 *
 * \retval      ALT_E_SUCCESS   Successful status.
 * \retval      ALT_E_ERROR     Details about error status code
 */
ALT_STATUS_CODE alt_mmu_va_space_enable(const uint64_t* translation_table_base,
                                        const ALT_MMU_TCR_INFO_t *tcrconfig,
                                        const ALT_MMU_MAIR_t* mair_info);

/*!
 * Given a virtual address, this API attempts to determine the corresponding
 * physical address and memory attribute. There are no alignment restrictions
 * on the incoming virtual address.
 *
 * If the translation succeeds, the corresponding physical address will be
 * returned, \e attr will be populated with the memory attribute, and
 * \e esr will be populated with 0.
 *
 * If the translation is not possible, \e dfsc (Data Fault Status Code) will
 * contain the reason for the translation failure and the other returned
 * values will be undefined. \e dfsc is the long descriptor Data Fault
 * (EC=100101b) ESR's ISS's DFSC.
 *
 * For a complete understanding of the DFSC bit field assignments, consult the
 * following reference(s):
 *  * <em>ARM Architecture Reference Manual ARMv8-A (ARM DDI 0487A), section
 *    D7.2.27.</em>
 *
 * \param       va
 *              The virtual address to query.
 *
 * \param       attr
 *              [out] A pointer memory attribute associated with that virtual
 *              address.
 *
 * \param       dfsc
 *              [out] A pointer to the data fault status code value.
 *
 * \returns     The physical address of the translation if it is successful.
 */
uint64_t alt_mmu_va_to_pa(const void * va, ALT_MMU_ATTR_t * attr, uint32_t * dfsc);

/*!
 * @}
 */

#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_MMU_H__ */
