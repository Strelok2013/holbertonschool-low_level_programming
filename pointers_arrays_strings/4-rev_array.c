#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse n elements in an array
 * @a: pointer to array
 * @n: number of elements
 *
 * Return: void, returns void pointer.
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < (n / 2))
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
		i++;
	}
}
