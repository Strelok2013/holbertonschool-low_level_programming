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

	while (i < 10)
	{
		while (j < 10)
		{
			r = i * j;
			if (r < 10)
			{
				if(j == 10)
				{
					_putchar('0' + r);
					_putchar(',');
				}
				else
				{
					_putchar('0' + r);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				
			}
			else
			{
				mod = r % 10;
				tenth = r / 10;
				if(j == 10)
				{
					_putchar('0' + tenth);
					_putchar('0' + mod);
				}
				else
				{
					_putchar('0' + tenth);
					_putchar('0' + mod);
					_putchar(',');
				}
				
			}
				_putchar(' ');
			}
			j++;
		}
		j = 0;
		_putchar('\n');
		i++;
	}
}
