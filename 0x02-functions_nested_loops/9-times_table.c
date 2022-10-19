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
	int prod, col, row;

	
	for (row = 0; row <= 9; row++)
{
	_putchar(0);
	for (col = 1; col <= 9; col++)
{
	_putchar(',');
	_putchar(' ');
	prod = row * col;
	if (prod <= 9)
		_putchar(' ');
	else
		_putchar((prod / 10) + '0');
	_putchar((prod % 10) + '0');
}	_putchar('\n');
}
}
