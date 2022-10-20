#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * Description: print_times_table - print the 'n' times table, starting with 0.
 * if 'n' is greater than 15 or less than 0, print nothing.
 * @n: int type integer
 */

void print_times_table(int n)
{
	char r, c, p;

	if (n > 15 || n < 0)
		return;
		for (r = 0; r <= n; r++)
{
	for (c = 0; c <= n; c++)
{
	p = r * c;
	if ( p > 99)
{
	_putchar(p / 100 + 48);
	_putchar(p / 10 % 10 + 48);
	_putchar(p % 10 + 48);
}
	else if (p > 9)
{
	_putchar(' ');
	_putchar(p / 10 + 48);
	_putchar(p % 10 + 48);
}
	else if (c != 0)
{
	_putchar(' ');
	_putchar(' ');
	_putchar(p + 48);
}
	else
	_putchar(p + 48);
	if (c != n)
{
	_putchar(',');
	_putchar(' ');
}
}_putchar('\n');
}
