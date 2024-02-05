#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at index
 * @head: pointer to pointer to head node
 * @idx: index to insert node
 * @n: n of node
 *
 * Return: new node if failed NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *swp_node;
	unsigned int idx_cmp = 0;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	swp_node = *head;
	while (swp_node != NULL && idx_cmp != idx)
	{
		if (idx_cmp == (idx - 1))
		{
			new_node->next = swp_node->next;
			swp_node->next = new_node;
			return (new_node);
		}

		idx_cmp++;
		swp_node = swp_node->next;
	}

	return (NULL);
}
