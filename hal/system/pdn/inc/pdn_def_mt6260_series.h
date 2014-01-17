/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE. 
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *    pdn_def_mt6260_series.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file defines PDN X-MACRO for MT6252 series chips.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*
 * Define pre-register PDN users. Need to sync with lpwr.c and register to L1SM.
 * format: X_PDN_USER(DEVICE_NAME, PDN_CON_REG, PDN_SET_REG, PDN_CLR_REG, PDN_REG_POS, PDN_OPTIONS)
 */

X_PDN_CONST(UART1, DRVPDN_MCUSYS_PDN_CON1, DRVPDN_MCUSYS_PDN_CON1_SET, DRVPDN_MCUSYS_PDN_CON1_CLR, DRVPDN_CON1_UART1, PDN_OPT_32BIT_REG | PDN_OPT_NEVER_OFF)
X_PDN_CONST(UART2, DRVPDN_MCUSYS_PDN_CON1, DRVPDN_MCUSYS_PDN_CON1_SET, DRVPDN_MCUSYS_PDN_CON1_CLR, DRVPDN_CON1_UART2, PDN_OPT_32BIT_REG | PDN_OPT_NEVER_OFF)
//X_PDN_USER(ALTER, DRVPDN_CON1, DRVPDN_CON1_SET, DRVPDN_CON1_CLR, DRVPDN_CON1_ALTER, PDN_OPT_16BIT_REG)
X_PDN_CONST(GCU, DRVPDN_MODEMSYS_CG_CON2, DRVPDN_MODEMSYS_CG_SET2, DRVPDN_MODEMSYS_CG_CLR2, MODEMSYS_CG_CON2_GCU, PDN_OPT_32BIT_REG)
X_PDN_CONST(DMA, DRVPDN_MCUSYS_PDN_CON1, DRVPDN_MCUSYS_PDN_CON1_SET, DRVPDN_MCUSYS_PDN_CON1_CLR, DRVPDN_CON1_DMA, PDN_OPT_32BIT_REG)
X_PDN_CONST(SIM, DRVPDN_MCUSYS_PDN_CON1, DRVPDN_MCUSYS_PDN_CON1_SET, DRVPDN_MCUSYS_PDN_CON1_CLR, DRVPDN_CON1_SIM, PDN_OPT_32BIT_REG)
//X_PDN_USER(ADC, DRVPDN_MCUSYS_PDN_CON2, DRVPDN_MCUSYS_PDN_CON2_SET, DRVPDN_MCUSYS_PDN_CON2_CLR, DRVPDN_CON2_AUXADC, PDN_OPT_32BIT_REG)
X_PDN_CONST(ADC, DRVPDN_ACFG_CLK_CON0, DRVPDN_ACFG_CLK_SET0, DRVPDN_ACFG_CLK_CLR0, DRVPDN_ACFG_CON0_AUXADC_BCLK, PDN_OPT_16BIT_REG)
X_PDN_CONST(GPT, DRVPDN_MCUSYS_PDN_CON2, DRVPDN_MCUSYS_PDN_CON2_SET, DRVPDN_MCUSYS_PDN_CON2_CLR, DRVPDN_CON2_GPT, PDN_OPT_32BIT_REG)
X_PDN_CONST(PWM, DRVPDN_MCUSYS_PDN_CON2, DRVPDN_MCUSYS_PDN_CON2_SET, DRVPDN_MCUSYS_PDN_CON2_CLR, DRVPDN_CON2_PWM, PDN_OPT_32BIT_REG)
X_PDN_CONST(PWM2, DRVPDN_ACFG_CLK_CON0, DRVPDN_ACFG_CLK_SET0, DRVPDN_ACFG_CLK_CLR0,DRVPDN_ACFG_CON0_PWM2, PDN_OPT_16BIT_REG)
X_PDN_CONST(USB, DRVPDN_MCUSYS_PDN_CON1, DRVPDN_MCUSYS_PDN_CON1_SET, DRVPDN_MCUSYS_PDN_CON1_CLR, DRVPDN_CON1_USB, PDN_OPT_32BIT_REG)
//X_PDN_USER(UART3, DRVPDN_MCUSYS_PDN_CON1, DRVPDN_MCUSYS_PDN_CON1_SET, DRVPDN_MCUSYS_PDN_CON1_CLR, DRVPDN_CON1_UART3, PDN_OPT_32BIT_REG | PDN_OPT_NEVER_OFF)
X_PDN_CONST(MSDC, DRVPDN_MCUSYS_PDN_CON1, DRVPDN_MCUSYS_PDN_CON1_SET, DRVPDN_MCUSYS_PDN_CON1_CLR, DRVPDN_CON1_MSDC, PDN_OPT_32BIT_REG)
X_PDN_CONST(NFI, DRVPDN_MCUSYS_PDN_CON2, DRVPDN_MCUSYS_PDN_CON2_SET, DRVPDN_MCUSYS_PDN_CON2_CLR, DRVPDN_CON2_NFI, PDN_OPT_32BIT_REG)
//X_PDN_USER(B2SPI, 0, 0, 0, 0, 0)
//X_PDN_USER(IMGPROC, 0, 0, 0, 0, 0)
//X_PDN_USER(IMGDMA, 0, 0, 0, 0, 0)
//X_PDN_USER(GIF, 0, 0, 0, 0, 0)
X_PDN_CONST(RESZ, DRVPDN_MCUSYS_PDN_CON0, DRVPDN_MCUSYS_PDN_CON0_SET, DRVPDN_MCUSYS_PDN_CON0_CLR, DRVPDN_CON0_SW_RESIZER, PDN_OPT_32BIT_REG)
//X_PDN_USER(IRDA, DRVPDN_CON1, DRVPDN_CON1_SET, DRVPDN_CON1_CLR, DRVPDN_CON1_IRDA, PDN_OPT_16BIT_REG)
//X_PDN_USER(TRC, 0, 0, 0, 0, 0)
//X_PDN_USER(PFC, 0, 0, 0, 0, 0)
//X_PDN_USER(PNG, 0, 0, 0, 0 0)
X_PDN_CONST(MSDC2, DRVPDN_MCUSYS_PDN_CON2, DRVPDN_MCUSYS_PDN_CON2_SET, DRVPDN_MCUSYS_PDN_CON2_CLR, DRVPDN_CON2_MSDC2, PDN_OPT_32BIT_REG)
X_PDN_CONST(SIM2, DRVPDN_MCUSYS_PDN_CON1, DRVPDN_MCUSYS_PDN_CON1_SET, DRVPDN_MCUSYS_PDN_CON1_CLR, DRVPDN_CON1_SIM2, PDN_OPT_32BIT_REG)
X_PDN_CONST(ROTDMA, DRVPDN_MCUSYS_PDN_CON0, DRVPDN_MCUSYS_PDN_CON0_SET, DRVPDN_MCUSYS_PDN_CON0_CLR, DRVPDN_CON0_SW_ROTDMA, PDN_OPT_32BIT_REG)
//X_PDN_USER(CAM104M, DRVPDN_CON3, DRVPDN_CON3_SET, DRVPDN_CON3_CLR, DRVPDN_CON3_CAM104M, PDN_OPT_16BIT_REG)
//X_PDN_USER(LCD104M, DRVPDN_CON3, DRVPDN_CON3_SET, DRVPDN_CON3_CLR, DRVPDN_CON3_LCD104M, PDN_OPT_16BIT_REG)

