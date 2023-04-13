#include "hash_tables.h"

/**
 * key_index - Get the index at which a key/value pair
 * @key: the key to get the index
 * @size: the size of the array of the hash table
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
