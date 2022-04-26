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
 * insert_nodeint_at_index - inserts a node at an index
 * @head: pointer to the head of the list
 * @idx: index to add the index
 * @n: data to put into the node
 *
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head,
		unsigned int idx, int n)
{
	listint_t  *prev, *current, *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	i = len(*head);

	if (i < idx)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	i = 0;
	current = *head;
	while (i < idx)
	{
		prev = current;
		current = current->next;
		i++;
	}
	temp->n = n;
	temp->next = current;
	if (idx == 0)
		*head = temp;
	else
		prev->next = temp;

	return (temp);
}

