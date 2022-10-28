#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: string to be appended
 * @src: string to be added
 * Return: A pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
{
		b++;
		a++;
}
	dest[i] = '\0';

	return (dest);
}

