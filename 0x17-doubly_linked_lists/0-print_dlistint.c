#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dlistint - prints a doubly linked list
 * @h: pointer to the head of the list
 * Return: the number of nodes printed.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
