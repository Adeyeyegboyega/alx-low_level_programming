#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node to the beginning of the list
 * @head: double pointer to the list_t list
 * @str: the value to insert
 *
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *recent;
	unsigned int len = 0;

	while (str[len])
		len++;

	recent = malloc(sizeof(list_t));
	if (!recent)
		return (NULL);

	recent->str = strdup(str);
	recent->len = len;
	recent->next = (*head);
	(*head) = recent;

	return (*head);
}

