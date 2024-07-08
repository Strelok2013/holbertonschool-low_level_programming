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
	if (malloc(i * sizeof(char)))
	{
		p = malloc(i * sizeof(char));
	}
	memcpy(p, str, i);
	return (p);
}
