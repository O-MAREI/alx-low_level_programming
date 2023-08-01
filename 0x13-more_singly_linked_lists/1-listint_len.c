#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: Pointer to the list
 *
 * Return: Number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
