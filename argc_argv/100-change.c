#include "main.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: pointer to an array of arguments
 *
 * Return: 1 on error, 0 on success
 */

int main(int argc, char *argv[])
{
	int change, coin25, coin10, coin5, coin2, coin1;

	if (argc > 2 || argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	if (change <= 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	coin25 = change / 25;
	change -= coin25 * 25;
	coin10 = change / 10;
	change -= coin10 * 10;
	coin5 = change / 5;
	change -= coin5 * 5;
	coin2 = change / 2;
	change -= coin2 * 2;
	coin1 = change / 1;
	change -= coin1 * 1;
	printf("%d\n", coin25 + coin10 + coin5 + coin2 + coin1);
	return (0);
}
