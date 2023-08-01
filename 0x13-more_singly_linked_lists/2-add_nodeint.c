#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list
 * @head: double pointer to the list
 * @n: Integer to add to the node
 *
 * Return: the address of the new element OR NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;
	unsigned int len = 0;
i
	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = (*head);
	(*head) = newNode;

	return (newNode);
}
