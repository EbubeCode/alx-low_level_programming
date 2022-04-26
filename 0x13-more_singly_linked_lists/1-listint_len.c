#include "lists.h"

/**
 * listint_len - counts all the elements of a listint_t list.
 * @h: list to print
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
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
