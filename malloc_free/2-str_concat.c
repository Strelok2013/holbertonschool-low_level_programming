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
	int i = 0, j = 0;
	char *p;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[i] || s2[i])
		i++;
	p = malloc(sizeof(char) * i);
	if (!p)
		return (0);
	i = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		p[i + j] = s2[j];
		j++;
	}
	return (p);
}
