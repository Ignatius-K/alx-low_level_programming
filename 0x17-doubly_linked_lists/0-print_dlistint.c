#include lists.h

/**
 * print_dlistint - prints elements in d-linked list
 * @h: head of the d-linked list
 *
 * Return: size of list
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_of_nodes = 0;
	dlistint_t node;

	if (!h)
	{
		return (num_of_nodes);
	}

	node = *h;
	while (node)
	{
		num_of_nodes++;
		printf("%d\n", node->n)
	}

	return (num_of_nodes);
}
