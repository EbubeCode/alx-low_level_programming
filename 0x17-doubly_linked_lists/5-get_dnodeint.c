#include "lists.h"

/**
 * get_dnodeint_at_index - locates a node at the given index
 * @head: pointer to the head of the list
 * @index: index of the node to locate
 *
 * Return: the located node else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 1;

	if (head == NULL)
		return (NULL);
	while (head != NULL && i <= index)
	{
		head = head->next;
		i++;
	}
	i--;
	if (i != index)
		return (NULL);
	return (head);
}
