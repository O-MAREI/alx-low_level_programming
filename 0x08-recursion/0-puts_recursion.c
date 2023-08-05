#include "main.h"

/**
 * _puts_recursion - Replicates _puts
 * @s:The string to print.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
