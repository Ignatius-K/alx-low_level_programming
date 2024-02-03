#include "lists.h"

/**
 * add_node_end - adds node to end
 * @head: pointer to pointer of list node
 * @str: string to add
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *swapNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	swapNode = *head;
	while (true)
	{
		if (swapNode->next == NULL)
		{
			swapNode->next = newNode;
			break;
		}
		swapNode = swapNode->next;
	}
	return (newNode);
}
