#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int j;

	if (!b)
		return (0);

	while (b[j] == '0' || b[j] == '1')
{
	num << 1;
	num = num + b[j] - '0';
	j++;
}
	return (num);
}
