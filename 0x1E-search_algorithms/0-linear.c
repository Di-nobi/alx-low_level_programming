#include "search_algos.h"
/**
 * linear_search - A function that searches for a value in an array of integr
 * @array: array of integers
 * @size: size of integers
 * @value: value to be found
 * Return: the first index of value else -1
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
			return (count);
		}
	}
	return (-1);
}
