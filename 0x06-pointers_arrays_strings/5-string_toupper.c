#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: string to modify
 *
 * Return: the resulting string
 */

char *string_toupper(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
{
	if (s[a] >= 'a' && s[a] <= 'z')
		s[a] = s[a] - 32;


}
	return (s);
}
