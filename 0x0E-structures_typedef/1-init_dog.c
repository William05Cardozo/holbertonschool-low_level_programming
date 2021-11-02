#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - init a variable
 * @d: Structure name
 * @name: Variable string
 * @age: Variable int
 * @owner: Variable string
 * Return: No Line
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
