#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main-program entry point
 *Return:0-no error, non zero value if error.
 **/
int main(void)
{
int n;
	
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
 printf("%i is positive\n", n);
}
else if (n == 0)
{
 printf("%i is zero\n", n);
}
else if (n < 0)
 printf("%i is negative\n", n);
return (0);
}


