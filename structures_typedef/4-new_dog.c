#include "dog.h"

/**
 * _strlen - gets the length of the string
 * @str: pointer to char array
 *
 * Return: int, the length of the string
 */

int _strlen(char *str)
{
	int i = 0;

	while (*str++)
		i++;
	return (i);
}

/**
 * _strcopy - copies the contents of one string to another
 * @dest: destination string
 * @src: source string
 *
 * Return: returns pointer to destination string
 */

char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog given name, age and owner
 * @name: pointer to char array containing the name
 * @age: age of the dog in floating point notation
 * @owner: pointer to char array containint the owner's name
 *
 * Return: pointer to custonm data type, dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (0);
	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (0);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (!dog->name)
	{
		free(dog);
		return (0);
	}
	dog->owner = malloc(sizoeof(char) * (_strlen(owner) + 1));
	if (!dog->owner)
	{
		free(dog->name);
		free(dog);
		return (0);
	}
	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);
	return (dog);
}
