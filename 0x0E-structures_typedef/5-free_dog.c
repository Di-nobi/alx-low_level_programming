#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog
 * @d: struct dog
 * Return: Nothing
 */

void free_dog(dog_t *de)
{
	if (d)
{
	free(d->owner);
	free(d->name);
	free(d);

}
}
