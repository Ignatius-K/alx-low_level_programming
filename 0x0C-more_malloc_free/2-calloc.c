#include <stdlib.h>
#include "main.h"

/**
 * _calloc - creates initialized memory
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to created memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	int i, j;
	char *c_ptrp;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (int)nmemb; i++)
	{
		c_ptrp = (char *)ptr;
		c_ptrp = c_ptrp + (i * size);

		for (j = 0; j < (int)size; j++)
			c_ptrp[j] = 0;
	}
	return (ptr);
}
