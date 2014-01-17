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
 *   reg_base_mt6276.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   Definition for chipset register base and global configuration registers
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

#ifndef __REG_BASE_MT6276_H__
#define __REG_BASE_MT6276_H__

/* new definition */
#ifdef MT6276_S00

#define EMI_base                 (0x60000000)
#define SYSL2_base               (0x60010000)
#define DMA_base                 (0x60020000)
#define UART1_base               (0x60030000)
#define UART2_base               (0x60040000)
#define UART3_base               (0x60050000)
#define GPT_base                 (0x60060000)
#define EINT_base                (0x60070000)
#define MDIF_base                (0x60080000)
#define RT_MDIF_base             (0x60080000) 
#define DSPGPT_base              (0x60090000)
#define NFI_base                 (0x600A0000)
#define NFIECC_base              (0x600B0000)
#define I2C_base                 (0x600C0000)
#define CIRQ_base                (0x600D0000)
#define LMU_ARM11_base           (0x600E0000)
#define LMU_FCORE4_base          (0x600F0000)
#define LOGACC_base              (0x60100000)
#define MSDC_base                (0x60110000)
#define MSDC2_base               (0x60120000)
#define MSDC3_base               (0x60130000)
#define KP_base                  (0x60140000)
#define SIM_base                 (0x60150000)
#define SIM2_base                (0x60160000)
#define RTC_base                 (0x60170000)
#define PWM_base                 (0x60180000)
#define IRDA_base                (0x60190000)
#define DEVAPC0_base             (0x601A0000)
#define AFC_base                 (0x61000000)
#define AUXADC_base              (0x61010000)
#define DIVIDER_base             (0x61020000)
#define BPI_base                 (0x61030000)
#define BSI_base                 (0x61040000)
#define TDMA_base                (0x61050000)
#define RTR_base                 (0x61060000)
#define OSTIMERPARM_base         (0x61070000)
#define OSTIMERDSP_base          (0x61080000)
#define TOPSM_base               (0x61090000)
#define GPIO_base                (0x610A0000)
#define EFUSE_base               (0x610B0000)
#define RGU_base                 (0x610C0000)
#define CONFG_base               (0x610D0000)
#define CONFIG_base              CONFG_base
#define ATBBWL_base              (0x610E0000)
#define SEJ_base                 (0x610F0000)
#define BTIF_base                (0x61100000)
#define FSPI_base                (0x61110000)
#define ACCDET_base              (0x61120000)
#define PFC_base                 (0x61130000)
#define MIX_ABB_base             (0x61140000)
#define MIX_PMU_base             (0x61150000)
#define DEVAPB1_base             (0x61160000)
#define TRNG_base                (0x61170000)
#define ICUSB1_base              (0x64000000)
#define USB_base                 (0x64800000)
#define BFMDIF_base              (0x65000000)
#define VFF_base                 (0x65800000)
#define LMU_ARM11_AXI_base       (0x66000000)
#define LMU_FCORE4_AXI_base      (0x67000000)
#define DAPROM_base              (0x68000000)
#define CTI_base                 (0x68002000)
#define TPIU_base                (0x68003000)
#define FUNNEL0_base             (0x68004000)
#define FUNNEL1_base             (0x68005000)
#define ARMCTI_base              (0x68006000)
#define FRIOCTI_base             (0x68007000)
#define STP_base                 (0x68009000)
#define DEM_base                 (0x6800A000)
#define INRCV_base               (0xA0000000)
#define PREFILTER_base           (0xA0010000)
#define EDGE_PLL_base            (0xA0020000)
#define EQLZR_base               (0xA0030000)
#define LMS_UPDATE_base          (0xA0040000)
#define PREFETCH_base            (0xA0050000)
#define SEQ_TX_base              (0xA0060000)
#define SEQ_RX_base              (0xA0070000)
#define IRDMA_base               (0xA00A0000)
#define BFE_TXBUF_base           (0xA00B0000)
#define CRC_TX_base              (0xA00C0000)
#define FIRE_TX_base             (0xA00C1000)
#define CONV_TX_base             (0xA00C2000)
#define ADDRGEN_TX_base          (0xA00C3000)
#define PUNCGEN_TX_base          (0xA00C4000)
#define EAPG_TX_base             (0xA00C5000)
#define VITERBI_base             (0xA00C6000)
#define CRC_base                 (0xA00C7000)
#define FIRE_base                (0xA00C8000)
#define CONV_base                (0xA00C9000)
#define ADDRGEN_base             (0xA00CA000)
#define PUNCGEN_base             (0xA00CB000)
#define EAPG_base                (0xA00CC000)
#define ECONV_base               (0xA00CD000)
#define ECRC_D_base              (0xA00CE000)
#define ECRC_E_base              (0xA00CF000)
#define EQRAM1_base              (0xA00D0000)
#define FCS_base                 (0xA0100000)
#define CSD_ACC_base             (0xA0110000)
#define GCU_base                 (0xA0120000)
#define BFE_base                 (0xA0140000)
#define MD2G_CFG_base            (0xA0150000)
#define APC_base                 (0xA0190000)
#define MD2G_LOG_base            (0xA01A0000)
#define SHARE_T123_base          (0xA01B0000)
#define GCC_base                 (0xA01C0000)
#define BF2DEBUF_DMA_base        (0xA01D0000)
#define EQRAM2_base              (0xA0800000)
#define RXBUF_base               (0xA0A00000)
#define DEINTBUF_base            (0xA0C00000)
#define TXBRP_base               (0xB0000000)
#define TXCRP_base               (0xB0010000)
#define SRCHR_base               (0xB0020000)
#define RXBFE_base               (0xB0030000)
#define RXSRP_base               (0xB0040000)
#define RAKE_base                (0xB0050000)
#define RXBRP_base               (0xB0060000)
#define BITCP_base               (0xB0070000)
#define F8F9_base                (0xB0080000)
#define LOG3G_base               (0xB0090000)
#define LPBK_base                (0xB00A0000)
#define F8F9_1_base              (0xB00B0000)
#define F8F9_2_base              (0xB00C0000)
#define WCONFG_base              (0xB00D0000)
#define HRXBRP_base              (0xB00E0000)
#define UTXBRP_base              (0xB00F0000)
#define HSDPA_base               (0xB0100000)
#define HSDPA1_base              (0xB0110000)
#define DPA_RLC_base             (0xB0120000)
#define DPA_MAC_base             (0xB0130000)
#define UPA_base                 (0xB0140000)
#define TXUPC_base               (0xB0150000)
#define HSPA_DMA_base            (0xB0160000)
#define MMSYS_CONFG_base         (0xC0000000)
#define GMC_base                 (0xC0010000)
#define G2D_base                 (0xC0020000)
#define GCMQ_base                (0xC0030000)
#define R_DMA0_base              (0xC0040000)
#define HIF_base                 (0xC0050000)
#define ROT_DMA2_base            (0xC0060000)
#define GFX_ROT_base             (0xC0070000)
#define SPI_base                 (0xC0080000)
#define BRZ_base                 (0xC0090000)
#define JPG_DMA_base             (0xC00A0000)
#define CAMERA_base              (0xC00B0000)
#define APC1_base                (0xC00C0000)
#define OVL_DMA_base             (0xC00D0000)
#define CRZ_base                 (0xC00E0000)
#define VRZ_base                 (0xC00F0000)
#define ROT_DMA0_base            (0xC0100000)
#define ROT_DMA1_base            (0xC0110000)
#define IMGPROC_base             (0xC0120000)
#define BS_DMA_base              (0xC0130000)
#define TD_DMA_base              (0xC0140000)
#define GIF_base                 (0xC0150000)
#define PNG_base                 (0xC0160000)
#define PRZ_base                 (0xC0170000)
#define JPEG_CODEC_base          (0xC0180000)
#define GOVL_base                (0xC0190000)
#define IT_DMA_base              (0xC01A0000)
#define FDVT_base                (0xC01B0000)
#define EIS_base                 (0xC01D0000)
#define LCD_base                 (0xC4000000)
#define AUDIOSYS_base            (0xD0000000)
#define HSL_base                 (0xFF000000)
#define SPM_base                 (0xFF010000)
#define FCOREL2_base             (0xFF040000)
#define DSPCIRQ_base             (0xFF050000)
#define DSP_DMA_base             (0xFF060000)
#define DEVAPC_DSP_base          (0xFF070000)
#define FC_SEJ_base              (0xFF080000)
#define FC_CONFIG_base           (0xFF090000)

