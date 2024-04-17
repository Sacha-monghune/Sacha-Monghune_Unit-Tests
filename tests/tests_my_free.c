/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_my_free
*/

#include "tests_includes.h"

Test(my_free, success)
{
    char *ptr = malloc(sizeof(char) * 19);

    my_free(ptr);
    cr_assert_not_null(ptr);
}

Test(my_free, null)
{
    my_free(NULL);
    cr_assert_null(NULL);
}