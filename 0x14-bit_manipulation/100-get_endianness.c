#include "main.h"
/**
 * get_endianness - checks if a machine is little or big
 * Return: 0 if big 1 if little
 */
int get_endianness(void)
{
	unsigned int i, endia;
	
	i = 1;
	char *x = (char *) &i;

	if (*x)
		endia = (endia ? 1 : 0);
	return (endia);
}
