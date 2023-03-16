#include "lists.h"

/**
 * add_dnodeint - add node at beginning
 * @head: list head
 * @n: node data
 *
 * Return: address of element or null if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (tmp == NULL) /* list empty */
	{
		new->next = NULL;
		new->prev = NULL;
		new->n = n;
		*head = new;
	}
	else
	{
		new->next = tmp;
		new->prev = NULL;
		new->n = n;
		tmp->prev = new;
		*head = new;
	}

	return (new);
}
