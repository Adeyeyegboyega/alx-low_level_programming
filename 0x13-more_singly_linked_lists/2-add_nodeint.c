#include "lists.h"

/**
 * add_nodeint - adds new node
 * @head: pointer for first node
 * @n: data inserted in new node
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *recent;

	recent = malloc(sizeof(listint_t));
	if (!recent)
		return (NULL);

	recent->n = n;
	recent->next = *head;
	*head = recent;

	return (recent);
}

