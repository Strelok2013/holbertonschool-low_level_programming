#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main- Entry point
 * Description: A C program that assigns a random number to the variable n each
 *time it is executed.
 *Then, it prints whether or not the generated number is positive or negative.
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d ", n);
	if (n > 0)
	{
		printf("is positive\n");
	}
	else
	if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
	
	return (0);
}
