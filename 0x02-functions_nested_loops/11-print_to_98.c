#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * Description: print_to_98 - print all numbers from input to 98
 * @n: the starting number
 */

void print_to_98(int n)
{
	if (n > 98)
{
	while (n >= 98)
{
	printf("%i", n);
	if (n != 98)
{
	printf(",");
	printf(" ");
}	n--;
}
}
	else
{
	while (n <= 98)
{
	printf("%i", n);
	if (n != 98)
{
	printf(",");
	printf(" ");
}	n++;
}
}	printf("\n");
}
