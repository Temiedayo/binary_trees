#include "binary_trees.h"

/**
 * binary_tree_depth - Measures depth of a node in a binary tree.
 * @tree: pointer to the node to measure depth.
 *
 * Return: If tree is NULL, function must return 0, else return depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