/*
 * Define remaining PDN users.
 * format: X_PDN_CONST(DEVICE_NAME, PDN_CON_REG, PDN_SET_REG, PDN_CLR_REG, PDN_REG_POS, PDN_OPTIONS)
 */

//X_PDN_CONST(WAVETABLE, DRVPDN_CON0, DRVPDN_CON0_SET, DRVPDN_CON0_CLR, DRVPDN_CON0_WAVETABLE, PDN_OPT_16BIT_REG)
X_PDN_CONST(IRDMA, DRVPDN_MD2GSYS_CG_CON0, DRVPDN_MD2GSYS_CG_CON0_SET, DRVPDN_MD2GSYS_CG_CON0_CLR, MD2GSYS_CG_CON0_IRDMA, PDN_OPT_16BIT_REG)
X_PDN_CONST(IRDBG, DRVPDN_MD2GSYS_CG_CON0, DRVPDN_MD2GSYS_CG_CON0_SET, DRVPDN_MD2GSYS_CG_CON0_CLR, MD2GSYS_CG_CON0_IRDBG, PDN_OPT_16BIT_REG)

//X_PDN_CONST(KP, DRVPDN_CON1, DRVPDN_CON1_SET, DRVPDN_CON1_CLR, DRVPDN_CON1_KP, PDN_OPT_16BIT_REG)
//X_PDN_CONST(GPIO, DRVPDN_CON1, DRVPDN_CON1_SET, DRVPDN_CON1_CLR, DRVPDN_CON1_GPIO, PDN_OPT_16BIT_REG)
X_PDN_CONST(LCD, DRVPDN_MCUSYS_PDN_CON0, DRVPDN_MCUSYS_PDN_CON0_SET, DRVPDN_MCUSYS_PDN_CON0_CLR, DRVPDN_CON0_SW_LCD, PDN_OPT_32BIT_REG)
//X_PDN_CONST(TP, DRVPDN_MCUSYS_PDN_CON2, DRVPDN_MCUSYS_PDN_CON2_SET, DRVPDN_MCUSYS_PDN_CON2_CLR, DRVPDN_CON2_TP, PDN_OPT_32BIT_REG)
X_PDN_CONST(TP, DRVPDN_ACFG_CLK_CON0, DRVPDN_ACFG_CLK_SET0, DRVPDN_ACFG_CLK_CLR0, DRVPDN_ACFG_CON0_TP_BCLK, PDN_OPT_16BIT_REG)
//X_PDN_CONST(SWDBG, DRVPDN_CON1, DRVPDN_CON1_SET, DRVPDN_CON1_CLR, DRVPDN_CON1_SWDBG, PDN_OPT_16BIT_REG)

