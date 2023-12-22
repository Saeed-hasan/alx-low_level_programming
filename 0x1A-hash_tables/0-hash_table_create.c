#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create-fun for create hash table
 * @size: size of the table
 * Return: address of the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	hash_node_t **array;
	unsigned long int i;

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
			array[i] = NULL;
	}

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		free(array);
		return (NULL);
	}

	new_table->size = size;
	new_table->array = array;
	return (new_table);
}

