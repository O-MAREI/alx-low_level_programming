#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name: Prints name uding a provided function in it's params 
 * @name: The name to be printed.
 * @f: The function to be used.
 * Return: void
 */
void print_name(char *name, void (*f)(char *)){

	if (name == NULL || f == NULL)
		return;

	f(name);
}
