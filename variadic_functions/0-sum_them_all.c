#include "variadic_functions.h"

/**
 * sum_them_all - prints the sum of all given numbers
 * @n: number of ints to add up
 * @...: variable number of args
 *
 * Return: Sum of all passed in args
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int result = 0;
	va_list args;

	if (!n)
		return (0);
	va_start(args, n);
	while (i < n)
	{
		result += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (result);
}
