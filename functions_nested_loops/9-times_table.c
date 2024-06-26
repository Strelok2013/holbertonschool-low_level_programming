#include "main.h"

/**
 * times_table - prints the times table up to 9
 *
 * Return: Void, returns void pointer
 */

void times_table(void)
{
	int i = 0;
	int j = 0;
	int r = 0;
	int mod = 0;
	int tenth = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			r = i * j;
			mod = r % 10;
			tenth = (r - mod) / 10;
			if (tenth != 0)
			{
				_putchar('0' + tenth);
			}
			_putchar('0' + mod);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (i * (j + 1) < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
