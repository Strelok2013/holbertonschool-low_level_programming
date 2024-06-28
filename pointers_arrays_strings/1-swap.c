#include "main.h"

/**
 * swap_int - swaps the values at the given addresses
 * @a: first address pointing to int value
 * @b: second address pointing to int value
 *
 * Return: void, always returns void pointer
 */

void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
