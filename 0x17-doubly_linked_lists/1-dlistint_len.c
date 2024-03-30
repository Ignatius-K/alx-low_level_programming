#include "lists.h"

/**
 * dlistint_len - length of d-linked list
 *
 * @h: d-linked list
 *
 * Return: size of d-linked list
 */
size_t dlistint_t_len(const dlistint_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		num_of_nodes++;
		h = h->next;
	}

	return (num_of_nodes);
}
