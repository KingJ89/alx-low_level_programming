#include "hash_tables.h"

/**
 * key_index - get the index for key in hash table
 * @key: key for which to detrmine index.
 * @size: size of has table.
 * Return: index the key should be stored in.
 * djb2 algorithm is for hashing.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
