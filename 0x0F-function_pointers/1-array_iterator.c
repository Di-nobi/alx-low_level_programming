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
	unsigned int j;

	j = 0;
	if (array == NULL || action == NULL)
		return;
	while (j < size)
{
	action(array[j]);
	j++;
}
}
