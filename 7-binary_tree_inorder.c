#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverse a binary tree using in-order traversal.
 * @root: Pointer to the root node.
 * @func: Pointer to a function to call for each node.
 *
 * Return: None.
 */
void binary_tree_inorder(const binary_tree_t *root, void (*func)(int))
{
    if (root == NULL || func == NULL)
    {
        return;
    }

    binary_tree_inorder(root->left, func);
    func(root->n);
    binary_tree_inorder(root->right, func);
}

