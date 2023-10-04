#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocates the grid
 * @width: size of width
 * @height: size of height
 *
 * Return: pointer to pointer
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ptr;
	int *base_ptr;

	int *grid(int width);

	ptr = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0)
		return (NULL);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		base_ptr = grid(width);
		if (base_ptr == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[i]);
			}
			free(ptr);
			return (NULL);
		}

		ptr[i] = base_ptr;
	}

	return (ptr);

}

/**
 * grid - creates the width
 * @width: size of width
 *
 * Return: pointer to set width
 */
int *grid(int width)
{
	int *ptr;
	int i;

	ptr = malloc(sizeof(int) * width);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
