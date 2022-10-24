#include "main.h"
#include <stdio.h>

void swap_int(int *a, int *b)
{	int swa = *a;
	*a = *b;
	*b = swa;
}
