#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node.
 * @parent: Pointer to the parent node of the node create.
 * @value: The new value to input.
 *
 * Return: pointer to the new node created.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	if (!parent)
		new->parent = NULL;
	else
		new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	new->n = value;
	return (new);
}
