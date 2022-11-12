#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concates two strings
 * @s1:first char
 * @s2: second char
 * Return:NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int l, p, a, b;
	char *n;

	if (s1 == NULL)
		l = 0;
	else
{
	for (l = 0; s1[l]; l++)
		;
}
	if (s2 == NULL)
	p = 0;
	else
{
	for (p = 0; s2[p]; p++)
		;
}
	a = l + p + 1;
	n = malloc(a * sizeof(char));
	if (n == NULL)
	return (NULL);
	for (b = 0; b < l; b++)
	n[b] = s1[b];
	for (b = 0; b < p; b++)
	n[b + l] = s2[b];
	n[l + p] = '\0';
	return (n);
}
