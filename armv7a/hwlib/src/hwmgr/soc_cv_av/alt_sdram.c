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
#include <socal/hps.h>
#include <socal/socal.h>
#include <socal/alt_sdr.h>

#define WEIGHT_SIZE   5
#define WEIGHT_MASK   0x1f   /* 5 1's */
#define PRIORITY_SIZE 3
#define PRIORITY_MASK 0x7

ALT_STATUS_CODE alt_sdr_priority_set(ALT_SDR_PORT_t port, uint8_t priority, uint8_t weight)
{
    ALT_STATUS_CODE retVal = ALT_E_SUCCESS;
    uint32_t currentEn, priorities, newVal, newMask, weights0, weights1, portCount;
    uint32_t temp_priority;
    uint32_t totalWeights[ALT_SDR_NUM_PRIORITIES];
    ALT_SDR_CTL_t *pCtl = ALT_SDR_CTL_ADDR;
    uint32_t *pweights = (uint32_t *) &pCtl->ctrlgrp_mpweight.mpweight_0_4;

    if((port > ALT_SDR_NUM_PORTS) ||
       (priority >= ALT_SDR_NUM_PRIORITIES) ||
       (weight > 31))
        return ALT_E_BAD_ARG;

    currentEn = pCtl->qospriorityen.priorityen;

    /* Set weight */

    weights0 = alt_read_word(&pweights[0]);

    /* Ports 0-5 on register 0, port 6 split between register 0 and 1 */
    if(port <= 6)
    {
        newVal = weight << (port * WEIGHT_SIZE);
        newMask = WEIGHT_MASK << (port * WEIGHT_SIZE);
        if((weights0 & newMask) != newVal)
            pCtl->ctrlgrp_mpweight.mpweight_0_4.staticweight_31_0 = weights0 = (weights0 & ~newMask) | newVal;
    }

    weights1 = alt_read_word(&pweights[1]);

    /* Port 6 split between register 0 and 1, ports 7-9 on register 1 */
    if(port >= 6)
    {
        if(port == 6)
        {
          newVal = weight >> 2;
          newMask = WEIGHT_MASK >> 2;
        }
        else
        {
          newVal = weight << ((port * WEIGHT_SIZE) - 32);
          newMask = WEIGHT_MASK << ((port * WEIGHT_SIZE) - 32);
        }
        weights1 = (weights1 & ~newMask) | newVal;
    }

    /* Set Priority */

    priorities = pCtl->mppriority.userpriority;
    newVal = priority << (port * PRIORITY_SIZE);
    newMask = (PRIORITY_MASK << port * PRIORITY_SIZE);

    if((priorities & newMask) != newVal)
        pCtl->mppriority.userpriority = priorities = (priorities & ~newMask) | newVal;

    /* Calculate sum of weights */
    for( portCount=0; portCount < ALT_SDR_NUM_PRIORITIES; portCount++)
        totalWeights[portCount] = 0;

    for( portCount=0; portCount < ALT_SDR_NUM_PORTS; portCount++)
    {
        if(currentEn & (1 << portCount) || port == portCount)
        {
            temp_priority = PRIORITY_MASK & (priorities >> (portCount * PRIORITY_SIZE));
            if(portCount < 6)         /* Ports 0-5 - Register 0 */
                totalWeights[temp_priority] += WEIGHT_MASK & (weights0 >> (portCount * WEIGHT_SIZE)); 
            else if(portCount == 6)   /* Port 6 - split between 2 registers*/
                totalWeights[temp_priority] += WEIGHT_MASK & ((weights0 >> 30) | ( weights1 << 2));
            else                      /* Ports 7- 9 - Register 1 */
                totalWeights[temp_priority] += WEIGHT_MASK & (weights1 >> (portCount * WEIGHT_SIZE - 32));
        }
    }

    /* Cap sum of weights */
    for( temp_priority=0; temp_priority < ALT_SDR_NUM_PRIORITIES; temp_priority++)
        if( totalWeights[temp_priority] > ALT_SDR_MAX_PRIORITY_WEIGHT)
        {
            totalWeights[temp_priority] = ALT_SDR_MAX_PRIORITY_WEIGHT;
            retVal = ALT_E_PRIORITY_WEIGHT_TOO_HIGH;
        }

    /* Set sum of weights */
    newVal = (weights1 & ALT_SDR_CTL_MPWT_MPWEIGHT_1_4_STATICWEIGHT_49_32_SET_MSK)
           | (totalWeights[0] << ALT_SDR_CTL_MPWT_MPWEIGHT_1_4_SUMOFWEIGHTS_13_0_LSB)
           | (totalWeights[1] << (ALT_SDR_CTL_MPWT_MPWEIGHT_1_4_SUMOFWEIGHTS_13_0_LSB + 8));

    alt_write_word(&pweights[1], newVal);

    newVal = (totalWeights[1] >> 6) /* First 6 bits were set to pCtl->ctrlgrp_mpweight.mpweight_1_4 */
           | (totalWeights[2] << 2)
           | (totalWeights[3] << 10)
           | (totalWeights[4] << 18)
           | (totalWeights[5] << 26);
    
    pCtl->ctrlgrp_mpweight.mpweight_2_4.sumofweights_45_14 = newVal;

    newVal = (totalWeights[5] >> 6) /* First 6 bits were set to pCtl->ctrlgrp_mpweight.mpweight_2_4 */
           | (totalWeights[6] << 2)
           | (totalWeights[7] << 10);
    
    pCtl->ctrlgrp_mpweight.mpweight_3_4.sumofweights_63_46 = newVal;
   
    /* Now that weight/priority is set, we can Enable */
    if((currentEn & (1 << port)) == 0)
        pCtl->qospriorityen.priorityen = currentEn | ( 1 << port);

    return retVal;
}

