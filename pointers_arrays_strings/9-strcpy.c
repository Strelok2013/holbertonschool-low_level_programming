#include "main.h"

/**
 * _strcpy - Copies the contents of one string to another string
 * @dest: pointer to string that is being copied to
 * @src: pointer to source string
 *
 * Return: returns pointer to copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	while (j =< i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
