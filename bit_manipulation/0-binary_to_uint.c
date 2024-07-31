#include "main.h"


/**
 *
 *
 *
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0, mult = 1;
	int size = 0;

	while (b[size])
		size++;
	size -= 1;
	while (size >= 0)
	{
		if (b[size] != 48 && b[size] != 49)
			return (0);
		val += (b[size] - 48) * mult;
		mult *= 2;
		size--;
	}
	return (val);
	
}
