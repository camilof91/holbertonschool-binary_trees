#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root of the tree to be deleted
 *
 * Description:
 * - Recursively traverses the tree and
 * deletes each node, starting from the leaves.
 * - Frees the memory allocated for each node.
 *
 * @tree: Pointer to the root of the binary tree.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
