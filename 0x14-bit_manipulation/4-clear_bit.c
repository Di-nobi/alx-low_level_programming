#include "main.h"
/**
 * clear_bit - sets the value of a given bit to 0
 * @n: pointer to the number to change
 * @index: index
 * Return: 1 for succes, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = (*n & (~(1 << index)));
	return (1);
}
