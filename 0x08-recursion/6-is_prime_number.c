#include "main.h"

int prime_number(int n, int x);


/**
 * is_prime_number - a function that returns 1 if the inputi integer is a
 * prime number, otherwise return 0
 * @n: integer
 * Return: 1 if input integer is prime number otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}

/**
 * prime_number - recurses to return an input integer as 1, otherwise 0
 * @x: iterator
 * @n: integer
 * Return: 1 as a prime number input otherwise 0
 */


int prime_number(int n, int x)
{
	if (n == 1)
	return (1);

	if (n % x == 0 && x > 0)
	return (0);
	return (prime_number(n, x - 1));
}
