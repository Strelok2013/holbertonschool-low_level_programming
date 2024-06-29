#include "main.h"

/**
 * print_rev - prints a given string in reverse
 * @s: pointer to char array or string
 *
 * Return: void, always returns void pointer
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i -= 1;
	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
