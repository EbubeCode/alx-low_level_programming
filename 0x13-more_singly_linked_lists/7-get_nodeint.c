#include "lists.h"

/**
 * get_nodeint_at_index - return the node at that index
 * @head: pointer to the head of the list
 * @index: index to be found
 *
 * Return: pointer of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head && i < index)
	{
		i++;
		head = head->next;
	}

	if (i < index)
		return (NULL);
	return (head);
}
