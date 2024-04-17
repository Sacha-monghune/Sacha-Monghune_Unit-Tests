/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_my_count_words
*/

#include "tests_includes.h"

Test(count_words, not_succes)
{
    cr_assert_eq(my_count_words(NULL, "hi"), -1);
    cr_assert_eq(my_count_words("hi", NULL), -1);
}