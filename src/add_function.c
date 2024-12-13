/*
** EPITECH PROJECT, 2024
** Add for orga
** File description:
** all add function for orga
*/

#include "shell.h"
#include "my.h"

int find_type(char *args)
{
    if (my_strcmp(args, "WIRE") == 0)
        return 1;
    if (my_strcmp(args, "ACTUATOR") == 0)
        return 1;
    if (my_strcmp(args, "DEVICE") == 0)
        return 1;
    if (my_strcmp(args, "SENSOR") == 0)
        return 1;
    if (my_strcmp(args, "PROCESSOR") == 0)
        return 1;
    return 0;
}

int multiple_add(void *data, char *args, char *args_bis)
{
    linked_list_t *linked = *((linked_list_t **)data);
    linked_list_t *new_node = malloc(sizeof(linked_list_t));
    static int id = 0;

    if (args == NULL || args_bis == NULL)
        return 84;
    if (find_type(args) == 1) {
        new_node->next = linked;
        new_node->type = my_strdup(args);
        new_node->id = id;
        new_node->name = my_strdup(args_bis);
        *((linked_list_t **)data) = new_node;
        my_printf("%s n°%i - \"%s\" added.\n",
        new_node->type, id, new_node->name);
        id++;
    } else {
        return 84;
    }
    return 0;
}
