#include "lists.h"

/**
 * free_list - frees singly list
 * @head: pointer to pointer of node
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *swapNode;
	list_t *freeNode;

	if (head == NULL)
		return;

	swapNode = head;
	while (swapNode != NULL)
	{
		freeNode = swapNode->next;
		free(swapNode);
		swapNode = freeNode;
	}
}
