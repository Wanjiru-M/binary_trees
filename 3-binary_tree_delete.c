#include <stdlib.h>
#include "binary_trees.h"

void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    binary_tree_t *current, *temp;
    binary_tree_t *queue[1000];  // Use an appropriate size for the queue.

    int front = -1, rear = -1;
    queue[++rear] = tree;

    while (front != rear)
    {
        current = queue[++front];

        if (current->left)
            queue[++rear] = current->left;
        if (current->right)
            queue[++rear] = current->right;

        free(current);
    }
}

