#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * main-program entry point
 * Return:0 no errors, none error.
 */

int main(void)
{
	char nest[8] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
{
	putchar(nest[a]);
}
	putchar('\n');
	return (0);
}
