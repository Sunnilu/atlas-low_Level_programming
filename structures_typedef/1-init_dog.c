#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes a dog structure
 * @d: the dog structure
 * @name: Dog name
 * @age: the age of dog
 * @owner: the one that owns the dog
 * return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
