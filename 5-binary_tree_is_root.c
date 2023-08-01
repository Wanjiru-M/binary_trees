#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if node is a root.
 * @node: A pointer to the node to check.
 *
 * Return: 1 if node is a root, otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL || node->parent)
{
return (0);
}
else
{
return (1);
}
}

