#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: Void, returns a void pointer
 */

void print_alphabet(void)
{
	int i = 0;

	for (i = 0; i < 26; i++)
	{
		_putchar(97 + i);
	}
	_putchar(10);
}
