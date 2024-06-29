#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: pointer to char array or string
 *
 * Return: void, always returns void pointer
 */

void puts_half(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	j = i;
	i = j / 2;
	while (i < j)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
