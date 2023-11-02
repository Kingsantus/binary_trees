#include "binary_trees.h"

/**
 * binary_tree_is_perfect - this checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect
 * 		0 if the tree is not perfect
 * 		0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t nodes = 0;
	size_t power = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	power = (size_t)_pow_recursion(2, height + 1);
	return (power - 1 == nodes);
}

/**
 *_pow_recursion - this returns the value of x raised to the power of a
 *@x: the value to exponentiate
 *@y: the power to raise m to
 *Return: m to the power of a, or -1 if a is negative
 */

int _pow_recursion(int m, int a)
{
	if (a < 0)
		return (-1);
	if (a == 0)
		return (1);
	else
		return (m * _pow_recursion(m, a - 1));

}

/**
 * binary_tree_size - this measures the size of a binary tree
 * @tree: the tree to measure the size of
 *
 * Return: size of the tree
 * 		0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_height - this measures the height of a binary tree
 * @tree: the tree to measure the height of
 *
 * Return: height of the tree
 * 		0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_i = 0;
	size_t height_l = 0;

	if (!tree)
		return (0);

	height_i = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_l = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_i > height_l ? height_i : height_l);
}
