#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: list to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *temp = (listint_t *)h;
	int i = 0;

	while (temp)
	{
		printf("%d\n", temp->n);
		i++;
		temp = temp->next;
	}
	return (i);
}
