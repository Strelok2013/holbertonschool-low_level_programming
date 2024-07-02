#include "main.h"

/**
 * _strncpy - copies n characters of src string into dest
 * @dest: destination string
 * @src: source string
 * @n: number of characters to copy
 *
 * Return: char pointer, pointer to dest string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int nullbyte = 0;

	while (i < n)
	{
		if (src[i] == '\0')
		{
			nullbyte = 1;
		}
		if (!nullbyte)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = 0;
		}
		i++;
	}
	return (dest);
}
