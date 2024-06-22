#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -  Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	for (i = 0; i < 26; i++)
	{
		if (i != 5 && i != 17)
		{
			putchar(i+ 97);
		}
	}
	putchar(10);
	return (0);
}
