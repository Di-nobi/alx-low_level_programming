#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * Description: print_last_digit - a function that prints the last digit
 * of a number.
 * @a: An input integer
 * Return: The last digit of n
 */

int print_last_digit(int a)
{
	int i;

	if (a < 0)
		i = -1 * (a % 10);
	else
		i = a % 10;
	_putchar((i % 10) + '0');
	return (i % 10);
}
