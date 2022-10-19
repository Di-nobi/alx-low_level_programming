#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * Description: _abs - a function compute the absolute value of an integer
 * @n: integer to affect
 * Return: The value of integer
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
