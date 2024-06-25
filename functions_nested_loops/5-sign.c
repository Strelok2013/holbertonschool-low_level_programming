#include "main.h"

/**
 * print_sign - prints the value of the passed integer
 * @n: integer to check
 *
 * Return: int, returns positive, negative or zero.
 */

int print_sign(int n)
{
	int r = 0;

	if (n > 0)
	{
		r = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		r = 0;
		_putchar('0');
	}
	else
	{
		r = -1;
		_putchar('-');
	}

	return (r);
}
