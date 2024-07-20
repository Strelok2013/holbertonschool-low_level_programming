#include "variadic_functions.h"

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

void print_string(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s)
	{
		printf("%s", s);
	}
	else
	{
		printf("(nil)");
		return;
	}
}

/**
 * print_all - prints anything
 * @format: list of the types of arguments passed
 *
 * Return: void, returns a null void pointer.
 */

void print_all(const char* const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);
	while (format[i])
	{
		j = 0;
		while (j < 4 && (format[i] != *funcs[j].symbol))
			j++;
		if(j < 4)
		{
			printf("%s", separator);
			funcs[j].print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
