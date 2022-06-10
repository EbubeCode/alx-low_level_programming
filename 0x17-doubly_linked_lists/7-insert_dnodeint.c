#include "lists.h"

/**
 * add_bg - add a new node at the beginning of a dlistint_t list
 * @head: pointer to pointer of the head node
 * @n: the item for the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_bg(dlistint_t **head, const int n)
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

/**
 * add_end - add a new node at the end of a dlistint_t list
 * @head: pointer to pointer of the head node
 * @n: the item for the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_end(dlistint_t **head, const int n)
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


/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the pointer to the head of the list
 * @idx: index position for the new node
 * @n: content of the new node
 *
 * Return: address of the new node or else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *tmp;
	unsigned int i = 1;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_bg(h, n));
	tmp = *h;
	while (tmp != NULL && tmp->next != NULL && i < idx)
	{
		tmp = tmp->next;
		i++;
	}
	if (i != idx || tmp == NULL)
		return (NULL);
	if (tmp->next == NULL)
		return (add_end(h, n));
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = tmp->next;
	node->prev = tmp;
	tmp->next = node;
	tmp = node->next;
	tmp->prev = node;
	return (node);
}
