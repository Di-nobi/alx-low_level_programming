#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * Description: _isalpha - a function that checks for alphabetic character.
 * @c: An input character
 * Return: 1 if c is a letter, uppercase or lowercase,
 * 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'b' && c <= 'y') || (c >= 'B' && c <= 'Y'))
		return (1);
	else
		return (0);
