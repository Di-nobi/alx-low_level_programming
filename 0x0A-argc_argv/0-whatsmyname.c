#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints a name of a program
 * @argc: The number of the arguments
 * @argv: An array of the arguments passed
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
