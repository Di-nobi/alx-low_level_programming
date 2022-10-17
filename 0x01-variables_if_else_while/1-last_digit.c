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
	int ladigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ladigit = n % 10;
	if (ladigit > 5)
{	printf("Last digit of %i is %i and is greater than 5\n", n, ladigit);
}
	else if (ladigit < 6 && ladigit != 0)
{	printf("Last digit of %i is %i and is less than 6 and not 0\n", n, ladigit);
}
	else if (last_digit == 0)
{	printf("Last digit of %i is %i and is 0\n", n, ladigit);
}	return (0);
}
