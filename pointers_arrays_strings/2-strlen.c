#include "main.h"

/**
 * _strlen - returns the length of a given string
 * @s: pointer to char array or string
 *
 * Return: int, the length of a given string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
