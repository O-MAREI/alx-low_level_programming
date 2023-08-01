#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list.
 * @h: Pointer to the list.
 *
 * Return: Number of nodes printed.
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
