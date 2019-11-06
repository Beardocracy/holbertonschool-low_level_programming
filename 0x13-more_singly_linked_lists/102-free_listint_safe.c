#include "lists.h"

/**
 * loop_cutter - sets the next value of the node before the loop return to NULL
 * @loop: the node where the loop begins
 */
void loop_cutter(listint_t *loop)
{
	listint_t *follow = loop;
	listint_t *lead = loop->next;

	while (lead != loop)
	{
		lead = lead->next;
		follow = follow->next;
	}
	follow->next = NULL;
}

/**
 * free_listint_safe - frees a listint_t list, even if it loops.
 * @h: double pointer to the head of the list.
 * Return: the number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *head, *loop, *temp;

	head = *h;
	loop = check_loop_start(head);
	if (loop)
		loop_cutter(loop);
	while (head)
	{
		temp = head->next;
		free(head);
		count++;
		head = temp;
	}
	return (count);
}
