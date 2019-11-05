#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index.
 * @head: double pointer to first node.
 * @index: the index to delete.
 * Return: 1 if successful, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	node = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}
	for (i = 1; i < index; i++)
	{
		if (node == NULL)
			return (-1);
		node = node->next;
	}
	temp = (node->next)->next;
	free(node->next);
	node->next = temp;
	return (1);
}
