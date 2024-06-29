#include "main.h"
#include <limits.h>

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
	int sum = 0;

	while (s[i] == ' ')
	{
		i++;
	}
	if (s[i] == '-' || s[i] == '+')
	{
		sign = 1 - 2 * (s[i++] == '-');
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (sum > INT_MAX / 10 || (sum == INT_MAX / 10 && s[i] - '0' > 7))
		{
			if (sign == 1)
			{
				return (INT_MAX);
			}
			else
			{
				return (INT_MIN);
			}
		}
		sum = 10 * sum + (s[i++] - '0');
	}
	return (sum * sign);
}
