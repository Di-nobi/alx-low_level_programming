#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main-program entry point.
 *
 * Return:0 if no error, non-zero value if error.
 */
int main(void)
{
	int n;
	int ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigit = n % 10;
	if (ldigit > 5)
{	printf("Last digit of %i is %i and is greater than 5\n", n, ldigit);
}	else if (ldigit < 6 && ldigit != 0)
{	printf("Last digit of %i is %i and is less than 6 and not 0\n",n, ldigit);

}	else if (ldigit == 0)
{	printf("Last digit of %i is %i and is 0\n", n, ldigit)
}	return (0);
}
