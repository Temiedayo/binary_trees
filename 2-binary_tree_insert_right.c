#include "binary_trees.h"

/**
 * binary_tree_insert_right - Input node as the right-child
 *                            of another in a binary tree.
 * @parent: pointer to node to insert the right-child in.
 * @value: value to save in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - pointer to new node.
 *
 * Description: If parent already has a right-child, the new node
 *              takes its place and old right-child is set as
 *              right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
