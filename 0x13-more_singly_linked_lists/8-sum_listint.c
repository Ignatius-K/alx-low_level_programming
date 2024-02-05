#include "lists.h"

/**
 * sum_listint - sum of singly-lined list
 * @head: pointer to head node
 *
 * Return: sum of list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}

