#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: ptr to hashtable
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp = NULL;
	int set = 0; /* check if array is empty */

	if (ht == NULL)
		return;

	printf("{");
	for (; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			set += 1;
			if (set > 1) /* no , before first item */
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			if (tmp->next != NULL)
				printf(", ");
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
