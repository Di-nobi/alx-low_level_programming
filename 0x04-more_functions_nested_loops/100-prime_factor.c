#include <stdio.h>

/**
 * main - prints largest prime factor
 * Return: 0
 */
int main(void)
{
	long int a, lp;

	a = 642376890757;
	for (lp = 2; lp <= a; lp++)
	{
		if (a % lp == 0)
		{
			a /= lp;
			lp--;
		}
	}
	printf("%li\n", lp);
	return (0);
}
