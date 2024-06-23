#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	for (i = 0; i < 26; i++)
	{
		putchar(122 - i);
	}
	putchar(10);
	return (0);
}
