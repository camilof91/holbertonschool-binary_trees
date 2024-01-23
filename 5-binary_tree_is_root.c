#include "binary_trees.h"

/**
*binary_tree_is_root- this function check is the node is a root
*@node: 
*return: 1  id the node is root or 0 if the node isn't
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
