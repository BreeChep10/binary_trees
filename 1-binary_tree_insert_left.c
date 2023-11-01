#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another
 * node.
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node.
 *
 * Return: Pointer to the newly inserted node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = NULL;

	if (parent == NULL)
		return (NULL);

	if (parent->left)
		tmp = parent->left;

	parent->left = binary_tree_node(parent, value);

	if (!(parent->left))
		return (NULL);

	if (tmp)
	{
		parent->left->left = tmp;
		tmp->parent = parent->left;
	}

	return (parent->left);
}
