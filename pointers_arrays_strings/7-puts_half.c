#include "main.h"

/**
 * puts_half - prints the second half of a given string
 * @str: pointer to char array or string
 *
 * Return: void, returns void pointer
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	i /= 2;
	i--;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
