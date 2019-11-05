#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list, returns the nodes
 * data.
 * @head: Double pointer to the first node of the list.
 * Return: the data from the head node. 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head)
		return (0);

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