X_PDN_CONST(TDMA, DRVPDN_MODEMSYS_CG_CON2,DRVPDN_MODEMSYS_CG_SET2, DRVPDN_MODEMSYS_CG_CLR2, MODEMSYS_CG_CON2_TDMA, PDN_OPT_32BIT_REG)
//X_PDN_CONST(RTC, DRVPDN_CON2, DRVPDN_CON2_SET, DRVPDN_CON2_CLR, DRVPDN_CON2_RTC, PDN_OPT_16BIT_REG)
X_PDN_CONST(BSI, DRVPDN_MODEMSYS_CG_CON4, DRVPDN_MODEMSYS_CG_SET4, DRVPDN_MODEMSYS_CG_CLR4, MODEMSYS_CG_CON4_BSI, PDN_OPT_32BIT_REG)
X_PDN_CONST(BPI, DRVPDN_MODEMSYS_CG_CON4, DRVPDN_MODEMSYS_CG_SET4, DRVPDN_MODEMSYS_CG_CLR4, MODEMSYS_CG_CON4_BPI, PDN_OPT_32BIT_REG)
//X_PDN_CONST(AFC, DRVPDN_CON2, DRVPDN_CON2_SET, DRVPDN_CON2_CLR, DRVPDN_CON2_AFC, PDN_OPT_16BIT_REG)
X_PDN_CONST(APC_PRE, DRVPDN_MD2GSYS_CG_CON2, DRVPDN_MD2GSYS_CG_CON2_SET, DRVPDN_MD2GSYS_CG_CON2_CLR, MD2GSYS_CG_CON2_APC_PRE, PDN_OPT_16BIT_REG)
X_PDN_CONST(APC, DRVPDN_MD2GSYS_CG_CON4, DRVPDN_MD2GSYS_CG_CON4_SET, DRVPDN_MD2GSYS_CG_CON4_CLR, MD2GSYS_CG_CON4_APC, PDN_OPT_16BIT_REG)
X_PDN_CONST(FCS, DRVPDN_MODEMSYS_CG_CON2, DRVPDN_MODEMSYS_CG_SET2, DRVPDN_MODEMSYS_CG_CLR2, MODEMSYS_CG_CON2_FCS, PDN_OPT_32BIT_REG)
X_PDN_CONST(VAFE,DRVPDN_MD2GSYS_CG_CON2, DRVPDN_MD2GSYS_CG_CON2_SET, DRVPDN_MD2GSYS_CG_CON2_CLR, MD2GSYS_CG_CON2_VAFE, PDN_OPT_16BIT_REG)
X_PDN_CONST(BFE, DRVPDN_MD2GSYS_CG_CON2, DRVPDN_MD2GSYS_CG_CON2_SET, DRVPDN_MD2GSYS_CG_CON2_CLR, MD2GSYS_CG_CON2_BFE, PDN_OPT_16BIT_REG)
X_PDN_CONST(GCC, DRVPDN_MD2GSYS_CG_CON0, DRVPDN_MD2GSYS_CG_CON0_SET, DRVPDN_MD2GSYS_CG_CON0_CLR, MD2GSYS_CG_CON0_GCC, PDN_OPT_16BIT_REG)
X_PDN_CONST(DIV, DRVPDN_MODEMSYS_CG_CON2, DRVPDN_MODEMSYS_CG_SET2, DRVPDN_MODEMSYS_CG_CLR2, MODEMSYS_CG_CON2_DIV, PDN_OPT_32BIT_REG)
//X_PDN_CONST(AAFE, DRVPDN_CON2, DRVPDN_CON2_SET, DRVPDN_CON2_CLR, DRVPDN_CON2_AAFE, PDN_OPT_16BIT_REG)
//X_PDN_CONST(SCCB, DRVPDN_CON2, DRVPDN_CON2_SET, DRVPDN_CON2_CLR, DRVPDN_CON2_SCCB, PDN_OPT_16BIT_REG)
X_PDN_CONST(I2C, DRVPDN_MCUSYS_PDN_CON1, DRVPDN_MCUSYS_PDN_CON1_SET, DRVPDN_MCUSYS_PDN_CON1_CLR, DRVPDN_CON1_I2C, PDN_OPT_32BIT_REG)
X_PDN_CONST(SPI, DRVPDN_MCUSYS_PDN_CON1, DRVPDN_MCUSYS_PDN_CON1_SET, DRVPDN_MCUSYS_PDN_CON1_CLR, DRVPDN_CON1_SPI, PDN_OPT_32BIT_REG)
X_PDN_CONST(OSTIMER, DRVPDN_MCUSYS_PDN_CON1, DRVPDN_MCUSYS_PDN_CON1_SET, DRVPDN_MCUSYS_PDN_CON1_CLR, DRVPDN_CON1_OSTIMER, PDN_OPT_32BIT_REG)
X_PDN_CONST(HIF, DRVPDN_MCUSYS_PDN_CON1, DRVPDN_MCUSYS_PDN_CON1_SET, DRVPDN_MCUSYS_PDN_CON1_CLR, DRVPDN_CON1_HIF1, PDN_OPT_32BIT_REG)
//X_PDN_CONST(HIF2, DRVPDN_MCUSYS_PDN_CON1, DRVPDN_MCUSYS_PDN_CON1_SET, DRVPDN_MCUSYS_PDN_CON1_CLR, DRVPDN_CON1_HIF2, PDN_OPT_32BIT_REG)
//X_PDN_CONST(GMSK, DRVPDN_CON2, DRVPDN_CON2_SET, DRVPDN_CON2_CLR, DRVPDN_CON2_GMSK, PDN_OPT_16BIT_REG)

