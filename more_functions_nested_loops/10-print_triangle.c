#include "main.h"

/**
 * print_triangle - prints a triangle of a given size
 * @size: size of the triangle
 *
 * Return: void, returns void pointer
 */

void print_triangle(int size)
{
	int i = 0;
	int j = 0;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
			{
				_putchar(' ');
			}
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
