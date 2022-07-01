#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table.
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			free(node->key);
			free(node->value);
			tmp = node->next;
			free(node);
			node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