ALT_STATUS_CODE alt_sdr_priority_get(ALT_SDR_PORT_t port, bool *enabled, uint8_t *priority, uint8_t *weight)
{
    ALT_SDR_CTL_t *pCtl = ALT_SDR_CTL_ADDR;
    uint32_t *pweights = (uint32_t *) &pCtl->ctrlgrp_mpweight.mpweight_0_4;

    if(port > ALT_SDR_NUM_PORTS || (priority == NULL) || (weight == NULL))
        return ALT_E_BAD_ARG;

    *enabled = ((pCtl->qospriorityen.priorityen >> port) & 1);

    *priority = (pCtl->mppriority.userpriority >> (port * PRIORITY_SIZE)) & 0x7;

    if(port < 6)
        *weight = (pCtl->ctrlgrp_mpweight.mpweight_0_4.staticweight_31_0 >> (port * WEIGHT_SIZE)) & WEIGHT_MASK;
    else if(port > 6)
        *weight = (alt_read_word(&pweights[1]) >> ((port * WEIGHT_SIZE)- 32)) & WEIGHT_MASK;
    else
        *weight = (pCtl->ctrlgrp_mpweight.mpweight_0_4.staticweight_31_0 >> 30) | 
                  (alt_read_word(&pweights[1]) & PRIORITY_MASK);
    return ALT_E_SUCCESS;
}

ALT_STATUS_CODE alt_sdr_priority_disable(ALT_SDR_PORT_t port)
{
    uint32_t currentEn;
    ALT_SDR_CTL_t *pCtl = ALT_SDR_CTL_ADDR;
    /*ALT_SDR_CTL_QOSPRIORITYEN_t *pPriorityEn = ALT_SDR_CTL_QOSPRIORITYEN_ADDR;*/

    if(port > ALT_SDR_NUM_PORTS)
        return ALT_E_BAD_ARG;
    
    currentEn = pCtl->qospriorityen.priorityen;

    /* Disable */
    if(currentEn & (1 << port))
        pCtl->qospriorityen.priorityen = currentEn & ~( 1 << port);

    return ALT_E_SUCCESS;
}




/******************************************************************************
                     Rules API
******************************************************************************/




#define ALT_SDR_CTL_PROTRULEID_LOW(x)         (x)
#define ALT_SDR_CTL_PROTRULEID_HIGH(x)        ((x) << 12)
#define ALT_SDR_CTL_PROTRULEADDR_LOW(x)       ((x) >> 20)
#define ALT_SDR_CTL_PROTRULEADDR_HIGH(x)      ((((x)-1)>>8) & (0xFFF << 12))
#define ALT_SDR_CTL_DATA_RULE_VALID           (1<<2)
#define ALT_SDR_CTL_DATA_RULE_INVALID         0
#define ALT_L3_SEC_OFST                       8

