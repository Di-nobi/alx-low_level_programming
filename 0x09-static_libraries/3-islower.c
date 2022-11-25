#include <stdio.h>
#include "math.h"
#include <unistd.h>
/**
 * Description: _islower - a function that checks for lowercase characters.
 * @c: An input character
 * Return: 1 if c is lowercase, 0 if not
 */

int _islower(int c)
{
	char x;
	int low = 0;

	x = 'a';
	while (x <= 'z')
{
	if (x == c)
	low = 1;
	x++;
}	return (low);
}
