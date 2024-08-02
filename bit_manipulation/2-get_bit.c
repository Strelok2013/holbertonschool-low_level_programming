#include "main.h"

/**
 * get_bit - gets a bit at given index
 * @n: unsigned long int to get bit from
 * @index: the index of the desired bit
 *
 * Return: int, 1 on success, -1 on failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;
	int bit = n;

	if (n == 0)
		return (0);
	if (index > 31)
		return (-1);
	while (i < index)
	{
		bit >>= 1;
		i++;
	}
	bit &= 1;
	return (bit);
}
