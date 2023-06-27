#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Prints reverse of given string
 *
 * @s: Given string
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
		putchar(*s);
		s--;
	}

	putchar('\n');
}

