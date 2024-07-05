#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to char array, string to search
 * @accept: pointer to char array, set of bytes to check against
 *
 * Return; pointer to char, first matching char in @s
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int done = 0;
	char *p = 0;

	while (s[i] != '\0' && !done)
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				done = 1;
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (p);
}
