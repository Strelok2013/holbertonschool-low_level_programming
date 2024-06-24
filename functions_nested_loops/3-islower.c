#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int _islower(int c);

int main(void)
{
	return (0);
}

int _islower(int c)
{
	int r = 0;

	if (c >= 97 && c <= 122)
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
