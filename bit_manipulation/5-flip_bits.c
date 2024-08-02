#include "main.h"

/**
 * flip_bits - counts how many bits need to be flipped convert from n to m
 * @n: first val
 * @m: second val
 *
 * Return: unsigned int, the number of flips needed.
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
