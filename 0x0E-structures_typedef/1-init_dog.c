#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialized dog struct.
 * @d: some pointer to type dog struct.
 * @name: dog name.
 * @age: dog .
 * @owner: my hooman.
 *
 * Return: pointer to dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
