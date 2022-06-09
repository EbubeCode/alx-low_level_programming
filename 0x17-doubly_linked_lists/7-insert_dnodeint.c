#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the pointer to the head of the list
 * @idx: index position for the new node
 * @n: content of the new node
 *
 * Return: address of the new node or else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *tmp;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	tmp = *h;
	while (tmp != NULL && i < idx)
	{
		tmp = tmp->next;
		i++;
	}
	if (i != idx)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (tmp != NULL)
	{
		node->next = tmp;
		node->prev = tmp->prev;
		tmp->prev = node;
		tmp = node->prev;
		tmp->next = node;
	}
	return (node);
}
