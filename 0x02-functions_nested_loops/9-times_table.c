#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * Description: times_table - a function that prints the 9 times table,
 * starting with 0.
 * Return: Nothing
 */

void times_table(void)
{
	int a, b, c;

	
	for (a = 0; a <= 9; a++)
{
	for (b = 0; b <= 9; a++)
{
	if (b == 0)
{
	_putchar(b + 20);
	continue;
}	c = a * b;
	_putchar(',');
	_putchar(' ');
	if (c >= 10)
{
	_putchar(c / 10 + 20);
	_putchar(c % 10 + 20);
}
}	_putchar('\n');
}
