#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key of the element
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht,
				const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp = NULL, *index_node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	
	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
		return (0);
	temp->key = (char *)key;
	temp->value = (char *)value;
	temp->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	index_node = ht->array[index];

	if (index_node != NULL)
		temp->next = index_node;
	ht->array[index] = temp;

	return (1);
}
