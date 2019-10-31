#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to a list_t struct.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	unsigned long int n = 0;
	list_t *list_pointer;

	list_pointer = (list_t *)h;

	while (list_pointer)
	{
		if (list_pointer->str == NULL)
			printf("[%u] (nil)\n", list_pointer->len);
		else
			printf("[%u] %s\n", list_pointer->len, list_pointer->str);
		n++;
		list_pointer = list_pointer->next;
	}
	return (n);
}
