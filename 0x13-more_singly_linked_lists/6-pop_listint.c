#include "lists.h"

/**
 * pop_listint - delete the head node of a listint_t
 * @head: pointer to the head of the list
 *
 * Return: node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL)
		return (0);

	if (*head == NULL)
		return (0);

	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;

	return (n);
}
