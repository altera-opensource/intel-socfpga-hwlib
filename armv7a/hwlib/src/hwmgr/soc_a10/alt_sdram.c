/******************************************************************************
*
* Copyright 2016 Altera Corporation. All Rights Reserved.
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

#include <alt_sdram.h>
#include <socal/socal.h>
#include <socal/alt_noc_mpu_m0_main_qos.h>
#include <socal/alt_noc_fw_l4_per_scr.h>

ALT_STATUS_CODE alt_sdr_port_qos_set(ALT_SDR_PORT_t port, ALT_SDR_QOS_INFO_t *qos)
{
    /* The memory format is the same for all QOS registers */
    ALT_NOC_MPU_M0_MAIN_QOS_raw_t *pQOS;

    if(port > ALT_SDR_PORT_FPGA2SDRAM2_128 || !qos)
        return ALT_E_BAD_ARG;

    pQOS = ALT_NOC_MPU_M0_MAIN_QOS_ADDR;

    pQOS[port].mpu_m0_I_main_QosGenerator_Priority = 
             ALT_NOC_MPU_MAIN_QOS_PRI_P0_SET(qos->ReadPriority) |
             ALT_NOC_MPU_MAIN_QOS_PRI_P1_SET(qos->WritePriority);
    pQOS[port].mpu_m0_I_main_QosGenerator_Mode =
             ALT_NOC_MPU_MAIN_QOS_MOD_MOD_SET(qos->Mode);
    pQOS[port].mpu_m0_I_main_QosGenerator_Bandwidth =
             ALT_NOC_MPU_MAIN_QOS_BWDTH_BANDWIDTH_SET(qos->Bandwidth);
    pQOS[port].mpu_m0_I_main_QosGenerator_Saturation =
             ALT_NOC_MPU_MAIN_QOS_SAT_SATURATION_SET(qos->Saturation);
    pQOS[port].mpu_m0_I_main_QosGenerator_ExtControl =
             ALT_NOC_MPU_MAIN_QOS_EXTCTL_SOCKETQOSEN_SET(qos->Enabled) |
             ALT_NOC_MPU_MAIN_QOS_EXTCTL_EXTTHREN_SET(qos->ExThrEn) |
             ALT_NOC_MPU_MAIN_QOS_EXTCTL_INTCLKEN_SET(qos->ClkEn);

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_sdr_port_qos_get(ALT_SDR_PORT_t port, ALT_SDR_QOS_INFO_t *qos)
{
    /* The memory format is the same for all QOS registers */
    ALT_NOC_MPU_M0_MAIN_QOS_raw_t *pQOS;
    uint32_t temp;

    if(port > ALT_SDR_PORT_FPGA2SDRAM2_128 || !qos)
        return ALT_E_BAD_ARG;

    pQOS = ALT_NOC_MPU_M0_MAIN_QOS_ADDR;

    temp = pQOS[port].mpu_m0_I_main_QosGenerator_Priority;
    qos->ReadPriority = ALT_NOC_MPU_MAIN_QOS_PRI_P0_GET(temp);
    qos->WritePriority = ALT_NOC_MPU_MAIN_QOS_PRI_P1_GET(temp);

    temp = pQOS[port].mpu_m0_I_main_QosGenerator_Mode;
    qos->Mode = (ALT_SDR_MODE_t) ALT_NOC_MPU_MAIN_QOS_MOD_MOD_GET(temp);

    pQOS[port].mpu_m0_I_main_QosGenerator_Bandwidth;
    qos->Bandwidth = ALT_NOC_MPU_MAIN_QOS_BWDTH_BANDWIDTH_GET(temp);

    pQOS[port].mpu_m0_I_main_QosGenerator_Saturation;
    qos->Saturation = ALT_NOC_MPU_MAIN_QOS_SAT_SATURATION_GET(temp);

    pQOS[port].mpu_m0_I_main_QosGenerator_ExtControl;
    qos->Enabled = ALT_NOC_MPU_MAIN_QOS_EXTCTL_SOCKETQOSEN_GET(temp);
    qos->ExThrEn = ALT_NOC_MPU_MAIN_QOS_EXTCTL_EXTTHREN_GET(temp);
    qos->ClkEn = ALT_NOC_MPU_MAIN_QOS_EXTCTL_INTCLKEN_GET(temp);

    return ALT_E_SUCCESS;
}


/*  Firewall API */

ALT_STATUS_CODE alt_sdr_firewall_set(ALT_SDR_MEM_TARGET_t target, ALT_SDR_FIREWALL_ACCESS_t *access)
{
    ALT_NOC_FW_L4_PER_SCR_NAND_REG_t *pRegs = ALT_NOC_FW_L4_PER_SCR_ADDR;

    if( target > ALT_SDR_MEM_L4_QOS_CSR || !access)
        return ALT_E_BAD_ARG;

    alt_write_word(&pRegs[target],
                  ALT_NOC_FW_L4_PER_SCR_NAND_REG_MPU_M0_SET(access->MPU_M0_Allow_NS_Access) |
                  ALT_NOC_FW_L4_PER_SCR_NAND_REG_DMA_SET(access->DMA_Allow_NS_Access) | 
                  ALT_NOC_FW_L4_PER_SCR_NAND_REG_F2H_SET(access->FPGA2SOC_Allow_NS_Access) |
                  ALT_NOC_FW_L4_PER_SCR_NAND_REG_AHB_AP_SET(access->AHB_AP_Allow_NS_Access));

    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_sdr_firewall_get(ALT_SDR_MEM_TARGET_t target, ALT_SDR_FIREWALL_ACCESS_t *access)
{
    uint32_t temp;
    ALT_NOC_FW_L4_PER_SCR_NAND_REG_t *pRegs = ALT_NOC_FW_L4_PER_SCR_ADDR;

    if( target > ALT_SDR_MEM_L4_QOS_CSR || !access)
        return ALT_E_BAD_ARG;

    temp = alt_read_word(&pRegs[target]);
    access->MPU_M0_Allow_NS_Access = ALT_NOC_FW_L4_PER_SCR_NAND_REG_MPU_M0_GET(temp);
    access->DMA_Allow_NS_Access    = ALT_NOC_FW_L4_PER_SCR_NAND_REG_DMA_GET(temp);
    access->FPGA2SOC_Allow_NS_Access = ALT_NOC_FW_L4_PER_SCR_NAND_REG_F2H_GET(temp);
    access->AHB_AP_Allow_NS_Access = ALT_NOC_FW_L4_PER_SCR_NAND_REG_AHB_AP_GET(temp);

    return ALT_E_SUCCESS;

}

