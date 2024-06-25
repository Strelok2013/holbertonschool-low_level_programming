#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all numbers from n to 98
 * @n: value to count from
 *
 * Return: Void, returns void pointer
 */

void print_to_98(int n)
{
	int i = 0;

	/* Check whether greater or less than 98, then count towards 98 */

	if (n == 98)
	{
		printf("%d", n);
	}
	else if (n < 98)
	{
		i = n;
		while (i <= 98)
		{
			printf("%d, ", i);
			i++;
		}
	}
	else
	{
		i = n;
		while (i >= 98)
		{
			printf("%d, ", i);
			i--;
		}
	}
	printf("\n");
}
