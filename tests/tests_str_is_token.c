/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_str_is_token
*/

#include "tests_includes.h"

Test(str_is_token, not_success)
{
    cr_assert_not(str_is_token(NULL, "hi"));
    cr_assert_not(str_is_token("hi", NULL));
    cr_assert_not(str_is_token("hi", ""));
    cr_assert_not(str_is_token("", "hi"));
    cr_assert_not(str_is_token("nop", "hi"));
    
}

Test(str_is_token, success)
{
    cr_assert(str_is_token("hi", "hi everyone"));
}