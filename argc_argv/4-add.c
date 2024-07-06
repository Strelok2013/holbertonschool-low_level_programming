#include "main.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: pointer to array of strings containing arguments
 *
 * Return: 1 if argv[i] is non numeric, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
