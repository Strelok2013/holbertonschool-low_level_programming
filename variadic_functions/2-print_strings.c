#include "variadic_functions.h"

/**
 * print_strings - prints strings separated by a given separator
 * @separator: separator to use
 * @n: number of args to process
 * @...: variable number of args
 *
 * Return: void, returns null void pointer
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		if (va_arg(args, char*) == 0)
			printf("(nil)");
		else
			printf("%s", va_arg(args, char *));
		if (i != (n - 1) && separator != 0)
			printf("%s", separator);
		i++;
	}
	putchar('\n');
	va_end(args);
}
