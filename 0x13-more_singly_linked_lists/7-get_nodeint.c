#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a list_int linked list.
 * @head: Pointer to the first node.
 * @index: the index of the node to be returned, starting at 0.
 * Return: pointer to the indexth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	node = head;
	for (i = 0; i != index; i++)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
	}
	return (node);
}
