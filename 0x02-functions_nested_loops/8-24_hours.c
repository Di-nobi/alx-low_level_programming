#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * Description: jack_bauer - a function that prints every minute of the day of
 * Jack Bauer.
 * Starting from 00:00 to 23:59
 * Return: Nothing
 */

void jack_bauer(void)
{
	char j, b;

	for (j = 0; j < 24; j++)
{
	for (b = 0; b < 60; b++)
{
	_putchar((j / 10) + '0');
	_putchar((j % 10) + '0');
	_putchar(':');
	_putchar((b / 10) + '0');
	_putchar((b % 10) + '0');
	_putchar('\n');
}
}
}
