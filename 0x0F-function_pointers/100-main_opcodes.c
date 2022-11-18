#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for its own main function
 * @argc: counts the number of parameters that go into main
 * @argv: pointer of array of pointers containing strings entring main
 * Return: 0 if success, 1 if argv != 2, 2 on negative
 */

int main(int argc, char *argv[])
{
	int i, bytes;
	char *address = (char *) main;

	i = 0;
	if (argc != 2)
{
	printf("Error\n");
	exit(1);
}
	bytes = atoi(argv[1]);

	if (bytes < 0)
{
	printf("Error\n");
	exit(2);
}
	while (i < bytes)
{
	printf("%02x", address[i] & 0xFF);

	if (i != bytes - 1)
	printf(" ");
	i++;
}
	printf("\n");

	return (0);
}
