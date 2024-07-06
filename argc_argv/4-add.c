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
	int j = 0;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
		j = 0;
	}
	printf("%d\n", sum);
	return (0);
}
