#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array
 * Return: if error, NULL,oterwise - pointer to new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int j;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if  (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	for (j = 0; j < size; j++)
		ht->array[j] = NULL;
	return (ht);
}
