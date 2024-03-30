#include "lists.h"

/**
 * add_dnodeint_end - adds node at end
 * @head: head of the node
 * @n: node value
 *
 * Return: address of node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *curr_node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;


	if ((*head) == NULL)
	{
		node->prev = NULL;
		(*head) = node;
		return (node);
	}
	
	curr_node = *head;
	while (curr_node)
	{
		if (curr_node->next == NULL)
		{
			node->prev = curr_node;
			curr_node->next = node;
		}
	}
	return (node);
}
