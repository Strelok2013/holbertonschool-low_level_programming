#include "main.h"

/**
 * string_toupper - Converts all lowercase characters to uppercase
 * @s: pointer to char array or string
 *
 * Return: char pointer, the modified string.
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
