/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef BCMINT_LTSW_INT_INT_H
#define BCMINT_LTSW_INT_INT_H

#if defined(INCLUDE_INT)

#include <bcm_int/ltsw/int_int.h>

#include <sal/sal_types.h>

/*! HA subcomponent id for INT vector match bitmap. */
#define BCMINT_INT_VECTOR_MATCH_BMP_SUB_COMP_ID (1)

/*! HA subcomponent id for INT vector match priority. */
#define BCMINT_INT_VECTOR_MATCH_PRI_SUB_COMP_ID (2)

/*! HA subcomponent id for INT action profile type. */
#define BCMINT_INT_ACTION_TYPE_SUB_COMP_ID (3)

/*! HA subcomponent id for INT metadata field bitmap. */
#define BCMINT_INT_METADATA_FIELD_BMP_SUB_COMP_ID (30)

/*!
 * \brief INT metadata select type.
 */
typedef enum bcmint_int_md_field_entry_type_s {

    /*! Narrow entry. */
    bcmintIntMdFieldEntryNarrow = 0,

    /*! Wide entry. */
    bcmintIntMdFieldEntryWide = 1,

    /*! The count of INT metadata field entry type, must be the last. */
    bcmintIntMdFieldEntryCount = 2

} bcmint_int_md_field_entry_type_t;

#define BCMINT_INT_MD_FIELD_ENTRY_TYPE_STR \
{ \
    "Narrow", \
    "Wide" \
}

/*!
 * \brief Metadata field select info.
 */
typedef struct bcmint_int_md_field_select_info_s {

    /*! Chunk index. */
    uint8 chunk_index;

    /*! Start bit. */
    uint8 start;

} bcmint_int_md_field_select_info_t;

/*!
 * \brief Metadata field info.
 */
typedef struct bcmint_int_md_field_info_s {

    /*! Valid value. */
    bool valid;

    /*! Metadata field entry type. */
    bcmint_int_md_field_entry_type_t default_type;

    /*! Metadata field size. */
    uint8 size;

    /*! Metadata field select info. */
    bcmint_int_md_field_select_info_t select_info[bcmintIntMdFieldEntryCount];

    /*! Metadata field info ID. */
    const char *info_id;

} bcmint_int_md_field_info_t;

/*!
 * \brief Get metadata field info.
 *
 * \param [in] unit Unit Number.
 * \param [out] field_info Metadata field info.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmint_int_md_field_info_get(
    int unit,
    bcmint_int_md_field_info_t **field_info);

#endif /* INCLUDE_INT */

#endif /* BCMINT_LTSW_INT_INT_H */