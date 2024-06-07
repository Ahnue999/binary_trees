#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the balance factor.
 *
 * Return: balance factor, if tree is NULL returns 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = tree->left ? binary_tree_balance(tree->left) + 1 : 0;
	right = tree->right ? binary_tree_balance(tree->right) + 1 : 0;

	return (left - right);
}
