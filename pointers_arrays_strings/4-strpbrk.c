#include "main.h"

/**
 *
 *
 *
 *
 *
 *
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
