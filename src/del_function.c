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
    my_printf("%s n°%i - \"%s\" deleted.\n",
    head->type, head->id, head->name);
    free_list_del(head);
    return 0;
}

int del_last_node(void *data, char *arg)
{
    linked_list_t *linked = *((linked_list_t **)data);
    linked_list_t *curr = linked;
    int id_to_delete = my_getnbr(arg);

    while (curr != NULL) {
        if (curr->id == id_to_delete) {
            free_list_del(curr);
        }
        curr = curr->next;
        my_printf("%s n°%i - \"%s\" deleted.\n",
        curr->type, curr->id, curr->name);
    }
    return 0;
}

void delete_node(linked_list_t *prev, linked_list_t *curr)
{
    if (prev != NULL) {
        prev->next = curr->next;
    }
    my_printf("%s n°%i - \"%s\" deleted.\n",
    curr->type, curr->id, curr->name);
    free_list_del(curr);
}

int id_exists(linked_list_t *linked, int id_to_check)
{
    linked_list_t *curr = linked;

    while (curr != NULL) {
        if (curr->id == id_to_check)
            return 1;
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
    if (!id_exists(curr, id_to_delete))
        return 84;
    if (curr->id == id_to_delete)
        return del_first_node(data);
    while (curr != NULL && curr->id != id_to_delete) {
        prev = curr;
        curr = curr->next;
    }
    if (curr != NULL) {
        delete_node(prev, curr);
        return 0;
    }
    return 84;
}
