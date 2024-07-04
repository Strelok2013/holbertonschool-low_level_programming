#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: pointer to destination char array
 * @src: pointer to source char array
 * @n: number of bytes to write
 *
 * Return: pointer to dest char array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
