#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a functions that returntothe newly allocated space inmemory
 * @str: string
 * Return: Null
 */

char *_strdup(char *str)
{
	char *i;
	int a, b;

	if (str == NULL)
{
	return (NULL);
}
	for (a = 0;  str[a]; a++)
	b++;

	i = malloc((b + 1) * sizeof(int));

	if (i == NULL)
	return (NULL);

	for (a = 0; str[a]; a++)
	i[a] = str[a];

	i[b] = '\0';
	free (i);

	return (i);
}
