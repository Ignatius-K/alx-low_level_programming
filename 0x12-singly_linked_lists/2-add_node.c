#include "lists.h"

/**
 * add_node - adds node on top of list
 * @head: pointer to pointer of node
 * @str: string to add in node
 *
 * Return: new_node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *tmpNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	tmpNode = *head;
	newNode->next = tmpNode;
	*head = newNode;

	return (newNode);
}
