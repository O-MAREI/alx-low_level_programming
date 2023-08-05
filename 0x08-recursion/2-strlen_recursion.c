#include "main.h"

/**
 * _strlen_recursion - Returns length of a string.
 * @s: The string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
