#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head: head of the d-linked list
 * @index: index of the wanted node
 *
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = NULL;
	unsigned int ref_index = 0;

	if (!head)
		return (NULL);

	node = head;
	while (node)
	{
		if (ref_index == index)
			break;
		node = node->next;
		ref_index++;
	}

	return (node);
}
