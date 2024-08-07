#include "3-calc.h"

/**
 * main - check the code
 * @argc: number of args
 * @argv: array of strings containing args
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = argv[2];
	if (!get_op_func(op) || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && atoi(argv[3]) == 0) ||
	    (*op == '%' && atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
