#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add
 * @argc - int
 * @argv - string
 * Return: int
 */

int main(int argc, char *argc[])
{
	int x = 0, i, j;

	for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j]; j++)
{
	if (isdigit(argv[i][j]) == 0)
{
	printf("Error\n");
	return (1);
}
}
}
	for (i = 1; i < argc; i++)
{
	x = x + atoi(argv[i]);
}
	printf("%d\n", x);
	return (0);
}