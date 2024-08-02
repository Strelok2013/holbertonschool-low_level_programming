#include "main.h"

/**
 * set_bit - sets the bit of an unsigned long int at index
 * @n: int value;
 * @index: the index of the desired bit
 *
 * Return: int, 1 on success, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;
	unsigned int i = 0;

	if (index > 31)
		return (-1);
	while (i < index)
	{
		bit <<= 1;
		i++;
	}
	*n |= bit;
	return (1);
}
