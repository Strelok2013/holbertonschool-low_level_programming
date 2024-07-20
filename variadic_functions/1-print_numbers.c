#include "variadic_functions.h"

/**
 * print_numbers - prints numbers separated by a separator
 * @separator: the separator to use
 * @n: Number of args to process
 * @...: Variable number of args
 *
 * Return: void, returns null void pointer
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (separator && i != (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	putchar('\n');
	va_end(args);
}
