#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimension array of integers initialized to 0
 * @width: integer
 * @height: integer
 * Return: a double pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **x;

	if (width <= 0 || height <= 0)
		return (NULL);
	x = (int **)malloc(sizeof(int *) * height);
	if (x == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
{
	x[a] = (int *)malloc(sizeof(int) * width);
	if (x[a] == NULL)
{
	for (b = 0; b < a; b++)
		free(x[b]);
	free(x);
	return (NULL);
}
	for (b = 0; b < width; b++)
{
	x[a][b] = 0;
}
}
	return (x);
}
