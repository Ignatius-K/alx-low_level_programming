#include "lists.h"

/**
 * reverse_listint - reverses the singly list
 * @head: pointer to pointer to head node
 *
 * Return: new head node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr_node;
	listint_t *swp_node;

	ptr_node = NULL;
	if (head == NULL)
		return (NULL);

	swp_node = *head;
	if (swp_node == NULL)
		return (NULL);

	while (swp_node != NULL)
	{
		*head = swp_node->next;
		swp_node->next = ptr_node;
		ptr_node = swp_node;
		swp_node = *head;
	}

	*head = ptr_node;
	return (ptr_node);
}
