#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - returns the length of a doubly linked list.
 * @h: pointer to the head of the list.
 * Return: the size of the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
