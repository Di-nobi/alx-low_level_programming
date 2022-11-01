#include "main.h"
#include <stdlib.h>

/**
 * _strchr - a function that locates a character in a string
 * @c: character of the first occurance
 * @s: string character
 * Return: a pointer to the char*
 */

char *_strchr(char *s, char c)
{
	do
{
	if (*s == c)
		return (s);
}
	while (s++);

	
	return (s);
}
