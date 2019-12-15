#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node from a double linked list at index
 * @head: double pointer to the head of the list.
 * @index: the index to delete.
 * Return: 1 if success, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		if (temp->next == NULL)
		{
			*head = NULL;
			free(temp);
			return (1);
		}
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; temp != NULL; i++, temp = temp->next)
	{
		if (i == index)
		{
			temp->prev->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
	}
	return (-1);
}
