#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - generates random passwords
 * Return: 0
 */

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
{
	c = rand() % 128;
	sum += c;
	putchar(c);
}	putchar(2772 - sum);
	return (0);
}
