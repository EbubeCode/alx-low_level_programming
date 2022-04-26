#include "lists.h"

/**
 * sum_listint - sums all the data in the nodes of a list
 * @head: pointer to the head of the list
 *
 * Return: sum of the data(n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
