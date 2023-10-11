#include "function_pointers.h"

/**
 * int_index - get index of first element
 * @array: array of elements
 * @size: array size
 * @cmp: comparing function
 *
 * Return: index of first element else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
		for (i = 0; i < size; i++)
			if (cmp(*(array + i)) != 0)
				return (i);

	return (-1);
}
