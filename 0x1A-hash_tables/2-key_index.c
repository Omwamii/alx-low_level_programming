#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: key passed
 * @size: size of hashtable array
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	return (index % size);
}
