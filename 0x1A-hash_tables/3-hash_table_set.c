#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
/**
 * *hash_table_set - add an elem to the hash table
 * create_and_add_node - malloc, set values, and insert node into hash table
 * @ht: hash table
 * @key: key; can't be empty string
 * @value: value
 * Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL;
	unsigned long int index, size;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	size = ht->size;
	index = key_index((const unsigned char *)key, size);

	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}
	else
	{
		node = malloc(sizeof(hash_node_t));
		if (node == NULL)
		{
			return (0);
		}
		else
		{
			node->key = strdup(key);
			node->value = strdup(value);
			node->next = ht->array[index];
			ht->array[index] = node;
		}
		return (1);
	}
}
