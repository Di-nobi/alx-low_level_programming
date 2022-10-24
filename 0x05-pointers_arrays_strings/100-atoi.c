#include "main.h"
/**
 * _atoi - a function that converts a string to an integer
 * @s: string to be converted
 * Return: The int converted from the string
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= 48 && *s <= 57)
			num = (num * 10) + (*s - 48);
		else if (num > 0)
			break;
}
	while (*s++);

	return (num * sign);
}

