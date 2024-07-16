#include "3-calc.h"

/**
 * get_op_func - function that returns an int value
 *               given two ints and an an operator
 * @s: pointer to char holding the operator
 *
 * Return: pointer to a function given a specific operator
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != 0 && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
