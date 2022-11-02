#include "main.h"

/**
 * print_chessboard - print a chessboard
 * @a: array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int c, b;

	for (c = 0; a[c][7]; c++)
{
	for (b = 0; b < 8; b++)
		_putchar(a[c][b]);
	_putchar('\n');
}
}
