#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as aparameter
 * on each element of an array
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int j;

	j = 0;
	if (array == NULL || !(size))
		return;
	while (j < size)
{
	j++;
}
	action(array[j]);
}
