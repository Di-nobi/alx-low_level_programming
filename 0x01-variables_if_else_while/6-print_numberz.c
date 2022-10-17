#include <stdio.h>
#include <stdlib.h>
/**
 *main-program entry point.
 *Return:0 no error, non zeroif error
 */
int main(void)
{
	int x;

	x = '0';

	while (x <= '9')
{
	putchar(x);
	x++;
}
	putchar('\n');
	return (0);
}
