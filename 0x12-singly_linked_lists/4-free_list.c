#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees all nodes in a linked list
 * @head: list_t list to be free
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head->next;
		free(head->str);
		free(head);
		head = node;
	}
}

