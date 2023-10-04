#include "main.h"
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
	int **ptr;
	int *base_ptr;

	int *grid(int width);

	ptr = malloc(sizeof(int) * width * height);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		base_ptr = grid(width);
		if (base_ptr == NULL)
			return (NULL);

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

	ptr = malloc(sizeof(int) * 4);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
