#include "binary_trees.h"


/**
 * binary_tree_preorder - Traverses a binary tree using preorder traversal
 * @tree: Pointer to the root of the binary tree
 * @func: Pointer to the function to be called for each node
 *
 * Description:
 * - Applies a given function to each node in 
 *   the binary tree using preorder traversal.
 * - The function receives the integer value of the node as a parameter.
 *
 * @tree: Pointer to the root of the binary tree.
 * @func: Pointer to the function to be called for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder (tree->left,func);
	binary_tree_preorder (tree->right,func);
}
