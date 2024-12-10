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
    int j = 0;

    while (args[j] != NULL) {
        multiple_add(data, args[j], args[j + 1]);
        j = j + 2;
    }
    return 0;
}

int multiple_add(void *data, char *args, char *args_bis)
{
    linked_list_t *linked = *((linked_list_t **)data);
    linked_list_t *new_node = malloc(sizeof(linked_list_t));
    linked_list_t **dat = &new_node;
    static int id = 0;

    new_node->next = linked;
    new_node->type = my_strdup(args);
    new_node->id = id;
    new_node->name = my_strdup(args_bis);
    *((linked_list_t **)data) = new_node;
    my_printf("%s" "n°%i" - "%s""\n", new_node->type, id, new_node->name);
    id++;
    return 0;
}

//free quand je delete
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

/*int sort(void *data, char **args)
{
    (void)data;
    (void)args;
    return 0;
}
*/
//free toute la liste ici
int main(void)
{
    linked_list_t *linked = NULL;

    workshop_shell(&linked);
    return 0;
}
