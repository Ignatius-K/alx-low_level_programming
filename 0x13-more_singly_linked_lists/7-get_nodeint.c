#include "lists.h"

/**
 * get_nodeint_at_index - gets node at index
 * @head: pointer to head node
 * @index: index of desired node
 *
 * Return: pointer to node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int indexCmp = 0;
	listint_t *ptr;

	if (head == NULL)
		return (NULL);

	ptr = head;
	while (ptr != NULL)
	{
		if (indexCmp == index)
			return (ptr);

		indexCmp++;
		ptr = ptr->next;
	}
	return (NULL);
}
