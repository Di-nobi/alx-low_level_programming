#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_function - function that prints the alphabet, in lowercase 
 * followed by a newline
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
{
	_putchar(x);
}	_putchar('\n');
}
