#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a recent node to end of list
 * @head: double pointer to the head node
 * @str: string to put in the recent node
 *
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *recent;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	recent = malloc(sizeof(list_t));
	if (!recent)
		return (NULL);

	recent->str = strdup(str);
	recent->len = len;
	recent->next = NULL;

	if (*head == NULL)
	{
		*head = recent;
		return (recent);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = recent;

	return (recent);
}

