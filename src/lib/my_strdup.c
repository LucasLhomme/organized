/*
** EPITECH PROJECT, 2024
** my strdup
** File description:
** function that allocates memory and copies the string
*/

#include "my.h"

char *my_strdup(char const *src)
{
    char *name;

    name = malloc(strlen(src) + 1);
    if (name == NULL)
        return NULL;
    my_strcpy(name, src);
    return name;
}
