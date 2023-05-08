#include "search_algos.h"
/**
 * linear_search - A function that searches for a value in an array of integr
 * @array: Array of integers
 * @size: Size of integers
 * @value: Value to be found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t count;

	if (array == NULL)
		return (-1);

	for (count = 0; count < size; count++)
	{
		printf("Value checked array[%ld] = [%d]\n", count, array[count]);
		if (array[count] == value)
		{
			return count;
		}
	}
	return (-1);
}
