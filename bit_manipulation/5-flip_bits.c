#include "main.h"

/**
 *
 *
 *
 *
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int var = n ^ m;
	unsigned int count = 0;

	while (var)
	{
		if (var & 1)
			count++;
		var >>= 1;
	}
	return (count);
}
