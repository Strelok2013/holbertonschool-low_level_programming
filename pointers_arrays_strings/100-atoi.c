#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * _atoi - generates an int from a given string
 * @s: string to be parsed
 *
 * Return: int, returns an int based on the contents of the given string.
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int sum = 0;
	int done = 0;
	int evalnum = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 48 && s[i] <= 57 && (done == 0))
		{
			evalnum = 1;
			sum *= 10;
			sum += (s[i] - '0');
		}
		else
		{
			if (evalnum == 1)
			{
				done = 1;
			}
		}
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	
	return (sum * sign);
}
