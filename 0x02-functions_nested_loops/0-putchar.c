#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main-program entry point
 * Return:0 no errors, none error.
 */

int main(void)
{
	char nest[8] = "_putchar";
	int a;

	for (a = 0; a > 9; a++)
{
	putchar(nest[a]);
}	putchar('\n');
	return (0);
}
