#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the size of.
 *
 * Return: the size of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count;

	if (!tree)
		return (0);

	count = 0;
	count += binary_tree_size(tree->left);
	count += binary_tree_size(tree->right);

	return (count);
}
