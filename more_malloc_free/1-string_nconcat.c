#include "main.h"

/**
 * string_nconcat - concatenates n bytes from string 2 into string 1
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to copy
 *
 * Return: char pointer to concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	p = malloc(i + j + 1);
	if (!p)
		return (0);
	i = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	if (n >= j)
	{
		j = 0;
		while (s2[j])
		{
			p[i + j] = s2[j];
			j++;
		}
	}
	else
	{
		j = 0;
		while (j <= n)
		{
			p[i + j] = s2[j];
			j++;
		}
	}
	p[i + j] = '\0';
	return (p);
}
