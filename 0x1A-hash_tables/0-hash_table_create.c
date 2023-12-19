#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create-fun for create hash table
 * @size: size of the table
 * Return: address of the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table = NULL;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	for (; i < size; i++)
		(table->array)[i] = NULL;
	return (table);
}
