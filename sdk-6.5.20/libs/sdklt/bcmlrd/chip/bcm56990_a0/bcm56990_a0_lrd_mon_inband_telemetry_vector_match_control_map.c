/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/mon/bcm56990_a0/bcm56990_a0_MON_INBAND_TELEMETRY_VECTOR_MATCH_CONTROL.map.ltl for
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
/* MON_INBAND_TELEMETRY_VECTOR_MATCH_CONTROL field init */
static const bcmlrd_field_data_t bcm56990_a0_lrd_mon_inband_telemetry_vector_match_control_map_field_data_mmd[] = {
    { /* 0 MISS_ACTION */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_a0_lrd_ifd_u32_0x0,
      .def = &bcm56990_a0_lrd_ifd_u32_0x0,
      .max = &bcm56990_a0_lrd_ifd_u32_0x1,
      .depth = 0,
      .width = 1,
      .edata = BCM56990_A0_LRD_INBAND_TELEMETRY_VECTOR_MATCH_MISS_ACTION_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56990_a0_lrd_mon_inband_telemetry_vector_match_control_map_field_data = {
    .fields = 1,
    .field = bcm56990_a0_lrd_mon_inband_telemetry_vector_match_control_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_a0_lrd_mon_inband_telemetry_vector_match_controlt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
};

static const bcmlrd_map_attr_t bcm56990_a0_lrd_mon_inband_telemetry_vector_match_controlt_attr_group = {
    .attributes = 1,
    .attr = bcm56990_a0_lrd_mon_inband_telemetry_vector_match_controlt_attr_entry,
};

static const bcmlrd_map_entry_t bcm56990_a0_lrd_mon_inband_telemetry_vector_match_controlt_req_vector_match_policy_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MISS_FWD_ACTIONf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_INBAND_TELEMETRY_VECTOR_MATCH_CONTROLt_MISS_ACTIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_group_t bcm56990_a0_lrd_mon_inband_telemetry_vector_match_control_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = REQ_VECTOR_MATCH_POLICYr,
        },
        .entries = 1,
        .entry = bcm56990_a0_lrd_mon_inband_telemetry_vector_match_controlt_req_vector_match_policy_map_entry
    },
};
const bcmlrd_map_t bcm56990_a0_lrd_mon_inband_telemetry_vector_match_control_map = {
    .src_id = MON_INBAND_TELEMETRY_VECTOR_MATCH_CONTROLt,
    .field_data = &bcm56990_a0_lrd_mon_inband_telemetry_vector_match_control_map_field_data,
    .groups = 1,
    .group  = bcm56990_a0_lrd_mon_inband_telemetry_vector_match_control_map_group,
    .table_attr = &bcm56990_a0_lrd_mon_inband_telemetry_vector_match_controlt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};