static uint32_t ruleInUse[ALT_SDR_MAX_RULE_NUM] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

/**********************************************************************
               alt_sdr_ctl_set_rule
**********************************************************************/

uint32_t  alt_sdr_rule_set(uint32_t RuleNum, ALT_SDR_RULE_t *ruleinfo)
{
  ALT_SDR_CTL_raw_t *sdr = (ALT_SDR_CTL_raw_t *)ALT_SDR_CTL_ADDR;

  if(ruleinfo == NULL)
    return ALT_SDR_CTL_RULE_INVALID;

  if(RuleNum == ALT_SDR_CTL_RULE_NEW)
  {
    for(RuleNum=0; RuleNum < ALT_SDR_MAX_RULE_NUM; RuleNum++)
      if(ruleInUse[RuleNum] == 0)
        break;
    if(ALT_SDR_MAX_RULE_NUM == RuleNum)
      return   ALT_SDR_CTL_RULE_INVALID;
  }
  ruleInUse[RuleNum] = 1;
  sdr->protrulerdwr = ALT_SDR_CTL_PROTRULERDWR_RULEOFFSET_SET(RuleNum);
  sdr->protruleaddr = ALT_SDR_CTL_PROTRULEADDR_LOW(ruleinfo->LowAddr) |
                      ALT_SDR_CTL_PROTRULEADDR_HIGH(ruleinfo->HighAddr);
  sdr->protruleid = ALT_SDR_CTL_PROTRULEID_LOW(ruleinfo->RuleMin) |
                    ALT_SDR_CTL_PROTRULEID_HIGH(ruleinfo->RuleMax);
  sdr->protruledata = ruleinfo->SecurityType | ALT_SDR_CTL_DATA_RULE_VALID |
                      ruleinfo->Ports | ruleinfo->AccessPermission;
  sdr->protrulerdwr = ALT_SDR_CTL_PROTRULERDWR_RULEOFFSET_SET(RuleNum) |
                      ALT_SDR_CTL_PROTRULERDWR_WRITE;
  sdr->protrulerdwr = ALT_SDR_CTL_PROTRULERDWR_RULEOFFSET_SET(RuleNum);
  return RuleNum;
}

/**********************************************************************
    alt_sdr_ctl_delete_rule - deletes a Trustzone SDRam Access Rule
        uint32 RuleNum - The Rule ID that was returned from set_tz_rule
**********************************************************************/

ALT_STATUS_CODE alt_sdr_rule_delete(uint32_t RuleNum)
{
  ALT_SDR_CTL_raw_t *sdr = (ALT_SDR_CTL_raw_t *)(ALT_SDR_OFST + ALT_SDR_CTL_OFST);

  if(RuleNum >= ALT_SDR_MAX_RULE_NUM)
      return ALT_E_BAD_ARG;

  sdr->protrulerdwr = ALT_SDR_CTL_PROTRULERDWR_RULEOFFSET_SET(RuleNum);
  sdr->protruledata = ALT_SDR_CTL_DATA_RULE_INVALID;
  sdr->protrulerdwr = ALT_SDR_CTL_PROTRULERDWR_RULEOFFSET_SET(RuleNum) | ALT_SDR_CTL_PROTRULERDWR_WRITE;
  sdr->protrulerdwr = ALT_SDR_CTL_PROTRULERDWR_RULEOFFSET_SET(RuleNum);

  ruleInUse[RuleNum] = 0;
  return ALT_E_SUCCESS;
}

/**********************************************************************
    alt_sdr_ctl_set_tz_default - Set the global default for all memory
        that isn't specified in a specific Rule.

        uint32 defaultRule - One of the ALT_SDR_CTL_PROTPORT_DENY_ values
**********************************************************************/

ALT_STATUS_CODE alt_sdr_rule_set_default(uint32_t defaultRule)
{
  ALT_SDR_CTL_raw_t *sdr = (ALT_SDR_CTL_raw_t *)(ALT_SDR_OFST + ALT_SDR_CTL_OFST);

  sdr->protportdefault = defaultRule;
  return ALT_E_SUCCESS;
}


