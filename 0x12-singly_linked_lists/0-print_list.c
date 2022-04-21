#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: list to print
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *temp = (list_t *)h;
	int i = 0;

	while (temp)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		i++;
		temp = temp->next;
	}
	return (i);
}
