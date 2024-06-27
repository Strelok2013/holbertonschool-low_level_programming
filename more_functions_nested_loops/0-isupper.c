#include "main.h"

/**
 * _isupper - Checks whether the character is uppercase
 * @c: character to check
 *
 * Return: 1 if uppercase, 0 if lowercase
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
