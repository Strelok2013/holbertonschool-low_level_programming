#include "main.h"

/**
 * array_range - dynamically allocates an array of elements from min to max
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to int array
 */

int *array_range(int min, int max)
{
	int *p;
	int i = 0;

	if (min > max)
		return (0);
	p = malloc((max - min) * sizeof(int));
	if (!p)
		return (0);
	while (i < (max - min))
	{
		p[i] = i + min;
		i++;
	}
	return (p);
}
