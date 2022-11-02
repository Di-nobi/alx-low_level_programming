#include "main.h"

/**
 * _strspn - gets the length of prefix substring
 * @s: char string array
 * @accept: char array to check bytes with
 * Return: Number of bytes in the initial segment of 's'
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a;
	int i;
	a = 0;

	while (*s)
{
	for (i = 0; accept[i]; i++)
{
	if (*s == accept[i])
		a++;
		break;
	else if (accept[i + 1] == '\0')
{
	return(a);
}
}
	s++;
}
	return (a);
}
