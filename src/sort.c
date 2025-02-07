/*
** EPITECH PROJECT, 2025
** B-CPE-110-LIL-1-1-organized-lucas.lhomme
** File description:
** sort
*/

#include "shell.h"
#include "my.h"

int check_sorting(char *args)
{
    if (my_strcmp(args, "TYPE") == 0)
        return 1;
    if (my_strcmp(args, "NAME") == 0)
        return 1;
    if (my_strcmp(args, "ID") == 0)
        return 1;
    return 0;
}

void swap(void *data, char **args)
{
    (void)data;
    (void)args;
}

int bubble_sort_id(linked_list_t *head, void *data, char **args)
{
    (void)data;
    (void)head;
    (void)args;
    return 0;
}
