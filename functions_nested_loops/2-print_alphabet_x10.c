#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
 * Return: Void, returns a void pointer
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(j + 97);
		}
		_putchar(10);
	}
}
