#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t list.
 * @head: Pointer to the first node.
 * Return: the sum of the elements of all nodes. Or 0, if list is empty.
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int count = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp)
	{
		count += temp->n;
		temp = temp->next;
	}
	return (count);
}
