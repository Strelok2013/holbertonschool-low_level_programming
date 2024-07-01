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
	unsigned int sum = 0;

	while (s[i] != '\0')
	{
		if (s[i] < ':' && s[i] > '/')
		{
			sum *= 10;
			sum += (s[i] - '0');
			if(s[i + 1] > ':' && s[i + 1] < '/')
			{
				break;
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
