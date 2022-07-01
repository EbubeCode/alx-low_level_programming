#include "hash_tables.h"

/**
 * check_empty - checks for empty string
 * @str: string
 *
 * Return: 1 if empty else 0
 */
int check_empty(const char *str)
{
	int i = 0;

	if (str == NULL)
		return (1);
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\n')
			return (0);
		i++;
	}
	return (1);
}

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

	if (ht == NULL || check_empty(key))
		return (0);

	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
		return (0);
	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	index_node = ht->array[index];

	if (index_node != NULL)
		temp->next = index_node;
	ht->array[index] = temp;

	return (1);
}
