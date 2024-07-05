#include "main.h"

/**
 * factorial - finds the factorial of a given int recursively
 * @n: int to find factorial of
 *
 * Return: the factorial of n
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
