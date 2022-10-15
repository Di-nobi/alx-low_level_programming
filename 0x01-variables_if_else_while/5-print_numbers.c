#include <stdio.h>
#include <stdlib.h>
/**
 *main-program entry point.
 *Return:0 no error, non zero if error
 */
int main(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
{	putchar(x);
}
	putchar('\n');
	return (0);
}
