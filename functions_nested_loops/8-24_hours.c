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

	while (i < 3)
	{
		if(i == 2)
		{
			while (j < 5)
			{
				while (k < 6)
				{
					while (l < 10)
					{
						_putchar('0' + i);
						_putchar('0' + j);
						_putchar(':');
						_putchar('0' + k);
						_putchar('0' + l);
						_putchar('\n');
						l++;
					}
					l = 0;
					k++;
				}
				k = 0;
				j++;
			}
		}
		else
		{
			while (j < 10)
			{
				while (k < 6)
				{
					while (l < 10)
					{
						_putchar('0' + i);
						_putchar('0' + j);
						_putchar(':');
						_putchar('0' + k);
						_putchar('0' + l);
						_putchar('\n');
						l++;
					}
					l = 0;
					k++;
				}
				k = 0;
				j++;
			}	
		}
		j = 0;
		i++;
	}
}
