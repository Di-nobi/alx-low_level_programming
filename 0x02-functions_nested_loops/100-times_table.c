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
	int x;

	x = 0;

	if (n <= 15 && n >= 0)
{
	while (x <= n)
{	int y = 1;

	_putchar(48);
	while (y <= n)
{	int p = x * y;
	_putchar(',');
	_putchar(' ');
	if (p < 10)
{	_putchar(' ');
	_putchar(' ');
	_putchar(p + 48);
}
	else if (p > 99)
{	_putchar((p / 100) + 48);
	_putchar(((p / 10) % 10) + 48);
	_putchar((p % 10) + 48);
}
	else
{	_putchar(' ');
	_putchar((p / 10) + 48);
	_putchar((p % 10) + 48);
}
	y++;
}
	_putchar('\n');
	x++;
}
}
}
