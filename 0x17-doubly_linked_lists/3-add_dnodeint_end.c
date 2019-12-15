#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node to the end of a doubly linked list
 * @head: double pointer to the head of the list
 * @n: the number the new node will contain.
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp != NULL)
	{
		if (temp->next == NULL)
		{
			temp->next = new;
			new->prev = temp;
			return (new);
		}
		temp = temp->next;
	}
	return (new);
}
