#include "function_pointers.h"

/**
 * int_index - calls a function to search for a given int within an array.
 * @array: pointer to int array to iterater=
 * @size: size of the array
 * @cmp: pointer to function to call on each element
 *
 * Return: index of the first matching element.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || size <= 0 || !cmp)
		return (-1);
	while (i < size)
	{
		if ((*cmp)(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
