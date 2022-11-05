#include <stdio.h>
#include <stdlib.h>

/**
 * argc - a function that prints a name followed by a new line
 * @x: iterator
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
{
	printf("%s", argv[x]);
}
	printf("\n");

	return (0);
}
