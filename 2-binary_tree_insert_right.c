#include "binary_trees.h"

/**
 * binary_tree_insert_right - used to insert node as left child of another node
 * @parent: pointer to the node that we will insert a left child to it.
 * @value: the value that we will put in the new node.
 * Return: NULL if parent is NULL.
 *         NUll if fail.
 *         pointer to the child node if success
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	child_node = binary_tree_node(parent, value);

	if (child_node == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		child_node->right = parent->right;
		parent->right->parent = child_node;
	}
	parent->right = child_node;

	return (child_node);
}
