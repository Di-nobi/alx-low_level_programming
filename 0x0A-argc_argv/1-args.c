#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed
 * @argc: int 
 * @argv: string
 * Return: int
 */

int main(int argc, char *argv[]_attribute_((unused)))
{
	printf("%d\n", argc - 1);

	return(0);
}
