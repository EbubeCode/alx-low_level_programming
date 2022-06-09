#include "lists.h"

/**
 * dlistint_len - counts all the nodes of a dlistint_t list
 * @h: head of the list
 *
 * Return: number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;
	dlistint_t *current;

	if (h == NULL)
		return (size);
	current = (dlistint_t *) h;
	while (current != NULL)
	{
		current = current->next;
		size++;
	}
	return (size);
}
