#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (!parent)
        return NULL;

    binary_tree_t *newNode = calloc(1, sizeof(binary_tree_t));
    if (!newNode)
        return NULL;

    newNode->n = value;
    newNode->parent = parent;
    newNode->right = NULL;

    if (parent->left)
    {
        newNode->left = parent->left;
        parent->left->parent = newNode;
    }

    parent->left = newNode;

    return newNode;
}

