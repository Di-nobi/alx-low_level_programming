#include <stdio.h>
#include <stdlib.h>
/**
 *main-program entry point.
 *Return:0 if no error, non zeroif error.
 */
int main(void)
{
	int x;
	char hexvalues[] = "0123456789abcdef";

	for (x = 0; x < 16; x++)
{	putchar(hexvalues[x]);
}
	putchar('\n');
	return (0);
}
