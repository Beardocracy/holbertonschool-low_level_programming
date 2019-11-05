#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given index position.
 * @head: double pointer to the first node in the linked list.
 * @idx: the index of where the new node should be added.
 * @n: the value to be stored in the new node.
 * Return: address of the new node, or NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *head;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; i + 1 != idx; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
