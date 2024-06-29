#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a given string
 * @s: pointer to char array or string
 *
 * Return: void, always returns void pointer
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int tmp;

	while (s[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		tmp = s[j];
		s[j] = s[i - 1];
		s[i - 1] = tmp;
		i--;
		j++;
	}
}
