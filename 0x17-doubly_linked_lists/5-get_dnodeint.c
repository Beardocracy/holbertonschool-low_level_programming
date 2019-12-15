#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head of the list.
 * @index: the index of the node to return.
 * Return: pointer to the nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
