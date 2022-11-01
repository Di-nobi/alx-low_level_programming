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
	for (*s = 0; *s != c; *s++)
		break;
	return (s);
		if (*s == c)
	return (s);
	else if (c == '\0')
	return (s);

	return (NULL);
}
