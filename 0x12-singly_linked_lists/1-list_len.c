#include <stdlib.h>
#include "lists.h"

/**
 * list_len - helps to check the number of elements in linked list
 * @g: pointer to list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *g)
{
	size_t i = 0;

	while (g)
	{
		g = g->next;
		i++;
	}
	return (i);
}

