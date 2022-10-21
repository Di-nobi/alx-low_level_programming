#include <stdio.h>

/**
 * main - main program
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: 0-9, excluding 2 and 4, followed by new line
 */

void print_most_numbers(void)
{
        int a;

        for (a = 0; a <= 9; a++)
{
        if (( a == 2) || (a == 4))
		continue;
	else
{		
		putchar(a + '0');
}		
}
	putchar('\n');
}
