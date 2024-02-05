#include "lists.h"

/**
 * print_listint - prints elements in singly list
 * @hNode: pointer to head node
 *
 * Return: size of list
 */
size_t print_listint(const listint_t *hNode)
{
	int n = 0;
	const listint_t *ptr;

	ptr = hNode;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		n++;
		ptr = ptr->next;
	}
	return (n);
}
