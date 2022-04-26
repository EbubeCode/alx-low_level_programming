#include "lists.h"

/**
 * free_listint - frees a  list.
 * @head: pointer to the head of the list
 *
 * Return: head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
