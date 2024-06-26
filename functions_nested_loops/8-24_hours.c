#include "main.h"

/**
 * jack_bauer - prints every minute of Jack Bauer's day
 *
 * Return: Void, returns void pointer
 */

void jack_bauer(void)
{
	int tenth_h = 0;
	int mod_h = 0;
	int tenth_m = 0;
	int mod_m = 0;
	int i = 0;
	
	for (i = 0; i < 1440; i++)
	{
		tenth_h = i / 600;
		mod_h =  (i / 60) % 10;
		tenth_m = (i / 10) % 10;
		mod_m = i % 10;
		_putchar('0' + tenth_h);
		_putchar('0' + mod_h);
		_putchar(':');
		_putchar('0' + tenth_m);
		_putchar('0' + mod_m);
		_putchar('\n');
	}
}


