#include "main.h"
#include <stdio.h>
/**
 * swap_int - a function that swaps the value of two integers
 * @a: First int
 * @b: Second int
 */

void swap_int(int *a, int *b)
{	int swa = *a;
	*a = *b;
	*b = swa;
}
