#include "lists.h"

/**
 * get_nodeint_at_index - Returnsan indexed node from a linked list
 * @head: The first node in the linked list
 * @index: The index
 *
 * Return: Pointer to the indexed node OR NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp);
}
