#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: pointer to char array
 *
 * Return: pointer to char array, the modified string
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char characters[] = {97, 101, 108, 111, 116};
	char numbers[] = {4, 3, 1, 0, 7};

	while (s[i] != '\0')
	{
		while (characters[j] != '\0')
		{
			if (s[i] == characters[j] || s[i] == characters[j] - 32)
			{
				s[i] = numbers[j] + '0';
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
