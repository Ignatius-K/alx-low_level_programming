#include "main.h"

#define CHAR_BITS 8 /*size of char*/
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

/**
 * clear_bit - set bit
 * @n: number
 * @index: index to set
 *
 * Return: 1 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > INT_BITS)
		return (-1);
	mask = ~(mask << index);
	*n = (*n & mask);
	return (1);
}
