#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index: Returns position of a matching integer.
 * @array: Array of integers to compare.
 * @size: Size of the array.
 * @cmp: Comparison function.
 * Return: Integer position || -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
