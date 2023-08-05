#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse.
 * @s: The string to print.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(s[strlen(s - 1)]);
		s[strlen(s - 1)] = '\0';
		_print_rev_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
