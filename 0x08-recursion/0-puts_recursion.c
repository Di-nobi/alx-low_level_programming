#include "main.h"

/**
 * _puts_recursion - a function that prints a string
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
{
	return;
	_putchar('\n');
}
	_putchar(*s);
	_puts_recursion(s + 1);
}
