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

/* Altera - ALT_NOC_MPU_EMAC0_M_QOS */

#ifndef __ALT_SOCAL_NOC_MPU_EMAC0_H__
#define __ALT_SOCAL_NOC_MPU_EMAC0_H__

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
 * Component : ALT_NOC_MPU_EMAC0_M_QOS
 * 
 */
/*
 * Register : emac0_m_I_main_QosGenerator_Id_CoreId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset    | Description                            
 * :-------|:-------|:---------|:----------------------------------------
 *  [7:0]  | R      | 0x4      | ALT_NOC_MPU_EMAC0_M_QOS_COREID_TYPEID  
 *  [31:8] | R      | 0x7d4821 | ALT_NOC_MPU_EMAC0_M_QOS_COREID_CHECKSUM
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_COREID_TYPEID register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_COREID_TYPEID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_COREID_TYPEID register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_COREID_TYPEID_MSB        7
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_QOS_COREID_TYPEID register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_COREID_TYPEID_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_QOS_COREID_TYPEID register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_COREID_TYPEID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_QOS_COREID_TYPEID register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_COREID_TYPEID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_MPU_EMAC0_M_QOS_COREID_TYPEID register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_COREID_TYPEID_RESET      0x4
/* Extracts the ALT_NOC_MPU_EMAC0_M_QOS_COREID_TYPEID field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_COREID_TYPEID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_MPU_EMAC0_M_QOS_COREID_TYPEID register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_COREID_TYPEID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : CORECHECKSUM
 * 
 * Field containing a checksum of the parameters of the IP.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_COREID_CHECKSUM_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_COREID_CHECKSUM_MSB        31
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_QOS_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_COREID_CHECKSUM_WIDTH      24
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_QOS_COREID_CHECKSUM register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_COREID_CHECKSUM_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_QOS_COREID_CHECKSUM register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_COREID_CHECKSUM_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_MPU_EMAC0_M_QOS_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_COREID_CHECKSUM_RESET      0x7d4821
/* Extracts the ALT_NOC_MPU_EMAC0_M_QOS_COREID_CHECKSUM field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_COREID_CHECKSUM_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_MPU_EMAC0_M_QOS_COREID_CHECKSUM register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_COREID_CHECKSUM_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_EMAC0_M_QOS_COREID.
 */
struct ALT_NOC_MPU_EMAC0_M_QOS_COREID_s
{
    const uint32_t  CORETYPEID   :  8;  /* ALT_NOC_MPU_EMAC0_M_QOS_COREID_TYPEID */
    const uint32_t  CORECHECKSUM : 24;  /* ALT_NOC_MPU_EMAC0_M_QOS_COREID_CHECKSUM */
};

/* The typedef declaration for register ALT_NOC_MPU_EMAC0_M_QOS_COREID. */
typedef volatile struct ALT_NOC_MPU_EMAC0_M_QOS_COREID_s  ALT_NOC_MPU_EMAC0_M_QOS_COREID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_EMAC0_M_QOS_COREID register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_COREID_RESET       0x7d482104
/* The byte offset of the ALT_NOC_MPU_EMAC0_M_QOS_COREID register from the beginning of the component. */
#define ALT_NOC_MPU_EMAC0_M_QOS_COREID_OFST        0x0

/*
 * Register : emac0_m_I_main_QosGenerator_Id_RevisionId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                            
 * :-------|:-------|:--------|:----------------------------------------
 *  [7:0]  | R      | 0x0     | ALT_NOC_MPU_EMAC0_M_QOS_REVID_UID      
 *  [31:8] | R      | 0x129ff | ALT_NOC_MPU_EMAC0_M_QOS_REVID_FLEXNOCID
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_REVID_UID register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_REVID_UID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_REVID_UID register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_REVID_UID_MSB        7
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_QOS_REVID_UID register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_REVID_UID_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_QOS_REVID_UID register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_REVID_UID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_QOS_REVID_UID register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_REVID_UID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_MPU_EMAC0_M_QOS_REVID_UID register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_REVID_UID_RESET      0x0
/* Extracts the ALT_NOC_MPU_EMAC0_M_QOS_REVID_UID field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_REVID_UID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_MPU_EMAC0_M_QOS_REVID_UID register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_REVID_UID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : FLEXNOCID
 * 
 * Field containing the build revision of the software used to generate the IP HDL
 * code.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_REVID_FLEXNOCID_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_REVID_FLEXNOCID_MSB        31
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_QOS_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_REVID_FLEXNOCID_WIDTH      24
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_QOS_REVID_FLEXNOCID register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_REVID_FLEXNOCID_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_QOS_REVID_FLEXNOCID register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_REVID_FLEXNOCID_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_MPU_EMAC0_M_QOS_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_REVID_FLEXNOCID_RESET      0x129ff
/* Extracts the ALT_NOC_MPU_EMAC0_M_QOS_REVID_FLEXNOCID field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_REVID_FLEXNOCID_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_MPU_EMAC0_M_QOS_REVID_FLEXNOCID register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_REVID_FLEXNOCID_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_EMAC0_M_QOS_REVID.
 */
struct ALT_NOC_MPU_EMAC0_M_QOS_REVID_s
{
    const uint32_t  USERID    :  8;  /* ALT_NOC_MPU_EMAC0_M_QOS_REVID_UID */
    const uint32_t  FLEXNOCID : 24;  /* ALT_NOC_MPU_EMAC0_M_QOS_REVID_FLEXNOCID */
};

