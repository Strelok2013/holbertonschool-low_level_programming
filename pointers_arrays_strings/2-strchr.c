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

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	if (c == '\0')
	{
		return(s + i);
	}
	else
	{
		return (NULL);
	}
	return (0);
}
