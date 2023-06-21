#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all numbers from n to 98.
 * @n: print from this number
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		n = n+1;
	}
	_putchar('\n');
}
