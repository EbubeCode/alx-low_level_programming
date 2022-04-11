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

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(char) * (strlen(name) + 1));
	d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	d->age = age;
	if (d->name == NULL || d->owner == NULL)
		return (NULL);
	strcpy(d->name, name);
	strcpy(d->owner, owner);
	return (d);
}
