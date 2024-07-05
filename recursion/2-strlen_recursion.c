#include "main.h"

/**
 * _strlen_recursion - finds the length of a string recursively
 * @s: pointer to char array
 *
 * Return: int, the length of given string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
	{
		return (0);
	}
}
