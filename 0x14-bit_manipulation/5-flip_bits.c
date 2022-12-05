#include "main.h"
/**
 * flip_bit - returns the number of bits  you would want flip from one number
 * to another
 * @n: base 10 num
 * @m: base 10 num
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	int count;
	x = n ^ m;
	for (count = 0; x != 0; count++)
{
	x = x & (x - 1);
}
	return (count);
}
