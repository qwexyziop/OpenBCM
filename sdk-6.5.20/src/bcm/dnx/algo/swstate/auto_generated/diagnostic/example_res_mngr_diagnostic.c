/** \file algo/swstate/auto_generated/diagnostic/example_res_mngr_diagnostic.c
 *
 * sw state functions definitions
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifdef BSL_LOG_MODULE
#error "BSL_LOG_MODULE redefined"
#endif
#define BSL_LOG_MODULE BSL_LS_SWSTATEDNX_GENERAL

#include <soc/dnxc/swstate/dnxc_sw_state_c_includes.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/diagnostic/example_res_mngr_diagnostic.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
/*
 * Global Variables
 */

extern example_res_mngr_sw_state_t * algo_res_mngr_db_data[SOC_MAX_NUM_DEVICES];
/*
 * FUNCTIONs
 */

/*
 *
 * dump function for the variable algo_res_mngr_db
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_res_mngr_db_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;
    SHR_IF_ERR_EXIT(algo_res_mngr_db_resource_test_input_valid_core_all_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_res_mngr_db_resource_test_input_valid_per_core_dump(unit, -1, filters));
    SHR_IF_ERR_EXIT(algo_res_mngr_db_resource_test_input_valid_indexed_resource_dump(unit, -1, filters));
    SHR_IF_ERR_EXIT(algo_res_mngr_db_resource_test_input_valid_indexed_resource_per_core_dump(unit, -1, -1, filters));
    SHR_IF_ERR_EXIT(algo_res_mngr_db_resource_test_per_core_dump(unit, -1, filters));
    SHR_IF_ERR_EXIT(algo_res_mngr_db_resource_test_invalid_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_res_mngr_db_resource_test_indexed_resource_dump(unit, -1, filters));
    SHR_IF_ERR_EXIT(algo_res_mngr_db_resource_test_indexed_resource_per_core_dump(unit, -1, -1, filters));
    SHR_IF_ERR_EXIT(algo_res_mngr_db_resource_test_core_all_dump(unit, filters));
    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable resource_test_input_valid_core_all
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_res_mngr_db_resource_test_input_valid_core_all_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "example_res_mngr resource_test_input_valid_core_all") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate example_res_mngr resource_test_input_valid_core_all\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_res_mngr_db/resource_test_input_valid_core_all.txt",
            "algo_res_mngr_db[%d]->","((example_res_mngr_sw_state_t*)sw_state_roots_array[%d][EXAMPLE_RES_MNGR_MODULE_ID])->","resource_test_input_valid_core_all: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_res_mngr_db[%d]->","((example_res_mngr_sw_state_t*)sw_state_roots_array[%d][EXAMPLE_RES_MNGR_MODULE_ID])->","resource_test_input_valid_core_all: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_RES_MNGR_PRINT(
            unit,
            EXAMPLE_RES_MNGR_MODULE_ID,
            &((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_core_all);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable resource_test_input_valid_per_core
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_res_mngr_db_resource_test_input_valid_per_core_dump(int  unit,  int  resource_test_input_valid_per_core_idx_0,  dnx_sw_state_dump_filters_t  filters)
{
    int i0 = resource_test_input_valid_per_core_idx_0, I0 = resource_test_input_valid_per_core_idx_0 + 1;
    char *s0 = "";
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "example_res_mngr resource_test_input_valid_per_core") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate example_res_mngr resource_test_input_valid_per_core\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_res_mngr_db/resource_test_input_valid_per_core.txt",
            "algo_res_mngr_db[%d]->","((example_res_mngr_sw_state_t*)sw_state_roots_array[%d][EXAMPLE_RES_MNGR_MODULE_ID])->","resource_test_input_valid_per_core[]: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID]));

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_per_core);

        if (i0 == -1) {
            I0 = dnx_sw_state_get_nof_elements(unit,
                EXAMPLE_RES_MNGR_MODULE_ID,
                ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_per_core);
            i0 = dnx_sw_state_dump_check_all_the_same(unit,
                ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_per_core
                , sizeof(*((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_per_core), I0, &s0) ? I0 - 1 : 0;
        }

        if(i0 >= dnx_sw_state_get_nof_elements(unit, EXAMPLE_RES_MNGR_MODULE_ID, ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_per_core))
        {
            LOG_CLI((BSL_META("algo_res_mngr_db[]->((example_res_mngr_sw_state_t*)sw_state_roots_array[][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_per_core[]: ")));
            LOG_CLI((BSL_META("Invalid index: %d \n"),i0));
            SHR_EXIT();
        }

        if(dnx_sw_state_get_nof_elements(unit, EXAMPLE_RES_MNGR_MODULE_ID, ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_per_core) == 0)
        {
            SHR_EXIT();
        }

        for(; i0 < I0; i0++) {
            dnx_sw_state_dump_update_current_idx(unit, i0);
            DNX_SW_STATE_PRINT_MONITOR(
                unit,
                "algo_res_mngr_db[%d]->","((example_res_mngr_sw_state_t*)sw_state_roots_array[%d][EXAMPLE_RES_MNGR_MODULE_ID])->","resource_test_input_valid_per_core[%s%d]: ", s0, i0);

            DNX_SW_STATE_PRINT_FILE(
                unit,
                "[%s%d]: ", s0, i0);

            DNX_ALGO_RES_MNGR_PRINT(
                unit,
                EXAMPLE_RES_MNGR_MODULE_ID,
                &((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_per_core[i0]);

        }
        dnx_sw_state_dump_end_of_stride(unit);
        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable resource_test_input_valid_indexed_resource
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_res_mngr_db_resource_test_input_valid_indexed_resource_dump(int  unit,  int  resource_test_input_valid_indexed_resource_idx_0,  dnx_sw_state_dump_filters_t  filters)
{
    int i0 = resource_test_input_valid_indexed_resource_idx_0, I0 = resource_test_input_valid_indexed_resource_idx_0 + 1;
    char *s0 = "";
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "example_res_mngr resource_test_input_valid_indexed_resource") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate example_res_mngr resource_test_input_valid_indexed_resource\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_res_mngr_db/resource_test_input_valid_indexed_resource.txt",
            "algo_res_mngr_db[%d]->","((example_res_mngr_sw_state_t*)sw_state_roots_array[%d][EXAMPLE_RES_MNGR_MODULE_ID])->","resource_test_input_valid_indexed_resource[]: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID]));

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_indexed_resource);

        if (i0 == -1) {
            I0 = dnx_sw_state_get_nof_elements(unit,
                EXAMPLE_RES_MNGR_MODULE_ID,
                ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_indexed_resource);
            i0 = dnx_sw_state_dump_check_all_the_same(unit,
                ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_indexed_resource
                , sizeof(*((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_indexed_resource), I0, &s0) ? I0 - 1 : 0;
        }

        if(i0 >= dnx_sw_state_get_nof_elements(unit, EXAMPLE_RES_MNGR_MODULE_ID, ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_indexed_resource))
        {
            LOG_CLI((BSL_META("algo_res_mngr_db[]->((example_res_mngr_sw_state_t*)sw_state_roots_array[][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_indexed_resource[]: ")));
            LOG_CLI((BSL_META("Invalid index: %d \n"),i0));
            SHR_EXIT();
        }

        if(dnx_sw_state_get_nof_elements(unit, EXAMPLE_RES_MNGR_MODULE_ID, ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_indexed_resource) == 0)
        {
            SHR_EXIT();
        }

        for(; i0 < I0; i0++) {
            dnx_sw_state_dump_update_current_idx(unit, i0);
            DNX_SW_STATE_PRINT_MONITOR(
                unit,
                "algo_res_mngr_db[%d]->","((example_res_mngr_sw_state_t*)sw_state_roots_array[%d][EXAMPLE_RES_MNGR_MODULE_ID])->","resource_test_input_valid_indexed_resource[%s%d]: ", s0, i0);

            DNX_SW_STATE_PRINT_FILE(
                unit,
                "[%s%d]: ", s0, i0);

            DNX_ALGO_RES_MNGR_PRINT(
                unit,
                EXAMPLE_RES_MNGR_MODULE_ID,
                &((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_indexed_resource[i0]);

        }
        dnx_sw_state_dump_end_of_stride(unit);
        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable resource_test_input_valid_indexed_resource_per_core
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_res_mngr_db_resource_test_input_valid_indexed_resource_per_core_dump(int  unit,  int  resource_test_input_valid_indexed_resource_per_core_idx_0,  int  resource_test_input_valid_indexed_resource_per_core_idx_1,  dnx_sw_state_dump_filters_t  filters)
{
    int i0 = resource_test_input_valid_indexed_resource_per_core_idx_0, I0 = resource_test_input_valid_indexed_resource_per_core_idx_0 + 1;
    int i1 = resource_test_input_valid_indexed_resource_per_core_idx_1, I1 = resource_test_input_valid_indexed_resource_per_core_idx_1 + 1, org_i1 = resource_test_input_valid_indexed_resource_per_core_idx_1;
    char *s0 = "", *s1 = "";
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "example_res_mngr resource_test_input_valid_indexed_resource_per_core") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate example_res_mngr resource_test_input_valid_indexed_resource_per_core\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_res_mngr_db/resource_test_input_valid_indexed_resource_per_core.txt",
            "algo_res_mngr_db[%d]->","((example_res_mngr_sw_state_t*)sw_state_roots_array[%d][EXAMPLE_RES_MNGR_MODULE_ID])->","resource_test_input_valid_indexed_resource_per_core[][]: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID]));

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_indexed_resource_per_core);

        if (i0 == -1) {
            I0 = dnx_sw_state_get_nof_elements(unit,
                EXAMPLE_RES_MNGR_MODULE_ID,
                ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_indexed_resource_per_core);
            i0 = dnx_sw_state_dump_check_all_the_same(unit,
                ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_indexed_resource_per_core
                , sizeof(*((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_indexed_resource_per_core), I0, &s0) ? I0 - 1 : 0;
        }

        if(i0 >= dnx_sw_state_get_nof_elements(unit, EXAMPLE_RES_MNGR_MODULE_ID, ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_indexed_resource_per_core))
        {
            LOG_CLI((BSL_META("algo_res_mngr_db[]->((example_res_mngr_sw_state_t*)sw_state_roots_array[][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_indexed_resource_per_core[][]: ")));
            LOG_CLI((BSL_META("Invalid index: %d \n"),i0));
            SHR_EXIT();
        }

        if(dnx_sw_state_get_nof_elements(unit, EXAMPLE_RES_MNGR_MODULE_ID, ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_indexed_resource_per_core) == 0)
        {
            SHR_EXIT();
        }

        for(; i0 < I0; i0++) {
            /*coverity explanation: coverity has detected an out of bound read, due to i0 being incremented;
            However, we have a check if i0 > the end condition of the loop. If the check catches that i0 has
            reached the value of the end condition, we exit the function.
            What coverity is catching is the last increment of i0 before the loop ends. */
            /* coverity[overrun-local:FALSE] */
                DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
                    unit,
                    ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_indexed_resource_per_core[i0]);

            if (i1 == -1) {
                I1 = dnx_sw_state_get_nof_elements(unit,
                    EXAMPLE_RES_MNGR_MODULE_ID,
                    ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_indexed_resource_per_core[i0]);
                i1 = dnx_sw_state_dump_check_all_the_same(unit,
                    ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_indexed_resource_per_core[i0]
                    , sizeof(*((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_indexed_resource_per_core[i0]), I1, &s1) ? I1 - 1 : 0;
            }

            if(i1 >= dnx_sw_state_get_nof_elements(unit, EXAMPLE_RES_MNGR_MODULE_ID, ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_indexed_resource_per_core[i0]))
            {
                LOG_CLI((BSL_META("algo_res_mngr_db[]->((example_res_mngr_sw_state_t*)sw_state_roots_array[][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_indexed_resource_per_core[][]: ")));
                LOG_CLI((BSL_META("Invalid index: %d \n"),i1));
                SHR_EXIT();
            }

            if(dnx_sw_state_get_nof_elements(unit, EXAMPLE_RES_MNGR_MODULE_ID, ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_indexed_resource_per_core[i0]) == 0)
            {
                SHR_EXIT();
            }

            for(; i1 < I1; i1++) {
                dnx_sw_state_dump_update_current_idx(unit, i1);
                DNX_SW_STATE_PRINT_MONITOR(
                    unit,
                    "algo_res_mngr_db[%d]->","((example_res_mngr_sw_state_t*)sw_state_roots_array[%d][EXAMPLE_RES_MNGR_MODULE_ID])->","resource_test_input_valid_indexed_resource_per_core[%s%d][%s%d]: ", s0, i0, s1, i1);

                DNX_SW_STATE_PRINT_FILE(
                    unit,
                    "[%s%d][%s%d]: ", s0, i0, s1, i1);

                DNX_ALGO_RES_MNGR_PRINT(
                    unit,
                    EXAMPLE_RES_MNGR_MODULE_ID,
                    &((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_input_valid_indexed_resource_per_core[i0][i1]);

            }
            i1 = org_i1;
            dnx_sw_state_dump_end_of_stride(unit);
        }
        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable resource_test_per_core
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_res_mngr_db_resource_test_per_core_dump(int  unit,  int  resource_test_per_core_idx_0,  dnx_sw_state_dump_filters_t  filters)
{
    int i0 = resource_test_per_core_idx_0, I0 = resource_test_per_core_idx_0 + 1;
    char *s0 = "";
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "example_res_mngr resource_test_per_core") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate example_res_mngr resource_test_per_core\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_res_mngr_db/resource_test_per_core.txt",
            "algo_res_mngr_db[%d]->","((example_res_mngr_sw_state_t*)sw_state_roots_array[%d][EXAMPLE_RES_MNGR_MODULE_ID])->","resource_test_per_core[]: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID]));

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_per_core);

        if (i0 == -1) {
            I0 = dnx_sw_state_get_nof_elements(unit,
                EXAMPLE_RES_MNGR_MODULE_ID,
                ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_per_core);
            i0 = dnx_sw_state_dump_check_all_the_same(unit,
                ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_per_core
                , sizeof(*((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_per_core), I0, &s0) ? I0 - 1 : 0;
        }

        if(i0 >= dnx_sw_state_get_nof_elements(unit, EXAMPLE_RES_MNGR_MODULE_ID, ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_per_core))
        {
            LOG_CLI((BSL_META("algo_res_mngr_db[]->((example_res_mngr_sw_state_t*)sw_state_roots_array[][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_per_core[]: ")));
            LOG_CLI((BSL_META("Invalid index: %d \n"),i0));
            SHR_EXIT();
        }

        if(dnx_sw_state_get_nof_elements(unit, EXAMPLE_RES_MNGR_MODULE_ID, ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_per_core) == 0)
        {
            SHR_EXIT();
        }

        for(; i0 < I0; i0++) {
            dnx_sw_state_dump_update_current_idx(unit, i0);
            DNX_SW_STATE_PRINT_MONITOR(
                unit,
                "algo_res_mngr_db[%d]->","((example_res_mngr_sw_state_t*)sw_state_roots_array[%d][EXAMPLE_RES_MNGR_MODULE_ID])->","resource_test_per_core[%s%d]: ", s0, i0);

            DNX_SW_STATE_PRINT_FILE(
                unit,
                "[%s%d]: ", s0, i0);

            DNX_ALGO_RES_MNGR_PRINT(
                unit,
                EXAMPLE_RES_MNGR_MODULE_ID,
                &((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_per_core[i0]);

        }
        dnx_sw_state_dump_end_of_stride(unit);
        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable resource_test_invalid
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_res_mngr_db_resource_test_invalid_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "example_res_mngr resource_test_invalid") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate example_res_mngr resource_test_invalid\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_res_mngr_db/resource_test_invalid.txt",
            "algo_res_mngr_db[%d]->","((example_res_mngr_sw_state_t*)sw_state_roots_array[%d][EXAMPLE_RES_MNGR_MODULE_ID])->","resource_test_invalid: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_res_mngr_db[%d]->","((example_res_mngr_sw_state_t*)sw_state_roots_array[%d][EXAMPLE_RES_MNGR_MODULE_ID])->","resource_test_invalid: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_RES_MNGR_PRINT(
            unit,
            EXAMPLE_RES_MNGR_MODULE_ID,
            &((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_invalid);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable resource_test_indexed_resource
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_res_mngr_db_resource_test_indexed_resource_dump(int  unit,  int  resource_test_indexed_resource_idx_0,  dnx_sw_state_dump_filters_t  filters)
{
    int i0 = resource_test_indexed_resource_idx_0, I0 = resource_test_indexed_resource_idx_0 + 1;
    char *s0 = "";
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "example_res_mngr resource_test_indexed_resource") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate example_res_mngr resource_test_indexed_resource\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_res_mngr_db/resource_test_indexed_resource.txt",
            "algo_res_mngr_db[%d]->","((example_res_mngr_sw_state_t*)sw_state_roots_array[%d][EXAMPLE_RES_MNGR_MODULE_ID])->","resource_test_indexed_resource[]: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID]));

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_indexed_resource);

        if (i0 == -1) {
            I0 = dnx_sw_state_get_nof_elements(unit,
                EXAMPLE_RES_MNGR_MODULE_ID,
                ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_indexed_resource);
            i0 = dnx_sw_state_dump_check_all_the_same(unit,
                ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_indexed_resource
                , sizeof(*((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_indexed_resource), I0, &s0) ? I0 - 1 : 0;
        }

        if(i0 >= dnx_sw_state_get_nof_elements(unit, EXAMPLE_RES_MNGR_MODULE_ID, ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_indexed_resource))
        {
            LOG_CLI((BSL_META("algo_res_mngr_db[]->((example_res_mngr_sw_state_t*)sw_state_roots_array[][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_indexed_resource[]: ")));
            LOG_CLI((BSL_META("Invalid index: %d \n"),i0));
            SHR_EXIT();
        }

        if(dnx_sw_state_get_nof_elements(unit, EXAMPLE_RES_MNGR_MODULE_ID, ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_indexed_resource) == 0)
        {
            SHR_EXIT();
        }

        for(; i0 < I0; i0++) {
            dnx_sw_state_dump_update_current_idx(unit, i0);
            DNX_SW_STATE_PRINT_MONITOR(
                unit,
                "algo_res_mngr_db[%d]->","((example_res_mngr_sw_state_t*)sw_state_roots_array[%d][EXAMPLE_RES_MNGR_MODULE_ID])->","resource_test_indexed_resource[%s%d]: ", s0, i0);

            DNX_SW_STATE_PRINT_FILE(
                unit,
                "[%s%d]: ", s0, i0);

            DNX_ALGO_RES_MNGR_PRINT(
                unit,
                EXAMPLE_RES_MNGR_MODULE_ID,
                &((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_indexed_resource[i0]);

        }
        dnx_sw_state_dump_end_of_stride(unit);
        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable resource_test_indexed_resource_per_core
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_res_mngr_db_resource_test_indexed_resource_per_core_dump(int  unit,  int  resource_test_indexed_resource_per_core_idx_0,  int  resource_test_indexed_resource_per_core_idx_1,  dnx_sw_state_dump_filters_t  filters)
{
    int i0 = resource_test_indexed_resource_per_core_idx_0, I0 = resource_test_indexed_resource_per_core_idx_0 + 1;
    int i1 = resource_test_indexed_resource_per_core_idx_1, I1 = resource_test_indexed_resource_per_core_idx_1 + 1, org_i1 = resource_test_indexed_resource_per_core_idx_1;
    char *s0 = "", *s1 = "";
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "example_res_mngr resource_test_indexed_resource_per_core") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate example_res_mngr resource_test_indexed_resource_per_core\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_res_mngr_db/resource_test_indexed_resource_per_core.txt",
            "algo_res_mngr_db[%d]->","((example_res_mngr_sw_state_t*)sw_state_roots_array[%d][EXAMPLE_RES_MNGR_MODULE_ID])->","resource_test_indexed_resource_per_core[][]: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID]));

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_indexed_resource_per_core);

        if (i0 == -1) {
            I0 = dnx_sw_state_get_nof_elements(unit,
                EXAMPLE_RES_MNGR_MODULE_ID,
                ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_indexed_resource_per_core);
            i0 = dnx_sw_state_dump_check_all_the_same(unit,
                ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_indexed_resource_per_core
                , sizeof(*((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_indexed_resource_per_core), I0, &s0) ? I0 - 1 : 0;
        }

        if(i0 >= dnx_sw_state_get_nof_elements(unit, EXAMPLE_RES_MNGR_MODULE_ID, ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_indexed_resource_per_core))
        {
            LOG_CLI((BSL_META("algo_res_mngr_db[]->((example_res_mngr_sw_state_t*)sw_state_roots_array[][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_indexed_resource_per_core[][]: ")));
            LOG_CLI((BSL_META("Invalid index: %d \n"),i0));
            SHR_EXIT();
        }

        if(dnx_sw_state_get_nof_elements(unit, EXAMPLE_RES_MNGR_MODULE_ID, ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_indexed_resource_per_core) == 0)
        {
            SHR_EXIT();
        }

        for(; i0 < I0; i0++) {
            /*coverity explanation: coverity has detected an out of bound read, due to i0 being incremented;
            However, we have a check if i0 > the end condition of the loop. If the check catches that i0 has
            reached the value of the end condition, we exit the function.
            What coverity is catching is the last increment of i0 before the loop ends. */
            /* coverity[overrun-local:FALSE] */
                DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
                    unit,
                    ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_indexed_resource_per_core[i0]);

            if (i1 == -1) {
                I1 = dnx_sw_state_get_nof_elements(unit,
                    EXAMPLE_RES_MNGR_MODULE_ID,
                    ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_indexed_resource_per_core[i0]);
                i1 = dnx_sw_state_dump_check_all_the_same(unit,
                    ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_indexed_resource_per_core[i0]
                    , sizeof(*((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_indexed_resource_per_core[i0]), I1, &s1) ? I1 - 1 : 0;
            }

            if(i1 >= dnx_sw_state_get_nof_elements(unit, EXAMPLE_RES_MNGR_MODULE_ID, ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_indexed_resource_per_core[i0]))
            {
                LOG_CLI((BSL_META("algo_res_mngr_db[]->((example_res_mngr_sw_state_t*)sw_state_roots_array[][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_indexed_resource_per_core[][]: ")));
                LOG_CLI((BSL_META("Invalid index: %d \n"),i1));
                SHR_EXIT();
            }

            if(dnx_sw_state_get_nof_elements(unit, EXAMPLE_RES_MNGR_MODULE_ID, ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_indexed_resource_per_core[i0]) == 0)
            {
                SHR_EXIT();
            }

            for(; i1 < I1; i1++) {
                dnx_sw_state_dump_update_current_idx(unit, i1);
                DNX_SW_STATE_PRINT_MONITOR(
                    unit,
                    "algo_res_mngr_db[%d]->","((example_res_mngr_sw_state_t*)sw_state_roots_array[%d][EXAMPLE_RES_MNGR_MODULE_ID])->","resource_test_indexed_resource_per_core[%s%d][%s%d]: ", s0, i0, s1, i1);

                DNX_SW_STATE_PRINT_FILE(
                    unit,
                    "[%s%d][%s%d]: ", s0, i0, s1, i1);

                DNX_ALGO_RES_MNGR_PRINT(
                    unit,
                    EXAMPLE_RES_MNGR_MODULE_ID,
                    &((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_indexed_resource_per_core[i0][i1]);

            }
            i1 = org_i1;
            dnx_sw_state_dump_end_of_stride(unit);
        }
        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable resource_test_core_all
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_res_mngr_db_resource_test_core_all_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "example_res_mngr resource_test_core_all") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate example_res_mngr resource_test_core_all\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_res_mngr_db/resource_test_core_all.txt",
            "algo_res_mngr_db[%d]->","((example_res_mngr_sw_state_t*)sw_state_roots_array[%d][EXAMPLE_RES_MNGR_MODULE_ID])->","resource_test_core_all: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_res_mngr_db[%d]->","((example_res_mngr_sw_state_t*)sw_state_roots_array[%d][EXAMPLE_RES_MNGR_MODULE_ID])->","resource_test_core_all: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_RES_MNGR_PRINT(
            unit,
            EXAMPLE_RES_MNGR_MODULE_ID,
            &((example_res_mngr_sw_state_t*)sw_state_roots_array[unit][EXAMPLE_RES_MNGR_MODULE_ID])->resource_test_core_all);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 * Global Variables
 */

dnx_sw_state_diagnostic_info_t algo_res_mngr_db_info[SOC_MAX_NUM_DEVICES][ALGO_RES_MNGR_DB_INFO_NOF_ENTRIES];
const char* algo_res_mngr_db_layout_str[ALGO_RES_MNGR_DB_INFO_NOF_ENTRIES] = {
    "ALGO_RES_MNGR_DB~",
    "ALGO_RES_MNGR_DB~RESOURCE_TEST_INPUT_VALID_CORE_ALL~",
    "ALGO_RES_MNGR_DB~RESOURCE_TEST_INPUT_VALID_PER_CORE~",
    "ALGO_RES_MNGR_DB~RESOURCE_TEST_INPUT_VALID_INDEXED_RESOURCE~",
    "ALGO_RES_MNGR_DB~RESOURCE_TEST_INPUT_VALID_INDEXED_RESOURCE_PER_CORE~",
    "ALGO_RES_MNGR_DB~RESOURCE_TEST_PER_CORE~",
    "ALGO_RES_MNGR_DB~RESOURCE_TEST_INVALID~",
    "ALGO_RES_MNGR_DB~RESOURCE_TEST_INDEXED_RESOURCE~",
    "ALGO_RES_MNGR_DB~RESOURCE_TEST_INDEXED_RESOURCE_PER_CORE~",
    "ALGO_RES_MNGR_DB~RESOURCE_TEST_CORE_ALL~",
};
#endif /* DNX_SW_STATE_DIAGNOSTIC */
#undef BSL_LOG_MODULE