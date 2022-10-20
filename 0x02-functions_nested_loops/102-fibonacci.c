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

	while (up <= 50)
{
	if (a != 21474836447)
{
	printf("%li, ", a);
}
	else
{
	printf("%li\n", a);
}
	a = b;
	b = c;
	c = a + b;
	c++;
}
	return (0);
}
