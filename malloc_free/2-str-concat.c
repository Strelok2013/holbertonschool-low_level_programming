#include "main.h"

/**
 * str_concat - creates a new char array containing the concatenated strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string, 0 on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *p;

	if (s1)
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2)
	{
		while (s2[j] != '\0')
			j++;
	}
	if (i == 0 && j == 0)
	{
		return ("");
	}
	if (malloc(i + j))
		p = malloc(i + j);
	else
		return (0);
	memcpy(p, s1, i);
	memcpy(p + i, s2, j);
	return (p);
}
