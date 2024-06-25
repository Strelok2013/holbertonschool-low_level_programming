#include "main.h"

/**
 * _abs - prints the absolute value of given integer
 * @v: value to check
 *
 * Return: int, Absolute value of the given int
 */

int _abs(int v);
{
	int r = 0;

	if (v < 0)
	{
		r = v * -1;
	}
	else
	{
		r = v;
	}
	return (r);
}
