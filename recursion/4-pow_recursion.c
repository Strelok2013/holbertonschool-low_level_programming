#include "main.h"

/**
 * _pow_recursion - gives the product of x to the power of y
 * @x: base number
 * @y: exponent
 *
 * Return: product given x and y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
