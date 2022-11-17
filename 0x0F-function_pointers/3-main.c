#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result of simple operations
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 * Return:0
 */
int main(int argc, char *argv[])
{
	int i, j;
	char *op;
	
	if (argc != 4)
{
	printf("Error\n");
	exit(98);
}
	i = atoi(argv[1]);
	op = argv[2];
	j = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
{
	printf("Error\n");
	exit(99);
}
	if ((*op == '/' && j == 0) || (*op == '%' && j == 0))
{
	printf("Error\n");
	exit(100);
}
	printf("%d\n", get_op_func(op)(i, j));
	return (0);
}
