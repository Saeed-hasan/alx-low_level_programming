#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * hash_table_print-print all the hash table
 * @ht:pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	char *spliter;

	if (ht != NULL)
		return;
	putchar('{');

	for (i = 0; i < ht->size; i++)
	{
		for (node = ht->array[i]; node != NULL; node = node->next)
		{
			printf("%s'%s':'%s'", node->key, node->value, spliter);
			spliter = ", ";
		}
	}
	puts("}");
}
