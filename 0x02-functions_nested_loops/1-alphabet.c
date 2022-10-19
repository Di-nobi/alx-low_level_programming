#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 *main-program entry point.
 *
 * print_function - function that prints the alphabet, in lowercase followed by a newline
 *
 *Return:nothing
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
{
	_putchar(x);
}	_putchar('\n');
}
