/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_my_strndup
*/

#include "tests_includes.h"

Test(my_strndup, error1)
{
    char *res = my_strndup(NULL, 4);

    cr_assert_eq(res, NULL);
}

Test(my_strndup, error2)
{
    char *res = my_strndup("hi", -4);

    cr_assert_eq(res, NULL);
}

Test(my_strndup, success)
{
    char *res = my_strndup("hi", 2);

    cr_assert_str_eq(res, "hi");
}

Test(my_strndup, no_crash)
{
    char *res = my_strndup("hi", 2);

    cr_assert_not_null(res);
}

Test(my_strndup, empty)
{
    char *res = my_strndup("hi", 0);

    cr_assert_str_empty(res);
}
