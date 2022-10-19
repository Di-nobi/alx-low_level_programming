#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_function - a function that prints the alphabet, in lowercase
 * followed by a newline.
 * Return: Nothing
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
{
	_putchar(x);
}	_putchar('\n');
}
