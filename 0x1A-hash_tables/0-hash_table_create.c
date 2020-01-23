#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created array.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t *) * size);
	if (new == NULL)
		return (NULL);

	return (new);
}

