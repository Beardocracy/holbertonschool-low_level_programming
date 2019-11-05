#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elements of a listint_t linked list.
 * @h: pointer to the head of the linked list.
 * Return: the number of nodes printed.
 */
size_t print_listint(const listint_t *h)
{
	listint_t *list_temp;
	size_t count = 0;

	if (h == NULL)
		return (0);
	list_temp = (listint_t *)h;

	while (list_temp)
	{
		printf("%d\n", list_temp->n);
		count++;
		list_temp = list_temp->next;
	}
	return (count);
}
