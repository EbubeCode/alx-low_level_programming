#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at the given index
 * @head: pointer to the pointer to the head of list
 * @index: index of node to be deleted
 *
 * Return: 1 if success else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 1;
	dlistint_t *tmp = NULL, *node = NULL;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (tmp != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL || tmp->next == NULL)
		return (-1);
	node = tmp->next;
	tmp->next = node->next;
	tmp = node->next;
	if (tmp != NULL)
		tmp->prev = node->prev;
	free(node);
	return (1);
}
