#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse a binary tree using pre-order traversal.
 * @root: A pointer to the root node of the tree.
 * @func: A pointer to a function to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *root, void (*func)(int))
{
    if (!root || !func)
    {
        return;
    }

    func(root->n);
    binary_tree_preorder(root->left, func);
    binary_tree_preorder(root->right, func);
}

