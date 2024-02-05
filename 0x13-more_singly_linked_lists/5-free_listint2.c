#include "lists.h"

/**
 * free_listint2 - frees singly-linked list
 * @head: pointer to pointer to head node
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *nNode;
	listint_t *swpNode;

	nNode = *head;
	while (nNode != NULL)
	{
		swpNode = nNode->next;
		free(nNode);
		nNode = swpNode;
	}
	*head = NULL;
}
