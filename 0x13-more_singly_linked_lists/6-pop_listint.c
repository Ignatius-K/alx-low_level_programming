#include "lists.h"

/**
 * pop_listint - pops last node
 * @head: pointer to pointer to head node
 *
 * Return: n of node
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	int *value = &n;
	listint_t *ptr;

	if (*head != NULL)
	{
		ptr = *head;
		*value = ptr->n;
		*head = ptr->next;
		free(ptr);
	}

	return (*value);
}
