#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: pointer to char array or string to be printed
 *
 * Return: void, always returns void pointer.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
