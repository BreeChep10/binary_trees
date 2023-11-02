#include "binary_trees.h"

/**
 *bst_insert - inserts into a BST
 *@tree: the BST tree to insert into
 *@value: the value to give to the new node
 *Return: the inserted node but null incase of failure
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tr, *new;

	if (tree)
	{
		tr = *tree;

		if (!tr)
		{
			new = binary_tree_node(NULL, value);
			if (!new)
				return (NULL);
			*tree = new;
			return (new);
		}
		if (value < tr->n)
		{
			if (tr->left)
				return (bst_insert(&(tr->left), value));
			new = binary_tree_node(tr, value);
			if (!new)
				return (NULL);
			tr->left = new;
			return (new);
		}
		if (value > tr->n)
		{
			if (tr->right)
				return (bst_insert(&(tr->right), value));
			new = binary_tree_node(tr, value);
			if (!new)
				return (NULL);
			tr->right = new;
			return (new);
		}
	}
	return (NULL);
}
