#include "main.h"

/**
 * print_binary - prints an unsigned 32-bit integer in binary
 * @n: integer value
 *
 * Return: void, returns a null void pointer
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
