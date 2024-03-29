#include "search_algos.h"
/**
 * binary_search - a function that searches for a value in a sorted
 * array of integers
 * @array: array of integers
 * @size: size of array
 * @value: value to be found
 * Return: -1 if value is not present
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t i;
	size_t midian;

	if (!array)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		midian = (low + high) / 2;
		if (array[midian] == value)
		{
			return (midian);
		}
		else if (array[midian] > value)
		{
			high = midian - 1;
		}
		else
		{
			low = midian + 1;
		}
	}
	return (-1);
}
