#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @g: the pointer to the first node
 *
 * Return: the number of length of the string
 */
size_t print_list(const list_t *g)
{
	size_t v = 0;

	while (g)
	{
		if (!g->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", g->len, g->str);
		g = g->next;
		v++;
	}

	return (v);
}

