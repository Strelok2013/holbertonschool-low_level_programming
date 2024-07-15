#include "3-op_functions.c"

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

	while (&ops[i].op != &s)
		i++;
	if (i == 5)
		return (0);
	return (ops[i].f(a, b));
}
