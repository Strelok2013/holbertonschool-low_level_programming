#include "main.h"

/**
 * _strstr - prints the first occurrence of a given substring
 * @haystack: pointer to char array
 * @needle: pointer to char array
 *
 * Return: pointer to char, first instance of given substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int done = 0;
	char *p = 0;

	while (haystack[i] != '\0' && !done)
	{
		if (haystack[i] == needle[0])
		{
			p = &haystack[i];
			done = 1;
		}
		i++;
	}
	return (p);
}
