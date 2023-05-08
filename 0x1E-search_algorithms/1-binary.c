#include "search_algos.h"
/**
 * Binary_search - A function that searches for a value in a sorted
 * array of integers
 * @array: Array of integers
 * @size: Size of array
 * @value: Value to be found
 * Return: -1 if value is not present
 */

int binary_search(int *array, size_t size, int value)
{
	int low =0;
	int high = size -1;

	if (!array)
		return (-1);
	while (low <= high)
	{
		int midian = (low + high) / 2;
		if (array[midian] == value)
		{
			return midian;
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
