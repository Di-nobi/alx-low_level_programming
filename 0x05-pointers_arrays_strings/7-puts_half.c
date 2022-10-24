#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of the string
 * @str: The string
 */

void puts_half(char *str)
{
	int length, a, b;

	length = 0;

	do{

	length++;
}
	while (str[length] != '\0');

	if (length % 2 == 0)
{
	for (a = length / 2; str[a] != '\0'; a++)
{
	_putchar(str[a]);
}
}
	else
{
	for (b = (length - 1) / 2; str[b] < length - 1; b++)
{
	_putchar(str[b + 1]);
}
}	_putchar('\n');
}
