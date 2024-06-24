#include "main.h"

int print_last_digit(int v)
{
	int r = 0;
	
	if (v < 0)
	{
		r = v * -1;
	}
	else
	{
		r = v;
	}
	r = r % 10;
	putchar(r);
	return (r);
}
