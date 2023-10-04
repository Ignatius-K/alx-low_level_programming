#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory of 2-dimensional array
 * @grid: the pointer to pointer pointing to memory to free
 * @height: base size of 2-dimensional array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
