#include "dog.h"

/**
 * init_dog - initializes the dog struct
 * @d: pointer to the dog struct
 * @name: name of the dog, accepts string literals
 * @age: age of the dog
 * @owner: name of the owner of the dog
 *
 * Return: void, returns a null void pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
