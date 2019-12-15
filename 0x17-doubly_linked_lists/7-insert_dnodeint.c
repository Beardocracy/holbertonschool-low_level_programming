#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given index.
 * @h: double pointer to the head of the list.
 * @idx: the index to insert the new node.
 * @n: the value to store in the new node.
 * Return: pointer to the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
			*h->prev = new;
		*h = new;
		return (new);
	}
	temp = *h;
	for (i = 0; temp != NULL; i++, temp = temp->next)
	{
		if (i == idx)
		{
			new->next = temp->next;
			new->prev = temp;
			temp->next = new;
			if (new->next != NULL)
				(new->next)->prev = new;
			return (new);
		}
	}

	return (NULL);
}
