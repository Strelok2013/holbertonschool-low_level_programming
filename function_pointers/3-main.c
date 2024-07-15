#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (atoi(argv[1]) && atoi(argv[3]))
	{
		if ((*get_op_func(argv[2])))
		{
			printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));
		}
		else
		{
			printf("Error\n");
			exit(100);
		}
	}
	else
	{
		printf("Error\n");
		exit(99);
	}
	return (0);
}
