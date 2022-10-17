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

	do
{
	if (x == 'e' || x == 'q')
		break;
		putchar(x);
		x++;
}	while (x <= 'z')
	putchar('\n');
	return (0);
}
