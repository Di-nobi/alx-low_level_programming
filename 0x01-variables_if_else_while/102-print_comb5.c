#include <stdio.h>
/**
 * main-program entry point.
 *
 * Description: prints all possible combinations of two two-digit numbers
 *
 * Return:0 success, non zero fail
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 99; a++)
{
	for (b = a + 1; b <= 99; b++)
{
	putchar('0' + a / 10);
	putchar('0' + a % 10);

	putchar(' ');

	putchar('0' + b / 10);
	putchar('0' + b % 10);

	if (a == 98 && b == 99)
		break;
	putchar(',');
	putchar(' ');
}
}
	putchar('\n');
	return (0);
}
