#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a list_t list.
 * @head: pointer to the head of the list
 * @str: string in the array
 *
 * Return: head of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *end = *head;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;

	if (end == NULL)
		*head = temp;
	else
	{
		while (end->next != NULL)
			end = end->next;
		end->next = temp;
	}
	return (temp);
}
