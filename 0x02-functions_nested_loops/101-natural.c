#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * main- main block
 * Description: Print the sum of all multiplrs of 3 or 5 below 1024.
 * Return: 0
 */

int main(void)
{
	int i, a;

	i = 1;
	a = 0;

	for (i = 1; i < 1024; i++)
{
	if (i % 3 == 0)
{
	a += i;
}
	else if (i % 5 == 0)
{
	a += i;
}
}
	printf("%i\n", a);
	return (0);
}
