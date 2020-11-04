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

#ifndef __ALT_CACHE_H__
#define __ALT_CACHE_H__

#include "hwlib.h"

#ifdef __cplusplus
extern "C"
{
#endif

/*!
 * \addtogroup CACHE_MGR Cache Management API
 *
 * This module defines the cache management API for enabling and disabling L1
 * data cache, L1 instruction cache, and L2 cache in the SoC. As well, the API
 * allows users to perform cache maintenance operations on these caches. This
 * includes the following operations:
 *
 *  * Invalidate: Marks the cache line as being invalid, freeing up the space
 *    to cache other data. All APIs which enable caches invalidate the memory
 *    before being enabling the cache.
 *  * Clean: If the cache line is dirty, synchronizes the cache line data
 *    with the upper level memory system and marks that line as clean. All APIs
 *    which disable caches cleans the memory before disabling the cache.
 *  * Purge: A term used in this API as a short form for clean and invalidate.
 *    This operation cleans and invalidates a cache line in that order, as a
 *    single command to the cache controller.
 *
 * The following reference materials were used in the design of this API:
 *  * <em>ARM Architecture Reference Manual, ARMv8-A (ARM DDI 0487A)</em>
 *  * <em<Cortex-A53 MPCore Processor Technical Reference Manual
 *    (ARM DDI 0500G)</em>
 *
 * @{
 */

/*!
 * \addtogroup CACHE_SYS System Level Cache Management API
 *
 * This API group provides cache maintenance operations which affects multiple
 * cache levels.
 *
 * As all caches are built into the MPCore, this API is provided mostly for
 * backwards compatability with previous HWLibs caching API.
 *
 * @{
 */

/*!
 * This is the system wide cache line size, given in bytes.
 */
#define ALT_CACHE_LINE_SIZE         (64)

/*!
 * Enables all caches and features which improve reliability and speed on all
 * cache controllers visible to the current CPU core. All necessary cache
 * maintenance operations will be done automatically.
 *
 * The MMU must be enabled before calling this API.
 * It is not recommended to enable/disable the cache frequently. The system may run into
 * undetermined state.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_cache_system_enable(void);

/*!
 * Disables all cache controllers visible to the current CPU core. All
 * necessary cache maintenance operations will be done automatically.
 *
 * It is not recommended to enable/disable the cache frequently. The system may run into
 * undetermined state.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_cache_system_disable(void);

/*!
 * Invalidates the specified contents of all cache levels visible to the
 * current CPU core for the given memory segment.
 *
 * The memory segment address and length specified must align to the
 * characteristics of the cache line. This means the address and length must be
 * multiples of the cache line size. To determine the cache line size, use the
 * \b ALT_CACHE_LINE_SIZE macro.
 *
 * For the most part, calling this API on memory backed by SDRAM and OCRAM is
 * unnecessary because the CCU (Cache Coherency Unit), which is part of the
 * interconnect, will automatically maintain cache coherency with the
 * Cortex-A53. If memory is backed with another RAM, such as FPGA memory,
 * calling this API is required with the default CCU setup.
 *
 * \param       va
 *              The virtual address of the memory segment to be invalidated.
 *
 * \param       length
 *              The length of the memory segment to be invalidated.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The memory segment is invalid.
 */
ALT_STATUS_CODE alt_cache_system_data_invalidate(void * va, size_t length);

/*!
 * Cleans the specified contents of all cache levels visible to the current
 * CPU core for the given memory segment.
 *
 * The memory segment address and length specified must align to the
 * characteristics of the cache line. This means the address and length must be
 * multiples of the cache line size. To determine the cache line size, use the
 * \b ALT_CACHE_LINE_SIZE macro.
 *
 * For the most part, calling this API on memory backed by SDRAM and OCRAM is
 * unnecessary because the CCU (Cache Coherency Unit), which is part of the
 * interconnect, will automatically maintain cache coherency with the
 * Cortex-A53. If memory is backed with another RAM, such as FPGA memory,
 * calling this API is required with the default CCU setup.
 *
 * \param       va
 *              The virtual address of the memory segment to be cleaned.
 *
 * \param       length
 *              The length of the memory segment to be cleaned.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The memory segment is invalid.
 */
ALT_STATUS_CODE alt_cache_system_data_clean(void * va, size_t length);

/*!
 * Cleans and invalidates the specified contents of all cache levels visible
 * to the current CPU core for the given memory segment.
 *
 * The memory segment address and length specified must align to the
 * characteristics of the cache line. This means the address and length must be
 * multiples of the cache line size. To determine the cache line size, use the
 * \b ALT_CACHE_LINE_SIZE macro.
 *
 * For the most part, calling this API on memory backed by SDRAM and OCRAM is
 * unnecessary because the CCU (Cache Coherency Unit), which is part of the
 * interconnect, will automatically maintain cache coherency with the
 * Cortex-A53. If memory is backed with another RAM, such as FPGA memory,
 * calling this API is required with the default CCU setup.
 *
 * \param       va
 *              The virtual address of the memory segment to be purged.
 *
 * \param       length
 *              The length of the memory segment to be purged.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The memory segment is invalid.
 */
ALT_STATUS_CODE alt_cache_system_data_purge(void * va, size_t length);

/*!
 * @}
 */

/*!
 * \addtogroup CACHE_CPU CPU Cache Management API
 *
 * This API group provides functions to interact with various components of the
 * cache on the SoCFPGA. This includes the following cache components:
 *  * Instruction Cache
 *  * Data Cache
 *
 * @{
 */

/*!
 * Enables all caches and features on the current CPU core. This includes the
 * instruction cache and data cache. All necessary maintenance tasks are taken
 * care of.
 *
 * The MMU must be enabled before calling this API.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_cache_cpu_enable_all(void);

/*!
 * Disables all caches and features on the current CPU core. This includes the
 * instruction cache and data cache. All necessary maintenance tasks are taken
 * care of.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_cache_cpu_disable_all(void);

/*!
 * Enables the instruction cache on the current CPU core. If the cache is
 * already enabled, nothing is done. Otherwise the instruction cache is first
 * invalidated before being enabled.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_cache_cpu_instruction_enable(void);

/*!
 * Disables the instruction cache on the current CPU core.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_cache_cpu_instruction_disable(void);

/*!
 * Returns \b true when the instruction cache is enabled and \b false when it
 * is disabled on the current CPU core.
 *
 * \retval      true            The L1 instruction cache is enabled.
 * \retval      false           The L1 instruction cache is disabled.
 */
bool alt_cache_cpu_instruction_is_enabled(void);

/*!
 * Invalidates the contents of the instruction cache on the current CPU core.
 *
 * Normally this is done automatically as part of
 * alt_cache_cpu_instruction_enable(), but in certain circumstances it may be
 * necessary to invalidate it manually. An example of this situation is when
 * the address space is remapped and the processor executes instructions from
 * the new memory area.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_cache_cpu_instruction_invalidate(void);

/*!
 * Enables the data cache on the current CPU core.
 *
 * If the cache is already enabled nothing is done. Otherwise the data cache is
 * first invalidated before being enabled.
 *
 * The MMU must be enabled before calling this API.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_cache_cpu_data_enable(void);

/*!
 * Disables the data cache on the current CPU core.
 *
 * If the cache is already disabled nothing is done. Otherwise the data cache
 * is first cleaned before being disabled.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_cache_cpu_data_disable(void);

/*!
 * Returns \b true when the data cache is enabled and \b false when it is
 * disabled on the current CPU core.
 *
 * \retval      true            The L1 data cache is enabled.
 * \retval      false           The L1 data cache is disabled.
 */
bool alt_cache_cpu_data_is_enabled(void);

/*!
 * Invalidates the specified contents of the data cache on the current CPU
 * core for the given memory segment.
 *
 * The memory segment address and length specified must align to the
 * characteristics of the cache line. This means the address and length must be
 * multiples of the cache line size. To determine the cache line size, use the
 * \b ALT_CACHE_LINE_SIZE macro.
 *
 * For the most part, calling this API on memory backed by SDRAM and OCRAM is
 * unnecessary because the CCU (Cache Coherency Unit), which is part of the
 * interconnect, will automatically maintain cache coherency with the
 * Cortex-A53. If memory is backed with another RAM, such as FPGA memory,
 * calling this API is required with the default CCU setup.
 *
 * \param       va
 *              The virtual address of the memory segment to be invalidated.
 *
 * \param       length
 *              The length of the memory segment to be invalidated.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The memory segment is invalid.
 */
ALT_STATUS_CODE alt_cache_cpu_data_invalidate(void * va, size_t length);

/*!
 * Cleans the specified contents of the data cache on the current CPU core for
 * the given memory segment.
 *
 * The memory segment address and length specified must align to the
 * characteristics of the cache line. This means the address and length must be
 * multiples of the cache line size. To determine the cache line size, use the
 * \b ALT_CACHE_LINE_SIZE macro.
 *
 * For the most part, calling this API on memory backed by SDRAM and OCRAM is
 * unnecessary because the CCU (Cache Coherency Unit), which is part of the
 * interconnect, will automatically maintain cache coherency with the
 * Cortex-A53. If memory is backed with another RAM, such as FPGA memory,
 * calling this API is required with the default CCU setup.
 *
 * \param       va
 *              The virtual address of the memory segment to be cleaned.
 *
 * \param       length
 *              The length of the memory segment to be cleaned.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The memory segment is invalid.
 */
ALT_STATUS_CODE alt_cache_cpu_data_clean(void * va, size_t length);

/*!
 * Cleans and invalidates the specified contents of the data cache on the
 * current CPU core for the given memory segment.
 *
 * The memory segment address and length specified must align to the
 * characteristics of the cache line. This means the address and length must be
 * multiples of the cache line size. To determine the cache line size, use the
 * \b ALT_CACHE_LINE_SIZE macro.
 *
 * For the most part, calling this API on memory backed by SDRAM and OCRAM is
 * unnecessary because the CCU (Cache Coherency Unit), which is part of the
 * interconnect, will automatically maintain cache coherency with the
 * Cortex-A53. If memory is backed with another RAM, such as FPGA memory,
 * calling this API is required with the default CCU setup.
 *
 * \param       va
 *              The virtual address of the memory segment to be purged.
 *
 * \param       length
 *              The length of the memory segment to be purged.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 * \retval      ALT_E_BAD_ARG   The memory segment is invalid.
 */
ALT_STATUS_CODE alt_cache_cpu_data_purge(void * va, size_t length);

/*!
 * @}
 */

/*!
 * \addtogroup CACHE_LX L1 and L2 Cache Management API
 *
 * This API group provides functions for cache maintenance on the entire
 * cache.
 *
 * @{
 */

/*!
 * Invalidates the entire contents of the L1 data cache on the current CPU
 * core.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_cache_l1_data_invalidate_all(void);

/*!
 * Cleans the entire L1 data cache for the current CPU core.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_cache_l1_data_clean_all(void);

/*!
 * Cleans and invalidates the entire L1 data cache for the current CPU core.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_cache_l1_data_purge_all(void);

/*!
 * Invalidates the entire contents of the L1 data cache on the current CPU
 * core and the shared L2 cache.
 *
 * Normally this is done automatically as part of alt_cache_cpu_data_enable(),
 * but in certain circumstances it may be necessary to invalidate it manually.
 * An example of this situation is when the address space is remapped and the
 * processor accesses memory from the new memory area.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_cache_lx_data_invalidate_all(void);

/*!
 * Cleans the entire L1 data cache for the current CPU core and the shared L2
 * cache.
 *
 * Normally this is done automatically as part of alt_cache_l1_data_disable(),
 * but in certain circumstances it may be necessary to purged it manually.
 * An example of this situation is when the address space is remapped and the
 * processor accesses memory from the new memory area.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_cache_lx_data_clean_all(void);

/*!
 * Cleans and invalidates the entire L1 data cache for the current CPU core
 * and the shared L2 cache.
 *
 * \retval      ALT_E_SUCCESS   The operation was successful.
 * \retval      ALT_E_ERROR     The operation failed.
 */
ALT_STATUS_CODE alt_cache_lx_data_purge_all(void);

/*!
 * @}
 */

/*!
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif /* __ALT_CACHE_H__ */
