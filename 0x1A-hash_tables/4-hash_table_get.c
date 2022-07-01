#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value for a key
 * @ht: hash table
 * @key: key
 *
 * Return: value for key or NULL
 */
char *hash_table_get(const hash_table_t *ht,
				const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || check_empty(key))
		return (NULL);
	index = key_index((const unsigned char *)key,
					ht->size);
	node = ht->array[index];
	if (node == NULL)
		return (NULL);
	while (node)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
