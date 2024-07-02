#include "main.h"

/**
 * _strcat - concatenates two strings into one
 * @dest: the string to add onto
 * @src: the string being added
 *
 * Return: char pointer, the resulting array dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	while (k <= j)
	{
		dest[i + k] = src[k];
		k++;
	}
	return (dest);
}
