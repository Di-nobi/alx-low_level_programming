#include "main.h"

/**
 * _strspn - gets the length of prefix substring
 * @s: char string array
 * @accept: char array to check bytes with
 * Return: Number of bytes in the initial segment of 's'
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;
	c = 0;

	for (a = 0; s[a] != '\0'; a++)
		if (s[a] != 32)
{
	for (b = 0; accept[b] != '\0'; b++)
{
	if (s[a] = accept[b])
{
	c++;
}
	else if (accept[b + 1] == '\0')
	return (c);
}
}
	return (c);
}
