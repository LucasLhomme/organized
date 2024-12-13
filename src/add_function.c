/*
** EPITECH PROJECT, 2024
** Add for orga
** File description:
** all add function for orga
*/

#include "shell.h"
#include "my.h"


int multiple_add(void *data, char *args, char *args_bis)
{
    linked_list_t *linked = *((linked_list_t **)data);
    linked_list_t *new_node = malloc(sizeof(linked_list_t));
    linked_list_t **dat = &new_node;
    static int id = 0;

    if (args == NULL || args_bis == NULL) {
        free(new_node);
        return 84;
    }
    new_node->next = linked;
    new_node->type = my_strdup(args);
    new_node->id = id;
    new_node->name = my_strdup(args_bis);
    *((linked_list_t **)data) = new_node;
    my_printf("%s n°%i - \"%s\" added.\n", new_node->type, id, new_node->name);
    id++;
    return 0;
}
