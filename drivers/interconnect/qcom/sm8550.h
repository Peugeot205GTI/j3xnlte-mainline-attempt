/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * SM8450 interconnect IDs
 *
 * Copyright (c) 2020-2021, The Linux Foundation. All rights reserved.
 * Copyright (c) 2021, Linaro Limited
 */

#ifndef __DRIVERS_INTERCONNECT_QCOM_SM8450_H
#define __DRIVERS_INTERCONNECT_QCOM_SM8450_H

#define SM8550_MASTER_A1NOC_SNOC			0
#define SM8550_MASTER_A2NOC_SNOC			1
#define SM8550_MASTER_ANOC_PCIE_GEM_NOC			2
#define SM8550_MASTER_APPSS_PROC			3
#define SM8550_MASTER_CAMNOC_HF				4
#define SM8550_MASTER_CAMNOC_ICP			5
#define SM8550_MASTER_CAMNOC_SF				6
#define SM8550_MASTER_CDSP_HCP				7
#define SM8550_MASTER_CDSP_PROC				8
#define SM8550_MASTER_CNOC_CFG				9
#define SM8550_MASTER_CNOC_MNOC_CFG			10
#define SM8550_MASTER_COMPUTE_NOC			11
#define SM8550_MASTER_CRYPTO				12
#define SM8550_MASTER_GEM_NOC_CNOC			13
#define SM8550_MASTER_GEM_NOC_PCIE_SNOC			14
#define SM8550_MASTER_GFX3D				15
#define SM8550_MASTER_GIC				16
#define SM8550_MASTER_GIC_AHB				17
#define SM8550_MASTER_GPU_TCU				18
#define SM8550_MASTER_IPA				19
#define SM8550_MASTER_LLCC				20
#define SM8550_MASTER_LPASS_GEM_NOC			21
#define SM8550_MASTER_LPASS_LPINOC			22
#define SM8550_MASTER_LPASS_PROC			23
#define SM8550_MASTER_LPIAON_NOC			24
#define SM8550_MASTER_MDP				25
#define SM8550_MASTER_MNOC_HF_MEM_NOC			26
#define SM8550_MASTER_MNOC_SF_MEM_NOC			27
#define SM8550_MASTER_MSS_PROC				28
#define SM8550_MASTER_PCIE_0				29
#define SM8550_MASTER_PCIE_1				30
#define SM8550_MASTER_PCIE_ANOC_CFG			31
#define SM8550_MASTER_QDSS_BAM				32
#define SM8550_MASTER_QDSS_ETR				33
#define SM8550_MASTER_QDSS_ETR_1			34
#define SM8550_MASTER_QSPI_0				35
#define SM8550_MASTER_QUP_1				36
#define SM8550_MASTER_QUP_2				37
#define SM8550_MASTER_QUP_CORE_0			38
#define SM8550_MASTER_QUP_CORE_1			39
#define SM8550_MASTER_QUP_CORE_2			40
#define SM8550_MASTER_SDCC_2				41
#define SM8550_MASTER_SDCC_4				42
#define SM8550_MASTER_SNOC_GC_MEM_NOC			43
#define SM8550_MASTER_SNOC_SF_MEM_NOC			44
#define SM8550_MASTER_SP				45
#define SM8550_MASTER_SYS_TCU				46
#define SM8550_MASTER_UFS_MEM				47
#define SM8550_MASTER_USB3_0				48
#define SM8550_MASTER_VIDEO				49
#define SM8550_MASTER_VIDEO_CV_PROC			50
#define SM8550_MASTER_VIDEO_PROC			51
#define SM8550_MASTER_VIDEO_V_PROC			52
#define SM8550_SLAVE_A1NOC_SNOC				53
#define SM8550_SLAVE_A2NOC_SNOC				54
#define SM8550_SLAVE_AHB2PHY_NORTH			55
#define SM8550_SLAVE_AHB2PHY_SOUTH			56
#define SM8550_SLAVE_ANOC_PCIE_GEM_NOC			57
#define SM8550_SLAVE_AOSS				58
#define SM8550_SLAVE_APPSS				59
#define SM8550_SLAVE_BOOT_IMEM				60
#define SM8550_SLAVE_CAMERA_CFG				61
#define SM8550_SLAVE_CDSP_MEM_NOC			62
#define SM8550_SLAVE_CLK_CTL				63
#define SM8550_SLAVE_CNOC_CFG				64
#define SM8550_SLAVE_CNOC_MNOC_CFG			65
#define SM8550_SLAVE_CNOC_MSS				66
#define SM8550_SLAVE_CPR_NSPCX				67
#define SM8550_SLAVE_CRYPTO_0_CFG			68
#define SM8550_SLAVE_CX_RDPM				69
#define SM8550_SLAVE_DDRSS_CFG				70
#define SM8550_SLAVE_DISPLAY_CFG			71
#define SM8550_SLAVE_EBI1				72
#define SM8550_SLAVE_GEM_NOC_CNOC			73
#define SM8550_SLAVE_GFX3D_CFG				74
#define SM8550_SLAVE_I2C				75
#define SM8550_SLAVE_IMEM				76
#define SM8550_SLAVE_IMEM_CFG				77
#define SM8550_SLAVE_IPA_CFG				78
#define SM8550_SLAVE_IPC_ROUTER_CFG			79
#define SM8550_SLAVE_LLCC				80
#define SM8550_SLAVE_LPASS_GEM_NOC			81
#define SM8550_SLAVE_LPASS_QTB_CFG			82
#define SM8550_SLAVE_LPIAON_NOC_LPASS_AG_NOC		83
#define SM8550_SLAVE_LPICX_NOC_LPIAON_NOC		84
#define SM8550_SLAVE_MEM_NOC_PCIE_SNOC			85
#define SM8550_SLAVE_MNOC_HF_MEM_NOC			86
#define SM8550_SLAVE_MNOC_SF_MEM_NOC			87
#define SM8550_SLAVE_MX_RDPM				88
#define SM8550_SLAVE_NSP_QTB_CFG			89
#define SM8550_SLAVE_PCIE_0				90
#define SM8550_SLAVE_PCIE_0_CFG				91
#define SM8550_SLAVE_PCIE_1				92
#define SM8550_SLAVE_PCIE_1_CFG				93
#define SM8550_SLAVE_PCIE_ANOC_CFG			94
#define SM8550_SLAVE_PDM				95
#define SM8550_SLAVE_PIMEM_CFG				96
#define SM8550_SLAVE_PRNG				97
#define SM8550_SLAVE_QDSS_CFG				98
#define SM8550_SLAVE_QDSS_STM				99
#define SM8550_SLAVE_QSPI_0				100
#define SM8550_SLAVE_QUP_1				101
#define SM8550_SLAVE_QUP_2				102
#define SM8550_SLAVE_QUP_CORE_0				103
#define SM8550_SLAVE_QUP_CORE_1				104
#define SM8550_SLAVE_QUP_CORE_2				105
#define SM8550_SLAVE_RBCPR_CX_CFG			106
#define SM8550_SLAVE_RBCPR_MMCX_CFG			107
#define SM8550_SLAVE_RBCPR_MXA_CFG			108
#define SM8550_SLAVE_RBCPR_MXC_CFG			109
#define SM8550_SLAVE_SDCC_2				110
#define SM8550_SLAVE_SDCC_4				111
#define SM8550_SLAVE_SERVICE_MNOC			112
#define SM8550_SLAVE_SERVICE_PCIE_ANOC			113
#define SM8550_SLAVE_SNOC_GEM_NOC_GC			114
#define SM8550_SLAVE_SNOC_GEM_NOC_SF			115
#define SM8550_SLAVE_SPSS_CFG				116
#define SM8550_SLAVE_TCSR				117
#define SM8550_SLAVE_TCU				118
#define SM8550_SLAVE_TLMM				119
#define SM8550_SLAVE_TME_CFG				120
#define SM8550_SLAVE_UFS_MEM_CFG			121
#define SM8550_SLAVE_USB3_0				122
#define SM8550_SLAVE_VENUS_CFG				123
#define SM8550_SLAVE_VSENSE_CTRL_CFG			124

#endif