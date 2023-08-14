#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - function to create new dog
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog
 * Return: newDog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
{
	return (NULL);
}
	newDog->name = (char *)malloc(strlen(name) + 1);
	if (newDog->name == NULL)
{
	free(newDog);
	return (NULL);
}
	strcpy(newDog->name, name);
	newDog->owner = (char *)malloc(strlen(owner) + 1);
	if (newDog->owner == NULL)
{
	free(newDog->name);
	free(newDog);
	return (NULL);
}
	strcpy(newDog->owner, owner);
	newDog->age = age;
	return (newDog);
}
