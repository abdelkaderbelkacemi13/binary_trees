#include "binary_trees.h"

/**
 * binary_tree_node - used to create a new node for a binary tree.
 * @parent: pointer to the parent node of the new node will be created.
 * @value: the value that we will put in the new node.
 * Return: NULL in case of fail and pointer to
 * the new node created if success.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree_node;

	tree_node = malloc(sizeof(binary_tree_t));


	if (tree_node == NULL)
	{
		return (NULL);
	}
	tree_node->parent = parent;
	tree_node->n = value;
	tree_node->right = NULL;
	tree_node->left = NULL;

	return (tree_node);
}
