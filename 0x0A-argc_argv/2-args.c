#include <stdio.h>
/**
 * main - shows args
 * @argc: integer
 * @argv: string
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int a;
	
	for (a = 0; a < argc; a++)
{
	printf("%s\n", argv[a]);
}
	return (0);
}
