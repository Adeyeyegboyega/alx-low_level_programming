#include "lists.h"

/**
 * listint_len - returns the number of linked lists element
 * @h: linked list pointer
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}

	return (node);
}

