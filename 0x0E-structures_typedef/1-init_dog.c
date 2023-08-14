#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes variable type struct dog.
 * @d: pointer to struct.
 * @age: dogs age.
 * @name: dogs name.
 * @owner: dogs owner.
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->owner = owner;
	d->age = age;
}
