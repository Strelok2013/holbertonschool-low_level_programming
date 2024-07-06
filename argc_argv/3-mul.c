#include "main.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: pointer to array of strings containing arguments
 *
 * Return: 1 if there are more than two additional arguments, 0 othewise
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
