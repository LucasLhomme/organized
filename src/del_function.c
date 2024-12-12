/*
** EPITECH PROJECT, 2024
** del function
** File description:
** del function for orga
*/

#include "my.h"
#include "shell.h"

int del_first_node(void *data)
{
    linked_list_t **linked = (linked_list_t **)data;
    linked_list_t *head = *linked;

    if (head == NULL) {
        my_printf("La liste est vide\n");
        return 0;
    }
    *linked = head->next;
    free_list_del(head);
}

int del_last_node(void *data, char *arg)
{
    linked_list_t *linked = *((linked_list_t **)data);
    linked_list_t *curr = linked;
    linked_list_t *prev = NULL;
    int id_to_delete = my_getnbr(arg);

    while (curr != NULL) {
        if (curr->id == id_to_delete) {
            free_list_del(curr);
        }
        prev = curr;
        curr = curr->next;
    }
    return 0;
}

int del_node(void *data, char *arg)
{
    linked_list_t **linked = (linked_list_t **)data;
    linked_list_t *curr = *linked;
    linked_list_t *prev = NULL;
    int id_to_delete = my_getnbr(arg);

    if (curr == NULL)
        return 84;
    if (curr->id == id_to_delete)
        return del_first_node(data);
    while (curr != NULL && curr->id != id_to_delete) {
        prev = curr;
        curr = curr->next;
    }
    if (curr != NULL) {
        if (prev != NULL) {
            prev->next = curr->next;
        }
        free_list_del(curr);
    }
    return 0;
}
