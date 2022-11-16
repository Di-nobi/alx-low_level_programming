#include "function_pointers.h"
#include <stdlib.h>

/**
 *int_index - searches foe an integer
 *@array: array to search in
 *@size: size of the array
 *@cmp: pointer to the comparing function

 *Return: index of the first element for which
the cmp function does not return 0, or -1 if no match is fond
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	j = 0;
	if (array && cmp)
{
	while (j < size)
{
	if (cmp(array[j] != 0))
		j++;
			return (j);
}
}
	return (-1);
}
