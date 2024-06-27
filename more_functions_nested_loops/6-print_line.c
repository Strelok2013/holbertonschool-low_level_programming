#include "main.h"

/**
 * print_line - prints a line n characters long
 * @n: Length of the line
 *
 * Return: void, returns void pointer.
 */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
