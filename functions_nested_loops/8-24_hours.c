#include "main.h"

/**
 * jack_bauer - prints every minute of Jack Bauer's day
 *
 * Return: Void, returns void pointer
 */

void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					_putchar('0' + i);
					if (i != 2)
					{
						_putchar('0' + j);
					}
					else
					{
					if  (j > 4)
					{
						_putchar('0' + 4);
					}
					else
					{
						_putchar('0' + j);
					}
					}
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
				}
			}
		}
	}
}


