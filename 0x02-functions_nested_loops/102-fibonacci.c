#include <stdio.h>
/**
 * main - main entry point
 * Description: 102-fibonacci.c - a program that prints the first 50 fibonacci
 * numbers, starting with 1 and 2, followed by a new line.
 * Return:0 Always.
 */

int main(void)
{
	long int a, b, c, up;

	a = 1;
	b = 2;
	c = 3;

	printf("%ld, ", a);
	printf("%ld, ", b);
	for (up = 3; up < 50; up++)
{
	printf("%ld, ", c);
	a = b;
	b = c;
	c = a + b;
}
	printf("%ld\n", c);
	return (0);
}
