#include <stdio.h>
/**
 * main - a program that display arg
 * @argc: int
 * @argv: string
 * Return: 0 - success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
