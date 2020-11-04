/******************************************************************************
*
* Copyright 2013-2017 Altera Corporation. All Rights Reserved.
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
 * $Id: //acds/main/embedded/ip/hps/armv8/hwlib/include/hwlib.h#1 $
 */

#ifndef __HWLIB_H__
#define __HWLIB_H__

#ifdef __cplusplus
#include <cstddef>
#include <cstdbool>
#include <cstdint>
#else   /* __cplusplus */
#include <stddef.h>
#include <stdbool.h>
#include <stdint.h>
#endif  /* __cplusplus */

#ifdef __cplusplus
extern "C"
{
#endif  /* __cplusplus */

#if !defined(soc_s10)
#error You must define soc_s10 before compiling with HwLibs
#endif

#define ALT_MIN(a, b) ((a) > (b) ? (b) : (a))
#define ALT_MAX(a, b) ((a) > (b) ? (a) : (b))

#define ALT_SIZEOF_ARRAY(a) (sizeof(a)/sizeof(a[0]))

/*!
 * The type definition for status codes returned by the HWLIB.
 */
typedef int32_t             ALT_STATUS_CODE;

/*! Definitions of status codes returned by the HWLIB. */

/*! The operation was successful. */
#define ALT_E_SUCCESS               0

/*! The operation failed. */
#define ALT_E_ERROR                 (-1)
/*! FPGA configuration error detected.*/
#define ALT_E_FPGA_CFG              (-2)
/*! FPGA CRC error detected. */
#define ALT_E_FPGA_CRC              (-3)
/*! An error occurred on the FPGA configuration bitstream input source. */
#define ALT_E_FPGA_CFG_STM          (-4)
/*! The FPGA is powered off. */
#define ALT_E_FPGA_PWR_OFF          (-5)
/*! The SoC does not currently control the FPGA. */
#define ALT_E_FPGA_NO_SOC_CTRL      (-6)
/*! The FPGA is not in USER mode. */
#define ALT_E_FPGA_NOT_USER_MODE    (-7)
/*! An argument violates a range constraint. */
#define ALT_E_ARG_RANGE             (-8)
/*! A bad argument value was passed. */
#define ALT_E_BAD_ARG               (-9)
/*! The operation is invalid or illegal. */
#define ALT_E_BAD_OPERATION         (-10)
/*! An invalid option was selected. */
#define ALT_E_INV_OPTION            (-11)
/*! An operation or response timeout period expired. */
#define ALT_E_TMO                   (-12)
/*! The argument value is reserved or unavailable. */
#define ALT_E_RESERVED              (-13)
/*! A clock is not enabled or violates an operational constraint. */
#define ALT_E_BAD_CLK               (-14)
/*! The version ID is invalid. */
#define ALT_E_BAD_VERSION           (-15)
/*! The buffer does not contain enough free space for the operation. */
#define ALT_E_BUF_OVF               (-20)

/*!
 * Indicates a FALSE condition.
 */
#define ALT_E_FALSE                 (0)
/*!
 * Indicates a TRUE condition.
 */
#define ALT_E_TRUE                  (1)

/* Note, additional positive status codes may be defined to return
 * a TRUE condition with additional information */


/* Some other useful definitions */

/*!
 * Allow some parts of the documentation to be hidden by setting to zero
 */
#define ALTERA_INTERNAL_ONLY_DOCS   1


/*!
 * Provide base address of MPU address space
 */

#ifndef ALT_HPS_ADDR
#define ALT_HPS_ADDR            0
#endif

/*!
 * These constants are sometimes useful:
 */
#define ALT_MILLISECS_IN_A_SEC      1000
#define ALT_MICROSECS_IN_A_SEC      1000000
#define ALT_NANOSECS_IN_A_SEC       1000000000

#define ALT_TWO_TO_POW(x)			(1UL<<(x))


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __HWLIB_H__ */

