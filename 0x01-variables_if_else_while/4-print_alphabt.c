#include <stdlib.h>
#include <stdio.h>
/**
 *main-program entry point.
 *Return:0 if no error, non error if error.
 */
int main(void)
{
	char x;

	x = 'a';

	while (x <= 'z')
{
	if (x == 'e' || x == 'q')
		continue;
		putchar(x);
		x++;
}
	putchar('\n');
	return (0);
}
