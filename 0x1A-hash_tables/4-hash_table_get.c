#include "hash_tables.h"

/**
 * hash_table_get - gets value of key
 * @ht: hash table ptr
 * @key: key passed
 *
 * Return: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *tmp = NULL;

	if (ht == NULL)
		return (NULL);

	if (index > ht->size) /* out of bounds */
		return (NULL);

	tmp = ht->array[index];
	if (tmp == NULL) /* no value set */
		return (NULL);

	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
