#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Double pointer to the first node of the list.
 * @n: The number to be stored in the new node.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = (int)n;
	new->next = *head;
	*head = new;

	return (new);
}
