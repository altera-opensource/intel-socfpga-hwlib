/*******************************************************************************
*                                                                              *
* Copyright 2014 Altera Corporation. All Rights Reserved.                      *
*                                                                              *
* Redistribution and use in source and binary forms, with or without           *
* modification, are permitted provided that the following conditions are met:  *
*                                                                              *
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
*******************************************************************************/

/*
 * $Id: //acds/rel/20.1/embedded/ip/hps/altera_hps/hwlib/include/alt_can_private.h#1 $
 */

/* Altera - ALT_CAN */

/* Only include this code for Cyclone V / Arria V */
#if defined(soc_cv_av)

#ifndef __ALTERA_ALT_CAN_PRIVATE_H__
#define __ALTERA_ALT_CAN_PRIVATE_H__

#ifdef __cplusplus
extern "C"
{
#endif  /* __cplusplus */

/* 
 * Register : IF Command Register - IFCMR
 * 
 * The control bits of the IF/2 Command Register specify the transfer direction
 * and select which portions of the Message Object should be transferred. A message
 * transfer is started as soon as the CPU has written the message number to the low
 * byte of the Command Request Register and IFxCMR.AutoInc is zero. With this write
 * operation, the IFxCMR.Busy bit is automatically set to 1 to notify the CPU that
 * a transfer is in progress. After a wait time of 2 to 8 HOST_CLK periods, the
 * transfer between theInterface Register and the Message RAM has been completed
 * and the IFxCMR.Busy bit is cleared to 0. The upper limit of the wait time occurs
 * when the message transfer coincides with a CAN message transmission, acceptance
 * filtering, or message storage. If the CPU writes to both Command Registers
 * consecutively (requests a second transfer while another transfer is already in
 * progress), the second transfer starts when the first one is completed. Note:
 * While Busy bit of IF/2 Command Register is one, IF/2 Register Set is write
 * protected.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description                                                       
 * :--------|:-------|:------|:-------------------------------------------------------------------
 *  [7:0]   | RW     | 0x1   | Message Number                                                    
 *  [12:8]  | ???    | 0x0   | *UNDEFINED*                                                       
 *  [13]    | RW     | 0x0   | Automatic Increment of Message Object Number                      
 *  [14]    | RW     | 0x0   | Activation of DMA feature for subsequent internal IFx Register Set
 *  [15]    | R      | 0x0   | Busy Flag                                                         
 *  [16]    | RW     | 0x0   | Access Data Bytes 4-7                                             
 *  [17]    | RW     | 0x0   | Access Data Bytes 0-3                                             
 *  [18]    | RW     | 0x0   | Access Transmission Request Bit and NewDat Bit                    
 *  [19]    | RW     | 0x0   | Clear Interrupt Pending Bit                                       
 *  [20]    | RW     | 0x0   | Access Control Bits                                               
 *  [21]    | RW     | 0x0   | Access Arbitration Bits                                           
 *  [22]    | RW     | 0x0   | Access Mask Bits                                                  
 *  [23]    | RW     | 0x0   | Write / Read Transfer                                             
 *  [28:24] | ???    | 0x0   | *UNDEFINED*                                                       
 *  [29]    | RW     | 0x0   | Clear the AutoInc bit without starting a transfer                 
 *  [31:30] | ???    | 0x0   | *UNDEFINED*                                                       
 * 
 */
/*
 * Field : Message Number - MONum
 * 
 * 0x01-0x80 Valid Message Number, the Message Object in the Message RAM is
 * selected for data transfer (up to 128 MsgObj).
 * 
 * 0x00 Not a valid Message Number, interpreted as 0x80.
 * 
 * 0x81-0xFF Not a valid Message Number, interpreted as 0x01-0x7F.
 * 
 * Note: When an invalid Message Number is written to IFxCMR.MONum which is higher
 * than the last Message Object number, a modulo addressing will occur.When e.g.
 * accessing Message Object 33 in a CAN module with 32 Message Objects only, the
 * Message Object 1 will be accessed instead.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFCMR_MONUM register field. */
#define ALT_CAN_MSGIF_IFCMR_MONUM_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFCMR_MONUM register field. */
#define ALT_CAN_MSGIF_IFCMR_MONUM_MSB        7
/* The width in bits of the ALT_CAN_MSGIF_IFCMR_MONUM register field. */
#define ALT_CAN_MSGIF_IFCMR_MONUM_WIDTH      8
/* The mask used to set the ALT_CAN_MSGIF_IFCMR_MONUM register field value. */
#define ALT_CAN_MSGIF_IFCMR_MONUM_SET_MSK    0x000000ff
/* The mask used to clear the ALT_CAN_MSGIF_IFCMR_MONUM register field value. */
#define ALT_CAN_MSGIF_IFCMR_MONUM_CLR_MSK    0xffffff00
/* The reset value of the ALT_CAN_MSGIF_IFCMR_MONUM register field. */
#define ALT_CAN_MSGIF_IFCMR_MONUM_RESET      0x1
/* Extracts the ALT_CAN_MSGIF_IFCMR_MONUM field value from a register. */
#define ALT_CAN_MSGIF_IFCMR_MONUM_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_CAN_MSGIF_IFCMR_MONUM register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFCMR_MONUM_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : Automatic Increment of Message Object Number - AutoInc
 * 
 * Automatic Increment of Message Object Number
 * 
 * The behavior of the Message Object Number increment depends on the Transfer
 * Direction, IFxCMR.WR1RD0.
 * 
 * * Read: The first transfer will be initiated (Busy Bit will set) at write of
 *   IFxCMR.MONum. The Message Object Number will be incremented and the next
 *   Message Object will be transferred from Message Object RAM to Interface
 *   Registers after a read access of Data-Byte 7.
 * 
 * * Write: The first as well as each other transfer will be started after write
 *   access to Data- Byte7. The Message Object Number will be incremented after
 *   successful transfer from the Interface Registers to the Message Object RAM.
 * 
 * Always after successful transfer the Busy Bit will be reset. In combination with
 * DMAactive the port CAN_IFxDMA is set, too.
 * 
 * Note: If the direction is configured as Read a write access to Data-Byte 7 will
 * not start any transfer, as well as if the direction is configured as Write a
 * read access to Data-Byte 7 will not start any transfer. At transfer direction
 * Read each read of Data-Byte 7 will start a transfer until IFxCMR.AutoInc is
 * reset. To aware of resetting a NewDat bit of the following message object, the
 * application has to reset IFxCMR.AutoInc before reading the Data-Byte 7 of the
 * last message object which will be read.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                | Value | Description                                     
 * :------------------------------------|:------|:-------------------------------------------------
 *  ALT_CAN_MSGIF_IFCMR_AUTOINC_E_DISD | 0x0   | AutoIncrement of Message Object Number disabled.
 *  ALT_CAN_MSGIF_IFCMR_AUTOINC_E_END  | 0x1   | AutoIncrement of Message Object Number enabled. 
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFCMR_AUTOINC
 * 
 * AutoIncrement of Message Object Number disabled.
 */
#define ALT_CAN_MSGIF_IFCMR_AUTOINC_E_DISD 0x0
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFCMR_AUTOINC
 * 
 * AutoIncrement of Message Object Number enabled.
 */
#define ALT_CAN_MSGIF_IFCMR_AUTOINC_E_END  0x1

/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFCMR_AUTOINC register field. */
#define ALT_CAN_MSGIF_IFCMR_AUTOINC_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFCMR_AUTOINC register field. */
#define ALT_CAN_MSGIF_IFCMR_AUTOINC_MSB        13
/* The width in bits of the ALT_CAN_MSGIF_IFCMR_AUTOINC register field. */
#define ALT_CAN_MSGIF_IFCMR_AUTOINC_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFCMR_AUTOINC register field value. */
#define ALT_CAN_MSGIF_IFCMR_AUTOINC_SET_MSK    0x00002000
/* The mask used to clear the ALT_CAN_MSGIF_IFCMR_AUTOINC register field value. */
#define ALT_CAN_MSGIF_IFCMR_AUTOINC_CLR_MSK    0xffffdfff
/* The reset value of the ALT_CAN_MSGIF_IFCMR_AUTOINC register field. */
#define ALT_CAN_MSGIF_IFCMR_AUTOINC_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFCMR_AUTOINC field value from a register. */
#define ALT_CAN_MSGIF_IFCMR_AUTOINC_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_CAN_MSGIF_IFCMR_AUTOINC register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFCMR_AUTOINC_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Activation of DMA feature for subsequent internal IFx Register Set - DMAactive
 * 
 * Activation of DMA feature for subsequent internal IFx Register Set
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description                                     
 * :----------------------------------------|:------|:-------------------------------------------------
 *  ALT_CAN_MSGIF_IFCMR_DMAACT_E_PASSIVE   | 0x0   | DMA line leaves passive, independent of IFx     
 * :                                        |       | activities.                                     
 *  ALT_CAN_MSGIF_IFCMR_DMAACT_E_INITIATED | 0x1   | By writing to the Command Request Register, an  
 * :                                        |       | internal transfer of Message Object Data between
 * :                                        |       | RAM and IFx will be initiated. When this        
 * :                                        |       | transfer is complete and DMAactive bit was set, 
 * :                                        |       | the CAN_IFxDMA line gets active. The DMAactive  
 * :                                        |       | bit and port CAN_IFxDMA are staying active until
 * :                                        |       | first read or write access to one of the IFx    
 * :                                        |       | registers. If AutoInc is set DMAactive will be  
 * :                                        |       | left active, otherwise the bit is reset.   Note:
 * :                                        |       | Due to auto reset feature of DMAactive bit if   
 * :                                        |       | AutoInc is inactive, this bit has to be set for 
 * :                                        |       | each subsequent DMA cycle separately. DMA line  
 * :                                        |       | has to be enabled in CAN Control Register.      
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFCMR_DMAACT
 * 
 * DMA line leaves passive, independent of IFx activities.
 */
#define ALT_CAN_MSGIF_IFCMR_DMAACT_E_PASSIVE   0x0
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFCMR_DMAACT
 * 
 * By writing to the Command Request Register, an internal transfer of Message
 * Object Data between RAM and IFx will be initiated. When this transfer is
 * complete and DMAactive bit was set, the CAN_IFxDMA line gets active. The
 * DMAactive bit and port CAN_IFxDMA are staying active until first read or write
 * access to one of the IFx registers. If AutoInc is set DMAactive will be left
 * active, otherwise the bit is reset.
 * 
 * Note: Due to auto reset feature of DMAactive bit if AutoInc is inactive, this
 * bit has to be set for each subsequent DMA cycle separately. DMA line has to be
 * enabled in CAN Control Register.
 */
#define ALT_CAN_MSGIF_IFCMR_DMAACT_E_INITIATED 0x1

/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFCMR_DMAACT register field. */
#define ALT_CAN_MSGIF_IFCMR_DMAACT_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFCMR_DMAACT register field. */
#define ALT_CAN_MSGIF_IFCMR_DMAACT_MSB        14
/* The width in bits of the ALT_CAN_MSGIF_IFCMR_DMAACT register field. */
#define ALT_CAN_MSGIF_IFCMR_DMAACT_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFCMR_DMAACT register field value. */
#define ALT_CAN_MSGIF_IFCMR_DMAACT_SET_MSK    0x00004000
/* The mask used to clear the ALT_CAN_MSGIF_IFCMR_DMAACT register field value. */
#define ALT_CAN_MSGIF_IFCMR_DMAACT_CLR_MSK    0xffffbfff
/* The reset value of the ALT_CAN_MSGIF_IFCMR_DMAACT register field. */
#define ALT_CAN_MSGIF_IFCMR_DMAACT_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFCMR_DMAACT field value from a register. */
#define ALT_CAN_MSGIF_IFCMR_DMAACT_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_CAN_MSGIF_IFCMR_DMAACT register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFCMR_DMAACT_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : Busy Flag - Busy
 * 
 * Busy Flag
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                | Value | Description                                     
 * :------------------------------------|:------|:-------------------------------------------------
 *  ALT_CAN_MSGIF_IFCMR_BUSY_E_DONE    | 0x0   | Set to zero when read/write action has finished.
 *  ALT_CAN_MSGIF_IFCMR_BUSY_E_WRITING | 0x1   | Set to one when writing to the IFxCMR.MONum.    
 * :                                    |       | While bit is one, IFx Register Set is write     
 * :                                    |       | protected.                                      
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFCMR_BUSY
 * 
 * Set to zero when read/write action has finished.
 */
#define ALT_CAN_MSGIF_IFCMR_BUSY_E_DONE    0x0
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFCMR_BUSY
 * 
 * Set to one when writing to the IFxCMR.MONum. While bit is one, IFx Register Set
 * is write protected.
 */
#define ALT_CAN_MSGIF_IFCMR_BUSY_E_WRITING 0x1

/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFCMR_BUSY register field. */
#define ALT_CAN_MSGIF_IFCMR_BUSY_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFCMR_BUSY register field. */
#define ALT_CAN_MSGIF_IFCMR_BUSY_MSB        15
/* The width in bits of the ALT_CAN_MSGIF_IFCMR_BUSY register field. */
#define ALT_CAN_MSGIF_IFCMR_BUSY_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFCMR_BUSY register field value. */
#define ALT_CAN_MSGIF_IFCMR_BUSY_SET_MSK    0x00008000
/* The mask used to clear the ALT_CAN_MSGIF_IFCMR_BUSY register field value. */
#define ALT_CAN_MSGIF_IFCMR_BUSY_CLR_MSK    0xffff7fff
/* The reset value of the ALT_CAN_MSGIF_IFCMR_BUSY register field. */
#define ALT_CAN_MSGIF_IFCMR_BUSY_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFCMR_BUSY field value from a register. */
#define ALT_CAN_MSGIF_IFCMR_BUSY_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_CAN_MSGIF_IFCMR_BUSY register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFCMR_BUSY_SET(value) (((value) << 15) & 0x00008000)

/*
 * Field : Access Data Bytes 4-7 - DataB
 * 
 * Write Direction:
 * 
 * 0= Data Bytes 4-7 unchanged.
 * 
 * 1= transfer Data Bytes 4-7 to Message Object.
 * 
 * Read Direction:
 * 
 * 0= Data Bytes 4-7 unchanged.
 * 
 * 1= transfer Data Bytes 4-7 to IFxDB.
 * 
 * Note: The speed of the message transfer does not depend on how many bytes are
 * transferred.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFCMR_DATAB register field. */
#define ALT_CAN_MSGIF_IFCMR_DATAB_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFCMR_DATAB register field. */
#define ALT_CAN_MSGIF_IFCMR_DATAB_MSB        16
/* The width in bits of the ALT_CAN_MSGIF_IFCMR_DATAB register field. */
#define ALT_CAN_MSGIF_IFCMR_DATAB_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFCMR_DATAB register field value. */
#define ALT_CAN_MSGIF_IFCMR_DATAB_SET_MSK    0x00010000
/* The mask used to clear the ALT_CAN_MSGIF_IFCMR_DATAB register field value. */
#define ALT_CAN_MSGIF_IFCMR_DATAB_CLR_MSK    0xfffeffff
/* The reset value of the ALT_CAN_MSGIF_IFCMR_DATAB register field. */
#define ALT_CAN_MSGIF_IFCMR_DATAB_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFCMR_DATAB field value from a register. */
#define ALT_CAN_MSGIF_IFCMR_DATAB_GET(value) (((value) & 0x00010000) >> 16)
/* Produces a ALT_CAN_MSGIF_IFCMR_DATAB register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFCMR_DATAB_SET(value) (((value) << 16) & 0x00010000)

/*
 * Field : Access Data Bytes 0-3 - DataA
 * 
 * Write Direction:
 * 
 * 0= Data Bytes 0-3 unchanged.
 * 
 * 1= transfer Data Bytes 0-3 to Message Object.
 * 
 * Read Direction:
 * 
 * 0= Data Bytes 0-3 unchanged.
 * 
 * 1= transfer Data Bytes 0-3 to IFxDA.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFCMR_DATAA register field. */
#define ALT_CAN_MSGIF_IFCMR_DATAA_LSB        17
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFCMR_DATAA register field. */
#define ALT_CAN_MSGIF_IFCMR_DATAA_MSB        17
/* The width in bits of the ALT_CAN_MSGIF_IFCMR_DATAA register field. */
#define ALT_CAN_MSGIF_IFCMR_DATAA_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFCMR_DATAA register field value. */
#define ALT_CAN_MSGIF_IFCMR_DATAA_SET_MSK    0x00020000
/* The mask used to clear the ALT_CAN_MSGIF_IFCMR_DATAA register field value. */
#define ALT_CAN_MSGIF_IFCMR_DATAA_CLR_MSK    0xfffdffff
/* The reset value of the ALT_CAN_MSGIF_IFCMR_DATAA register field. */
#define ALT_CAN_MSGIF_IFCMR_DATAA_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFCMR_DATAA field value from a register. */
#define ALT_CAN_MSGIF_IFCMR_DATAA_GET(value) (((value) & 0x00020000) >> 17)
/* Produces a ALT_CAN_MSGIF_IFCMR_DATAA register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFCMR_DATAA_SET(value) (((value) << 17) & 0x00020000)

/*
 * Field : Access Transmission Request Bit and NewDat Bit - TxRqstNewDat
 * 
 * Write Direction:
 * 
 * 0= TxRqst and NewDat bit will be handled according IFxMCTR.NewDat bit and
 * IFxMCTR.TxRqst bit.
 * 
 * 1= set TxRqst and NewDat in Message Object to one
 * 
 * Note: If a CAN transmission is requested by setting IFxCMR.TxRqst/NewDat, the
 * TxRqst and NewDat bits in the Message Object will be set to one independently of
 * the values in IFxMCTR.
 * 
 * Read Direction:
 * 
 * 0= NewDat bit remains unchanged.
 * 
 * 1= clear NewDat bit in the Message Object.
 * 
 * Note: A read access to a Message Object can be combined with the reset of the
 * control bits IntPnd and NewDat. The values of these bits transferred to the
 * IFxMCTR always reflect the status before resetting them.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFCMR_TXRQSTNEWDAT register field. */
#define ALT_CAN_MSGIF_IFCMR_TXRQSTNEWDAT_LSB        18
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFCMR_TXRQSTNEWDAT register field. */
#define ALT_CAN_MSGIF_IFCMR_TXRQSTNEWDAT_MSB        18
/* The width in bits of the ALT_CAN_MSGIF_IFCMR_TXRQSTNEWDAT register field. */
#define ALT_CAN_MSGIF_IFCMR_TXRQSTNEWDAT_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFCMR_TXRQSTNEWDAT register field value. */
#define ALT_CAN_MSGIF_IFCMR_TXRQSTNEWDAT_SET_MSK    0x00040000
/* The mask used to clear the ALT_CAN_MSGIF_IFCMR_TXRQSTNEWDAT register field value. */
#define ALT_CAN_MSGIF_IFCMR_TXRQSTNEWDAT_CLR_MSK    0xfffbffff
/* The reset value of the ALT_CAN_MSGIF_IFCMR_TXRQSTNEWDAT register field. */
#define ALT_CAN_MSGIF_IFCMR_TXRQSTNEWDAT_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFCMR_TXRQSTNEWDAT field value from a register. */
#define ALT_CAN_MSGIF_IFCMR_TXRQSTNEWDAT_GET(value) (((value) & 0x00040000) >> 18)
/* Produces a ALT_CAN_MSGIF_IFCMR_TXRQSTNEWDAT register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFCMR_TXRQSTNEWDAT_SET(value) (((value) << 18) & 0x00040000)

/*
 * Field : Clear Interrupt Pending Bit - ClrIntPnd
 * 
 * Write Direction:
 * 
 * Has no influence to Message Object at write transfer.
 * 
 * Note: When writing to a Message Object, this bit is ignored and copying of
 * IntPnd flag from IFx Control Register to Message RAM could only be controlled by
 * IFxMTR.IntPnd bit.
 * 
 * Read Direction:
 * 
 * 0= IntPnd bit remains unchanged.
 * 
 * 1= clear IntPnd bit in the Message Object.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFCMR_CLRINTPND register field. */
#define ALT_CAN_MSGIF_IFCMR_CLRINTPND_LSB        19
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFCMR_CLRINTPND register field. */
#define ALT_CAN_MSGIF_IFCMR_CLRINTPND_MSB        19
/* The width in bits of the ALT_CAN_MSGIF_IFCMR_CLRINTPND register field. */
#define ALT_CAN_MSGIF_IFCMR_CLRINTPND_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFCMR_CLRINTPND register field value. */
#define ALT_CAN_MSGIF_IFCMR_CLRINTPND_SET_MSK    0x00080000
/* The mask used to clear the ALT_CAN_MSGIF_IFCMR_CLRINTPND register field value. */
#define ALT_CAN_MSGIF_IFCMR_CLRINTPND_CLR_MSK    0xfff7ffff
/* The reset value of the ALT_CAN_MSGIF_IFCMR_CLRINTPND register field. */
#define ALT_CAN_MSGIF_IFCMR_CLRINTPND_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFCMR_CLRINTPND field value from a register. */
#define ALT_CAN_MSGIF_IFCMR_CLRINTPND_GET(value) (((value) & 0x00080000) >> 19)
/* Produces a ALT_CAN_MSGIF_IFCMR_CLRINTPND register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFCMR_CLRINTPND_SET(value) (((value) << 19) & 0x00080000)

/*
 * Field : Access Control Bits - Control
 * 
 * Write Direction:
 * 
 * 0= Control Bits unchanged.
 * 
 * 1= transfer Control Bits to Message Object.
 * 
 * Note: If IFxCMR.TxRqst/NewDat bit is set, bits IFxMCTR.TxRqst and IFxMCTR.NewDat
 * will be ignored.
 * 
 * Read Direction:
 * 
 * 0= Control Bits unchanged.
 * 
 * 1= transfer Control Bits to IFxMCTR Register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFCMR_CTL register field. */
#define ALT_CAN_MSGIF_IFCMR_CTL_LSB        20
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFCMR_CTL register field. */
#define ALT_CAN_MSGIF_IFCMR_CTL_MSB        20
/* The width in bits of the ALT_CAN_MSGIF_IFCMR_CTL register field. */
#define ALT_CAN_MSGIF_IFCMR_CTL_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFCMR_CTL register field value. */
#define ALT_CAN_MSGIF_IFCMR_CTL_SET_MSK    0x00100000
/* The mask used to clear the ALT_CAN_MSGIF_IFCMR_CTL register field value. */
#define ALT_CAN_MSGIF_IFCMR_CTL_CLR_MSK    0xffefffff
/* The reset value of the ALT_CAN_MSGIF_IFCMR_CTL register field. */
#define ALT_CAN_MSGIF_IFCMR_CTL_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFCMR_CTL field value from a register. */
#define ALT_CAN_MSGIF_IFCMR_CTL_GET(value) (((value) & 0x00100000) >> 20)
/* Produces a ALT_CAN_MSGIF_IFCMR_CTL register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFCMR_CTL_SET(value) (((value) << 20) & 0x00100000)

/*
 * Field : Access Arbitration Bits - Arb
 * 
 * Write Direction:
 * 
 * 0= Arbitration bits unchanged.
 * 
 * 1= transfer Identifier + Dir + Xtd + MsgVal to Message Object.
 * 
 * Read Direction:
 * 
 * 0= Arbitration bits unchanged.
 * 
 * 1= transfer Identifier + Dir + Xtd + MsgVal to IFxARB Register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFCMR_ARB register field. */
#define ALT_CAN_MSGIF_IFCMR_ARB_LSB        21
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFCMR_ARB register field. */
#define ALT_CAN_MSGIF_IFCMR_ARB_MSB        21
/* The width in bits of the ALT_CAN_MSGIF_IFCMR_ARB register field. */
#define ALT_CAN_MSGIF_IFCMR_ARB_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFCMR_ARB register field value. */
#define ALT_CAN_MSGIF_IFCMR_ARB_SET_MSK    0x00200000
/* The mask used to clear the ALT_CAN_MSGIF_IFCMR_ARB register field value. */
#define ALT_CAN_MSGIF_IFCMR_ARB_CLR_MSK    0xffdfffff
/* The reset value of the ALT_CAN_MSGIF_IFCMR_ARB register field. */
#define ALT_CAN_MSGIF_IFCMR_ARB_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFCMR_ARB field value from a register. */
#define ALT_CAN_MSGIF_IFCMR_ARB_GET(value) (((value) & 0x00200000) >> 21)
/* Produces a ALT_CAN_MSGIF_IFCMR_ARB register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFCMR_ARB_SET(value) (((value) << 21) & 0x00200000)

/*
 * Field : Access Mask Bits - Mask
 * 
 * Write Direction:
 * 
 * 0= Mask bits unchanged.
 * 
 * 1= transfer Identifier Mask + MDir + MXtd to Message Object.
 * 
 * Read Direction:
 * 
 * 0= Mask bits unchanged.
 * 
 * 1= transfer Identifier Mask + MDir + MXtd to IFxMSK Register.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFCMR_MSK register field. */
#define ALT_CAN_MSGIF_IFCMR_MSK_LSB        22
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFCMR_MSK register field. */
#define ALT_CAN_MSGIF_IFCMR_MSK_MSB        22
/* The width in bits of the ALT_CAN_MSGIF_IFCMR_MSK register field. */
#define ALT_CAN_MSGIF_IFCMR_MSK_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFCMR_MSK register field value. */
#define ALT_CAN_MSGIF_IFCMR_MSK_SET_MSK    0x00400000
/* The mask used to clear the ALT_CAN_MSGIF_IFCMR_MSK register field value. */
#define ALT_CAN_MSGIF_IFCMR_MSK_CLR_MSK    0xffbfffff
/* The reset value of the ALT_CAN_MSGIF_IFCMR_MSK register field. */
#define ALT_CAN_MSGIF_IFCMR_MSK_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFCMR_MSK field value from a register. */
#define ALT_CAN_MSGIF_IFCMR_MSK_GET(value) (((value) & 0x00400000) >> 22)
/* Produces a ALT_CAN_MSGIF_IFCMR_MSK register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFCMR_MSK_SET(value) (((value) << 22) & 0x00400000)

/*
 * Field : Write / Read Transfer - WR1RD0
 * 
 * Write / Read Transfer
 * 
 * Field Enumeration Values:
 * 
 *  Enum                             | Value | Description                                     
 * :---------------------------------|:------|:-------------------------------------------------
 *  ALT_CAN_MSGIF_IFCMR_WR1RD0_E_RD | 0x0   | Transfer data from the Message Object addressed 
 * :                                 |       | by IFxCMR.MONum into the selected IFx Message   
 * :                                 |       | Buffer Registers.                               
 *  ALT_CAN_MSGIF_IFCMR_WR1RD0_E_WR | 0x1   | Transfer data from the selected IFx Message     
 * :                                 |       | Buffer Registers to the Message Object addressed
 * :                                 |       | by IFxCMR.MONum.                                
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFCMR_WR1RD0
 * 
 * Transfer data from the Message Object addressed by IFxCMR.MONum into the
 * selected IFx Message Buffer Registers.
 */
#define ALT_CAN_MSGIF_IFCMR_WR1RD0_E_RD    0x0
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFCMR_WR1RD0
 * 
 * Transfer data from the selected IFx Message Buffer Registers to the Message
 * Object addressed by IFxCMR.MONum.
 */
#define ALT_CAN_MSGIF_IFCMR_WR1RD0_E_WR    0x1

/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFCMR_WR1RD0 register field. */
#define ALT_CAN_MSGIF_IFCMR_WR1RD0_LSB        23
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFCMR_WR1RD0 register field. */
#define ALT_CAN_MSGIF_IFCMR_WR1RD0_MSB        23
/* The width in bits of the ALT_CAN_MSGIF_IFCMR_WR1RD0 register field. */
#define ALT_CAN_MSGIF_IFCMR_WR1RD0_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFCMR_WR1RD0 register field value. */
#define ALT_CAN_MSGIF_IFCMR_WR1RD0_SET_MSK    0x00800000
/* The mask used to clear the ALT_CAN_MSGIF_IFCMR_WR1RD0 register field value. */
#define ALT_CAN_MSGIF_IFCMR_WR1RD0_CLR_MSK    0xff7fffff
/* The reset value of the ALT_CAN_MSGIF_IFCMR_WR1RD0 register field. */
#define ALT_CAN_MSGIF_IFCMR_WR1RD0_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFCMR_WR1RD0 field value from a register. */
#define ALT_CAN_MSGIF_IFCMR_WR1RD0_GET(value) (((value) & 0x00800000) >> 23)
/* Produces a ALT_CAN_MSGIF_IFCMR_WR1RD0 register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFCMR_WR1RD0_SET(value) (((value) << 23) & 0x00800000)

/*
 * Field : Clear the AutoInc bit without starting a transfer - ClrAutoInc
 * 
 * Clear the AutoInc bit without starting a transfer
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description                              
 * :----------------------------------------|:------|:------------------------------------------
 *  ALT_CAN_MSGIF_IFCMR_CLRAUTOINC_E_NOCLR | 0x0   | Has no effect to the other Bits of this  
 * :                                        |       | Register.                                
 *  ALT_CAN_MSGIF_IFCMR_CLRAUTOINC_E_CLR   | 0x1   | Clear the AutoInc bit without starting a 
 * :                                        |       | transfer, all other bits will be ignored.
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFCMR_CLRAUTOINC
 * 
 * Has no effect to the other Bits of this Register.
 */
#define ALT_CAN_MSGIF_IFCMR_CLRAUTOINC_E_NOCLR 0x0
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFCMR_CLRAUTOINC
 * 
 * Clear the AutoInc bit without starting a transfer, all other bits will be
 * ignored.
 */
#define ALT_CAN_MSGIF_IFCMR_CLRAUTOINC_E_CLR   0x1

/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFCMR_CLRAUTOINC register field. */
#define ALT_CAN_MSGIF_IFCMR_CLRAUTOINC_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFCMR_CLRAUTOINC register field. */
#define ALT_CAN_MSGIF_IFCMR_CLRAUTOINC_MSB        29
/* The width in bits of the ALT_CAN_MSGIF_IFCMR_CLRAUTOINC register field. */
#define ALT_CAN_MSGIF_IFCMR_CLRAUTOINC_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFCMR_CLRAUTOINC register field value. */
#define ALT_CAN_MSGIF_IFCMR_CLRAUTOINC_SET_MSK    0x20000000
/* The mask used to clear the ALT_CAN_MSGIF_IFCMR_CLRAUTOINC register field value. */
#define ALT_CAN_MSGIF_IFCMR_CLRAUTOINC_CLR_MSK    0xdfffffff
/* The reset value of the ALT_CAN_MSGIF_IFCMR_CLRAUTOINC register field. */
#define ALT_CAN_MSGIF_IFCMR_CLRAUTOINC_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFCMR_CLRAUTOINC field value from a register. */
#define ALT_CAN_MSGIF_IFCMR_CLRAUTOINC_GET(value) (((value) & 0x20000000) >> 29)
/* Produces a ALT_CAN_MSGIF_IFCMR_CLRAUTOINC register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFCMR_CLRAUTOINC_SET(value) (((value) << 29) & 0x20000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CAN_MSGIF_IFCMR.
 */
struct ALT_CAN_MSGIF_IFCMR_s
{
    uint32_t        MONum        :  8;  /* Message Number */
    uint32_t                     :  5;  /* *UNDEFINED* */
    uint32_t        AutoInc      :  1;  /* Automatic Increment of Message Object Number */
    uint32_t        DMAactive    :  1;  /* Activation of DMA feature for subsequent internal IFx Register Set */
    const uint32_t  Busy         :  1;  /* Busy Flag */
    uint32_t        DataB        :  1;  /* Access Data Bytes 4-7 */
    uint32_t        DataA        :  1;  /* Access Data Bytes 0-3 */
    uint32_t        TxRqstNewDat :  1;  /* Access Transmission Request Bit and NewDat Bit */
    uint32_t        ClrIntPnd    :  1;  /* Clear Interrupt Pending Bit */
    uint32_t        Control      :  1;  /* Access Control Bits */
    uint32_t        Arb          :  1;  /* Access Arbitration Bits */
    uint32_t        Mask         :  1;  /* Access Mask Bits */
    uint32_t        WR1RD0       :  1;  /* Write / Read Transfer */
    uint32_t                     :  5;  /* *UNDEFINED* */
    uint32_t        ClrAutoInc   :  1;  /* Clear the AutoInc bit without starting a transfer */
    uint32_t                     :  2;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CAN_MSGIF_IFCMR. */
typedef volatile struct ALT_CAN_MSGIF_IFCMR_s  ALT_CAN_MSGIF_IFCMR_t;
#endif  /* __ASSEMBLY__ */

/* The byte offset of the ALT_CAN_MSGIF_IFCMR register from the beginning of the component. */
#define ALT_CAN_MSGIF_IFCMR_OFST        0x0
/* The address of the ALT_CAN_MSGIF_IFCMR register. */
#define ALT_CAN_MSGIF_IFCMR_ADDR(base, if_base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + if_base + ALT_CAN_MSGIF_IFCMR_OFST))

/*
 * Register : IF Mask Register - IFMSK
 * 
 * The Message Object Mask Bits together with the arbitration bits are used for
 * acceptance filtering of incoming messages.
 * 
 * Note: While IFxCMR.Busy bit is one, the IF/2 Register Set is write protected.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset      | Description             
 * :-------|:-------|:-----------|:-------------------------
 *  [28:0] | RW     | 0x1fffffff | Identifier Mask         
 *  [29]   | ???    | 0x1        | *UNDEFINED*             
 *  [30]   | RW     | 0x1        | Mask Message Direction  
 *  [31]   | RW     | 0x1        | Mask Extended Identifier
 * 
 */
/*
 * Field : Identifier Mask - Msk
 * 
 * 0 = The corresponding bit in the identifier of the message object cannot inhibit
 * the match in the acceptance filtering.
 * 
 * 1 = The corresponding identifier bit is used for acceptance filtering.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFMSK_MSK register field. */
#define ALT_CAN_MSGIF_IFMSK_MSK_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFMSK_MSK register field. */
#define ALT_CAN_MSGIF_IFMSK_MSK_MSB        28
/* The width in bits of the ALT_CAN_MSGIF_IFMSK_MSK register field. */
#define ALT_CAN_MSGIF_IFMSK_MSK_WIDTH      29
/* The mask used to set the ALT_CAN_MSGIF_IFMSK_MSK register field value. */
#define ALT_CAN_MSGIF_IFMSK_MSK_SET_MSK    0x1fffffff
/* The mask used to clear the ALT_CAN_MSGIF_IFMSK_MSK register field value. */
#define ALT_CAN_MSGIF_IFMSK_MSK_CLR_MSK    0xe0000000
/* The reset value of the ALT_CAN_MSGIF_IFMSK_MSK register field. */
#define ALT_CAN_MSGIF_IFMSK_MSK_RESET      0x1fffffff
/* Extracts the ALT_CAN_MSGIF_IFMSK_MSK field value from a register. */
#define ALT_CAN_MSGIF_IFMSK_MSK_GET(value) (((value) & 0x1fffffff) >> 0)
/* Produces a ALT_CAN_MSGIF_IFMSK_MSK register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFMSK_MSK_SET(value) (((value) << 0) & 0x1fffffff)

/*
 * Field : Mask Message Direction - MDir
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description                                     
 * :-------------------------------------------|:------|:-------------------------------------------------
 *  ALT_CAN_MSGIF_IFMSK_MDIR_E_NOACCEPTEFFECT | 0x0   | The message direction bit (Dir) has no effect on
 * :                                           |       | the acceptance filtering. Handle with care      
 * :                                           |       | setting IFxMSK.MDir to zero.                    
 *  ALT_CAN_MSGIF_IFMSK_MDIR_E_ACCEPTEFFECT   | 0x1   | The message direction bit (Dir) is used for     
 * :                                           |       | acceptance filtering.                           
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFMSK_MDIR
 * 
 * The message direction bit (Dir) has no effect on the acceptance filtering.
 * Handle with care setting IFxMSK.MDir to zero.
 */
#define ALT_CAN_MSGIF_IFMSK_MDIR_E_NOACCEPTEFFECT  0x0
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFMSK_MDIR
 * 
 * The message direction bit (Dir) is used for acceptance filtering.
 */
#define ALT_CAN_MSGIF_IFMSK_MDIR_E_ACCEPTEFFECT    0x1

/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFMSK_MDIR register field. */
#define ALT_CAN_MSGIF_IFMSK_MDIR_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFMSK_MDIR register field. */
#define ALT_CAN_MSGIF_IFMSK_MDIR_MSB        30
/* The width in bits of the ALT_CAN_MSGIF_IFMSK_MDIR register field. */
#define ALT_CAN_MSGIF_IFMSK_MDIR_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFMSK_MDIR register field value. */
#define ALT_CAN_MSGIF_IFMSK_MDIR_SET_MSK    0x40000000
/* The mask used to clear the ALT_CAN_MSGIF_IFMSK_MDIR register field value. */
#define ALT_CAN_MSGIF_IFMSK_MDIR_CLR_MSK    0xbfffffff
/* The reset value of the ALT_CAN_MSGIF_IFMSK_MDIR register field. */
#define ALT_CAN_MSGIF_IFMSK_MDIR_RESET      0x1
/* Extracts the ALT_CAN_MSGIF_IFMSK_MDIR field value from a register. */
#define ALT_CAN_MSGIF_IFMSK_MDIR_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_CAN_MSGIF_IFMSK_MDIR register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFMSK_MDIR_SET(value) (((value) << 30) & 0x40000000)

/*
 * Field : Mask Extended Identifier - MXtd
 * 
 * When 11-bit (standard) Identifiers are used for a Message Object, the
 * identifiers of received Data Frames are written into bits ID28 to ID18. For
 * acceptance filtering, only these bits together with mask bits Msk28 to Msk18 are
 * considered.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                       | Value | Description                                    
 * :-------------------------------------------|:------|:------------------------------------------------
 *  ALT_CAN_MSGIF_IFMSK_MXTD_E_NOACCEPTEFFECT | 0x0   | The extended identifier bit (IDE) has no effect
 * :                                           |       | on the acceptance filtering.                   
 *  ALT_CAN_MSGIF_IFMSK_MXTD_E_ACCEPTEFFECT   | 0x1   | The extended identifier bit (IDE) is used for  
 * :                                           |       | acceptance filtering.                          
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFMSK_MXTD
 * 
 * The extended identifier bit (IDE) has no effect on the acceptance filtering.
 */
#define ALT_CAN_MSGIF_IFMSK_MXTD_E_NOACCEPTEFFECT  0x0
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFMSK_MXTD
 * 
 * The extended identifier bit (IDE) is used for acceptance filtering.
 */
#define ALT_CAN_MSGIF_IFMSK_MXTD_E_ACCEPTEFFECT    0x1

/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFMSK_MXTD register field. */
#define ALT_CAN_MSGIF_IFMSK_MXTD_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFMSK_MXTD register field. */
#define ALT_CAN_MSGIF_IFMSK_MXTD_MSB        31
/* The width in bits of the ALT_CAN_MSGIF_IFMSK_MXTD register field. */
#define ALT_CAN_MSGIF_IFMSK_MXTD_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFMSK_MXTD register field value. */
#define ALT_CAN_MSGIF_IFMSK_MXTD_SET_MSK    0x80000000
/* The mask used to clear the ALT_CAN_MSGIF_IFMSK_MXTD register field value. */
#define ALT_CAN_MSGIF_IFMSK_MXTD_CLR_MSK    0x7fffffff
/* The reset value of the ALT_CAN_MSGIF_IFMSK_MXTD register field. */
#define ALT_CAN_MSGIF_IFMSK_MXTD_RESET      0x1
/* Extracts the ALT_CAN_MSGIF_IFMSK_MXTD field value from a register. */
#define ALT_CAN_MSGIF_IFMSK_MXTD_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_CAN_MSGIF_IFMSK_MXTD register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFMSK_MXTD_SET(value) (((value) << 31) & 0x80000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CAN_MSGIF_IFMSK.
 */
struct ALT_CAN_MSGIF_IFMSK_s
{
    uint32_t  Msk  : 29;  /* Identifier Mask */
    uint32_t       :  1;  /* *UNDEFINED* */
    uint32_t  MDir :  1;  /* Mask Message Direction */
    uint32_t  MXtd :  1;  /* Mask Extended Identifier */
};

/* The typedef declaration for register ALT_CAN_MSGIF_IFMSK. */
typedef volatile struct ALT_CAN_MSGIF_IFMSK_s  ALT_CAN_MSGIF_IFMSK_t;
#endif  /* __ASSEMBLY__ */

/* The byte offset of the ALT_CAN_MSGIF_IFMSK register from the beginning of the component. */
#define ALT_CAN_MSGIF_IFMSK_OFST        0x4
/* The address of the ALT_CAN_MSGIF_IFMSK register. */
#define ALT_CAN_MSGIF_IFMSK_ADDR(base, if_base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + if_base + ALT_CAN_MSGIF_IFMSK_OFST))

/*
 * Register : IF Arbitration Register - IFARB
 * 
 * The Arbitration Registers ID28-0, Xtd, and Dir are used to define the identifier
 * and type of outgoing messages and are used (together with the mask registers
 * Msk28-0, MXtd, and MDir) for acceptance filtering of incoming messages. A
 * received message is stored into the valid Message Object with matching
 * identifier and Direction=receive (Data Frame) or Direction=transmit (Remote
 * Frame). Extended frames can be stored only in Message Objects with Xtd = one,
 * standard frames in Message Objects with Xtd = zero. If a received message (Data
 * Frame or Remote Frame) matches with more than one valid Message Object, it is
 * stored into that with the lowest message number.
 * 
 * Register Layout
 * 
 *  Bits   | Access | Reset | Description        
 * :-------|:-------|:------|:--------------------
 *  [28:0] | RW     | 0x0   | Identifier Mask    
 *  [29]   | RW     | 0x0   | Message Direction  
 *  [30]   | RW     | 0x0   | Extended Identifier
 *  [31]   | RW     | 0x0   | Message Valid      
 * 
 */
/*
 * Field : Identifier Mask - ID
 * 
 * ID28 - ID0 29-bit Identifier (Extended Frame).
 * 
 * ID28 - ID18 11-bit Identifier (Standard Frame).
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFARB_ID register field. */
#define ALT_CAN_MSGIF_IFARB_ID_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFARB_ID register field. */
#define ALT_CAN_MSGIF_IFARB_ID_MSB        28
/* The width in bits of the ALT_CAN_MSGIF_IFARB_ID register field. */
#define ALT_CAN_MSGIF_IFARB_ID_WIDTH      29
/* The mask used to set the ALT_CAN_MSGIF_IFARB_ID register field value. */
#define ALT_CAN_MSGIF_IFARB_ID_SET_MSK    0x1fffffff
/* The mask used to clear the ALT_CAN_MSGIF_IFARB_ID register field value. */
#define ALT_CAN_MSGIF_IFARB_ID_CLR_MSK    0xe0000000
/* The reset value of the ALT_CAN_MSGIF_IFARB_ID register field. */
#define ALT_CAN_MSGIF_IFARB_ID_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFARB_ID field value from a register. */
#define ALT_CAN_MSGIF_IFARB_ID_GET(value) (((value) & 0x1fffffff) >> 0)
/* Produces a ALT_CAN_MSGIF_IFARB_ID register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFARB_ID_SET(value) (((value) << 0) & 0x1fffffff)

/*
 * Field : Message Direction - Dir
 * 
 * Message Direction
 * 
 * Field Enumeration Values:
 * 
 *  Enum                          | Value | Description                                     
 * :------------------------------|:------|:-------------------------------------------------
 *  ALT_CAN_MSGIF_IFARB_DIR_E_RX | 0x0   | On TxRqst, a Remote Frame with the identifier of
 * :                              |       | this Message Object is transmitted. On reception
 * :                              |       | of a Data Frame with matching identifier, that  
 * :                              |       | message is stored in this Message Object.       
 *  ALT_CAN_MSGIF_IFARB_DIR_E_TX | 0x1   | On TxRqst, the respective Message Object is     
 * :                              |       | transmitted as a Data Frame. On reception of a  
 * :                              |       | Remote Frame with matching identifier, the      
 * :                              |       | TxRqst bit of this Message Object is set (if    
 * :                              |       | RmtEn = one).                                   
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFARB_DIR
 * 
 * On TxRqst, a Remote Frame with the identifier of this Message Object is
 * transmitted. On reception of a Data Frame with matching identifier, that message
 * is stored in this Message Object.
 */
#define ALT_CAN_MSGIF_IFARB_DIR_E_RX   0x0
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFARB_DIR
 * 
 * On TxRqst, the respective Message Object is transmitted as a Data Frame. On
 * reception of a Remote Frame with matching identifier, the TxRqst bit of this
 * Message Object is set (if RmtEn = one).
 */
#define ALT_CAN_MSGIF_IFARB_DIR_E_TX   0x1

/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFARB_DIR register field. */
#define ALT_CAN_MSGIF_IFARB_DIR_LSB        29
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFARB_DIR register field. */
#define ALT_CAN_MSGIF_IFARB_DIR_MSB        29
/* The width in bits of the ALT_CAN_MSGIF_IFARB_DIR register field. */
#define ALT_CAN_MSGIF_IFARB_DIR_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFARB_DIR register field value. */
#define ALT_CAN_MSGIF_IFARB_DIR_SET_MSK    0x20000000
/* The mask used to clear the ALT_CAN_MSGIF_IFARB_DIR register field value. */
#define ALT_CAN_MSGIF_IFARB_DIR_CLR_MSK    0xdfffffff
/* The reset value of the ALT_CAN_MSGIF_IFARB_DIR register field. */
#define ALT_CAN_MSGIF_IFARB_DIR_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFARB_DIR field value from a register. */
#define ALT_CAN_MSGIF_IFARB_DIR_GET(value) (((value) & 0x20000000) >> 29)
/* Produces a ALT_CAN_MSGIF_IFARB_DIR register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFARB_DIR_SET(value) (((value) << 29) & 0x20000000)

/*
 * Field : Extended Identifier - Xtd
 * 
 * Extended Identifier
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                | Value | Description                                  
 * :------------------------------------|:------|:----------------------------------------------
 *  ALT_CAN_MSGIF_IFARB_XTD_E_STANDARD | 0x0   | The 11-bit (standard) Identifier will be used
 * :                                    |       | for this Message Object.                     
 *  ALT_CAN_MSGIF_IFARB_XTD_E_EXTENDED | 0x1   | The 29-bit (extended) Identifier will be used
 * :                                    |       | for this Message Object.                     
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFARB_XTD
 * 
 * The 11-bit (standard) Identifier will be used for this Message Object.
 */
#define ALT_CAN_MSGIF_IFARB_XTD_E_STANDARD 0x0
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFARB_XTD
 * 
 * The 29-bit (extended) Identifier will be used for this Message Object.
 */
#define ALT_CAN_MSGIF_IFARB_XTD_E_EXTENDED 0x1

/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFARB_XTD register field. */
#define ALT_CAN_MSGIF_IFARB_XTD_LSB        30
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFARB_XTD register field. */
#define ALT_CAN_MSGIF_IFARB_XTD_MSB        30
/* The width in bits of the ALT_CAN_MSGIF_IFARB_XTD register field. */
#define ALT_CAN_MSGIF_IFARB_XTD_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFARB_XTD register field value. */
#define ALT_CAN_MSGIF_IFARB_XTD_SET_MSK    0x40000000
/* The mask used to clear the ALT_CAN_MSGIF_IFARB_XTD register field value. */
#define ALT_CAN_MSGIF_IFARB_XTD_CLR_MSK    0xbfffffff
/* The reset value of the ALT_CAN_MSGIF_IFARB_XTD register field. */
#define ALT_CAN_MSGIF_IFARB_XTD_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFARB_XTD field value from a register. */
#define ALT_CAN_MSGIF_IFARB_XTD_GET(value) (((value) & 0x40000000) >> 30)
/* Produces a ALT_CAN_MSGIF_IFARB_XTD register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFARB_XTD_SET(value) (((value) << 30) & 0x40000000)

/*
 * Field : Message Valid - MsgVal
 * 
 * The CPU must reset the MsgVal bit of all unused Messages Objects during the
 * initialization before it resets bit Init in the CAN Control Register. MsgVal
 * must also be reset if the Messages Object is no longer used in operation. For
 * reconfiguration of Message Objects during normal operation.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description                                   
 * :-----------------------------------------|:------|:-----------------------------------------------
 *  ALT_CAN_MSGIF_IFARB_MSGVAL_E_IGNORED    | 0x0   | The Message Object is ignored by the Message  
 * :                                         |       | Handler.                                      
 *  ALT_CAN_MSGIF_IFARB_MSGVAL_E_CONSIDERED | 0x1   | The Message Object is configured and should be
 * :                                         |       | considered by the Message Handler.            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFARB_MSGVAL
 * 
 * The Message Object is ignored by the Message Handler.
 */
#define ALT_CAN_MSGIF_IFARB_MSGVAL_E_IGNORED       0x0
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFARB_MSGVAL
 * 
 * The Message Object is configured and should be considered by the Message
 * Handler.
 */
#define ALT_CAN_MSGIF_IFARB_MSGVAL_E_CONSIDERED    0x1

/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFARB_MSGVAL register field. */
#define ALT_CAN_MSGIF_IFARB_MSGVAL_LSB        31
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFARB_MSGVAL register field. */
#define ALT_CAN_MSGIF_IFARB_MSGVAL_MSB        31
/* The width in bits of the ALT_CAN_MSGIF_IFARB_MSGVAL register field. */
#define ALT_CAN_MSGIF_IFARB_MSGVAL_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFARB_MSGVAL register field value. */
#define ALT_CAN_MSGIF_IFARB_MSGVAL_SET_MSK    0x80000000
/* The mask used to clear the ALT_CAN_MSGIF_IFARB_MSGVAL register field value. */
#define ALT_CAN_MSGIF_IFARB_MSGVAL_CLR_MSK    0x7fffffff
/* The reset value of the ALT_CAN_MSGIF_IFARB_MSGVAL register field. */
#define ALT_CAN_MSGIF_IFARB_MSGVAL_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFARB_MSGVAL field value from a register. */
#define ALT_CAN_MSGIF_IFARB_MSGVAL_GET(value) (((value) & 0x80000000) >> 31)
/* Produces a ALT_CAN_MSGIF_IFARB_MSGVAL register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFARB_MSGVAL_SET(value) (((value) << 31) & 0x80000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CAN_MSGIF_IFARB.
 */
struct ALT_CAN_MSGIF_IFARB_s
{
    uint32_t  ID     : 29;  /* Identifier Mask */
    uint32_t  Dir    :  1;  /* Message Direction */
    uint32_t  Xtd    :  1;  /* Extended Identifier */
    uint32_t  MsgVal :  1;  /* Message Valid */
};

/* The typedef declaration for register ALT_CAN_MSGIF_IFARB. */
typedef volatile struct ALT_CAN_MSGIF_IFARB_s  ALT_CAN_MSGIF_IFARB_t;
#endif  /* __ASSEMBLY__ */

/* The byte offset of the ALT_CAN_MSGIF_IFARB register from the beginning of the component. */
#define ALT_CAN_MSGIF_IFARB_OFST        0x8
/* The address of the ALT_CAN_MSGIF_IFARB register. */
#define ALT_CAN_MSGIF_IFARB_ADDR(base, if_base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + if_base + ALT_CAN_MSGIF_IFARB_OFST))

/*
 * Register : IF Message Control Register - IFMCTR
 * 
 * The Arbitration Registers ID28-0, Xtd, and Dir are used to define the identifier
 * and type of outgoing messages and are used (together with the mask registers
 * Msk28-0, MXtd, and MDir) for acceptance filtering of incoming messages. A
 * received message is stored into the valid Message Object with matching
 * identifier and Direction=receive (Data Frame) or Direction=transmit (Remote
 * Frame). Extended frames can be stored only in Message Objects with Xtd = one,
 * standard frames in Message Objects with Xtd = zero. If a received message (Data
 * Frame or Remote Frame) matches with more than one valid Message Object, it is
 * stored into that with the lowest message number.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description              
 * :--------|:-------|:------|:--------------------------
 *  [3:0]   | RW     | 0x0   | Data Length Code         
 *  [6:4]   | ???    | 0x0   | *UNDEFINED*              
 *  [7]     | RW     | 0x0   | End Of Block             
 *  [8]     | RW     | 0x0   | Transmit Request         
 *  [9]     | RW     | 0x0   | Remote Enable            
 *  [10]    | RW     | 0x0   | Receive Interrupt Enable 
 *  [11]    | RW     | 0x0   | Transmit Interrupt Enable
 *  [12]    | RW     | 0x0   | Use Acceptance Mask      
 *  [13]    | RW     | 0x0   | Interrupt Pending        
 *  [14]    | RW     | 0x0   | Message Lost             
 *  [15]    | RW     | 0x0   | New Data                 
 *  [31:16] | ???    | 0x0   | *UNDEFINED*              
 * 
 */
/*
 * Field : Data Length Code - DLC
 * 
 * 0-8 Data Frame has 0-8 data bytes.
 * 
 * 9-15 Data Frame has 8 data bytes.
 * 
 * Note: The Data Length Code of a Message Object must be defined the same as in
 * all the corresponding objects with the same identifier at other nodes. When the
 * Message Handler stores a data frame, it will write the DLC to the value given by
 * the received message.
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFMCTR_DLC register field. */
#define ALT_CAN_MSGIF_IFMCTR_DLC_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFMCTR_DLC register field. */
#define ALT_CAN_MSGIF_IFMCTR_DLC_MSB        3
/* The width in bits of the ALT_CAN_MSGIF_IFMCTR_DLC register field. */
#define ALT_CAN_MSGIF_IFMCTR_DLC_WIDTH      4
/* The mask used to set the ALT_CAN_MSGIF_IFMCTR_DLC register field value. */
#define ALT_CAN_MSGIF_IFMCTR_DLC_SET_MSK    0x0000000f
/* The mask used to clear the ALT_CAN_MSGIF_IFMCTR_DLC register field value. */
#define ALT_CAN_MSGIF_IFMCTR_DLC_CLR_MSK    0xfffffff0
/* The reset value of the ALT_CAN_MSGIF_IFMCTR_DLC register field. */
#define ALT_CAN_MSGIF_IFMCTR_DLC_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFMCTR_DLC field value from a register. */
#define ALT_CAN_MSGIF_IFMCTR_DLC_GET(value) (((value) & 0x0000000f) >> 0)
/* Produces a ALT_CAN_MSGIF_IFMCTR_DLC register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFMCTR_DLC_SET(value) (((value) << 0) & 0x0000000f)

/*
 * Field : End Of Block - EoB
 * 
 * Note: This bit is used to concatenate two or more Message Objects (up to 128) to
 * build a FIFO Buffer. For single Message Objects (not belonging to a FIFO Buffer)
 * this bit must always be set to one.
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                     | Value | Description                                    
 * :-----------------------------------------|:------|:------------------------------------------------
 *  ALT_CAN_MSGIF_IFMCTR_EOB_E_NOTLAST      | 0x0   | Message Object belongs to a FIFO Buffer Block  
 * :                                         |       | and is not the last Message Object of that FIFO
 * :                                         |       | Buffer Block.                                  
 *  ALT_CAN_MSGIF_IFMCTR_EOB_E_SINGLEORLAST | 0x1   | Single Message Object or last Message Object of
 * :                                         |       | a FIFO Buffer Block.                           
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFMCTR_EOB
 * 
 * Message Object belongs to a FIFO Buffer Block and is not the last Message Object
 * of that FIFO Buffer Block.
 */
#define ALT_CAN_MSGIF_IFMCTR_EOB_E_NOTLAST         0x0
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFMCTR_EOB
 * 
 * Single Message Object or last Message Object of a FIFO Buffer Block.
 */
#define ALT_CAN_MSGIF_IFMCTR_EOB_E_SINGLEORLAST    0x1

/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFMCTR_EOB register field. */
#define ALT_CAN_MSGIF_IFMCTR_EOB_LSB        7
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFMCTR_EOB register field. */
#define ALT_CAN_MSGIF_IFMCTR_EOB_MSB        7
/* The width in bits of the ALT_CAN_MSGIF_IFMCTR_EOB register field. */
#define ALT_CAN_MSGIF_IFMCTR_EOB_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFMCTR_EOB register field value. */
#define ALT_CAN_MSGIF_IFMCTR_EOB_SET_MSK    0x00000080
/* The mask used to clear the ALT_CAN_MSGIF_IFMCTR_EOB register field value. */
#define ALT_CAN_MSGIF_IFMCTR_EOB_CLR_MSK    0xffffff7f
/* The reset value of the ALT_CAN_MSGIF_IFMCTR_EOB register field. */
#define ALT_CAN_MSGIF_IFMCTR_EOB_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFMCTR_EOB field value from a register. */
#define ALT_CAN_MSGIF_IFMCTR_EOB_GET(value) (((value) & 0x00000080) >> 7)
/* Produces a ALT_CAN_MSGIF_IFMCTR_EOB register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFMCTR_EOB_SET(value) (((value) << 7) & 0x00000080)

/*
 * Field : Transmit Request - TxRqst
 * 
 * Transmit Request
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description                               
 * :------------------------------------------|:------|:-------------------------------------------
 *  ALT_CAN_MSGIF_IFMCTR_TXRQST_E_NOTWAITING | 0x0   | This Message Object is not waiting for    
 * :                                          |       | transmission.                             
 *  ALT_CAN_MSGIF_IFMCTR_TXRQST_E_PENDING    | 0x1   | The transmission of this Message Object is
 * :                                          |       | requested and is not yet done.            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFMCTR_TXRQST
 * 
 * This Message Object is not waiting for transmission.
 */
#define ALT_CAN_MSGIF_IFMCTR_TXRQST_E_NOTWAITING   0x0
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFMCTR_TXRQST
 * 
 * The transmission of this Message Object is requested and is not yet done.
 */
#define ALT_CAN_MSGIF_IFMCTR_TXRQST_E_PENDING      0x1

/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFMCTR_TXRQST register field. */
#define ALT_CAN_MSGIF_IFMCTR_TXRQST_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFMCTR_TXRQST register field. */
#define ALT_CAN_MSGIF_IFMCTR_TXRQST_MSB        8
/* The width in bits of the ALT_CAN_MSGIF_IFMCTR_TXRQST register field. */
#define ALT_CAN_MSGIF_IFMCTR_TXRQST_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFMCTR_TXRQST register field value. */
#define ALT_CAN_MSGIF_IFMCTR_TXRQST_SET_MSK    0x00000100
/* The mask used to clear the ALT_CAN_MSGIF_IFMCTR_TXRQST register field value. */
#define ALT_CAN_MSGIF_IFMCTR_TXRQST_CLR_MSK    0xfffffeff
/* The reset value of the ALT_CAN_MSGIF_IFMCTR_TXRQST register field. */
#define ALT_CAN_MSGIF_IFMCTR_TXRQST_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFMCTR_TXRQST field value from a register. */
#define ALT_CAN_MSGIF_IFMCTR_TXRQST_GET(value) (((value) & 0x00000100) >> 8)
/* Produces a ALT_CAN_MSGIF_IFMCTR_TXRQST register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFMCTR_TXRQST_SET(value) (((value) << 8) & 0x00000100)

/*
 * Field : Remote Enable - RmtEn
 * 
 * Remote Enable
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                    | Value | Description                                  
 * :----------------------------------------|:------|:----------------------------------------------
 *  ALT_CAN_MSGIF_IFMCTR_RMTEN_E_UNCHANGED | 0x0   | At the reception of a Remote Frame, TxRqst is
 * :                                        |       | left unchanged.                              
 *  ALT_CAN_MSGIF_IFMCTR_RMTEN_E_SET       | 0x1   | At the reception of a Remote Frame, TxRqst is
 * :                                        |       | set.                                         
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFMCTR_RMTEN
 * 
 * At the reception of a Remote Frame, TxRqst is left unchanged.
 */
#define ALT_CAN_MSGIF_IFMCTR_RMTEN_E_UNCHANGED 0x0
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFMCTR_RMTEN
 * 
 * At the reception of a Remote Frame, TxRqst is set.
 */
#define ALT_CAN_MSGIF_IFMCTR_RMTEN_E_SET       0x1

/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFMCTR_RMTEN register field. */
#define ALT_CAN_MSGIF_IFMCTR_RMTEN_LSB        9
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFMCTR_RMTEN register field. */
#define ALT_CAN_MSGIF_IFMCTR_RMTEN_MSB        9
/* The width in bits of the ALT_CAN_MSGIF_IFMCTR_RMTEN register field. */
#define ALT_CAN_MSGIF_IFMCTR_RMTEN_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFMCTR_RMTEN register field value. */
#define ALT_CAN_MSGIF_IFMCTR_RMTEN_SET_MSK    0x00000200
/* The mask used to clear the ALT_CAN_MSGIF_IFMCTR_RMTEN register field value. */
#define ALT_CAN_MSGIF_IFMCTR_RMTEN_CLR_MSK    0xfffffdff
/* The reset value of the ALT_CAN_MSGIF_IFMCTR_RMTEN register field. */
#define ALT_CAN_MSGIF_IFMCTR_RMTEN_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFMCTR_RMTEN field value from a register. */
#define ALT_CAN_MSGIF_IFMCTR_RMTEN_GET(value) (((value) & 0x00000200) >> 9)
/* Produces a ALT_CAN_MSGIF_IFMCTR_RMTEN register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFMCTR_RMTEN_SET(value) (((value) << 9) & 0x00000200)

/*
 * Field : Receive Interrupt Enable - RxIE
 * 
 * Receive Interrupt Enable
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description                                    
 * :---------------------------------------|:------|:------------------------------------------------
 *  ALT_CAN_MSGIF_IFMCTR_RXIE_E_UNCHANGED | 0x0   | IntPnd will be left unchanged after the        
 * :                                       |       | successful reception of a frame.               
 *  ALT_CAN_MSGIF_IFMCTR_RXIE_E_SET       | 0x1   | IntPnd will be set after a successful reception
 * :                                       |       | of a frame.                                    
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFMCTR_RXIE
 * 
 * IntPnd will be left unchanged after the successful reception of a frame.
 */
#define ALT_CAN_MSGIF_IFMCTR_RXIE_E_UNCHANGED  0x0
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFMCTR_RXIE
 * 
 * IntPnd will be set after a successful reception of a frame.
 */
#define ALT_CAN_MSGIF_IFMCTR_RXIE_E_SET        0x1

/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFMCTR_RXIE register field. */
#define ALT_CAN_MSGIF_IFMCTR_RXIE_LSB        10
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFMCTR_RXIE register field. */
#define ALT_CAN_MSGIF_IFMCTR_RXIE_MSB        10
/* The width in bits of the ALT_CAN_MSGIF_IFMCTR_RXIE register field. */
#define ALT_CAN_MSGIF_IFMCTR_RXIE_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFMCTR_RXIE register field value. */
#define ALT_CAN_MSGIF_IFMCTR_RXIE_SET_MSK    0x00000400
/* The mask used to clear the ALT_CAN_MSGIF_IFMCTR_RXIE register field value. */
#define ALT_CAN_MSGIF_IFMCTR_RXIE_CLR_MSK    0xfffffbff
/* The reset value of the ALT_CAN_MSGIF_IFMCTR_RXIE register field. */
#define ALT_CAN_MSGIF_IFMCTR_RXIE_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFMCTR_RXIE field value from a register. */
#define ALT_CAN_MSGIF_IFMCTR_RXIE_GET(value) (((value) & 0x00000400) >> 10)
/* Produces a ALT_CAN_MSGIF_IFMCTR_RXIE register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFMCTR_RXIE_SET(value) (((value) << 10) & 0x00000400)

/*
 * Field : Transmit Interrupt Enable - TxIE
 * 
 * Transmit Interrupt Enable
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description                            
 * :---------------------------------------|:------|:----------------------------------------
 *  ALT_CAN_MSGIF_IFMCTR_TXIE_E_UNCHANGED | 0x0   | IntPnd will be left unchanged after the
 * :                                       |       | successful transmission of a frame.    
 *  ALT_CAN_MSGIF_IFMCTR_TXIE_E_SET       | 0x1   | IntPnd will be set after a successful  
 * :                                       |       | transmission of a frame.               
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFMCTR_TXIE
 * 
 * IntPnd will be left unchanged after the successful transmission of a frame.
 */
#define ALT_CAN_MSGIF_IFMCTR_TXIE_E_UNCHANGED  0x0
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFMCTR_TXIE
 * 
 * IntPnd will be set after a successful transmission of a frame.
 */
#define ALT_CAN_MSGIF_IFMCTR_TXIE_E_SET        0x1

/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFMCTR_TXIE register field. */
#define ALT_CAN_MSGIF_IFMCTR_TXIE_LSB        11
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFMCTR_TXIE register field. */
#define ALT_CAN_MSGIF_IFMCTR_TXIE_MSB        11
/* The width in bits of the ALT_CAN_MSGIF_IFMCTR_TXIE register field. */
#define ALT_CAN_MSGIF_IFMCTR_TXIE_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFMCTR_TXIE register field value. */
#define ALT_CAN_MSGIF_IFMCTR_TXIE_SET_MSK    0x00000800
/* The mask used to clear the ALT_CAN_MSGIF_IFMCTR_TXIE register field value. */
#define ALT_CAN_MSGIF_IFMCTR_TXIE_CLR_MSK    0xfffff7ff
/* The reset value of the ALT_CAN_MSGIF_IFMCTR_TXIE register field. */
#define ALT_CAN_MSGIF_IFMCTR_TXIE_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFMCTR_TXIE field value from a register. */
#define ALT_CAN_MSGIF_IFMCTR_TXIE_GET(value) (((value) & 0x00000800) >> 11)
/* Produces a ALT_CAN_MSGIF_IFMCTR_TXIE register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFMCTR_TXIE_SET(value) (((value) << 11) & 0x00000800)

/*
 * Field : Use Acceptance Mask - UMask
 * 
 * Use Acceptance Mask
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                | Value | Description                                     
 * :------------------------------------|:------|:-------------------------------------------------
 *  ALT_CAN_MSGIF_IFMCTR_UMSK_E_IGNORE | 0x0   | Acceptance formula1: (RTRRx == ~DIR) && (IDERx  
 * :                                    |       | == IDE) && (IDRx == ID)                         
 *  ALT_CAN_MSGIF_IFMCTR_UMSK_E_USE    | 0x1   | (Msk28-0, MXtd, and MDir) for acceptance        
 * :                                    |       | filtering, formula: ((RTRRx & MDIR) == (~DIR &  
 * :                                    |       | MDIR)) && ((IDERx & MXtd) == (IDE & MXtd)) &&   
 * :                                    |       | ((IDRx & Msk) == (ID & Msk))  Note: If the UMask
 * :                                    |       | bit is set to one, the Message Object's mask    
 * :                                    |       | bits have to be programmed during initialization
 * :                                    |       | of the Message Object before MsgVal is set to   
 * :                                    |       | one.                                            
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFMCTR_UMSK
 * 
 * Acceptance formula1:
 * 
 * (RTRRx == ~DIR) && (IDERx == IDE) && (IDRx == ID)
 */
#define ALT_CAN_MSGIF_IFMCTR_UMSK_E_IGNORE 0x0
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFMCTR_UMSK
 * 
 * (Msk28-0, MXtd, and MDir) for acceptance filtering, formula:
 * 
 * ((RTRRx & MDIR) == (~DIR & MDIR)) &&
 * 
 * ((IDERx & MXtd) == (IDE & MXtd)) &&
 * 
 * ((IDRx & Msk) == (ID & Msk))
 * 
 * Note: If the UMask bit is set to one, the Message Object's mask bits have to be
 * programmed during initialization of the Message Object before MsgVal is set to
 * one.
 */
#define ALT_CAN_MSGIF_IFMCTR_UMSK_E_USE    0x1

/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFMCTR_UMSK register field. */
#define ALT_CAN_MSGIF_IFMCTR_UMSK_LSB        12
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFMCTR_UMSK register field. */
#define ALT_CAN_MSGIF_IFMCTR_UMSK_MSB        12
/* The width in bits of the ALT_CAN_MSGIF_IFMCTR_UMSK register field. */
#define ALT_CAN_MSGIF_IFMCTR_UMSK_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFMCTR_UMSK register field value. */
#define ALT_CAN_MSGIF_IFMCTR_UMSK_SET_MSK    0x00001000
/* The mask used to clear the ALT_CAN_MSGIF_IFMCTR_UMSK register field value. */
#define ALT_CAN_MSGIF_IFMCTR_UMSK_CLR_MSK    0xffffefff
/* The reset value of the ALT_CAN_MSGIF_IFMCTR_UMSK register field. */
#define ALT_CAN_MSGIF_IFMCTR_UMSK_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFMCTR_UMSK field value from a register. */
#define ALT_CAN_MSGIF_IFMCTR_UMSK_GET(value) (((value) & 0x00001000) >> 12)
/* Produces a ALT_CAN_MSGIF_IFMCTR_UMSK register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFMCTR_UMSK_SET(value) (((value) << 12) & 0x00001000)

/*
 * Field : Interrupt Pending - IntPnd
 * 
 * Interrupt Pending
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                  | Value | Description                                  
 * :--------------------------------------|:------|:----------------------------------------------
 *  ALT_CAN_MSGIF_IFMCTR_INTPND_E_NOTSRC | 0x0   | This message object is not the source of an  
 * :                                      |       | interrupt.                                   
 *  ALT_CAN_MSGIF_IFMCTR_INTPND_E_SRC    | 0x1   | This message object is the source of an      
 * :                                      |       | interrupt. The Interrupt Identifier in the   
 * :                                      |       | Interrupt Register will point to this message
 * :                                      |       | object if there is no other interrupt source 
 * :                                      |       | with higher priority.                        
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFMCTR_INTPND
 * 
 * This message object is not the source of an interrupt.
 */
#define ALT_CAN_MSGIF_IFMCTR_INTPND_E_NOTSRC   0x0
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFMCTR_INTPND
 * 
 * This message object is the source of an interrupt. The Interrupt Identifier in
 * the Interrupt Register will point to this message object if there is no other
 * interrupt source with higher priority.
 */
#define ALT_CAN_MSGIF_IFMCTR_INTPND_E_SRC      0x1

/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFMCTR_INTPND register field. */
#define ALT_CAN_MSGIF_IFMCTR_INTPND_LSB        13
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFMCTR_INTPND register field. */
#define ALT_CAN_MSGIF_IFMCTR_INTPND_MSB        13
/* The width in bits of the ALT_CAN_MSGIF_IFMCTR_INTPND register field. */
#define ALT_CAN_MSGIF_IFMCTR_INTPND_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFMCTR_INTPND register field value. */
#define ALT_CAN_MSGIF_IFMCTR_INTPND_SET_MSK    0x00002000
/* The mask used to clear the ALT_CAN_MSGIF_IFMCTR_INTPND register field value. */
#define ALT_CAN_MSGIF_IFMCTR_INTPND_CLR_MSK    0xffffdfff
/* The reset value of the ALT_CAN_MSGIF_IFMCTR_INTPND register field. */
#define ALT_CAN_MSGIF_IFMCTR_INTPND_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFMCTR_INTPND field value from a register. */
#define ALT_CAN_MSGIF_IFMCTR_INTPND_GET(value) (((value) & 0x00002000) >> 13)
/* Produces a ALT_CAN_MSGIF_IFMCTR_INTPND register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFMCTR_INTPND_SET(value) (((value) << 13) & 0x00002000)

/*
 * Field : Message Lost - MsgLst
 * 
 * Message Lost
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                   | Value | Description                                   
 * :---------------------------------------|:------|:-----------------------------------------------
 *  ALT_CAN_MSGIF_IFMCTR_MSGLST_E_NOTLOST | 0x0   | No message lost since last time this bit was  
 * :                                       |       | reset by the CPU.                             
 *  ALT_CAN_MSGIF_IFMCTR_MSGLST_E_LOST    | 0x1   | The Message Handler stored a new message into 
 * :                                       |       | this object when NewDat was still set, the CPU
 * :                                       |       | has lost a message.                           
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFMCTR_MSGLST
 * 
 * No message lost since last time this bit was reset by the CPU.
 */
#define ALT_CAN_MSGIF_IFMCTR_MSGLST_E_NOTLOST  0x0
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFMCTR_MSGLST
 * 
 * The Message Handler stored a new message into this object when NewDat was still
 * set, the CPU has lost a message.
 */
#define ALT_CAN_MSGIF_IFMCTR_MSGLST_E_LOST     0x1

/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFMCTR_MSGLST register field. */
#define ALT_CAN_MSGIF_IFMCTR_MSGLST_LSB        14
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFMCTR_MSGLST register field. */
#define ALT_CAN_MSGIF_IFMCTR_MSGLST_MSB        14
/* The width in bits of the ALT_CAN_MSGIF_IFMCTR_MSGLST register field. */
#define ALT_CAN_MSGIF_IFMCTR_MSGLST_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFMCTR_MSGLST register field value. */
#define ALT_CAN_MSGIF_IFMCTR_MSGLST_SET_MSK    0x00004000
/* The mask used to clear the ALT_CAN_MSGIF_IFMCTR_MSGLST register field value. */
#define ALT_CAN_MSGIF_IFMCTR_MSGLST_CLR_MSK    0xffffbfff
/* The reset value of the ALT_CAN_MSGIF_IFMCTR_MSGLST register field. */
#define ALT_CAN_MSGIF_IFMCTR_MSGLST_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFMCTR_MSGLST field value from a register. */
#define ALT_CAN_MSGIF_IFMCTR_MSGLST_GET(value) (((value) & 0x00004000) >> 14)
/* Produces a ALT_CAN_MSGIF_IFMCTR_MSGLST register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFMCTR_MSGLST_SET(value) (((value) << 14) & 0x00004000)

/*
 * Field : New Data - NewDat
 * 
 * New Data
 * 
 * Field Enumeration Values:
 * 
 *  Enum                                      | Value | Description                                     
 * :------------------------------------------|:------|:-------------------------------------------------
 *  ALT_CAN_MSGIF_IFMCTR_NEWDAT_E_NOTWRITTEN | 0x0   | No new data has been written into the data      
 * :                                          |       | portion of this Message Object by the Message   
 * :                                          |       | Handler since last time this flag was cleared by
 * :                                          |       | the CPU.                                        
 *  ALT_CAN_MSGIF_IFMCTR_NEWDAT_E_WRITTEN    | 0x1   | The Message Handler or the CPU has written new  
 * :                                          |       | data into the data portion of this Message      
 * :                                          |       | Object.                                         
 * 
 * Field Access Macros:
 * 
 */
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFMCTR_NEWDAT
 * 
 * No new data has been written into the data portion of this Message Object by the
 * Message Handler since last time this flag was cleared by the CPU.
 */
#define ALT_CAN_MSGIF_IFMCTR_NEWDAT_E_NOTWRITTEN   0x0
/*
 * Enumerated value for register field ALT_CAN_MSGIF_IFMCTR_NEWDAT
 * 
 * The Message Handler or the CPU has written new data into the data portion of
 * this Message Object.
 */
#define ALT_CAN_MSGIF_IFMCTR_NEWDAT_E_WRITTEN      0x1

/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFMCTR_NEWDAT register field. */
#define ALT_CAN_MSGIF_IFMCTR_NEWDAT_LSB        15
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFMCTR_NEWDAT register field. */
#define ALT_CAN_MSGIF_IFMCTR_NEWDAT_MSB        15
/* The width in bits of the ALT_CAN_MSGIF_IFMCTR_NEWDAT register field. */
#define ALT_CAN_MSGIF_IFMCTR_NEWDAT_WIDTH      1
/* The mask used to set the ALT_CAN_MSGIF_IFMCTR_NEWDAT register field value. */
#define ALT_CAN_MSGIF_IFMCTR_NEWDAT_SET_MSK    0x00008000
/* The mask used to clear the ALT_CAN_MSGIF_IFMCTR_NEWDAT register field value. */
#define ALT_CAN_MSGIF_IFMCTR_NEWDAT_CLR_MSK    0xffff7fff
/* The reset value of the ALT_CAN_MSGIF_IFMCTR_NEWDAT register field. */
#define ALT_CAN_MSGIF_IFMCTR_NEWDAT_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFMCTR_NEWDAT field value from a register. */
#define ALT_CAN_MSGIF_IFMCTR_NEWDAT_GET(value) (((value) & 0x00008000) >> 15)
/* Produces a ALT_CAN_MSGIF_IFMCTR_NEWDAT register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFMCTR_NEWDAT_SET(value) (((value) << 15) & 0x00008000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CAN_MSGIF_IFMCTR.
 */
struct ALT_CAN_MSGIF_IFMCTR_s
{
    uint32_t  DLC    :  4;  /* Data Length Code */
    uint32_t         :  3;  /* *UNDEFINED* */
    uint32_t  EoB    :  1;  /* End Of Block */
    uint32_t  TxRqst :  1;  /* Transmit Request */
    uint32_t  RmtEn  :  1;  /* Remote Enable */
    uint32_t  RxIE   :  1;  /* Receive Interrupt Enable */
    uint32_t  TxIE   :  1;  /* Transmit Interrupt Enable */
    uint32_t  UMask  :  1;  /* Use Acceptance Mask */
    uint32_t  IntPnd :  1;  /* Interrupt Pending */
    uint32_t  MsgLst :  1;  /* Message Lost */
    uint32_t  NewDat :  1;  /* New Data */
    uint32_t         : 16;  /* *UNDEFINED* */
};

/* The typedef declaration for register ALT_CAN_MSGIF_IFMCTR. */
typedef volatile struct ALT_CAN_MSGIF_IFMCTR_s  ALT_CAN_MSGIF_IFMCTR_t;
#endif  /* __ASSEMBLY__ */

/* The byte offset of the ALT_CAN_MSGIF_IFMCTR register from the beginning of the component. */
#define ALT_CAN_MSGIF_IFMCTR_OFST        0xc
/* The address of the ALT_CAN_MSGIF_IFMCTR register. */
#define ALT_CAN_MSGIF_IFMCTR_ADDR(base, if_base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + if_base + ALT_CAN_MSGIF_IFMCTR_OFST))

/*
 * Register : IF Data A Register - IFDA
 * 
 * The data bytes of CAN messages are stored in the IF/2 registers in the
 * following order. In a CAN Data Frame, Data(0) is the first, Data(7) is the last
 * byte to be transmitted or received. In CAN's serial bit stream, the MSB of each
 * byte will be transmitted first.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description
 * :--------|:-------|:------|:------------
 *  [7:0]   | RW     | 0x0   | Data 0     
 *  [15:8]  | RW     | 0x0   | Data 1     
 *  [23:16] | RW     | 0x0   | Data 2     
 *  [31:24] | RW     | 0x0   | Data 3     
 * 
 */
/*
 * Field : Data 0 - Data0
 * 
 * 1st data byte of a CAN Data Frame
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFDA_DATA0 register field. */
#define ALT_CAN_MSGIF_IFDA_DATA0_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFDA_DATA0 register field. */
#define ALT_CAN_MSGIF_IFDA_DATA0_MSB        7
/* The width in bits of the ALT_CAN_MSGIF_IFDA_DATA0 register field. */
#define ALT_CAN_MSGIF_IFDA_DATA0_WIDTH      8
/* The mask used to set the ALT_CAN_MSGIF_IFDA_DATA0 register field value. */
#define ALT_CAN_MSGIF_IFDA_DATA0_SET_MSK    0x000000ff
/* The mask used to clear the ALT_CAN_MSGIF_IFDA_DATA0 register field value. */
#define ALT_CAN_MSGIF_IFDA_DATA0_CLR_MSK    0xffffff00
/* The reset value of the ALT_CAN_MSGIF_IFDA_DATA0 register field. */
#define ALT_CAN_MSGIF_IFDA_DATA0_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFDA_DATA0 field value from a register. */
#define ALT_CAN_MSGIF_IFDA_DATA0_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_CAN_MSGIF_IFDA_DATA0 register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFDA_DATA0_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : Data 1 - Data1
 * 
 * 2nd data byte of a CAN Data Frame
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFDA_DATA1 register field. */
#define ALT_CAN_MSGIF_IFDA_DATA1_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFDA_DATA1 register field. */
#define ALT_CAN_MSGIF_IFDA_DATA1_MSB        15
/* The width in bits of the ALT_CAN_MSGIF_IFDA_DATA1 register field. */
#define ALT_CAN_MSGIF_IFDA_DATA1_WIDTH      8
/* The mask used to set the ALT_CAN_MSGIF_IFDA_DATA1 register field value. */
#define ALT_CAN_MSGIF_IFDA_DATA1_SET_MSK    0x0000ff00
/* The mask used to clear the ALT_CAN_MSGIF_IFDA_DATA1 register field value. */
#define ALT_CAN_MSGIF_IFDA_DATA1_CLR_MSK    0xffff00ff
/* The reset value of the ALT_CAN_MSGIF_IFDA_DATA1 register field. */
#define ALT_CAN_MSGIF_IFDA_DATA1_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFDA_DATA1 field value from a register. */
#define ALT_CAN_MSGIF_IFDA_DATA1_GET(value) (((value) & 0x0000ff00) >> 8)
/* Produces a ALT_CAN_MSGIF_IFDA_DATA1 register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFDA_DATA1_SET(value) (((value) << 8) & 0x0000ff00)

/*
 * Field : Data 2 - Data2
 * 
 * 3rd data byte of a CAN Data Frame
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFDA_DATA2 register field. */
#define ALT_CAN_MSGIF_IFDA_DATA2_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFDA_DATA2 register field. */
#define ALT_CAN_MSGIF_IFDA_DATA2_MSB        23
/* The width in bits of the ALT_CAN_MSGIF_IFDA_DATA2 register field. */
#define ALT_CAN_MSGIF_IFDA_DATA2_WIDTH      8
/* The mask used to set the ALT_CAN_MSGIF_IFDA_DATA2 register field value. */
#define ALT_CAN_MSGIF_IFDA_DATA2_SET_MSK    0x00ff0000
/* The mask used to clear the ALT_CAN_MSGIF_IFDA_DATA2 register field value. */
#define ALT_CAN_MSGIF_IFDA_DATA2_CLR_MSK    0xff00ffff
/* The reset value of the ALT_CAN_MSGIF_IFDA_DATA2 register field. */
#define ALT_CAN_MSGIF_IFDA_DATA2_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFDA_DATA2 field value from a register. */
#define ALT_CAN_MSGIF_IFDA_DATA2_GET(value) (((value) & 0x00ff0000) >> 16)
/* Produces a ALT_CAN_MSGIF_IFDA_DATA2 register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFDA_DATA2_SET(value) (((value) << 16) & 0x00ff0000)

/*
 * Field : Data 3 - Data3
 * 
 * 4th data byte of a CAN Data Frame
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFDA_DATA3 register field. */
#define ALT_CAN_MSGIF_IFDA_DATA3_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFDA_DATA3 register field. */
#define ALT_CAN_MSGIF_IFDA_DATA3_MSB        31
/* The width in bits of the ALT_CAN_MSGIF_IFDA_DATA3 register field. */
#define ALT_CAN_MSGIF_IFDA_DATA3_WIDTH      8
/* The mask used to set the ALT_CAN_MSGIF_IFDA_DATA3 register field value. */
#define ALT_CAN_MSGIF_IFDA_DATA3_SET_MSK    0xff000000
/* The mask used to clear the ALT_CAN_MSGIF_IFDA_DATA3 register field value. */
#define ALT_CAN_MSGIF_IFDA_DATA3_CLR_MSK    0x00ffffff
/* The reset value of the ALT_CAN_MSGIF_IFDA_DATA3 register field. */
#define ALT_CAN_MSGIF_IFDA_DATA3_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFDA_DATA3 field value from a register. */
#define ALT_CAN_MSGIF_IFDA_DATA3_GET(value) (((value) & 0xff000000) >> 24)
/* Produces a ALT_CAN_MSGIF_IFDA_DATA3 register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFDA_DATA3_SET(value) (((value) << 24) & 0xff000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CAN_MSGIF_IFDA.
 */
struct ALT_CAN_MSGIF_IFDA_s
{
    uint32_t  Data0 :  8;  /* Data 0 */
    uint32_t  Data1 :  8;  /* Data 1 */
    uint32_t  Data2 :  8;  /* Data 2 */
    uint32_t  Data3 :  8;  /* Data 3 */
};

/* The typedef declaration for register ALT_CAN_MSGIF_IFDA. */
typedef volatile struct ALT_CAN_MSGIF_IFDA_s  ALT_CAN_MSGIF_IFDA_t;
#endif  /* __ASSEMBLY__ */

/* The byte offset of the ALT_CAN_MSGIF_IFDA register from the beginning of the component. */
#define ALT_CAN_MSGIF_IFDA_OFST        0x10
/* The address of the ALT_CAN_MSGIF_IFDA register. */
#define ALT_CAN_MSGIF_IFDA_ADDR(base, if_base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + if_base + ALT_CAN_MSGIF_IFDA_OFST))

/*
 * Register : IF Data B Register - IFDB
 * 
 * The data bytes of CAN messages are stored in the IF/2 registers in the
 * following order. In a CAN Data Frame, Data(0) is the first, Data(7) is the last
 * byte to be transmitted or received. In CAN's serial bit stream, the MSB of each
 * byte will be transmitted first.
 * 
 * Register Layout
 * 
 *  Bits    | Access | Reset | Description
 * :--------|:-------|:------|:------------
 *  [7:0]   | RW     | 0x0   | Data 0     
 *  [15:8]  | RW     | 0x0   | Data 1     
 *  [23:16] | RW     | 0x0   | Data 2     
 *  [31:24] | RW     | 0x0   | Data 3     
 * 
 */
/*
 * Field : Data 0 - Data4
 * 
 * 5th data byte of a CAN Data Frame
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFDB_DATA4 register field. */
#define ALT_CAN_MSGIF_IFDB_DATA4_LSB        0
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFDB_DATA4 register field. */
#define ALT_CAN_MSGIF_IFDB_DATA4_MSB        7
/* The width in bits of the ALT_CAN_MSGIF_IFDB_DATA4 register field. */
#define ALT_CAN_MSGIF_IFDB_DATA4_WIDTH      8
/* The mask used to set the ALT_CAN_MSGIF_IFDB_DATA4 register field value. */
#define ALT_CAN_MSGIF_IFDB_DATA4_SET_MSK    0x000000ff
/* The mask used to clear the ALT_CAN_MSGIF_IFDB_DATA4 register field value. */
#define ALT_CAN_MSGIF_IFDB_DATA4_CLR_MSK    0xffffff00
/* The reset value of the ALT_CAN_MSGIF_IFDB_DATA4 register field. */
#define ALT_CAN_MSGIF_IFDB_DATA4_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFDB_DATA4 field value from a register. */
#define ALT_CAN_MSGIF_IFDB_DATA4_GET(value) (((value) & 0x000000ff) >> 0)
/* Produces a ALT_CAN_MSGIF_IFDB_DATA4 register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFDB_DATA4_SET(value) (((value) << 0) & 0x000000ff)

/*
 * Field : Data 1 - Data5
 * 
 * 6th data byte of a CAN Data Frame
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFDB_DATA5 register field. */
#define ALT_CAN_MSGIF_IFDB_DATA5_LSB        8
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFDB_DATA5 register field. */
#define ALT_CAN_MSGIF_IFDB_DATA5_MSB        15
/* The width in bits of the ALT_CAN_MSGIF_IFDB_DATA5 register field. */
#define ALT_CAN_MSGIF_IFDB_DATA5_WIDTH      8
/* The mask used to set the ALT_CAN_MSGIF_IFDB_DATA5 register field value. */
#define ALT_CAN_MSGIF_IFDB_DATA5_SET_MSK    0x0000ff00
/* The mask used to clear the ALT_CAN_MSGIF_IFDB_DATA5 register field value. */
#define ALT_CAN_MSGIF_IFDB_DATA5_CLR_MSK    0xffff00ff
/* The reset value of the ALT_CAN_MSGIF_IFDB_DATA5 register field. */
#define ALT_CAN_MSGIF_IFDB_DATA5_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFDB_DATA5 field value from a register. */
#define ALT_CAN_MSGIF_IFDB_DATA5_GET(value) (((value) & 0x0000ff00) >> 8)
/* Produces a ALT_CAN_MSGIF_IFDB_DATA5 register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFDB_DATA5_SET(value) (((value) << 8) & 0x0000ff00)

/*
 * Field : Data 2 - Data6
 * 
 * 7th data byte of a CAN Data Frame
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFDB_DATA6 register field. */
#define ALT_CAN_MSGIF_IFDB_DATA6_LSB        16
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFDB_DATA6 register field. */
#define ALT_CAN_MSGIF_IFDB_DATA6_MSB        23
/* The width in bits of the ALT_CAN_MSGIF_IFDB_DATA6 register field. */
#define ALT_CAN_MSGIF_IFDB_DATA6_WIDTH      8
/* The mask used to set the ALT_CAN_MSGIF_IFDB_DATA6 register field value. */
#define ALT_CAN_MSGIF_IFDB_DATA6_SET_MSK    0x00ff0000
/* The mask used to clear the ALT_CAN_MSGIF_IFDB_DATA6 register field value. */
#define ALT_CAN_MSGIF_IFDB_DATA6_CLR_MSK    0xff00ffff
/* The reset value of the ALT_CAN_MSGIF_IFDB_DATA6 register field. */
#define ALT_CAN_MSGIF_IFDB_DATA6_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFDB_DATA6 field value from a register. */
#define ALT_CAN_MSGIF_IFDB_DATA6_GET(value) (((value) & 0x00ff0000) >> 16)
/* Produces a ALT_CAN_MSGIF_IFDB_DATA6 register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFDB_DATA6_SET(value) (((value) << 16) & 0x00ff0000)

/*
 * Field : Data 3 - Data7
 * 
 * 8th data byte of a CAN Data Frame
 * 
 * Field Access Macros:
 * 
 */
/* The Least Significant Bit (LSB) position of the ALT_CAN_MSGIF_IFDB_DATA7 register field. */
#define ALT_CAN_MSGIF_IFDB_DATA7_LSB        24
/* The Most Significant Bit (MSB) position of the ALT_CAN_MSGIF_IFDB_DATA7 register field. */
#define ALT_CAN_MSGIF_IFDB_DATA7_MSB        31
/* The width in bits of the ALT_CAN_MSGIF_IFDB_DATA7 register field. */
#define ALT_CAN_MSGIF_IFDB_DATA7_WIDTH      8
/* The mask used to set the ALT_CAN_MSGIF_IFDB_DATA7 register field value. */
#define ALT_CAN_MSGIF_IFDB_DATA7_SET_MSK    0xff000000
/* The mask used to clear the ALT_CAN_MSGIF_IFDB_DATA7 register field value. */
#define ALT_CAN_MSGIF_IFDB_DATA7_CLR_MSK    0x00ffffff
/* The reset value of the ALT_CAN_MSGIF_IFDB_DATA7 register field. */
#define ALT_CAN_MSGIF_IFDB_DATA7_RESET      0x0
/* Extracts the ALT_CAN_MSGIF_IFDB_DATA7 field value from a register. */
#define ALT_CAN_MSGIF_IFDB_DATA7_GET(value) (((value) & 0xff000000) >> 24)
/* Produces a ALT_CAN_MSGIF_IFDB_DATA7 register field value suitable for setting the register. */
#define ALT_CAN_MSGIF_IFDB_DATA7_SET(value) (((value) << 24) & 0xff000000)

#ifndef __ASSEMBLY__
/*
 * WARNING: The C register and register group struct declarations are provided for
 * convenience and illustrative purposes. They should, however, be used with
 * caution as the C language standard provides no guarantees about the alignment or
 * atomicity of device memory accesses. The recommended practice for writing
 * hardware drivers is to use the SoCAL access macros and alt_read_word() and
 * alt_write_word() functions.
 * 
 * The struct declaration for register ALT_CAN_MSGIF_IFDB.
 */
struct ALT_CAN_MSGIF_IFDB_s
{
    uint32_t  Data4 :  8;  /* Data 0 */
    uint32_t  Data5 :  8;  /* Data 1 */
    uint32_t  Data6 :  8;  /* Data 2 */
    uint32_t  Data7 :  8;  /* Data 3 */
};

/* The typedef declaration for register ALT_CAN_MSGIF_IFDB. */
typedef volatile struct ALT_CAN_MSGIF_IFDB_s  ALT_CAN_MSGIF_IFDB_t;
#endif  /* __ASSEMBLY__ */

/* The byte offset of the ALT_CAN_MSGIF_IFDB register from the beginning of the component. */
#define ALT_CAN_MSGIF_IFDB_OFST        0x14
/* The address of the ALT_CAN_MSGIF_IFDB register. */
#define ALT_CAN_MSGIF_IFDB_ADDR(base, if_base)  ALT_CAST(void *, (ALT_CAST(char *, (base)) + if_base + ALT_CAN_MSGIF_IFDB_OFST))


#ifdef __cplusplus
}
#endif  /* __cplusplus */
#endif  /* __ALTERA_ALT_CAN_PRIVATE_H__ */

#endif /* defined soc_cv_av */
