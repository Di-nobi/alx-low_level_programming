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

	x = 'a';

	while (x <= 'z')
{
	putchar(x);
	x++;
}

	for (y = 'A'; y <= 'Z'; y++)
{	putchar(y);
}
	putchar('\n');
	return (0);
}
