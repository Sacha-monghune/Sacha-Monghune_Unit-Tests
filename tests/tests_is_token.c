/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_is_token
*/

#include "tests_includes.h"

Test(is_token, fal)
{
    cr_assert_not(is_token('c', NULL));
    cr_assert_not(is_token('c', ""));
}

Test(is_token, tru)
{
    cr_assert(is_token('c', "coucou"));
}
