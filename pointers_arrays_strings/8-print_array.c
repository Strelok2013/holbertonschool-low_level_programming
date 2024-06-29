#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n number of elements from array a
 * @a: pointer to int array
 * @n: number of elements to print
 *
 * Return: void, returns a void pointer
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (a[i] == '\0')
		{
			break;
		}
		printf("%d", a[i]);
		if (i < n - 1)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
}
