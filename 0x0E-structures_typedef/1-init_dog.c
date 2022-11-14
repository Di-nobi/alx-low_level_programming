#include "dog.h"

/**
 * init_dog - initializes a variableof type struct dog.
 * @d: struct dog.
 * @name: name of dog
 * @age: age of dpg
 * @owner: owner of dog
 * Return: Nothing
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
