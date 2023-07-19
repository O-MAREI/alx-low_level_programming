#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints name using a provided function.
 * @name: The name to be printed.
 * @f: The function to be used.
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