//X_PDN_CONST(ICE, DRVPDN_CON3, DRVPDN_CON3_SET, DRVPDN_CON3_CLR, DRVPDN_CON3_ICE, PDN_OPT_16BIT_REG)
X_PDN_CONST(PWM3, DRVPDN_ACFG_CLK_CON0, DRVPDN_ACFG_CLK_SET0, DRVPDN_ACFG_CLK_CLR0, DRVPDN_ACFG_CON0_PWM3, PDN_OPT_16BIT_REG)
X_PDN_CONST(SEJ, DRVPDN_MCUSYS_PDN_CON1, DRVPDN_MCUSYS_PDN_CON1_SET, DRVPDN_MCUSYS_PDN_CON1_CLR, DRVPDN_CON1_SEJ, PDN_OPT_32BIT_REG)
X_PDN_CONST(G2D, DRVPDN_MCUSYS_PDN_CON1, DRVPDN_MCUSYS_PDN_CON1_SET, DRVPDN_MCUSYS_PDN_CON1_CLR, DRVPDN_CON0_SW_G2D, PDN_OPT_32BIT_REG)
//X_PDN_CONST(ISP, DRVPDN_MCUSYS_CON3, DRVPDN_MCUSYS_CON3_SET, DRVPDN_MCUSYS_CON3_CLR, DRVPDN_MCUSYS_CON3_ISP, PDN_OPT_16BIT_REG)
//X_PDN_CONST(ROTDMA, DRVPDN_CON3, DRVPDN_CON3_SET, DRVPDN_CON3_CLR, DRVPDN_CON3_ROTDMA, PDN_OPT_16BIT_REG)
//X_PDN_CONST(CAM104M, DRVPDN_CON3, DRVPDN_CON3_SET, DRVPDN_CON3_CLR, DRVPDN_CON3_CAM104M, PDN_OPT_16BIT_REG)
//X_PDN_CONST(LCD104M, DRVPDN_CON3, DRVPDN_CON3_SET, DRVPDN_CON3_CLR, DRVPDN_CON3_LCD104M, PDN_OPT_16BIT_REG)
X_PDN_CONST(BTIF, DRVPDN_MCUSYS_PDN_CON2, DRVPDN_MCUSYS_PDN_CON2_SET, DRVPDN_MCUSYS_PDN_CON2_CLR, DRVPDN_CON2_BTIF, PDN_OPT_32BIT_REG)
X_PDN_CONST(LZMA, DRVPDN_MCUSYS_PDN_CON2, DRVPDN_MCUSYS_PDN_CON2_SET, DRVPDN_MCUSYS_PDN_CON2_CLR, DRVPDN_CON2_LZMA, PDN_OPT_32BIT_REG)
X_PDN_CONST(ROM, DRVPDN_MCUSYS_PDN_CON2, DRVPDN_MCUSYS_PDN_CON2_SET, DRVPDN_MCUSYS_PDN_CON2_CLR, DRVPDN_CON2_ROM, PDN_OPT_32BIT_REG)
X_PDN_CONST(EFUSE, DRVPDN_MCUSYS_PDN_CON2, DRVPDN_MCUSYS_PDN_CON2_SET, DRVPDN_MCUSYS_PDN_CON2_CLR, DRVPDN_CON2_EFUSE, PDN_OPT_32BIT_REG)
X_PDN_CONST(SW_LPM, DRVPDN_MCUSYS_PDN_CON2, DRVPDN_MCUSYS_PDN_CON2_SET, DRVPDN_MCUSYS_PDN_CON2_CLR, DRVPDN_CON2_SW_LPM, PDN_OPT_32BIT_REG)
X_PDN_CONST(RXBUF, DRVPDN_MD2GSYS_CG_CON0, DRVPDN_MD2GSYS_CG_CON0_SET, DRVPDN_MD2GSYS_CG_CON0_CLR, MD2GSYS_CG_CON0_RXBUF, PDN_OPT_16BIT_REG)
X_PDN_CONST(TXBUF, DRVPDN_MD2GSYS_CG_CON0, DRVPDN_MD2GSYS_CG_CON0_SET, DRVPDN_MD2GSYS_CG_CON0_CLR, MD2GSYS_CG_CON0_TXBUF, PDN_OPT_16BIT_REG)
X_PDN_CONST(AHB2DSPIO, DRVPDN_MD2GSYS_CG_CON0, DRVPDN_MD2GSYS_CG_CON0_SET, DRVPDN_MD2GSYS_CG_CON0_CLR, MD2GSYS_CG_CON0_AHB2DSPIO, PDN_OPT_16BIT_REG)
X_PDN_CONST(BSI_T, DRVPDN_MODEMSYS_CG_CON2, DRVPDN_MODEMSYS_CG_SET2, DRVPDN_MODEMSYS_CG_CLR2, MODEMSYS_CG_CON2_BSI_T, PDN_OPT_32BIT_REG)
X_PDN_CONST(BPI_T, DRVPDN_MODEMSYS_CG_CON2, DRVPDN_MODEMSYS_CG_SET2, DRVPDN_MODEMSYS_CG_CLR2, MODEMSYS_CG_CON2_BPI_T, PDN_OPT_32BIT_REG)
X_PDN_CONST(CAM_BCLK, DRVPDN_MCUSYS_PDN_CON0,DRVPDN_MCUSYS_PDN_CON0_SET, DRVPDN_MCUSYS_PDN_CON0_CLR, DRVPDN_CON0_SW_CAM_BCLK, PDN_OPT_32BIT_REG)
X_PDN_CONST(PAD2CAM, DRVPDN_MCUSYS_PDN_CON0,DRVPDN_MCUSYS_PDN_CON0_SET, DRVPDN_MCUSYS_PDN_CON0_CLR, DRVPDN_CON0_SW_PAD2CAM, PDN_OPT_32BIT_REG)
//X_PDN_CONST(HJPG, DRVPDN_MCUSYS_PDN_CON0,DRVPDN_MCUSYS_PDN_CON0_SET, DRVPDN_MCUSYS_PDN_CON0_CLR, DRVPDN_CON0_SW_HJPG, PDN_OPT_32BIT_REG)
X_PDN_CONST(SLCD, DRVPDN_MCUSYS_PDN_CON0,DRVPDN_MCUSYS_PDN_CON0_SET, DRVPDN_MCUSYS_PDN_CON0_CLR, DRVPDN_CON0_SW_SLCD, PDN_OPT_32BIT_REG)
X_PDN_CONST(MM_COLOR, DRVPDN_MCUSYS_PDN_CON0,DRVPDN_MCUSYS_PDN_CON0_SET, DRVPDN_MCUSYS_PDN_CON0_CLR, DRVPDN_CON0_SW_MM_COLOR, PDN_OPT_32BIT_REG)
X_PDN_CONST(BT_26M, DRVPDN_MCUSYS_PDN_CON0,DRVPDN_MCUSYS_PDN_CON0_SET, DRVPDN_MCUSYS_PDN_CON0_CLR, DRVPDN_CON0_SW_BT_26M, PDN_OPT_32BIT_REG)
X_PDN_CONST(MD2G_26M, DRVPDN_MCUSYS_PDN_CON0,DRVPDN_MCUSYS_PDN_CON0_SET, DRVPDN_MCUSYS_PDN_CON0_CLR, DRVPDN_CON0_SW_MD2G_26M, PDN_OPT_32BIT_REG)
X_PDN_CONST(CAM_48M, DRVPDN_MCUSYS_PDN_CON0,DRVPDN_MCUSYS_PDN_CON0_SET, DRVPDN_MCUSYS_PDN_CON0_CLR, DRVPDN_CON0_SW_CAM_48M, PDN_OPT_32BIT_REG)
//X_PDN_CONST(USB_48M, DRVPDN_MCUSYS_PDN_CON0,DRVPDN_MCUSYS_PDN_CON0_SET, DRVPDN_MCUSYS_PDN_CON0_CLR, DRVPDN_CON0_SW_USB_48M, PDN_OPT_32BIT_REG)
X_PDN_CONST(DMA2SFC, DRVPDN_MCUSYS_PDN_CON0,DRVPDN_MCUSYS_PDN_CON0_SET, DRVPDN_MCUSYS_PDN_CON0_CLR, DRVPDN_CON0_DMA2SFC, PDN_OPT_32BIT_REG)
X_PDN_CONST(BT_BUS, DRVPDN_MCUSYS_PDN_CON0,DRVPDN_MCUSYS_PDN_CON0_SET, DRVPDN_MCUSYS_PDN_CON0_CLR, DRVPDN_CON0_SW_BT_BUS, PDN_OPT_32BIT_REG)
//X_PDN_CONST(SW_BT_X8G, DRVPDN_MCUSYS_PDN_CON0,DRVPDN_MCUSYS_PDN_CON0_SET, DRVPDN_MCUSYS_PDN_CON0_CLR, DRVPDN_CON0_SW_BT_X8G, PDN_OPT_32BIT_REG)
X_PDN_CONST(BT_ARM7, DRVPDN_MCUSYS_PDN_CON0,DRVPDN_MCUSYS_PDN_CON0_SET, DRVPDN_MCUSYS_PDN_CON0_CLR, DRVPDN_CON0_BT_ARM7, PDN_OPT_32BIT_REG)
//X_PDN_CONST(SW_MSDC, DRVPDN_MCUSYS_PDN_CON0,DRVPDN_MCUSYS_PDN_CON0_SET, DRVPDN_MCUSYS_PDN_CON0_CLR, DRVPDN_CON0_SW_MSDC, PDN_OPT_32BIT_REG)
X_PDN_CONST(2GDMA2SFC, DRVPDN_MCUSYS_PDN_CON0,DRVPDN_MCUSYS_PDN_CON0_SET, DRVPDN_MCUSYS_PDN_CON0_CLR, DRVPDN_CON0_2GDMA2SFC, PDN_OPT_32BIT_REG)

