#include <stdio.h>

/**
 * main - shows args
 * @argc: integer
 * @argv: string
 * Return: 0
 */

int main (int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
{
	printf("%s", argv[a]);
}
	printf("\n");

	return (0);
}
