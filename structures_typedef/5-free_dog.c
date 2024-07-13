#include "dog.h"

/**
 * free_dog - frees the memory held by dog
 * @d: pointer to custom dog data type
 *
 * Return: void, returns null void pointer
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
