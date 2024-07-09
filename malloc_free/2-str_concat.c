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
	int i = 0, j = 0, k = 0;
	char *p;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[i] != '\0')
		j++;
	p = malloc(i + j);
	if (!p)
		return (0);
	while (k < i)
	{
		p[k] = s1[k];
		k++;
	}
	k = 0;
	while (k < j)
	{
		p[i + k] = s2[k];
		k++;
	}
	return (p);
}
