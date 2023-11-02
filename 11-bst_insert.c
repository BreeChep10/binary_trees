#include "binary_trees.h"



bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tr, *new;

	if (tree)
	{
		tr = *tree;

		if (!tr)
		{
			new = binary_tree_node(tr, value);
			*tree = new;
			return (*tree);
		}

		if (value < tr->n)
		{
			if (tr->left)
			{
				bst_insert(&tr->left, value);
			}

			new = binary_tree_node(tr, value);

			if (new)
			{
				tr->left = new;
				return (tr->left);
			}

			else
				return (NULL);
		}

		if (value > tr->n)
		{
			if (tr->right)
			{
				return (bst_insert(&tr->right));
			}

			new = binary_tree_node(tr->right, value);

			if (new)
			{
				tr->right = new;
				return (tr->right);
			}
			else
				return NULL;
		}
	}

	return NULL;
}
