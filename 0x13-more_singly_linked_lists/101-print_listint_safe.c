#include "lists.h"

/**
 * loop_start - determines the loop point.
 * @p: pointer to where the tortoise and the hare met up.
 * @head: pointer to the first node.
 * Return: the loop node.
 */
listint_t *loop_start(listint_t *p, listint_t *head)
{
	listint_t *q = head;

	while (p != q)
	{
		p = p->next;
		q = q->next;
	}
	return (p);
}

/**
 * check_loop_start - checks a listint_t list for loops.
 * @head: the first node
 * Return: a pointer to the node loop.
 */
listint_t *check_loop_start(listint_t *head)
{
	listint_t *p = head;
	listint_t *q = head;

	while (p && q && q->next)
	{
		p = p->next;
		q = q->next->next;
		if (p == q)
			return (loop_start(p, head));
	}
	return (NULL);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the first node.
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *temp, *loop;
	size_t count = 0, flag = 0;

	if (head == NULL)
		return (0);

	temp = (listint_t *)head;
	loop = check_loop_start(temp);
	if (loop)
	{
		while (flag < 2)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			count++;
			temp = temp->next;
			if (temp == loop)
				flag++;
		}
		printf("-> [%p] %d\n", (void *)loop, loop->n);
		return (count);
	}
	if (!loop)
	{
		while (temp)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			count++;
			temp =  temp->next;
		}
		return (count);
	}
	exit(98);
}
