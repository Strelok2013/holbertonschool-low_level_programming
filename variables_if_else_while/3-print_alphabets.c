#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	for (i = 0; i < 26; i++)
	{
		putchar(i + 65);
	}
	for( i = 0; i < 26; i++)
	{
		putchar(i + 97);
	}
	
	return (0);
}
