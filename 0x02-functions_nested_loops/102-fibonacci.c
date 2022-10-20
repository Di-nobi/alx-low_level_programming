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
	c = 1;

	while (c <= 50)
{
	if (a != 2147483647)
{
	printf("%li, \n", a);
}
	else
{
	printf("%li\n", a);
}
	up = a + b;
	a = b;
	b = up;
	c++;
}
	return (0);
}
