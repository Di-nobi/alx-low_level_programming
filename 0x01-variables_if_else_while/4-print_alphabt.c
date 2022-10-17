#include <stdlib.h>
#include <stdio.h>
/**
 *main-program entry point.
 *Return:0 if no error, non error if error.
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
{
	if (x == 'e' || x == 'q')
		continue;
	putchar(x);
}
	putchar('\n');
	return (0);
}
