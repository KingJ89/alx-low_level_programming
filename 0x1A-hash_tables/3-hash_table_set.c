#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with a key in a hash table.
 * @ht: Pointer to the hash table.
 * @key: Key to retrieve the value for.
 *
 * Return: Value associated with the key, or NULL if not found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	if (!ht || !key || !*key)
        return NULL;

    unsigned long int index = key_index((const unsigned char *)key, ht->size);
    if (index >= ht->size)
        return NULL;

    for (hash_node_t *node = ht->array[index]; node; node = node->next)
        if (strcmp(node->key, key) == 0)
            return node->value;

    return NULL;
}

