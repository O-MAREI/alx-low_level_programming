#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - Prints every item in an array.
 * @array: The array.
 * @size: The size of the array.
 * @action: Pointer to the function to be used.
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
