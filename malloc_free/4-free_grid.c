#include "main.h"

/**
 * free_grid - frees the memory allocated to a 2d array
 * @grid: pointer to 2d array
 * @height: the number of rows in the array
 *
 * Return: void, returns a void null pointer
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
