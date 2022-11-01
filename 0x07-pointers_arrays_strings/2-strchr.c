#include "main.h"
#include <stdlib.h>

/**
 * _strchr - a function that locates a character in a string
 * @c: character of the first occurance
 * @s: string character
 * Return: a pointer to the first occurance of the character c in the string or
 * NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	do
{
	if (*s != c)
		s++;
	else if (*s == c)
		return (s);
}
	while (*s);

	if (c == '\0')

	return (NULL);
}
