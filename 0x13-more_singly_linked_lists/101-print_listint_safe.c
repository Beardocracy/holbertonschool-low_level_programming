#include "lists.h"
#include <string.h>

/**
 * repeat_number_checker - adds a number to a linked list, if not a
 * repeat.
 * @head: double pointer to a listint_u linked list.
 * @n: the number to be checked and added.
 * Return: Pointer to the head of the list. NULL if there is a match.
 */
listint_u *repeat_number_checker(listint_u **head, unsigned long int n)
{
	listint_u *new, *loop;

	loop = *head;
	while (loop != NULL)
	{
		if (n == loop->n)
		{
			*head = NULL;
			return (NULL);
		}
		loop = loop->next;
	}

	new = malloc(sizeof(listint_u));
	if (new == NULL)
		exit(98);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the first node.
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *temp, *temp2;
	listint_u *loop_list;
	size_t count = 0;

	if (head == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	temp = (listint_t *)head;
	temp2 = temp;
	loop_list = malloc(sizeof(listint_u *));
	if (loop_list == NULL)
		exit(98);
	loop_list = NULL;
/*	while (temp2)
	{
		repeat_number_checker(&loop_list, (unsigned long int)temp2);
		temp2 = temp2->next;
	}

	while (loop_list)
	{
		printf("%lu\n", loop_list->n);
		loop_list = loop_list->next;
	}
*/
	while (temp)
	{
		repeat_number_checker(&loop_list, (unsigned long int)temp);
		if (loop_list == NULL)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			return (count);
		}
		if (loop_list)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			count++;
		}
		temp = temp->next;
	}
/*	while (loop_list)
	{
		printf("%lu\n", loop_list->n);
		loop_list = loop_list->next;
	}
*/	printf("-----------\n");
	if (loop_list == NULL)
		printf("-> [%p] %d\n", (void *)temp, temp->n);
	return (count);
}
