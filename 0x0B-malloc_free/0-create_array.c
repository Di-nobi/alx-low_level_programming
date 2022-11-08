#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * char-arrays - a function that creates an array of characters and initializes
 * it with a specific character
 * Return: NULL if size is zero
 * Return: apointer to an array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *r;

	r = malloc((size + 1) * sizeof(char));
	for (a = 0, a < size; r[a] = c; a++)
{
	if (size == 0)
{
	return (NULL);
}
	if (size <= 0)
	return (NULL);
}
}
