#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copies strings pointed to by src
 * @dest: pointer
 * @src: string to be copied
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int length, a;

	length = 0;

	while (src[length] != '\0')
{
	length++;
}
	for (a = 0; a < length; a++)
{
	dest[a] = src[a];
}
	dest[a] = '\0';

	return (dest);
}
