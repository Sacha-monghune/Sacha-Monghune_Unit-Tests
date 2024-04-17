/*
** EPITECH PROJECT, 2024
** *
** File description:
** tests_my_array_len
*/

#include "tests_includes.h"

Test(array_len, null)
{
    cr_assert_eq(my_array_len(NULL), -1);
}

Test(array_len, empty)
{
    char **array = malloc(sizeof(char *) * 0);

    cr_assert_eq(my_array_len(array), 0);
}