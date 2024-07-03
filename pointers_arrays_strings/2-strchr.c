#include "main.h"
#include <stdio.h>

/**
 * _strchr - Returns a pointer to the first occurence of characte c
 * @s: pointer to char array
 * @c: character value
 *
 * Return: pointer to the first occurence of character c
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *p;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
		else
		{
			p = '\0';
		}
		i++;
	}
	return (p);
}
