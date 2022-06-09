#include "lists.h"

/**
 * free_dlistint - frees the memory help by a dlistint list
 * @head: pointer to head of list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
