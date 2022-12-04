#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
        unsigned int sum;
        unsigned int dec;
        int i;
	
	sum = 0;
	dec = 1;

        if (!b)
        return (0);
	
	for (i = 0; b[i]; i++)
{
        if (b[i] != '0' && b[i] != '1')
        return (0);
}
        for (i = (i - 1); i >= 0; i--)
{
        if (b[i] == '1')
		sum += dec;
	dec *= 2;
}
return (sum);
}
