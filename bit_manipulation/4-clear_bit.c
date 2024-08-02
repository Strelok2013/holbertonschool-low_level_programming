#include "main.h"

/**
 * clear_bit - clears a bit at given index of ulint
 * @n: ulint value
 * @index: index of desired bit
 *
 * Return: int, 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;
	unsigned long int bit = 1;

	if (!n)
		return (-1);
	if (!*n)
		return (-1);
	if (index > 31)
		return (-1);
	while (i < index)
	{
		bit <<= 1;
		i++;
	}
	*n &= ~(bit);
	return (1);
}
