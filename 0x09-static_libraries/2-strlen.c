#include "main.h"
#include <stdio.h>
/**
 * _strlen - a function that returns the length of a string
 * @s: The string
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
{	x++;
}	return (x);
}
