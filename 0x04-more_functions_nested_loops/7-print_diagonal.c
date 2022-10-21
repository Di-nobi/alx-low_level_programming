#include <stdio.h>

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int up, dw;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (up = 1; up <= n; up++)
		{
			for (dw = 1; dw < up; dw++)
			{
				putchar(' ');
			}
			 putchar('\\');
			 putchar('\n');
		}
	}
}
