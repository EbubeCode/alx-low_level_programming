#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the beginning of a
 * listint_t list.
 * @head: pointer to the head of the list
 * @n: integer in the structure
 *
 * Return: head of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *end = *head;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
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