/* The typedef declaration for register ALT_NOC_MPU_EMAC0_M_QOS_REVID. */
typedef volatile struct ALT_NOC_MPU_EMAC0_M_QOS_REVID_s  ALT_NOC_MPU_EMAC0_M_QOS_REVID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_EMAC0_M_QOS_REVID register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_REVID_RESET       0x0129ff00
/* The byte offset of the ALT_NOC_MPU_EMAC0_M_QOS_REVID register from the beginning of the component. */
#define ALT_NOC_MPU_EMAC0_M_QOS_REVID_OFST        0x4

/*
 * Register : emac0_m_I_main_QosGenerator_Priority
 * 
 * Priority register.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                     
 * :--------|:-------|:--------|:---------------------------------
 *  [1:0]   | RW     | 0x0     | ALT_NOC_MPU_EMAC0_M_QOS_PRI_P0  
 *  [7:2]   | ???    | Unknown | *UNDEFINED*                     
 *  [9:8]   | RW     | 0x1     | ALT_NOC_MPU_EMAC0_M_QOS_PRI_P1  
 *  [30:10] | ???    | Unknown | *UNDEFINED*                     
 *  [31]    | R      | 0x1     | ALT_NOC_MPU_EMAC0_M_QOS_PRI_MARK
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_PRI_P0 register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_P0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_PRI_P0 register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_P0_MSB        1
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_QOS_PRI_P0 register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_P0_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_QOS_PRI_P0 register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_P0_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_QOS_PRI_P0 register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_P0_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_EMAC0_M_QOS_PRI_P0 register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_P0_RESET      0x0
/* Extracts the ALT_NOC_MPU_EMAC0_M_QOS_PRI_P0 field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_P0_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_EMAC0_M_QOS_PRI_P0 register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_P0_SET(value) (((value) << 0) & 0x00000003)

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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_PRI_P1 register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_P1_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_PRI_P1 register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_P1_MSB        9
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_QOS_PRI_P1 register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_P1_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_QOS_PRI_P1 register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_P1_SET_MSK    0x00000300
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_QOS_PRI_P1 register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_P1_CLR_MSK    0xfffffcff
/* The reset value of the ALT_NOC_MPU_EMAC0_M_QOS_PRI_P1 register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_P1_RESET      0x1
/* Extracts the ALT_NOC_MPU_EMAC0_M_QOS_PRI_P1 field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_P1_GET(value) (((value) & 0x00000300) >> 8)
/* Produces a ALT_NOC_MPU_EMAC0_M_QOS_PRI_P1 register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_P1_SET(value) (((value) << 8) & 0x00000300)

/*
 * Field : MARK
 * 
 * Backward compatibility marker when 0.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_PRI_MARK register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_MARK_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_PRI_MARK register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_MARK_MSB        31
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_QOS_PRI_MARK register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_MARK_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_QOS_PRI_MARK register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_MARK_SET_MSK    0x80000000
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_QOS_PRI_MARK register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_MARK_CLR_MSK    0x7fffffff
/* The reset value of the ALT_NOC_MPU_EMAC0_M_QOS_PRI_MARK register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_MARK_RESET      0x1
/* Extracts the ALT_NOC_MPU_EMAC0_M_QOS_PRI_MARK field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_MARK_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_NOC_MPU_EMAC0_M_QOS_PRI_MARK register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_MARK_SET(value) (((value) << 31) & 0x80000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_EMAC0_M_QOS_PRI.
 */
struct ALT_NOC_MPU_EMAC0_M_QOS_PRI_s
{
    uint32_t        P0   :  2;  /* ALT_NOC_MPU_EMAC0_M_QOS_PRI_P0 */
    uint32_t             :  6;  /* *UNDEFINED* */
    uint32_t        P1   :  2;  /* ALT_NOC_MPU_EMAC0_M_QOS_PRI_P1 */
    uint32_t             : 21;  /* *UNDEFINED* */
    const uint32_t  MARK :  1;  /* ALT_NOC_MPU_EMAC0_M_QOS_PRI_MARK */
};

/* The typedef declaration for register ALT_NOC_MPU_EMAC0_M_QOS_PRI. */
typedef volatile struct ALT_NOC_MPU_EMAC0_M_QOS_PRI_s  ALT_NOC_MPU_EMAC0_M_QOS_PRI_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_EMAC0_M_QOS_PRI register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_RESET       0x80000100
/* The byte offset of the ALT_NOC_MPU_EMAC0_M_QOS_PRI register from the beginning of the component. */
#define ALT_NOC_MPU_EMAC0_M_QOS_PRI_OFST        0x8

