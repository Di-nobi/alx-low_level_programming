#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *Program will assign a random number to a variable
 **/
int main(void)
{
int n;
	
srand(time(0));
n = rand() - RAND_Max / 2;
if (n > 0){
printf("%i is positive\n", n);
}else if (n == 0){
 printf("%i is zero\n", n);
}else if (n < 0){
printf("%i is negative\n", n);
}return (0);
}


