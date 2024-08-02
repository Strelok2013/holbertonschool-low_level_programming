#include "main.h"

/**
 *
 *
 *
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;
	unsigned int i = 0;

	while (i < index)
	{
		bit <<= 1;
		i++;
	}
	*n |= bit;
	return (1);
}
