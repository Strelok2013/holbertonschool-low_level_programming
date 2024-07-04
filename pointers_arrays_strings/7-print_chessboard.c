#include "main.h"

/**
 * print_chessboard - prints da chessboard
 * @a: pointer to an array of pointers
 *
 * Return: void, returns nothing
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
