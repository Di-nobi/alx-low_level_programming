#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * Description: print_alphabet - a function that prints alphabet in lowercase,
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
