#include "hash_tables.h"

/**
 * to_ascii - convert string to ascii value
 * @str: string to be converted
 *
 * Return: ascii value
 */
int to_ascii(char *str)
{
	int asc = 0, i = 0;

	if (str == NULL)
		return (0);
	while (str[i])
	{
		asc += str[i];
		i++;
	}
	return (asc);
}

/**
 * insert_sorted - inserts node to sorted list
 * @table: ptr to table
 * @node: node to be inserted
 */
void insert_sorted(shash_table_t **table, shash_node_t *node)
{
	shash_node_t *tmp;

	if (*table == NULL || table == NULL)
		return;
	if ((*table)->shead == NULL) /* first item in sorted list */
	{
		node->sprev = NULL, node->snext = NULL;
		(*table)->shead = node;
		(*table)->stail = node;
		return;
	}
	/* node is not the first item */
	tmp = (*table)->shead;
	while (tmp)
	{
		if (to_ascii(node->key) < to_ascii(tmp->key))
		{
			if (tmp->sprev == NULL) /* insert at beginning */
			{
				tmp->sprev = node;
				node->snext = tmp, node->sprev = NULL;
				(*table)->shead = node;
				return;
			}
			/* isert in-between */
			tmp->sprev->snext = node;
			node->sprev = tmp->sprev;
			node->snext = tmp, tmp->sprev = node;
			return;
		}
		if (tmp->snext == NULL) /*insert at end */
		{
			tmp->snext = node;
			node->sprev = tmp, node->snext = NULL;
			(*table)->stail = node;
			return;
		}
		tmp = tmp->snext;
	}
}

/**
 * shash_table_create - create hash table (php style)
 * @size: size of hash table
 *
 * Return: ptr to created hash table or NULL if fail
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = NULL;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = calloc(size, sizeof(shash_node_t *));
	if (table->array == NULL)
		return (NULL);
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}

/**
 * shash_table_set - sets element in hash table
 * @ht: ptr to head of hash table
 * @key: key
 * @value: value of key
 *
 * Return: 1 if success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node = NULL, *tmp = NULL, *it = NULL;
	unsigned long int index;
	char *val;

	if (key == NULL || ht == NULL || *key == '\0' || value == NULL)
		return (0);

	val = strdup(value);
	if (!val)
		return (0);

	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
	{
		free(val);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(val);
		free(node);
	}

	node->next = NULL;
	tmp = ht->array[index];
	it = tmp; /* to check if key present with diff value */
	if (tmp == NULL) /* no item */
	{
		ht->array[index] = node;
		node->value = val;
		insert_sorted(&ht, node);
		return (1);
	}
	while (it) /* update existing key */
	{
		if (strcmp(it->key, key) == 0)
		{
			free(it->value);
			it->value = val;
			/* no need to insert in sorted since was already present */
			return (1);
		}
		it = it->snext;
	}
	node->next = tmp;
	node->value = val;
	insert_sorted(&ht, node);
	ht->array[index] = node;
	return (1);
}

/**
 * shash_table_get - gets item from the hash table
 * @ht: ptr to hash table
 * @key: key
 *
 * Return: value of key or NULL if fail
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *tmp = NULL;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

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

/**
 * shash_table_print - prints hash table based on sorted list (forward)
 * @ht: pointer to hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp = NULL;

	if (ht == NULL || ht->shead == NULL)
		return;

	tmp = ht->shead;
	printf("{");
	while (tmp)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->snext;
		if (tmp)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints hash table in reverse
 * @ht: pointer to hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp = NULL;

	if (ht == NULL || ht->stail == NULL)
		return;

	tmp = ht->stail;
	printf("{");
	while (tmp)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->sprev;
		if (tmp)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes hash table
 * @ht: pointer to hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp, *curr;

	if (ht == NULL)
		return;
	tmp = ht->shead;

	/* free all nodes via sorted list */
	while (tmp)
	{
		curr = tmp->snext;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
		tmp = curr;
	}
	free(ht->array);
	free(ht);
}
