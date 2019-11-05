#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list.
 * @h: pointer to the first element.
 * Return: the number of elements.
 */
size_t listint_len(const listint_t *h)
{
	listint_t *list_temp;
	size_t count = 0;

	if (h == NULL)
		return (0);
	list_temp = (listint_t *)h;

	while (list_temp)
	{
		count++;
		list_temp = list_temp->next;
	}
	return (count);
}
