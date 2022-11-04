#include "main.h"

/**
 *  wildcmp - a function that compares two strings
 *  @s1: first character
 *  @s2: second character
 *  Return: 1 if string is identical otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	else if (*s1 == '\0' && *s2 == '*')
		return (wildcmp(s1, (s2 + 1)));
	else if (*s1 == '\0' || *s2 == '\0')
		return (0);
	if (*s1 == *s2)
		return (wildcmp((s1 + 1), (s2 + 1)));
	if (*s2 == '*')
{
	if (*(s2 + 1) == '*')
		return (wildcmp(s1, (s2 + 1)));
	else if (wildcmp(s1, s2 + 1))
		return (1);
	else
		return (wildcmp(s1 + 1, s2));
}
	return (0);
}
