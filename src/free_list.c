/*
** EPITECH PROJECT, 2024
** free list
** File description:
** free all malloc in my orga
*/

#include "my.h"
#include "shell.h"

void free_list(linked_list_t *linked)
{
    linked_list_t *tmp;

    while (linked != NULL) {
        tmp = linked;
        linked = linked->next;
        free(tmp->type);
        free(tmp->name);
        free(tmp);
    }
    return 0;
}
