#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int j = 0;
	hash_node_t *node;
	char *k, *v;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			k = node->key;
			v = node->value;
			if (j)
				printf(", '%s': '%s'", k, v);
			else
				printf("'%s': '%s'", k, v);
			j = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
