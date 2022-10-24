#include "main.h"
#include <stdio.h>
/**
 * rev_string - a function that reverse a string
 * @s: string character
 */

void rev_string(char *s)
{
	char len;
	int a, b, c;
	
	b = 0;
	a = 0;

	while (s[a] != '\0')
{	a++
}
	b = a - 1;
	for (c = 0; c < a / 2; c++)
{	len = s[c];
	s[c] = s[b];
	s[b--] = len;
}
}
