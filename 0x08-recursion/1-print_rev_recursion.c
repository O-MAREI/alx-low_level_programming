#include "main.h"

/**
 * _puts_rev_recursion - prints string in reverse.
 * @s: The string to print.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(s[strlen(s - 1)]);
		s[strlen(s - 1)] = '\0';
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
