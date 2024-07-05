#include "main.h"

/**
 * checker - A cheap hack I built using info on the internet :-)
 * @n: index
 * @base: base number to check
 *
 * Return: 1 if prime number, 0 if not
 */

int checker(int n, int base)
{
	if (base == n)
		return (1);
	if (base % n == 0)
		return (0);

	return (checker(n + 1, base));
}

/**
 * is_prime_number - checks whether given integer is prime number
 * @n: int to check
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (0);
	if (n < 0)
		return (0);
	return (checker(2, n));
}
