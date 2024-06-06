#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node to the left of a node.
 * @parent: a pointer to the node to insert the left-child in.
 * @value: the value to store in the new node.
 *
 * Return: a pointer to the created node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	child = binary_tree_node(parent, value);
	if (!child)
		return (NULL);

	child->n = value;
	if (parent->left)
	{
		child->left = parent->left;
		parent->left->parent = child;
		parent->left = child;
	}
	else
	{
		parent->left = child;
	}
	return (child);
}
