#include "main.h"

/**
 * _strspn - returns the length of initial substring matching 'accept'
 * @s: pointer to char array
 * @accept: pointer to char array to check against
 *
 * Return: unsigned int, the length of initual substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int spn = 0;
	int done = 0;

	while (s[i] != '\0' && !done)
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				spn++;
				j = 0;
				break;
			}
			j++;
			if (accept[j] == '\0')
			{
				done = 1;
			}
		}
		i++;
	}
	return (spn);
}
