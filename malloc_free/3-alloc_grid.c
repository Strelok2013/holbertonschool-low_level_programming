#include "main.h"

/**
 * init_zero - helper function that initializes an array's elements to 0
 * @p: pointer to int array
 * @size: size of the array
 *
 * Return: void, returns void null pointer.
 */

void init_zero(int *p, int size)
{
	int i = 0;

	while (i < size)
	{
		p[i] = 0;
		i++;
	}
}

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
	{
		return (0);
	}
	p = malloc(sizeof(int *) * height);
	if (!p)
	{
		return (0);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (!p[i])
		{
			for (; i >= 0; i--)
			{
				free(p[i]);
			}
			free(p);
			return (0);
		}
		init_zero(p[i], width);
	}
	return (p);
}

