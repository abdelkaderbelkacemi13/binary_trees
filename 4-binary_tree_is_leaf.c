#include "binary_trees.h"

/**
 * binary_tree_is_leaf - used to checks if a node is a leaf.
 * @node: pointer to the node we will check
 * Return: 1 if the node is leaf
 *	and 0 if otherwise
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
	{
		return (0);
	}
	return (1);
}
