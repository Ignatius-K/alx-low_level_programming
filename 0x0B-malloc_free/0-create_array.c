#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates a string array of particular character
 * @size: size of the array
 * @c: character
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
