#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node a node as the right-child.
 * @parent: pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: Pointer to the created node or NULL on failure.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = NULL;

	if (parent == NULL)
		return (NULL);

	if (parent->right)
		tmp = parent->right;

	parent->right = binary_tree_node(parent, value);

	if (!(parent->right))
		return (NULL);

	if (tmp)
	{
		parent->right->right = tmp;
		tmp->parent = parent->right;
	}

	return (parent->right);
}
