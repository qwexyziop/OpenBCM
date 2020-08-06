/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/ctr/bcm56990_a0/bcm56990_a0_CTR_EGR_TM_PORT_DROP.map.ltl for
 *      bcm56990_a0
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#include <bcmlrd/bcmlrd_internal.h>
#include <bcmlrd/chip/bcmlrd_id.h>
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56990_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56990_a0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* CTR_EGR_TM_PORT_DROP field init */
static const bcmlrd_field_data_t bcm56990_a0_lrd_ctr_egr_tm_port_drop_map_field_data_mmd[] = {
    { /* 0 PORT_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_a0_lrd_ifd_u16_0x0,
      .def = &bcm56990_a0_lrd_ifd_u16_0x0,
      .max = &bcm56990_a0_lrd_ifd_u16_0x10f,
      .depth = 0,
      .width = 9,
      .edata = NULL,
    },
    { /* 1 BUFFER_POOL */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_a0_lrd_ifd_u8_0x0,
      .def = &bcm56990_a0_lrd_ifd_u8_0x0,
      .max = &bcm56990_a0_lrd_ifd_u8_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 2 UC_RED_PKT */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u64_0x0,
      .def = &bcm56990_a0_lrd_ifd_u64_0x0,
      .max = &bcm56990_a0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 3 UC_YELLOW_PKT */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u64_0x0,
      .def = &bcm56990_a0_lrd_ifd_u64_0x0,
      .max = &bcm56990_a0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 4 UC_GREEN_PKT */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_a0_lrd_ifd_u64_0x0,
      .def = &bcm56990_a0_lrd_ifd_u64_0x0,
      .max = &bcm56990_a0_lrd_ifd_u64_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 5 MC_RED_PKT */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u64_0x0,
      .def = &bcm56990_a0_lrd_ifd_u64_0x0,
      .max = &bcm56990_a0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 6 MC_YELLOW_PKT */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u64_0x0,
      .def = &bcm56990_a0_lrd_ifd_u64_0x0,
      .max = &bcm56990_a0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 7 MC_GREEN_PKT */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_a0_lrd_ifd_u64_0x0,
      .def = &bcm56990_a0_lrd_ifd_u64_0x0,
      .max = &bcm56990_a0_lrd_ifd_u64_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 8 WRED_RED_PKT */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u64_0x0,
      .def = &bcm56990_a0_lrd_ifd_u64_0x0,
      .max = &bcm56990_a0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 9 WRED_YELLOW_PKT */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u64_0x0,
      .def = &bcm56990_a0_lrd_ifd_u64_0x0,
      .max = &bcm56990_a0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 10 WRED_GREEN_PKT */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_a0_lrd_ifd_u64_0x0,
      .def = &bcm56990_a0_lrd_ifd_u64_0x0,
      .max = &bcm56990_a0_lrd_ifd_u64_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 11 OPERATIONAL_STATE */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_a0_lrd_ifd_u32_0x0,
      .def = &bcm56990_a0_lrd_ifd_u32_0x0,
      .max = &bcm56990_a0_lrd_ifd_u32_0x2,
      .depth = 0,
      .width = 2,
      .edata = BCMLTD_COMMON_CTR_PORT_ENTRY_STATE_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56990_a0_lrd_ctr_egr_tm_port_drop_map_field_data = {
    .fields = 12,
    .field = bcm56990_a0_lrd_ctr_egr_tm_port_drop_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_a0_lrd_ctr_egr_tm_port_dropt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INSTANCE_MAX_INDEX,
        .value = 1,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INSTANCE_MIN_INDEX,
        .value = 0,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = true,
    },
    { /* 3 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 543,
    },
    { /* 4 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
    { /* 5 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MAX_INDEX,
        .value = 543,
    },
    { /* 6 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56990_a0_lrd_ctr_egr_tm_port_dropt_attr_group = {
    .attributes = 7,
    .attr = bcm56990_a0_lrd_ctr_egr_tm_port_dropt_attr_entry,
};


const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_chip_port_idx_src_field_desc_s2[2] = {
    {
        .field_id  = CTR_EGR_TM_PORT_DROPt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = CTR_EGR_TM_PORT_DROPt_BUFFER_POOLf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 1,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_chip_port_idx_ctr_egr_tm_port_drop_dst_field_desc_d0[2] = {
    {
        .field_id  = BCMLRD_FIELD_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 8,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = BCMLRD_FIELD_INSTANCE,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_track_index_src_field_desc_s6[2] = {
    {
        .field_id  = CTR_EGR_TM_PORT_DROPt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = CTR_EGR_TM_PORT_DROPt_BUFFER_POOLf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 1,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_track_index_ctr_egr_tm_port_drop_dst_field_desc_d0[1] = {
    {
        .field_id  = BCMLRD_FIELD_TRACK_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s2[1] = {
    {
        .field_id  = CTR_EGR_TM_PORT_DROPt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_port_drop_dst_field_desc_d0[1] = {
    {
        .field_id  = BCMLRD_FIELD_PT_SUPPRESS,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_port_oper_state_src_field_desc_s2[1] = {
    {
        .field_id  = CTR_EGR_TM_PORT_DROPt_OPERATIONAL_STATEf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_chip_port_idx_xfrm_handler_fwd_s2_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_CHIP_PORT_IDX_XFRM_HANDLER_FWD_S2_D0_ID,
    .src_fields = 2,
    .src = bcm56990_a0_lrd_bcmltx_chip_port_idx_src_field_desc_s2,
    .dst_fields = 2,
    .dst = bcm56990_a0_lrd_bcmltx_chip_port_idx_ctr_egr_tm_port_drop_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_track_index_xfrm_handler_fwd_s6_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_TRACK_INDEX_XFRM_HANDLER_FWD_S6_D0_ID,
    .src_fields = 2,
    .src = bcm56990_a0_lrd_bcmltx_track_index_src_field_desc_s6,
    .dst_fields = 1,
    .dst = bcm56990_a0_lrd_bcmltx_track_index_ctr_egr_tm_port_drop_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_track_index_xfrm_handler_rev_s6_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_TRACK_INDEX_XFRM_HANDLER_REV_S6_D0_ID,
    .src_fields = 1,
    .src = bcm56990_a0_lrd_bcmltx_track_index_ctr_egr_tm_port_drop_dst_field_desc_d0,
    .dst_fields = 2,
    .dst = bcm56990_a0_lrd_bcmltx_track_index_src_field_desc_s6,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_s2_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_PORT_PT_SUPPRESS_XFRM_HANDLER_FWD_S2_D0_ID,
    .src_fields = 1,
    .src = bcm56990_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s2,
    .dst_fields = 1,
    .dst = bcm56990_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_port_drop_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_port_oper_state_xfrm_handler_rev_s2_k2_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_PORT_OPER_STATE_XFRM_HANDLER_REV_S2_K2_D0_ID,
    .src_fields = 0,
    .src = NULL,
    .dst_fields = 1,
    .dst = bcm56990_a0_lrd_bcmltx_port_oper_state_src_field_desc_s2,
};


static const bcmlrd_map_entry_t bcm56990_a0_lrd_ctr_egr_tm_port_dropt_mmu_thdo_port_drop_count_mc_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = PORT_PACKET_RED_DROPf,
            .field_idx = 0,
            .minbit    = 64,
            .maxbit    = 127,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_EGR_TM_PORT_DROPt_MC_RED_PKTf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 63,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = PORT_PACKET_YELLOW_DROPf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 63,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_EGR_TM_PORT_DROPt_MC_YELLOW_PKTf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 63,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56990_a0_lta_bcmltx_chip_port_idx_xfrm_handler_fwd_s2_d0 */
                .desc = &bcm56990_a0_lta_bcmltx_chip_port_idx_xfrm_handler_fwd_s2_d0_desc,
            },
        },
    },
};
static const bcmlrd_map_entry_t bcm56990_a0_lrd_ctr_egr_tm_port_dropt_mmu_thdo_port_drop_count_uc_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = PORT_PACKET_RED_DROPf,
            .field_idx = 0,
            .minbit    = 64,
            .maxbit    = 127,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_EGR_TM_PORT_DROPt_UC_RED_PKTf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 63,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = PORT_PACKET_YELLOW_DROPf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 63,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_EGR_TM_PORT_DROPt_UC_YELLOW_PKTf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 63,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = PORT_WRED_PACKET_RED_DROPf,
            .field_idx = 0,
            .minbit    = 192,
            .maxbit    = 255,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_EGR_TM_PORT_DROPt_WRED_RED_PKTf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 63,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = PORT_WRED_PACKET_YELLOW_DROPf,
            .field_idx = 0,
            .minbit    = 128,
            .maxbit    = 191,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_EGR_TM_PORT_DROPt_WRED_YELLOW_PKTf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 63,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56990_a0_lta_bcmltx_track_index_xfrm_handler_fwd_s6_d0 */
                .desc = &bcm56990_a0_lta_bcmltx_track_index_xfrm_handler_fwd_s6_d0_desc,
            },
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56990_a0_lta_bcmltx_track_index_xfrm_handler_rev_s6_d0 */
                .desc = &bcm56990_a0_lta_bcmltx_track_index_xfrm_handler_rev_s6_d0_desc,
            },
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56990_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_s2_d0 */
                .desc = &bcm56990_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_s2_d0_desc,
            },
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_ALWAYS_REV_VALUE_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56990_a0_lta_bcmltx_port_oper_state_xfrm_handler_rev_s2_k2_d0 */
                .desc = &bcm56990_a0_lta_bcmltx_port_oper_state_xfrm_handler_rev_s2_k2_d0_desc,
            },
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56990_a0_lta_bcmltx_chip_port_idx_xfrm_handler_fwd_s2_d0 */
                .desc = &bcm56990_a0_lta_bcmltx_chip_port_idx_xfrm_handler_fwd_s2_d0_desc,
            },
        },
    },
};
static const bcmlrd_map_entry_t
bcm56990_a0_lrd_bcmltx_ctr_egr_tm_port_drop_validate_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_VALUE_FIELD_VALIDATION,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56990_a0_lta_bcmltx_ctr_egr_tm_port_drop_std_val_fv_handler */
            .handler_id = BCMLTD_VALIDATE_BCM56990_A0_LTA_BCMLTX_CTR_EGR_TM_PORT_DROP_STD_VAL_FV_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56990_a0_lrd_ctr_egr_tm_port_drop_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MMU_THDO_PORT_DROP_COUNT_MCm,
        },
        .entries = 3,
        .entry = bcm56990_a0_lrd_ctr_egr_tm_port_dropt_mmu_thdo_port_drop_count_mc_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MMU_THDO_PORT_DROP_COUNT_UCm,
        },
        .entries = 9,
        .entry = bcm56990_a0_lrd_ctr_egr_tm_port_dropt_mmu_thdo_port_drop_count_uc_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_VALIDATION,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56990_a0_lrd_bcmltx_ctr_egr_tm_port_drop_validate_entry
    },
};
const bcmlrd_map_t bcm56990_a0_lrd_ctr_egr_tm_port_drop_map = {
    .src_id = CTR_EGR_TM_PORT_DROPt,
    .field_data = &bcm56990_a0_lrd_ctr_egr_tm_port_drop_map_field_data,
    .groups = 3,
    .group  = bcm56990_a0_lrd_ctr_egr_tm_port_drop_map_group,
    .table_attr = &bcm56990_a0_lrd_ctr_egr_tm_port_dropt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};