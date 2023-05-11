#include "search_algos.h"
#include <math.h>
/**
 * jump_search - a function that searches for a value in a sorted
 * algorithm
 * @array: array pointing to first element of the array in search
 * @size: number of elements in an array
 * @value: value searched for
 * Return: -1 if value not present in array
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t step = sqrt(size);
	size_t i;

	if (!array)
		return (-1);
	while (array[step] <= value && step < size)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		start = step;
		step += sqrt(size);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, step);
	if (step > size - 1)
	{
		step = size;
	}
	for (i = start; i < step; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
