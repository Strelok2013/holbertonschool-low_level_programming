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
	int j = 0;
	int done = 0;
	char *p = 0;

	if(needle[0] == '\0')
	{
		return (haystack);
	}
	while (haystack[i] != '\0' && !done)
	{
		while (haystack[i] == needle[j] && needle[j] != '\0')
		{
			i++;
			j++;
			if(needle[j] == '\0')
			{
				p = &haystack[i - j];
				done = 1;
			}
		}
		j = 0;
		i++;
	}
	return (p);
}
