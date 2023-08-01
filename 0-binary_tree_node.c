#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the new node to create
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
    if (!new_node)
        return NULL;

    memset(new_node, 0, sizeof(binary_tree_t));
    new_node->n = value;
    new_node->parent = parent;

    return new_node;
}

