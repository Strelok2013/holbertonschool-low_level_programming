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
	char *p;

	if (size == 0)
		return (0);
	if (malloc(sizeof(c) * size))
	{
		p = malloc(sizeof(c) * size);
		memset(p, c, size);
	}
	else
	{
		return (0);
	}
	return (p);
}
