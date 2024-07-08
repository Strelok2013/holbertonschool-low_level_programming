#include "main.h"

/**
 * alloc_grid - dynamically allocates a 2 dimensional array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: 0 on failure, pointer to pointers on success
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i = 0;

	if (width < 1 || height < 1)
		return (0);
	if (malloc(sizeof(int *) * height))
	{
		p = malloc(sizeof(int *) * height);
	}
	else
	{
		return (0);
	}
	while (i < height)
	{
		if (malloc(sizeof(int) * width))
		{
			p[i] = malloc(sizeof(int) * width);
			memset(p[i], 0, sizeof(int) * width);
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (p);
}
