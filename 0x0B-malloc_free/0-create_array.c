#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create-arrays - a function that creates an array of characters and initializes
 * it with a specific character
 * @c: char
 * @size:int
 * Return: apointer to an array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *r;

	r = malloc(size * sizeof(char));

	if (size == 0)
{
	return (NULL);
}
	if (r == NULL)
{
	return (NULL);
}
	a = 0;
	while (a < size)
{
	r[a] = c;
	a++;
}
	r[a] = '\0';

	return (r);
}
