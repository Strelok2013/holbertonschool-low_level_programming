#include "main.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: pointer to array of strings containing args
 *
 * Return: 0, always success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
