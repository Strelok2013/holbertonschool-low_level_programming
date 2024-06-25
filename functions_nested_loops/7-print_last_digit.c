#include "main.h"

/**
 * print_last_digit - prints the last digit of the given int
 * @v: value to print the last digit of
 *
 * Return: int, the last digit of a given int
 */

int print_last_digit(int v)
{
	int r = 0;
	r = v % 10;
	if (r < 0)
	{
		r = r * -1;
	}
	
	_putchar('0' + r);
	return (r);
}
