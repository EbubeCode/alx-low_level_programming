#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to variable dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of owner of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
