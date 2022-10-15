#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-program entry point.
 * Return:0 if no error, non zero if error.
 */
int main(void)
{
	char x;

	for(x = 'a'; x <= 'z'; x++)
{	putchar(x);
}
	putchar('\n');
	return (0);
}
