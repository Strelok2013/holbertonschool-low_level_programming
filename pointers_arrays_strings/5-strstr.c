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

	while (haystack[i] != '\0' && !done)
	{
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
			{
				continue;
			}
			else
			{
				j = 0;
				break;
			}
			j++;
			if(needle[j] == '\0')
			{
				done = 1;
				p = &haystack[i - j];
			}
		}
		i++;
	}
	return (p);
}