/*
 * Register : emac0_m_I_main_QosGenerator_Mode
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                    
 * :-------|:-------|:--------|:--------------------------------
 *  [1:0]  | RW     | 0x3     | ALT_NOC_MPU_EMAC0_M_QOS_MOD_MOD
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_MOD_MOD register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_MOD_MOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_MOD_MOD register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_MOD_MOD_MSB        1
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_QOS_MOD_MOD register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_MOD_MOD_WIDTH      2
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_QOS_MOD_MOD register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_MOD_MOD_SET_MSK    0x00000003
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_QOS_MOD_MOD register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_MOD_MOD_CLR_MSK    0xfffffffc
/* The reset value of the ALT_NOC_MPU_EMAC0_M_QOS_MOD_MOD register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_MOD_MOD_RESET      0x3
/* Extracts the ALT_NOC_MPU_EMAC0_M_QOS_MOD_MOD field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_MOD_MOD_GET(value) (((value) & 0x00000003) >> 0)
/* Produces a ALT_NOC_MPU_EMAC0_M_QOS_MOD_MOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_MOD_MOD_SET(value) (((value) << 0) & 0x00000003)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_EMAC0_M_QOS_MOD.
 */
struct ALT_NOC_MPU_EMAC0_M_QOS_MOD_s
{
    uint32_t  MODE :  2;  /* ALT_NOC_MPU_EMAC0_M_QOS_MOD_MOD */
    uint32_t       : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_EMAC0_M_QOS_MOD. */
typedef volatile struct ALT_NOC_MPU_EMAC0_M_QOS_MOD_s  ALT_NOC_MPU_EMAC0_M_QOS_MOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_EMAC0_M_QOS_MOD register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_MOD_RESET       0x00000003
/* The byte offset of the ALT_NOC_MPU_EMAC0_M_QOS_MOD register from the beginning of the component. */
#define ALT_NOC_MPU_EMAC0_M_QOS_MOD_OFST        0xc

/*
 * Register : emac0_m_I_main_QosGenerator_Bandwidth
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                            
 * :--------|:-------|:--------|:----------------------------------------
 *  [10:0]  | RW     | 0x100   | ALT_NOC_MPU_EMAC0_M_QOS_BWDTH_BANDWIDTH
 *  [31:11] | ???    | Unknown | *UNDEFINED*                            
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_BWDTH_BANDWIDTH register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_BWDTH_BANDWIDTH_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_BWDTH_BANDWIDTH register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_BWDTH_BANDWIDTH_MSB        10
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_QOS_BWDTH_BANDWIDTH register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_BWDTH_BANDWIDTH_WIDTH      11
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_QOS_BWDTH_BANDWIDTH register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_BWDTH_BANDWIDTH_SET_MSK    0x000007ff
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_QOS_BWDTH_BANDWIDTH register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_BWDTH_BANDWIDTH_CLR_MSK    0xfffff800
/* The reset value of the ALT_NOC_MPU_EMAC0_M_QOS_BWDTH_BANDWIDTH register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_BWDTH_BANDWIDTH_RESET      0x100
/* Extracts the ALT_NOC_MPU_EMAC0_M_QOS_BWDTH_BANDWIDTH field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_BWDTH_BANDWIDTH_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_NOC_MPU_EMAC0_M_QOS_BWDTH_BANDWIDTH register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_BWDTH_BANDWIDTH_SET(value) (((value) << 0) & 0x000007ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_EMAC0_M_QOS_BWDTH.
 */
struct ALT_NOC_MPU_EMAC0_M_QOS_BWDTH_s
{
    uint32_t  BANDWIDTH : 11;  /* ALT_NOC_MPU_EMAC0_M_QOS_BWDTH_BANDWIDTH */
    uint32_t            : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_EMAC0_M_QOS_BWDTH. */
typedef volatile struct ALT_NOC_MPU_EMAC0_M_QOS_BWDTH_s  ALT_NOC_MPU_EMAC0_M_QOS_BWDTH_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_EMAC0_M_QOS_BWDTH register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_BWDTH_RESET       0x00000100
/* The byte offset of the ALT_NOC_MPU_EMAC0_M_QOS_BWDTH register from the beginning of the component. */
#define ALT_NOC_MPU_EMAC0_M_QOS_BWDTH_OFST        0x10

/*
 * Register : emac0_m_I_main_QosGenerator_Saturation
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                           
 * :--------|:-------|:--------|:---------------------------------------
 *  [9:0]   | RW     | 0x4     | ALT_NOC_MPU_EMAC0_M_QOS_SAT_SATURATION
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_SAT_SATURATION register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_SAT_SATURATION_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_SAT_SATURATION register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_SAT_SATURATION_MSB        9
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_QOS_SAT_SATURATION register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_SAT_SATURATION_WIDTH      10
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_QOS_SAT_SATURATION register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_SAT_SATURATION_SET_MSK    0x000003ff
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_QOS_SAT_SATURATION register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_SAT_SATURATION_CLR_MSK    0xfffffc00
/* The reset value of the ALT_NOC_MPU_EMAC0_M_QOS_SAT_SATURATION register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_SAT_SATURATION_RESET      0x4
/* Extracts the ALT_NOC_MPU_EMAC0_M_QOS_SAT_SATURATION field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_SAT_SATURATION_GET(value) (((value) & 0x000003ff) >> 0)
/* Produces a ALT_NOC_MPU_EMAC0_M_QOS_SAT_SATURATION register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_SAT_SATURATION_SET(value) (((value) << 0) & 0x000003ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_EMAC0_M_QOS_SAT.
 */
struct ALT_NOC_MPU_EMAC0_M_QOS_SAT_s
{
    uint32_t  SATURATION : 10;  /* ALT_NOC_MPU_EMAC0_M_QOS_SAT_SATURATION */
    uint32_t             : 22;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_EMAC0_M_QOS_SAT. */
typedef volatile struct ALT_NOC_MPU_EMAC0_M_QOS_SAT_s  ALT_NOC_MPU_EMAC0_M_QOS_SAT_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_EMAC0_M_QOS_SAT register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_SAT_RESET       0x00000004
/* The byte offset of the ALT_NOC_MPU_EMAC0_M_QOS_SAT register from the beginning of the component. */
#define ALT_NOC_MPU_EMAC0_M_QOS_SAT_OFST        0x14

/*
 * Register : emac0_m_I_main_QosGenerator_ExtControl
 * 
 * External inputs control.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                               
 * :-------|:-------|:--------|:-------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_SOCKETQOSEN
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_EXTTHREN   
 *  [2]    | RW     | 0x0     | ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_INTCLKEN   
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_SOCKETQOSEN register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_SOCKETQOSEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_SOCKETQOSEN register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_SOCKETQOSEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_SOCKETQOSEN register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_SOCKETQOSEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_SOCKETQOSEN register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_SOCKETQOSEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_SOCKETQOSEN register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_SOCKETQOSEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_SOCKETQOSEN register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_SOCKETQOSEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_SOCKETQOSEN field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_SOCKETQOSEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_SOCKETQOSEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_SOCKETQOSEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : EXTTHREN
 * 
 * n/a
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_EXTTHREN register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_EXTTHREN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_EXTTHREN register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_EXTTHREN_MSB        1
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_EXTTHREN register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_EXTTHREN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_EXTTHREN register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_EXTTHREN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_EXTTHREN register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_EXTTHREN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_EXTTHREN register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_EXTTHREN_RESET      0x0
/* Extracts the ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_EXTTHREN field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_EXTTHREN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_EXTTHREN register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_EXTTHREN_SET(value) (((value) << 1) & 0x00000002)

/*
 * Field : INTCLKEN
 * 
 * n/a
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_INTCLKEN register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_INTCLKEN_LSB        2
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_INTCLKEN register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_INTCLKEN_MSB        2
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_INTCLKEN register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_INTCLKEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_INTCLKEN register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_INTCLKEN_SET_MSK    0x00000004
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_INTCLKEN register field value. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_INTCLKEN_CLR_MSK    0xfffffffb
/* The reset value of the ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_INTCLKEN register field. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_INTCLKEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_INTCLKEN field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_INTCLKEN_GET(value) (((value) & 0x00000004) >> 2)
/* Produces a ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_INTCLKEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_INTCLKEN_SET(value) (((value) << 2) & 0x00000004)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL.
 */
struct ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_s
{
    uint32_t  SOCKETQOSEN :  1;  /* ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_SOCKETQOSEN */
    uint32_t  EXTTHREN    :  1;  /* ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_EXTTHREN */
    uint32_t  INTCLKEN    :  1;  /* ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_INTCLKEN */
    uint32_t              : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL. */
typedef volatile struct ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_s  ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL register. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL register from the beginning of the component. */
#define ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_OFST        0x18

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_NOC_MPU_EMAC0_M_QOS.
 */
struct ALT_NOC_MPU_EMAC0_M_QOS_s
{
    ALT_NOC_MPU_EMAC0_M_QOS_COREID_t  emac0_m_I_main_QosGenerator_Id_CoreId;      /* ALT_NOC_MPU_EMAC0_M_QOS_COREID */
    ALT_NOC_MPU_EMAC0_M_QOS_REVID_t   emac0_m_I_main_QosGenerator_Id_RevisionId;  /* ALT_NOC_MPU_EMAC0_M_QOS_REVID */
    ALT_NOC_MPU_EMAC0_M_QOS_PRI_t     emac0_m_I_main_QosGenerator_Priority;       /* ALT_NOC_MPU_EMAC0_M_QOS_PRI */
    ALT_NOC_MPU_EMAC0_M_QOS_MOD_t     emac0_m_I_main_QosGenerator_Mode;           /* ALT_NOC_MPU_EMAC0_M_QOS_MOD */
    ALT_NOC_MPU_EMAC0_M_QOS_BWDTH_t   emac0_m_I_main_QosGenerator_Bandwidth;      /* ALT_NOC_MPU_EMAC0_M_QOS_BWDTH */
    ALT_NOC_MPU_EMAC0_M_QOS_SAT_t     emac0_m_I_main_QosGenerator_Saturation;     /* ALT_NOC_MPU_EMAC0_M_QOS_SAT */
    ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL_t  emac0_m_I_main_QosGenerator_ExtControl;     /* ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL */
    volatile uint32_t                 _pad_0x1c_0x80[25];                         /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_MPU_EMAC0_M_QOS. */
typedef volatile struct ALT_NOC_MPU_EMAC0_M_QOS_s  ALT_NOC_MPU_EMAC0_M_QOS_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_MPU_EMAC0_M_QOS. */
struct ALT_NOC_MPU_EMAC0_M_QOS_raw_s
{
    volatile uint32_t  emac0_m_I_main_QosGenerator_Id_CoreId;      /* ALT_NOC_MPU_EMAC0_M_QOS_COREID */
    volatile uint32_t  emac0_m_I_main_QosGenerator_Id_RevisionId;  /* ALT_NOC_MPU_EMAC0_M_QOS_REVID */
    volatile uint32_t  emac0_m_I_main_QosGenerator_Priority;       /* ALT_NOC_MPU_EMAC0_M_QOS_PRI */
    volatile uint32_t  emac0_m_I_main_QosGenerator_Mode;           /* ALT_NOC_MPU_EMAC0_M_QOS_MOD */
    volatile uint32_t  emac0_m_I_main_QosGenerator_Bandwidth;      /* ALT_NOC_MPU_EMAC0_M_QOS_BWDTH */
    volatile uint32_t  emac0_m_I_main_QosGenerator_Saturation;     /* ALT_NOC_MPU_EMAC0_M_QOS_SAT */
    volatile uint32_t  emac0_m_I_main_QosGenerator_ExtControl;     /* ALT_NOC_MPU_EMAC0_M_QOS_EXTCTL */
    uint32_t           _pad_0x1c_0x80[25];                         /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_MPU_EMAC0_M_QOS. */
typedef volatile struct ALT_NOC_MPU_EMAC0_M_QOS_raw_s  ALT_NOC_MPU_EMAC0_M_QOS_raw_t;
#endif  /* __ASSEMBLY__ */


/*
 * Component : ALT_NOC_MPU_EMAC0_M_XACTSTATFLT
 * 
 */
/*
 * Register : emac0_m_I_main_TransactionStatFilter_Id_CoreId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset    | Description                                    
 * :-------|:-------|:---------|:------------------------------------------------
 *  [7:0]  | R      | 0x9      | ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_TYPEID  
 *  [31:8] | R      | 0xc284d3 | ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_CHECKSUM
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_TYPEID register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_TYPEID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_TYPEID register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_TYPEID_MSB        7
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_TYPEID register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_TYPEID_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_TYPEID register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_TYPEID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_TYPEID register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_TYPEID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_TYPEID register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_TYPEID_RESET      0x9
/* Extracts the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_TYPEID field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_TYPEID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_TYPEID register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_TYPEID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : CORECHECKSUM
 * 
 * Field containing a checksum of the parameters of the IP.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_CHECKSUM_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_CHECKSUM_MSB        31
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_CHECKSUM_WIDTH      24
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_CHECKSUM register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_CHECKSUM_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_CHECKSUM register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_CHECKSUM_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_CHECKSUM register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_CHECKSUM_RESET      0xc284d3
/* Extracts the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_CHECKSUM field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_CHECKSUM_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_CHECKSUM register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_CHECKSUM_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID.
 */
struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_s
{
    const uint32_t  CORETYPEID   :  8;  /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_TYPEID */
    const uint32_t  CORECHECKSUM : 24;  /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_CHECKSUM */
};

/* The typedef declaration for register ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID. */
typedef volatile struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_s  ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_RESET       0xc284d309
/* The byte offset of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID register from the beginning of the component. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_OFST        0x0

/*
 * Register : emac0_m_I_main_TransactionStatFilter_Id_RevisionId
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                    
 * :-------|:-------|:--------|:------------------------------------------------
 *  [7:0]  | R      | 0x0     | ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_UID      
 *  [31:8] | R      | 0x129ff | ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_FLEXNOCID
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
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_UID register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_UID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_UID register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_UID_MSB        7
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_UID register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_UID_WIDTH      8
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_UID register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_UID_SET_MSK    0x000000ff
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_UID register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_UID_CLR_MSK    0xffffff00
/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_UID register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_UID_RESET      0x0
/* Extracts the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_UID field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_UID_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_UID register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_UID_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : FLEXNOCID
 * 
 * Field containing the build revision of the software used to generate the IP HDL
 * code.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_FLEXNOCID_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_FLEXNOCID_MSB        31
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_FLEXNOCID_WIDTH      24
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_FLEXNOCID register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_FLEXNOCID_SET_MSK    0xffffff00
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_FLEXNOCID register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_FLEXNOCID_CLR_MSK    0x000000ff
/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_FLEXNOCID register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_FLEXNOCID_RESET      0x129ff
/* Extracts the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_FLEXNOCID field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_FLEXNOCID_GET(value) (((value) & 0xffffff00) >> 8)
/* Produces a ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_FLEXNOCID register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_FLEXNOCID_SET(value) (((value) << 8) & 0xffffff00)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID.
 */
struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_s
{
    const uint32_t  USERID    :  8;  /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_UID */
    const uint32_t  FLEXNOCID : 24;  /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_FLEXNOCID */
};

/* The typedef declaration for register ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID. */
typedef volatile struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_s  ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_RESET       0x0129ff00
/* The byte offset of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID register from the beginning of the component. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_OFST        0x4

/*
 * Register : emac0_m_I_main_TransactionStatFilter_Mode
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                            
 * :-------|:-------|:--------|:----------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD_MOD
 *  [31:1] | ???    | Unknown | *UNDEFINED*                            
 * 
 */
/*
 * Field : MODE
 * 
 * Register Mode is a 1-bit register that sets the filtering mode as follows:
 * handshake Mode = 0 or latency Mode = 1.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD_MOD register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD_MOD_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD_MOD register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD_MOD_MSB        0
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD_MOD register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD_MOD_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD_MOD register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD_MOD_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD_MOD register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD_MOD_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD_MOD register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD_MOD_RESET      0x0
/* Extracts the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD_MOD field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD_MOD_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD_MOD register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD_MOD_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD.
 */
struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD_s
{
    uint32_t  MODE :  1;  /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD_MOD */
    uint32_t       : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD. */
typedef volatile struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD_s  ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD register from the beginning of the component. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD_OFST        0x8

/*
 * Register : emac0_m_I_main_TransactionStatFilter_AddrBase_Low
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description                                              
 * :-------|:-------|:------|:----------------------------------------------------------
 *  [31:0] | RW     | 0x0   | ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW_ADDRBASE_LOW
 * 
 */
/*
 * Field : ADDRBASE_LOW
 * 
 * Address base LSB register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW_ADDRBASE_LOW_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW_ADDRBASE_LOW_MSB        31
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW_ADDRBASE_LOW_WIDTH      32
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW_ADDRBASE_LOW register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW_ADDRBASE_LOW_SET_MSK    0xffffffff
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW_ADDRBASE_LOW register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW_ADDRBASE_LOW_CLR_MSK    0x00000000
/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW_ADDRBASE_LOW register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW_ADDRBASE_LOW_RESET      0x0
/* Extracts the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW_ADDRBASE_LOW field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW_ADDRBASE_LOW_GET(value) (((value) & 0xffffffff) >> 0)
/* Produces a ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW_ADDRBASE_LOW register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW_ADDRBASE_LOW_SET(value) (((value) << 0) & 0xffffffff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW.
 */
struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW_s
{
    uint32_t  ADDRBASE_LOW : 32;  /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW_ADDRBASE_LOW */
};

/* The typedef declaration for register ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW. */
typedef volatile struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW_s  ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW register from the beginning of the component. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW_OFST        0xc

/*
 * Register : emac0_m_I_main_TransactionStatFilter_AddrBase_High
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                
 * :-------|:-------|:--------|:------------------------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH_ADDRBASE_HIGH
 *  [31:1] | ???    | Unknown | *UNDEFINED*                                                
 * 
 */
/*
 * Field : ADDRBASE_HIGH
 * 
 * Address base MSB register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH_ADDRBASE_HIGH register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH_ADDRBASE_HIGH_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH_ADDRBASE_HIGH register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH_ADDRBASE_HIGH_MSB        0
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH_ADDRBASE_HIGH register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH_ADDRBASE_HIGH_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH_ADDRBASE_HIGH register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH_ADDRBASE_HIGH_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH_ADDRBASE_HIGH register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH_ADDRBASE_HIGH_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH_ADDRBASE_HIGH register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH_ADDRBASE_HIGH_RESET      0x0
/* Extracts the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH_ADDRBASE_HIGH field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH_ADDRBASE_HIGH_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH_ADDRBASE_HIGH register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH_ADDRBASE_HIGH_SET(value) (((value) << 0) & 0x00000001)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH.
 */
struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH_s
{
    uint32_t  ADDRBASE_HIGH :  1;  /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH_ADDRBASE_HIGH */
    uint32_t                : 31;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH. */
typedef volatile struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH_s  ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH register from the beginning of the component. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH_OFST        0x10

/*
 * Register : emac0_m_I_main_TransactionStatFilter_AddrWindowSize
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                                  
 * :-------|:-------|:--------|:--------------------------------------------------------------
 *  [5:0]  | RW     | 0x0     | ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE_ADDRWINDOWSIZE
 *  [31:6] | ???    | Unknown | *UNDEFINED*                                                  
 * 
 */
/*
 * Field : ADDRWINDOWSIZE
 * 
 * Register AddrWindowSize contains the encoded address mask used to filter
 * packets: the effective Mask value is equal to ~(2**AddrWindowSize - 1). A packet
 * is a candidate when ReqInfo.Addr & AddrMask = AddrBase & AddrMask.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE_ADDRWINDOWSIZE register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE_ADDRWINDOWSIZE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE_ADDRWINDOWSIZE register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE_ADDRWINDOWSIZE_MSB        5
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE_ADDRWINDOWSIZE register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE_ADDRWINDOWSIZE_WIDTH      6
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE_ADDRWINDOWSIZE register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE_ADDRWINDOWSIZE_SET_MSK    0x0000003f
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE_ADDRWINDOWSIZE register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE_ADDRWINDOWSIZE_CLR_MSK    0xffffffc0
/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE_ADDRWINDOWSIZE register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE_ADDRWINDOWSIZE_RESET      0x0
/* Extracts the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE_ADDRWINDOWSIZE field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE_ADDRWINDOWSIZE_GET(value) (((value) & 0x0000003f) >> 0)
/* Produces a ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE_ADDRWINDOWSIZE register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE_ADDRWINDOWSIZE_SET(value) (((value) << 0) & 0x0000003f)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE.
 */
struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE_s
{
    uint32_t  ADDRWINDOWSIZE :  6;  /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE_ADDRWINDOWSIZE */
    uint32_t                 : 26;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE. */
typedef volatile struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE_s  ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE register from the beginning of the component. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE_OFST        0x14

/*
 * Register : emac0_m_I_main_TransactionStatFilter_Opcode
 * 
 * This register selects candidate packets based on packet opcodes. (0 disables the
 * filter):
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                
 * :-------|:-------|:--------|:--------------------------------------------
 *  [0]    | RW     | 0x0     | ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_RDEN
 *  [1]    | RW     | 0x0     | ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_WREN
 *  [31:2] | ???    | Unknown | *UNDEFINED*                                
 * 
 */
/*
 * Field : RDEN
 * 
 * When set to 1, selects RD requests.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_RDEN_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_RDEN_MSB        0
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_RDEN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_RDEN register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_RDEN_SET_MSK    0x00000001
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_RDEN register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_RDEN_CLR_MSK    0xfffffffe
/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_RDEN register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_RDEN_RESET      0x0
/* Extracts the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_RDEN field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_RDEN_GET(value) (((value) & 0x00000001) >> 0)
/* Produces a ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_RDEN register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_RDEN_SET(value) (((value) << 0) & 0x00000001)

/*
 * Field : WREN
 * 
 * When set to 1, selects WR requests.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_WREN register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_WREN_LSB        1
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_WREN register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_WREN_MSB        1
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_WREN register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_WREN_WIDTH      1
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_WREN register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_WREN_SET_MSK    0x00000002
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_WREN register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_WREN_CLR_MSK    0xfffffffd
/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_WREN register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_WREN_RESET      0x0
/* Extracts the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_WREN field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_WREN_GET(value) (((value) & 0x00000002) >> 1)
/* Produces a ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_WREN register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_WREN_SET(value) (((value) << 1) & 0x00000002)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE.
 */
struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_s
{
    uint32_t  RDEN :  1;  /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_RDEN */
    uint32_t  WREN :  1;  /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_WREN */
    uint32_t       : 30;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE. */
typedef volatile struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_s  ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE register from the beginning of the component. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_OFST        0x20

/*
 * Register : emac0_m_I_main_TransactionStatFilter_UserBase
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                      
 * :--------|:-------|:--------|:--------------------------------------------------
 *  [10:0]  | RW     | 0x0     | ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE_USERBASE
 *  [31:11] | ???    | Unknown | *UNDEFINED*                                      
 * 
 */
/*
 * Field : USERBASE
 * 
 * This register contains the User base used to filter requests.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE_USERBASE register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE_USERBASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE_USERBASE register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE_USERBASE_MSB        10
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE_USERBASE register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE_USERBASE_WIDTH      11
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE_USERBASE register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE_USERBASE_SET_MSK    0x000007ff
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE_USERBASE register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE_USERBASE_CLR_MSK    0xfffff800
/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE_USERBASE register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE_USERBASE_RESET      0x0
/* Extracts the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE_USERBASE field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE_USERBASE_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE_USERBASE register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE_USERBASE_SET(value) (((value) << 0) & 0x000007ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE.
 */
struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE_s
{
    uint32_t  USERBASE : 11;  /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE_USERBASE */
    uint32_t           : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE. */
typedef volatile struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE_s  ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE register from the beginning of the component. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE_OFST        0x24

/*
 * Register : emac0_m_I_main_TransactionStatFilter_UserMask
 * 
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset   | Description                                    
 * :--------|:-------|:--------|:------------------------------------------------
 *  [10:0]  | RW     | 0x0     | ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK_USERMSK
 *  [31:11] | ???    | Unknown | *UNDEFINED*                                    
 * 
 */
/*
 * Field : USERMASK
 * 
 * This register contains the User mask used to filter requests.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK_USERMSK register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK_USERMSK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK_USERMSK register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK_USERMSK_MSB        10
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK_USERMSK register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK_USERMSK_WIDTH      11
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK_USERMSK register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK_USERMSK_SET_MSK    0x000007ff
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK_USERMSK register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK_USERMSK_CLR_MSK    0xfffff800
/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK_USERMSK register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK_USERMSK_RESET      0x0
/* Extracts the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK_USERMSK field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK_USERMSK_GET(value) (((value) & 0x000007ff) >> 0)
/* Produces a ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK_USERMSK register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK_USERMSK_SET(value) (((value) << 0) & 0x000007ff)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK.
 */
struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK_s
{
    uint32_t  USERMASK : 11;  /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK_USERMSK */
    uint32_t           : 21;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK. */
typedef volatile struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK_s  ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK register from the beginning of the component. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK_OFST        0x28

/*
 * Register : emac0_m_I_main_TransactionStatFilter_SecurityBase
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                              
 * :-------|:-------|:--------|:----------------------------------------------------------
 *  [2:0]  | RW     | 0x0     | ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE_SECURITYBASE
 *  [31:3] | ???    | Unknown | *UNDEFINED*                                              
 * 
 */
/*
 * Field : SECURITYBASE
 * 
 * This register contains the Security base used to filter requests.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE_SECURITYBASE register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE_SECURITYBASE_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE_SECURITYBASE register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE_SECURITYBASE_MSB        2
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE_SECURITYBASE register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE_SECURITYBASE_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE_SECURITYBASE register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE_SECURITYBASE_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE_SECURITYBASE register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE_SECURITYBASE_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE_SECURITYBASE register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE_SECURITYBASE_RESET      0x0
/* Extracts the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE_SECURITYBASE field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE_SECURITYBASE_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE_SECURITYBASE register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE_SECURITYBASE_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE.
 */
struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE_s
{
    uint32_t  SECURITYBASE :  3;  /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE_SECURITYBASE */
    uint32_t               : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE. */
typedef volatile struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE_s  ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE register from the beginning of the component. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE_OFST        0x2c

/*
 * Register : emac0_m_I_main_TransactionStatFilter_SecurityMask
 * 
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset   | Description                                            
 * :-------|:-------|:--------|:--------------------------------------------------------
 *  [2:0]  | RW     | 0x0     | ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK_SECURITYMSK
 *  [31:3] | ???    | Unknown | *UNDEFINED*                                            
 * 
 */
/*
 * Field : SECURITYMASK
 * 
 * This register contains the Security mask used to filter requests.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK_SECURITYMSK register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK_SECURITYMSK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK_SECURITYMSK register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK_SECURITYMSK_MSB        2
/* The width in bits of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK_SECURITYMSK register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK_SECURITYMSK_WIDTH      3
/* The mask used to set the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK_SECURITYMSK register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK_SECURITYMSK_SET_MSK    0x00000007
/* The mask used to clear the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK_SECURITYMSK register field value. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK_SECURITYMSK_CLR_MSK    0xfffffff8
/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK_SECURITYMSK register field. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK_SECURITYMSK_RESET      0x0
/* Extracts the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK_SECURITYMSK field value from a register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK_SECURITYMSK_GET(value) (((value) & 0x00000007) >> 0)
/* Produces a ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK_SECURITYMSK register field value suitable for setting the register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK_SECURITYMSK_SET(value) (((value) << 0) & 0x00000007)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK.
 */
struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK_s
{
    uint32_t  SECURITYMASK :  3;  /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK_SECURITYMSK */
    uint32_t               : 29;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK. */
typedef volatile struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK_s  ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK_t;
#endif  /* __ASSEMBLY__ */

/* The reset value of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK register. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK_RESET       0x00000000
/* The byte offset of the ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK register from the beginning of the component. */
#define ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK_OFST        0x30

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register group ALT_NOC_MPU_EMAC0_M_XACTSTATFLT.
 */
struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_s
{
    ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID_t          emac0_m_I_main_TransactionStatFilter_Id_CoreId;       /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID */
    ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID_t           emac0_m_I_main_TransactionStatFilter_Id_RevisionId;   /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID */
    ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD_t             emac0_m_I_main_TransactionStatFilter_Mode;            /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD */
    ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW_t    emac0_m_I_main_TransactionStatFilter_AddrBase_Low;    /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW */
    ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH_t   emac0_m_I_main_TransactionStatFilter_AddrBase_High;   /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH */
    ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE_t  emac0_m_I_main_TransactionStatFilter_AddrWindowSize;  /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE */
    volatile uint32_t                                 _pad_0x18_0x1f[2];                                    /* *UNDEFINED* */
    ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE_t          emac0_m_I_main_TransactionStatFilter_Opcode;          /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE */
    ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE_t        emac0_m_I_main_TransactionStatFilter_UserBase;        /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE */
    ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK_t         emac0_m_I_main_TransactionStatFilter_UserMask;        /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK */
    ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE_t    emac0_m_I_main_TransactionStatFilter_SecurityBase;    /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE */
    ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK_t     emac0_m_I_main_TransactionStatFilter_SecurityMask;    /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK */
    volatile uint32_t                                 _pad_0x34_0x80[19];                                   /* *UNDEFINED* */
};

/* The typedef declaration for register group ALT_NOC_MPU_EMAC0_M_XACTSTATFLT. */
typedef volatile struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_s  ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_t;
/* The struct declaration for the raw register contents of register group ALT_NOC_MPU_EMAC0_M_XACTSTATFLT. */
struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_raw_s
{
    volatile uint32_t  emac0_m_I_main_TransactionStatFilter_Id_CoreId;       /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_COREID */
    volatile uint32_t  emac0_m_I_main_TransactionStatFilter_Id_RevisionId;   /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_REVID */
    volatile uint32_t  emac0_m_I_main_TransactionStatFilter_Mode;            /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_MOD */
    volatile uint32_t  emac0_m_I_main_TransactionStatFilter_AddrBase_Low;    /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_LOW */
    volatile uint32_t  emac0_m_I_main_TransactionStatFilter_AddrBase_High;   /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRBASE_HIGH */
    volatile uint32_t  emac0_m_I_main_TransactionStatFilter_AddrWindowSize;  /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_ADDRWINDOWSIZE */
    uint32_t           _pad_0x18_0x1f[2];                                    /* *UNDEFINED* */
    volatile uint32_t  emac0_m_I_main_TransactionStatFilter_Opcode;          /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_OPCODE */
    volatile uint32_t  emac0_m_I_main_TransactionStatFilter_UserBase;        /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERBASE */
    volatile uint32_t  emac0_m_I_main_TransactionStatFilter_UserMask;        /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_USERMSK */
    volatile uint32_t  emac0_m_I_main_TransactionStatFilter_SecurityBase;    /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYBASE */
    volatile uint32_t  emac0_m_I_main_TransactionStatFilter_SecurityMask;    /* ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_SECURITYMSK */
    uint32_t           _pad_0x34_0x80[19];                                   /* *UNDEFINED* */
};

/* The typedef declaration for the raw register contents of register group ALT_NOC_MPU_EMAC0_M_XACTSTATFLT. */
typedef volatile struct ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_raw_s  ALT_NOC_MPU_EMAC0_M_XACTSTATFLT_raw_t;
#endif  /* __ASSEMBLY__ */


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALT_SOCAL_NOC_MPU_EMAC0_H__ */

