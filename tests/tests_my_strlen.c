/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_my_strlen
*/

#include "tests_includes.h"

Test(my_strlen, empty)
{
    cr_assert_eq(my_strlen(""), 0);
}

Test(my_strlen, error)
{
    cr_assert_eq(my_strlen(NULL), -1);
}

Test(my_strlen, not_empty)
{
    cr_assert_eq(my_strlen("Hello"), 5);
}