#include "lists.h"

/**
 * fill_data - creates mem and fills a list_t with the string data.
 * @str: the string to be put into list_t
 * Return: pointer to new list_t
 */
list_t *fill_data(const char *str)
{
	unsigned int i;
	list_t *fill;

	fill = malloc(sizeof(list_t));

	if (fill == NULL)
		return (NULL);

	if (str == NULL)
		fill->str = strdup("(nil)");
	else
		fill->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		;
	fill->len = i;

	return (fill);

}


/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: double pointer to a list_t struct.
 * @str: the string that will be added.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tail;


	if (*head == NULL)
	{
		new = fill_data(str);
		if (new == NULL)
			return (NULL);
		*head = new;
		return (new);
	}

	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;
	new = fill_data(str);
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	tail->next = new;

	return (new);
}
