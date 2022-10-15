#include <stdio.h>
#include <stdlib.h>
/**
 *main-program entry point.
 *Return:0 no error, non zero if error
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
