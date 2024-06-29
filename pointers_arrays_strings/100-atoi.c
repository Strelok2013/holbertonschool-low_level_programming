#include "main.h"

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
	int done = 0;
	int sum = 0;

	while (s[i] != '\0' && !done)
	{
		if (s[i] < ':' && s[i] > '/')
		{
			while (s[i] > '/' && s[i] < ':')
			{
				sum *= 10;
				sum += (s[i] - '0');
				i++;
			}
			done = 1;
		}
		if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	if (sum != 0)
	{
		return (sum *= sign);
	}
	else
	{
		return (0);
	}
}
