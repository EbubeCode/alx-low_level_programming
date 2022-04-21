#include "lists.h"

/**
 * list_len - = counts all the elements of a list_t list.
 * @h: list to print
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	list_t *temp = (list_t *)h;
	int i = 0;

	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
