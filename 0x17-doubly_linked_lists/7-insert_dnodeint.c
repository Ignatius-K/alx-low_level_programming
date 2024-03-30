#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: pointer to head node
 * @idx: index to insert node
 * @n: value of the node
 *
 * Return: inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *current_node;
	unsigned int index_ref = 0;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	node->n = n;
	current_node = *h;
	while (current_node)
	{
		if ((index_ref + 1) == idx)
		{
			node->prev = current_node;
			node->next = current_node->next;
			current_node->next = node;

			if (node->next)
				node->next->prev = node;
			return (node);
		}
		current_node = current_node->next;
		index_ref++;
	}
	return (NULL);
}
