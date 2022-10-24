#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _puts - This prints a string
 * @str: String
 */

void _puts(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
{
	_putchar(str[x]);
	x++;
}	_putchar ('\n');
}
