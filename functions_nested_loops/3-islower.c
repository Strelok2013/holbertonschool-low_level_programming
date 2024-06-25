#include "main.h"

/**
 * _islower - prints 1 if the int value corresponds to a lowercase character
 * @c : input value to test
 *
 * Return: int, returns a 1 on if lowercase and 0 if not
 */

int _islower(int c)
{
	int r = 0;

	if (c >= 97 && c <= 122)
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
