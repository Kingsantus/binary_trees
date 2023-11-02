#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: pointer to the parent node of a new node
 * @value: value to put in new node
 *
 * Return: pointer to new node or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	binary_tree_t *newnode_ptr;

	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);

	newnode->n = value;
	newnode->left = newnode->right = NULL;
	newnode->parent = parent;

	newnode_ptr = newnode;
	return (newnode_ptr);
}
