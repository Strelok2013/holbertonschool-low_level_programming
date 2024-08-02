#include "main.h"


/**
 * binary_to_uint - converts a binary string into a uint
 * @b: pointer to char array
 *
 * Return: unsigned int, the integer value of the binary string
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0, mult = 1;
	int size = 0;

	if (!b)
		return(0);
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
