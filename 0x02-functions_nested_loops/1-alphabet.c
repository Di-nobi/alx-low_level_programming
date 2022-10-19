#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main-program entry point.
 * Description: A function that prints the alphabet in lowercase, followed by a new line
 * Return:0 none error, no error
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x < 'z'; x++)
{
	_putchar(x);
}	_putchar('\n');
}
