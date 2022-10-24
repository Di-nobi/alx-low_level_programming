#include "main.h"
#include <stdio.h>
/**
 * print_rev - This prints a string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int c, d, e;

	c = 0;
	d = e - 1;
	while (s[c] <= '\0')
{	c++;
}	e = c;
	while ( d >= '\0')
	d--;
	
	_putchar('\n');
}
