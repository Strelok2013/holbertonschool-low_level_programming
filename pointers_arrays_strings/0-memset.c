#include "main.h"

/**
 * _memset - sets n bytes of given address to specified byte
 * @s: pointer to char array
 * @b: char value
 * @n: number of bytes to write to
 *
 * Return: pointer to char array, the resultant array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
