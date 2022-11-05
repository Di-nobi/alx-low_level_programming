#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the number of arguments passed
 * @argc: int 
 * @argv: string
 * Return: int
 */

int main(int argc, char *argv[]_attribute_((unused)))
{
	printf("%i", argc - 1);
	printf("\n");

	return(0);
}
