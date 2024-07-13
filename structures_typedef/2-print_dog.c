#include "dog.h"

/**
 * print_dog - prints the contents of the dog struct
 * @d: pointer to struct of type dog
 *
 * Return: void, returns null void pointer.
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->name)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: (nil)\n");
	}
	if (d->age < 0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Owner: (nil)\n");
	}
}
