#include "main.h"
#include <stdio.h>
/**
 * 1-swap.c - a function that swaps the value of two integers
 */

void swap_int(int *a, int *b)
{	int swa = *a;
	*a = *b;
	*b = swa;
}
