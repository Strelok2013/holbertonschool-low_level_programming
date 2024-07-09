#include "main.h"

/**
 * _strdup - duplicates a given string into a dynamically allocated array
 * @str: string to duplicate
 *
 * Return: 0 on failure or pointer to newly allocated string.
 */

char *_strdup(char *str)
{
	char *p;
	int i = 0;

	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		i++;
	}
	p = malloc(i * sizeof(char) + 1);
	if (!p)
	{
		return (0);
	}
	i = 0;
	while (str[i] != '\0')
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
