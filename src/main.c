/*
** EPITECH PROJECT, 2024
** Main Organized
** File description:
** Main for Organized
*/

#include "shell.h"
#include "my.h"

int add(void *data, char **args)
{
    int j = 0;

    if (args[0] == NULL || args[1] == NULL) {
        return 84;
    }
    while (args[j] != NULL && args[j + 1] != NULL) {
        if (multiple_add(data, args[j], args[j + 1]) != 0)
            return 84;
        j = j + 2;
    }
    return 0;
}

int del(void *data, char **args)
{
    int j = 0;

    while (args[j] != NULL) {
        if (del_node(data, args[j]) == 84) {
            return 84;
        }
        j++;
    }
    return 0;
}

int disp(void *data, char **args)
{
    linked_list_t *linked = *((linked_list_t **)data);

    if (args[0] != NULL)
        return 84;
    else {
    while (linked != NULL) {
        my_printf("%s n°%i - \"%s\"\n", linked->type,
        linked->id, linked->name);
        linked = linked->next;
        }
    }
    (void)args;
    return 0;
}

int sort(void *data, char **args)
{
    (void)data;
    (void)args;
    return 84;
}

int main(void)
{
    linked_list_t *linked = NULL;
    int exit = 0;

    exit = workshop_shell(&linked);
    free_list(linked);
    return exit;
}
