#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *string_nconcat - a function that concatenates two strings
 * @s1: pointer to string
 * @s2: pointer to string
 * @n: integer
 * Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c, d;
	char *x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
	;
	for (b = 0; s2[b] != '\0'; b++)
	;
	if (n >= b)
		n = b;
	x = malloc(sizeof(char) * (a + n + 1));
	if (x == NULL)
		return (NULL);
	for (c = 0; s1[c] != '\0'; c++)
		x[c] = s1[c];
	for (d = a; d < a + n; d++)
		x[d] = s2[d - a];
	x[d] = '\0';
	return (x);
}
