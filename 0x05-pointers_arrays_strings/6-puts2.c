#include "main.h"
#include <stdio.h>
/**
 * puts2 - Prints out char out of other other char
 * @str: string
 */

void puts2(char *str)
{
	int dis, a;

	dis = 0;

	while (str[dis] != '\0')
{
	dis++;
}
	for (a = 0; a < dis; a += 2)
{
	_putchar(str[a]);
}
	_putchar('\n');
}
