#include <stdio.h>
#include "main.h"
/**
 * main - print fibonacci
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned int v, w, x, d, c;

	v = 1;
	w = 2;
	c = 3;
	x = 2;

	d = 2;
	while (d <= 32)
{
	if (c % 2 == 0)
	x = x + c;
	v = w;
	w = c;
	c = v + w;
	d++;
}
	printf("%u\n", x);
	return (0);
}
