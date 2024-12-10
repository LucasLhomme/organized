/*
** EPITECH PROJECT, 2024
** Main Organized
** File description:
** Main for Organized
*/

#include "shell.h"
#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(void *data, char **args)
{
    linked_list_t *linked = *((linked_list_t **)data);
    linked_list_t *new_node = malloc(sizeof(linked_list_t));
    linked_list_t **dat = &new_node;
    static int id = 0;

    new_node->next = linked;
    new_node->type = my_strdup(args[0]);
    new_node->id = id;
    new_node->name = my_strdup(args[1]);
    id++;
    *((linked_list_t **)data) = new_node;
    my_printf("%s n°%i - ""%s""\n", args[0], id, args[1]);
    return 0;
}

int del(void *data, char **args)
{
    (void)data;
    (void)args;
    return 0;
}

int disp(void *data, char **args)
{
    linked_list_t *linked = *((linked_list_t **)data);

    if (linked == NULL)
        my_printf("Y a rien\n");
    while (linked != NULL) {
        my_printf("%s n°%i - ""%s""\n", linked->type,
        linked->id, linked->name);
        linked = linked->next;
    }
    return 0;
}

int sort(void *data, char **args)
{
    (void)data;
    (void)args;
    return 0;
}

int main(void)
{
    linked_list_t *linked = NULL;

    workshop_shell(&linked);
    return 0;
}
