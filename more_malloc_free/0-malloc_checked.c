#include "main.h"

/**
 * malloc_checked - checks to see if malloc can allocate b bytes
 * @b: number of bytes
 *
 * Return: pointer to allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *p;
	p = malloc(b);
	if (!p)
		exit (98);
	return (p);
}
