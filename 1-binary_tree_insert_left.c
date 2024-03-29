#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inputs a node as left-child of
 *                           of another in binary tree.
 * @parent: pointer to node to insert the left-child in.
 * @value: The value
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - pointer to new node.
 *
 * Description: If parent already has a left-child, the new node
 *              takes its place and old left-child is set as
 *              left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
