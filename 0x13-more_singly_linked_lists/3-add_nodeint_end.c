#include "lists.h"

/**
 * add_nodeint_end - adds node to end
 * @head: pointer to pointer to head node
 * @n: integer value
 *
 * Return: pointer to node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *tmpNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	tmpNode = *head;
	while (tmpNode != NULL)
	{
		if (tmpNode->next == NULL)
		{
			tmpNode->next = newNode;
			break;
		}
		tmpNode = tmpNode->next;
	}

	return (newNode);
}
