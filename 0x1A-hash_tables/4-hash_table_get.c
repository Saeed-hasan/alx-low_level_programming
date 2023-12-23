#include "hash_tables.h"
/**
 * hash_table_get- fun to get a value of a given key
 * @ht:pointer the the hash table
 * @key: the key of the value
 * Return: pointer to the value we got
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);

	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	node = ht->array[index];

	for (node = ht->array[index]; node != NULL; node->next)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}

	return (NULL);

