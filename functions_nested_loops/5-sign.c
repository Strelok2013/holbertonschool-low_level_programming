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
	}
	else if (n == 0)
	{
		r = 0;
	}
	else
	{
		r = -1;
	}

	return (r);
}
