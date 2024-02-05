#include "lists.h"

/**
 * listint_len - number of elements in singly list
 * @hNode: pointer to head node
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *hNode)
{
	int n = 0;
	const listint_t *ptr;

	ptr = hNode;
	while (ptr != NULL)
	{
		n++;
		ptr = ptr->next;
	}
	return (n);
}