/* Shared Device base address */

#define EMI_SD_base              (0x70000000)
#define SYSL2_SD_base            (0x70010000)
#define DMA_SD_base              (0x70020000)
#define UART1_SD_base            (0x70030000)
#define UART2_SD_base            (0x70040000)
#define UART3_SD_base            (0x70050000)
#define GPT_SD_base              (0x70060000)
#define EINT_SD_base             (0x70070000)
#define MDIF_SD_base             (0x70080000)
#define RT_MDIF_SD_base          (0x70080000) 
#define DSPGPT_SD_base           (0x70090000)
#define NFI_SD_base              (0x700A0000)
#define NFIECC_SD_base           (0x700B0000)
#define I2C_SD_base              (0x700C0000)
#define CIRQ_SD_base             (0x700D0000)
#define LMU_ARM11_SD_base        (0x700E0000)
#define LMU_FCORE4_SD_base       (0x700F0000)
#define LOGACC_SD_base           (0x70100000)
#define MSDC_SD_base             (0x70110000)
#define MSDC2_SD_base            (0x70120000)
#define MSDC3_SD_base            (0x70130000)
#define KP_SD_base               (0x70140000)
#define SIM_SD_base              (0x70150000)
#define SIM2_SD_base             (0x70160000)
#define RTC_SD_base              (0x70170000)
#define PWM_SD_base              (0x70180000)
#define IRDA_SD_base             (0x70190000)
#define DEVAPC0_SD_base          (0x701A0000)
#define AFC_SD_base              (0x70400000)
#define AUXADC_SD_base           (0x70410000)
#define DIVIDER_SD_base          (0x70420000)
#define BPI_SD_base              (0x70430000)
#define BSI_SD_base              (0x70440000)
#define TDMA_SD_base             (0x70450000)
#define RTR_SD_base              (0x70460000)
#define OSTIMERPARM_SD_base      (0x70470000)
#define OSTIMERDSP_SD_base       (0x70480000)
#define TOPSM_SD_base            (0x70490000)
#define GPIO_SD_base             (0x704A0000)
#define EFUSE_SD_base            (0x704B0000)
#define RGU_SD_base              (0x704C0000)
#define CONFG_SD_base            (0x704D0000)
#define CONFIG_SD_base           CONFG_SD_base
#define ATBBWL_SD_base           (0x704E0000)
#define SEJ_SD_base              (0x704F0000)
#define BTIF_SD_base             (0x70500000)
#define FSPI_SD_base             (0x70510000)
#define ACCDET_SD_base           (0x70520000)
#define PFC_SD_base              (0x70530000)
#define MIX_ABB_SD_base          (0x70540000)
#define MIX_PMU_SD_base          (0x70550000)
#define DEVAPB1_SD_base          (0x70560000)
#define TRNG_SD_base             (0x70570000)
#define ICUSB1_SD_base           (0x70800000)
#define USB_SD_base              (0x70B00000)
#define BFMDIF_SD_base           (0x70E00000)
#define VFF_SD_base              (0x71100000)
#define LMU_ARM11_AXI_SD_base    (0x71400000)
#define LMU_FCORE4_AXI_SD_base   (0x71700000)
#define DAPROM_SD_base           (0x71A00000)
#define CTI_SD_base              (0x71A02000)
#define TPIU_SD_base             (0x71A03000)
#define FUNNEL0_SD_base          (0x71A04000)
#define FUNNEL1_SD_base          (0x71A05000)
#define ARMCTI_SD_base           (0x71A06000)
#define FRIOCTI_SD_base          (0x71A07000)
#define STP_SD_base              (0x71A09000)
#define DEM_SD_base              (0x71A0A000)
#define INRCV_SD_base            (0x71D00000)
#define PREFILTER_SD_base        (0x71D10000)
#define EDGE_PLL_SD_base         (0x71D20000)
#define EQLZR_SD_base            (0x71D30000)
#define LMS_UPDATE_SD_base       (0x71D40000)
#define PREFETCH_SD_base         (0x71D50000)
#define SEQ_TX_SD_base           (0x71D60000)
#define SEQ_RX_SD_base           (0x71D70000)
#define IRDMA_SD_base            (0x71DA0000)
#define BFE_TXBUF_SD_base        (0x71DB0000)
#define CRC_TX_SD_base           (0x71DC0000)
#define FIRE_TX_SD_base          (0x71DC1000)
#define CONV_TX_SD_base          (0x71DC2000)
#define ADDRGEN_TX_SD_base       (0x71DC3000)
#define PUNCGEN_TX_SD_base       (0x71DC4000)
#define EAPG_TX_SD_base          (0x71DC5000)
#define VITERBI_SD_base          (0x71DC6000)
#define CRC_SD_base              (0x71DC7000)
#define FIRE_SD_base             (0x71DC8000)
#define CONV_SD_base             (0x71DC9000)
#define ADDRGEN_SD_base          (0x71DCA000)
#define PUNCGEN_SD_base          (0x71DCB000)
#define EAPG_SD_base             (0x71DCC000)
#define ECONV_SD_base            (0x71DCD000)
#define ECRC_D_SD_base           (0x71DCE000)
#define ECRC_E_SD_base           (0x71DCF000)
#define EQRAM1_SD_base           (0x71DD0000)
#define FCS_SD_base              (0x71E00000)
#define CSD_ACC_SD_base          (0x71E10000)
#define GCU_SD_base              (0x71E20000)
#define BFE_SD_base              (0x71E40000)
#define MD2G_CFG_SD_base         (0x71E50000)
#define APC_SD_base              (0x71E90000)
#define MD2G_LOG_SD_base         (0x71EA0000)
#define SHARE_T123_SD_base       (0x71EB0000)
#define GCC_SD_base              (0x71EC0000)
#define BF2DEBUF_DMA_SD_base     (0x71ED0000)
#define EQRAM2_SD_base           (0x72300000)
#define RXBUF_SD_base            (0x72600000)
#define DEINTBUF_SD_base         (0x72900000)
#define TXBRP_SD_base            (0x72C00000)
#define TXCRP_SD_base            (0x72C10000)
#define SRCHR_SD_base            (0x72C20000)
#define RXBFE_SD_base            (0x72C30000)
#define RXSRP_SD_base            (0x72C40000)
#define RAKE_SD_base             (0x72C50000)
#define RXBRP_SD_base            (0x72C60000)
#define BITCP_SD_base            (0x72C70000)
#define F8F9_SD_base             (0x72C80000)
#define LOG3G_SD_base            (0x72C90000)
#define LPBK_SD_base             (0x72CA0000)
#define F8F9_1_SD_base           (0x72CB0000)
#define F8F9_2_SD_base           (0x72CC0000)
#define WCONFG_SD_base           (0x72CD0000)
#define HRXBRP_SD_base           (0x72CE0000)
#define UTXBRP_SD_base           (0x72CF0000)
#define HSDPA_SD_base            (0x72D00000)
#define HSDPA1_SD_base           (0x72D10000)
#define DPA_RLC_SD_base          (0x72D20000)
#define DPA_MAC_SD_base          (0x72D30000)
#define UPA_SD_base              (0x72D40000)
#define TXUPC_SD_base            (0x72D50000)
#define HSPA_DMA_SD_base         (0x72D60000)
#define MMSYS_CONFG_SD_base      (0x73300000)
#define GMC_SD_base              (0x73310000)
#define G2D_SD_base              (0x73320000)
#define GCMQ_SD_base             (0x73330000)
#define R_DMA0_SD_base           (0x73340000)
#define HIF_SD_base              (0x73350000)
#define ROT_DMA2_SD_base         (0x73360000)
#define GFX_ROT_SD_base          (0x73370000)
#define SPI_SD_base              (0x73380000)
#define BRZ_SD_base              (0x73390000)
#define JPG_DMA_SD_base          (0x733A0000)
#define CAM_SD_base              (0x733B0000)
#define APC1_SD_base             (0x733C0000)
#define OVL_DMA_SD_base          (0x733D0000)
#define CRZ_SD_base              (0x733E0000)
#define VRZ_SD_base              (0x733F0000)
#define ROT_DMA0_SD_base         (0x73400000)
#define ROT_DMA1_SD_base         (0x73410000)
#define IMGPROC_SD_base          (0x73420000)
#define BS_DMA_SD_base           (0x73430000)
#define TD_DMA_SD_base           (0x73440000)
#define GIF_SD_base              (0x73450000)
#define PNG_SD_base              (0x73460000)
#define PRZ_SD_base              (0x73470000)
#define JPG_CODEC_SD_base        (0x73480000)
#define GOVL_SD_base             (0x73490000)
#define IT_DMA_SD_base           (0x734A0000)
#define FDVT_SD_base             (0x734B0000)
#define EIS_SD_base              (0x734D0000)
#define LCD_SD_base              (0x73700000)
#define AUDIOSYS_SD_base         (0x73D00000)
#define HSL_SD_base              (0x74600000)
#define SPM_SD_base              (0x74610000)
#define FCOREL2_SD_base          (0x74640000)
#define DSPCIRQ_SD_base          (0x74650000)
#define DSP_DMA_SD_base          (0x74660000)
#define DEVAPC_DSP_SD_base       (0x74670000)
#define FC_SEJ_SD_base           (0x74680000)
#define FC_CONFIG_SD_base        (0x74690000)

