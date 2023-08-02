#include "lists.h"

/**
 * print_listint - prints the linked lis
 * @h: linked list of the node
 *
 * Return: number of list
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}

	return (node);
}

