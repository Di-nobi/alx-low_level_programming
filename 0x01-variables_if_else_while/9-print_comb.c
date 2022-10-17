#include <stdio.h>
#include <stdlib.h>
/**
 *main-program entry point.
 *Return:0 success, non zero error.
 */
int main(void)
{
	int num;

	num = '0';

	while (num <= '9')
{	putchar(num);

	if (num == '9')
{	break;
}
	else
{	putchar(',');
	putchar(' ');
	num++;
}
}
	putchar('\n');
	return (0);
}
