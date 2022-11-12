#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - a function that creates an array of integers
 * @min: int
 * @max: int
 * Return: pointer to array of integer
 */
int *array_range(int min, int max)
{
	int *x;
	int a, b = 0;

	if (min > max)
		return (NULL);
	x = malloc((max - min + 1) * sizeof(int));
	if (x == NULL)
		return (NULL);
	for (a = min; a <= max; a++)
{
	x[b] = a;
	b++;
}
	return (x);
}
