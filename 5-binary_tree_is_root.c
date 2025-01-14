#include "binary_trees.h"

/**
 * binary_tree_is_root - used to checks if a node is a root.
 * @node: pointer to the node we will check.
 * Return: 1 if the node is root
 *	and 0 otherwise.
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
	{
		return (0);
	}
	return (1);
}
