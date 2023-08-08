/*
 * Copyright (c) 2020 Samsung Electronics Co., Ltd. All Rights Reserved
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation.
 */

#include <kunit/mock.h>
#include <kunit/test.h>
#include "dsms_init.h"
#include "dsms_test.h"

/* -------------------------------------------------------------------------- */
/* Module test functions */
/* -------------------------------------------------------------------------- */

static void dsms_is_initialized_test(struct test *test)
{
	EXPECT_TRUE(test, dsms_is_initialized());
}

static void dsms_init_test(struct test *test)
{
	EXPECT_EQ(test, dsms_init_kunit_helper(), 0);
}

/* -------------------------------------------------------------------------- */
/* Module definition */
/* -------------------------------------------------------------------------- */

static struct test_case dsms_init_test_cases[] = {
	TEST_CASE(dsms_is_initialized_test),
	TEST_CASE(dsms_init_test),
	{},
};

static struct test_module dsms_init_test_module = {
	.name = "security-dsms-init-test",
	.test_cases = dsms_init_test_cases,
};
module_test(dsms_init_test_module);
