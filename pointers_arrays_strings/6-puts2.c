#include "main.h"

/**
 * puts2 - prints every second character including the first one
 * @str: pointer to char array or string
 *
 * Return: void, always returns void pointer
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2  == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
