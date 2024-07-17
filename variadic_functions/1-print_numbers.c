#include "variadic_functions.h"

/**
 *
 *
 *
 *
 *
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
			print("%s", separator);
		}
		i++;
	}
	putchar('\n');
	va_end(args);
}
