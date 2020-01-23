#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add or update
 * @key: string key
 * @value: value to be stored
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;
	unsigned long int hi_key;

	if (ht == NULL || key == NULL)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (value != NULL)
		new_node->value = strdup(value);
	hi_key = key_index((const unsigned char *)key, ht->size);

	if (ht->array[hi_key] == NULL)
		ht->array[hi_key] = new_node;
	else
	{
		temp = ht->array[hi_key];
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (1);
}
