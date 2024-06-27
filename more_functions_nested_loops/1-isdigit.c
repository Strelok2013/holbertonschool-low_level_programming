#include "main.h"

/**
 * _isdigit - checks whether the given int corresponds to a numeric character
 *@c: the integer value to check
 *
 * Return: returns 1 if numeral character, 0 if not.
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
