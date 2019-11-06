#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: double pointer to the first node.
 * Return: pointer to the first node of the reversed loop.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *bottom;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);

	bottom = (*head)->next;
	(*head)->next = NULL;
	while (bottom)
	{
		temp = bottom->next;
		bottom->next = *head;
		*head = bottom;
		bottom = temp;
	}
	return (*head);
}
