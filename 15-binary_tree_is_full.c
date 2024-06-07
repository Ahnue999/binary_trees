#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: a pointer to the root node of the tree to check.
 *
 * Return: 1 if full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 1;

	if (!tree)
		return (0);

	full *= ((tree->left && tree->right) || !(tree->left || tree->right)) ? 1 : 0;
	full *= (tree->left) ? binary_tree_is_full(tree->left) : 1;
	full *= (tree->right) ? binary_tree_is_full(tree->right) : 1;

	return (full);
}
