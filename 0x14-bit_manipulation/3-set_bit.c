#include "main.h"

#define CHAR_BITS 8 /*size of char*/
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

/**
 * set_bit - sets bit 1 at index
 *
 * @n: number
 * @index: index
 *
 * Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > INT_BITS)
		return (-1);
	mask <<= index;
	*n = (*n | mask);
	return (1);
}
