#include "lists.h"

/**
 * list_len - Gets length of linked list
 * @headNode: head node
 *
 * Return: length of list
 */
size_t list_len(const list_t *headNode)
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
		nodePtr = nodePtr->next;
	}
	return (num_of_nodes);

}
