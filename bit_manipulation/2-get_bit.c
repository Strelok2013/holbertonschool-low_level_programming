#include "main.h"

/**
 *
 *
 *
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	int bit = n;

	if (n == 0)
		return (0);
	while (i < index)
	{
		if (!bit)
			return (-1);
		bit >>= 1;
		i++;
	}
	bit &= 1;
	return (bit);
	
}
