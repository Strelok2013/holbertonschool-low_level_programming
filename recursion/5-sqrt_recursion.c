#include "main.h"

/**
 * checker - some cheap hack I found on the internet :-)
 * @n: index
 * @base: the base number to check
 *
 * Return: the square root or -1
 */

int checker(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (checker(n + 1, base));
}

/**
 * _sqrt_recursion - finds the square root if there is one
 * @n: integer number to check
 *
 * Return: square root or -1 if no natural square root
 */

int _sqrt_recursion(int n)
{
	return (checker(1, n));
}
