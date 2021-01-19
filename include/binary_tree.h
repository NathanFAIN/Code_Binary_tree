/*
** EPITECH PROJECT, 2021
** Code_Binary_tree
** File description:
** binary_tree
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#ifndef BINARY_TREE_H_
#define BINARY_TREE_H_

typedef struct binary_tree_s binary_tree_t;

struct binary_tree_s
{
    char letter;
    int occurrence;
    binary_tree_t *right;
    binary_tree_t *left;
};

binary_tree_t *binary_tree_create(char letter, int occurrence);
void binary_tree_add_right(binary_tree_t **binary_tree, binary_tree_t *elem);
void binary_tree_add_left(binary_tree_t **binary_tree, binary_tree_t *elem);
int binary_tree_size(binary_tree_t *binary_tree);
binary_tree_t *binary_tree_get_by_letter(binary_tree_t *binary_tree, char letter);
void binary_tree_destroy(binary_tree_t *binary_tree);

#endif /* !BINARY_TREE_H_ */
