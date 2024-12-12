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

    while (args[j] != NULL) {
        multiple_add(data, args[j], args[j + 1]);
        j = j + 2;
    }
    return 0;
}

//free quand je delete
int del(void *data, char **args)
{
    int j = 0;

    while (args[j] != NULL) {
        del_node(data, args[j]);
        j++;
    }
    return 0;
}

int disp(void *data, char **args)
{
    linked_list_t *linked = *((linked_list_t **)data);

    if (linked == NULL)
        my_printf("Y a rien\n");
    while (linked != NULL) {
        my_printf("%s n°%i - \"%s\"\n", linked->type,
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
    free_list(linked);
    return 0;
}
