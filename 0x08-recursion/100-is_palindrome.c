#include "main.h"
int scan(char *s, int a, int b);

/**
 * is_palindrome - a function that checks if a string is palindrome
 * @s: char
 * Return: 1 if a string is palidrome 0 if its not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (scan(s, 0, _st r
