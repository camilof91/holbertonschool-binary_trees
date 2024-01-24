#include "binary_trees.h"


/**
 * binary_tree_is_root - Checks if a node is the root of a binary tree
 * @node: Pointer to the node to check
 *
 * Description:
 * - Determines if the given node is the root of the binary tree.
 *
 * @node: Pointer to the node to be checked.
 *
 * Return: 1 if the node is the root, 0 otherwise.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
