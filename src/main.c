/*
** EPITECH PROJECT, 2021
** Code_Binary_tree
** File description:
** main
*/

#include "binary_tree.h"

int main(void)
{
    binary_tree_t *binary_tree = NULL;

    binary_tree_add_right(&binary_tree, binary_tree_create('a', 3));
    binary_tree_add_right(&binary_tree, binary_tree_create('b', 2));
    binary_tree_add_left(&binary_tree, binary_tree_create('c', 4));
    printf("Size : %d", binary_tree_size(binary_tree));
    return (0);
}