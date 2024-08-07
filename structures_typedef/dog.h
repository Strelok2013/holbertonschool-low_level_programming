#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - struct that hold information about a particular dog
 * @name: name of the dog
 * @age: age of the dog, in floating point notation
 * @owner: name of the owner of the dog
 *
 * Description: Its a dog, whaddya want :P
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);
#endif
