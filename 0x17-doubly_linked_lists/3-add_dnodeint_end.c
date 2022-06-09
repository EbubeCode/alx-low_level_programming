#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a dlistint_t list
 * @head: pointer to pointer of the head node
 * @n: the item for the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h = NULL, *temp;

	if (head == NULL)
		return (NULL);
	h = malloc(sizeof(dlistint_t));
	if (h == NULL)
		return (NULL);
	temp = *head;
	while (temp != NULL && temp->next != NULL)
		temp = temp->next;
	h->n = n;
	h->next = NULL;
	h->prev = temp;
	if (temp != NULL)
		temp->next = h;
	else
		*head = h;

	return (h);
}
