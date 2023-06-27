#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - check the code
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

