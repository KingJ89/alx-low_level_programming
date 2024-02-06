#include "hash_tables.h"


/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: the key we are looking for
 * Return: the value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	if (!ht || !key || !*key)
		return(NULL);

	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return(NULL);
	for (hash_node_t *node = ht->array[index]; node; node = node->next)
	{if (strcmp(node->key, key) == 0)
		return(node->value);
	}

	return(NULL);
}
