#include "main.h"

int actual_sqrt_recursion(int n, int x);

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 * @n: integer
 * Return: -1 if n does not have a natural root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/** actual _sqrt - recurse to find the natural
 * square root of the number
 * @x: iterator
 * @n: number gotten calculating the srt
 * Return: resulting square root
 */

int actual_sqrt_recursion(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (actual_sqrt_recursion(n, x + 1));
}
