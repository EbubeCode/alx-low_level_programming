#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list
 * @head: pointer to pointer of the head node
 * @n: the item for the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h = NULL, *temp;

	if (head == NULL)
		return (NULL);
	h = malloc(sizeof(dlistint_t));
	if (h == NULL)
		return (NULL);
	temp = *head;
	h->n = n;
	h->prev = NULL;
	h->next = temp;
	if (temp != NULL)
		temp->prev = h;
	*head = h;

	return (h);
}
