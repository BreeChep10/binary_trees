#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

void binary_levelorder_helper(const binary_tree_t *tree, void (*func)(int));

/**
 * binary_tree_levelorder - Perform level-order traversal of a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node's value
 *
 * Description: If tree or func is NULL, do nothing.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_levelorder_helper(tree, func);
}

/**
 * binary_levelorder_helper - Helper function for level-order traversal
 * @tree: Current node being examined
 * @func: Pointer to the function to call for each node's value
 *
 * Description: This function performs level-order traversal using a queue.
 */
void binary_levelorder_helper(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *queue[4096];
	int front = 0, rear = 0;

	if (tree == NULL)
		return;

	queue[rear++] = (binary_tree_t *)tree;

	while (front < rear)
	{
		binary_tree_t *current = queue[front++];

		func(current->n);

		if (current->left)
			queue[rear++] = current->left;

		if (current->right)
			queue[rear++] = current->right;
	}
}
