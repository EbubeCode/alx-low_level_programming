#include "hash_tables.h"


/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table or Null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	hash_node_t **arr = NULL;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	if (size != 0)
	{
		arr = malloc(sizeof(hash_node_t *) * size);
		if (arr == NULL)
		{
			free(table);
			return (NULL);
		}
	}
	table->size = size;
	table->array = arr;

	return (table);
}
