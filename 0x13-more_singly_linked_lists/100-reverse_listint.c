#include "lists.h"

/**
 * reverse_listint - reverses a listint_l linked list
 * @head: pointer to the head of the list
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	current = *head;
	next = current->next;
	current->next = NULL;
	while (next)
	{
		prev = current;
		current = next;
		next = current->next;
		current->next = prev;
	}
	*head = current;

	return (current);
}