//X_PDN_CONST(RTC_26M, DRVPDN_ACFG_CLK_CON3, DRVPDN_ACFG_CLK_SET3, DRVPDN_ACFG_CLK_CLR3, DRVPDN_ACFG_CON3_RTC_F26M, PDN_OPT_16BIT_REG)
X_PDN_CONST(PMU_26M, DRVPDN_ACFG_CLK_CON0, DRVPDN_ACFG_CLK_SET0, DRVPDN_ACFG_CLK_CLR0, DRVPDN_ACFG_CON0_PMU_F26M, PDN_OPT_16BIT_REG)
//X_PDN_CONST(SW_BT_26M, DRVPDN_ACFG_CLK_CON1, DRVPDN_ACFG_CLK_SET1, DRVPDN_ACFG_CLK_CLR1, DRVPDN_ACFG_CON1_SW_BT_F26M, PDN_OPT_16BIT_REG)
//X_PDN_CONST(FM_26M, DRVPDN_ACFG_CLK_CON0, DRVPDN_ACFG_CLK_SET0, DRVPDN_ACFG_CLK_CLR0, DRVPDN_ACFG_CON0_FM_F26M, PDN_OPT_16BIT_REG)
//X_PDN_CONST(FSPI_BCLK, DRVPDN_ACFG_CLK_CON0, DRVPDN_ACFG_CLK_SET0, DRVPDN_ACFG_CLK_CLR0, DRVPDN_ACFG_CON0_FSPI_BCLK, PDN_OPT_16BIT_REG)
X_PDN_CONST(SFC, DRVPDN_MCUSYS_PDN_CON2,DRVPDN_MCUSYS_PDN_CON2_SET, DRVPDN_MCUSYS_PDN_CON2_CLR, DRVPDN_CON2_SFC, PDN_OPT_32BIT_REG)
X_PDN_CONST(SPI_NAND, DRVPDN_MCUSYS_PDN_CON2,DRVPDN_MCUSYS_PDN_CON2_SET, DRVPDN_MCUSYS_PDN_CON2_CLR, DRVPDN_CON2_SPI_NAND, PDN_OPT_32BIT_REG)
X_PDN_CONST(FM_F26M, DRVPDN_MCUSYS_PDN_CON2,DRVPDN_MCUSYS_PDN_CON2_SET, DRVPDN_MCUSYS_PDN_CON2_CLR, DRVPDN_CON2_FM_F26M, PDN_OPT_32BIT_REG)
X_PDN_CONST(FM_BCLK, DRVPDN_MCUSYS_PDN_CON2,DRVPDN_MCUSYS_PDN_CON2_SET, DRVPDN_MCUSYS_PDN_CON2_CLR, DRVPDN_CON2_FM_BCLK, PDN_OPT_32BIT_REG)