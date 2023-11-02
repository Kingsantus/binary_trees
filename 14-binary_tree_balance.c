#include "binary_trees.h"

/**
 * binary_tree_height_b - this measures height of a binary tree for a bal tree
 * @tree: tthe ree to go through
 *
 * Return: the height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t i = 0;
	size_t l = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			i = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			l = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((i > i) ? l : i);
	}
}

/**
 * binary_tree_balance - this measures balance factor of a binary tree
 * @tree: the tree to go through
 *
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		total = left - right;
	}
	return (total);
}
