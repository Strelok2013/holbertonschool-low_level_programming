#include "main.h"

/**
 * print_numbers - prints numbers 0-9 followerd by a new line
 *
 * Return: void, returns a void pointer
 */

void print_numbers(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
