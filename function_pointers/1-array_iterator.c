#include "function_pointers.h"

/**
 * array_iterator - calls a function on every element of a given array
 * @array: pointer to int array to iterate
 * @size: size of given array
 * @action: pointer to function to perform on each element
 *
 * Return: void, returns a null void pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || size == 0 || !action)
		return;
	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
