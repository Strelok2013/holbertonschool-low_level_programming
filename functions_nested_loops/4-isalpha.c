#include "main.h"

/**
 * _isalpha - checks whether the int value corresponds to an alphanumeric char
 * @c: integer value to check
 *
 * Return: int, returns 1 if alphanumeric, 0 if not
 */

int _isalpha(int c)
{
	int r = 0;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
