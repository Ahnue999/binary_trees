#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node to the right of a node.
 * @parent: a pointer to the node to insert the right-child in.
 * @value: the value to store in the new node.
 *
 * Return: a pointer to the created node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	if (!parent)
		return (NULL);

	child = binary_tree_node(parent, value);
	if (!child)
		return (NULL);

	child->n = value;

	if (parent->right)
	{
		child->right = parent->right;
		parent->right->parent = child;
	}
	parent->right = child;

	return (child);
}
