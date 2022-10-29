#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int x, b, tmo;

	b = n - 1;

	for (x = 0; a < n / 2; x++)
{
	tmo = x[a];
	x[a] = x[b];
	x[b--] = tmo;
}
