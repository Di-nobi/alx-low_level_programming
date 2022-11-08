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
