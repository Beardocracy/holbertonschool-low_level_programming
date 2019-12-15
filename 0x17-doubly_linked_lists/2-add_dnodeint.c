#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list.
 * @head: double pointer to the head of the list.
 * @n: the number the node will contain.
 * Return: pointer to the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (new);
}
