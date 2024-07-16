#include "function_pointers.h"

/**
 * print_name - prints a name using a given function pointer
 * @name: pointer to char array containing name
 * @f: pointer to function to use to print the char array
 *
 * Return: void, returns null void pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		(*f)(name);
	else
		exit(1);
}
