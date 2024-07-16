#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first int
 * @b: second int
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first int
 * @b: second int
 *
 * Return: the difference of the two ints
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two ints
 * @a: first int
 * @b: second int
 *
 * Return: product of the two ints
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two ints
 * @a: first int
 * @b: second int
 *
 * Return: quotient of the two ints
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - performs a modulus operation on two ints
 * @a: first int
 * @b: second int
 *
 * Return: remainder of the two ints
 */

int op_mod(int a, int b)
{
	return (a % b);
}
