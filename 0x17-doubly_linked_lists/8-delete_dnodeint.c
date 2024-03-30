#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: pointer to head node
 * @index: index to delete a node
 *
 * Return: 1 if success else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	int delete_status = -1;
	unsigned int index_ref = 0;
	dlistint_t *current_node;

	if (!head | !(*head))
		return (delete_status);

	current_node = *head;
	while (current_node)
	{
		if (index_ref == index)
		{
			if (index_ref == 0)
			{
				head = &(current_node->next);
				(*head)->prev = NULL;
				free(current_node);
			}
			else {
				current_node->prev->next = current_node->next;
				if (current_node->next)
					current_node->next->prev = current_node->prev;
			}
			delete_status = 1;
			free(current_node);
			break;
		}
		current_node = current_node->next;
		index_ref++;
	}
	return (delete_status);
}