#else
/* E2 register definition*/

#define EMI_base                 (0x80000000)
#define VERSION_base             (0x80010000)
#define DMA_base                 (0x80020000)
#define UART1_base               (0x80030000)
#define UART2_base               (0x80040000)
#define UART3_base               (0x80050000)
#define GPT_base                 (0x80060000)
#define EINT_base                (0x80070000)
#define MDIF_base                (0x80080000)
#define RT_MDIF_base             (0x80080000) 
#define DSPGPT_base              (0x80090000)
#define NFI_base                 (0x800A0000)
#define NFIECC_base              (0x800B0000)
#define I2C_base                 (0x800C0000)
#define CIRQ_base                (0x800D0000)
#define LMU_ARM11_base           (0x800E0000)
#define LMU_FCORE4_base          (0x800F0000)
#define LOGACC_base              (0x80100000)
#define MSDC_base                (0x80110000)
#define MSDC2_base               (0x80120000)
#define MSDC3_base               (0x80130000)
#define KP_base                  (0x80140000)
#define SIM_base                 (0x80150000)
#define SIM2_base                (0x80160000)
#define RTC_base                 (0x80170000)
#define PWM_base                 (0x80180000)
#define IRDA_base                (0x80190000)
#define DEVAPC0_base             (0x801A0000)
#define AFC_base                 (0x81000000)
#define AUXADC_base              (0x81010000)
#define DIVIDER_base             (0x81020000)
#define BPI_base                 (0x81030000)
#define BSI_base                 (0x81040000)
#define TDMA_base                (0x81050000)
#define RTR_base                 (0x81060000)
#define OSTIMERPARM_base         (0x81070000)
#define OSTIMERDSP_base          (0x81080000)
#define TOPSM_base               (0x81090000)
#define GPIO_base                (0x810A0000)
#define EFUSE_base               (0x810B0000)
#define RGU_base                 (0x810C0000)
#define CONFG_base               (0x810D0000)
#define CONFIG_base              CONFG_base
#define ATBBWL_base              (0x810E0000)
#define SEJ_base                 (0x810F0000)
#define BTIF_base                (0x81100000)
#define FSPI_base                (0x81110000)
#define ACCDET_base              (0x81120000)
#define PFC_base                 (0x81130000)
#define MIX_ABB_base             (0x81140000)
#define MIX_PMU_base             (0x81150000)
#define DEVAPB1_base             (0x81160000)
#define TRNG_base                (0x81170000)
#define HIF0_base                (0x81180000)
#define HIF1_base                (0x81190000)
#define NLI_ARB_base             (0x811A0000)
#define ICUSB1_base              (0x84000000)
#define USB_base                 (0x84800000)
#define BFMDIF_base              (0x85000000)
#define VFF_base                 (0x85800000)
#define LMU_ARM11_AXI_base       (0x86000000)
#define LMU_FCORE4_AXI_base      (0x87000000)
#define DAPROM_base              (0x88000000)
#define CTI_base                 (0x88002000)
#define TPIU_base                (0x88003000)
#define FUNNEL0_base             (0x88004000)
#define FUNNEL1_base             (0x88005000)
#define ARMCTI_base              (0x88006000)
#define FRIOCTI_base             (0x88007000)
#define STP_base                 (0x88009000)
#define DEM_base                 (0x8800A000)
#define INRCV_base               (0xA0000000)
#define PREFILTER_base           (0xA0010000)
#define EDGE_PLL_base            (0xA0020000)
#define EQLZR_base               (0xA0030000)
#define LMS_UPDATE_base          (0xA0040000)
#define PREFETCH_base            (0xA0050000)
#define SEQ_TX_base              (0xA0060000)
#define SEQ_RX_base              (0xA0070000)
#define IRDMA_base               (0xA00A0000)
#define BFE_TXBUF_base           (0xA00B0000)
#define CRC_TX_base              (0xA00C0000)
#define FIRE_TX_base             (0xA00C1000)
#define CONV_TX_base             (0xA00C2000)
#define ADDRGEN_TX_base          (0xA00C3000)
#define PUNCGEN_TX_base          (0xA00C4000)
#define EAPG_TX_base             (0xA00C5000)
#define VITERBI_base             (0xA00C6000)
#define CRC_base                 (0xA00C7000)
#define FIRE_base                (0xA00C8000)
#define CONV_base                (0xA00C9000)
#define ADDRGEN_base             (0xA00CA000)
#define PUNCGEN_base             (0xA00CB000)
#define EAPG_base                (0xA00CC000)
#define ECONV_base               (0xA00CD000)
#define ECRC_D_base              (0xA00CE000)
#define ECRC_E_base              (0xA00CF000)
#define EQRAM1_base              (0xA00D0000)
#define FCS_base                 (0xA0100000)
#define CSD_ACC_base             (0xA0110000)
#define GCU_base                 (0xA0120000)
#define BFE_base                 (0xA0140000)
#define MD2G_CFG_base            (0xA0150000)
#define APC_base                 (0xA0190000)
#define MD2G_LOG_base            (0xA01A0000)
#define SHARE_T123_base          (0xA01B0000)
#define GCC_base                 (0xA01C0000)
#define BF2DEBUF_DMA_base        (0xA01D0000)
#define EQRAM2_base              (0xA0800000)
#define RXBUF_base               (0xA0A00000)
#define DEINTBUF_base            (0xA0C00000)
#define TXBRP_base               (0xB0000000)
#define TXCRP_base               (0xB0010000)
#define SRCHR_base               (0xB0020000)
#define RXBFE_base               (0xB0030000)
#define RXSRP_base               (0xB0040000)
#define RAKE_base                (0xB0050000)
#define RXBRP_base               (0xB0060000)
#define BITCP_base               (0xB0070000)
#define F8F9_base                (0xB0080000)
#define LOG3G_base               (0xB0090000)
#define LPBK_base                (0xB00A0000)
#define F8F9_1_base              (0xB00B0000)
#define F8F9_2_base              (0xB00C0000)
#define WCONFG_base              (0xB00D0000)
#define HRXBRP_base              (0xB00E0000)
#define UTXBRP_base              (0xB00F0000)
#define HSDPA_base               (0xB0100000)
#define HSDPA1_base              (0xB0110000)
#define DPA_RLC_base             (0xB0120000)
#define DPA_MAC_base             (0xB0130000)
#define UPA_base                 (0xB0140000)
#define TXUPC_base               (0xB0150000)
#define HSPA_DMA_base            (0xB0160000)
#define MMSYS_CONFG_base         (0xC0000000)
#define GMC_base                 (0xC0010000)
#define G2D_base                 (0xC0020000)
#define GCMQ_base                (0xC0030000)
#define R_DMA0_base              (0xC0040000)
#define ROT_DMA2_base            (0xC0060000)
#define GFX_ROT_base             (0xC0070000)
#define SPI_base                 (0xC0080000)
#define BRZ_base                 (0xC0090000)
#define JPG_DMA_base             (0xC00A0000)
#define CAMERA_base              (0xC00B0000)
#define APC1_base                (0xC00C0000)
#define OVL_DMA_base             (0xC00D0000)
#define CRZ_base                 (0xC00E0000)
#define VRZ_base                 (0xC00F0000)
#define ROT_DMA0_base            (0xC0100000)
#define ROT_DMA1_base            (0xC0110000)
#define IMGPROC_base             (0xC0120000)
#define BS_DMA_base              (0xC0130000)
#define TD_DMA_base              (0xC0140000)
#define GIF_base                 (0xC0150000)
#define PNG_base                 (0xC0160000)
#define PRZ_base                 (0xC0170000)
#define JPEG_CODEC_base          (0xC0180000)
#define GOVL_base                (0xC0190000)
#define IT_DMA_base              (0xC01A0000)
#define FDVT_base                (0xC01B0000)
#define EIS_base                 (0xC01D0000)
#define LCD_base                 (0xC4000000)
#define AUDIOSYS_base            (0xD0000000)
#define HSL_base                 (0xFF000000)
#define SPM_base                 (0xFF010000)
#define FCOREL2_base             (0xFF040000)
#define DSPCIRQ_base             (0xFF050000)
#define DSP_DMA_base             (0xFF060000)
#define DEVAPC_DSP_base          (0xFF070000)
#define FC_SEJ_base              (0xFF080000)
#define FC_CONFIG_base           (0xFF090000)

