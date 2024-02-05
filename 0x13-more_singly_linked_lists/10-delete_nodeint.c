#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to pointer to head node
 * @index: node index to be deleted
 *
 * Return: 1 if success else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node;
	listint_t *swp_node;
	unsigned int index_cmp = 0;

	if (head == NULL)
		return (-1);

	swp_node = *head;
	while (swp_node != NULL)
	{
		if (index == 0)
		{
			*head = swp_node->next;
			free(swp_node);
			return (1);
		}

		if (index_cmp == index)
		{
			prev_node->next = swp_node->next;
			free(swp_node);
			return (1);
		}

		index_cmp++;
		prev_node = swp_node;
		swp_node = swp_node->next;
	}

	return (-1);
}
