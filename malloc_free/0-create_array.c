#include "main.h"

/**
 * create_array - creates an array of n bytes and initializes it
 * @size: size of the array
 * @c: character to initialize the array with
 *
 * Return: pointer to char array, or NULL on failure.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
		return (0);
	p = malloc(sizeof(c) * size);
	if (!p)
	{
		return (0);
	}
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