/* Shared Device base address */

#define EMI_SD_base              (0x70000000)
#define SYSL2_SD_base            (0x70010000)
#define DMA_SD_base              (0x70020000)
#define UART1_SD_base            (0x70030000)
#define UART2_SD_base            (0x70040000)
#define UART3_SD_base            (0x70050000)
#define GPT_SD_base              (0x70060000)
#define EINT_SD_base             (0x70070000)
#define MDIF_SD_base             (0x70080000)
#define RT_MDIF_SD_base          (0x70080000) 
#define DSPGPT_SD_base           (0x70090000)
#define NFI_SD_base              (0x700A0000)
#define NFIECC_SD_base           (0x700B0000)
#define I2C_SD_base              (0x700C0000)
#define CIRQ_SD_base             (0x700D0000)
#define LMU_ARM11_SD_base        (0x700E0000)
#define LMU_FCORE4_SD_base       (0x700F0000)
#define LOGACC_SD_base           (0x70100000)
#define MSDC_SD_base             (0x70110000)
#define MSDC2_SD_base            (0x70120000)
#define MSDC3_SD_base            (0x70130000)
#define KP_SD_base               (0x70140000)
#define SIM_SD_base              (0x70150000)
#define SIM2_SD_base             (0x70160000)
#define RTC_SD_base              (0x70170000)
#define PWM_SD_base              (0x70180000)
#define IRDA_SD_base             (0x70190000)
#define DEVAPC0_SD_base          (0x701A0000)
#define AFC_SD_base              (0x70400000)
#define AUXADC_SD_base           (0x70410000)
#define DIVIDER_SD_base          (0x70420000)
#define BPI_SD_base              (0x70430000)
#define BSI_SD_base              (0x70440000)
#define TDMA_SD_base             (0x70450000)
#define RTR_SD_base              (0x70460000)
#define OSTIMERPARM_SD_base      (0x70470000)
#define OSTIMERDSP_SD_base       (0x70480000)
#define TOPSM_SD_base            (0x70490000)
#define GPIO_SD_base             (0x704A0000)
#define EFUSE_SD_base            (0x704B0000)
#define RGU_SD_base              (0x704C0000)
#define CONFG_SD_base            (0x704D0000)
#define CONFIG_SD_base           CONFG_SD_base
#define ATBBWL_SD_base           (0x704E0000)
#define SEJ_SD_base              (0x704F0000)
#define BTIF_SD_base             (0x70500000)
#define FSPI_SD_base             (0x70510000)
#define ACCDET_SD_base           (0x70520000)
#define PFC_SD_base              (0x70530000)
#define MIX_ABB_SD_base          (0x70540000)
#define MIX_PMU_SD_base          (0x70550000)
#define DEVAPB1_SD_base          (0x70560000)
#define TRNG_SD_base             (0x70570000)
#define ICUSB1_SD_base           (0x70800000)
#define USB_SD_base              (0x70B00000)
#define BFMDIF_SD_base           (0x70E00000)
#define VFF_SD_base              (0x71100000)
#define LMU_ARM11_AXI_SD_base    (0x71400000)
#define LMU_FCORE4_AXI_SD_base   (0x71700000)
#define DAPROM_SD_base           (0x71A00000)
#define CTI_SD_base              (0x71A02000)
#define TPIU_SD_base             (0x71A03000)
#define FUNNEL0_SD_base          (0x71A04000)
#define FUNNEL1_SD_base          (0x71A05000)
#define ARMCTI_SD_base           (0x71A06000)
#define FRIOCTI_SD_base          (0x71A07000)
#define STP_SD_base              (0x71A09000)
#define DEM_SD_base              (0x71A0A000)
#define INRCV_SD_base            (0x71D00000)
#define PREFILTER_SD_base        (0x71D10000)
#define EDGE_PLL_SD_base         (0x71D20000)
#define EQLZR_SD_base            (0x71D30000)
#define LMS_UPDATE_SD_base       (0x71D40000)
#define PREFETCH_SD_base         (0x71D50000)
#define SEQ_TX_SD_base           (0x71D60000)
#define SEQ_RX_SD_base           (0x71D70000)
#define IRDMA_SD_base            (0x71DA0000)
#define BFE_TXBUF_SD_base        (0x71DB0000)
#define CRC_TX_SD_base           (0x71DC0000)
#define FIRE_TX_SD_base          (0x71DC1000)
#define CONV_TX_SD_base          (0x71DC2000)
#define ADDRGEN_TX_SD_base       (0x71DC3000)
#define PUNCGEN_TX_SD_base       (0x71DC4000)
#define EAPG_TX_SD_base          (0x71DC5000)
#define VITERBI_SD_base          (0x71DC6000)
#define CRC_SD_base              (0x71DC7000)
#define FIRE_SD_base             (0x71DC8000)
#define CONV_SD_base             (0x71DC9000)
#define ADDRGEN_SD_base          (0x71DCA000)
#define PUNCGEN_SD_base          (0x71DCB000)
#define EAPG_SD_base             (0x71DCC000)
#define ECONV_SD_base            (0x71DCD000)
#define ECRC_D_SD_base           (0x71DCE000)
#define ECRC_E_SD_base           (0x71DCF000)
#define EQRAM1_SD_base           (0x71DD0000)
#define FCS_SD_base              (0x71E00000)
#define CSD_ACC_SD_base          (0x71E10000)
#define GCU_SD_base              (0x71E20000)
#define BFE_SD_base              (0x71E40000)
#define MD2G_CFG_SD_base         (0x71E50000)
#define APC_SD_base              (0x71E90000)
#define MD2G_LOG_SD_base         (0x71EA0000)
#define SHARE_T123_SD_base       (0x71EB0000)
#define GCC_SD_base              (0x71EC0000)
#define BF2DEBUF_DMA_SD_base     (0x71ED0000)
#define EQRAM2_SD_base           (0x72300000)
#define RXBUF_SD_base            (0x72600000)
#define DEINTBUF_SD_base         (0x72900000)
#define TXBRP_SD_base            (0x72C00000)
#define TXCRP_SD_base            (0x72C10000)
#define SRCHR_SD_base            (0x72C20000)
#define RXBFE_SD_base            (0x72C30000)
#define RXSRP_SD_base            (0x72C40000)
#define RAKE_SD_base             (0x72C50000)
#define RXBRP_SD_base            (0x72C60000)
#define BITCP_SD_base            (0x72C70000)
#define F8F9_SD_base             (0x72C80000)
#define LOG3G_SD_base            (0x72C90000)
#define LPBK_SD_base             (0x72CA0000)
#define F8F9_1_SD_base           (0x72CB0000)
#define F8F9_2_SD_base           (0x72CC0000)
#define WCONFG_SD_base           (0x72CD0000)
#define HRXBRP_SD_base           (0x72CE0000)
#define UTXBRP_SD_base           (0x72CF0000)
#define HSDPA_SD_base            (0x72D00000)
#define HSDPA1_SD_base           (0x72D10000)
#define DPA_RLC_SD_base          (0x72D20000)
#define DPA_MAC_SD_base          (0x72D30000)
#define UPA_SD_base              (0x72D40000)
#define TXUPC_SD_base            (0x72D50000)
#define HSPA_DMA_SD_base         (0x72D60000)
#define MMSYS_CONFG_SD_base      (0x73300000)
#define GMC_SD_base              (0x73310000)
#define G2D_SD_base              (0x73320000)
#define GCMQ_SD_base             (0x73330000)
#define R_DMA0_SD_base           (0x73340000)
#define HIF_SD_base              (0x73350000)
#define ROT_DMA2_SD_base         (0x73360000)
#define GFX_ROT_SD_base          (0x73370000)
#define SPI_SD_base              (0x73380000)
#define BRZ_SD_base              (0x73390000)
#define JPG_DMA_SD_base          (0x733A0000)
#define CAM_SD_base              (0x733B0000)
#define APC1_SD_base             (0x733C0000)
#define OVL_DMA_SD_base          (0x733D0000)
#define CRZ_SD_base              (0x733E0000)
#define VRZ_SD_base              (0x733F0000)
#define ROT_DMA0_SD_base         (0x73400000)
#define ROT_DMA1_SD_base         (0x73410000)
#define IMGPROC_SD_base          (0x73420000)
#define BS_DMA_SD_base           (0x73430000)
#define TD_DMA_SD_base           (0x73440000)
#define GIF_SD_base              (0x73450000)
#define PNG_SD_base              (0x73460000)
#define PRZ_SD_base              (0x73470000)
#define JPG_CODEC_SD_base        (0x73480000)
#define GOVL_SD_base             (0x73490000)
#define IT_DMA_SD_base           (0x734A0000)
#define FDVT_SD_base             (0x734B0000)
#define EIS_SD_base              (0x734D0000)
#define LCD_SD_base              (0x73700000)
#define AUDIOSYS_SD_base         (0x73D00000)
#define HSL_SD_base              (0x74600000)
#define SPM_SD_base              (0x74610000)
#define FCOREL2_SD_base          (0x74640000)
#define DSPCIRQ_SD_base          (0x74650000)
#define DSP_DMA_SD_base          (0x74660000)
#define DEVAPC_DSP_SD_base       (0x74670000)
#define FC_SEJ_SD_base           (0x74680000)
#define FC_CONFIG_SD_base        (0x74690000)

#endif

#endif  /* __REG_BASE_MT6276_H__ */
