#include "lists.h"

/**
 * free_listint2 - frees a listint_t list, sets the head to null.
 * @head: double pointer to the first node.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *node;
	node = *head;

	while (node)
	{
		temp = node->next;
		free(node);
		node = temp;
	}
	head = NULL;
}
