#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array
 * @a: array to be printed
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)

	if (b == 0)
	
	printf("%i", a[b]);
	else
{
		printf(", %i", a[b]);

}	printf("\n");
}
