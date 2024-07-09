#include "main.h"

/**
 *
 *
 *
 *
 *
 */

void *malloc_checked(unsigned int b)
{
	void *p;
	p = malloc(sizeof b);
	if (!p)
		exit (98);
	return (p);
}
