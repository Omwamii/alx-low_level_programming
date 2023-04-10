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
	hash_node_t *node = NULL, *tmp = NULL, *it = NULL;
	unsigned long int index;
	char *val;

	if (key == NULL || ht == NULL || *key == '\0' || value == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	val = strdup(value);
	node->key = strdup(key);
	node->next = NULL;

	tmp = ht->array[index];
	it = tmp; /* to check if key present with diff value */
	if (tmp == NULL) /* no item */
	{
		ht->array[index] = node;
		node->value = val;
		return (1);
	}
	while (it) /* update existing key */
	{
		if (strcmp(it->key, key) == 0)
		{
			free(it->value);
			it->value = val;
			return (1);
		}
		it = it->next;
	}
	node->next = tmp;
	node->value = val;
	ht->array[index] = node;
	return (1);
}
