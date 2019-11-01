#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: a list_t pointer.
 * Return: the number of elements.
 */
size_t list_len(const list_t *h)
{
	list_t *list;
	unsigned long int n = 0;

	list = (list_t *)h;

	while (list)
	{
		n++;
		list = list->next;
	}
	return (n);
}
