/*
** EPITECH PROJECT, 2024
** Workshop_Unit_Tests
** File description:
** tests_freen_array
*/

#include "tests_includes.h"

Test(freen_array, null)
{
    char **array = malloc(sizeof(char*) * 2);
    char **array2 = malloc(sizeof(char*) * 2);

    freen_array(NULL, 5);
    freen_array(array, -3);
    freen_array(array2, 1);
}