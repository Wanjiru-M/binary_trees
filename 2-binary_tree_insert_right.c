#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child.
 * @value: Value to store in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the created node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;
	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = parent->right;
	parent->right = newNode;

	if (newNode->right)
		newNode->right->parent = newNode;

	return (newNode);
}

