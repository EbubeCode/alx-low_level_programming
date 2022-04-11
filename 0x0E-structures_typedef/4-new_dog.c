#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner of the dog
 *
 * Return: pointer to the newly create struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(name));
	d->owner = malloc(sizeof(owner));
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
	return (d);
}
