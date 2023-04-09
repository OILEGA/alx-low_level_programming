#include "hash_tables.h"

/**
 * key_index - The key_index gives us the index of a key
 * @key: This is the key to which we are getting the index for
 * @size: size of the hash table
 *
 * Return: index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
