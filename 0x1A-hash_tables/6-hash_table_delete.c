#include "hash_tables.h"

/**
 * free_item - frees a node and its data
 * @node: node to be deleted
 */
void free_item(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * free_list - frees a linked list
 * @head: head to list
 */
void free_list(hash_node_t *head)
{
	hash_node_t *tmp = head, *next;

	while (tmp)
	{
		next = tmp->next;
		free_item(tmp);
		tmp = next;
	}
}
/**
 * hash_table_delete - deletes hash table
 * @ht: ptr to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head = NULL;

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		if (head != NULL)
			free_list(head);
	}

	free(ht->array);
	free(ht);
}
