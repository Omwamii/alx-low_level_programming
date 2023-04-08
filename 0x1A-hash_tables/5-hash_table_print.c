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
	int set = 0; /* variable to check if array is empty */

	if (ht == NULL)
		exit(EXIT_SUCCESS);

	printf("{");
	for (; i < ht->size; i++)
	{
		set = 0;
		tmp = ht->array[i];
		while (tmp)
		{
			set = 1;
			printf("'%s': '%s'", tmp->key, tmp->value);
			if (tmp->next)
				printf(", ");
			tmp = tmp->next;
		}
		if (i != (ht->size) - 1 && set)
			printf(", ");

	}
	printf("}\n");
}
