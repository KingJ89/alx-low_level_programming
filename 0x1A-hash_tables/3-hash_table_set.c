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
        return(0);

    unsigned long int index = key_index((const unsigned char *)key, ht->size);
    if (index >= ht->size)
        return(0);
    
    for (hash_node_t *node = ht->array[index]; node; node = node->next)
    {
        if (strcmp(node->key, key) == 0)
            return(!node->value);

    return(0);
    return(1);
    }
}

/*Creates new node */
hash_node_t *new_node = malloc(sizeof(hash_node_t));
if (!new_node->key)
{
	free(new_node);
	return(0);
}

new _node->value = strdup(value);
if (!new_node->value)
{
	free(new_node->key);
	free(new_node);
	return(0);

}

/*inserts new node at beggining of the list */
new_node->next = ht->array[index];
ht->array[index] = new_node;

return(1);

