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
	int step = sqrt(size);

	while (array[step] <= value && step < size)
	{
		start = step;
		step += sqrt(size);

		if (step > size - 1)			
