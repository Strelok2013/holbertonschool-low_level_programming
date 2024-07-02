#include "main.h"

/**
 * cap_string -capitalizes every word in a string
 * @s: pointer to char array
 *
 * Return: char pointer, the modified string
 */

char *cap_string(char *s)
{
	int i = 0;
	int j = 0;
	int newWord = 0;
	char separators[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 63, 123, 125};

	while (s[i] != '\0')
	{
		while (separators[j] != '\0')
		{
			if (s[i] == separators[j])
			{
				newWord = 1;
			}
			j++;
		}
		j = 0;
		if (s[i] >= 97 && s[i] <= 122 && newWord)
		{
			s[i] -= 32;
			newWord = 0;
		}
		else if (s[i] >= 65 && s[i] <= 90)
		{
			newWord = 0;
		}
		else if (s[i] >= 48 && s[i] <= 57)
		{
			newWord = 0;
		}
		i++;
	}
	return (s);
}
