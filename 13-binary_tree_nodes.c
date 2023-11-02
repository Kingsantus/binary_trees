#include "binary_trees.h"

/**
 * binary_tree_nodes - this counts the nodes with at least 1 child in a binary tree
 * @tree: the tree to count the nodes from
 *
 * Return: number of nodes counted
 * 		0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}


/**
 * binary_tree_size - this measures the size of a binary tree
 * @tree: the tree to measure the size of
 *
 * Return: size of the tree
 *         0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_leaves - this counts the leaves in a binary tree
 * @tree: the tree to count the leaves from
 *
 * Return: number of leaves
 *         0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
