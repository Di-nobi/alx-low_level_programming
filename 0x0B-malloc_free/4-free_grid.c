#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: array
 * @height: int
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
{
	free(grid[x]);
}
	free(grid);
}
