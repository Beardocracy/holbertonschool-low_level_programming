#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created array.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	hash_node_t *node_ptrs;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->size = size;

	node_ptrs = malloc(sizeof(hash_node_t *) * size);
	if (node_ptrs == NULL)
	{
		free(new);
		return (NULL);
	}
	new->array = &node_ptrs;

	return (new);
}
