#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of the list
 *
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;
	dlistint_t *current;

	if (h == NULL)
		return (size);
	current = (dlistint_t *) h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		size++;
	}
	return (size);
}
