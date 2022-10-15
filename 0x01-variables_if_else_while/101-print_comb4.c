#include <stdio.h>
/**
 *main-program entry point.
 *Return:0 success, non zero fail
 */
int main(void)
{
	int a, i, t;

	for (i = '0'; i <= '9'; i++)
{
	for (t = '0'; t <= '9'; t++)
{
	for (a = '0'; a <= '9'; a++)
{
	if (i < t && t < a)
{
	putchar(i);
	putchar(t);
	putchar(a);
	if (i == '7' && t == '8' && a == '9')
{
	break;
}
	else
{
	putchar(',');
	putchar(' ');
}
}
}
}
}
	putchar('\n');
	return (0);
}
