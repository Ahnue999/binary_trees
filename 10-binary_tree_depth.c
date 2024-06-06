#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree.
 * @tree: a pointer to the node to measure the depth.
 *
 * Return: the depth or 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	binary_tree_t *current;
	size_t count;

	count = 0;
	current = tree->parent;

	while (current)
	{
		count++;
		current = current->parent;
	}

	return (count);
}
