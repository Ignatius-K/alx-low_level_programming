#include "main.h"

#define CHAR_BITS 8 /*size of char*/
#define INT_BITS (sizeof(unsigned long int) * CHAR_BITS)

/**
 * get_bit - gets bit at index
 *
 * @n: decimal
 * @index: integer
 *
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > INT_BITS)
		return (-1);
	bit = ((n >> index) & 1);
	return (bit);
}
