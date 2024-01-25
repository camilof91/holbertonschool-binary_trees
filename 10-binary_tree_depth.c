#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 *
 * @node: Pointer to the node to measure the depth.
 *
 * Return: Depth of the node. If @node is NULL, return 0.
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t count = 0;

	if (node == NULL)
		return (count);

	for (count = 0; node->parent != NULL; count++)
		node = node->parent;
	return (count);
}
