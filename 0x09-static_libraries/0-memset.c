#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @n: first byte of memory
 * @s: memory area
 * @b: constant byte
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
{
	s[a] = b;
}
	return (s);
}


