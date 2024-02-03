#include "lists.h"

/**
 * print_list - Prints strings in list
 * @headNode: head node (first node of list)
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *headNode)
{
	size_t num_of_nodes;
	const list_t *nodePtr;

	num_of_nodes = 0;
	if (headNode == NULL)
		return (0);

	nodePtr = headNode;
	while (nodePtr != NULL)
	{
		num_of_nodes++;
		if (nodePtr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", nodePtr->len, nodePtr->str);

		nodePtr = nodePtr->next;
	}
	return (num_of_nodes);
}
