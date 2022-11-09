#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *argstostr - a function that concates all of tharguments ofyourprogram
 * @ac:int
 * @av:array
 * Return: array
 */

char *argstostr(int ac, char**av)
{
	int a, b, c, d, e, f;
	char *s;
	e = 0;
	f = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (c = 0; c < ac; c++)
{
	for (d = 0; av[c][d] != '\0'; d++)
		e++;
		e++;
}

	s = malloc(sizeof(char) * e + 1);
	if (s == NULL)
	return (NULL);
	for (a = 0; a < ac; a++)
{
	for (b = 0; av[a][b] != '\0'; b++)
{
	s[a] = av[x][y];
	a++;
}
	s[a++] = '\n';
}
	s[a]= '\0';
	return (s);
}
	
