#include "main.h"

/**
 * _calloc - user implementation of calloc
 * @nmemb: number of elements in array
 * @size: size of each element
 *
 * Return: void pointer to newly allocated array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	void *p;
	char *f;

	if (!nmemb || !size)
		return (0);
	p = malloc(nmemb * size);
	if (!p)
		return (0);
	f = p;
	while (i < nmemb)
	{
		f[i] = 0;
		i++;
	}
	return (p);
}
