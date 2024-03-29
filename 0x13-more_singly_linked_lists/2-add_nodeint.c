#include "lists.h"

/**
 * add_nodeint - adds node in singly list
 * @head: pointer to pointer to node
 * @n: integer to add
 *
 * Return: pointer to node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
