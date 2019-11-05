#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t linked list.
 * @head: pointer to the first node
 * @n: the int to be stored in the new node.
 * Return: pointer to the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *list_temp;

	if (*head == NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = (int)n;
		new->next = NULL;
		*head = new;
		return (new);
	}

	if (*head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = (int)n;
		new->next = NULL;

		list_temp = *head;
		while (list_temp->next)
			list_temp = list_temp->next;
		list_temp->next = new;
	}
	return (new);
}
