#include "lists.h"

/**
 * free_listint - frees singly-linked list
 * @head: pointer to node
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *nNode;
	listint_t *swpNode;

	nNode = head;
	while (nNode != NULL)
	{
		swpNode = nNode->next;
		free(nNode);
		nNode = swpNode;
	}
}
