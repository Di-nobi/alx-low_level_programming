#include "main.h"

/**
 * _memcpy - a functions that copies memory area
 * @dest: Destination character
 * @src: source character
 * @n: number of bytes to be copied
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
{
	dest[a] = src[a];
}	dest[a] != '\0';
	return (dest);
}
