#include "main.h"

/**
 * _strncat - catenates n bytes of source string to destination string
 * @dest: destination string
 * @src: source string
 * @n: number of characters to catenate
 *
 * Return: pointer to dest string with n characters of src
 */

char *_strncat(char *dest, char *src, int n)
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
	while (k < n)
	{
		if (src[k] != '\0')
		{
			dest[i] = src[k];
			i++;
		}
		else
		{
			break;
		}
		k++;
	}
	dest[i] = '\0';
	return (dest);
}
