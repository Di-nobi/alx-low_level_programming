#include <stdio.h>
#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
int up, sw;

if (size <= 0)
{
putchar('\n');
}
else
{
for (up = 1; up <= size; up++)
{
putchar('#');
for (sw = 2; sw <= size; sw++)
{
putchar('#');
}
putchar('\n');
}
}
}
