#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps two integers
 *
 * @a: Pointer of first integer
 * @b: Pointer of second integer
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
