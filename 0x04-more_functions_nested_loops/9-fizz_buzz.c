#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100
 * 3 multiples print Fizz instead of the number
 * 5 multiples print Buzz instead of the number
 * 3 & 5 multiples print FizzBuzz instead of the number
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
const char* di0 = "Fizz";
const char* di1= "Buzz";
const char* di2 = "FizzBuzz";

for (x = 1; x <= 100; x++)
{
if (x == 100)
printf("%s", di1);
else if ((x % 3 == 0) && (x % 5 == 0))
printf("%s ", di2);
else if (x % 3 == 0)
printf("%s ", di0);
else if (x % 5 == 0)
printf("%s ", di1);
else
printf("%d ", x);
}
printf("\n");
return (0);
}
