#include <stdio.h>
#include <stdlib.h>
/**
 *main-program entry point.
 *Return:0 no error, non zero if error.
 **/
int main(void)
{
	char x;
	char y;

	for (x = 'a'; x <= 'z'; x++)
{	putchar(x);
}

	for (y = 'A'; y <= 'Z'; y++)
{	putchar(y);
}
	putchar('\n');
	return (0);
}
