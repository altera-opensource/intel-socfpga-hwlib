/***********************************************************************************
*                                                                                  *
* Copyright 2013-2015 Altera Corporation. All Rights Reserved.                     *
*                                                                                  *
* Redistribution and use in source and binary forms, with or without               *
* modification, are permitted provided that the following conditions are met:      *
*                                                                                  *
* 1. Redistributions of source code must retain the above copyright notice,        *
*    this list of conditions and the following disclaimer.                         *
*                                                                                  *
* 2. Redistributions in binary form must reproduce the above copyright notice,     *
*    this list of conditions and the following disclaimer in the documentation     *
*    and/or other materials provided with the distribution.                        *
*                                                                                  *
* 3. Neither the name of the copyright holder nor the names of its contributors    *
*    may be used to endorse or promote products derived from this software without *
*    specific prior written permission.                                            *
*                                                                                  *
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"      *
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE        *
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE       *
* ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE        *
* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR              *
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF             *
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS         *
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN          *
* CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)          *
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE       *
* POSSIBILITY OF SUCH DAMAGE.                                                      *
*                                                                                  *
***********************************************************************************/

/* Altera - ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS */

#ifndef __ALT_SOCAL_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_H__
#define __ALT_SOCAL_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_H__

#ifndef __ASSEMBLY__
#ifdef __cplusplus
#include <cstdint>
extern "C"
{
#else   /* __cplusplus */
#include <stdint.h>
#endif  /* __cplusplus */
#endif  /* __ASSEMBLY__ */

/*
 * Component : NOC_CCU_IOS_IO_TBU_M_MAIN_QOS
 * 
 */
/*
 * Register : io_tbu_m_I_main_QosGenerator_Id_CoreId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset  | Description                                                                          
 * :-------|:-------|:-------|:--------------------------------------------------------------------------------------
 *  [7:0]  | R      | 0x4    | ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORETYPEID  
 *  [31:8] | R      | 0x5bde | ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORECHECKSUM
 * 
 */
/*
 * Field : CORETYPEID
 * 
 * Field identifying the type of IP.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORETYPEID register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORETYPEID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORETYPEID register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORETYPEID_MSB        7
/* The width in bits of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORETYPEID register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORETYPEID_WIDTH      8
/* The mask used to set the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORETYPEID register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORETYPEID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORETYPEID register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORETYPEID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORETYPEID register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORETYPEID_RESET      0x4
/* Extracts the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORETYPEID field value from a register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORETYPEID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORETYPEID register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORETYPEID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : CORECHECKSUM
 * 
 * Field containing a checksum of the parameters of the IP.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORECHECKSUM register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORECHECKSUM_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORECHECKSUM register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORECHECKSUM_MSB        31
/* The width in bits of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORECHECKSUM register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORECHECKSUM_WIDTH      24
/* The mask used to set the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORECHECKSUM register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORECHECKSUM_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORECHECKSUM register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORECHECKSUM_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORECHECKSUM register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORECHECKSUM_RESET      0x5bde
/* Extracts the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORECHECKSUM field value from a register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORECHECKSUM_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORECHECKSUM register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORECHECKSUM_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID.
 */
struct ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_s
{
    const volatile uint32_t  CORETYPEID   :  8;  /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORETYPEID */
    const volatile uint32_t  CORECHECKSUM : 24;  /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_CORECHECKSUM */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID. */
typedef struct ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_s  ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_RESET       0x005bde04
/* The byte offset of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_OFST        0x0

/*
 * Register : io_tbu_m_I_main_QosGenerator_Id_RevisionId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                                                           
 * :-------|:-------|:------|:---------------------------------------------------------------------------------------
 *  [7:0]  | R      | 0x0   | ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_USERID   
 *  [31:8] | R      | 0x148 | ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_FLEXNOCID
 * 
 */
/*
 * Field : USERID
 * 
 * Field containing a user defined value, not used anywhere inside the IP itself.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_USERID register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_USERID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_USERID register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_USERID_MSB        7
/* The width in bits of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_USERID register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_USERID_WIDTH      8
/* The mask used to set the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_USERID register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_USERID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_USERID register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_USERID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_USERID register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_USERID_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_USERID field value from a register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_USERID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_USERID register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_USERID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : FLEXNOCID
 * 
 * Field containing the build revision of the software used to generate the IP HDL
 * code.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_FLEXNOCID register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_FLEXNOCID_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_FLEXNOCID register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_FLEXNOCID_MSB        31
/* The width in bits of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_FLEXNOCID register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_FLEXNOCID_WIDTH      24
/* The mask used to set the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_FLEXNOCID register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_FLEXNOCID_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_FLEXNOCID register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_FLEXNOCID_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_FLEXNOCID register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_FLEXNOCID_RESET      0x148
/* Extracts the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_FLEXNOCID field value from a register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_FLEXNOCID_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_FLEXNOCID register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_FLEXNOCID_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID.
 */
struct ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_s
{
    const volatile uint32_t  USERID    :  8;  /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_USERID */
    const volatile uint32_t  FLEXNOCID : 24;  /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_FLEXNOCID */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID. */
typedef struct ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_s  ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_RESET       0x00014800
/* The byte offset of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_OFST        0x4

/*
 * Register : io_tbu_m_I_main_QosGenerator_Priority
 * 
 * Priority register.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                                 
 * :--------|:-------|:--------|:-----------------------------------------------------------------------------
 *  [1:0]   | RW     | 0x0     | ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P0  
 *  [7:2]   | ???    | Unknown | *UNDEFINED*                                                                 
 *  [9:8]   | RW     | 0x1     | ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P1  
 *  [30:10] | ???    | Unknown | *UNDEFINED*                                                                 
 *  [31]    | R      | 0x1     | ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_MARK
 * 
 */
/*
 * Field : P0
 * 
 * In Programmable or Bandwidth Limiter mode, the priority level for write
 * transactions. In Bandwidth Regulator mode, the priority level when the used
 * throughput is above the threshold. In Bandwidth Regulator mode, P0 should have a
 * value equal or lower than P1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P0 register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P0 register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P0_MSB        1
/* The width in bits of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P0 register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P0_WIDTH      2
/* The mask used to set the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P0 register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P0_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P0 register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P0_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P0 register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P0_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P0 field value from a register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P0_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P0 register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P0_SET(value) (((value) << 0) & 0x00000003)

/*
 * Field : P1
 * 
 * In Programmable or Bandwidth Limiter mode, the priority level for read
 * transactions. In Bandwidth regulator mode, the priority level when the used
 * throughput is below the threshold. In Bandwidth Regulator mode, P1 should have a
 * value equal or greater than P0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P1 register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P1_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P1 register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P1_MSB        9
/* The width in bits of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P1 register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P1_WIDTH      2
/* The mask used to set the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P1 register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P1_SET_MSK    0x00000300
/* The mask used to clear the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P1 register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P1_CLR_MSK    0xfffffcff
/* The reset value of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P1 register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P1_RESET      0x1
/* Extracts the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P1 field value from a register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P1_GET(value) (((value) & 0x00000300) >> 8)
/* Produces a ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P1 register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P1_SET(value) (((value) << 8) & 0x00000300)

/*
 * Field : MARK
 * 
 * Backward compatibility marker when 0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_MARK register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_MARK_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_MARK register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_MARK_MSB        31
/* The width in bits of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_MARK register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_MARK_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_MARK register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_MARK_SET_MSK    0x80000000
/* The mask used to clear the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_MARK register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_MARK_CLR_MSK    0x7fffffff
/* The reset value of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_MARK register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_MARK_RESET      0x1
/* Extracts the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_MARK field value from a register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_MARK_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_MARK register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_MARK_SET(value) (((value) << 31) & 0x80000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY.
 */
struct ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_s
{
    volatile uint32_t        P0   :  2;  /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P0 */
    uint32_t                      :  6;  /* *UNDEFINED* */
    volatile uint32_t        P1   :  2;  /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_P1 */
    uint32_t                      : 21;  /* *UNDEFINED* */
    const volatile uint32_t  MARK :  1;  /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_MARK */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY. */
typedef struct ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_s  ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_RESET       0x80000100
/* The byte offset of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_OFST        0x8

/*
 * Register : io_tbu_m_I_main_QosGenerator_Mode
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                             
 * :-------|:-------|:--------|:-------------------------------------------------------------------------
 *  [1:0]  | RW     | 0x3     | ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE_MODE
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                                             
 * 
 */
/*
 * Field : MODE
 * 
 * 0 = Programmable mode: a programmed priority is assigned to each read or write,
 * 1 = Bandwidth Limiter Mode: a hard limit restricts throughput, 2 = Bypass mode:
 * (<See SoC-specific QoS generator documentation>), 3 = Bandwidth Regulator mode:
 * priority decreases when throughput exceeds a threshold.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE_MODE register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE_MODE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE_MODE register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE_MODE_MSB        1
/* The width in bits of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE_MODE register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE_MODE_WIDTH      2
/* The mask used to set the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE_MODE register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE_MODE_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE_MODE register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE_MODE_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE_MODE register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE_MODE_RESET      0x3
/* Extracts the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE_MODE field value from a register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE_MODE_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE_MODE register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE_MODE_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE.
 */
struct ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE_s
{
    volatile uint32_t  MODE :  2;  /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE_MODE */
    uint32_t                : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE. */
typedef struct ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE_s  ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE_RESET       0x00000003
/* The byte offset of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE_OFST        0xc

/*
 * Register : io_tbu_m_I_main_QosGenerator_Bandwidth
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                                       
 * :--------|:-------|:--------|:-----------------------------------------------------------------------------------
 *  [11:0]  | RW     | 0x200   | ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH_BANDWIDTH
 *  [31:12] | ???    | Unknown | *UNDEFINED*                                                                       
 * 
 */
/*
 * Field : BANDWIDTH
 * 
 * In Bandwidth Limiter or Bandwidth Regulator mode, the bandwidth threshold in
 * units of 1/256th bytes per cycle. For example, 80 MBps on a 250 MHz interface is
 * value 0x0052.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH_BANDWIDTH register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH_BANDWIDTH_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH_BANDWIDTH register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH_BANDWIDTH_MSB        11
/* The width in bits of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH_BANDWIDTH register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH_BANDWIDTH_WIDTH      12
/* The mask used to set the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH_BANDWIDTH register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH_BANDWIDTH_SET_MSK    0x00000fff
/* The mask used to clear the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH_BANDWIDTH register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH_BANDWIDTH_CLR_MSK    0xfffff000
/* The reset value of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH_BANDWIDTH register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH_BANDWIDTH_RESET      0x200
/* Extracts the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH_BANDWIDTH field value from a register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH_BANDWIDTH_GET(value) (((value) & 0x00000fff) >> 0)
/* Produces a ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH_BANDWIDTH register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH_BANDWIDTH_SET(value) (((value) << 0) & 0x00000fff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH.
 */
struct ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH_s
{
    volatile uint32_t  BANDWIDTH : 12;  /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH_BANDWIDTH */
    uint32_t                     : 20;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH. */
typedef struct ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH_s  ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH_RESET       0x00000200
/* The byte offset of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH_OFST        0x10

/*
 * Register : io_tbu_m_I_main_QosGenerator_Saturation
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                                                         
 * :--------|:-------|:--------|:-------------------------------------------------------------------------------------
 *  [9:0]   | RW     | 0x4     | ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION_SATURATION
 *  [31:10] | ???    | Unknown | *UNDEFINED*                                                                         
 * 
 */
/*
 * Field : SATURATION
 * 
 * In Bandwidth Limiter or Bandwidth Regulator mode, the maximum data count value,
 * in units of 16 bytes. This determines the window of time over which bandwidth is
 * measured. For example, to measure bandwidth within a 1000 cycle window on a
 * 64-bit interface is value 0x1F4.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION_SATURATION register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION_SATURATION_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION_SATURATION register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION_SATURATION_MSB        9
/* The width in bits of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION_SATURATION register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION_SATURATION_WIDTH      10
/* The mask used to set the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION_SATURATION register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION_SATURATION_SET_MSK    0x000003ff
/* The mask used to clear the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION_SATURATION register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION_SATURATION_CLR_MSK    0xfffffc00
/* The reset value of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION_SATURATION register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION_SATURATION_RESET      0x4
/* Extracts the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION_SATURATION field value from a register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION_SATURATION_GET(value) (((value) & 0x000003ff) >> 0)
/* Produces a ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION_SATURATION register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION_SATURATION_SET(value) (((value) << 0) & 0x000003ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION.
 */
struct ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION_s
{
    volatile uint32_t  SATURATION : 10;  /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION_SATURATION */
    uint32_t                      : 22;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION. */
typedef struct ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION_s  ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION_RESET       0x00000004
/* The byte offset of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION_OFST        0x14

/*
 * Register : io_tbu_m_I_main_QosGenerator_ExtControl
 * 
 * External inputs control.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                                          
 * :-------|:-------|:--------|:--------------------------------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_SOCKETQOSEN
 *  [1]    | RW     | 0x0     | ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_EXTTHREN   
 *  [2]    | RW     | 0x0     | ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_INTCLKEN   
 *  [31:3] | ???    | Unknown | *UNDEFINED*                                                                          
 * 
 */
/*
 * Field : SOCKETQOSEN
 * 
 * n/a
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_SOCKETQOSEN register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_SOCKETQOSEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_SOCKETQOSEN register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_SOCKETQOSEN_MSB        0
/* The width in bits of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_SOCKETQOSEN register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_SOCKETQOSEN_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_SOCKETQOSEN register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_SOCKETQOSEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_SOCKETQOSEN register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_SOCKETQOSEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_SOCKETQOSEN register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_SOCKETQOSEN_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_SOCKETQOSEN field value from a register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_SOCKETQOSEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_SOCKETQOSEN register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_SOCKETQOSEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : EXTTHREN
 * 
 * n/a
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_EXTTHREN register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_EXTTHREN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_EXTTHREN register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_EXTTHREN_MSB        1
/* The width in bits of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_EXTTHREN register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_EXTTHREN_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_EXTTHREN register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_EXTTHREN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_EXTTHREN register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_EXTTHREN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_EXTTHREN register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_EXTTHREN_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_EXTTHREN field value from a register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_EXTTHREN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_EXTTHREN register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_EXTTHREN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : INTCLKEN
 * 
 * n/a
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_INTCLKEN register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_INTCLKEN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_INTCLKEN register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_INTCLKEN_MSB        2
/* The width in bits of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_INTCLKEN register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_INTCLKEN_WIDTH      1
/* The mask used to set the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_INTCLKEN register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_INTCLKEN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_INTCLKEN register field value. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_INTCLKEN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_INTCLKEN register field. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_INTCLKEN_RESET      0x0
/* Extracts the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_INTCLKEN field value from a register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_INTCLKEN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_INTCLKEN register field value suitable for setting the register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_INTCLKEN_SET(value) (((value) << 2) & 0x00000004)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL.
 */
struct ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_s
{
    volatile uint32_t  SOCKETQOSEN :  1;  /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_SOCKETQOSEN */
    volatile uint32_t  EXTTHREN    :  1;  /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_EXTTHREN */
    volatile uint32_t  INTCLKEN    :  1;  /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_INTCLKEN */
    uint32_t                       : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL. */
typedef struct ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_s  ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL register. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_RESET       0x00000000
/* The byte offset of the ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL register from the beginning of the component. */
#define ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_OFST        0x18

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for coding device
 * drivers is to use the SoCAL access macros in conjunction with alt_read_word()
 * and alt_write_word() functions for 32 bit registers and alt_read_dword() and
 * alt_write_dword() functions for 64 bit registers.
 * 
 * The struct declaration for register group ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS.
 */
struct ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_s
{
    volatile ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID_t      io_tbu_m_I_main_QosGenerator_Id_CoreId;      /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID */
    volatile ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID_t  io_tbu_m_I_main_QosGenerator_Id_RevisionId;  /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID */
    volatile ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY_t       io_tbu_m_I_main_QosGenerator_Priority;       /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY */
    volatile ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE_t           io_tbu_m_I_main_QosGenerator_Mode;           /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE */
    volatile ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH_t      io_tbu_m_I_main_QosGenerator_Bandwidth;      /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH */
    volatile ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION_t     io_tbu_m_I_main_QosGenerator_Saturation;     /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION */
    volatile ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL_t     io_tbu_m_I_main_QosGenerator_ExtControl;     /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL */
    volatile uint32_t                                                                        _pad_0x1c_0x80[25];                          /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS. */
typedef struct ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_s  ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS. */
struct ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_raw_s
{
    volatile uint32_t  io_tbu_m_I_main_QosGenerator_Id_CoreId;      /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_COREID */
    volatile uint32_t  io_tbu_m_I_main_QosGenerator_Id_RevisionId;  /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_ID_REVISIONID */
    volatile uint32_t  io_tbu_m_I_main_QosGenerator_Priority;       /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_PRIORITY */
    volatile uint32_t  io_tbu_m_I_main_QosGenerator_Mode;           /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_MODE */
    volatile uint32_t  io_tbu_m_I_main_QosGenerator_Bandwidth;      /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_BANDWIDTH */
    volatile uint32_t  io_tbu_m_I_main_QosGenerator_Saturation;     /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_SATURATION */
    volatile uint32_t  io_tbu_m_I_main_QosGenerator_ExtControl;     /* ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_IO_TBU_M_I_MAIN_QOSGENERATOR_EXTCONTROL */
    volatile uint32_t  _pad_0x1c_0x80[25];                          /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS. */
typedef struct ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_raw_s  ALT_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_NOC_CCU_IOS_IO_TBU_M_MAIN_QOS_H__ */

