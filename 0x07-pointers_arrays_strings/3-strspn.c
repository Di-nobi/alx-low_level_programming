#include "main.h"

/**
 * _strspn - gets the length of prefix substring
 * @s: string
 * @accept: string
 * Return: Number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;
	c = 0;

	for (a = 0; s[a] != '\0'; a++)
		break;
	for (b = 0; s[b] != '\0'; b++)
{
	if (s[a] = accept[b])
{
	c++;
}
}
	return (c);
}
