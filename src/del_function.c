/*
** EPITECH PROJECT, 2024
** del function
** File description:
** del function for orga
*/

#include "my.h"
#include "shell.h"

int error_hand(void *data)
{
    linked_list_t *linked = *((linked_list_t **)data);

    if (linked == NULL) {
        my_printf("Y a rien\n");
        return 84;
    }
    if (linked->next == NULL) {
        free(linked);
        *((linked_list_t **)data) = NULL;
        return 84;
    }
    return 0;
}

int del_first_node(void *data, char **args)
{
    linked_list_t *linked = *((linked_list_t **)data);
    linked_list_t *head = linked;
    linked_list_t *rm_head = head;

    if (head->id == my_getnbr(args[0])) {
        rm_head = head->next;
        free(head->type);
        free(head->name);
        free(rm_head);
        head->next = head->next->next;
        return error_hand(data);
    }
    return 0;
}

int del_last_node(void *data, char *arg)
{
    linked_list_t *linked = *((linked_list_t **)data);
    linked_list_t *curr = linked;
    linked_list_t *prev = NULL;
    int id_to_delete = my_getnbr(arg);

    while (curr != NULL) {
        if (curr->id == id_to_delete) {
            free(curr->name);
            free(curr->type);
            free(curr);
            return error_hand(data);
        }
        prev = curr;
        curr = curr->next;
    }
}

int del_node(void *data, char *arg)
{
    linked_list_t *linked = *((linked_list_t **)data);
    linked_list_t *curr = linked;
    linked_list_t *prev = NULL;
    linked_list_t *rm_node = linked;
    int id_to_delete = my_getnbr(arg);

    if (linked == NULL) {
        my_printf("Y a rien\n");
        return 0;
    }
    if (linked->id == id_to_delete) {
        *((linked_list_t **)data) = linked->next;
        free(rm_node->name);
        free(rm_node->type);
        free(rm_node);
        return error_hand(data);
    }
    return 0;
}
