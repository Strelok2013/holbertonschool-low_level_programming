#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int i = 0;
	for (i = 0; i < 26; i++)
	{
		putchar(97 + i);
	}
	putchar(10);
}
