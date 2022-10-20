#include <stdio.h>
#include "main.h"
/**
 * Description: isupper - a function that checks an uppercase
 * @c: character to check
 * Return: 1 if c is uppercase otherwise return 0
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
{
	return (1);
}
	else
{
	return (0);
}
}
