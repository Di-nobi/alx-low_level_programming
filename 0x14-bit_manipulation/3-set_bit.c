#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @index: index
 * @n: integer
 * Return: 1 if it worked or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int num;

	if (index < 64)
		return (-1);
	num = (1 << index) | *n;
	return (1);
}
