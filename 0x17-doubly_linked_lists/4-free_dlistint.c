#include "lists.h"

/**
 * free_dlistint_t - frees d-linked list
 * @head: head of the d-linked list
 *
 * Return: nothing
 */
void free_dlistint_t(dlistint_t *head)
{
	dlistint_t *node;

	if (!head)
		return;

	while (node)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
