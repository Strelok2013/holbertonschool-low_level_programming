#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the diagonal sums of a square array
 * @a: pointer to int array
 * @size: size of the array
 *
 * Return: void, nothing
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (i < size)
	{
		sum1 += *(a + (size + 1) * i);
		sum2 += *(a + ((size * size) - size) - ((size - 1) * i));
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
