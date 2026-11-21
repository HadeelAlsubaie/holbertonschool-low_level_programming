#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - fills a struct dog with the given values
 * @d: pointer to the dog to fill
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the name of the dog's owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
