#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - iterates thru an array
 * @array: pointer to first element
 * @size: array size
 * @action: pointer function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (!action)
		return;
	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}
