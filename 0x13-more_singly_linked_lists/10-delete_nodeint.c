#include "lists.h"

/**
 * len - counts all the elements of a listint_t list.
 * @h: list to print
 *
 * Return: the number of nodes
 */
unsigned int len(const listint_t *h)
{
	 listint_t *temp = (listint_t *)h;
	int i = 0;

	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

/**
 * delete_nodeint_at_index - deletes the node at index of a list
 * @head: pointer to the head of the list
 * @idx: index to add the index
 *
 * Return: 1 if successful else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	listint_t  *prev, *current;
	unsigned int i;

	if (head == NULL)
		return (-1);
	i = len(*head);
	if (i == 0 || i < idx)
		return (-1);
	i = 0;
	current = *head;
	while (i < idx)
	{
		prev = current;
		current = current->next;
		i++;
	}
	if (idx == 0)
		*head = current->next;
	else
		prev->next = current->next;

	free(current);
	return (1);
}

