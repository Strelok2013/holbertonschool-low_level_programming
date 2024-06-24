#include "main.h"

/**
 *
 *
 *
 */

void times_table(void)
{
	int i = 0;
	int j = 0;
	int r = 0;

	while (i < 9)
	{
		while (j < 9)
		{
			r = i * j;
			_putchar('0' + r);
			_putchar(',');
			if (r < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(' ');
			}
			if (r % 9 == 0)
			{
				_putchar('\n');
			}
		}
	}
}
