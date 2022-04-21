#include "lists.h"

/**
 * free_list - frees a  list.
 * @head: pointer to the head of the list
 *
 * Return: head of the list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		free(head->str);
		temp = head->next;
		free(head);
		head = temp;
	}
}
