#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: double pointer to the head
 * @str: the string to be added
 * Return: address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;
	new->len = len;

	new->str = strdup(str);
	new->next = *head;
	*head = new;
	return (new);

}
