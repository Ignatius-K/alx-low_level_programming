#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>

/**
 * struct dlistint_s - doubly linked lists
 * @n: integer
 * @prev: points to previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;


size_t print_dlistint(const dlistint_t *h);



#endif /** MAIN_H **/
