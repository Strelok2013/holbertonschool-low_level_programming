#include "main.h"

/**
 *
 *
 *
 *
 */

int print_sign(int n)
{
	int r = 0;

	if (n > 0)
	{
		r = 1;
	}
	else if (n == 0)
	{
		r = 0;
	}
	else
	{
		r = -1;
	}

	return (r);
}
