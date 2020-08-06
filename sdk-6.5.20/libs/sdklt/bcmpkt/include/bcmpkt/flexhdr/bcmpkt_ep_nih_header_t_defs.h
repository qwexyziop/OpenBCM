#ifndef BCMPKT_EP_NIH_HEADER_T_DEFS_H
#define BCMPKT_EP_NIH_HEADER_T_DEFS_H
/*****************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by xfc_map_parser
 * from the NPL output file(s) header.yml.
 * Edits to this file will be lost when it is regenerated.
 *
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * All Rights Reserved.$
 *
 * Tool Path: $SDK/INTERNAL/fltg/xfc_map_parser
 */

/*!
 * \name EP_NIH_HEADER_T field IDs.
 * \anchor BCMPKT_EP_NIH_HEADER_T_XXX
 */
#define BCMPKT_EP_NIH_HEADER_T_HEADER_SUBTYPE       0
#define BCMPKT_EP_NIH_HEADER_T_OPAQUE_OBJECT_C      1
#define BCMPKT_EP_NIH_HEADER_T_OPAQUE_OBJECT_B      2
#define BCMPKT_EP_NIH_HEADER_T_OPAQUE_OBJECT_A      3
#define BCMPKT_EP_NIH_HEADER_T_RESERVED_0           4
#define BCMPKT_EP_NIH_HEADER_T_RECIRC_PROFILE_INDEX 5
#define BCMPKT_EP_NIH_HEADER_T_HEADER_TYPE          6
#define BCMPKT_EP_NIH_HEADER_T_TIMESTAMP            7
#define BCMPKT_EP_NIH_HEADER_T_OPAQUE_CTRL_C        8
#define BCMPKT_EP_NIH_HEADER_T_OPAQUE_CTRL_B        9
#define BCMPKT_EP_NIH_HEADER_T_OPAQUE_CTRL_A        10
#define BCMPKT_EP_NIH_HEADER_T_START                11

#define BCMPKT_EP_NIH_HEADER_T_FID_INVALID        -1
#define BCMPKT_EP_NIH_HEADER_T_FID_COUNT          12
#define BCMPKT_EP_NIH_HEADER_T_FID_START          0
#define BCMPKT_EP_NIH_HEADER_T_FID_END            (BCMPKT_EP_NIH_HEADER_T_FID_COUNT - 1)

#define BCMPKT_EP_NIH_HEADER_T_I_SUPPORT          0
#define BCMPKT_EP_NIH_HEADER_T_I_FID_COUNT        1

#define BCMPKT_EP_NIH_HEADER_T_FIELD_NAME_MAP_INIT \
    {"HEADER_SUBTYPE", BCMPKT_EP_NIH_HEADER_T_HEADER_SUBTYPE},\
    {"OPAQUE_OBJECT_C", BCMPKT_EP_NIH_HEADER_T_OPAQUE_OBJECT_C},\
    {"OPAQUE_OBJECT_B", BCMPKT_EP_NIH_HEADER_T_OPAQUE_OBJECT_B},\
    {"OPAQUE_OBJECT_A", BCMPKT_EP_NIH_HEADER_T_OPAQUE_OBJECT_A},\
    {"RESERVED_0", BCMPKT_EP_NIH_HEADER_T_RESERVED_0},\
    {"RECIRC_PROFILE_INDEX", BCMPKT_EP_NIH_HEADER_T_RECIRC_PROFILE_INDEX},\
    {"HEADER_TYPE", BCMPKT_EP_NIH_HEADER_T_HEADER_TYPE},\
    {"TIMESTAMP", BCMPKT_EP_NIH_HEADER_T_TIMESTAMP},\
    {"OPAQUE_CTRL_C", BCMPKT_EP_NIH_HEADER_T_OPAQUE_CTRL_C},\
    {"OPAQUE_CTRL_B", BCMPKT_EP_NIH_HEADER_T_OPAQUE_CTRL_B},\
    {"OPAQUE_CTRL_A", BCMPKT_EP_NIH_HEADER_T_OPAQUE_CTRL_A},\
    {"START", BCMPKT_EP_NIH_HEADER_T_START},\
    {"ep_nih_header_t fid count", BCMPKT_EP_NIH_HEADER_T_FID_COUNT}

#endif /* BCMPKT_EP_NIH_HEADER_T_DEFS_H */