#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints out multiplication of two numbers
 * @argc: integer
 * @argv: string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int x, y, z;
	
	if (argc != 3)
{	printf("Error\n");
	return (1);
}
	else
{	x = atoi(argv[1]);
	y = atoi(argv[2]);
	z = x * y;
	printf("%i\n", z);
}	
	return (0);
}