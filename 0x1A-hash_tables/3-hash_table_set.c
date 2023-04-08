#include "hash_tables.h"

/**
 * hash_table_set - adds element to hash table
 * @ht: ptr to hashtable
 * @key: key
 * @value: value
 *
 * Return: 1 if sucess 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL, *tmp = NULL;
	unsigned long int index;

	if (key == NULL || ht == NULL || *key == '\0' || value == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	tmp = ht->array[index];
	if (tmp == NULL) /* no item */
	{
		ht->array[index] = node;
		return (1);
	}
	node->next = tmp;
	ht->array[index] = node;
	return (1);
}
